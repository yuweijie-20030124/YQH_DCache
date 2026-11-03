## 功能描述
ProbeQueue 只把 L2 发来的 Snoop 发给 MainPipe。队列有 16 项。RXSNP 来时只要有空项就收下。满了就把 `RXSNP.ready` 拉低，不接受 snoop，让 L2 保存好 snoop。

一项的寿命很短。L2 发来 snoop 的时候就申请，请求被 MainPipe 的 s0 收下之后就收回一项 ProbeEntry。s3 改 Meta、WritebackQueue 发 SnpResp 或 SnpRespData，都不由这项继续占着。

同地址的 LR reservation 还有效时，这条 Snoop 留在队列里。不送给 MainPipe，也不释放。reservation 结束后再送。



## 参数描述
| 参数 | 值 | ProbeQueue 里怎么用 |
| --- | --- | --- |
| nProbeEntries | 16 | 本地项号 0～15。这个号只用来对上交给 MainPipe 的那一拍，不是 CHI 的 TxnID |
| blockBytes | 64 | 一项对应一整行。队列里不存 64B 数据 |
| alias | `vaddr[13:12]` | 来自 RXSNP.tagAlias。物理地址恢复不了这两位。交给 MainPipe 时必须带上，否则 VIPT 会查错 set |
| LRSCCycles | 64 | 计数器大于 8 时，同地址 Snoop 留在这里 |




## 接口描述
方向按 ProbeQueue 自己看。

### 从 L2 收 Snoop
| 字段 | 方向 | 信号 | 说明 |
| --- | --- | --- | --- |
| RXSNP | in | Decoupled | 边界上的这一条线只进本队列。`ready` 就是本队列的 `ready` |


有空项时 `ready=1`。16 项都占着时 `ready=0`。如果本次不收 snoop，L2 需要保存好字段信息。

线上地址是 `paddr[47:3]`，45 bit。队列里补回低 3 位，再按 64B 对齐，实际保存的是 48 bit 行地址，低 6 位为 0。不要直接拿 45 bit 字段的 `[11:6]` 当 set。

Compact CHI 的 SNP 没有 `needData`。`ns`、`srcID`、`tgtID`、`traceTag` 第一版不往下传。SnpResp 的节点号由 WritebackQueue 填固定的 DCache 和 L2 编号。



### 交给 MainPipe
| 字段 | 方向 | 信号 | 说明 |
| --- | --- | --- | --- |
| pipeReq | out | Decoupled | `MainPipeReq`。带物理地址、还原出的 vaddr、opcode、`needData=0`、Snoop txnId、项号 |
| probeResp | in | Decoupled | MainPipe s3 的回应。`ready` 恒为 1，只握手，不改队列 |
| lrscLockedBlock | in | Valid，地址 | MainPipe 在 reservation 计数器大于 8 时拉高 |
| updateResvSet | in | Bool | LR 刚写下 reservation 的那一拍。当拍和下一拍都不向 MainPipe 发 |
| wfi.req | in | Bool | 顶层要进 WFI 时拉高。本模块不靠它做别的事 |
| wfi.safe | out | Bool | 16 项和出口锁存都空。MainPipe s1–s3 里还有没有 Snoop，由顶层再看 |


`pipeReq.id` 是 0～15 的项号。`pipeReq.snpTxnId` 才是 RXSNP 原来的编号。

`probeResp` 不能用来释放项。项在 s0 收下时就已经可以重用，s3 回来的 id 可能已经是下一条 Snoop。

为什么停两拍：LR 写下 reservation 的当拍，`lrsc_addr` 还没进寄存器。同物理行如果 alias 不同，set 也不同，MainPipe 的同 set 冲突挡不住它。所以当拍先谁都不发。下一拍地址已经可见，再比是不是同一行；这一拍仍然不发，避免比较和置位挤在同一拍。



## 事务描述
### 一条普通 Snoop
1. L2 把 RXSNP 放上总线。队列有空项，当拍收下，项从空闲进入待发送。
2. 下一次内部仲裁选中它，把 `MainPipeReq` 锁进出口寄存器，项变成已选中。这一拍还不向 MainPipe 拉高 valid。
3. 再下一拍 `pipeReq.valid` 拉高。MainPipe 的优先级是 `probe > refill > store > atomic`。s0 没有被同 set 的 s1、s2、s3 挡住就会收下。
4. 收下的当拍，这项标记为空闲。下一拍才能再分配给新的 RXSNP。
5. 后续写回脏数据、发 SnpResp 不在本模块中完成。



### reservation 挡住同地址 Snoop
MainPipe 只有一套 reservation。LR 成功后计数器从 63 往下减，大于 8 时有效。

这段时间里：

