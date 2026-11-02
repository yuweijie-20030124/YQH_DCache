DCache 中会碰到的冲突，导致的延迟挺严重的。

端口和流水结构冲突：

1. DataArray 的 bank conflict
2. MainPipe 的 set conflict
3. TagArray 的读写端口冲突
4. Meta 的写读冲突
5. 回填进入 MainPipe 后的 set 冲突

资源和协议冲突：

6. WritebackQueue block
7. Probe conflict
8. MSHR conflict
9. 权限 conflict
10. 别名 conflict
11. way 占用 conflict

读写端口冲突的本质是没有那么多读写口。SRAM 做成真多口，时序和面积都会变差；冲突太多，性能又会掉。中间的取舍一般是三种做法：真多端口、复制多份、按 bank 拆开。YQH 的 Data 按 way 和 bank 拆开，Tag 用复制体，Meta 用寄存器（Meta就两位，寄存器开销不高）。Data Array用拆分Bank的方式来达成伪多读写端口的目的。

# ① DataArray bank conflict
<img src="https://cdn.nlark.com/yuque/0/2026/png/35409901/1793091204651-f658f0c4-b36f-4fcd-897e-edfd4dbcf03a.png" width="398" title="" crop="0,0,1,1" id="ufddad4bc" class="ne-image">

目前的YQH设计是不打算带路预测的。



Data 是 256 set、4 way、64 B 行、8 个 bank，每个 bank 64 bit。物理组织和香山打开 WPU 时一样：每一路的每一个 bank 各有一块单口 SRAM。一共 4 × 8 = 32 块，深度 256，宽度 64 bit。way 不是同一块 SRAM 里的宽度。

不使用 WPU。路预测的成功率不够，测错了还要 replay，读错的那一路 SRAM 白耗了，请求还要重来。

也不能做成“s0 先拿到正确 way，再打开一块 SRAM”。s0 是地址刚进来的那一拍，这一拍只能把 set index 送给 Tag SRAM。Tag 要到下一拍才输出，物理 tag 比较也在 s1。正确 way 是比较出来的，s0 时还不存在。香山的 WPU 能在 s0 读 Data，是因为它猜了一个 way，不是因为它已经知道正确 way。

已冻结为串行 DCache，不加 WPU。s1 比较出唯一的真实 way 之后，才给这一路的目标 bank 发读。Data SRAM 再过一拍，s2 才能把数据和 hit/miss 一起返回。命中数据比“s0 把 4 路一起读出来”晚一拍，这拍延迟用来换功耗：平时只打开 1 到 2 块 Data SRAM。

s0 只根据虚拟地址读这个 set 的 4 路 Tag 和 4 路 Meta。Tag 很小，4 路一起读可以接受。Data 这一拍不碰。

s1 拿到 Tag、Meta 和物理地址，比较出唯一的真实 way。然后只打开这一路里地址落到的那一块 bank SRAM。128 bit 也只读这一路的 `bank` 和 `bank + 1`。跨 cache line 由 LSU 拆开，不会从 bank 7 绕回 bank 0。比较结果是 miss 时，不读 Data。

probe、replace、原子要旧数据时同样先确定 way，再只读这一路的 8 个 bank。replace 的 way 是已经选定的 victim。probe 和原子的 way 来自 Tag 比较，不是预测。

所以一次 Data 访问只打开 1 块 SRAM，128 bit 打开 2 块，整行打开这一路的 8 块。不会为了保险把 4 路一起读出来。

冲突要同时满足三件：同一个 bank、同一个 way、不同的 set。way 不同就是不同的 SRAM，set 即使相同也不冲突。同一 set、同一 way、同一 bank 可以共用一次读，因为地址相同。

写被本拍收下之后，下一拍才占用 SRAM。写读冲突看的是上一拍写下的那一路，不是所有路。

## 读读冲突
两条 load 在 s1 要读同一块 SRAM：way 相同、bank 有重叠、set 不同。这块 SRAM 只有一个地址口。

处理：用 LoadQueue 的年龄选出最老的那条。年轻的返回 replay。128 bit 只要两个 bank 里有一个重叠，并且 way 相同，就算冲突。way 不同，两路并行读，不 replay。

## 读读行冲突
整行读已经知道 way，要占住这一路的 8 个 bank。一条 load 也要读这一路，而且 set 不同，就和整行读冲突。

整行读优先。load 返回 replay。load 如果是另一路，整行读挡不住它。同一 set、同一 way 可以共用这次整行读。

## 写读冲突
上一拍写的是某一路的若干 bank。这一拍 load 只有 way 相同，而且要读的 bank 和写 mask 重叠，才被挡住。

处理：挡住这一路的这个读口，load 返回 replay。只写了 way 0 的 bank 2 时，读 way 0 的 bank 0 不用让，读 way 1 的任何 bank 也不用让。

## 写读行冲突
上一拍写过某一路的任意 bank，这一拍又要读这一路的整行。整行需要这一路的 8 个 bank，所以只要这一路还有写没结束，整行读就不能开始。

