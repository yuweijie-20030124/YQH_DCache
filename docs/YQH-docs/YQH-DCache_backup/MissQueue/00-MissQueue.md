## 功能描述
负责处理miss的load、store和原子请求，和LoadPipe送来的软件预取，一共16条entry，每一条entry负责一条cache line的完整miss请求。分配id的时候从小往大分。



## 参数描述
| <font style="color:#000000;">参数</font> | <font style="color:#000000;">值</font> | <font style="color:#000000;">MissQueue 里怎么用</font> |
| --- | --- | --- |
| <font style="color:#000000;">nMissEntries</font> | <font style="color:#000000;">16</font> | <font style="color:#000000;">MSHR 编号 0～15，也是 miss 的 TXREQ.txnId。16 项都能作用于 load、store、原子和软件预取</font> |
| <font style="color:#000000;">nReleaseEntries</font> | <font style="color:#000000;">18</font> | <font style="color:#000000;">WritebackQueue 必须比 MissQueue 多。MissQueue 不保存写回数据</font> |
| <font style="color:#000000;">blockBytes</font> | <font style="color:#000000;">64</font> | <font style="color:#000000;">一项持有一整行。RXDAT 每拍 32B，分两拍收齐</font> |
| <font style="color:#000000;">alias</font> | vaddr[13:12] | <font style="color:#000000;">和物理行地址一起比较。不同 alias 不合并</font> |
| <font style="color:#000000;">Tag</font> | <font style="color:#000000;">34 bit</font> | <font style="color:#000000;">padder[47:14], MissQueue 不读 Tag SRAM</font> |
| <font style="color:#000000;">CMO txnId</font> | <font style="color:#000000;">第16</font> | <font style="color:#000000;">CMO 不占 16 个 MissEntry。WritebackQueue 的 txnId 不得使用 0～15，占用第16</font> |




## 接口描述
方向是从MissQueue的角度。同一拍只接受一条新的missReq，外部需要有个仲裁器MissArb判断进来的请求是Mainpipe发来的还是loadpipe发来的。



