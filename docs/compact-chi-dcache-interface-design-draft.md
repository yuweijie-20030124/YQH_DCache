# L1 DCache - L2 Compact CHI 接口与参数设计草案

状态：接口范围已确认，字段和参数仍待评审，尚未开始 RTL。

更新日期：2026-10-20

本文件用于在定义 Chisel Bundle 和编写 RTL 之前，统一接口语义、参数候选值和未决问题。它不覆盖用户已有的工作区修改，也不代表最终实现规格。

## 0. 已确认的第一阶段方向

用户已确认：

```text
CPU 请求和响应使用 valid/ready；
CPU 侧参考 XiangShan LoadPipe，而不是简单的单拍请求接口；
CPU 侧支持虚拟地址，采用 VIPT 思路；
CPU 数据宽度为 64 bit；
第一阶段优先定义 CPU/L1 与 L1/L2 的外部接口和可能事务，不先实现完整 Load miss；
第一阶段定义 Compact CHI 的全部通道，而不是只定义 ReadShared 所需通道。
```

这一阶段的交付物是：

```text
外部端口方向；
Bundle 字段；
valid/ready 语义；
ID 关联规则；
事务 opcode 与响应矩阵；
VIPT 地址组织；
参数候选值和未决项。
```

这仍然是接口规格阶段，不开始定义正式 Chisel Bundle，也不开始 RTL。

## 1. 当前设计方向

第一版目标是：

```text
L1 DCache <-> L2 Cache
Compact CHI 消息语义
每个通道使用 valid/ready
不使用 P-Credit
不使用 Retry
```

这里的“不使用流控 Credit”不等于没有流控。`valid/ready` 仍然负责通道级反压。

### 1.1 TXREQ 的 ready 语义

第一版采用强准入语义：

```text
TXREQ.valid && TXREQ.ready
```

表示 L2 已经能够正式接收这笔请求，并已为后续事务处理保留足够的必要资源。

因此：

```text
TXREQ.ready = 0：请求尚未被接收，L1 保持 valid 和全部 payload 稳定。
TXREQ.ready = 1 且握手成功：请求正式被接受，不再用 Retry 拒绝。
```

如果未来把 `ready` 降级为“入口 FIFO 还能收一条消息”，但握手后仍可能因为事务资源不足而拒绝请求，则必须重新引入 Retry 或其他显式拒绝机制。当前草案不采用这种弱语义。

### 1.2 通道依赖约束

从 L1 Requester 视角，继续遵守 Compact CHI 的通道依赖规则：

```text
RXSNP 的接收不能依赖 TXREQ 的进度。
RXSNP 可以受到 TXRSP/TXDAT 响应资源限制。
RXRSP 的接收不能依赖其他通道。
RXDAT 的接收不能依赖其他通道。
```

对第一版 `valid/ready` 实现的直接约束：

```text
rxDat.ready 只看 RefillBuffer/接收状态机等本地接收能力。
rxRsp.ready 只看 RXRSP 自己的本地接收能力。
rxSnp.ready 不能等待 txReq.fire。
```

## 2. 第一阶段事务范围

第一阶段不试图一次实现完整 DCache RTL，而是先定义完整外部接口和可能发生的事务。具体 RTL 实现顺序另行冻结。

### 2.1 第一阶段文档必须覆盖

```text
CPU LoadPipe 请求/响应路径
VIPT 虚拟地址、物理地址旁路和 index/tag 切分
所有 Compact CHI 通道的方向和 valid/ready
ReadNoSnp/ReadOnce/ReadShared/ReadUnique/MakeUnique
WriteUniqueFull/WriteNoSnpPtl/WriteNoSnpFull
Evict/WriteBackFull
CleanShared/CleanInvalid/MakeInvalid
SnpMakeInvalid/SnpToInvalid/SnpToShared/SnpToClean
Comp/CompData/CompAck/CompCMO/DBIDResp/CompDBIDResp
CopyBackWrData/NonCopyBackWrData/SnpRespData
多拍 DataID、receivedMask、last 和 DBID 关联
同地址请求与 Snoop 的瞬态状态及释放条件
MSHR/ProbeQueue/WritebackQueue 的外部交互
```

### 2.2 第一阶段暂不实现 RTL

```text
WriteBackFull
Evict
TXEVT
TXDAT CopyBackWrData
ReadUnique 完整路径
MakeUnique
非 Cacheable 访问
CMO
原子事务
跨层预取
多条 Snoop 数据返回路径
```

这些事务先在协议文档和状态矩阵中定义，再按依赖顺序进入 RTL。原子事务和跨层预取仍需根据 Compact CHI 文档单独标注，不在定义不清时自行补全。

## 3. L1 DCache 端口草案

### 3.1 CPU 侧端口：参考 XiangShan LoadPipe

CPU 侧建议使用两个独立的 Decoupled 通道：

```text
cpuReq  : Flipped(Decoupled(CpuReq))
cpuResp : Decoupled(CpuResp)
```

XiangShan 的 `DCacheLoadIO`/`DCacheWordReq` 还包含流水线相关的：

