# 内置 CHIron Joint/Xaction 协议监视器

日期：2026-11-17。用户授权直接复制 CHIron 源码进本仓库，禁止引用外部 CHIron 路径。

## 1. 文件与边界

- `sim/regress/third_party/chiron/`：Joint 的 28 个递归头文件依赖，约 600 KB，原样复制；保留 LICENSE、NOTICE 和 SHA-256 清单。源提交为 `f00780f1f2fac08daff289118892bdfe46e4ab43`。
- `common/compact_chi_monitor.h/.cpp`：七通道字段转换、Joint 调用、错误报告、reset 和排空。
- `checks/compact_chi_monitor_test.cpp`：不依赖 DUT 的协议正反例，独立构建，不加入仿真 main。
- `simulation.h/.cpp`：每个稳定边沿快照调用一次监视器，结束条件包含监视器排空。
- Makefile：使用 C++20，增加 `check-protocol`；没有外部 CHIron include/link/download。

不导入 Taurus 或 Cohestra，不改变 L2/LSU 驱动方式，不恢复 reference_model/scoreboard。

## 2. 数据流

```text
DCache <------ 七通道 ------> 理想 L2 / 未来真实 L2
                  |
          稳定边沿快照（只读）
                  |
     字段范围、反压稳定性检查
                  |
      CompactChiMonitor -> Joint -> Xaction
                  |
           拒绝则当前测试 FAIL
```

只有 valid && ready 的 flit 交给 Joint。valid 被反压的多拍由原 chi_link_checks 检查保持性，不重复创建事务。

| 通道 | CHIron 入口 |
|---|---|
| TXREQ | NextREQ |
| TXEVT | NextEVT |
| RXSNP | NextSNP |
| RXRSP | NextDnRSP |
| RXDAT | NextDnDAT |
| TXRSP | NextUpRSP |
| TXDAT | NextUpDAT |

依照 YQH 参数创建 TYPE_1 配置：TxnID/DBID 为 8 bit、节点号 7 bit、way 2 bit、data 256 bit、tagAlias 2 bit。拓扑中的 DCache=2、L2=0。不能复制 Cohestra 的默认位宽。

数据转换按最低地址字节放最低有效位：byte i 写入 uint64_t 的第 i/8 段、第 i%8 个字节，不依赖主机端序或 reinterpret_cast。

## 3. 同拍处理顺序

1. 先处理已有事务的 TXRSP、TXDAT，再处理 RXRSP、RXDAT，释放旧 ID。
2. 若响应查表返回明确的 TXNID_NOT_EXIST，只暂存到本拍后段；这类查表失败尚未修改 Xaction。
3. 登记本拍 TXEVT、TXREQ、RXSNP。
4. 对暂存的 RXRSP/RXDAT 再检查一次，再检查暂存的 TXRSP/TXDAT，以支持同拍建立事务或 DBID 的关联。
5. 仍无所属或返回其他拒绝，立即失败。已接受的事件不会提交两次；真正的 Xaction 拒绝不能因为排序被重试或忽略。

所有调用使用同一 cycle，不人为插入时钟。独立测试覆盖新请求与数据同拍、最后数据与 Ack 同拍、旧 Ack 与新请求同 TxnID 复用。更复杂的未来协议并发需要增加专门测试，不能声称穷尽所有排序。

## 4. 错误与排空

`Next*` 的返回不是 ACCEPTED 就判失败，输出 cycle、通道、opcode、TxnID、节点和 denial 名称；库返回关联 Xaction 时补充原请求地址。未知 ID 本身没有可恢复的原请求地址。

这些调用为 noexcept，不能从库事件回调抛异常；封装在调用返回之后抛异常，由现有 main 形成非零退出。未接入 Cohestra 的 WarnOnly。

任何检查失败后锁存 failed，必须 reset 后才能复用监视器，避免继续使用部分推进过的事务状态。

封装只保留原库 Xaction 的 shared_ptr 供 `IsComplete` 和诊断使用，不另建地址到权限/数据的表。TxnID 可释放不代表整个事务结束，仍可能等待 DBID 的确认；`is_idle` 以完整 Xaction 完成为准。超时报告未完成事务的请求通道、起始周期和地址。

reset 清空 Joint、事务引用、失败状态和上一拍快照。重复/倒退 cycle 被拒绝；Simulation 重复 sample_cycle 返回同一快照，不会重复喂入监视器。

## 5. 必须保留的检查与已知差异

1. Joint/Xaction 不检查内存内容是否为正确值；fixture 数据比较继续由用例完成。
2. 原库多个地方有 `TODO: Field Mapping Check`。范围/握手检查继续保留；被 ACCEPTED 不等于所有字段语义或一致性属性都被证明。
3. CMO 与 Snoop 是独立 Xaction；本用例要求的“对应 Snoop 先完成，再 CompCMO”继续由 CMO 用例验证，不能只看 Joint。
4. 原版 ReadShared Xaction 在收到第一拍 CompData 后允许 CompAck，但仍等第二拍数据才 IsComplete。我们没有修改原库。既有 single_load_miss 仍要求两拍收齐后 Ack；无任何 CompData 的过早 Ack 会被 Joint 拒绝。反例分别覆盖这两个边界。
5. 原版 SNP flit 没有 tagAlias。link 保留它，范围检查及具体 Snoop 用例负责它的正确性，不能宣称 Joint 检查了 alias。
6. 原版 REQ 的 ExpCompData/ExpCompStash 共用 union，而 YQH 分别传输。适配按 Stash 与非 Stash opcode 选择一次；若另一独立标志也为 1，明确报 `profile unsupported`，不静默丢弃。现有普通 Load/CMO 可表达；未来项目预取扩展需要另做兼容设计。
7. 为保持 REQ/EVT way 字段，启用库的 way 选项；库因此具有项目 RXDAT 没有的 WayValid/Way，转换时这些额外字段为 0，不假装采样了 DUT 上不存在的信号。
8. 合法的 RespErr 不等于协议拒绝。当前正常 Load 场景仍要求 NoError；后续错误注入的功能预期由专门用例定义。
9. 监视器依赖本地复制的协议库，原项目的 RTL 生成依赖保持原状；没有声称整个 YQH 构建都不依赖其他项目。

## 6. 验证与运行

```sh
make -C sim/regress check-protocol
make -C sim/regress srun test=single_load_miss max_cycles=1000 VCD=1
make -C sim/regress run test=all
```

独立正反例包括：正常 ReadShared、只 valid 不握手、未知 TxnID、重复请求号、重复 DataID、DBID 改变/错误 Ack、无数据过早 Ack、错误目标节点/opcode、交错读/乱序 beat、同拍 ID 复用、同拍请求/数据、等待 Ack 时未排空、重复 Ack、失败锁存/reset、CMO/Snoop 控制及数据响应、Evict/WriteBack、反压字段改变、字段溢出、重复采样。

CMO/Snoop/写回这里是监视器的合成序列测试，并非真实 DCache 的对应端到端功能测试。真实 DUT 第一阶段仍只运行 single_load_miss。


验证记录：独立八组协议检查通过；完整 RTL 生成、C++20 Verilator 构建及 seed=1 的 single_load_miss（cycle=30，VCD）通过。28 个依赖头文件的 SHA-256 与 SOURCE.json 一致，递归引号 include 均在内置目录内解析。采用现有 RTL 构建的 --noassert；协议拒绝来自 C++ 监视器，不依赖 RTL assertion。