| <font style="color:#000000;">字段</font> | <font style="color:#000000;">方向</font> | <font style="color:#000000;">作用</font> |
| --- | --- | --- |
| <font style="color:#000000;">请求和响应</font> | <font style="color:#000000;"></font> | <font style="color:#000000;"></font> |
| <font style="color:#000000;">missReq</font> | <font style="color:#000000;">in</font> | <font style="color:#000000;">外部发来的miss请求，</font> |
| <font style="color:#000000;">missResp</font> | <font style="color:#000000;">out</font> | <font style="color:#000000;">告诉请求方的miss是否被处理，处理的id，是否被merge</font> |
| <font style="color:#000000;">wbBlock</font> | <font style="color:#000000;">in</font> | 同地址写回在WBQ中时，MSHR不能申请与合并 |
| <font style="color:#000000;">替换查询</font> | <font style="color:#000000;"></font> |  |
| <font style="color:#000000;">replaceBlock</font> | <font style="color:#000000;">in</font> | <font style="color:#000000;">MainPipe在refill的时候会访问MSHR，若MSHR中有这一项，则不能被victim出去</font> |
| <font style="color:#000000;">回填</font> | <font style="color:#000000;"></font> | <font style="color:#000000;"></font> |
| <font style="color:#000000;">refillReq</font> | <font style="color:#000000;">out</font> | <font style="color:#000000;">可以发出refill请求</font> |
| <font style="color:#000000;">refillResp</font> | <font style="color:#000000;">in</font> | <font style="color:#000000;">refill请求已经完成</font> |
| <font style="color:#000000;">pendingSnoop</font> | <font style="color:#000000;">out</font> | <font style="color:#000000;">refill的时候写meta要看MSHR记录的状态，若miss中途来了个snoop，最终状态要根据snoop的来。</font> |
| <font style="color:#000000;">CMO请求</font> | <font style="color:#000000;"></font> | <font style="color:#000000;"></font> |
| <font style="color:#000000;">cmoReq</font> | <font style="color:#000000;">in</font> | <font style="color:#000000;"></font> |
| <font style="color:#000000;">cmoResp</font> | <font style="color:#000000;">out</font> | <font style="color:#000000;"></font> |
| wfi请求 | <font style="color:#000000;"></font> | <font style="color:#000000;"></font> |
| <font style="color:#000000;">wfi.req</font> | <font style="color:#000000;">in</font> | 休眠请求 |
| <font style="color:#000000;">wfi.safe</font> | <font style="color:#000000;">out</font> | CMO休眠响应 |
| <font style="color:#000000;">way占用</font> | <font style="color:#000000;"></font> | <font style="color:#000000;">权限升级要occupy占用way</font> |
| <font style="color:#000000;">occupySet</font> | <font style="color:#000000;">in</font> | <font style="color:#000000;">loadpipe和mainpipe会访问的set</font> |
| <font style="color:#000000;">occupyWay</font> | <font style="color:#000000;">out</font> | <font style="color:#000000;">这个set已经占用的way</font> |
| <font style="color:#000000;">occupyFail</font> | <font style="color:#000000;">out</font> | <font style="color:#000000;">占用失败</font> |
| //DCache<>L2 |  |  |
| <font style="color:#000000;">TXREQ</font> | <font style="color:#000000;">out</font> | <font style="color:#000000;">ReadShared、ReadUnique、MakeUnique，以及 CMO。</font>`<font style="color:#000000;">size</font>`<font style="color:#000000;"> </font><font style="color:#000000;">固定为 6</font> |
| <font style="color:#000000;">RXDAT</font> | <font style="color:#000000;">in</font> | <font style="color:#000000;">CompData。</font>`<font style="color:#000000;">dataId=0</font>`<font style="color:#000000;"> </font><font style="color:#000000;">是低 32B，</font>`<font style="color:#000000;">dataId=1</font>`<font style="color:#000000;"> </font><font style="color:#000000;">是高 32B。两拍不保证按 0、1 的顺序来</font> |
| <font style="color:#000000;">RXRSP</font> | <font style="color:#000000;">in</font> | <font style="color:#000000;">Comp、CompDBIDResp 等完成消息。</font>`<font style="color:#000000;">CompCMO</font>`<font style="color:#000000;"> </font><font style="color:#000000;">只送给 CMO，不能当成普通 Comp</font> |
| <font style="color:#000000;">TXRSP</font> | <font style="color:#000000;">out</font> | <font style="color:#000000;">只发 miss 的 CompAck。无数据的 SnpResp 由 WritebackQueue 发，两边在边界上仲裁</font> |
| <font style="color:#000000;">前递与唤醒</font> | <font style="color:#000000;"></font> | <font style="color:#000000;"></font> |
| <font style="color:#000000;">forward_chi</font> | <font style="color:#000000;">out</font> | <font style="color:#000000;">RXDAT 当拍就把 load 需要的那一半送给 LSU，不等写入 DataArray</font> |
| <font style="color:#000000;">forward_mshr</font> | <font style="color:#000000;">out</font> | <font style="color:#000000;"></font> |
| <font style="color:#000000;">refill_wakeup</font> | <font style="color:#000000;">out</font> | <font style="color:#000000;">行已经安装进 cache。提醒load可以replay</font> |
| <font style="color:#000000;">l2_lint</font> | <font style="color:#000000;">in</font> | <font style="color:#000000;">L2 预告哪一项、哪一半先到。只用来提前准备 forward，不能提前发 refill</font> |


## 事务描述
### 原子miss：
<font style="color:#000000;">LR、SC、AMO、AMOCAS 没有权限时，或者tag不命中，由 MainPipe 发 missReq。MissQueue 发 ReadUnique。</font>

<font style="color:#000000;">等到数据收齐后发 refillReq 给MainPipe，在MainPipe中完成refill和原子运算。</font>

<font style="color:#000000;">原子请求miss了之后不会再合并MSHR，只会重新分配。</font>

<font style="color:#000000;">若拒绝，则replay。</font>

### <font style="color:#000000;">load miss：</font>
LoadPipe在s2阶段发来missReq，此时不带victim信息，可以等refill的时候再选victim。进行分配或者合并或者拒绝，若此时拒绝，进行replay重发，若合并或分配。

只有在同一物理行，同个alias，还没refillReq的时候可以进行合并，除此之外拒绝或分配。

若拒绝，则LoadUnit进行replay。

