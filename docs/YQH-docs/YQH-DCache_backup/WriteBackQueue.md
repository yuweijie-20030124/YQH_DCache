## 功能描述
WritebackQueue 保存已经离开 Cache Array 的那一份副本，并把它写回到 L2 Cache中。MainPipe 的 s3 一旦把请求交进来，Array 里的旧行就可以被覆盖。后面 L2 还没收完，也不用再回 Array 里读。

它收四类东西：

+ refill 换出的有效旧行。SC、UC 是干净的 Evict。UD 是 WriteBackFull，必须带 64B。
+ Snoop 的应答。无数据走 TXRSP，有数据走 TXDAT。
+ CMO clean、flush 要写回的脏行。
+ refill 返回“共享且 PassDirty”时先交下来的脏数据。本地最后安装成 SC，不在 L1 留 SD。

队列有 18 项，必须比 16 个 MSHR 多。原因是 MissQueue 不保存写回数据。最坏时 16 个 MSHR 各自已经交出一条写回，而这些写回还在等 L2。这时下一次 refill 的 s3 仍要能再放进一条，否则新的安装会被写回堵住。18 项留出这个余量。同地址的旧项还在时，新的同地址请求仍然不收，余量不能拿来违反同地址唯一。



<img src="https://cdn.nlark.com/yuque/0/2026/png/35409901/1793276659979-0d52bd6c-e591-46ca-90bb-22184a17ed4f.png" width="726.5454545454545" title="" crop="0,0,1,1" id="u65f2fcb0" class="ne-image">



## 参数描述
组织参数以总览为准。

| 参数 | 值 | WritebackQueue 里怎么用 |
| --- | --- | --- |
| nReleaseEntries | 18 | 项号 0～17。必须大于 nMissEntries |
| evtTxnId | 17～34 | 主动写回的 TXEVT.txnId = 17 + 项号。禁止使用 0～16，那些属于 MSHR 和 CMO |
| snpTxnId | 8 bit | 只有 Snoop 应答使用。原样带回 RXSNP.txnId，不用上面的 17～34 |
| blockBytes | 64 | 有数据的项保存整行。TXDAT 每拍 32B，`dataId=0` 是低半行，`dataId=1` 是高半行 |
| 数据宽度 | 256 bit | 两拍发完。两拍中间可以有气泡，不能插入另一项的数据 |
| Meta | I、SC、UC、UD | 队列不保存 SD。UD 进入时一定 `hasData=1` |




## 接口描述
方向按照从WriteBackQueue的视角来看。



**WBQIOBundle**

| 字段 | 方向 | 作用 |
| --- | --- | --- |
| WriteBackReq | DecoupledIO | MainPipe向WBQ传L2写回信号 |
|  |  |  |
| TXEVT | out | TXEVT通道 |
| TXDAT | out | TXDAT通道 |
| TXRSP | out | TXRSP通道 |
| RXRSP | in | RXRSP通道 |
|  |  |  |
| BlockMissResp | out | 在WBQ中 |
| BlockMissCheckResp | in | LoadPipe和Mainpe要检查要发miss的cacheline是否在WBQ中 |




**WriteBackReq**

| 字段 | 位宽 | 方向 | 作用 |
| --- | --- | --- | --- |
| data | 512 | in | MissReq传进来要写回的整条cacheline 数据512bits |
| addr | 48 | in | MissReq传进来要写回的cacheline地址 |
| opcode | 3 | in | WBQ申请什么L2请求 |
| resp | 3 | in | 事务结束后的状态 |
| passDirty | 1 | in | snoop有没有数据返还？ |
| respErr | 2 | in | resp错误类型 |
| snpTxnID | 8 | in | 回填SNP的TxnID |




| 来源 | 条件 | opcode |
| :--- | :--- | :--- |
| miss/replace | 脏，带数据 | `WriteBackFull` |
| miss/replace | 干净，不带数据 | `Evict` |
| miss/replace | 干净，但仍带数据（只有打开 `alwaysReleaseData`） | `WriteEvictFull` |
| probe | 不带数据 | `SnpResp` |
| probe | 带数据 | `SnpRespData` |


## 事务描述
### 干净 victim：Evict
refill 的 s3 发现旧行是 SC 或 UC。

1. s3 把无数据请求交进一个空项。同时才能把新行写入这个 way。
2. 项发 TXEVT，opcode=0，txnId=17+项号，地址是旧行的物理地址。
3. L2 收下之后等 RXRSP。Comp 或 CompDBIDResp 里的完成到达后，项释放。
4. 不发 TXDAT。即使响应里带着 dbId，也不使用。

