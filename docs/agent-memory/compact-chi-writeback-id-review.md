# Compact CHI 写回与 ID 速查表

更新：2026-10-18。适用：L1 DCache 与 L2；以下 TX/RX 均从 L1 视角描述。

一句话：原始 TxnID 帮 L1 找到请求，返回的 DBID 帮 L2 关联后续数据；获得完成信息且数据全部发送成功，写回事务才结束。

## 一笔写回

```text
L1 -> L2：TXEVT，WriteBackFull，TxnID=9
L2 -> L1：RXRSP，CompDBIDResp，TxnID=9，DBID=4
L1 -> L2：TXDAT，CopyBackWrData，TxnID=4
```

- L1 用响应中的原始 TxnID=9 找本地写回表项，再保存返回的 DBID=4。
- 后续 UpDAT 的字段名仍叫 TxnID，此处填返回的 DBID=4。
- ID 是协议关联标识，不必等于物理队列下标。
- DataID 表示缓存行数据的位置，不表示另一笔事务。

## 完成条件

| 路径 | L2 返回什么 | L1 何时完成 |
|---|---|---|
| 分步回复 | DBIDResp 与 Comp | 已获得 DBID，发送完全部 CopyBackWrData，并收到 Comp |
| 组合回复 | CompDBIDResp | 收到组合回复后，发送完全部 CopyBackWrData |

分步路径中 Comp 可以先于全部数据发送到达。组合回复已包含完成信息，不必再等单独 Comp。即使完成信息已到，只要还有脏数据待发，保存这些数据的表项就不能直接丢弃。

## 与其他消息对比

- Refill：L2 -> L1，RXDAT，CompData。
- 写回：L1 -> L2，TXDAT，CopyBackWrData。
- 分配型读确认：L1 -> L2，TXRSP，CompAck，其 TxnID 使用返回 DBID。
- Snoop 无数据响应：TXRSP，SnpResp。
- Snoop 带数据响应：TXDAT，SnpRespData 自带状态和数据，不要求再另发一条 SnpResp。

## 易错点与检查清单

1. 找本地原请求时用原始 TxnID，不用刚收到的 DBID。
2. 后续写数据/读确认使用返回 DBID；注意它填入的字段名仍是 TxnID。
3. 写回是发送数据，不是接收 refill 数据。
4. 检查全部数据是否成功发送，不能只看 Comp 是否到达。
5. 原始事务仍有响应待返回时，不得歧义地复用其 ID。

## 五道自测

1. 原请求 TxnID=9、返回 DBID=4，L1 用哪个值找到原表项？
2. 后续 CopyBackWrData.TxnID 填多少？
3. 组合回复已收到，4 拍只发出 3 拍，能否释放仍保存剩余数据的表项？
4. 全部数据已发完，分步路径的 Comp 还没到，事务结束了吗？
5. 组合回复与全部数据均完成，是否还需等待单独 Comp？

<details>
<summary>查看答案</summary>

1. 9。
2. 4。
3. 不能，还需要成功发送最后一拍。
4. 没有，还需收到 Comp；必须保留正确匹配该响应的上下文。
5. 不需要，组合回复已提供完成信息。

</details>

来源：本地 Compact CHI 架构草稿，版本文件 compactchi-architecture-20260828-d0f2609.pdf，第 9 章通道字段、第 10.2 节分配型读、第 10.4 节写回、第 10.11 节 Snoop。资源分配和本地队列组织仍由具体微架构决定。
