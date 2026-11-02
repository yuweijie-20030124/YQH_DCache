# XiangShan L1 DCache - L2 TileLink 通道、字段与 Compact CHI 替换对照

状态：学习与接口评审文档，不是已冻结的 Bundle/RTL 规格。

记录日期：2026-10-22。

## 1. 范围与资料

本文件的“所有通道、字段和信号”指 **L1 DCache 到 L2 的 TileLink 五个链路通道**：A/B/C/D/E 的所有 `Decoupled` 握手信号、`TLBundleA`～`TLBundleE` 中声明的 payload 字段，以及当前 XiangShan DCache 在该链路上实际用到的 opcode 和扩展字段；不把 LSU/LoadPipe、SRAM、L2 内部数千个信号误算作 TileLink 链路字段。

所读工作树：`/home/ywj/XiangShan`，HEAD `63182363ed15d9b392e068d5fe34c523cbd55d5b`，存在本地未提交修改；本文的“源码事实”以 **2026-10-22 读取到的工作树内容**为准，不宣称属于未修改的上游版本，也不修改该树。

本地核对入口：

- `/home/ywj/XiangShan/rocket-chip/src/main/scala/tilelink/Bundles.scala`：`TLMessages`、`TLPermissions`、五个 `TLBundle`（约第 18～274 行）。
- `/home/ywj/XiangShan/rocket-chip/src/main/scala/tilelink/Parameters.scala`：`TLBundleParameters` 与协商后的字段宽度（约第 1280～1340 行）。
- `/home/ywj/XiangShan/rocket-chip/src/main/scala/tilelink/Metadata.scala`：`Nothing/Branch/Trunk/Dirty` 与权限转换。
- `/home/ywj/XiangShan/src/main/scala/xiangshan/cache/dcache/DCacheWrapper.scala`：`clientNode`、链路接线、D 通道路由（约第 932～955、1539～1565、1599～1629 行）。
- `/home/ywj/XiangShan/src/main/scala/xiangshan/cache/dcache/mainpipe/{MissQueue,Probe,WritebackQueue}.scala`：A/D/E、B、C/D 的真实处理。
- `/home/ywj/XiangShan/coupledL2/src/main/scala/coupledL2/SourceB.scala`：L2 发 Probe 与 GrantAck 的同地址排序。
- `docs/compactchi-architecture-20260828-d0f2609.pdf`：第 4 章通道依赖、第 9 章字段/编码、第 10 章事务、第 14 章参考流控。

注意：XiangShan 树内有多个 Rocket-Chip 副本；下表以 `/home/ywj/XiangShan/rocket-chip/.../tilelink/Bundles.scala` 这一份定义为依据。最终编译选中的版本及 `edge.bundle` 的协商结果需要在集成时重新确认；**不能把这个源码的字段默认值当成已经冻结的引脚宽度**。

## 2. 链路的五个通道

从 **L1 DCache** 视角：

| TileLink | 方向 | XiangShan DCache 接线 | 主要用途 | 拟议 Compact CHI 路径 |
|---|---|---|---|---|
| A | L1 -> L2 | `bus.a <> missQueue.io.mem_acquire` | AcquireBlock/AcquirePerm、可选 CMO | `TXREQ`；部分操作无一一对应 |
| B | L2 -> L1 | `bus.b -> ProbeQueue`，受 MissQueue 同地址阻塞 | Probe | `RXSNP` |
| C | L1 -> L2 | `bus.c <> wb.io.mem_release` | ProbeAck[Data]、Release[Data] | 按事务拆为 `TXRSP`/`TXDAT` 或 `TXEVT`+`TXDAT` |
| D | L2 -> L1 | Grant[Data]/CBOAck -> MissQueue；ReleaseAck -> WBQ | 返回权限、数据或完成 | 按 opcode 拆为 `RXDAT` 或 `RXRSP` |
| E | L1 -> L2 | `bus.e <> missQueue.io.mem_finish` | GrantAck | 分配型读/授权的 `TXRSP/CompAck`（有条件映射） |

五通道均是独立的 `Decoupled`：每个通道都有 `valid`（发送者提供有效拍）、`ready`（接收者接受该拍）、`bits`（payload）；仅 `valid && ready` 的时钟边沿消费一拍。发送者在 `valid && !ready` 时保持 `valid` 和 `bits` 稳定。`ready` 是传输/准入信号，不是读返回数据或权限。B/D 的 `valid` 由 L2 驱动，A/C/E 的 `valid` 由 L1 驱动；反方向驱动对应 `ready`。

