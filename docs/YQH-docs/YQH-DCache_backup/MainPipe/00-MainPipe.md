## 功能描述
用流水线控制 Store、Probe、Refill、以及原子操作对 cache 的修改。MainPipe 是 DCache 里唯一修改 Tag、Meta、Data 的流水线。普通 load 命中留在 LoadPipe。

它处理六类会改 cache 的事务：

+ Sbuffer 提交的 store 数据。命中且有写权限时按字节合并后写入；没有写权限时在 s2 发送MissReq给 MissQueue，不进入 s3。
+ MissQueue 的 refill。把已经拼好的 64B 数据装进命中路、空位，或换出来的 victim。替换就在这次 refill 里做完，没有单独的 replace 入口。
+ ProbeQueue 转发来的 Snoop。查当前 cache，命中才改 Meta，需要数据时把整行交给 WritebackQueue。miss 不分配 MSHR，也不变成 refill。
+ AtomicsUnit 来的 LR、SC、AMO、AMOCAS。

## 本版 RTL 已经定下的行为

下面这些是写 `MainPipe.scala` 时定下来的。和本节旧句子不一致时，以这里为准。

+ 高优先级被自己的 set 挡住时，不冻结其它 set。probe 进不去，另一个 set 的 refill、store、atomic 仍可以进。
+ `storeHit`、`storeReplay`、`atomicResp`、`atomicReplay` 都是 Decoupled。对端没接住，本级就不走，不能打成一拍脉冲丢掉。
+ 原子离开 s2 并走 `atomicReplay` 有两种：`occupyFail`，以及同地址已经有 MSHR（`handled=0` 且 `sameAddr=1`）。`wbBlock` 时 `sendMiss=0`，停在 s2 继续等。别的地址把 16 项占满时 `sameAddr=0`，也停在 s2 再试。store 仍然是任何拒绝都 replay。
+ LR、AMO、AMOCAS 的 miss 被收下后，s2 不回 `atomicResp`。refill 带原来的 cmd、amo 数据和 id。独占行真的装上时，s3 做完回 `atomicResp`。最终 I、`refill.error`，或装成了非独占，s3 改走 `atomicReplay`。不用 `success=0` 冒充做完。没有合法 victim 时不 replay，MissQueue 置 `waitVictim`，16 拍后再试。`atomic.fire` 之后，AtomicsUnit 留着请求，直到 `atomicResp` 或 `atomicReplay`。
+ Tag、Meta、Data 和两笔 `wbReq` 都接住之后，才发 `probeResp`、`atomicResp`、`storeHit`、s3 的 `atomicReplay`。
+ refill 合并了 store，并且返回独占时，安装成 UD，不能停在 UC。共享 refill 上出现 store mask 则不安装，并断言。`pendingInvalidate` 或 `refill.error` 时最终状态是 I，不写 array，也不换出旧行。共享且脏、这次又真的安装时，先把脏责任写成 PassDirty，本地装 SC。
+ 四路都有效时会换出 victim。`occupyWay` 标出正在升级的路，这些路不能当 victim。`force_write` 不实现，等价于文档里的阈值 0，store 不等 Load 让出 Data 口。
+ `probeOp` 就是 Compact CHI 的 Snoop opcode，ProbeQueue 原样放进来，MainPipe 不再做第二套翻译。0 是 `SnpMakeInvalid`，1 是 `SnpToInvalid`，2 是 `SnpToShared`，3 是 `SnpToClean`。
+ 端口名是 `invalid_resv_set`。文档里的 `invalid_rescv_set` 是笔误。它为 1，并且本拍不是新建 LR 时，把 `lrsc_count` 清 0。
+ `tagWrite.vaddr` 只送低 34 bit。Tag SRAM 不保存这个字段，端口是停用 WPU 留下来的。真正写入的物理 tag 是 36 bit，`paddr[47:12]`。
+ `mainpipeInfo` 的 `s3Done`、`installed`、`suggestValid` 只在 s3 完成的那一拍为高。MissQueue 要当拍采样。
+ `missReq.addr` 按 cache line 对齐。

## 原子没做成时怎么结束