```text
s1/s2 kill
虚拟地址和物理地址旁路
pc
replacementUpdated
prefetch/source 信息
miss/replay 结果
请求 id
```

我们借鉴这些接口边界，但不直接复制所有 core-specific 字段。需要区分：

```text
CPU/LSU <-> DCache 的外部请求/响应字段；
LoadPipe 内部阶段寄存器、Tag/Data Array 端口和流水线控制字段。
```

第一阶段 `CpuReq` 候选字段：

| 字段 | 含义 | 是否第一阶段必需 |
|---|---|---:|
| `vaddr` | CPU/LSU 虚拟地址，用于 VIPT index/流水线 | 是 |
| `paddr` | 翻译后的物理地址，至少在 miss/CHI 前有效 | 是 |
| `cmd` | Load/Store/维护操作 | 第一阶段至少 Load |
| `size` | 访问大小 | 是 |
| `wdata` | Store 数据 | 可先保留，第一阶段不使用 |
| `wmask` | Store 字节掩码 | 可先保留，第一阶段不使用 |
| `source` | CPU 请求源或 Load 标识 | 是 |
| `reqId` | 请求/Load 队列关联 ID | 是 |
| `pc` | 调试或异常关联 PC | 暂定 |
| `kill/replay` | 流水线取消和重放控制 | 待按 LoadPipe 方案定义 |

CPU 数据宽度已经确认：

```text
CPU word data width = 64 bit
```

`CpuResp` 候选字段：

```text
data
source
denied/error
```

CPU response 需要支持 valid/ready 反压；是否由独立 response queue 接管关键字响应，还是由 MSHR 持有到 CPU 接收，需要在 LoadPipe/LSU 交互设计中确认。

### 3.2 Compact CHI 侧端口：第一阶段定义全部通道

第一阶段定义完整通道集合：

```text
txReq  : Decoupled(ChiReq)
rxDat  : Flipped(Decoupled(ChiData))
txRsp  : Decoupled(ChiRsp)
rxSnp  : Flipped(Decoupled(ChiSnp))
txEvt  : Decoupled(ChiEvt)
txDat  : Decoupled(ChiData)
rxRsp  : Flipped(Decoupled(ChiRsp))
```

这里的“定义全部通道”表示：

```text
端口方向固定；
Bundle 字段完整定义；
事务 opcode 和响应矩阵完整记录；
具体 RTL 支持可以分阶段接入。
```

第一阶段不把 `TXDAT/TXEVT/RXRSP` 作为永久预留，而是将其作为完整 Compact CHI 外部接口的一部分。

## 4. Compact CHI 字段草案

### 4.1 `ChiReq`

第一阶段候选字段：

```text
opcode
addr
txnId
srcId
tgtId
size/line attribute
cacheable attribute
```

第一阶段文档需要覆盖的请求 opcode 至少包括：

```text
ReadNoSnp
ReadOnce
ReadShared
ReadUnique
MakeUnique
WriteUniqueFull
WriteNoSnpPtl
WriteNoSnpFull
Evict
WriteBackFull
CleanShared
CleanInvalid
MakeInvalid
SnpMakeInvalid
SnpToInvalid
SnpToShared
SnpToClean
```

由于当前不使用 P-Credit/Retry：

```text
不加入 Credit 字段；
不加入 Retry 控制器；
TXREQ.ready 采用强准入语义；
是否保留协议中与 Retry 相关但固定为 0 的字段，等字段表评审时决定。
```

### 4.2 `ChiData`

第一阶段至少需要：

```text
reqTxnId/original association
dbid
dataId
data
coherence state
last 或等价的 beat 信息
```

这里需要尽早冻结一个字段规则：

```text
RXDAT 使用原始 TxnID 找 MSHR，还是使用返回 DBID 找 MSHR？
```

当前学习模型采用：

```text
CompData 同时携带原始请求关联和返回 DBID；
L1 先用原始请求关联找到 MSHR；
再把 DBID 保存到该 MSHR；
后续 CompAck 使用保存的 DBID。
```

### 4.3 `ChiRsp`

第一阶段候选字段：

```text
opcode       // CompAck 或 SnpResp
txnId        // CompAck 使用返回 DBID；SnpResp 使用 Snoop 事务关联
state        // Snoop 状态响应需要
```

### 4.4 `ChiSnp`

第一阶段候选字段：

```text
opcode       // 至少 SnpToInvalid
addr
txnId
srcId
tgtId
```

## 5. 第一版参数候选值

以下是讨论用的 provisional values，不是最终冻结值。