不能把 UD 先改成 SC 再走这条路径。那样脏数据就没有副本了。

### 脏 victim：WriteBackFull
旧行是 UD。

1. s3 先把 64B 和地址交进队列，再写新行。队列没 ready，s3 停住，旧行还留在 Array 里。
2. 数据晚一拍写入项。然后发 TXEVT，opcode=1。
3. 等到 DBIDResp 或 CompDBIDResp，得到 dbId。在这之前 TXDAT 不能发。
4. TXDAT 发两拍 CopyBackWrData。txnId 填 dbId，不是 17+项号。先 `dataId=0`，再 `dataId=1`。两拍的 opcode、resp、txnId 必须相同。
5. 数据发完，并且完成已经到达，项才释放。DBIDResp 单独到达不算完成。

Resp 表示脏数据已经交出，写回事务的最终状态是 I。不要因为发出了数据就把本地 Tag 写成 UC。本地这个 way 的新状态由同一次 refill 安装，和这项无关。

### Snoop 无数据
MainPipe s3 已经改好 Meta，交来一个 `hasData=0` 的 snoop 请求。

1. 项直接准备 TXRSP，opcode=1。txnId 填原来的 Snoop 编号。resp 填 I、SC 或 UC。
2. 边界仲裁赢了并且 L2 ready 收下，下一拍项释放。
3. 不等 RXRSP，也不发 TXEVT。

miss 的 Snoop 也走这里，resp 为 I。

### Snoop 有数据
原来是 UD，或者对方要求数据。

1. 64B 同样晚一拍写入。
2. 不发 TXEVT。两拍都走 TXDAT，opcode 为 SnpRespData。txnId 填 Snoop 编号，不填 dbId。
3. 两拍都被收下后释放。不等 RXRSP。
4. 脏责任一起交出时，resp 要带上 PassDirty。只清 dirty、不把数据发出去，是不允许的。

MainPipe 在 `wbReq` 握手后才能离开 s3。所以项存在，就表示 Array 的 Meta 已经按这条 Snoop 改完。队列后面只负责把已经决定的应答送出去。

### CMO
clean：命中 UD 时，数据进入本队列，Meta 在 MainPipe 里改成 UC。队列按带数据的写回发送。

flush：命中 UD 时同样带数据。Meta 改成 I。

inval：第一版不写回，脏数据丢弃，不进本队列。

zero：不经过本队列。没有独占权限时走 MissQueue。

CMO 指令何时对 CPU 完成，看 MissQueue 里的 CompCMO，不看本队列释放。但是 clean、flush 必须先看到 `wbReq` 被本队列收下，处理它的流水才能继续。本队列释放只说明 L2 已经收完这份数据或 Evict。

### 共享且 PassDirty
L2 返回共享，同时又把脏责任交给 L1。L1 不安装成 SD。

refill 的 s3 先把这 64B 交进本队列，再把 Array 安装成 SC。两项在同一拍都要被收下，否则 s3 停住。

这项 `reason=passDirty`，`hasData=1`，告诉 L2 的最终状态是 SC，并且脏责任已经交出。它不是 victim。不能编成 WriteBackFull，因为 WriteBackFull 表示 L1 不再持有这行，和“安装成 SC”矛盾。

TXEVT 目前只有 Evict 和 WriteBackFull 两种 opcode，没有第三种。因此这一项的通道编码还没有冻结。队列必须单独记住 `passDirty`，不能临时改成 WriteBackFull 或 Evict。数据仍然要按两拍 TXDAT 发出。在 opcode 冻结之前，不把这项发出去。

### 什么时候释放
| 种类 | 可以释放的条件 |
| --- | --- |
| Evict | TXEVT 已被收下，并且 RXRSP 给出完成 |
| WriteBackFull | 两拍 TXDAT 已被收下，并且完成已到。只有 dbId 不行 |
| SnpResp | TXRSP 被 L2 收下的下一拍 |
| SnpRespData | 两拍 TXDAT 都被收下的下一拍 |
| passDirty | 通道编码冻结之后，按那条事务的完成条件。当前不发送 |


释放之后 `wbBlock` 不再挡住这个地址。MSHR 不会因为这项释放就释放。CompAck、pending snoop 仍由 MissQueue 自己判断。

## 存储组织与数据结构
WriteBackEntry，共18条entry。