日期：2026-11-03。上面两处以前会让 AtomicsUnit 一直等。代码已经补上，旧说法作废。

原子 miss 被收下后，s2 仍然立刻离开，这一拍没有 `atomicResp`，也没有 `atomicReplay`。完成放在后来的 refill 上。`atomic.fire` 不是完成。

s3 把「做完」和「没做成」拆开：

```
doAtomicResp = s3 命中原子 || refillOp
refillOp     = doInstall && retUnique && (LR || CAS || ALU)
doS3Replay   = refill 上是 LR/CAS/ALU && (refill.error || pendingInvalidate || 装成了非独占)
```

`refillOp` 仍然要求独占行真的装进 array。最终 I 不能装进去，否则刚被 Snoop 作废的行又变成有效。这时 `doAtomicResp=0`，`doS3Replay=1`，s3 等写回握完手之后发 `atomicReplay`。AtomicsUnit 以后重发。MSHR 看到 `finalCoh=I`，这项可以结束。

三种要 replay 的结果：

+ `pendingInvalidate`：只有 `SnpMakeInvalid` 会把这项打成 I。不安装，不换出旧行，也不把 MSHR 里的脏数据另写回去。
+ `refill.error`：L2 的 `respErr`、重复拍或 opcode 不对。不安装，不把这份数据写回去，`finalCoh=I`。
+ 装成了非独占：`retUnique=0`，行可以装成 SC。LR、CAS、ALU 没有独占权限，不能在这行上做完，发 `atomicReplay`。SC 指令自己 miss 时不进 MSHR，直接在 s3 判失败。

没有合法 victim 时不走 `atomicReplay`。replay 会让 AtomicsUnit 马上再发一条原子，挡住这次 refill，两边都走不完。MissQueue 置 `waitVictim`，16 拍后再把同一条 refill 送进来。

同地址已经有 MSHR 时，s2 不再停死。MissQueue 给出 `sameAddr = 请求有效 && 匹配到项 && 不能合并`。原子不合并，所以这条为 1。`atomicNeedReplay` 把它和 `occupyFail` 放在一起，s2 等 `atomicReplay` 握上手才离开。`wbBlock` 时不发 miss，也就不因此 replay，停在 s2 等写回结束。16 项都被别的地址占满时 `sameAddr=0`，同样停在 s2 再试。store 看的是「没被收下」，任何拒绝都 replay，这点没改。

s2 和 s3 共用一个 `atomicReplay`。s3 优先。两边不会同时拉高。`atomicResp` 和 `atomicReplay` 也不会同时表示同一笔做完又要重来。

## 接口描述
这里的方向是从MainPipe的视角来看的in/out。

### 入口
| 字段 | 方向 | 信号 | 说明 |
| --- | --- | --- | --- |
| probe | in | Decoupled MainPipeReq | ProbeQueue 来的 Snoop，优先级最高 |
| refill | in | Decoupled MainPipeReq | MissQueue 数据到齐后的安装 |
| store | in | Decoupled DCacheLineReq | Sbuffer 提交的整行写数据和 byte mask |
| atomic | in | Decoupled MainPipeReq | LR、SC、AMO、AMOCAS |


仲裁优先级：

**probe > refill > store > atomics**



### Tag、Meta、Data
| 字段 | 方向 | 信号 | 说明 |
| --- | --- | --- | --- |
| tagRead | out | Decoupled | s0 发出，读该 set 全部 4 way |
| tagResp | in | 4 way tag | s1 做物理 tag 比较 |
| metaRead | out | Decoupled | s0 发出，读该 set 全部 way 的 Meta |
| metaResp | in | 4 way meta | s1 看状态和权限 |
| dataRead | out | Decoupled | 如果部分写，s1 按 bank_mask 读旧数据 |
| dataResp | in | 8 bank 数据 | s3 使用。SRAM 若需要，可以在 s2 打一拍 |
| tagWrite | out | Decoupled | 只有新装入一行时写 tag |
| metaWrite | out | Decoupled | 状态变化时写命中的那一路 |
| dataWrite | out | Decoupled | 写命中的那一路 |




