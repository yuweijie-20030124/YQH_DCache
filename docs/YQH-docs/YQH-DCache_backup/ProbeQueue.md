## 功能描述
ProbeQueue 只把 L2 发来的 Snoop 发给 MainPipe。队列有 16 项。RXSNP 来时只要有空项就收下。满了就把 `RXSNP.ready` 拉低，不接受snoop，让L2保存好snoop。

一项的寿命很短。L2发来snoop的时候就申请，请求被 MainPipe 的 s0 收下之后就收回一项ProbeEntry。

同地址的 LR reservation 还有效时，这条 Snoop 留在队列里。不送给 MainPipe，也不释放。reservation 结束后再送。



## 参数描述
| 参数 | 值 | ProbeQueue 里怎么用 |
| --- | --- | --- |
| nProbeEntries | 16 | 本地项号 0～15。这个号只用来对上交给 MainPipe 的那一拍，不是 CHI 的 TxnID |
| blockBytes | 64 | 一项对应一整行。队列里不存 64B 数据 |
| alias | `vaddr[13:12]` | 来自 RXSNP.tagAlias。物理地址恢复不了这两位交给 MainPipe 时必须带上，否则 VIPT 会查错 set |
| LRSCCycles | 64 | 计数器大于 8 时，同地址 Snoop 留在这里 |




## 接口描述
方向按 ProbeQueue 自己看。

### 从 L2 收 Snoop
| 字段 | 方向 | 信号 | 说明 |
| --- | --- | --- | --- |
| RXSNP | in | Decoupled | 边界上的这一条线只进本队列。`ready` 就是本队列的 `ready` |


有空项时 `ready=1`。16 项都占着时 `ready=0`。如果本次不收snoop的话L2需要保存好字段信息。



### 交给 MainPipe
| 字段 | 方向 | 信号 | 说明 |
| --- | --- | --- | --- |
| pipeReq | out | Decoupled | 这里的pipeReg是new的**MainPipeReq**，  带物理地址、还原出的 vaddr、opcode、needData、Snoop txnId、id |
| lrscLockedBlock | in | Valid，地址 | MainPipe 在 reservation 计数器大于 8 时拉高，不让probe |
| updateResvSet | in | Bool | LR 刚写下 reservation 的那一拍。下一拍所有 Snoop 都再停一拍 |


为什么停一拍：LR写下reservation的那一拍，lrsc_addr还没进寄存器，下一拍才进寄存器，因此得打一拍然lrsc_addr进寄存器，后续才能进行比较看是否同地址。

## 事务描述
### 一条普通 Snoop
1. L2 把 RXSNP 放上总线。队列有空项，当拍收下，项从空闲进入待发送。
2. 下一次内部仲裁选中它，再锁存一拍。这一拍是为了把“16 项里选一条”和“MainPipe 的 s0 仲裁”错开，不放在同一拍。
3. 锁存之后 `pipeReq.valid` 拉高。MainPipe 的优先级是 `probe > refill > store > atomic`，所以只要 s0 没有被同 set 的 s1、s2、s3 冲突，就会收下。
4. 收下的下一拍，这项释放。
5. 后续写回脏数据等操作不在本模块中完成。



### reservation 挡住同地址 Snoop
MainPipe 只有一套 reservation。LR 成功后计数器从 63 往下减，大于 8 时有效。

这段时间里：

+ 同地址的 RXSNP 仍然收下，除非 16 项已经满了。
+ 这项不参加发往 MainPipe 的发送，也不释放。
+ 地址不同的 Snoop 照常发送。
+ LR 刚写下 reservation 的下一拍，所有 Snoop 都再停一拍。这一拍只做地址比较，避免比较和置位挤在同一拍。
+ 计数器减到 8 或以下、SC 写成功、或者这行被写回并把 reservation 清掉之后，被挡住的那项再进入 MainPipe。进入后按普通 Snoop 处理，不把 SC 提前判失败。