处理：这一路整行读的 ready 为 0，probe、replace 或原子读停在原地，不向 LSU 报 replay。写的是别的 way 时，不挡。

## 写写冲突
Data 的写只有 MainPipe s3。不再有第二条回填流水和它同时写。同一拍、同一路、同一个 bank 仍然只有一个写地址。部分 store 只写选定 way 上被 mask 碰到的 bank，不写别的 way，也不写这一路没碰到的 bank。

Store 进 MainPipe 之后，旧数据也只读这一路里“被写到、但没有整 bank 覆盖”的那些 bank。

# ② MainPipe set conflict
这是流水线里的结构冲突，不是“Snoop 必须等 ReadShared”。

MainPipe 同一拍只进一条，优先级是：

```latex
probe > refill > store > atomic
```

没有 replace 入口。换出旧行是 refill 自己的 s1 和 s3，不另外占一条仲裁。

s0 用 `vaddr[13:6]` 和 s1、s2、s3 比 set。任何一个相同，这一拍就不进。原因是 Tag、Meta、Data 的访问还没离开这几级，同一个 set 再插进来会读到写了一半的状态，或者抢同一个 SRAM 地址。

s3 做 AMO 或 AMOCAS 时多出来的那一拍运算也算占用 s3。同 set 的新请求继续停在 s0。

不同 set 不互相挡。probe 只比 set，不额外因为“有一笔 ReadShared 还没回来”而停住。

# ③ TagArray 的读写端口冲突
Tag 宽 34 bit，是 `paddr[47:14]`。一个 set 有 4 个 way，拆成 2 个 bank，每个 bank 放 2 个相邻 tag。

Tag进行多端口读写的方法是使用复制体，有多少个设备需要读就复制几份：2个loadpipe和1个mainpipe需要读tag，可以同时读互不等待。

写只有 MainPipe s3 一个来源，同一拍只接受一个写。写的时候把所有复制体一起改掉。只改一份，其它流水会读到旧 tag。

某个 tag bank 正在写时，所有复制体的这个 bank 都不能再当普通读。读要么停一拍，要么直接使用刚写进去的数据。不能读旧副本。

# ④ Meta 的写读冲突
Meta 不用 SRAM，使用寄存器，因为位宽小，读口可以做多份。每个 set 的每个 way 一份，2 bit，状态只有 I、SC、UC、UD。总数是 `2 × 256 × 4`。

读是组合逻辑读出后再打一拍。写是两级流水，并且要把新值 forward 给同一拍的读。

probe、refill、store、atomic 在 s0 都要读 Meta，因为 refill 这时还要认出 victim。这个 set 的写还没结束时，读让写，请求停在 s0。Data 正在写、而 refill 又要读有效 victim 时，refill 在 s1 多停一拍。这是两件不同的事，不要合成一个冲突。

# ⑤ 回填进入 MainPipe 后的 set 冲突
不再单设 RefillPipe，也不单设 replace 入口。load、store、软件预取和原子 miss 的回填都是 refill，优先级仅次于 probe。s1、s2 或 s3 已经有这个 set，新的 refill 就不能进 s0。

因此取消以前的例外。以前 RefillPipe 可以在 MainPipe 过了 s1 之后写同 set 的另一路；现在没有第二条写流水，同 set 的任何 way 都要等这条 MainPipe 离开。不同 set 仍然互不相挡。

原子指令第一次查找走 atomic。数据回来后不再进 atomic，改走 refill，和 load、store 用同一次 s3 换出 victim、写入新行。

# ⑥ WBQ block conflict
这条物理行还在 WritebackQueue 里，新的 miss 不能再向 L2 索要

WritebackQueue 里还有这个物理行时，新的 miss 不能发出。LoadPipe 在 s2 用块地址做 `wbq_conflict_check`。MainPipe 的 store、原子 miss 也做同样的检查。对上了就不要分配一笔会把这行再次要回来的请求。load 向 LSU 返回 replay。store 向 Sbuffer 返回 replay，这一拍不写成命中。

victim 不提前读出，也不 sleep。数据回来前，旧行仍在 array 里，load 和 store 直接命中 array。refill 的 s1 再读这份最新数据。s3 收下 WritebackQueue 之后就可以向下发 Evict 或 WriteBackFull，不等另一次回填来唤醒。同地址的新 miss 在这项离开 WritebackQueue 之前继续被挡住。

WritebackQueue 有 18 项，必须多于 MissQueue 的 16 项。否则每一笔 miss 都占着一个 victim 时，写回队列会先满，miss 也无法继续。

# ⑦ Probe conflict
Snoop 到来时可能和本地访问撞车。在途 ReadShared 没有返回， Snoop也可以进行，不阻塞。Snoop 只等两类事情。

第一类是 MainPipe 的同 set 冲突。probe、refill、store 或 atomic 已经在 s1、s2 或 s3 时，同 set 的其他请求进不了 s0。反过来，同 set 已经有人在流水里，新的 probe 也进不去。不同 set 的 Snoop 照常进。