### MissQueue
| 字段 | 方向 | 信号 | 说明 |
| --- | --- | --- | --- |
| missReq | out | Decoupled | s2 发现 store、原子没有足够权限 |
| refillInfo | in | Valid | 当前 s2 refill 的 64B 数据、返回状态、PassDirty、store 合并数据 |
| mainpipeInfo | out | s2/s3 | 告诉对应 MSHR：数据还没准备好、s3 已提交、本地安装决定已做完 |
| pendingSnoop | in | missId 查询 | s3 写 Meta 前再看一眼该 MSHR 有没有未处理完的同地址 Snoop |
| <font style="color:#000000;">occupySet</font> | <font style="color:#000000;">out</font> | <font style="color:#000000;">set</font> | <font style="color:#000000;">store 或原子做权限升级时，问这个 set</font> |
| <font style="color:#000000;">occupyWay</font> | <font style="color:#000000;">in</font> | <font style="color:#000000;">4 bit</font> | <font style="color:#000000;">正在升级的路。refill 选 victim 时跳过，避免盖掉还没升级完的行</font> |
| <font style="color:#000000;">occupyFail</font> | <font style="color:#000000;">in</font> | <font style="color:#000000;">Bool</font> | <font style="color:#000000;">这个 set 已经有 3 路在途权限升级。新的权限升级本拍不要发 missReq</font> |
| <font style="color:#000000;">wbBlock</font> | <font style="color:#000000;">in</font> | <font style="color:#000000;">同地址查询</font> | <font style="color:#000000;">同地址写回还在 WritebackQueue 时，本拍不发 missReq</font> |


`missReq.addr` 按 cache line 对齐，再带上 vaddr、alias、cmd、store 数据与 mask、原子数据、当前 Meta、是否整行覆盖。选 ReadShared、ReadUnique 还是 MakeUnique 由 MissQueue 决定。



### <font style="color:#000000;">WritebackQueue</font>

| 信号 | 方向 | 类型 | 作用 |
| --- | --- | --- | --- |
| wbQuery / wbBlock | out / in | 同地址查询 | s2 要发 miss 之前问。同地址写回还在时，本拍不发 missReq |
| wbReq | out | Decoupled WriteBackReq | 和 WriteBackQueue.req 同一类型，顶层可以直接 `<>`。字段和编码见文末「代码实现约定」 |

### 完成响应

| 信号 | 方向 | 类型 | 作用 |
| --- | --- | --- | --- |
| storeHit | out | Decoupled | s3 命中写入已经进 array 之后，告诉 Sbuffer 成功 |
| storeReplay | out | Decoupled | s2 的 store miss 没被收下。要等 Sbuffer 接住才离开 |
| atomicResp | out | Decoupled | s3 做完，或者 refill 上的原子做完。带 id、旧数据和 SC 的 success |
| atomicReplay | out | Decoupled | 只用于 `occupyFail`。AtomicsUnit 以后重发。miss 已经被收下时不要走这条 |
| probeResp | out | Decoupled | hit 和 miss 都在 s3 回应。数组写和 wbReq 接住之后才发 |
| mainpipeInfo | out | 电平，完成位只脉冲一拍 | `s2Wait` 表示 refill 还没有整行数据。`s3Done`、`installed`、`suggestValid` 只在完成那一拍为高 |

### ProbeQueue
| <font style="color:#000000;">信号</font> | <font style="color:#000000;">方向</font> | <font style="color:#000000;">类型</font> | <font style="color:#000000;">作用</font> |
| :--- | :--- | :--- | :--- |
| <font style="color:#000000;">lrsc_blocked_block</font> | <font style="color:#000000;">out</font> | Valid(UInt(PAddrBits.W)) | <font style="color:#000000;">valid的时候是计数大于8，bits就是lrsc_addr，也就是cacheline的地址</font> |
| <font style="color:#000000;">update_resv_set</font> | <font style="color:#000000;">out</font> | <font style="color:#000000;">Bool()</font> | <font style="color:#000000;">LR在Mainpipe建立reservation的时候为1，让下一拍ProbeQueue阻塞所有的Probe</font> |
| <font style="color:#000000;">invalid_resv_set</font> | <font style="color:#000000;">in</font> | <font style="color:#000000;">Bool()</font> | <font style="color:#000000;">为 1 且本拍不是新建 LR 时，把 lrsc_count 清 0。旧名 invalid_rescv_set 是笔误</font> |
| <font style="color:#000000;">block_lr</font> | <font style="color:#000000;">out</font> | <font style="color:#000000;">Bool()</font> | <font style="color:#000000;">告诉AtomicsUnit阻塞lr。</font> |