若合并，refillReq还没到，填旧项的数据还没完成，若buffer中已经有了所要的数据，LSU用MSHR号来读forward_mshr，收到的值是所要的数据，当拍通过forward_chi给LoadUnit。若前两个forward都没进行，等refill_wakeup后重发，此时能够hit。后续正常发refill给MainPipe。

若分配新项，正常发TXREQ，收数据后发refill，中间也可以forward给LoadUnit。

### store miss：
MainPipe在s2阶段发来missReq，

<font style="color:#000000;">同一物理行、同一 alias，已有项已经是 ReadUnique 或 MakeUnique，并且 </font>`<font style="color:#000000;">refillReq</font>`<font style="color:#000000;"> 还没拉高 或者</font>

<font style="color:#000000;">同一物理行、同一 alias，已有项仍是 ReadShared，而且 TXREQ 还没被 L2 收下。可以合并。其余拒绝或分配新项。</font>

`fullOverwrite=1` 发 MakeUnique，没有 RXDAT；部分写发 ReadUnique。权限升级记下命中 way，refill 必须写回这一路，不能把原来的 SC 先 Evict 掉。

拒绝后 Sbuffer 等 16 拍再发，不是下一拍。MainPipe s2 不停住。成功响应等 refill 的 s3，不等 TXREQ 发出。写过的行安装成 UD。  



### 软件预取：
<font style="color:#000000;">软件预取从 LoadPipe 进来，按读意图发 ReadShared，按写意图发 ReadUnique。它可以分配任意空项，也可以合并到同地址、同 alias 的已有项。当 MissQueue 拒绝时不用重发，直接丢弃，LoadPipe解释软件预取操作，无其他影响。</font>

`prefetch.r` 的合并和 load 一样：可并进还没发 `refillReq` 的 load、store 或软件预取，不改 opcode。新分配发 ReadShared。

`<font style="color:#000000;">prefetch.w</font>`<font style="color:#000000;"> 不一样。它要独占，但没有整行 store 数据，所以新分配一定是 ReadUnique，不是 MakeUnique。只能并进还没发 </font>`<font style="color:#000000;">refillReq</font>`<font style="color:#000000;"> 的 ReadUnique 或 MakeUnique，或者把还没被 L2 收下的 ReadShared 改成 ReadUnique。不写 store 数据。ReadShared 已经发出就拒绝。</font>





### CMOUnit 见左侧
## 存储组织与数据结构
MissEntry组织