第二类是 LR reservation。`LRSCCycles = 64`，`LRSCBackOff = 8`。计数器从 63 递减，大于 8 时 reservation 有效。这段窗口里，同地址 Probe 留在 ProbeQueue，不发送，也不释放。窗口结束后按普通 Snoop 处理。

Probe Entry 在请求交给 MainPipe 的下一拍释放，不等 s3，也不等 L2 收到应答。所以队列里不应该再放进同一物理行的第二笔 Snoop。后到的同地址 Snoop 先留在入口，等前一笔的队列项释放后再分配。

还有一种数据冲突。回填缓冲里已经有这份唯一脏数据，而 cache array 里还没有，或者已经不再有效。这时 Snoop 不能回答空 miss，必须把缓冲里的数据交出去。Snoop 已经对 L2 说过 L1 没有这行之后，MainPipe 的 refill 也不能再把同一行安装成有效。最终状态如果是 I，数据可以收完，但不能写进有效的 cache line。

# ⑧ MSHR conflict
16 个 MSHR 按地址互相看，不是按进入顺序互相堵。

同一物理行、同一 alias，已经有一项时，不再分配第二项。后来的请求能合并就合并：load 可以挂到还没回填完的那项上，store 的数据和 mask 留在原项里，等 MainPipe 回填写入时一起合并。不能合并就拒绝。被拒绝的 load 或 store 返回 replay。

同一物理行、alias 不同，不能合并。这是下面的别名冲突，不是普通的二次 miss。

MSHR 满了，只有新地址会被拒绝。已经在里面的地址仍然可以合并。一个地址的 load 响应还没被 LSU 拿走，不妨碍另一个地址分配自己的 MSHR。

替换还有一个方向相反的检查。即将被换出的地址如果还被某个 MSHR 占着，这次 refill 不能把那一路选成 victim。否则新行会盖掉一笔还没完成的访问。

# ⑨ 权限 conflict
权限冲突不是端口忙，是当前 Meta 不能满足这次访问。Meta 只有 I、SC、UC、UD。

| 当前状态 | load | store 或原子写 | 原因 |
| --- | --- | --- | --- |
| I | miss | miss | 行不在 |
| SC | 可以读 | miss | 共享，没有写权限 |
| UC | 可以读 | 可以写 | 独占且干净 |
| UD | 可以读 | 可以写 | 独占且脏 |


store 看到 SC 或 I，由 MainPipe 把带数据和 mask 的 miss 交给 MissQueue，向 L2 要独占权限。整行覆盖用 MakeUnique，否则用 ReadUnique。数据回来并由 MainPipe 回填安装之后才是 UC 或 UD。

真正写入只发生在 MainPipe。UC 被 store 写过之后变成 UD。只是占住 MSHR，行还不是 UC。

Snoop 可以在权限升级的中途把最终状态改掉。MSHR 要记下 pending snoop。回填写 Meta 之前再看一次。Snoop 要求失效，最终状态就是 I，不能因为原来的请求是 ReadShared 或 ReadUnique 就写成 SC、UC 或 UD。

L1 不保存 SD。共享并且 PassDirty 的数据先交给 WritebackQueue，再安装成 SC。不能为了少一次写回，把 SD 留在 Meta 里。

# ⑩ 别名 conflict
DCache 是 VIPT。页大小 4 KB，256 个 set，行 64 B，所以 index 用到 `vaddr[13:6]`，其中 `vaddr[13:12]` 是 2 bit 别名。同一个物理行可以落进 4 个不同的 set。

L1 不能只靠物理地址判断两笔请求是不是撞在同一行里。MissQueue 必须同时留下物理行地址和这次的 alias。

例子：虚拟地址 `0x00000040` 和 `0x00001040` 都映射到物理地址 `0x80000040`。前者 alias 是 `00`，进 set 1；后者 alias 是 `01`，进 set 65。两次查找都 miss。第二笔请求到达 L2 时，L2 发现这个物理行已经以另一个 alias 留在 L1。

这不是 MSHR 合并。L2 发 Snoop，撤销旧 set 里的副本。旧行是脏的，就把脏数据写回去。旧副本撤销之后，L2 才把数据返回给新 alias 的那次访问。L1 里同一物理行不能同时以两个 alias 有效。

Probe 请求里的 alias 来自 RXSNP 的 `tagAlias`，不能从物理地址还原。

# ⑪ way 占用 conflict
一个 set 只有 4 路。真 miss 不在分配 MSHR 时把 victim 定死。refill 的 s1 再选：有无效 way 就选编号最小的，否则用当时的 PLRU。

权限升级必须继续用命中的那一路，不能把它当成 victim 交出去。这个 way 记在 MSHR 里。同一 set 里这种 way 已经占满时，新的权限升级向 LSU 或 Sbuffer 返回 replay。

refill 的 s2 还要问一次 `replaceBlock`。即将换出的物理行如果还在某个 MSHR 里，这一路不能当 victim，这次回填重选或停住。否则新行会盖掉一笔还没完成的访问。