按 L1 视角展开，五通道的全部握手信号为：

| 通道 | L1 驱动 | L2 驱动 | L1 收/发一拍的条件 |
|---|---|---|---|
| A | `a.valid`, `a.bits` | `a.ready` | `a.valid && a.ready` |
| B | `b.ready` | `b.valid`, `b.bits` | `b.valid && b.ready` |
| C | `c.valid`, `c.bits` | `c.ready` | `c.valid && c.ready` |
| D | `d.ready` | `d.valid`, `d.bits` | `d.valid && d.ready` |
| E | `e.valid`, `e.bits` | `e.ready` | `e.valid && e.ready` |

**与 Compact CHI 的明显区别**：TileLink C 同时承载主动 Release 和被动 ProbeAck，Compact CHI 分到 EVT、RSP、DAT；TileLink D 同时承载数据和无数据响应，Compact CHI 分为 DAT 和 RSP。故转换器需要按 `opcode` 和事务上下文分路，不能只给 A/B/C/D/E 改名字。

### 2.1 动态协商的宽度

`TLBundleParameters` 包含 `addressBits`、`dataBits`、`sourceBits`、`sinkBits`、`sizeBits`、`requestFields`、`responseFields`、`echoFields`、`hasBCE`。通常 `dataBits = L2 侧协商 beatBytes * 8`；`sourceBits` 随客户端 Source ID 空间协商；`sinkBits` 随服务端 Sink ID 空间协商；`sizeBits` 随最大传输长度协商；B/C/E 只有 `hasBCE` 时存在。**CPU 64 位不意味着 TL 链路 64 位，也不意味着 Compact CHI 的 `Data_Width=64`。**

XiangShan DCache 宣告 `sourceId = IdRange(0, nEntries + 1)`、`supportsProbe = TransferSizes(cfg.blockBytes)`；其 `reqFields` 包含 Prefetch、ReqSource、Vaddr 及配置相关 Alias，`echoFields` 包含 IsKeyword。L2 是否接收这些字段由协商结果决定；不能从字段声明断言它必然出现在所有 SoC 配置的物理连线上。

## 3. 各通道所有 payload 字段

下列 `source`/`sink` 是 **TileLink 事务标识空间**，不是 CPU 请求 ID，不是节点 SrcID/TgtID，也不能直接当作 CHI DBID。

### 3.1 A：L1 发起请求

定义：`TLBundleA` = `opcode[4]`、`param[3]`、`size`、`source`、`address`、`user`、`echo`、`mask`、`data`、`corrupt`；此外通道有 `a.valid/a.ready`。本地代码的 A opcode 扩展为 4 位以容纳 CBO。

| `a.bits` 字段 | 含义 | 本 DCache 的典型使用与 CHI 替换注意事项 |
|---|---|---|
| `opcode` | 操作类别 | `AcquireBlock`(6)、`AcquirePerm`(7)，可选 `CBOClean`(12)、`CBOFlush`(13)、`CBOInval`(14)；分别映射到需要数据/权限的 Compact CHI 请求或 CMO。 |
| `param` | 该 opcode 的子类型 | Acquire 使用 grow：`NtoB`(0)、`NtoT`(1)、`BtoT`(2)，表示所求权限；不是 Compact CHI `Resp` 的原始编码。 |
| `size` | `log2(本次传输字节数)` | 缓存行 Acquire 使用 `log2(blockBytes)`；概念上对应 CHI `Size`，但须复核请求种类。 |
| `source` | L1 分配的在途请求 ID | MissQueue 一般用 MSHR/入口 ID；D 通道返回时由 `d.source` 找原请求；候选映射为 L1 原始 `TxnID`，需保证独立命名空间及宽度。 |
| `address` | 物理请求地址 | CHI `TXREQ.Addr` 用物理地址；VIPT 的虚拟索引/别名信息需额外评审。 |
| `user` | 双方协商的请求扩展 BundleMap | 本地 DCache 用 Prefetch、ReqSource、Vaddr 和可选 Alias，不是标准 TL 固定字段。 |
| `echo` | 协商的控制字段 | `IsKeyword` 可随返回消息 echo，辅助返回数据顺序；不是 CHI 的 `DataID`。 |
| `mask` | 每字节写使能 | 用于含 A 数据的 Put/Atomic 类事务；Acquire 通常不靠它表达权限；如果迁移直写，对应 CHI `TXDAT.BE`（不是 TXREQ 的固定映射）。 |
| `data` | 当前 A 拍的数据 | 只有 A 上带数据的操作有语义；Acquire 不带缓存行数据。Compact CHI 写数据可能改走 `TXDAT`，不能把 A 的 `data` 机械搬入 TXREQ。 |
| `corrupt` | 带数据消息的损坏标识 | 并非请求被拒绝；迁移时要设计 CHI `RespErr`/错误处理与数据关联。 |

