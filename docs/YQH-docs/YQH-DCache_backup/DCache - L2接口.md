注：LR/SC 完全在 L1 处理，`Excl` 不出现在本接口中。

## 1. 通道总览
这里的TX/RX指的是DCache视角的七个通道名。

| 字段 | 方向 | DCache 中的主要用途 |
| --- | --- | --- |
| TXEVT | DCache → L2 | clean eviction / dirty line writeback 的起始请求 |
| TXREQ | DCache → L2 | load miss / 权限升级 / CMO / 整行或非缓存请求 |
| RXSNP | L2 → DCache | 接收 L2 的 Snoop，相当于 TileLink Probe |
| TXRSP | DCache → L2 | 返回无数据的 SnpResp，或发送 CompAck |
| TXDAT | DCache → L2 | 返回 SnpRespData，或发送 CopyBackWrData |
| RXRSP | L2 → DCache | 接收 Comp / DBIDResp / CompDBIDResp / CompCMO |
| RXDAT | L2 → DCache | 接收 CompData，按 DataID 完成 refill |




## 2. 每条通道的握手信号
| 字段 | 位宽 | 方向 | DCache 中的主要用途 |
| --- | ---: | --- | --- |
| valid | 1 | 发送方 → 接收方 | 当前周期 payload 有效 |
| ready | 1 | 接收方 → 发送方 | 接收方可以接收；`valid && ready` 时完成本拍传输 |


`ready=0` 时，发送方必须保持 payload 不变。

## 3. TXEVT
payload 6 个，加上 `valid/ready` 后共 8 个信号。方向为 DCache → L2。

DCache中的WriteBackQueue部件与L2Cache通过TXEVT相联。

| 字段 | 位宽 | 方向 | DCache 中的主要用途 |
| --- | ---: | --- | --- |
| txnId | 8 | DCache → L2 | Evict 或 WriteBackFull 的事务 ID，用于匹配后续 RXRSP |
| srcId | 7 | DCache → L2 | 上游来源节点；DCache 固定使用自己的 NodeID |
| tgtId | 7 | DCache → L2 | 目标 L2 节点 |
| opcode | 1 | DCache → L2 | 0 表示 Evict，1 表示 WriteBackFull |
| addr | 45 | DCache → L2 | 被替换 cache line 的物理地址 |
| ns | 1 | DCache → L2 | secure/Nonsecure，固定填0 |
| memAttr | 1 | DCache → L2 | 表示内存属性 |
| wayValid | 1 | DCache → L2 | AnserL2忽略，暂时不用填0 |
| way | nWays | DCache → L2 | l1告诉l2这行在哪一路 |
| traceTag | 1 | DCache → L2 | 调试追踪标记 |


`opcode=0` 表示 clean eviction，只等待完成响应。`opcode=1` 表示 dirty writeback，必须先收到 DBID，才能从 TXDAT 发送数据。

## 4. TXREQ
方向为 DCache → L2。

DCache中的MissQueue与L2Cache通过TXREQ相联。

| 字段 | 位宽 | 方向 | DCache 中的主要用途 |
| --- | ---: | --- | --- |
| txnId | 8 | DCache → L2 | 请求事务 ID，用于匹配 RXRSP 和 RXDAT |
| srcId | 7 | DCache → L2 | 请求来源节点，标识 DCache |
| tgtId | 7 | DCache → L2 | 请求目标 L2 节点 |
| opcode | 6 | DCache → L2 | 请求类型，如 ReadShared、ReadUnique、MakeUnique、CMO |
| size | 3 | DCache → L2 | 传输字节数的 log2 编码；64B cache line 填 6 |
| addr | 48 | DCache → L2 | 请求的物理地址 |
| tagAlias | 2 | DCache → L2 | VIPT alias，对应 `vaddr[13:12]`，辅助定位 cache line |
|  ns | 1 | DCache → L2 | secure/Nonsecure，固定填0 |
| order | 2 | DCache → L2 | 是否可以out of order |
| memAttr | 4 | DCache → L2 | 内存属性 |
| excl | 1 | DCache → L2 | LR/SC交给L2来做吗？YQH的reservation在L1，因此填0 |
| expCompData | 1 | DCache → L2 | 是否必须返回旧数据；区分部分 Store/AMO 与整行覆盖 |
| expCompStash | 1 | DCache → L2 | Stash 请求是否要求 L2 返回确认 |
| wayValid | 1 | DCache → L2 | AnserL2忽略，暂时不用填0 |
| way | nways | DCache → L2 | l1告诉l2这行在哪一路 |
| traceTag | 1 | DCache → L2 | 调试追踪标记 |