## 事务描述
### Store
store请求是从StoreBuffer中来的。

s1 同时看 tag 和 Meta：

| 当前状态 | s2 去向 | 写入后的状态 |
| --- | --- | --- |
| tag 不命中，或 Meta 是 I | MissQueue | 不在本条流水写 array |
| SC | MissQueue，做权限升级 | 不在本条流水写 array |
| UC | s3 | UD |
| UD | s3 | UD |


部分写入的 bank 要先读旧数据，s3 按 byte mask 合并。某个 bank 的 mask 全 1 时，这个 bank 不读旧数据。64B mask 全 1 时，整行不读，`fullOverwrite=1`。

store miss 不进 s3。MissQueue 暂时不能收，或者 WritebackQueue 里还有同地址写回，就向 Sbuffer 回 replay，不把这行写成命中。

权限升级之后，MissQueue 把 store 数据和 mask 留在原 MSHR 里，refill 重访时再合并。MainPipe 不另开一个 MSHR。



### Refill
MissQueue 收齐两拍 256 bit 后才发 refill。MainPipe 看到的是整行，不处理 DataID。

s1 选 way，顺序固定：

1. 物理 tag 已经命中：用命中的 way。这是权限升级或同一行重装，不需要 replace。
2. 否则使用 MissQueue 指定的 way。这个 way 必须已经是 I。
3. MissQueue 还没指定时，有 I way 就选编号最小的，否则把 PLRU way 作为建议，但不在本条 refill 里覆盖它。

安装时，这一路的状态来自 refill 的返回状态和 PassDirty：

| 返回权限 | PassDirty | 安装结果 |
| --- | --- | --- |
| 共享 | 否 | SC |
| 独占 | 否 | UC。refill 上还有 store mask，或本拍原子真的写入，则改成 UD |
| 独占 | 是 | UD |


共享并且 PassDirty 的数据不在 L1 收成 SD。安装前先把脏数据交给 WritebackQueue，本地只留 SC。

共享 refill 上出现 store mask 是非法合并。不安装，断言。脏数据仍交给 WritebackQueue。

`pendingInvalidate` 为 1 时，最终状态是 I，Tag、Meta、Data 都不写。PassDirty 或 store 带来的脏数据仍交给 WritebackQueue。

s3 在 Tag、Meta、Data 和 `wbReq` 都接住之后，用 `mainpipeInfo` 告诉 MissQueue。`s3Done`、`installed`、`suggestValid` 只在完成那一拍为高。没有单独的 `s3RefillResp`。



### Probe
s1 用物理 tag 判断 hit。miss 的定义是没有有效 way 的 tag 相等。miss 时：

+ 不分配 MSHR。
+ 不读完整数据，也不写 array。
+ s3 向 WritebackQueue 交一条无数据 `SnpResp`，Resp 为 I，`snpTxnId` 用请求里原来的 Snoop 号。
+ `probeResp` 接回 ProbeQueue，`ready` 恒为 1。队列项在 s0 收下时就释放，不用这个回应释放。TXRSP 由 WritebackQueue 发，不由 ProbeQueue 发。

| 动作 | 新 Meta | 数据 |
| --- | --- | --- |
| 失效 | I | UD，或对方要求数据，则整行交给 WritebackQueue |
| 降为共享 | SC。原来已是 SC 则不变 |  UD 时带数据，并 PassDirty |
| 清理脏责任 | UD 变为 UC，其余不变 |  UD 时带数据，并 PassDirty |