源码注释按 opcode 列出的 A 标准可用消息还包括 `PutFullData`(0)、`PutPartialData`(1)、`ArithmeticData`(2)、`LogicalData`(3)、`Get`(4)、`Hint`(5)。这些是 **TLBundle 可以承载** 的类型，不等于当前 L1 DCache 主 MissQueue 都会发出；例如非缓存访问可经单独 `Uncache` 节点，原子也可能在缓存内部处理，须按实际路径分析。CBO 为此 XiangShan Rocket-Chip 版本的扩展，不是原生五通道固定语义。

### 3.2 B：L2 发 Probe

定义：`TLBundleB` = `opcode[3]`、`param[2]`、`size`、`source`、`address`、`mask`、`data`、`corrupt`，另有 `b.valid/b.ready`；**B 没有 `user` 或 `echo` 字段**。

| `b.bits` 字段 | 含义 | 本地用法/CHI 对应 |
|---|---|---|
| `opcode` | 对上层的操作 | DCache ProbeQueue 断言只接受 `Probe`(6)；转换为某个 `RXSNP.Opcode` 需结合目标权限、是否取数据和脏责任决定，不能固定为单一 Snoop。 |
| `param` | 权限上限 `toT`(0)、`toB`(1)、`toN`(2) | 目标权限约束；近似可导向 CHI SnpToClean/SnpToShared/SnpToInvalid，但须结合状态和是否带数据，绝非编码直接相同。 |
| `size` | `log2(字节数)` | 该 L2 SourceB 设为缓存行大小；CHI SNP 为按 line 的地址，不直接搬字段。 |
| `source` | TL Probe 路由/来源上下文 | 本地 SourceB 设成 DCache client 的 sourceId 起点；不是 CHI 每条 Snoop 独立的 `TxnID/DBID`。转换器要自行分配、保存 Snoop ID，确保回包关联。 |
| `address` | Probe 物理行地址 | 对应 `RXSNP.Addr` 的行地址/地址编码。 |
| `mask` | TL B 通用字节掩码 | SourceB 填满掩码；对普通 Probe 不是独立的有效写掩码。 |
| `data` | TL B 通用数据字段 | **本地扩展**：`data(0)` 表示 `needData`，`data(2,1)` 传 VIPT alias 片段；不是 Probe 的缓存行数据。CHI SNP 中没有可机械照抄的 `needData` 位，须定义 L2 何时请求/允许返回数据及 TagAlias 传递策略。 |
| `corrupt` | TL 带数据损坏标志 | SourceB 填 false；不代表 CHI Snoop `RespErr` 的自然对应。 |

### 3.3 C：L1 返回 Probe 或主动替换

定义：`TLBundleC` = `opcode[3]`、`param[3]`、`size`、`source`、`address`、`user`、`echo`、`data`、`corrupt`，另有 `c.valid/c.ready`。**C 没有 `mask` 字段**。