该通道承载 load miss、权限升级、CMO 等非 eviction 请求。LR/SC 不通过 `Excl` 交给 L2，reservation 由 L1 自己维护。

## 5. RXSNP
payload 6 个，加上 `valid/ready` 后共 8 个信号。方向为 L2 → DCache。

<img src="https://cdn.nlark.com/yuque/0/2026/png/35409901/1793101278500-953130c1-df54-485e-b870-2534ab6c4f45.png" width="554.1333333333333" title="" crop="0,0,1,1" id="C7QjV" class="ne-image">

DCache中的ProbeQueue部件与L2Cache通过RXSNP相联。

| 字段 | 位宽 | 方向 | DCache 中的主要用途 |
| --- | ---: | --- | --- |
| txnId | 8 | L2 → DCache | L2 分配的 Snoop 事务 ID；回答时必须原样带回 |
| srcId | 7 | L2 → DCache | 发出 Snoop 的 L2 节点 |
| tgtId | 7 | L2 → DCache | Snoop 的目标上游节点，用于确认是否发给本 DCache |
| opcode | 2 | L2 → DCache | Snoop 类型：失效、降为共享或清理脏责任 |
| addr | 45 | L2 → DCache | Snoop 地址；接收端补低位 0 后得到物理地址 |
| tagAlias | 2 | L2 → DCache | 与物理地址拼接起来得到想无效化的set |
| ns | 1 | L2 → DCache | secure/Nonsecure，固定填0 |
| traceTag | 1 | L2 → DCache | 调试追踪标记 |


Snoop 的 `txnId` 属于 L2 的事务编号空间，不能与 DCache 自己发出的 TXREQ/TXEVT `txnId` 混用。收到匹配的 Snoop 时，L1 还要清除对应的 LR/SC reservation。

## 6. TXRSP
payload 4 个，加上 `valid/ready` 后共 6 个信号。方向为 DCache → L2。

DCache中的MissQueue和WriteBackQueue通过仲裁之后与L2Cache的TXRSP相联。

| 字段 | 位宽 | 方向 | DCache 中的主要用途 |
| --- | ---: | --- | --- |
| txnId | 8 | DCache → L2 | SnpResp 填收到的 Snoop TxnID；CompAck 填约定的完成事务 ID |
| srcId | 7 | DCache → L2 | 响应来源节点，标识 DCache |
| tgtId | 7 | DCache → L2 | 目标 L2 节点 |
| opcode | 1 | DCache → L2 | 0 表示 CompAck，1 表示无数据的 SnpResp |
| respErr | 2 | DCache ->L2 | CompAck接收数据的错误 |
| resp | 3 | DCache → L2 | 报告 Snoop 后的缓存状态及 PassDirty 信息 |
| traceTag | 1 | DCache ->L2 | 调试追踪标记 |


该通道不携带数据。需要返回数据的 Snoop 改走 TXDAT 的 `SnpRespData`。

## 7. TXDAT
payload 8 个，加上 `valid/ready` 后共 10 个信号。方向为 DCache → L2。

DCache中的WriteBackQueue与L2Cache进行TXDAT相联。