`probeOp`：Compact CHI Snoop。0 `SnpMakeInvalid`，1 `SnpToInvalid`，2 `SnpToShared`，3 `SnpToClean`。ProbeQueue 原样传入。

hit 和 miss 都必须回应。Meta 没有变化时不写 Meta。数据交给 WritebackQueue 之后，MainPipe 在 `wbReq` 握手后离开 s3。ProbeQueue 的项不等数据发完；项号可能已经重用，不能靠 `probeResp.id` 去释放。

同地址 Snoop 在 reservation 有效时不进入 MainPipe。窗口结束后再进入，这时按普通 Snoop 处理；如果 reservation 还在，处理这行时清除它。



### 原子操作
LR、SC、AMO、AMOCAS 从 AtomicsUnit 进入。miss 时 s2 发 `missReq`，数据回来后仍由 MainPipe 做运算和写入，再给 AtomicsUnit 响应。

| 指令 | 命中条件 | 结果 |
| --- | --- | --- |
| LR | UC 或 UD | 返回数据，建立 reservation。不写 data |
| LR | SC、I 或不命中 | 交给 MissQueue 取独占权限，回来后重做 |
| SC | reservation 地址相同，且仍是 UC 或 UD | 写入，清 reservation，返回成功 |
| SC | reservation 失效，或已经没有写权限 | 不写，返回失败 |
| AMO、AMOCAS | UC 或 UD | s3 读旧数据，运算后写回，状态保持 UD |
| AMOCAS 比较失败 | UC 或 UD | 返回旧数据，不写 |
| AMO、AMOCAS | 没有写权限 | 同 LR，先取独占权限再重做 |


**LR/SC行为：**LR从rs1指向的地址加载到rd，同时建立一个reservation。SC会把rs2寄存器中的值写入rs1指向的地址，如果reservation有效则写入成功，并且rd写入0；若reservation无效，rd写入1。

**LR/SC做法**：YQH中只有一套reservation，放在MainPipe中，由 lrsc_addr 和 lrsc_count 组成。地址按64B cacheline对齐，不保存LR读出来的数。

首先LR建立reservation，AtomicsUnit做完地址翻译，并等store buffer排空，然后向MainPipe发LR的atomic_req。请求进入Mainpipe之后，若hit则进入s3，若miss则申请MSHR等待refill写回DCache之后再进MainPipe。s3从data array取出LR要求的字，送回到AtomicsUnit，后写入rd。s3同一拍把 lrsc_addr 写成这块cacheline的地址(记录LR地址)， 令lrsc_count 为63。

reservation存在期间，这个 lrsc_count 每拍减1。有且仅有 lrsc_count 大于8时的reservation才有效，和 lrsc_addr 相同地址的SC才能成功，ProbeQueue会阻塞掉对这个地址的probe。计数 lrsc_count 小于8的时候，reservation失效，SC同地址也会失败，probeQueue不会阻塞prob了，但block_lr仍为1，AtomicsUnit暂时不能再发吓一跳LR。计数到0了之后，AtomicsUnit才能再发LR，才能建立起新reservation。

SC消除reservation。SC即使miss也能进入MainPipe的s3，不申请MSHR。进来s3之后检查三件事情：①地址和 lrsc_addr相同，②lrsc_count > 8，③cache命中。只有这三件事情都成立才会把rs2的值写入data array中，同时rd写为0；否则rd得到1，也不写rs2的值。但无论成功还是失败，lrsc_count都会清为0。



**AMOCAS行为:**

| 指令 | 比较和写入 | `rd` |
| --- | --- | --- |
| amocas.w | 4 字节，地址 4 字节对齐 | 旧的 32 位，符号扩展 |
| amocas.d | 8 字节，地址 8 字节对齐 | 旧的 64 位 |
| amocas.q | 16 字节，地址 16 字节对齐 | 低 64 位进 `rd`，高 64 位进 `rd+1`。`rs2` 同样是一对寄存器 |


他们都是用rd中的旧值和rs1指向的内存比，相等就把rs2写进去rs1指向的内存。无论相等于否，rd都等于操作前的内存值。若比较不相等rs1指向的内存就一个字节也不改。



**AMOCAS做法:**