| `c.bits` 字段 | 含义 | 本地用法/CHI 对应 |
|---|---|---|
| `opcode` | `ProbeAck`(4)、`ProbeAckData`(5)、`Release`(6)、`ReleaseData`(7) | ProbeAck -> CHI `TXRSP/SnpResp`；ProbeAckData -> `TXDAT/SnpRespData`（自身含状态+数据）；Release -> `TXEVT/Evict`；ReleaseData -> `TXEVT/WriteBackFull` 后接 `TXDAT/CopyBackWrData`。是否需返回数据以实际脏状态为准。 |
| `param` | shrink/report 编码 | `TtoB`(0)、`TtoN`(1)、`BtoN`(2)、`TtoT`(3)、`BtoB`(4)、`NtoN`(5)；映射到 CHI 目标状态与 `Resp`/PD，需查当前行状态，不能位翻译。 |
| `size` | `log2(字节数)` | 本地 WritebackQueue 发送一行，CHI EVT/DAT 行长度和 beat 数依配置。 |
| `source` | C 侧请求/响应路由 ID | WBQ 生成 C 消息时使用 WB entry ID；**不保证与之前 B.source 相等**，不能直接当 CHI Snoop TxnID。ProbeAck 主要还需匹配地址及 L2 的相关事务上下文。 |
| `address` | 回应或释放的物理行地址 | 对应 CHI EVT.Addr；CHI 的 UpRSP/UpDAT 通常不靠同样的 C.address 字段定位，须靠保存的事务表。 |
| `user`、`echo` | 可协商扩展 | 需要逐项核对协商；本地 `DirtyKey` 的 C echo 写入代码有注释，不能假设常驻。 |
| `data` | 当前 C 拍数据 | ProbeAckData/ReleaseData 有效；CHI 分别用 SnpRespData/CopyBackWrData 的 `TXDAT.Data`。 |
| `corrupt` | 发送数据损坏标志 | 本地 WBQ 从请求传入；CHI 错误语义要按 RespErr/错误规则重设计。 |

本地 WritebackQueue 用 `voluntary` 区分：主动替换发 `Release[Data]`，由 Probe 引发的响应发 `ProbeAck[Data]`。只对主动 Release 等待 D/ReleaseAck；ProbeAck 发完 C 通道数据后完成该本地步骤。迁往 CHI 后要保留这两条不同的完成条件，尤其 WriteBackFull 必须等 L2 返回 DBID 之后才能发送 CopyBackWrData，不能继续用 TL 的“C 一次带数据发完”模型。

### 3.4 D：L2 返回数据、授权或完成

定义：`TLBundleD` = `opcode[4]`、`param[2]`、`size`、`source`、`sink`、`denied`、`user`、`echo`、`data`、`corrupt`，另有 `d.valid/d.ready`。**D 没有 `address`、`mask` 字段**。

| `d.bits` 字段 | 含义 | 本地用法/CHI 对应 |
|---|---|---|
| `opcode` | 返回消息类别 | 本地 `Grant`(4)/`GrantData`(5)/`CBOAck`(8) 到 MissQueue，`ReleaseAck`(6) 到 WBQ。其他 TL D opcode 例如 AccessAck[Data]/HintAck 在通用 Bundle 可存在，但本地顶层断言此链路不应收到它们。 |
| `param` | 授予权限上限 | `toT`(0)、`toB`(1)、`toN`(2)；与本地状态及命令共同产生 Trunk/Branch/Dirty；CHI 由 `RXRSP.Resp` 或 `RXDAT.Resp` 等携带 `I/SC/UC/PD` 语义，不能把 `toT` 当 CHI `UC` 的编码。 |
| `size` | `log2(字节数)` | 用于判断消息/多拍长度；CHI `DataID`、事务 Size 须单独规定。 |
| `source` | 回应原 A/C 的 TL Source | MissQueue 按 source 分发 Grant[Data]，WBQ 按 source 分发 ReleaseAck；CHI 通常按原始 `TxnID` 查本地 MSHR/WBQ。 |
| `sink` | L2 分配给需要 E/GrantAck 的 sink ID | E 返回同一个 sink；**不能直接等同于 CHI DBID**：后者用于后续 `TXRSP`/`TXDAT` 的关联且适用消息和生命周期不同。只能把它当作映射思路。 |
| `denied` | L2 拒绝/失败指示 | 和 `corrupt` 不同；本地 miss 用两者并集生成错误；CHI 映射到协议允许的 `RespErr` 与本地错误处理，不能理解成 Compact CHI 资源 Retry。 |
| `user` | 下游协商的 response 扩展 | 由 L2/Client 协商；不可假设包含所有 request user 字段。 |
| `echo` | 请求侧约定的控制字段回声 | `IsKeyword` 被回传；可选 `DirtyKey` 在代码中被读取但其协商路径依配置；此处携带的信息不会自动替代 CHI `Resp/PD`。 |
| `data` | GrantData 当前数据拍 | CHI 对应 `RXDAT/CompData.Data`；Grant 无数据，可能转为 `RXRSP/Comp`（例如已有有效数据的权限升级）；不能假设所有 ReadUnique 都只有数据响应。 |
| `corrupt` | 返回数据损坏 | 本地 MissEntry 计入 error；转 CHI 时核对 `RespErr` 字段和异常报告。 |