| 字段 | 位宽 | 作用 |
| --- | --- | --- |
| opcode | 3 | 内部编码：`Evict` / `WriteEvictFull` / `WriteBackFull` / `SnpResp` / `SnpRespData`。决定走哪条通道、带不带数据、要不要等完成 |
| resp | 3 | 这笔事务结束后的 CHI 状态。主动写回恒为 `I`；snoop 来自 `probe_new_coh`，可以是 `I` / `SC` / `UC` / `UD` |
| respErr | 2 | 控制 flit 的错误。第一版不做 tag 奇偶校验，MainPipe 恒填 `OK` |
| passDirty | 1 | 只给 `SnpRespData`。交出去的数据是脏的则为 1。主动写回的脏不脏已经在 opcode 里 |
| snpTxnID | TxnIDBits | 进来的 SNP 的 TxnID。只有 `SnpResp` / `SnpRespData` 回填它。宽度跟链路定义走，不是 `log2(entry 数)` |
| addr | 42 | 块地址。默认 `PAddrBits = 48`，块大小 64B，低 6 位恒为 0。冲突检查和 flit 地址都用它 |
| data | 512 | 整行数据，64B。分配的下一拍才写入 |
| dataReady | 1 | 这拍数据已经写进 `data`。`SnpRespData` 和 `WriteData` 要等它；控制 flit 不用等 |
| dbid | TxnIDBits | `CompDBIDResp` 里带回的 DBID。只有 `WriteBackFull` / `WriteEvictFull` 在 `s_dat` 用它当 `WriteData` 的 TxnID |
| state | 2 | `s_invalid` / `s_req` / `s_wait_comp` / `s_dat`，每个WritebackEntry的状态。 |
| remain | 2 | 还没发出去的 data beat。当前总线 256 bit，64B 行是 2 拍。进入 `s_dat` 才置上，不能在分配时就置 |


## 流水级行为
本队列没有 s0 到 s3。拍与拍之间是项的状态和通道握手。

### 收下 MainPipe
+ s3 的 `wbReq.valid` 且有空项、地址不冲突：当拍写入控制字段，项离开空闲。
+ 数据在下一拍写入。这一拍若 `hasData=1`，发送数据的资格还没有。
+ 同一拍只能收一条。MainPipe 只有一个 `wbReq`。
+ ready 为 0 时，MainPipe 保持 s3，Array 的写也不能先发生。

### 选 TXEVT
+ 空闲拍里，编号最小且需要 TXEVT 的项获得这条通道。
+ payload 保持到 L2 ready。不能因为另一项优先级更高而改地址或 opcode。
+ fire 之后这项进入等响应。TXEVT 本身不带数据。

### 收 RXRSP
+ 边界已经按 txnId 17～34 把响应送到本队列。其他编号不会到。
+ 对上项号之后，当拍记下 dbId、完成，或两者都记下。
+ 项还没准备好接收时，这一路 `ready=0`，L2 保持 payload。正常情况下等响应的项总是能收，不依赖 MainPipe。
+ 编号对不上任何有效项，视为协议错误。不分配新项，也不把 dbId 写进别的项。

### 选 TXDAT
+ 可以发送的条件：数据已经写入；若是 WriteBackFull，还要 `dbidValid=1`；若是 SnpRespData，不需要 dbId。
+ 选中后先发 `dataId=0`。这一拍 fire 之后，下一次仍是这项，发 `dataId=1`。
+ `ready=0` 时重复同一拍，dataId 不变。
+ 两拍都 fire 后，这项不再参加 TXDAT 仲裁。

### 选 SnpResp
+ 无数据 Snoop 项准备好 TXRSP payload。
+ 是否真正送到 L2，还要看边界上和 CompAck 的仲裁。
+ 没赢就保持。赢了并 fire 之后，这项下一拍释放。

## 状态机行为
一项按原因走不同的状态。

```latex
Evict
空闲 -> 发 TXEVT -> 等完成 -> 空闲

WriteBackFull
空闲 -> 等数据写入 -> 发 TXEVT -> 等 DBID -> 发两拍 TXDAT -> 等完成 -> 空闲
若完成来得比数据早，等完成并进“发两拍”，数据发完直接回空闲。

SnpResp
空闲 -> 发 TXRSP -> 空闲

SnpRespData
空闲 -> 等数据写入 -> 发两拍 TXDAT -> 空闲

passDirty
空闲 -> 等数据写入 -> 停在这里，直到通道 opcode 冻结
```

## 代码实现约定

日期：2026-11-03。本节覆盖上文里冲突的句子，尤其是「共享且 PassDirty 的通道还没冻结，所以先不发送」。代码在 `src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala`。目录名是 `WriteBackQueue`。没有接到 `DCache`，也没有改 MainPipe。`mill -i top.compile` 通过，并单独综合出了 Verilog。临时的 `WriteBackQueueGen` 已删除，避免和顶层 `App` 冲突。