| <font style="color:#000000;">字段</font> | <font style="color:#000000;">位宽</font> | <font style="color:#000000;">何时写入</font> | <font style="color:#000000;">作用</font> |
| --- | --- | --- | --- |
| `<font style="color:#000000;">busy</font>` | <font style="color:#000000;">1</font> | <font style="color:#000000;">分配mshr的时候置 1。</font> | <font style="color:#000000;">这项有没有在途 miss</font> |
| `<font style="color:#000000;">source</font>` | <font style="color:#000000;">4</font> | <font style="color:#000000;">分配</font> | <font style="color:#000000;">0 load，1 store，2 原子，3软件预取。决定谁完成、要不要前递</font> |
| `<font style="color:#000000;">cmd</font>` | <font style="color:#000000;">5</font> | <font style="color:#000000;">分配</font> | <font style="color:#000000;">读、写、具体原子操作，或</font><font style="color:#000000;"> </font>`<font style="color:#000000;">prefetch.r</font>`<font style="color:#000000;"> </font><font style="color:#000000;">/</font><font style="color:#000000;"> </font>`<font style="color:#000000;">prefetch.w</font>`<font style="color:#000000;">。refill 时原子还要用</font> |
| `<font style="color:#000000;">addr</font>` | <font style="color:#000000;">48</font> | <font style="color:#000000;">分配，对齐到行，低 6 位为 0</font> | <font style="color:#000000;">物理行地址。合并、拒绝、</font>`<font style="color:#000000;">replaceBlock</font>`<font style="color:#000000;"> </font><font style="color:#000000;">都比它。TXREQ 原样送出</font> |
| `<font style="color:#000000;">alias</font>` | <font style="color:#000000;">2</font> | <font style="color:#000000;">分配，即</font><font style="color:#000000;"> </font>`<font style="color:#000000;">vaddr[13:12]</font>` | <font style="color:#000000;">不能从物理地址还原。和</font><font style="color:#000000;"> </font>`<font style="color:#000000;">addr[11:6]</font>`<font style="color:#000000;"> </font><font style="color:#000000;">拼出 set，也是 TXREQ 的</font><font style="color:#000000;"> </font>`<font style="color:#000000;">tagAlias</font>` |
| `<font style="color:#000000;">client_id</font>` | <font style="color:#000000;">8</font> | <font style="color:#000000;">分配。</font> | <font style="color:#000000;">最初那条 store 或原子的完成号，refill 时交回 MainPipe，上游才知道完成的是哪个请求</font> |
| `<font style="color:#000000;">is_upgrade</font>` | <font style="color:#000000;">1</font> | <font style="color:#000000;">分配。命中 SC、要独占时为 1，真 miss 为 0</font> | <font style="color:#000000;">是不是权限升级</font> |
| `<font style="color:#000000;">way</font>` | <font style="color:#000000;">4，独热</font> | <font style="color:#000000;">只在</font><font style="color:#000000;"> </font>`<font style="color:#000000;">is_upgrade=1</font>`<font style="color:#000000;"> </font><font style="color:#000000;">时分配写入命中 way</font> | <font style="color:#000000;">refill 必须写回这一路，不能当 victim，也不能换路。真 miss 的 victim 不在这里定</font> |
| `<font style="color:#000000;">opcode</font>` | <font style="color:#000000;">6</font> | <font style="color:#000000;">分配写成 ReadShared、ReadUnique 或 MakeUnique。TXREQ 还没 fire 时，store 并进 ReadShared 改成 ReadUnique</font> | <font style="color:#000000;">发出去的 TXREQ 类型。</font> |
| `<font style="color:#000000;">dbid</font>` | <font style="color:#000000;">8</font> | <font style="color:#000000;">第一拍有效的 RXDAT 或 RXRSP</font> | <font style="color:#000000;">CompAck 的</font><font style="color:#000000;"> </font>`<font style="color:#000000;">txnId</font>`<font style="color:#000000;"> </font><font style="color:#000000;">填它，不填 MSHR 号</font> |
| `<font style="color:#000000;">dbid_valid</font>` | <font style="color:#000000;">1</font> | <font style="color:#000000;">分配清 0。第一拍有效响应置 1</font> | <font style="color:#000000;">还没收到</font><font style="color:#000000;"> </font>`<font style="color:#000000;">dbId</font>`<font style="color:#000000;"> </font><font style="color:#000000;">不能发 CompAck</font> |
| `<font style="color:#000000;">resp</font>` | <font style="color:#000000;">3</font> | <font style="color:#000000;">第一拍有效响应。后一拍必须相同，不同则置</font><font style="color:#000000;"> </font>`<font style="color:#000000;">error</font>` | <font style="color:#000000;">授予状态和脏责任。PassDirty 在这 3 位里，不再单存一位</font> |
| `<font style="color:#000000;">resp_err</font>` | <font style="color:#000000;">2</font> | <font style="color:#000000;">第一拍有效响应</font> | <font style="color:#000000;">第一拍的错误码。后一拍不一致时不改它，只把</font><font style="color:#000000;"> </font>`<font style="color:#000000;">error</font>`<font style="color:#000000;"> </font><font style="color:#000000;">置 1</font> |
| `<font style="color:#000000;">data</font>` | <font style="color:#000000;">512</font> | <font style="color:#000000;">store 或 MakeUnique 分配时写入 store 数据。ReadShared、ReadUnique 按</font><font style="color:#000000;"> </font>`<font style="color:#000000;">dataId</font>`<font style="color:#000000;"> </font><font style="color:#000000;">写入半行，当拍用</font><font style="color:#000000;"> </font>`<font style="color:#000000;">store_mask</font>`<font style="color:#000000;"> </font><font style="color:#000000;">盖住</font> | <font style="color:#000000;">要安装或被 Snoop 取走的那 64B。前递读的也是它</font> |
| `<font style="color:#000000;">store_mask</font>` | <font style="color:#000000;">64</font> | <font style="color:#000000;">store 分配时写入。再合并一条 store 时，新 mask 为 1 的位盖上数据和 mask</font> | <font style="color:#000000;">哪些字节是 store 的。load、原子、预取分配时为 0</font> |
| `<font style="color:#000000;">beat_valid</font>` | <font style="color:#000000;">2</font> | <font style="color:#000000;">分配清 0。</font>`<font style="color:#000000;">dataId=0</font>`<font style="color:#000000;"> </font><font style="color:#000000;">置 bit 0，</font>`<font style="color:#000000;">dataId=1</font>`<font style="color:#000000;"> </font><font style="color:#000000;">置 bit 1</font> | <font style="color:#000000;">哪一半已经到了。两拍不必按 0、1 的顺序。MakeUnique 不用它</font> |
| `<font style="color:#000000;">error</font>` | <font style="color:#000000;">1</font> | <font style="color:#000000;">分配清 0。</font>`<font style="color:#000000;">respErr</font>`<font style="color:#000000;"> </font><font style="color:#000000;">非 0、两拍响应不一致，或同一个</font><font style="color:#000000;"> </font>`<font style="color:#000000;">dataId</font>`<font style="color:#000000;"> </font><font style="color:#000000;">再来一次时置 1。置上后不改</font> | <font style="color:#000000;">随 refill 交出去。不因此丢掉这项</font> |
| `<font style="color:#000000;">amo_data</font>` | <font style="color:#000000;">128</font> | <font style="color:#000000;">只有原子分配时写</font> | <font style="color:#000000;">原子写数据，随 refill 交给 MainPipe</font> |
| `<font style="color:#000000;">amo_mask</font>` | <font style="color:#000000;">16</font> | <font style="color:#000000;">只有原子分配时写</font> | <font style="color:#000000;">原子字节掩码</font> |
| `<font style="color:#000000;">amo_cmp</font>` | <font style="color:#000000;">128</font> | <font style="color:#000000;">只有原子分配时写</font> | <font style="color:#000000;">AMOCAS 的比较值</font> |
| `<font style="color:#000000;">word_idx</font>` | <font style="color:#000000;">3</font> | <font style="color:#000000;">只有原子分配时写</font> | <font style="color:#000000;">原子落在哪个 64 bit 字</font> |
| `<font style="color:#000000;">txreq_done</font>` | <font style="color:#000000;">1</font> | <font style="color:#000000;">分配清 0。TXREQ fire 置 1</font> | <font style="color:#000000;">请求已经交给 L2。为 0 时 store 还可以把 ReadShared 升级成 ReadUnique</font> |
| `<font style="color:#000000;">data_done</font>` | <font style="color:#000000;">1</font> | <font style="color:#000000;">分配清 0。ReadShared、ReadUnique 在</font><font style="color:#000000;"> </font>`<font style="color:#000000;">beat_valid</font>`<font style="color:#000000;"> </font><font style="color:#000000;">两位都为 1 时置 1。MakeUnique 在收到 Comp、DBIDResp 或 CompDBIDResp 时置 1</font> | <font style="color:#000000;">可以发</font><font style="color:#000000;"> </font>`<font style="color:#000000;">refillReq</font>`<font style="color:#000000;">，也可以请求 CompAck</font> |
| `<font style="color:#000000;">refill_done</font>` | <font style="color:#000000;">1</font> | <font style="color:#000000;">分配清 0。</font>`<font style="color:#000000;">refillResp</font>`<font style="color:#000000;"> </font><font style="color:#000000;">置 1，写成 I 也算</font> | <font style="color:#000000;">MainPipe 已经做出安装决定。单独为 1 不能释放</font> |
| `<font style="color:#000000;">compack_done</font>` | <font style="color:#000000;">1</font> | <font style="color:#000000;">分配清 0。CompAck 被 L2 收下置 1</font> | `<font style="color:#000000;">TXRSP.txnId</font>`<font style="color:#000000;"> </font><font style="color:#000000;">用的是</font><font style="color:#000000;"> </font>`<font style="color:#000000;">dbid</font>`<font style="color:#000000;">。没发完不能释放</font> |
| `<font style="color:#000000;">snoop_done</font>` | <font style="color:#000000;">1</font> | <font style="color:#000000;">分配写成 1。确认 buffer 是唯一脏拷贝时清 0。MainPipe 按 missId 取走这 64B 后再置 1</font> | <font style="color:#000000;">唯一脏拷贝还没交出去时不能释放</font> |
| `<font style="color:#000000;">pending_snoop</font>` | <font style="color:#000000;">1</font> | <font style="color:#000000;">分配清 0。新行还没写入、同地址同 alias 的 Snoop 已经按当前 array 做完时置 1</font> | <font style="color:#000000;">refill 写 Meta 前按 missId 读它</font> |
| `<font style="color:#000000;">snoop_final</font>` | <font style="color:#000000;">2</font> | <font style="color:#000000;">和</font><font style="color:#000000;"> </font>`<font style="color:#000000;">pending_snoop</font>`<font style="color:#000000;"> </font><font style="color:#000000;">同时写。编码是 I、SC、UC、UD</font> | <font style="color:#000000;">Snoop 要求的最终状态。是 I 就不把该路装成有效行</font> |




