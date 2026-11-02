## 功能描述
例化在MissQueue中，一次只做一条cacheline的 clean flush inval，**注意不做zero。**

clean:将本条cacheline中脏的部分写回到下级缓存中，但该条cacheline依旧在缓存中有效。

flush:先将本条cacheline中脏的部分写回到下级缓存中，并且令该条cacheline无效。

inval:直接将该条cacheline无效，不写回脏数据。

zero:讲该cacheline的所有字节都写为0。

**zero会被StoreQueue当成是一条全写0的store处理。**

## 接口描述
方向是从CMOUnit角度来看，通过valid/ready来握手。

**CMOUnitIO**

| 字段 | 方向 | 作用 |
| --- | --- | --- |
| CMOReq | in | CMO操作请求 |
| CMOResp | out | 收到CmopCMO才拉高 |
| wfi.req wfi.safe | in out | 休眠 |
| TXREQ | out | 发请求给L2 |


****

**CMOReq **

| 字段 | 作用 |
| --- | --- |
| id | StoreQueue发的编号，响应返回的时候通过这个id,SQ能知道是什么CMO事务 |
| opcode | 用于区分clean flush inval的哪种 |
| paddr | 物理地址，代表操作的缓存行 |
| alias | 索引set的高位虚地址 |


****

**CMOResp**

| 字段 | 作用 |
| --- | --- |
| id | 对应请求的id |
| done | 代表状态机状态变成空闲了，等价为CMO操作做完。 |
| error | L2的CompCMO.respErr非0，表示是否响应错误。 |


StoreQueue发出请求后，就必须每个时钟周期都准备好接收响应，CMO没有replay机制。

****

**TXREQ**

可见DCache -> L2接口，注意CMO发txnID只发16。

## 事务描述
CMO事务流程

CMO只有在StoreBuffer排空的时候才能发出。

不发进Mainpipe，直接发到AMOUnit中，通过CMOreq的opcode可以得出是clean，flush，inval中的哪个。发TXREQ给L2Cache，L2根据收到的CMO看目录L1是否有这个缓存行，转化为对应的snoop操作。

如果是clean的话就要求DCache写回该行脏数据，并且置为Clean（UD->UC, UC->UC, SC->SC，如果是I的话根本就不发snoop）

如果是flush的话就要求DCache写回该行脏数据，并且置为I。

如果是inval的话直接要求DCache状态置为I。

zero的话会被提前处理为store 全0操作。





## 状态机行为
一共有4个状态，分别为  **s_idle，s_sreq，s_wresp，s_lsq_resp**。



| 状态 | 何时转变 | 含义 |
| --- | --- | --- |
| `s_idle` | `cmoReq` 被收下，进入 `s_sreq`。同时锁存 id、opcode、paddr、alias，`error` 清 0 | 空闲。`cmoReq.ready=1`，`wfi.safe=1`。没有正在做的 CMO |
| `s_sreq` | 同地址没有 MissEntry、`wbBlock=0`，并且 L2 收下 `txnId=16` 的 TXREQ，进入 `s_wresp` | 请求已经收下，准备发给 L2。障碍还在，或者这一拍 miss 优先，TXREQ 保持不动 |
| `s_wresp` | RXRSP 是 `txnId=16` 的 `CompCMO`，进入 `s_lsq_resp`。`respErr` 非 0 时把 `error` 置 1 | TXREQ 已经发出，只等 L2 完成。不等 Snoop，也不等 WritebackQueue |
| `s_lsq_resp` | `cmoResp` 被 StoreQueue 收下，回到 `s_idle` | 把 `id`、`done=1`、`error` 交回 StoreQueue。这条 CMO 到此结束 |




<img src="https://cdn.nlark.com/yuque/0/2026/png/35409901/1793372346071-072e3202-22b7-40f7-ab35-bab6a2809d4c.png" width="558.9333333333333" title="" crop="0,0,1,1" id="u28386d88" class="ne-image">
