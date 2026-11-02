## 功能描述
用流水线控制 Store、Probe、Refill、以及原子操作对 cache 的修改。MainPipe 是 DCache 里唯一修改 Tag、Meta、Data 的流水线。普通 load 命中留在 LoadPipe。

它处理六类会改 cache 的事务：

+ Sbuffer 提交的 store 数据。命中且有写权限时按字节合并后写入；没有写权限时在 s2 发送MissReq给 MissQueue，不进入 s3。
+ MissQueue 的 refill。把已经拼好的 64B 数据装进 tag 命中的那一路。replace在refill的途中做完。
+ ProbeQueue 转发来的 Snoop。查当前 cache，命中才改 Meta，需要数据时把整行交给 WritebackQueue。miss 不分配 MSHR，也不变成 refill。
+ AtomicsUnit 来的 LR、SC、AMO、AMOCAS。







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
| <font style="color:#000000;">occupyWay</font> | <font style="color:#000000;">in</font> | <font style="color:#000000;">4 bit</font> | <font style="color:#000000;">这个 set 上正在权限升级的 way。refill 选 victim 时不能选这些 way</font> |
| <font style="color:#000000;">occupyFail</font> | <font style="color:#000000;">in</font> | <font style="color:#000000;">Bool</font> | <font style="color:#000000;">这个 set 已经有 3 路在途权限升级。新的权限升级本拍不要发 missReq</font> |
| <font style="color:#000000;">wbBlock</font> | <font style="color:#000000;">in</font> | <font style="color:#000000;">同地址查询</font> | <font style="color:#000000;">同地址写回还在 WritebackQueue 时，本拍不发 missReq</font> |


`missReq` 带上地址、vaddr、alias、cmd、store 数据与 mask、原子数据、当前 Meta、是否整行覆盖。选 ReadShared、ReadUnique 还是 MakeUnique 由 MissQueue 决定。



### <font style="color:#000000;">WritebackQueue</font>


### ProbeQueue
| <font style="color:#000000;">信号</font> | <font style="color:#000000;">方向</font> | <font style="color:#000000;">类型</font> | <font style="color:#000000;">作用</font> |
| :--- | :--- | :--- | :--- |
| <font style="color:#000000;">lrsc_blocked_block</font> | <font style="color:#000000;">out</font> | Valid(UInt(PAddrBits.W)) | <font style="color:#000000;">valid的时候是计数大于8，bits就是lrsc_addr，也就是cacheline的地址</font> |
| <font style="color:#000000;">update_resv_set</font> | <font style="color:#000000;">out</font> | <font style="color:#000000;">Bool()</font> | <font style="color:#000000;">LR在Mainpipe建立reservation的时候为1，让下一拍ProbeQueue阻塞所有的Probe</font> |
| <font style="color:#000000;">invalid_rescv_set</font> | <font style="color:#000000;">in</font> | <font style="color:#000000;">Bool()</font> | <font style="color:#000000;">reservation有效时，进来SC，下一排把lrsc_count请0</font> |
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
| 独占 | 否 | UC |
| 独占 | 是 | UD |


共享并且 PassDirty 的数据不在 L1 收成 SD。安装前先把脏数据交给 WritebackQueue，本地只留 SC。

s3 写 tag、data、meta。写完向 MissQueue 回 `s3RefillResp`。



### Probe
s1 用物理 tag 判断 hit。miss 的定义是没有有效 way 的 tag 相等。miss 时：

+ 不分配 MSHR。
+ 不读完整数据，也不写 array。
+ s3 回应 ProbeQueue：状态 I，无数据。
+ ProbeQueue 发 TXRSP，不发 TXDAT。

| 动作 | 新 Meta | 数据 |
| --- | --- | --- |
| 失效 | I | UD，或对方要求数据，则整行交给 WritebackQueue |
| 降为共享 | SC。原来已是 SC 则不变 |  UD 时带数据，并 PassDirty |
| 清理脏责任 | UD 变为 UC，其余不变 |  UD 时带数据，并 PassDirty |


hit 和 miss 都必须回应。Meta 没有变化时不写 Meta。数据一旦交给 WritebackQueue，ProbeQueue 要等数据发送完成后才能释放自己的条目；MainPipe 在 wbReq 握手后就可以离开 s3。

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
+ 按 probe、refill、store、atomic 的顺序选一条。
+ 用 `vaddr[13:6]` 和 s1、s2、s3 比 set。相同则本拍不 fire。
+ 算出哪些 bank 需要旧数据。probe、原子、replace 的脏行。部分 store 只读“被写到、但没有整 bank 覆盖”的 bank。
+ store 是否真能参加仲裁，还要看 Data 口是不是正在被 load 使用。默认不等待；`force_write` 和等待阈值只作为性能旋钮，阈值 0 等于关闭。

### s1：比较、选 way、发数据读
+ 用物理地址比 4 个 tag，并丢掉 Meta 为 I 的 way。
+ 判断写权限：UC、UD 可写，SC、I 不可写。
+ refill 先用命中 way。没有命中时，指定 way 必须已是 I；还没指定就选最小的 I way，否则只把 PLRU way 建议给 MissQueue，不在本条流水覆盖它。
+ 需要旧数据时，向选中的 way 发 dataRead。
+ 这一级不写 array，也不向 MissQueue 发请求。

### s2：分流
+ store 或原子没有权限：发 missReq。能发出就结束，不进 s3。不能发出就停在 s2，必要时回 replay。
+ 同地址 WritebackQueue 还没完成：missReq 不能发。
+ store、原子、probe、refill 需要继续改 array：等 s3 ready 后进入 s3。
+ refill 进入 s3 前，refillInfo 必须有效。没有整行数据不能进 s3。
+ 准备 byte 合并 mask。原子命中时不和 store 数据合并，s3 直接用读出的旧数据做运算。

### s3：提交
+ 拿到 dataResp 后完成合并、原子运算或整行安装。
+ probe需要写回时，先握手 wbReq，再改 Meta。wbReq 没被收下，s3 停住。refill 不覆盖另一条仍有效的行。
+ 写 Data、Meta、Tag。三项里哪些 ready 为 0，s3 就停住，请求保持不变。
+ refill 写 Meta 前查 pending snoop。
+ 给 Sbuffer、AtomicsUnit、ProbeQueue、MissQueue 中对应的一方回响应。
+ 命中写入或成功安装后更新 PLRU。
+ fire 后清除本级 valid。AMOALU 那一拍也算占用 s3，同 set 的 s0 继续被挡住。


