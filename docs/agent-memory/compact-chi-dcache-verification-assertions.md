# DCache–L2 Compact CHI 验证断言草案

更新：2026-10-19
范围：L1 DCache ↔ L2 Compact CHI；断言名和信号名是设计草案，翻译到 RTL 时需替换为实际接口。

## 断言原则

先验证不变量，再验证某一条时序。每条断言说明：触发条件、必须成立的结果、覆盖的风险。

- `REQ/RSP/DAT/SNP/EVT` 的方向按 L1 视角描述。
- `TxnID/DBID` 是协议关联标识；MSHR/ProbeEntry/WritebackEntry 是本地结构。
- `I/SC/UC/UD` 是逻辑状态；实际 RTL 可能使用不同编码。
- `valid && ready` 才表示一拍真正传输成功。

## 1. 请求与 MSHR 关联

### A1：每个已发出的请求都能找到上下文

```text
TXREQ 或 TXEVT 成功握手
-> 必须存在一个有效的本地 MSHR/WritebackEntry
-> 该表项保存原始 TxnID、line_addr 和请求类型
```

风险：响应回来后没有表项，或者把响应交给错误请求。

### A2：一个原始 TxnID 不能同时对应两个活动请求

```text
active_req_count(original_txn_id) <= 1
```

风险：延迟响应被错误匹配到新请求。

### A3：收到下游响应时必须匹配原始请求

```text
RXRSP/RXDAT 的原始事务标识
-> 必须匹配有效 MSHR/WritebackEntry
```

未知 TxnID 应进入错误处理或断言失败，不能静默丢弃。

### A4：Retry 只能作用于已经发出的请求

```text
PRETRYV && PRETRYTXNID = id
-> 必须存在 active_request(id)
```

Retry 不能创建一笔全新的 MSHR，也不能匹配到已经释放的表项。

## 2. TxnID、DBID 和后续消息

### B1：CompDBIDResp 必须先找到原始请求

```text
CompDBIDResp(original_txn_id, dbid)
-> lookup(original_txn_id) 成功
-> 保存 dbid 到该表项
```

### B2：后续数据/确认使用返回 DBID

对本地 Compact CHI 字段约定：

```text
原始请求：TxnID = 7
返回：DBID = 3
后续 UpDAT/UpRSP 的关联 TxnID = 3
```

断言重点：后续消息使用保存的 `remote_dbid`，不能误用原始 `req_txn_id`。

### B3：DBID 未到达前禁止发送依赖它的数据

```text
WriteBackFull && !have_dbid
-> 不允许发送 CopyBackWrData

WriteUniqueFull && !have_dbid
-> 不允许发送 NonCopyBackWrData
```

## 3. 多拍 DAT

### C1：DataID 必须属于当前事务

```text
RXDAT/TXDAT(DataID)
-> 必须匹配当前表项的 TxnID/DBID
```

### C2：DataID 不能重复完成同一拍

```text
received_mask[DataID] = 0
-> 接收该 beat 后置 1
received_mask[DataID] = 1
-> 不得再次把它当成新 beat 计数
```

### C3：整行完成条件

```text
received_mask == expected_mask
-> refill_data_complete = 1
```

未收齐时：

```text
不得提交完整有效 Tag
不得提交最终 SC/UC/UD
```

### C4：写回数据必须全部发送

```text
WriteBackFull 完成
-> sent_mask == expected_mask
```

不能因为收到 `Comp` 或 `CompDBIDResp` 就丢弃尚未发送的 beat。

## 4. 状态和权限

### D1：I 不能直接执行本地命中 Store

```text
state == I
-> 不允许把请求当作 writable hit 完成
```

必须走获取数据/权限的路径，例如 `ReadUnique` 或完整覆盖写路径。

### D2：SC 不能单方面变成 UC

```text
state == SC && local_store
-> 不允许仅靠本地逻辑提交 UC
```

必须有有效的权限升级流程和 L2 协调结果。

### D3：UC 写入后成为 UD

```text
state == UC && local_store_commit
-> next_state == UD
```

### D4：SC 写入前必须解决冲突副本