+ 同地址的 RXSNP 仍然收下，除非 16 项已经满了。
+ 这项不参加发往 MainPipe 的发送，也不释放。
+ 地址不同的 Snoop 照常发送。已经锁存的如果后来发现是同地址，拉回待发送，把唯一的出口让出来，不挡住别的地址。
+ LR 写下 reservation 的当拍和下一拍，所有 Snoop 的 `pipeReq.valid` 都是 0。已经锁存的 payload 还在，项也不释放。
+ 计数器减到 8 或以下、SC 写成功、或者这行被写回并把 reservation 清掉之后，被挡住的那项再进入 MainPipe。进入后按普通 Snoop 处理，不把 SC 提前判失败。

`valid` 在等 MainPipe 的 `ready` 时保持，payload 不变。reservation 或上面那两拍除外，这两类情况允许把 valid 拉低。



### 队列满
16 项都不是空闲时，新的 RXSNP 停在线上。已经在队列里的项继续发送。不能为了收新 Snoop 把旧项丢掉，也不能覆盖一项还没交给 MainPipe 的请求。

reservation 挡住的项仍然算占用。它不释放，所以会占用容量。

同一行同时有两项，或者新来的 RXSNP 和还在队列里的某一项同一行，仿真断言。L2 要等这条 Snoop 至少离开本队列，再发下一笔同地址 Snoop。离开本队列只表示 MainPipe s0 收下了，不表示 SnpResp 已经发出。



## 存储组织与数据结构
ProbeEntry 一项里面带什么。

16 项相同。一项里是寄存器：

| 字段 | 位宽 | 何时写入 | 作用 |
| --- | --- | --- | --- |
| `state` | 2 | 分配：空闲改为待发送。内部仲裁选中：改为已选中。被 s0 收下：改回空闲。同地址 reservation 把已选中拉回：改回待发送 | 这项是空的、在等发送，还是已经锁进出口 |
| `addr` | 48 | 分配当拍，之后不改 | 行对齐的物理地址。低 6 位为 0。和 reservation 比是不是同一行，也交给 MainPipe |
| `tagAlias` | 2 | 分配当拍，即 RXSNP.`tagAlias`，也就是这行进来时的 `vaddr[13:12]` | 和 `addr[11:6]` 拼出 set。MainPipe 用 `{tagAlias, addr[11:6]}` |
| `opcode` | 2 | 分配当拍 | Compact CHI Snoop，原样交给 `probeOp`。0 MakeInvalid，1 ToInvalid，2 ToShared，3 ToClean。队列不把它翻译成 SnpResp |
| `snpTxnId` | 8 | 分配当拍 | L2 的 Snoop 编号。原样交给 MainPipe，再放进 WritebackQueue |


不保存 `needData`。送给 MainPipe 时这一位恒为 0。SnpToInvalid 只有本地是 UD 才回数据。

出口另有一组寄存器，保存已经从 16 项里选出的那条 `MainPipeReq`。内部仲裁是编号小的优先。这条在 MainPipe 收下、或者因同地址被拉回之前，下一条不能覆盖它。

空项的选择也是编号小的优先。同一拍只有一条 RXSNP，所以最多分配一项。

`vaddr` 只还原低 14 位：`{tagAlias, addr[11:0]}`，高位补 0。MainPipe 查 set 不靠这条 vaddr 的高位。



## 状态机行为
ProbeQueue 不是 MainPipe 那种 s0 到 s3。下面是队列自己的拍。MainPipe 收下之后的 s1、s2、s3 见 `MainPipe`。

### 空闲
+ `RXSNP.valid` 且本项是编号最小的空项：写入地址、alias、opcode、txnId，状态变为待发送。
+ 这一拍还不向 MainPipe 发。

### 待发送
+ 没有被 reservation 挡住的项向内部仲裁请求。
+ 编号最小的项进入已选中，同时把请求锁进出口。
+ 被挡住的项停在这里。地址继续和 `lrscLockedBlock` 比。

### 已选中，出口锁存
+ 锁存的下一拍，如果不是 reservation 的两拍停顿、也不是同地址，`pipeReq.valid` 才拉高。
+ MainPipe s0 的 `ready` 为 1：本拍 fire。这项当拍改回空闲，出口可以立刻锁下一条。下一条的 valid 还要再等一拍。
+ `ready` 为 0，并且不是被 reservation 挡住：valid 和全部 payload 保持。不能改地址，不能换一条 Snoop，也不能把这项释放后重用。
+ 发现和当前 reservation 是同一行：valid 拉低，这项回到待发送。出口若还有别的地址，当拍就改锁那一条。
+ fire 只说明 s0 收下。s3 还没改 Meta，WritebackQueue 也还没发应答。

### 同一拍各自在做什么
| 位置 | 这一拍可以做的事 |
| --- | --- |
| 空项 | 收一条新的 RXSNP |
| 待发送的项 | 参加内部仲裁，或继续被 reservation 挡住 |
| 出口锁存 | 向 MainPipe 保持唯一的一条 `pipeReq`，或因同地址让出 |
| 刚被 s0 收下的项 | 当拍变为空闲，下一拍才能再分配 |

不接 `DCache` 顶层。`mill -i top.compile` 已通过，并单独综合出过 Verilog。