本地 `MissEntry` 用 `edge.count(d)` 得到本事务数据拍位置和最后一拍，将数据写入 `refill_data_raw/refill_and_store_data`；可按 `IsKeyword` 做关键字优先重排。这是 **TL 实现中的 beat 计数/顺序逻辑**，不是 D 通道上自带的 `DataID` 字段；CHI `CompData.DataID` 是显式协议字段，需用 per-entry received mask，并评审 beat 乱序/重复/错误策略。

### 3.5 E：L1 确认 Grant

定义：`TLBundleE` **仅含 `sink` payload**，另有 `e.valid/e.ready`；没有 `opcode/param/size/source/address/data`。`MissEntry` 在收到 D 的 Grant[Data] 后利用 `edge.GrantAck(d)` 构造 E，E 成功握手后记录 `s_grantack`。

替换 Compact CHI 时：分配型读/取权限的后续确认走 `TXRSP/CompAck`，其关联标识来自 Compact CHI 下游返回的 `DBID`，不是直接把 TileLink E.sink 数值线接上去。`ReleaseAck`、CMO 等也不必无条件产生 CompAck；须按具体 CHI 事务路径确定。

## 4. XiangShan 附加字段、边带信号与状态

### 4.1 `user`/`echo`（不是所有 TL 实例必有）

| 字段/载体 | 源码用途 | 拟议 CHI 处理 |
|---|---|---|
| A.user.Prefetch | 是否对 L2 预取训练开放等策略 | 不直接等同于 Compact CHI Stash；作为实现特定 Hint 或暂不提供，需和 L2 商定。 |
| A.user.ReqSource | 标注 CPU load/store/atomic/prefetch 等来源 | 性能和 QoS 侧带；不等于 TL `source`/CHI `TxnID`；可作为实现可选元信息。 |
| A.user.Vaddr | 虚地址高位（去掉 block offset）传给 L2 | CHI 主请求携物理 Addr；需要别名时评审 `TagAlias`（不能把完整 vaddr 硬塞进标准 CHI 字段）。 |
| A.user.Alias | 配置需要时保留 VIPT alias 位 | 候选映射 `TXREQ.TagAlias`，要核对宽度、计算及 L2 反向 Snoop 的 alias 恢复。 |
| A.echo.IsKeyword / D.echo.IsKeyword | L1 告知/下游回声，用于关键字优先/时序 | 需要在 CHI 侧约定 beat 返回顺序与 DataID；不是 `DataID` 自身。 |
| D.echo.DirtyKey | MissQueue 代码尝试读取 | 字段是否出现取决于协商；CHI 必须直接解码 `Resp/PD`，不可依赖此字段恰好存在。 |
| B.data(0), B.data(2,1) | Probe needData / alias 片段（XiangShan L2 扩展） | 需要 L2 和 L1 明确取数据策略及 Snoop alias 方案；CHI SNP 并无逐位等价字段。 |

### 4.2 不是 TileLink 通道的边带

| 本地信号 | 作用 | CHI 方案中应如何处理 |
|---|---|---|
| `l2_hint: Valid(L2ToL1Hint)` | `sourceId` 和 `isKeyword` 告知 Grant 数据即将到达，帮助提前预约本地流水线 | 实现私有边带，可保留或取消；不是 TL A～E，也不是 CHI 规定的七个通道之一。 |
| `MissQueueBlockIO`/`probe.block` | 同地址 Probe 与 refill 阶段协调 | 可在 CHI L1 ProbeQueue/L2 ordering 策略中保留等价内部阻塞，而非直接作为 CHI 引脚。 |
| `refill_to_ldq`、`forward_mshr` | 给 LoadQueue 的数据唤醒/前递 | 仍属 CPU/LSU 内部接口，和 CHI `RXDAT.Data` 的握手、缓存行安装是不同完成条件。 |

### 4.3 本地状态不等于链路字段

TL L1 稳定状态 `Nothing/Branch/Trunk/Dirty` 与 CHI 的 `I/SC/UC/UD` 有概念映射，但对应的是 **本地一致性状态及脏责任**，不意味着 TL `param` 可以直接赋值给 CHI `Resp`：

```text
Nothing -> I
Branch  -> SC
Trunk   -> UC
Dirty   -> UD
```

