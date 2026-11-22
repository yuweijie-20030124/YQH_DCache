# 理想 DCache Reference 与 Scoreboard 设计

状态：历史方案，已于 2026-11-17 撤销，不再按本文扩展。

> 最新决定：删除独立 ReferenceModel 和 Scoreboard，由测试用例直接检查。原有四个实现文件已在首轮 Load 检查迁移后删除；本文后续内容仅说明历史设计，不代表当前要求。当前方案见 [06_simple_tests_and_replaceable_l2.md](06_simple_tests_and_replaceable_l2.md)。

## 1. 目标与边界

被测对象是 RTL DCache。Reference 用独立的功能语义判断 DCache 的可观察行为是否正确；Scoreboard 记录并关联实际握手、检查协议和最终结果。二者都不驱动 DUT。

“理想 DCache”不是复制一份 RTL DCache，也不是为了得到期望结果而重新实现其 pipeline。它用软件中较简单的 cache-line/一致性状态描述：在给定 CPU 操作和外部一致性事件后，正确的数据、权限和可观察结果应是什么。

Reference 不复刻以下实现细节：TagArray 的 SRAM 时序、set/way 放置、PLRU、8-bank 仲裁、LoadPipe s0/s1/s2、MSHR 编号与分配、WriteBackQueue 内部槽位。它可以记录抽象的活动操作和物理行状态，但不能以 RTL 内部选择的 way、MSHR 或特定 cycle 作为正确性的必要条件。

Reference 也不模拟 L2 cache。`simL2Cache` 是提供可控内存数据和 Snoop 的环境模型；Reference 必须独立维护期望数据，不读取 L2 的可变 memory map。

## 2. 总体关系

```text
                          ┌────────────────────┐
TestCase ── CPU 操作 ────>│ simCPU / LoadQueue │────> DUT CPU Load 接口
   │                      └────────────────────┘                 │
   │                                                              ▼
   ├── 初始化数据 ───────> simL2Cache ── DCacheL2Link ───────> DCache DUT
   │                           │                                  │
   │                           └── RXSNP 测试事件                 │
   │                                                              │
   └── 独立初始化副本 ───> IdealDCache Reference                  │
                                  ▲                               │
                                  │ 期望状态/期望结果              │ 实际握手快照
                                  └──────── Scoreboard <───────────┘
```

L2 memory 和 Reference 初始内容可以来自同一个测试 fixture，但各自复制数据、独立持有。Reference 不得调用 `L2Model::read_line()`，也不得用 DUT 收到的 RXDAT 覆盖期望值。

## 3. Reference 的状态模型

建议将 Reference 分为两个功能状态表。第一版可由一个 `ReferenceModel` 类统一持有；只有规模需要时再拆文件或类。

### 3.1 参考后备内存

按 64 B 物理行保存期望值：

```text
physical line address -> CacheLine
```

未显式初始化的行可由 fixture/seed 产生确定性内容。测试设置内存时，分别把同一份已知 line 的副本交给 L2 与 Reference；此后不共享可变对象。

### 3.2 抽象 DCache line 状态

按物理 line 地址保存当前 Reference 认为 DCache 可持有的数据和权限：

```text
physical line address -> {data, state}
state ∈ I / SC / UC / UD
```

状态含义采用当前 YQH `MetaState` 的功能映射：I 无有效副本，SC 共享干净，UC 独占干净，UD 独占脏。Reference 不保存 way/set；VIPT alias 可以在操作或 Probe 关联时由 VA 计算，并按当前 Compact-CHI 项目契约检查。

允许增加少量 abstract pending records，例如“该 CPU Load 等待 line A 的 ReadShared 数据”。这些记录用于事务关联和进展检查，不模仿 MSHR 数量、槽位选择或仲裁时序。

### 3.3 状态更新原则