| 参数 | 候选值 | 说明 | 状态 |
|---|---:|---|---|
| `PAddrBits` | 48 | 物理地址宽度候选 | 暂定 |
| `VAddrBits` | 48 | VIPT 虚拟地址宽度候选 | 暂定 |
| `lineBytes` | 64 | 典型缓存行大小 | 暂定 |
| `beatBytes` | 16 | 一拍数据宽度 | 暂定 |
| `beatsPerLine` | 4 | `lineBytes / beatBytes` | 派生 |
| `DataIDBits` | 2 | 4 个 beat | 派生 |
| `cpuDataBits` | 64 | CPU/LSU word 数据宽度 | 已确认 |
| `chiDataBits` | 128 | L2/CHI 一拍数据宽度 | 未决 |
| `nSets` | 待定 | 先不绑定现有 128 | 未决 |
| `nWays` | 待定 | 先从 1-way 或 2-way 验证 | 未决 |
| `nMSHR` | 2 或 4 | 验证不同地址并行 | 未决 |
| `ProbeQueueDepth` | 1 或 2 | 第一阶段同地址 Snoop | 未决 |
| `WritebackQueueDepth` | 1 | 第一阶段暂不实现写回 | 预留 |
| `TxnIDBits` | `log2Ceil(nMSHR)` 或更宽 | 单 L1 本地请求关联 | 未决 |
| `DBIDBits` | 待定 | L2 返回事务关联 | 未决 |
| `critical-word-first` | 是/否待定 | 影响 CPU response 和 MSHR 释放 | 未决 |

### 5.1 参数冻结原则

```text
硬约束
    -> 协议字段和地址切分
    -> provisional value
    -> directed test / 资源敏感性测试
    -> 冻结
```

不能因为参考 XiangShan 的某个参数就直接冻结本项目参数。

## 6. MSHR 逻辑结构草案

每个 MSHR 是一个地址控制上下文，不一定是单一大状态枚举。

```text
valid
lineAddr
setIdx
wayIdx
requestType
originalTxnId
returnedDbid
returnedState
reqAccepted
receivedMask
refillStorageId 或 refillData
criticalWordInfo
cpuResponsePending
cpuResponseAccepted
pendingSnoop
pendingSnoopTxnId
discardRefill
finalState
compAckPending
compAckSent
refillComplete
cacheInstallAllowed
cacheInstallDone
```

### 6.1 第一阶段 ReadShared 路径

```text
CPU miss
    -> 分配 MSHR
    -> TXREQ.valid=1
    -> 等待 TXREQ.ready
    -> 握手后 reqAccepted=1
    -> 接收 RXDAT，更新 receivedMask
    -> 保存 returnedDbid/returnedState
    -> 关键字可提前返回 CPU
    -> 全部 DataID 收齐
    -> 若无 pending Snoop，则允许安装
    -> 若有 SnpToInvalid，则 discard refill
    -> 发送 CompAck/SnpResp
    -> CPU response 和所有协议工作完成
    -> 释放 MSHR
```

### 6.2 不同地址并行原则

```text
MSHR[0] 被 CPU response backpressure 卡住时，
只要 MSHR[1] 空闲、地址不同且资源允许，仍可接受另一个 miss。
```

同地址则必须查找已有 MSHR/WritebackEntry/ProbeEntry，进入合并或瞬态仲裁，不能创建第二个独立地址控制者。

## 7. 已确认的端口决策

```text
CPU req/resp：使用 valid/ready；
CPU 侧：参考 XiangShan LoadPipe；
地址：保留 vaddr，并在需要时提供 paddr，采用 VIPT 思路；
CPU 数据宽度：64 bit；
第一阶段：先定义外部接口和可能事务，不先实现完整 Load miss；
Compact CHI：第一阶段定义全部通道。
```

## 8. 仍需讨论的端口和字段问题

在进入正式 Chisel Bundle 前，还需要逐项确认：

1. CPU/LoadPipe 的 `source`、`reqId`、`pc`、`lqIdx`、kill/replay 字段保留哪些？
2. CPU 的 `paddr` 在 LoadPipe 的哪一个阶段有效，并由谁提供给 DCache？
3. `RXDAT` 是否同时保留原始 TxnID 和 DBID？
4. `CompData` 的状态和 DBID 在每一拍携带，还是只在首拍/末拍有效？
5. `DataID` 是否固定为 beat index，是否要求 `last` 字段？
6. `TXREQ.ready` 是否确认“事务资源已完整准入”，而不是只确认入口 FIFO 有空间？当前倾向是强准入。
7. `critical-word-first` 第一版是否启用？
8. 同地址 Snoop 在 ReadShared 期间是否采用 `pendingSnoop + discardRefill` 策略？
9. `chiDataBits`、`nSets`、`nWays`、`nMSHR`、`ProbeQueueDepth` 和 `DBIDBits` 的候选值是什么？
10. 完整 Compact CHI 事务中，原子操作和跨层预取是否只记录为协议 TBD，还是也进入第一阶段事务矩阵？

## 9. RTL 开始条件

以下内容全部确认前，不开始定义正式 Chisel Bundle：

```text
端口方向和 valid/ready 语义确认
字段关联规则确认
line/beat/DataID 参数确认
MSHR 和 RefillBuffer 组织方式确认
瞬态 Snoop 策略确认
第一阶段事务范围确认
```

正式开始前必须明确提醒：

```text
【即将开始正式 DCache 设计】接下来将冻结参数、定义 Chisel Bundle，并开始编写 RTL/断言。
```