`AcquireBlock NtoB/NtoT` 请求至少共享/独占权限；`AcquirePerm BtoT` 升级已有数据的权限；`GrantData` 可以授予 `toB/toT` 并带数据；`Grant` 可只授予权限；需要结合原本状态和 CPU 写入行为判断最终 Clean/Dirty。

## 5. 事务级替换，不是信号重命名

以下是 **候选功能对照**，不保证字面、完成点或时间顺序相同。

| XiangShan TL 事务 | 状态/数据意图 | Compact CHI 候选路径（L1 视角） | 必须重新设计的点 |
|---|---|---|---|
| A AcquireBlock(NtoB) -> D GrantData -> E GrantAck | 无副本读并保留共享 | `TXREQ ReadShared -> RXDAT CompData -> TXRSP CompAck` | L2 返回真实 `Resp` 可为 SC/UC/UD；DBID/DataID；refill 完成与安装分离。 |
| A AcquireBlock(NtoT) -> D GrantData -> E GrantAck | Store miss 取数据及唯一权限 | `ReadUnique -> CompData -> CompAck` | 本地 Store 真正写入后才 Dirty；返回状态必须解码。 |
| A AcquirePerm(BtoT) -> D Grant -> E GrantAck | 持有数据的权限升级/整行覆盖 | `ReadUnique -> Comp`（已有有效数据且 `ExpCompData=0`）或整行覆盖时 `MakeUnique -> Comp`，随后 `CompAck` | 若期间丢失有效数据或要求 `ExpCompData=1` 则改用 CompData；MakeUnique 只适用于整行覆盖。 |
| B Probe(toN) -> C ProbeAck[Data] | L2 请求失效/可能取脏数据 | `RXSNP SnpToInvalid -> TXRSP SnpResp` 或 `TXDAT SnpRespData` | `SnpMakeInvalid` 与 `SnpToInvalid` 脏数据要求不同；不可无条件选择某一个。 |
| B Probe(toB) -> C ProbeAck[Data] | 降权共享，脏行可能交数据 | `SnpToShared -> SnpResp` 或 `SnpRespData` | 是否带数据及 PD 根据实际 L1 状态与协议表判断；SnpRespData 本身含状态。 |
| B Probe(toT) -> C ProbeAck[Data] | 保持唯一、可能请求清脏 | 候选 `SnpToClean`，或依据协议目标不发生降权的回复路径 | 并非 `toT` 一定等于 CHI `SnpToClean`；需要 L2 明确脏数据转移策略。 |
| C Release（无数据的 clean 替换）-> D ReleaseAck | 自主替换 clean 行 | `TXEVT Evict -> RXRSP Comp` | 这里仅是无数据 clean 路径；TL clean 行也可能因策略使用带数据 ReleaseData，不能仅据 C opcode 推断原来必为 Dirty。CHI EVT 的状态/地址时序按本地 PDF 第 10.3 节；不需 TXDAT。 |
| C ReleaseData（dirty）-> D ReleaseAck | 自主替换 dirty 行 | `TXEVT WriteBackFull -> RXRSP DBIDResp/CompDBIDResp -> TXDAT CopyBackWrData`，分步路径另等 Comp | CHI 中 EVT 请求与写数据跨通道分离；先取得 DBID，数据拍发送完成才可释放 WBQ。 |
| A CBOClean/Flush/Inval -> D CBOAck | 缓存维护 | `TXREQ CleanShared/CleanInvalid/MakeInvalid -> RXRSP CompCMO`（按语义逐一评审） | 三者 dirty 责任、失效和 SoC 可见性不同；不能只看名字等号替换。 |
| A Get/Put/Hint/Atomic | 通用 TL 功能，不全在本 DCache 主节点上 | `ReadNoSnp`、`WriteNoSnpPtl/Full`、`WriteUniqueFull`、Stash、原子待定等 | 逐条确认 cacheability、是否分配行、是否要 DBID/TXDAT；本地 Compact CHI 原子章节 TBD，不可自行补全。 |

### 5.1 脏行替换的典型时序差异

```text
TileLink（当前 WBQ 结构）：
  C.ReleaseData（在 C 同时携带写回数据）
    -> D.ReleaseAck
    -> 写回表项完成

Compact CHI（组合回复路径）：
  TXEVT.WriteBackFull（原始 TxnID）
    -> RXRSP.CompDBIDResp（原始 TxnID + DBID）
    -> TXDAT.CopyBackWrData（后续数据使用返回 DBID 关联）
    -> 全部 DataID 发送成功后写回表项完成

Compact CHI（分步回复路径）：
  TXEVT.WriteBackFull
    -> RXRSP.DBIDResp
    -> TXDAT.CopyBackWrData 全拍成功
    -> RXRSP.Comp
    -> 写回表项完成
```