在发AMOCAS请求之前需要先把storebuffer排空，然后再向MainPipe发atomic_req。

若此时发现SC I 或者 Miss就发missreq去取独占，MSHR中要保留期望旧值，准备写入的新值，和mask。数据回来后就发refill_req，没有Atomics的replay机制。refill的s3先把有效旧行给WriteBackQueue，再在新行上做比较。AtomicsUnit停在响应，直到这次s3把旧数据送回来。

若此时发现已经是 UC 或 UD 时，s1 读出命中 way 的整行。s3 从 word_idx 起取 16 字节，和 amo_cmp 异或，再只看 amo_mask 盖住的字节。这些字节里有一位不同就是失败。

+ 失败：不写 Data。返回这 16 字节里的旧数据。.w 再由 AtomicsUnit 按地址取出高半或低半，做符号扩展。
+ 成功：按同一张 mask 把 amo_data 写进对应 bank。.q 写 word_idx 和后面那一个 bank，word_idx 一定是偶数。Meta 变成 UD。返回的仍是写入前的旧数据。



其余的原子操作可见AMOALU。



## 流水级行为
四级流水。同一个 set 已在 s1、s2 或 s3 时，s0 不能再进入。

四拍都用 valid、ready、fire。前一级 fire 才把结果写入后一级。后一级 ready 为 0 时，前一级停住。

### s0：选择请求并读 Tag、Meta
+ 按 probe、refill、store、atomic 的顺序。高优先级被自己的 set 挡住时，不冻结其它 set。
+ 和 s1、s2、s3 比 set。相同则这一条本拍不进。probe 用 `{tagAlias, 由地址还原的 index}`，其余用 `vaddr[13:6]`。
+ 算出哪些 bank 需要旧数据。probe、原子、replace 的脏行。部分 store 只读“被写到、但没有整 bank 覆盖”的 bank。
+ 第一版不实现 `force_write`。store 不等 Load 让出 Data 口，等价于阈值 0。

### s1：比较、选 way、发数据读
+ 用物理地址比 4 个 tag，并丢掉 Meta 为 I 的 way。
+ 判断写权限：UC、UD 可写，SC、I 不可写。
+ refill 先用命中 way，不写回。未命中时，指定路已经是 I 就用它。否则用编号最小的 I 路。这些空位不写回。四路都仍有效时，在没被升级冻住、也没被 `replaceBlock` 跳过的路里选 PLRU；PLRU 那路不合法就选最小编号。被 `replaceBlock` 挡住的路记进 `skipVictim`，下一拍另选。一路都选不出来就不安装，只把 PLRU 建议给 MissQueue。
+ 需要旧数据时，按 bank mask 发 dataRead。每块 SRAM 吐出该 bank 的 4 路，后面只用选中的那一路。
+ 这一级不写 array，也不向 MissQueue 发请求。

### s2：分流
+ store 没有写权限：发 missReq。收下就离开，不进 s3。没收下，包括 `wbBlock` 和 `occupyFail`，走 `storeReplay`，等 Sbuffer 接住才离开 s2。
+ 原子除 SC 外没有写权限：发 missReq。`occupyFail` 或同地址已有 MSHR 走 `atomicReplay` 并离开。`wbBlock`，以及别的地址占满 MSHR，停在 s2 继续等。被收下后不回 `atomicResp`，等后来的 refill。
+ SC 即使 miss 也进 s3，不发 missReq。
+ 同地址 WritebackQueue 还没完成：missReq 不能发。store 因此 replay；原子停在 s2。
+ store、原子、probe、refill 需要继续改 array：等 s3 ready 后进入 s3。
+ refill 进入 s3 前，refillInfo 必须有效。没有整行数据不能进 s3。
+ 准备 byte 合并 mask。原子命中时不和 store 数据合并，s3 直接用读出的旧数据做运算。