### 队列满
16 项都不是空闲时，新的 RXSNP 停在线上。已经在队列里的项继续发送。不能为了收新 Snoop 把旧项丢掉，也不能覆盖一项还没交给 MainPipe 的请求。

reservation 挡住的项仍然算占用。它不释放，所以会占用容量。



## 存储组织与数据结构
ProbeEntry一项里面带什么。

16 项相同。一项里是寄存器：

| 字段 | 位宽 | 何时写入 | 作用 |
| --- | --- | --- | --- |
| `state` | 2 | 分配：空闲改为待发送。内部仲裁选中且没被 reservation 挡住，改为等MainPipe接受的状态<br/> 被 s0 收下的下一拍：改回空闲 | 这项是空的、在等发送，还是已经交给出口、等 MainPipe 收下。reservation 不改它，只把发往 MainPipe 的 valid 压住 |
| `addr` | 45 | 分配当拍，之后不改 | RXSNP 的行地址。和 reservation 比是不是同一行，也交给 MainPipe。低 3位不另存，送出时补 0。 |
| `tagAlias` | 2 | 分配当拍，即 RXSNP.`tagAlias`<br/>，也就是这行进来时的 `vaddr[13:12]` | 和 `addr[11:6]` 拼出 `vaddr[13:6]`<br/>，MainPipe 靠它查 set |
| `opcode` | 2 | 分配当拍 | 失效、降为共享或清理脏责任。原样交给 MainPipe 的 `probeAction`<br/>。编码还没冻结，队列不把它翻译成 SnpResp |
| `needData` | 1 | 分配当拍 | 对方是否要求带数据。MainPipe 和原来是不是 UD 一起决定 s3 交不交整行。项释放后 MainPipe 问不回队列，所以必须自己带走 |
| `snpTxnId` | 8 | 分配当拍 | L2 的 Snoop 编号。原样交给 MainPipe，再放进 WritebackQueue。SnpResp 或 SnpRespData 的 `txnId`填它 |


当前已经从 16 项里选出、准备给 MainPipe 的那条 `pipeReq`需要锁存。

内部仲裁是编号小的优先。已经锁存的那条在 MainPipe 收下之前，下一条不能覆盖它。

空项的选择也是编号小的优先。同一拍只有一条 RXSNP，所以最多分配一项。



## 状态机行为
ProbeQueue 不是 MainPipe 那种 s0 到 s3。下面是队列自己的拍。MainPipe 收下之后的 s1、s2、s3 见 `MainPipe`。

### 分配当拍
+ `RXSNP.valid` 且存在空项：写入编号最小的空项，状态变为待发送。
+ 这一拍还不向 MainPipe 发，先留一拍做状态转换。
+ 如果这一拍 LR 正在写 reservation，下一拍所有发送都停。

### 待发送
+ 没有被 reservation 挡住的项向内部仲裁请求。
+ 编号最小的项进入“已选中，等 MainPipe”。
+ 被挡住的项停在这里。地址继续和 `lrscLockedBlock` 比。

### 锁存一拍
+ 下一拍才把 `pipeReq.valid` 交给 MainPipe。
+ reservation 若在这一拍变成同地址，出口的 valid 不变，寄存器里的请求保持不变。

### 交给 MainPipe
+ MainPipe s0 的 `ready` 为 1：本拍 fire。出口锁存在下一拍清掉，对应项也在下一拍变成空闲。
+ `ready` 为 0：valid 和全部 payload 保持。不能改地址，不能换一条 Snoop，也不能把这项释放后重用。
+ fire 只说明 s0 收下。s3 还没改 Meta，WritebackQueue 也还没发应答。

### 同一拍各自在做什么
| 位置 | 这一拍可以做的事 |
| --- | --- |
| 空项 | 收一条新的 RXSNP |
| 待发送的项 | 参加内部仲裁，或继续被 reservation 挡住 |
| 出口锁存 | 向 MainPipe 保持唯一的一条 `pipeReq` |
| 刚被 s0 收下的项 | 下一拍才释放。当拍不要分配给新的 RXSNP |