## 流水级行为
没有像loadpipe一样有明确的s0s1s2等。MissQueue是根据MissEntry中的完成标志推进的。下面举个例子按照一个新的miss会碰到的情况来讲。<font style="color:#000000;">合并进旧项的请求不重新走 TXREQ，只在旧项上等前递或唤醒。</font>

<font style="color:#000000;"></font>

<font style="color:#000000;">MissQueue的入口有3个，分别为2条loadpipe和1条mainpipe，在入口处仲裁，同一拍只允许进来一个miss_req请求。若此时没被选中会触发replay。软件预取直接结束，不replay。</font>

<font style="color:#000000;"></font>

### <font style="color:#000000;">发TXREQ</font>
申请新项的之后，要发出TXREQ，发出opcode，物理行地址，tagalias，txnid，size等，以及请求的权限。<font style="color:#000000;">L2 的 </font>`<font style="color:#000000;background-color:rgba(255, 255, 255, 0.1);">TXREQ.ready=0</font>`<font style="color:#000000;"> 时，opcode、地址和 alias 都不许改，</font>`<font style="color:#000000;background-color:rgba(255, 255, 255, 0.1);">txreq_done</font>`<font style="color:#000000;"> 仍是 0。此期间后到的 store 仍可以合并；若因此把 ReadShared 升级成 ReadUnique。TXREQ fire 的下一拍什么替换都不发。旧行继续留在 array 里，可以被 load 和 store 命中。等 </font>`<font style="color:#000000;background-color:rgba(255, 255, 255, 0.1);">data_done</font>`<font style="color:#000000;"> 之后的 refill 再读它。权限升级的 way 从分配起就冻结，refill 不能改。</font>