- Reset：清除 DCache 抽象持有状态和活动操作；测试内存初值按 test fixture 生命周期管理，不因 DUT reset 被意外改写。
- 冷 Load 被接受：Reference 记录逻辑操作及期望数据；不因为 DUT 报 miss 就直接相信这个判断。场景可以另外声明“line A 初始为 I，本用例应出现一次 ReadShared”。
- 正常 ReadShared refill：Reference 从自己的后备内存得到期望 line；确认 RXDAT 内容符合期望并观察正常安装唤醒后，将抽象 line 记为 SC。精确何时安装不按固定 cycle 比较。
- Load 最终响应：从 Reference 的 abstract line / reference memory 计算期望值，与 CPU 最终拿到的响应比较。
- 快速 replay：不改变 line 数据或一致性状态，只表示本次尝试未完成；同一逻辑 Load 保持未完成。
- `loadReplay`：表示对应 refill 没安装成功。它与 `refillWakeup` 原因不同；Reference/Scoreboard 应记录场景期望，不得把它静默算成普通的安装成功路径。
- Store / Atomic：后续版本需确定操作的功能完成/可见点，再更新 Reference line 和 architectural memory；不能在请求刚发出时就无条件改写期望值。
- Snoop：Reference 根据测试注入的 Snoop 和 abstract line 数据/状态，计算应有的状态变化及是否应返回脏数据。实际 TXRSP/TXDAT 只作为被比较对象，不反向决定 Reference 的答案。

## 4. Scoreboard 的观察与检查时机

Scoreboard 是检查和关联层，不是第二个 L2，也不是另一个 pipeline。它消费主循环在同一采样边界生成的事件快照，并调用 Reference 查询期望。

| 触发时机 | 检查内容 |
|---|---|
| 每个 cycle 的采样 | 每条 Decoupled 通道在 `valid && !ready` 时，发送端是否保持 valid/payload；reset 期间是否没有非法事务；模型超时计数是否推进 |
| 每次 CPU Load request handshake | 请求 ID、VA/PA、LQ 年龄字段和操作关联是否合法；不把仅被 CPU model 排队当成 DUT 已接收 |
| 每次 Load response handshake | response ID 是否属于当前端口的 InFlight 项；hit、handled/miss、replay 是否互斥且字段一致；handled/miss 只结束本次尝试，不关闭逻辑 Load |
| 每次 TXREQ handshake | opcode、地址、size、节点号及 TxnID 是否合法；用 TxnID 将实际 CHI 事务关联到逻辑 CPU 操作，但不要求特定 MSHR/way/cycle |
| 每次 RXDAT beat handshake | TxnID 是否对应活动读事务；DataID 是否未重复且顺序合法；固定元信息是否一致；beat 数据是否符合独立 Reference line |
| RXDAT 两拍收齐 | 拼出的整条 64 B line 是否等于 Reference 期望值；只有在此后才允许将该事务标记 DataComplete |
| 每次 TXRSP CompAck handshake | DBID 是否与收到的读授权 token 相符；数据事务是否满足可 Ack 条件；只标记 CHI 数据确认完成，不标记 CPU Load 完成 |
| 每次 refillWakeup/loadReplay handshake | MSHR ID、line address、alias 是否能匹配等待中的逻辑 Load；按通知类型分别更新事务和场景统计 |
| CPU Load 最终响应握手 | 数据与 Reference 期望值逐 byte 比较；逻辑操作只能完成一次，且此前确实有对应请求/重试历史 |
| 每次 Probe 与 DCache 回复握手 | RXSNP 字段合法；按 Reference line state/data 判断 SnpResp 或 SnpRespData 的状态、数据和两拍完整性；再更新抽象 line state |
| 测试结束 | 所有逻辑 CPU 操作完成、CHI 事务关闭、RXDAT beat 收齐、通知已消费、Probe 已响应，且 DUT 达到 idle/safe 条件 |

Cycle 级检查只约束接口规则，不要求 Reference 每拍预测 DCache 内部 pipeline。Transaction 级检查完整协议生命周期。CPU 操作级检查最终语义。定向场景可增加明确覆盖断言，例如“冷 Load 必须观察到 ReadShared 和一次 refillWakeup”；这类覆盖预期属于 TestCase/Scoreboard，不应硬编码成所有场景都必须 miss。