```text
SC -> writable
-> 必须有相应的 ReadUnique/权限授权完成
```

### D5：UD 的脏数据责任不能无故消失

```text
state == UD
&& !writeback_complete
&& !snoop_data_accepted
-> 不允许直接变为 I/丢弃 data
```

## 5. Snoop 响应

### E1：收到 Snoop 必须生成对应响应

```text
RXSNP accepted
-> eventually TXRSP/SnpResp 或 TXDAT/SnpRespData
```

具体选择取决于状态和目标 Snoop：

```text
Clean + 状态响应：TXRSP/SnpResp
Dirty + 数据响应：TXDAT/SnpRespData
```

Compact CHI 本地草稿允许状态-only 或状态+数据两条路径；不要强制每个数据响应都额外发送一条 SnpResp。

### E2：Clean Snoop 不应凭空发送脏数据

```text
state == SC/UC
-> 选定的 clean response 路径不应声称返回 dirty data
```

### E3：Dirty Snoop 必须保留并交付最新数据

```text
state == UD
&& target_requires_data
-> 必须发送完整 SnpRespData
-> 数据发送完成前不得丢弃 UD 数据
```

### E4：同地址 Snoop 与主动请求不能独立提交

```text
MSHR.line_addr == RXSNP.line_addr
-> 进入 transient arbitration
-> 不允许主动请求和 Snoop 各自提交矛盾最终状态
```

## 6. ReadShared/ReadUnique

### F1：ReadShared 的请求和最终状态匹配

```text
ReadShared 完成
-> 返回数据
-> final state 必须符合返回 Resp
```

普通 Load 的自然结果是 `SC`，但本地 Compact CHI 表允许的结果集合需按手册解码，不能在 RTL 中无条件硬编码。

### F2：ReadUnique 的权限目标

```text
ReadUnique 完成
-> 必须得到可写权限或明确的协议失败/重试结果
```

如果 Requester 保留完整有效数据且允许 permission-only 返回：

```text
Comp/UC 可以不带 CompData
```

如果数据已失效，或 `ExpCompData=1`：

```text
必须返回 CompData
```

### F3：CompAck 不能早于 Comp/CompData

```text
!received_comp_or_compdata
-> 禁止发送 CompAck
```

收到后：

```text
CompAck.TxnID 使用返回 DBID
```

## 7. WriteBackFull 和 Evict

### G1：脏行只能走写回路径

```text
state == UD && eviction
-> WriteBackFull
-> 需要 CopyBackWrData
```

### G2：干净行不应凭空写回 dirty data

```text
state == SC/UC && clean eviction
-> Evict
-> 通常不发送 CopyBackWrData
```

### G3：WritebackEntry 释放条件

分步回复：

```text
comp_seen && sent_mask == expected_mask
-> 才能释放
```

组合回复：

```text
compdbidresp_seen && sent_mask == expected_mask
-> 才能释放
```

### G4：TXDAT 反压期间保持数据

```text
TXDAT.valid && !TXDAT.ready
-> 当前 beat、WritebackEntry 和脏数据必须保持不变
```

## 8. Credit 和 Retry

### H1：首次请求必须有足够动态 Credit

```text
首次 TXREQ 离开 L1
-> required_dynamic_credit_count >= request_cost
```

### H2：Credit 不能重复消费

```text
一个 Credit 只能授权/支持一个对应资源消耗
```

多个等待 MSHR 不能同时因为一个 grant 被唤醒并重发。

### H3：Retry 不能丢失

```text
PRETRYV == 1
-> L1 必须捕获 PRETRYTXNID 和资源 mask
```

### H4：Retry 必须命中已有请求

```text
PRETRYTXNID
-> 必须匹配有效 MSHR/活动请求
```

### H5：重发前必须有所有要求的静态资源

```text
retry_resource_mask ⊆ held_static_credits
-> 才能重发
```

### H6：重发使用 AllowRetry=0

```text
retry_count == 1
&& resend
-> AllowRetry == 0
```

### H7：Retry 等待期间不释放 MSHR

```text
retry_pending
-> 原始 MSHR/context 保持有效
```

## 9. 队列和资源

### I1：ProbeQueue 不溢出

