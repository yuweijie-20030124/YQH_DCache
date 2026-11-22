# DCache 验证环境架构约束

状态：2026-11-17 更新；首轮 Load 用例迁移已实现并验证，代码待 review。

本文约束 `sim/regress` 验证环境的角色、边界和推进方式。当前采用“理想 LSU + 可替换 L2 + 测试内检查”。独立 reference/scoreboard 已决定删除，具体迁移见 [06_simple_tests_and_replaceable_l2.md](06_simple_tests_and_replaceable_l2.md)。

## 1. 验证环境角色

验证环境由以下角色组成：

- `simCPU`：模拟 CPU/LSU，产生 DCache 上游请求，处理 DCache 的 miss、replay、refill wakeup 和最终响应。
- `simL2Cache`：模拟 L2、后备内存和主动 Probe，处理 DCache 的 Compact-CHI 通道。
- `tests`：各用例直接提交操作、保存少量期望值并检查公开握手和完成结果；不建理想 DCache。
- `simLDCache`：旧 reference/scoreboard 的四个实现文件已删除，不再作为环境角色。
- `common`：保存公共事务类型、cache line 数据类型、七通道 `DCacheL2Link`、地址工具和 DUT adapter。
- `main.cpp`：测试选择和最终结果输出。
- `simulation.h/.cpp`：实例化对象、内存准备、reset、时钟推进、边沿快照和排空。

## 2. 角色边界

`simCPU` 不维护 DCache 的 tag、meta、way、MSHR 或 bank 状态。

`simL2Cache` 维护自己的后备内存和 CHI 事务状态。测试保存初始化数据的期望副本，不从 L2 的返回数据或可变内存生成正确答案。

测试观察公开 CPU/CHI 快照，用本用例的步骤、期望值和计数判断结果；不建立独立参考内存、缓存权限表或通用事务数据库。

模型之间通过明确的事件和普通数据结构通信，不直接互相访问内部成员。
理想 L2 和真实 L2 RTL adapter 通过同一个 `DCacheL2Link` 七通道边界连接 DCache；字段位宽、地址编码、ID 含义和握手规则以项目 Compact-CHI Bundle 为准。L2 模型不依赖 `DutInputs`/`DutOutputs` 或 `VDCache` 类型。测试通过运行器准备内存，不依赖具体 L2 类；真实 L2 的时钟和下游内存环境需要在接入时适配。

## 3. 最小闭环

已有第一个可运行闭环只覆盖（历史首版范围）：

```text
单个冷地址 Load
    -> DCache 接收 CPU 请求
    -> DCache 报告 miss/handled
    -> DCache 发出 ReadShared TXREQ
    -> L2 返回一条 64 B cache line 的两拍 RXDAT
    -> DCache 完成 refill 相关处理
    -> CPU 根据 DCache 的 replay/refill 通知重新发起 Load
    -> DCache 命中并返回正确数据
```

原 Load 首版未加入以下内容；当前下一步 CMO 范围见 05 文档：

- Store；
- Atomic；
- CMO；
- 主动 Probe；
- 多个 CPU 请求；
- 随机 backpressure；
- 随机测试；
- 复杂的 replacement 检查。

## 4. `single_load_miss` 初始场景约束

测试场景使用一个固定、对齐的物理地址 `A`。开始测试时，DCache 中不应有有效的 `A` 对应 cache line。

测试为 `A` 准备确定的 64 B 初始数据，将副本写入下游内存，并保存自己的期望副本。最终比较不读取 L2 内部的可变数据对象。

场景只允许一个 CPU Load 在途。第一版不加入 Probe、Store 或其他会改变 `A` 的事件。

## 5. 最小事件时间线草案

以下是行为顺序，不是精确 cycle 约束：

