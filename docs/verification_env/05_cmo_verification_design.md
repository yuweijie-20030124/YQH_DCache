# DCache 验证环境 CMO 扩展设计

状态：用户已接受首版干净行范围及独立 CmoModel；按 2026-11-17 新决定修订，尚未实现。

本方案采用 [06_simple_tests_and_replaceable_l2.md](06_simple_tests_and_replaceable_l2.md) 的结构：理想 LSU、可替换的 L2、各测试自己的检查。原文中独立 ReferenceModel/Scoreboard/PendingCmo 表的方案已撤销。

## 1. 第一版范围

先通过 Load 将 A 安装为 SC，等读事务和环境排空，再发一个 CMO，最后再次 Load A。

| 操作 | TXREQ | 本项目理想 L2 发起的 Snoop | 首版预期结果 |
|---|---|---|---|
| Clean | CleanShared | SnpToClean | SC 保持 SC，后续 Load hit |
| Flush | CleanInvalid | SnpToInvalid | SC 变 I，后续 Load 重新 miss |
| Inval | MakeInvalid | SnpMakeInvalid | SC 变 I，后续 Load 重新 miss |

Clean 是清脏并保留有效行，并非强制变 SC：当前 RTL 的 SnpToClean 对 UD 得到 UC、UC 保持 UC。首版只生成 SC。

不加入 Store、dirty 写回、Atomic、并发 CMO、复杂反压和随机。没有 Store 驱动时暂不覆盖 dirty 路径，不通过修改 DUT 内部寄存器伪造脏行。zero 属于 Store 路径。

## 2. 一笔 CMO 的闭环

```text
LSU cmoReq 握手
  -> DCache TXREQ（CMO TxnID 当前为 16）
  -> L2 RXSNP（独立 Snoop ID）
  -> DCache TXRSP SnpResp（回填 Snoop ID）
  -> L2 RXRSP CompCMO（回填 CMO TxnID）
  -> DCache cmoResp（回填 CPU CMO id）
```

CMO 请求本身从 MissQueue 发给 L2，本地 line 状态改变由随后收到的 Snoop 经 ProbeQueue/MainPipe 完成。只返回 CompCMO 无法验证清理/失效效果。

第一版为了避免理想目录复杂化，可规定每笔 CMO 都向目标地址和 alias 发一条 Snoop，包括冷地址；真实 L2 可以按其契约用目录决定是否需要 Snoop。当前三个核心用例预先安装 line，完整检查上述路径。不会强制所有未来 backend 在所有情形发送完全相同数量的 Snoop。

## 3. 理想 LSU

新增 `simCPU/cmo_model.h/.cpp`，由 CpuModel 协调，不塞入 LoadQueue。

建议最小状态：`Idle -> SendRequest -> WaitResponse -> Completed -> Idle`。

- 保存 CPU id、CMO opcode、物理地址、alias、提交周期、结果 error。
- 请求被反压时保持 valid 和 payload；第一次握手后停止发送。
- 运行期响应 ready 为 1，首版没有 CMO replay。
- 响应必须匹配当前 id，done 必须为 1；error 是完成结果的一部分。
- 非预期 error 由测试判失败；非法或无所属响应由端点报错，不把合法错误响应做成永久 Error 状态。
- current/next 和现有 Load 相同，同一边沿只更新一次，完成结果只消费一次。

测试按“Load 排空 -> CMO 完成并排空 -> Load”提交，不在首版测试排序竞争。后续有 Store 时，需要另加 StoreBuffer 排空条件。

## 4. 理想 L2

保留同一个 L2Model class、同一七通道接口和稀疏内存。新增独立 CmoTransaction，首版不与 ReadShared 并发。

建议状态：`Idle -> SendSnoop -> WaitSnoopResponse -> SendCompCmo -> Idle`。

1. TXREQ 握手时检查地址、opcode、节点、CMO TxnID、alias、size=6、无返回数据请求标志。
2. 选择对应 Snoop opcode，产生 Snoop ID，地址按 PA[47:3] 编码。
3. RXSNP ready 为 0 时保持 valid/bits；握手后停止发送并等待 SnpResp。
4. 干净 SC 行收到 SnpResp：Clean 期望 SC，Flush/Inval 期望 I；校验 Snoop ID、节点和错误码。
5. 再发送 CompCMO，保持到 RXRSP 握手，事务结束。CMO 不走 ReadShared 的 CompAck 流程。

TXRSP 必须按 opcode 分开处理 CompAck 与 SnpResp，不能统一丢给旧 accept_comp_ack。

首版不实现 WaitSnoopData，也不假装收到 TXDAT 就写入内存。意外 SnpRespData 明确报当前场景不支持。后续 Store 阶段再加两拍数据接收、独立预期数据比较和 dirty 内存更新；SnpRespData 与主动 CopyBackWrData 是不同路径。

## 5. 每个用例怎样检查

测试保留当前阶段、初始化数据副本、CPU CMO id、CMO TxnID、Snoop ID、少量事件标志和计数；不维护全局缓存表。

| 观测边界 | 本用例检查 |
|---|---|
| 首次 Load 完成 | 数据等于测试保存的 D，读事务已经排空 |
| cmoReq 握手 | opcode/地址/alias 与用例操作一致，记录 CPU id |
| TXREQ 握手 | opcode、对齐行地址、alias、节点和 CMO TxnID 正确，只发生一次 |
| RXSNP 握手 | 对应操作、地址、alias 正确，记录独立 Snoop ID |
| TXRSP 握手 | opcode=SnpResp、txnID=Snoop ID、resp 符合表中结果、无错误 |
| RXRSP 握手 | Snoop 已完成，opcode=CompCmo、txnID=CMO TxnID、记录 respErr |
| cmoResp 握手 | 已有 CompCMO，id 对应原 CPU id、done=1、error 对应 respErr，只完成一次 |
| 第二次 Load | 数据等于 D；Clean 无新增 ReadShared，Flush/Inval 新增一笔 ReadShared |

TXRSP 不携带地址，关联地址靠已保存的 Snoop ID，不能检查不存在的字段。

第二次 Load 的检查在整个闭环结束后统计；允许等待和合法 replay，但不能把 handled/miss 当成最终 Load 完成。在这些无其他请求的固定场景下定义预期命中/缺失，不扩展成所有缓存场景的全局断言。

第一版检查正常无错；后续 CompCMO 错误注入另写测试，不能因为发送错误完成就假设 line 状态已回滚。

## 6. 文件与实现顺序

- 新增 `simCPU/cmo_model.h/.cpp`；扩展 cpu_types 和 CpuModel 的 CMO 提交/完成出口。
- 扩展 l2_model；必要时同一个 class 的 CMO 方法放 `l2_cmo.cpp`。
- 新增 `tests/cmo_tests.cpp`，含 `load_then_clean`、`load_then_flush`、`load_then_inval`。
- 扩展 test_framework 的注册/选择，保证 all 运行实际对应的测试。
- 沿用已有 CMO adapter 镜像和 DCacheL2Link，不新增 CMO 专用旁路通道。
- 不增加 ReferenceModel、Scoreboard 或理想 DCache，不修改 RTL 来迁就测试。

先完成 06 文档所述 Load 检查迁移和旧模型删除，再逐个 review CMO 接口与实现。验证使用 `make -C sim/regress srun test=load_then_flush` 等命令，最终 `make -C sim/regress all`。这些是计划入口，目前还不能运行 CMO 用例。
