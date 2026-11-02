### CPU 侧 DCache 接口
DCache 视角对外的CPU 只接这些口：两条 LoadPipe、一路 StoreBuffer、一路 AtomicsUnit、一路 CMO，以及 wfi。

MMIO 和非缓存访问走 Uncache，不进这里。香山用来通知 load queue“某行已被换出或失效”的 `release` 还没有接收者和字段，这页不留空行。



其中load字段为loadpipe服务，store，atomics为MainPipe服务。CMOreq和CMOresp为MissQueue服务。wfi用于休眠。

| 字段 | 方向 | 信号 | 说明 |
| --- | --- | --- | --- |
| load | in/out | 两条 `DCacheLoadIO` | 普通 load、replay 后的 load、软件预取。预取不另开接口 |
| store | in/out | `DCacheToSbufferIO` | StoreQueue 配对并提交后，由 StoreBuffer 送来的 store |
| atomics | in/out | `AtomicWordIO` | LR、SC、AMO、AMOCAS。不走 LoadPipe，也不走 StoreBuffer |
| cmoReq | in | Decoupled | StoreQueue 排空 StoreBuffer 之后送来。同一时间只有一条 |
| cmoResp | out | Decoupled | 收到 CompCMO 之后才返回给 StoreQueue |
| wfi.req | in | Bool | ROB 请求 DCache 检查能否休眠 |
| wfi.safe | out | Bool | 没有未完成的 MSHR、CMO 和 CompAck。不是“已经进入休眠” |


### DCacheLoadIO
每条 LoadPipe 一套。方向按 DCache 看。

s0 的 `req`：

| 字段 | 方向 | 说明 |
| --- | --- | --- |
| valid / ready | in / out | LSU 发出，LoadPipe 能收才 ready |
| cmd | in | 普通 load、`prefetch.r` 或 `prefetch.w` |
| vaddr | in | 虚地址。s0 只用它读 Tag/Meta，这一拍不读 Data |
| id | in | LoadQueue 的请求号，响应和 forward 都带回它 |
| is128 | in | 是否跨 bank 的 128 bit 访问 |
| replayCarry | in | 上次 bank 冲突 replay 带来的信息。`valid` 和独热 `real_way`。重发仍从 Tag 比较开始，不用这份 way 直接读 Data |


s1 由 LSU 送回翻译结果：

| 字段 | 方向 | 说明 |
| --- | --- | --- |
| s1_paddr | in | MMU 给出的物理地址。s1 用它比 Tag |
| s1_kill | in | TLB miss 或异常，取消这条请求 |
| s2_kill | in | access fault 或 MMIO。MMIO 改走 Uncache，不在 LoadPipe 里完成 |


`resp` 在 s2 给出，三种结果互斥：

| 结果 | 条件 | DCache 怎么回答 |
| --- | --- | --- |
| hit | 普通 load 命中且权限够；`prefetch.r` 遇到 SC、UC、UD；`prefetch.w` 遇到 UC、UD | 普通 load 返回命中数据，64 bit，跨 bank 时 128 bit。预取不返回数据，也不读 Data |
| accept | miss 或权限不够，并且 MissQueue 这拍接收 | `handled=1`，带回 `mshr_id`。新分配和合并都算接住。LoadPipe 到这里结束，行要等后面的 refill 才安装 |
| replay | 普通 load 不接受 | `replay=1`。原因是 bank 冲突、MSHR 拒绝，或同地址行还在 WritebackQueue。bank 冲突时 `replayCarry.valid=1` |


`prefetch.w` 命中 SC 不算 hit，因为没有写权限，按 miss 发 ReadUnique。软件预取被 MissQueue 拒绝、被 `wbBlock` 挡住，或这一拍 `missReq` 没被选中，都直接结束，`replay=0`。普通 load 在同样情况下重发。

权限不够时，s2 才向 MissQueue 发 `missReq`。`prefetch.r` 和普通 load 由 MissQueue 发 ReadShared；`prefetch.w` 发 ReadUnique。这里不选 victim。

#### forward 和 refill_wakeup
这两路都是 DCache 给 LoadUnit 的，两条 LoadPipe 各一套。

| 字段 | 方向 | 信号 | 说明 |
| --- | --- | --- | --- |
| forward_chi | out | Valid | RXDAT 到达的当拍，把该 load 要的那一半送出。`addr[5]=0` 是低 32B，`addr[5]=1` 是高 32B。不等写入 DataArray |
| forward_mshr | LSU 查询，DCache 回答 | missId、地址、半行选择 | 读已经在 MSHR buffer 里的那一半。还没到则结果无效，不能用另一半凑 |
| refill_wakeup | out | Valid，`mshr_id` | 行已经安装成 SC、UC 或 UD。没收到 forward 的 load 可以重发，这次应命中。不带 64B 数据 |