```text
accepted_rxsnp_count <= guaranteed_receive_capacity
```

已授出的接收容量、在途消息和已占用表项必须统一记账。

### I2：不存在重复容量承诺

```text
physical_capacity
>= occupied_entries + outstanding_capacity_promises
```

这是教学设计中的容量不变量；具体 RTL 可能用不同计数器实现。

### I3：同一 MSHR 不重复分配

```text
active_mshr(line_addr, req_txn_id)
-> 不能再次分配同一逻辑请求的新 MSHR
```

## 10. 反压和进度

### J1：未握手的数据不能被认为完成

```text
valid && !ready
-> 不得清除 pending 状态
```

### J2：Retry/响应通知不能因 MSHR 满而丢弃

已有请求的 Retry 应更新已有表项，不需要新的 MSHR。

### J3：基本进度性质

在满足下游最终提供 Credit、响应和数据的假设下：

```text
有效请求最终进入完成、重试等待或明确错误处理
```

不能永久停留在：

```text
WAIT_STATIC_CREDIT
WAIT_RXDAT
WAIT_TXDAT_READY
```

## 建议的首批 SVA 化顺序

1. `TxnID/DBID` 响应匹配。
2. `received_mask/sent_mask` 多拍数据完整性。
3. `UD` 数据保留和 TXDAT 反压稳定性。
4. `SC/UC/UD/I` 权限转换。
5. Retry 捕获、资源齐备和 `AllowRetry`。
6. 同地址 MSHR/Snoop 冲突。
7. Credit 不重复消费和 ProbeQueue 不溢出。
8. 最后再做端到端 liveness。

## 重要限制

这是一份协议级断言草案，不是可直接编译的 SVA。需要根据实际 RTL 确定：

- valid/ready 信号名；
- TxnID/DBID 字段所在方向；
- 状态编码；
- beat 数和 DataID 编码；
- 是否允许乱序；
- Retry 的确切字段保留规则；
- CMO、原子操作、地址冲突 Retry 的实现细节。

## Chisel translation plan

The rules above are design-time reminders until the DCache RTL exists. When implemented in Chisel, translate each protocol invariant into `assert` statements guarded by actual channel handshakes (`valid && ready`, or the project's equivalent).

Illustrative shape only; names and widths must follow the actual design:

```scala
val rxRspFire = io.rxRsp.valid && io.rxRsp.ready
val rxDatFire = io.rxDat.valid && io.rxDat.ready

val mshrMatch = mshrValid.zip(mshrTxnId).map { case (v, id) => v && id === io.rxRsp.bits.txnId }
val mshrMatchCount = PopCount(mshrMatch)

when (rxRspFire) {
  assert(mshrMatchCount === 1.U, "RXRSP must match exactly one active request entry")
}
```

For a data response whose association uses a returned DBID, use the locally stored DBID mapping and the relevant channel/message type; do not apply one universal ID rule to every RSP/DAT. For multi-beat data:

```scala
when (rxDatFire) {
  assert(!receivedMask(io.rxDat.bits.dataId), "duplicate DataID beat")
  receivedMaskNext(io.rxDat.bits.dataId) := true.B
}
```

For TXDAT backpressure, assert stability while `valid` is held without `ready`:

```scala
val txDatStallPrev = RegNext(io.txDat.valid && !io.txDat.ready, false.B)
val txDatBitsHold  = RegEnable(io.txDat.bits, io.txDat.valid && !io.txDat.ready)

when (txDatStallPrev) {
  assert(io.txDat.valid, "TXDAT valid dropped during backpressure")
  assert(io.txDat.bits === txDatBitsHold, "TXDAT payload changed under backpressure")
}
```

These are templates, not compile-ready code. The final Chisel assertions need:

- actual Bundle field names and widths;
- the direction-specific meaning of TxnID/DBID;
- the queue lookup and arbitration implementation;
- reset and flush exceptions;
- error/poison/retry behavior;
- whether a response may legally match a writeback table rather than an MSHR.

Keep protocol assertions next to the relevant queue/channel logic, and add separate cover properties for normal completion, Retry/resend, dirty Snoop data, and multi-beat refill.