### s3：提交
+ 拿到 dataResp 后完成合并、原子运算或整行安装。
+ 要换出的旧行和新行的 PassDirty 或 WriteBackFull 共用一个 `wbReq`。先旧行，再新行。两笔都握手之前不改 Tag、Meta、Data。`error` 或最终 I 不安装，旧行留在 array 里。
+ 先等 `wbReq` 握手，再写 Data、Meta、Tag。哪一项 ready 为 0，s3 就停住，请求保持不变。
+ refill 写 Meta 前查 pending snoop。要求失效就不写 array，最终状态记成 I。
+ 数组写和 `wbReq` 都接住之后，才给 Sbuffer、AtomicsUnit、ProbeQueue 回响应。MissQueue 看 `mainpipeInfo` 完成那一拍的脉冲。
+ 命中写入或成功安装后更新 PLRU。
+ fire 后清除本级 valid。AMOALU 那一拍也算占用 s3，同 set 的 s0 继续被挡住。

## 代码实现约定

日期：2026-11-03。`wbReq` 不再使用只有地址和旧状态的 `MainPipeWbReq`。它的类型就是 `WriteBackReq`，和 `WriteBackQueue.req` 相同，以后顶层写 `wbq.io.req <> mainPipe.io.wbReq`。

编号不要在 MainPipe 里再写一套。要改数字，只改 `src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala` 里的 `WbOpcode` 和 `WbChiResp`。要改「哪种事务用哪个编号」，改 `MainPipe.scala` 里的 `wbOpcode`、`wbResp`、`wbPassDirty`。

### 内部 opcode

| 编号 | 名字 | MainPipe 何时使用 | 线上实际发出 |
| --- | --- | --- | --- |
| 0 | Evict | 换出干净的 SC 或 UC。不带数据，`passDirty=0` | TXEVT Evict |
| 1 | WriteEvictFull | 不使用。`alwaysReleaseData` 关闭 | 不发 |
| 2 | WriteBackFull | 换出的 UD，以及最终不再持有的脏行。`pendingInvalidate` 或共享 refill 上的非法 store 合并也走这条 | TXEVT WriteBackFull，数据拍 Resp=`I` |
| 3 | SnpResp | Snoop 未命中，或命中但不需要数据 | TXRSP，txnId 用 `snpTxnId` |
| 4 | SnpRespData | Snoop 命中且要带数据。失效时 UD 或 `needData`；降级、清脏时只有 UD | TXDAT 两拍，txnId 用 `snpTxnId` |
| 5 | PassDirty | 共享且脏，并且这拍确实把行安装成 SC | TXEVT 仍是 WriteBackFull，数据拍 Resp=`SC_PD` |

### Resp

CHI Resp 不是本地 Meta。本地 UD 没有单独的 CHI 编号，脏用 `passDirty`。

| 值 | 名字 | 含义 |
| --- | --- | --- |
| 0 | I | 不再持有 |
| 1 | SC | 共享干净 |
| 2 | UC | 独占干净。本地 UD 先映射成这个，再靠 passDirty 变成 UC_PD |
| 4 | I_PD | 数据是脏的，最终不持有。Snoop 由 WriteBackQueue 在 Resp 上或进 bit2 |
| 5 | SC_PD | 共享且脏责任已交出 |
| 6 | UC_PD | 独占且脏 |

Snoop 的 `resp` 填最终状态，不自己或上 PassDirty。旧行是 UD 时 `passDirty=1`，WriteBackQueue 再或上 4。第一版不做 tag 奇偶校验，`respErr` 恒为 0。

四个 Snoop：

| probeOp | 名字 | 命中后的状态 | 何时带数据 |
| --- | --- | --- | --- |
| 0 | SnpMakeInvalid | I | 从不带，UD 也不回 |
| 1 | SnpToInvalid | I | UD，或者 `needData=1` |
| 2 | SnpToShared | SC | 只有 UD，并置 `passDirty` |
| 3 | SnpToClean | UD 变成 UC，其余不变 | 只有 UD，并置 `passDirty` |


`MainPipeReq` 增加 `snpTxnId`。ProbeQueue 把 RXSNP 的编号放这里。MissQueue 的 refill 填 0。无数据的 Snoop 也走 `wbReq`，否则 TXRSP 没有发送者。`wbReq` 没被收下时，s3 不改 array，也不发 `probeResp`。