1. 仿真复位，DUT、CPU model、L2 model 和测试用例清空活动状态。
2. CPU model 准备一个 Load `A`，等待 `io_load_0_req_ready` 后完成请求握手。
3. 测试保存这一次 Load 的地址、期望数据和完成计数。
4. DCache 返回 Load 的中间结果，表明该访问未立即命中并进入 miss 处理；CPU model 不把它当作最终 Load 完成。
5. DCache 发出对应的 `TXREQ ReadShared(A)`；测试检查地址并记录本笔 `TxnID`。
6. L2 model 接受 TXREQ，从自己的 memory model 读取 line，并准备两拍 `RXDAT`。
7. L2 model 发送 `RXDAT DataID=0` 和 `RXDAT DataID=1`；测试逐拍检查事务关联和数据，并在两拍收齐后检查整条 line。
8. 两拍数据收齐后，DCache 具备发送 `TXRSP CompAck` 的条件；`CompAck` 的握手由测试单独检查。它与 cache line 安装、CPU 唤醒之间不规定固定 cycle 先后。
9. DCache 通过 MainPipe 完成 refill，并决定这条 line 是否安装。正常安装成功时，DCache 通过 `refillWakeup` 通知上游 Load 重发；只有最终没有安装、最终一致性状态为 `I` 或发生相应错误时，才通过 `loadReplay` 通知上游按 miss 重试。
10. CPU model 在 `refillWakeup` 握手后重新发起同一个 Load `A`；第一版把 `loadReplay` 视为不应发生的错误/替代路径并记录。
11. DCache 返回最终 Load 数据；测试将其与自己保存的期望字节比较，并检查只完成一次。
12. 测试结束时，确认没有活动 CPU 操作、CHI 事务、未收齐数据拍或等待中的 DCache 事务。

## 5.1 当前 RTL 对 Load miss 通知的确认

当前 `MissQueue` 的可观察语义如下：

- Load 通过 `missReq` 被 MissQueue 接收或合并后，`LoadPipe` 的上游 response 会以 `handled=1`、`miss=1` 表示该请求已经进入 miss 处理；这不是最终 Load 数据完成。
- `refillDone && installed && hasLoad` 时，MissQueue 产生 `refillWakeup`。这是正常 refill 安装成功后的 Load 重发通知。
- `refillDone && !installed && hasLoad` 时，MissQueue 产生 `loadReplay`。这是最终没有安装 cache line 时的 Load 重试通知。
- `refillWakeup` 和 `loadReplay` 都是 Decoupled 输出，CPU model 必须驱动对应的 `ready`，只有 `valid && ready` 握手后才能把通知视为已消费。
- 正常的 `single_load_miss` 预期看到 `refillWakeup`，不预期看到 `loadReplay`。如果第一版场景看到 `loadReplay`，测试应报告意外的 loadReplay，而不是把它静默当作普通路径。

这一区分来自当前 `MissQueue.scala` 中 `wakeVec`、`replayVec`、`installed` 和 `refillDone` 的组合条件，以及项目上游接口文档。

## 5.2 `single_load_miss` 的两个收敛条件

这个场景需要同时观察两条相对独立的路径：

```text
CHI 数据路径：TXREQ -> RXDAT beat0/beat1 -> TXRSP CompAck
DCache refill 路径：RXDAT 收齐 -> MainPipe 安装 -> refillWakeup -> CPU 重发 -> Load 最终响应
```

`RXDAT` 两拍收齐只说明 MissQueue 的数据 buffer 已经完整，不能单独证明 cache line 已经安装，也不能单独证明 CPU Load 已经完成。

`TXRSP CompAck` 只说明 DCache 对 L2 的数据事务完成了确认，不能单独证明 CPU 已经拿到最终 Load 数据。

因此测试不把 `CompAck` 当作 CPU 完成，也不把 `refillWakeup` 当作 CHI 数据事务完成。两条路径分别检查，最后在测试结束条件处确认它们都已收敛。

## 6. 推进原则

验证环境采用事件驱动的模型推进：

- 每个 cycle 采样 DUT；
- 每次 `valid && ready` 生成握手事件；
- 模型根据事件更新自己的状态；
- 测试在握手、CPU 最终完成和场景结束等边界执行必要检查；公共函数仅检查反压稳定性等局部协议约束。

不再建立 reference。测试步骤直接表达功能预期，不复制 DCache RTL 的流水线、内部队列或权限表。

## 7. 当前推进顺序

```text
迁移 single_load_miss 的用例检查并删除 reference/scoreboard
-> 独立 CmoModel + 理想 L2 CMO/Snoop
-> 干净行 Clean / Flush / Inval 定向测试
-> 根据后续需求扩展 Store、dirty、并发、真实 L2
```

详细文件职责和验收见 06 文档。03 是当前模块契约；04 仅为历史方案；05 已修订为用例内检查，不再要求实现参考模型。