### 为什么共享且 PassDirty 仍发 WriteBackFull

TXEVT 的 opcode 只有 1 bit：0 是 Evict，1 是 WriteBackFull。没有第三种 opcode，也没有 Resp 字段。共享且脏不能再等一个新 opcode。

队列内部仍把这件事记成 `PassDirty=5`，避免和真正换出的脏行混在一起：

- 换出的脏行，内部 opcode 是 `WriteBackFull=2`。线上 TXEVT 也是 WriteBackFull。后面两拍 `CopyBackWrData` 的 Resp 固定为 `I=0`。含义是这份脏数据交出后，L1 不再持有旧行。新行状态由同一次 refill 安装。
- 共享且 PassDirty，内部 opcode 是 `PassDirty=5`。线上 TXEVT 仍然是 WriteBackFull，因为只有这一个能带数据的 EVT。区别在数据拍：Resp 固定为 `SC_PD=5`。含义是脏责任已经交出，但 L1 还把这行安装成 SC，不安装 SD。

DBID 到了才发这两拍。只拿到 DBID 不释放；完成可以比数据先到，数据发完且完成已到才释放。

### 为什么不接 MainPipe 现有的 wbReq

MainPipe 现在的 `wbReq` 只有地址、整行数据、`passDirty` 和旧一致性状态。没有 opcode、Resp、`respErr`、`snpTxnId`。Snoop 应答和 CMO 写回表达不出来。本模块用自己的 `WriteBackReq`。接到 MainPipe 要改它的请求口，这一版不做。

### 通道和资源

- 18 项。Evict、WriteBackFull、PassDirty 的 TXEVT.txnId = 17 + 项号，范围 17～34。
- Snoop 应答带回原来的 `snpTxnId`，不占 17～34。无数据走本模块准备好的 TXRSP；有数据走 TXDAT，txnId 仍是 Snoop 号，不用 DBID。
- 没有 Credit / Retry。`txRsp` 只准备无数据 SnpResp，和 MissQueue 的 CompAck 由顶层仲裁。本模块不看仲裁结果以外的事：自己的 `txRsp` 没 fire 就保持同一项。
- 同物理行已有项，或者 18 项已满，或者 opcode 不认识，`req.ready=0`。`WriteEvictFull` 不收，`alwaysReleaseData` 关闭。
- 地址按 64B 对齐后保存。TXEVT.addr 是 48 bit 行地址，低 6 位为 0。这跟后来接受的 Compact CHI 一致：EVT 48 bit，只有 SNP 仍是 45 bit。
- 项内保存 512 bit。TXDAT 每拍 256 bit，`dataID=0` 是低半行，`dataID=1` 是高半行。`byteEnable` 是 32 bit，第一版全 1。
- `traceTag`、`ns`、`memAttr`、`wayValid`、`way` 第一版发 0。目标节点用 `l2NodeId`。请求口没有 Snoop 的 srcID，所以 SnpResp 的 tgtID 也先固定为 L2。CopyBack 见到 RXRSP 之后，TXDAT 的 tgtID 改用该响应的 srcID。
- 数据在收下的当拍写入寄存器，下一拍才可见。`dataReady` 和 `busy` 同时变 1，不会再多等一拍。通道 `valid` 期间用 hold 锁住项号，ready 为 0 时不改 payload，两拍数据之间可以有气泡，但不能换成另一项。

### 释放

| 种类 | 释放 |
| --- | --- |
| Evict | TXEVT 已被收下，并且 RXRSP 是 Comp 或 CompDBIDResp。单独的 DBIDResp 不释放 |
| WriteBackFull、PassDirty | 两拍 TXDAT 已发出，并且完成已到 |
| SnpResp | TXRSP fire 的下一拍。不等 RXRSP |
| SnpRespData | 第二拍 TXDAT fire 的下一拍。不等 RXRSP |

`blockQuery` 有四路，依次是 LoadPipe0、LoadPipe1、MainPipe、CMO。同物理行还有项时对应的 `block` 为 1。`wfi.safe` 只表示这 18 项都空，不看 `wfi.req`。顶层还要再与上 MissQueue 和 ProbeQueue。

RXRSP 只接 txnId 17～34，而且该项必须还在等 EVT 响应。别的编号由顶层送给 MissQueue 或 CMO。对不上就视为协议错误。

Entry 不是子模块，状态在队列里更新。