## 5. `single_load_miss` 的 Reference 示例

测试 fixture 选择对齐物理行 A 和固定的 64 B pattern `knownLine`，分别复制给 L2 memory 和 Reference backing memory。测试开始前 Reference line A 为 I。

1. CPU model 提交一个 8 B 对齐 Load；Scoreboard 记录逻辑操作 ID 和 Reference 期望数据。
2. 第一次 DCache response 预期为 handled/miss；它不是最终返回值。
3. DCache 发 ReadShared(A)。Scoreboard 检查事务字段，并将 TXREQ TxnID 关联到该逻辑 Load。
4. L2 返回两拍 RXDAT；Scoreboard 每拍检查 handshake、DataID 和字节内容，整行与 `knownLine` 比较。
5. DCache 的 CompAck 独立关闭 CHI 事务；与 refill 安装/wakeup 不比较固定周期先后。
6. 正常路径观察 refillWakeup；CPU 重发同一逻辑 Load，DCache 最终返回数据。
7. Scoreboard 用 Reference 中该物理行和地址 offset 计算期望值，比较最终 CPU 响应，关闭逻辑操作。
8. 测试结束检查 CPU、CHI、通知和 DUT idle 条件全部收敛。

这个用例只需要 Reference memory 与一个很小的抽象 line-state 表；不需要 Reference pipeline、way array 或 MSHR 实现。

## 6. 与 L2 和测试的接口边界

- TestCase 提供初始 line 数据、CPU 操作、Snoop 注入计划和本用例期望事件；它分别初始化 L2 与 Reference，不共享可变内存实例。
- `simL2Cache` 通过 `DCacheL2Link` 驱动七通道环境；L2 只提供数据和按测试安排的 Snoop，不需要模拟 L2 自身 cache hit/miss。
- Reference 只接收测试环境事实、CPU 逻辑操作和被接受的外部一致性事件；不会直接驱动 DCache 或伪造 ready/valid。
- Scoreboard 接收 DCache/L2/CPU 的采样和握手事件，维护 `CPU op -> TxnID/DBID/line` 关联并向 Reference 查询期望。
- DUT Adapter 只映射端口，不能内含 Reference 判断或 scoreboard 通过条件。

## 7. 分阶段实现顺序

1. `single_load_miss`：独立参考 line、ReadShared 两拍、CompAck、refillWakeup、最终 Load 数据比较。
2. `single_load_hit` 与同 line 重读：验证抽象 line 安装状态和 hit 数据。
3. 同行合并、bank conflict、set conflict：增加场景覆盖检查；不复制替换/仲裁硬件。
4. Store/WriteBack：定义 Store 完成点、dirty shadow data 和 TXDAT 写回比较。
5. Probe：增加抽象一致性状态转移、无数据/有数据回复检查及测试调度的 Snoop。
6. Atomic/CMO、反压和随机：仅在前述语义边界确认后扩展。

## 8. 非目标与防止自我验证

- 不要求 Reference 与 RTL 的 hit/miss latency、MSHR ID、way、replacement 结果或每周期仲裁完全相同。
- 不用 TXREQ/RXDAT 的实际内容更新 Reference memory 后再拿同一值验证 CPU 返回。
- 不用 L2Model 的可变内存 map 作为 scoreboard 正确答案。
- 不用共享的错误地址/数据转换函数同时生成 DUT 激励和唯一 expected value；关键测试至少使用显式 fixture 或独立期望计算。
- 不把协议 checker 的“消息格式合法”当成“数据功能正确”，二者都要检查。

本文定义设计边界和逐阶段检查计划。第一版代码已实现 `ReferenceModel` 与面向 ReadShared/8 B Load 的 `Scoreboard`，并已接入 `main.cpp` 与真实 Verilated DCache；`single_load_miss` 端到端闭环已通过。当前未覆盖 Store、Probe/Snoop、Atomic、CMO 和随机测试。