<font style="color:#000000;"></font>

### <font style="color:#000000;">收RXDAT</font>
发完了TXREQ后要等待收RXDAT数据。

<font style="color:#000000;">RXDAT 的 </font>`<font style="color:#000000;background-color:rgba(255, 255, 255, 0.1);">txnId</font>`<font style="color:#000000;"> 0～15 送进对应项。只要这项还在等数据，</font>`<font style="color:#000000;background-color:rgba(255, 255, 255, 0.1);">ready</font>`<font style="color:#000000;"> 就必须为 1。MainPipe 忙或 CompAck 还没发出，都不能把 </font>`<font style="color:#000000;background-color:rgba(255, 255, 255, 0.1);">RXDAT.ready</font>`<font style="color:#000000;"> 拉低。</font>`<font style="color:#000000;background-color:rgba(255, 255, 255, 0.1);">dataId=0</font>`<font style="color:#000000;"> 写入低 32B，</font>`<font style="color:#000000;background-color:rgba(255, 255, 255, 0.1);">dataId=1</font>`<font style="color:#000000;"> 写入高 32B，两拍不必按 0、1 的顺序来。</font>

<font style="color:#000000;">store mask 为 1 的字节在写入 buffer 的当拍就盖成 store 数据。以后</font><font style="color:#000000;"> </font>`<font style="color:#000000;background-color:rgba(255, 255, 255, 0.1);">forward_mshr</font>`<font style="color:#000000;"> </font><font style="color:#000000;">和回填看到的都是盖过的结果。MakeUnique 没有 RXDAT，buffer 里从分配起就是整行 store 数据。</font>