这里的 TXDAT UpDAT.TxnID 填返回的 DBID；MSHR/WBQ 用 **原始事务标识** 找表项再保存返回的 DBID。不能将 TL `sink` 或 WB entry index 无条件直连到 CHI DBID。

### 5.2 同地址 Probe/Snoop 排序：纠正此前教学简化

当前读取到的 XiangShan L2 `SourceB` **显式检查尚未得到 GrantAck 的同地址 Grant**，先把 Probe 放在 L2 的 Probe 队列里。`GrantBuffer` 在 E/GrantAck 握手时解除该 Grant 的在途状态，之后 B 才具备发出的条件。因而在该路径下，不宜从单独的 L1 MissEntry 状态机看不到“同地址 miss 期间 Probe”就推断“香山没有瞬态状态”；也不能把此前教学使用的“ReadShared 发出后、CompData 未到就收到同地址 SnpToInvalid，必定接收并丢弃 refill”的处理方式当作 XiangShan TL 已证明的协议规则。

**用户于 2026-10-22 确认本项目采用 Snoop 优先策略：同地址读事务进行中允许 Snoop 到达并优先处理，Snoop 不等待 ReadShared 等读事务完成。** 不采用上述以读完成/CompAck 为条件的同地址 Snoop 屏障。这是本项目的设计要求，不宣称与所参考的 XiangShan TileLink 排序实现相同。

后续接口与瞬态矩阵必须围绕以下要求展开：

- 不以同地址 ReadShared/ReadUnique 等读事务结束、读数据收齐或 CompAck 完成为 Snoop 推进前提。
- Snoop 与同地址读的状态提交发生竞争时，优先处理 Snoop；保留原读事务上下文，不能因优先处理 Snoop 就丢失已接受的读请求。
- RXDAT/RXRSP 仍需有独立接收能力；Snoop 优先不表示为了等待 Snoop 完成而阻塞所有读返回。
- Snoop 处理后的读返回如何安装、转发给原 Load 或触发本地重放，仍需按请求阶段、Snoop 类型及 L2 一致性顺序逐项定义。仅 `pendingSnoop` 不等于无条件 `discardRefill`。
- “优先”不代表无视 valid/ready 反压、缺少响应/数据缓冲或必定当拍完成；资源与仲裁必须保证其进度不依赖原读结束。此要求不直接推广成所有写回事务的 Snoop 顺序规则。

P-Credit/资源 Retry 仍不采用；这些选择不改变 Compact CHI 第 4.1 节的跨通道进度依赖约束。

## 6. Compact CHI 七个通道实际要定义什么

以用户当前确认的接口方向为准：七个通道均用 `valid/ready`，无 P-Credit/资源 Retry；`TXREQ.ready=1` 采用强准入语义，即握手后 L2 不再因普通资源不足拒绝请求。这是针对本文 DCache/L2 的 **约定链路实现**；不能声称只换握手方式后就与 PDF 中 P-Credit 参考端口逐引脚兼容。以下字段取自本地 Compact CHI PDF 第 9.1 节，**不可凭 TL 字段想象额外的 last/needData**。宽度未冻结时使用文档符号而非拍脑袋给常数。