`forward_chi` 和 `forward_mshr` 都带 `id` 或 `mshr_id`、数据和 valid。store mask 已经盖过的字节，forward 出去的是盖过之后的数据。store、原子和软件预取不向前递。

数据刚进 MSHR 不算唤醒。Snoop 让这次回填放弃安装时不发 `refill_wakeup`，原来的 load 以后按 miss 重来。

### DCacheToSbufferIO
StoreBuffer 把地址和数据都准备好之后才进入 MainPipe 的 store 口。DCache 不提供 STA 的 Tag 查询口。

`req`：

| 字段 | 方向 | 说明 |
| --- | --- | --- |
| valid / ready | in / out | StoreBuffer 发出。MainPipe 的 store 口这拍能仲裁进去才 ready |
| id | in | StoreBuffer 项号，响应原样带回 |
| cmd | in | 普通 store。整行覆盖和部分写都走这里，用 mask 区分 |
| addr | in | 64B 对齐的物理地址 |
| vaddr | in | 提供 `vaddr[13:12]` 作为 alias，以及 set index。不能从物理地址还原 alias |
| data | in | 64B |
| mask | in | 64 bit，每位对应一个字节。全 1 表示整行覆盖，MissQueue 才用 MakeUnique |


响应只有成功或重发，miss 的那一拍不回成功：

| 结果 | 时机 | 说明 |
| --- | --- | --- |
| hit 成功 | store 流水的 s3 | 命中且有写权限，数据和 Meta 已经写入 |
| miss 成功 | 这次 refill 的 s3 | 行已经安装，需要交出的 victim 也已经进 WritebackQueue |
| replay | s2 不能发 `missReq`，或 MissQueue 拒绝 | MSHR 拒绝、同地址写回还在 WritebackQueue、way 占用冲突。StoreBuffer 以后重发。s3 不写 array |


### AtomicWordIO
LR、SC、AMO、AMOCAS 从 AtomicsUnit 进入 MainPipe 的 atomic 口。第一次查找不走 LoadPipe，也不走 StoreBuffer。miss 时 s2 发 `missReq`；数据回来后不再进 atomic，改走 refill，在同一次 s3 里安装并完成运算，然后给 AtomicsUnit 响应。

**原子指令执行期间，核内不再向 DCache 发 load、store 或另一条原子。**

`req`：

| 字段 | 方向 | 说明 |
| --- | --- | --- |
| valid / ready | in / out | AtomicsUnit 发出，atomic 口接受才 ready |
| id | in | 响应原样带回 |
| cmd | in | LR、SC、AMO 或 AMOCAS |
| addr / vaddr | in | 物理地址，以及 alias `vaddr[13:12]` |
| amoData / amoMask | in | 写数据和字节掩码。最大 128 bit |
| amoCmp | in | 只有 AMOCAS 使用 |
| wordIdx | in | 操作落在哪一个 64 bit bank |


`resp`：

| 字段 | 方向 | 说明 |
| --- | --- | --- |
| valid / ready | out / in | 运算或失败结果已经确定才 valid |
| id | out | 对应请求 |
| data | out | 旧值。SC 失败时按约定返回失败标志，不写内存 |
| success | out | 只有 SC 使用。reservation 检查失败时为 0，并且不创建 MSHR |
| replay | out | MissQueue 没接住或被 WritebackQueue 挡住。AtomicsUnit 以后重发，这一拍没有结果 |


SC 在 MainPipe 里 reservation 检查失败时，不进入 MissQueue。

### CMO
CMO 来自 StoreQueue，不是单独的 CMO 协处理器。StoreQueue 先把 StoreBuffer 排空，再发 `cmoReq`；排空不是 DCache 的引脚。请求直接进 MissQueue 内部的 CMO 单元，不进 LoadPipe，也不占 MainPipe 的四路仲裁，不占 16 个 MissEntry。

| 字段 | 方向 | 信号 | 说明 |
| --- | --- | --- | --- |
| cmoReq | in | Decoupled | `id`、`opcode`、64B 对齐的 `paddr`、`alias=vaddr[13:12]` |
| cmoResp | out | Decoupled | `id`、`done`、`error`。只有收到 CompCMO 之后才返回 |


`opcode` 是 `clean`、`flush`、`inval`、`zero` 四种。同一时间只有一条，`txnId` 固定为 16。CMO 和 miss 共用 TXREQ，有 miss 要发时 CMO 不能发。

### wfi
| 字段 | 方向 | 信号 | 说明 |
| --- | --- | --- | --- |
| wfi.req | in | Bool | ROB 请求检查 |
| wfi.safe | out | Bool | 可以休眠时为 1 |


任一 MissEntry 还忙、CMO 还没收到 CompCMO，或者 CompAck 还没被 L2 收下，`wfi.safe` 都是 0。16 项空闲并且 CMO 空闲才为 1。

WritebackQueue 中尚未完成的 Evict 或 WriteBackFull 不计入 `wfi.safe`。
