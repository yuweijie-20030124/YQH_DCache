## 功能描述
支持整数，浮点，LR/SC，AMO和AMOCAS等原子访存，支持缓存一致性，miss合并，非阻塞，replay，指令预取和CMO的4 way组相联，256set，大小为64KB的数据Cache。

暂不支持硬件预取，ECC检查，ECC注入。

<img src="https://cdn.nlark.com/yuque/0/2026/png/35409901/1793084945603-e8e43ce2-abf9-48a7-bd4e-f803cbb7530e.png" width="661.8181818181819" title="" crop="0,0,1,1" id="u9c0f55df" class="ne-image">

架构图以及事务分析

+ **LoadPipe**：处理普通 load 的 tag、meta、data 访问，完成命中判断，并产生 miss、 replay 结果。
+ **MainPipe**：负责接收四路请求，在s0阶段进行仲裁，优先级：Snoop > Refill > Store> Atomic，store只从Sbuffer中来，没有store pipe去提前预取。在Refill阶段的s1选中要被踢出的缓存行，s3把有效旧行交给WritebackQueue，同一拍写入新行。
+ **MissQueue**：实现 16项的MSHR，记录一个 cache line miss 的完整生命周期，负责 miss 合并or拒绝or申请、发TXREQ、收RXDAT和RXRSP，可以对Loadunit进行数据前递。等到一条cacheline的数据齐了，就向Mainpipe发refillreq。CMO请求从storebuffer进入DCache，最后进入MissQueue中的CMOUnit单元。CMO发的请求固定txnID为16.
+ **ProbeQueue**：只通过RXSNP接收L2来的发来的snoop请求，并把地址，snoop，txnID等作为probereq发送给Mainpipe。在Mainpipe的s0收下后下一排就可以释放。
+ **WritebackQueue**：WritebackQueue收到Mainpipe替换出来的旧行，如果需要传数据通过TXDAT通道传，如果不需要传数据，通过TXEVT通道传，通过TXRSP进行L2的Snoop回复。CMO clean/flush要写回的脏行也通过TXDAT通道传输。
+ **CMO 单元**：按 cache line 执行 `clean`、`flush`、`inval` 和 `zero`，并将请求和普通访存正确排序。例化在MissQueue中，zero的CMO操作被处理为一条store 全0指令。

## 参数描述
可配置参数

| <font style="color:#70000d;">参数</font> | <font style="color:#70000d;">默认值</font> | <font style="color:#70000d;">含义</font> |
| --- | --- | --- |
| DCacheSize | 64K Byte | DCache容量是64K Byte |
| nSets | 256 | DCache的组数 |
| nWays | 4 | DCache一组有多少路 |
| rowBits | 64 | Data SRAM一个单元格位宽64bit |
| blockBytes | 64 | 一行cacheline放8个64bit的数据 |
| nBanks | 8 | bank数量 |
| nProbeEntries | 16 | ProbeQueue条目数 |
| nMissEntries | 16 | MSHR条目数 |
| nReleaseEntries | 18 | writeback的entry条目数 |




## 接口描述
### CPU侧DCache上游接口
见下级文件DCache上游接口

### 下级缓存Compact CHI侧接口
见下级文件 DCache -> L2接口 

## 模块设计
见各下级文件



**本次设计不带路预测**。香山中的路预测仅仅只是做到降低功耗的作用，没办法做到将load-to-use提前几个时钟周期，同时如果预测错误的话会产生replay机制，我认为这个得不偿失。还有香山load的颗粒度不一样。

**那香山为什么做呢？**香山的串行loadpipe的WPU是可开关的，如果是开WPU的，那在s0访问tag和meta的时候能获得预测的way，然后s1阶段就直接拿这个way去访问data sram。与之不同的是，如果不开WPU，那在s0访问tag和meta的时候不能得到正确的那个way，因此在s1访问data sram的时候会把set中的所有way的值都取出，再判断miss or hit。因此可以看出开wpu与不开wpu的区别是访问data sram的数据宽度不同，这会导致功耗不同，同时data sram的组织形式也不一样。

****

<img src="https://cdn.nlark.com/yuque/0/2026/png/35409901/1793168948500-26f50665-7564-4a5d-9995-2abd53dbef17.png" width="477.6" title="" crop="0,0,1,1" id="ub000c843" class="ne-image">

不带WPU的Bank组织形式如上



<img src="https://cdn.nlark.com/yuque/0/2026/png/35409901/1793168996285-641cb530-8f62-4a31-bf47-a5c0d153847a.png" width="561.6" title="" crop="0,0,1,1" id="ucf289ee3" class="ne-image">

带WPU的Bank组织形式如上



## 事务描述
#### Load事务
具体见LoadPipe。



#### Store事务
具体见MainPipe。



#### 原子事务
具体见MainPipe。



#### Replay机制
Replay 只表示这一拍既没做完，也没被 MissQueue 接住。请求方稍后自己再发。LoadPipe 和 MainPipe 都不为了等入口停住。

已经接住的不走这条。普通 load 拿着 `mshr_id` 等 `forward_chi`、`forward_mshr` 或 `refill_wakeup`。store 等 refill 的 s3 拿成功。原子留在 AtomicsUnit，等 refill 做完再回答。

没接住时各走各的：