| 字段 | 位宽 | 方向 | DCache 中的主要用途 |
| --- | ---: | --- | --- |
| txnId | 8 | DCache → L2 | 写回数据填 DBID；Snoop 数据填收到的 Snoop TxnID |
| srcId | 7 | DCache → L2 | 数据来源节点，标识 DCache |
| tgtId | 7 | DCache → L2 | 目标 L2 节点 |
| opcode | 2 | DCache → L2 | 区分 CopyBackWrData、NonCopyBackWrData 和 SnpRespData |
| respErr | 2 | DCache ->L2 | CompAck接收数据的错误 |
| resp | 3 | DCache → L2 | 报告写回或 Snoop 后的状态及脏责任转移 |
| dataId | 1 | DCache → L2 | 0 表示低 32B，1 表示高 32B |
| data | 256 | DCache → L2 | 当前拍的数据 |
| byteEnable | 8 | DCache → L2 | 字有效 |
| traceTag | 1 | DCache → L2 | 调试追踪标记，不影响数据内容 |


64B cache line 在 256 bit 数据宽度下需要两拍。数据必须按 `dataId` 定位，不能默认两拍一定按 0、1 顺序传输。

## 8. RXRSP
payload 8 个，加上 `valid/ready` 后共 10 个信号。方向为 L2 → DCache。

DCache中的MissQueue和WriteBackQueue通过txnID辨别方向之后与L2Cache的RXRSP相联。

| 字段 | 位宽 | 方向 | DCache 中的主要用途 |
| --- | ---: | --- | --- |
| txnId | 8 | L2 → DCache | 原始 TXREQ 或 TXEVT 的事务 ID，用于找回 MSHR、WBQ 或 CMO |
| srcId | 7 | L2 → DCache | 响应来源 L2 节点 |
| tgtId | 7 | L2 → DCache | 响应目标上游节点，用于确认是否发给本 DCache |
| dbId | 8 | L2 → DCache | L2 分配的数据缓冲 ID；写回时后续 TXDAT 必须使用它 |
| opcode | 3 | L2 → DCache | 区分 Comp、DBIDResp、CompDBIDResp、CompCMO 等完成消息 |
| resp | 3 | L2 → DCache | 返回授予的缓存状态或 PassDirty 信息 |
| cBusy | 3 | L2 → DCache | L2忙提示，固定填0. |
| traceTag | 1 | L2 → DCache | 调试追踪标记，不影响事务完成判断 |


`DBIDResp` 只表示可以发送写回数据，不表示写回事务已经全部完成。`CompCMO` 也不能当成普通 `Comp` 处理。

## 9. RXDAT
payload 8 个，加上 `valid/ready` 后共 10 个信号。方向为 L2 → DCache。

DCache中的MissQueue部件与L2Cache通过RXDAT相联。

| 字段 | 位宽 | 方向 | DCache 中的主要用途 |
| --- | ---: | --- | --- |
| txnId | 8 | L2 → DCache | 原始读请求事务 ID，用于找回对应 MSHR |
| srcId | 7 | L2 → DCache | 数据来源 L2 节点 |
| tgtId | 7 | L2 → DCache | 数据目标上游节点，用于确认是否发给本 DCache |
| dbId | 8 | L2 → DCache | 随数据返回的 DBID，供后续 CompAck 关联使用 |
| opcode | 1 | L2 → DCache | 下游DAT只有CompData |
| respErr | 2 | L2 → DCache | CompAck接收数据的错误 |
| resp | 3 | L2 → DCache | 返回 cache line 应进入的一致性状态及脏责任 |
| data Source | 5 | L2 → DCache | L2从哪里取数据。这里可以硬连线0 |
| cBusy | 3 | L2 → DCache | L2忙提示 |
| dataId | 1 | L2 → DCache | 指示当前 256 bit 属于 64B line 的低半部分或高半部分 |
| data | 256 | L2 → DCache | refill 数据；写入 MSHR refill buffer 后再由 MainPipe 安装 |
| traceTag | 1 | L2 → DCache | 调试追踪标记 |