<font style="color:#000000;">第一拍有效响应把 </font>`<font style="color:#000000;background-color:rgba(255, 255, 255, 0.1);">dbId</font>`<font style="color:#000000;">、</font>`<font style="color:#000000;background-color:rgba(255, 255, 255, 0.1);">resp</font>`<font style="color:#000000;">、PassDirty 和 </font>`<font style="color:#000000;background-color:rgba(255, 255, 255, 0.1);">respErr</font>`<font style="color:#000000;"> 记下来。后一拍若再带这些字段，必须和第一拍相同。不同就置 error，两拍仍然收完，项不能因此丢掉。同一个 </font>`<font style="color:#000000;background-color:rgba(255, 255, 255, 0.1);">dataId</font>`<font style="color:#000000;"> 再来一次，保留第一次的数据，也置 error。</font>

<font style="color:#000000;"></font>

### 前递
load要发来的数据（一拍32B）的哪一拍根据load的地址第五<font style="color:#000000;">位决定。当RXDAT命中需要的一半时，可以通过forward_chi将32B发给LSU。这一半已经在buffer中时，后来的同load地址可以用forward_mshr来读给LSU。store、原子和软件预取不向前递数据。</font>

<font style="color:#000000;"></font>

### <font style="color:#000000;">数据齐了后等待回填</font>
<font style="color:#000000;">data_done代表数据齐了，此时应该发起refillReq。load、store、软件预取和原子共用这一条，编号小的优先，同一拍只出去一条。请求里带 64B buffer、返回权限、PassDirty、error 和 missId。权限升级再带命中 way。原子还带原来的操作数。MainPipe 写 Meta 前再读一次这项的 </font>`<font style="color:#000000;background-color:rgba(255, 255, 255, 0.1);">pendingSnoop</font>`<font style="color:#000000;">。最终状态是 I 时，这一拍不把该路写成有效行，但应答仍然要回来，</font>`<font style="color:#000000;background-color:rgba(255, 255, 255, 0.1);">refill_done</font>`<font style="color:#000000;"> 才能置 1。真的写成了 SC、UC 或 UD，才发 </font>`<font style="color:#000000;background-color:rgba(255, 255, 255, 0.1);">refill_wakeup</font>`<font style="color:#000000;">。放弃安装不发唤醒，原来的 load 按 miss 重来。</font>

<font style="color:#000000;">有效 victim 由这次 refill 的 s3 直接送进 WritebackQueue，然后就可以向下发 Evict 或 WriteBackFull。没有另一次唤醒。</font>

<font style="color:#000000;"></font>

### <font style="color:#000000;">发CompAck</font>
`<font style="color:#000000;background-color:rgba(255, 255, 255, 0.1);">data_done=1</font>`<font style="color:#000000;"> 且已经记下有效 </font>`<font style="color:#000000;background-color:rgba(255, 255, 255, 0.1);">dbId</font>`<font style="color:#000000;"> 之后就可以请求 CompAck，不必等回填。</font>`<font style="color:#000000;background-color:rgba(255, 255, 255, 0.1);">TXRSP.txnId</font>`<font style="color:#000000;"> 填这个 </font>`<font style="color:#000000;background-color:rgba(255, 255, 255, 0.1);">dbId</font>`<font style="color:#000000;">，不填 MSHR 编号。MSHR 编号只用于 TXREQ，以及 L2 把 RXDAT、RXRSP 送回来时的匹配。</font>

<font style="color:#000000;"></font>

### <font style="color:#000000;">若有同地址的Snoop请求</font>
<font style="color:#000000;">Snoop可能会在读数据中发来请求，不会等读完在进行snoop。ProbeQueue把请求给MainPipe，</font>MissQueue 只在同地址、同 alias 的那一项上做记录。

新行还没写入时，把snoop的最终状态记录到mshr项的 pendingSnoop 字段中，然后snoop按照当前在MainPipe看到的是否L1存在这行返回给L2，refill不能真安装，最终发refill的时候根据pendingSnoop字段中的状态来写meta。

<font style="color:#000000;"></font>

### <font style="color:#000000;">释放MSHR</font>
只有当：

1.data_done

2.refill_done

3.compack_done

4.snoop_done

都为1的时候才能释放MSHR。