| 请求 | 什么时候 replay | 谁重发 |
| --- | --- | --- |
| 普通 load | 这一拍 `missReq`没被选中；MissQueue 拒绝；`wbBlock=1`；bank 冲突 | LoadUnit。还没做过 fast replay 的再走一遍 s0–s2，否则进 LoadQueue，以后再被选出来 |
| store | 同样没被 MissQueue 接接，或权限升级时 `occupyFail=1` | Sbuffer 等 16 拍再送 MainPipe |
| 原子 | 没被MissQueue接收。 | AtomicsUnit 回到 `s_cache_req`<br/> 再发，没有这 16 拍 |
| 软件预取 | 没被选中、被拒绝或 `wbBlock=1` | 不重发，直接丢掉 |


replay分**快速replay**和**等待replay**。

#### 虚拟别名
虚拟别名产生的本质是由于DCache是 **VIPT** 的同时**容量比较大**。

<img src="https://cdn.nlark.com/yuque/0/2026/png/35409901/1793173575691-4327a637-bd2c-4641-88eb-6f19504458ca.png" width="483" title="" crop="0,0,1,1" id="u1a333e1f" class="ne-image">

这里的高位set就是虚拟别名。这会导致什么结果呢？

****

**设想一种场景：**  
虚拟地址A和虚拟地址B都映射到了同一个物理地址X上。A的VPN是00，B的VPN是10。

对A进行一次load，miss了之后会refill到set1中，后续B也进行一次load，miss了之后refill到set129中，此时storeA，就会产生物理地址X在A中有新值，物理地址X在B中有旧值，同时他们都是valid的。会发生取到旧值的情况。



**处理方法：**

<img src="https://cdn.nlark.com/yuque/0/2026/png/35409901/1793174069525-518968d5-9503-40c7-86cd-c09cbd8d036f.png" width="822.4" title="" crop="0,0,1,1" id="u0805c6f2" class="ne-image">



#### CMO
全名cache management operation，内存管理操作。

CMO走StroreBuffer通道，不进MainPipe，直接进到MissQueue中，只有本周起中没有其他MissEntry发起TXREQ，此时CMOUnit才可以发TXREQ。L2收到CMO的TXREQ后会查目录，只有目录里的状态不是CMO允许的最终状态时，才会发RXSNP，如果有脏需要返回，由MainPipe收到Probe后向WriteBackQueue发起Writebackreq来进行写回。



#### 软件预取
软件预取在数据这一块只有`prefetch.r`、`prefetch.w`，由软件显式发出，进入 LoadUnit/LoadPipe，通过发送的cmd来区别正常load还是软件预取。

软件预取的作用是软件提前给出一个地址和访问意图，处理器尝试将cacheline提前装入L1 DCache中，在真实访存稍后到来的时候可以减少miss延迟。

prefetch.r表示预取read，提前把cacheline装入DCache，prefetch.w是表示预取write，除了吧cacheline装入DCache的操作，还会提升权限到UC/UD，减少后续store指令进来由于没有写权限导致的延迟。

hit：预取想要的快刚好之前refill进来了且由对应的权限，此时预取不会进行读操作，进行空操作，预取结束。

miss：软件预取通常会miss，走正常miss通道。在loadpipe的s1中判定miss了，在s2发miss_req是alloc或merge，那想要的cacheline数据后续会refill进来。如果被MSHR拒绝了，那就直接消失即可，毕竟是预取，消失了也对状态没影响，也不是真实load请求，没必要replay。



#### 跨cacheline访存
DCache不能处理跨Cacheline的访存，需要上游拆分为两条请求。但DCache支持不跨Cacheline的非对齐访存，可以跨16B（不学香山跨16B得拆分）。



#### NC访存
DCache不负责NC访存，需要走另一个通道，由上游进行分辨内存属性之后走不同通道。







## 存储组织与数据结构
#### DataArray
由sram实现

分256set，8bank，4way，一个bank 64bit。DataArray只例化8块单端口SRAM，不拆成32个宏。每块深度256，宽度是4路×64bit。一次读出该bank的全部4路，写用way掩码只改其中一路。两条LoadPipe和MainPipe共用这8块，不复制。不同bank可同拍访问，同一bank只有一个地址口。

<img src="https://cdn.nlark.com/yuque/0/2026/png/35409901/1793171891039-77840c45-3091-4135-b9ad-fde87499e718.png" width="702" title="" crop="0,0,1,1" id="u56e8587d" class="ne-image">

#### TagArray
由sram实现。有2loadpipe和1mainpipe需要进行3读1写，如果实现为多读写端口时序和面积都会差，于是用复制体的方式来构造。一共4个way拆分为两个bank。1个bank有nset * 2个tag。<img src="https://cdn.nlark.com/yuque/0/2026/png/35409901/1793172428708-a456a9b6-e323-4117-83a7-8bacd61c9601.png" width="682" title="" crop="0,0,1,1" id="u29f5922d" class="ne-image">

一个set有4way，一个way一个tag，4way分成了2个bank，其中1个bank存放2个相邻tag。这样sram宏宽度不会太大，多例化几个sram宏。

**读**：把一个set的所有bank中的所有tag都取出，然后进行tag比较。

**写**：只写命中的那个way所在的bank，然后用两位掩码来表示写的是bank中的哪个tag。



#### MetaArray
由寄存器实现，位宽小，只需要2bit表示四种状态I,SC,UC,UD。

每一个set中的每一个way都需要有meta信息，于是仅需要2 * 256 * 4 个寄存器。



#### WriteBackEntry
见WriteBackQueue的子模块

#### MSHREntry
见MissQueue的子模块