| L1 端口 | 必须评审的 Compact CHI 字段 | 对应实现入口 |
|---|---|---|
| `TXREQ` | `TxnID,SrcID,TgtID,Opcode,Size,Addr,TagAlias,NS,Order,MemAttr,Excl,ExpCompData,ExpCompStash,WayValid,Way,TraceTag`；`AllowRetry` 仅支持 Retry 时存在 | MissQueue/CMO/非缓存写请求仲裁；必要时 `TxnID` 映射 MSHR 槽但要约定命名空间。 |
| `TXEVT` | `TxnID,SrcID,TgtID,Opcode,Addr,NS,MemAttr,WayValid,Way,TraceTag`；可选 `AllowRetry` | WBQ 的 Evict/WriteBackFull 初始请求；与 TXDAT 数据分离。 |
| `RXSNP` | `TxnID,SrcID,TgtID,Opcode,Addr,NS,TraceTag` | ProbeQueue；SNP 的 `Addr` 在 PDF 第 9.1.3 节为 45 位行地址，不是 A/B 的完整 48 位字节地址；TxnID 宽度为 DBID_Width。 |
| `RXRSP` | `TxnID,SrcID,TgtID,DBID,Opcode,RespErr,Resp,CBusy,WayValid,Way,TraceTag` | MissQueue/WBQ/CMO 的无数据完成和 DBID 分配。 |
| `RXDAT` | `TxnID,SrcID,TgtID,DBID,Opcode,RespErr,Resp,DataSource,CBusy,WayValid,Way,DataID,Data,TraceTag` | MissQueue refill；`DataID` 标识拍位置，`Resp/PD` 决定返回状态/脏责任。 |
| `TXRSP` | `TxnID,SrcID,TgtID,Opcode,RespErr,Resp,TraceTag` | CompAck 或 SnpResp；UpRSP.TxnID 的宽度/关联空间按返回 DBID 及 Snoop ID 约定。 |
| `TXDAT` | `TxnID,SrcID,TgtID,Opcode,RespErr,Resp,DataID,Data,BE,TraceTag` | CopyBackWrData、NonCopyBackWrData、SnpRespData；必须保存原始 dirty data 至成功握手。 |

`TXRSP` 和 `TXDAT` 的 `TxnID` 虽同名，但不应误认为恒等于最初 TXREQ/TXEVT 的 TxnID；CompAck、写数据和 Snoop 应按**各自消息关联规则**填写。PDF `DataID = log2(512 / Data_Width)`，`TXDAT.BE` 文档固定 32 位，不能擅自套 `beatBytes` 或 TL `mask` 的宽度。PDF 无 `last` 字段；是否加内部 `last` 由 `DataID`/预期拍数派生，不能在外部接口宣称是标准必选字段。

PDF 第 4.1 节的进度依赖约束仍需保持：L1 的 `RXSNP` 进度不能依赖 `TXREQ`；可以依赖 `TXRSP/TXDAT` 的进度；`RXRSP`、`RXDAT` 的进度不能依赖其他通道。在 `valid/ready` 版本中，这意味着各 RX 通道须有足够的本地独立接收缓冲/保留容量，不能简单以 `txReq.fire`、`txDat.fire` 等跨通道握手去门控其 `ready`。

## 7. 本阶段尚需用户/设计联合决定

1. 已确认同地址读期间 Snoop 优先、不等待读完成；下一步按各读请求阶段与 Snoop 类型定义响应、读返回及缓存安装顺序，不再重新询问是否采用读完成屏障。
2. Compact CHI `Data_Width` 与缓存行字节数、TagAlias 编码；与 CPU 64 位数据通路分开选。
3. `TxnID` 在 MissQueue/WBQ/CMO 等类别之间是否统一分配，是否允许并发同值；DBID 空间由 L2 如何分配和回收。
4. ReadShared/ReadUnique 返回 `Resp`、`RespErr`、`DataID` 的合法组合与顺序；提前响应 CPU 的可见性/冲突时序。
5. `TXREQ`/`TXEVT` 的强 `ready` 是否由 L2 事务表与后续资源 **原子预留** 支撑；各 RX 通道需要独立接收缓冲，不能破坏第 4.1 节通道依赖。
6. `WriteUniquePtl`、原子、Stash 等功能是“定义协议字段但标注未支持”，还是第一轮 RTL 必须实现；PDF 原子流程仍为 TBD。
7. CMO 的 SoC 可见性保证、MMIO/uncache 通道是否与 DCache 主接口并行存在；不能把当前单独的 TL Uncache 节点不经评审硬并入 DCache TXREQ。

## 8. 对照结论

```text
TL A -> CHI TXREQ：请求功能接近，但写数据走 TXDAT，权限字段需语义翻译。
TL B -> CHI RXSNP：Probe 的需要数据/alias/ID 没有逐位直译。
TL C -> CHI TXEVT/TXRSP/TXDAT：需要拆开主动替换、Snoop 回复和数据。
TL D -> CHI RXRSP/RXDAT：需要拆开状态/完成与数据，并新增 DBID/DataID 规则。
TL E -> CHI TXRSP/CompAck：仅相应事务的确认语义接近，sink 不是 DBID。
```

下一步应评审 **同地址 Snoop 排序与 CPU/LoadPipe 外部接口字段**，随后才是参数冻结、Chisel Bundle 和 RTL。本文件只记录资料、候选映射与开放问题。
