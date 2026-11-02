# Compact CHI DCache–L2 接口：项目约定 v1

日期：2026-10-22。范围：外部接口及事务约定；七通道字段 Bundle 和方向封装已实现，事务控制 RTL 尚未实现。

本文取代此前“全部等待用户决定”的接口评审稿。用户已授权由设计助手决定剩余接口细节并解释原因。以下是一个可用于接下来定义 Bundle 的**项目接口基线**，不是声称 PDF 所有缺省/模糊处本来就具有这些含义，也不是 RTL 已实现、验证通过的声明。

依据：[Compact CHI PDF](/home/ywj/yqh/docs/compactchi-architecture-20260828-d0f2609.pdf)，版本 2026-08-28/d0f2609，§3、§4.1、§9、§10。原文印刷页 26–33 是字段/编码，34–43 是事务流程。

标记：**[用户]** 用户指定；**[PDF]** 原文明示；**[项目]** 本文选择、必须由 DCache 和 L2 同时执行的约定。所有 IN/OUT 从 **DCache** 观察。

## 1. 已决定什么，以及理由

| 项目 | v1 决定 | 依据与理由 |
|---|---|---|
| 上游节点 | DCache、ICache、PTW，共 3 个 | [用户] 单核不代表只有一个请求节点。 |
| 下游节点 | 1 个 L2 | [用户] 接口按点对点链路接入同一 L2，L2 内部协调三个上游。 |
| CPU 位宽 | 64 bit | [用户] 与链路拍宽分开。 |
| 缓存行 | 64 B = 512 bit | [用户/PDF] 一致性基本粒度。 |
| Data_Width | 256 bit = 32 B | [用户/PDF] 一条线正好两拍，也与 PDF 的 BE=32 匹配。 |
| DataID | 1 bit，0=低地址32B，1=高地址32B | [用户/项目] 明确接收数据放在哪里。 |
| beat 顺序 | 同一条 DAT 消息严格 0→1；同一物理 DAT 通道内不交织两条多拍消息 | [项目] 减少发端仲裁和验证复杂度；不同事务整条消息可以乱序完成，不同通道仍并行。 |
| 多拍元信息 | 同一消息 TxnID、SrcID、TgtID、DBID（若有）、Opcode（若有）、Resp、DataSource（若有）、CBusy（若有）、TraceTag 保持一致 | [项目] 防止把两条事务或两种授权拼成一行；RespErr 按拍检查并累计，Data/BE/DataID 按拍变化。 |
| TxnID_Width | 8 bit | [项目] 每个上游至多256个不重复的在途编号；不等于实际实现256个MSHR，给Miss/WB/CMO/Stash统一编号留余量。 |
| DBID_Width | 8 bit | [项目] L2最多256个同时保留的返回/Snoop token；L2实际表项更少时用ready限流。 |
| UpstreamNodeID_Width | 2 bit | [项目] DCache=0、ICache=1、PTW=2、3保留；复用不同节点的本地TxnID也不会混淆。 |
| DownstreamNodeID_Width | 1 bit，L2=0 | [项目] 一个L2仍保留1位常量，便于统一Bundle和以后扩展，1为非法值。 |
| 物理/虚拟地址 | 48/48 bit | [项目] 沿用当前工程参数；64位处理器不要求实现64位物理地址。 |
| VIPT TagAlias | 2 bit，取vaddr[13:12] | [用户/项目] 配套4KiB最小页、256 sets、64B行，详见第3节。 |
| RXSNP.Addr | 45 bit，定义为物理地址PA[47:3] | [PDF/项目] 45位宽来自PDF；恢复公式由本项目补充，低3个字节地址位补0。 |
| Stash完成通知 | ExpCompStash=1，位宽1 bit | [用户/项目] StashShared/Unique需要CompStash，给请求明确结束点；非Stash填0。 |
| Way功能 | 关闭路预测、路持久化；不生成WayValid/Way端口 | [项目] 先避免与L2替换方式耦合，普通一致性功能不依赖way提示。 |
| 信用/Retry | 不实现P-Credit和资源Retry；不生成AllowRetry字段 | [用户/PDF] ready承担接纳责任；AllowRetry在PDF中仅支持Retry时存在。 |
| 读数据提前给CPU | v1不启用critical-word-first唤醒；收齐两拍、错误和Snoop决策明确后再完成Load | [项目] 避免第一拍已向CPU生效、第二拍错误或同地址Snoop无法处理；不改CPU接口宽度。 |
| 同地址Snoop | 优先推进，不等待同地址读完成/CompAck | [用户] 详见第9节，不能换成“L2等读完才发Snoop”。 |
| 读授权子集 | ReadShared返回SC；ReadUnique返回UC；两者均返回完整CompData，ReadUnique置ExpCompData=1 | [项目] PDF允许的保守子集。L2保留最新数据、不向未填完的行转移Dirty责任，支撑Snoop立即处理。仍定义全部响应字段。 |
| 复位 | 同时钟域、上升沿；reset高有效同步复位 | [项目] 初版易于验证，不能只复位一端而保留另一端在途消息。 |

数据顺序是**单个通道单条多拍消息**的约束，不是要求所有Load按CPU发出顺序返回。禁止交织也不能让未就绪的TXDAT消息先锁住整个通道；发送方应在两个beat都可提供后才开始输出这条消息。

## 2. 信号方向与握手

公共clock/reset由系统送入DCache与L2，均为各模块的输入；它们不属于某条消息。系统启动复位期间所有valid=0、ready=0；退出复位后完成元数据初始化才接受新请求。复位会清除双方事务表，系统必须取消相应CPU在途操作；不把单边热复位作为v1支持项。

| 通道 | 消息用途 | valid方向 | ready方向 | bits方向 |
|---|---|---|---|---|
| TXREQ | 普通请求：读、取权限、直写、CMO、Stash | OUT | IN | OUT |
| TXEVT | 主动驱逐/写回起始消息 | OUT | IN | OUT |
| TXRSP | CompAck和无数据Snoop回应 | OUT | IN | OUT |
| TXDAT | 写回数据、直写数据、带数据Snoop回应 | OUT | IN | OUT |
| RXSNP | L2发起的Snoop | IN | OUT | IN |
| RXRSP | L2返回状态、完成、DBID | IN | OUT | IN |
| RXDAT | L2返回CompData | IN | OUT | IN |

每个valid/ready都是1 bit。例：`txreq_valid`/`txreq_bits`由DCache驱动，`txreq_ready`由L2驱动；站在L2看方向相反。

- 只有时钟上升沿`valid && ready`才接收一拍，`fire`只是本地表达式，不新增引脚。
- 被反压时保持valid和全部bits稳定；不能因Snoop优先而改写已呈现的请求、确认或数据拍。
- 接收容量不足拉低ready，不丢消息、不等固定周期后重发。
- TXREQ/TXEVT握手代表L2已接管事务；不会再用普通资源不足拒绝。ready前的容量管理必须防止死锁，并非只看入口FIFO是否有空。
- 对已经发起的读，DCache预留两拍存储及响应元数据空间。运行期间合法RXDAT/RXRSP应可独立接收，不等待CPU response、TXREQ、TXRSP或TXDAT进度。
- 若独立端口同周期接收RXRSP与RXDAT，双方实现必须能分别保存，不能共享一个“只能收一个”的未仲裁槽位而丢失响应。
- RXSNP可被Snoop队列/响应容量反压，但不能因同地址读MSHR尚未结束而等待；其处理优先于该地址读的缓存安装/CPU提交。
- 同一DAT消息开始后，TXDAT输出锁定两拍；消息之间选Snoop数据优先。L2保证已授权写数据和Snoop返回数据有接收容量，不能让旧写数据卡住Snoop所需资源形成环。

## 3. 地址与2位VIPT alias：具体做法

### 3.1 配套缓存组织

假设4KiB最小页：页内偏移PA/VA[11:0]不变，64B行偏移为[5:0]。采用256 sets时，虚拟索引为VA[13:6]，VA[13:12]超出页内偏移，因此需要2位alias。

```text
lineOffset = address[5:0]
vIndex     = vaddr[13:6]
TagAlias   = vaddr[13:12]
physicalTagCompare = paddr[47:12]
```

用户已改为**256 sets、2位alias**；配套采用当前工程已有的**4 ways**，容量为256 × 4 × 64B = 64KiB，取代此前128 sets × 8 ways的建议。本轮只更新文档，不修改源码。物理tag比较仍保留PA[47:12]，不能因虚拟index到bit13就丢掉PA[13:12]。

### 3.2 RXSNP.Addr还原

项目定义：

```text
L2发送：RXSNP.Addr = physicalLineBase[47:3]
L1还原：snoopByteAddr = Cat(RXSNP.Addr, 3'b000)
要求：physicalLineBase[5:0] == 0
等价检查：RXSNP.Addr[2:0] == 0
```

不能把45位SNP.Addr当作完整字节地址，也不能直接把PA右移6位后塞进去并声称与本编码相同。此补充为项目约定；PDF列出45位但没有详细还原公式。

### 3.3 Snoop没有TagAlias字段怎么办

不擅自扩展PDF的RXSNP字段。DCache对物理行查四个可能的VIPT set：

```text
set0 = Cat(2'b00, paddr[11:6])
set1 = Cat(2'b01, paddr[11:6])
set2 = Cat(2'b10, paddr[11:6])
set3 = Cat(2'b11, paddr[11:6])
```

比较相同物理tag，并同步查询按**物理行地址**组织的MSHR/WBQ。最多四次候选set的本地Tag访问可以分拍，但不能等待正在进行的ReadShared结束。安装时进行同样的alias检查，保证一条物理行最多存在一个稳定的有效副本；不能按不同vaddr盲目重复分配MSHR/脏行。

这样2位TagAlias仍可由REQ告知L2当前索引信息，但Snoop正确性不依赖L2把它回传。代价是Snoop/别名安装需要检查四个候选set，单读端口下最多分四次访问；好处是接口不加私有Snoop字段，不需要用户先设计完整L2 alias目录协议。

## 4. 固定位宽、节点与事务身份

节点与TxnID是两种身份：

```text
DCache SrcID = 2'b00
ICache SrcID = 2'b01
PTW    SrcID = 2'b10
L2     ID    = 1'b0
```

L2查原始请求使用`(上游SrcID, TxnID[7:0])`。DCache的TxnID=7可以和ICache的TxnID=7同时存在。DCache内部REQ/EVT/CMO/Stash统一避免在途TxnID重用；内部CPU reqId和MSHR index不是这个线编号的同义词。

L2的DBID/Snoop TxnID使用8位**全局活动token空间**；一个token绑定一个上游目标、地址和事务种类，不同时指给另一活动事务。v1进一步划分：`0x00–0x7F`供主动读/写的返回DBID，`0x80–0xFF`供L2发起的Snoop。两类实际表项分别保留，至少有独立的Snoop表项/回应接收容量，不能让普通读写占满全部资源后连Snoop都无法发起。这样既简化TXRSP/TXDAT的匹配，也支撑Snoop优先。256是编码总上限（每类128），实际队列可以远小于此数量。

- 读返回：RXDAT.TxnID找原MSHR，RXDAT.DBID保存；CompAck.TxnID填保存的DBID。
- 写回/直写：RXRSP.TxnID找原写表项，取得DBID后，TXDAT.TxnID填DBID。
- Snoop：保存RXSNP.TxnID，SnpResp/SnpRespData.TxnID填该Snoop标识。
- 节点ID、TxnID、DBID都不表示有多少Credit。
- L2读token在CompAck接受且自身数据发送义务全部结束后才释放；写token在数据收齐、完成消息及相关上下文义务结束后释放；Snoop token在完整回应收到后释放。原始TxnID只有旧事务不再可能返回消息且本地依赖完成/移交后才可复用。

## 5. 七个通道的全部字段与存在理由

表中“固定”仍保留线位并断言其值，便于未来功能扩展；“省略”不生成物理端口。所有字段名称位于`<channel>_bits`下。


当前payload位宽如下（包含固定值字段，不包含valid/ready，也不包含已省略字段）：

| 通道 | bits位宽 | 加valid/ready后的链路线数 |
|---|---:|---:|
| TXREQ | 81 | 83 |
| TXEVT | 63 | 65 |
| RXSNP | 60 | 62 |
| RXRSP | 31 | 33 |
| RXDAT | 290 | 292 |
| TXRSP | 18 | 20 |
| TXDAT | 308 | 310 |

### 5.1 TXREQ（DCache普通请求）

`txreq_valid` OUT 1 bit；`txreq_ready` IN 1 bit；以下字段OUT。

| 字段 | bit | IN/OUT | v1取值/意义 | 为什么存在 |
|---|---:|---|---|---|
| TxnID | 8 | OUT | DCache分配的原始事务ID | 多个请求并行时让返回找到正确上下文 |
| SrcID | 2 | OUT | 固定0，DCache节点 | L2区分DCache/ICache/PTW的同号请求 |
| TgtID | 1 | OUT | 固定0，唯一L2 | 明确接收节点，保持统一消息结构 |
| Opcode | 6 | OUT | 请求类别，编码见第7节 | 告诉L2是读、取权限、直写、维护还是预取 |
| Size | 3 | OUT | 缓存行事务填6（64B）；窄访问填log2(bytes) | 区分数据总长度，不等于拍宽 |
| Addr | 48 | OUT | 物理字节地址；行操作64B对齐 | 定位目标缓存行/访问字节 |
| TagAlias | 2 | OUT | vaddr[13:12]；无虚地址关联请求填对应约定值00 | 携带VIPT额外索引信息 |
| NS | 1 | OUT | 固定0，v1只有一个地址域 | 保留地址隔离字段，但不虚构安全域机制 |
| Order | 2 | OUT | 固定00，v1无额外链路级排序请求 | 保留格式；依赖关系由LSU及L2同地址事务调度处理 |
| MemAttr | 4 | OUT | 项目位定义见第6节 | 说明是否Cacheable、是否允许分配等 |
| Excl | 1 | OUT | 固定0，v1不开启链路Exclusive优化 | 与ReadUnique的唯一权限区分，不把普通Store误当LR/SC |
| ExpCompData | 1 | OUT | ReadShared/ReadUnique填1，其余0 | v1读始终拿完整数据，减少权限-only竞态 |
| ExpCompStash | 1 | OUT | Stash填1，其余0 | 用户要求预取有CompStash结束通知 |
| TraceTag | 1 | OUT | 固定0，v1不开启链路跟踪 | 保留原文字段，避免改变基本布局 |

省略：AllowRetry、WayValid、Way。TXREQ没有Data、DBID、DataID、last。

### 5.2 TXEVT（主动干净驱逐/脏行写回的起始消息）

`txevt_valid` OUT 1 bit；`txevt_ready` IN 1 bit；以下字段OUT。

| 字段 | bit | IN/OUT | v1取值/意义 | 为什么存在 |
|---|---:|---|---|---|
| TxnID | 8 | OUT | 原始写回/驱逐事务ID | RXRSP能找到对应WBQ上下文 |
| SrcID | 2 | OUT | 固定0 | 标识DCache |
| TgtID | 1 | OUT | 固定0 | 指向L2 |
| Opcode | 1 | OUT | 0=Evict，1=WriteBackFull | 区分是否有后续脏数据 |
| Addr | 48 | OUT | 64B对齐的物理行地址 | 指明释放哪条行 |
| NS | 1 | OUT | 固定0 | 同一地址域 |
| MemAttr | 1 | OUT | Allocate=1 | 允许L2为写回保留/分配行；对不需分配的操作不强制实际分配 |
| TraceTag | 1 | OUT | 固定0 | 保留跟踪字段 |

省略AllowRetry、WayValid、Way。TXEVT自身没有Data；WriteBackFull必须先拿DBID，再通过TXDAT发送数据。

### 5.3 RXSNP（L2请求DCache改变状态/返回脏数据）

`rxsnp_valid` IN 1 bit；`rxsnp_ready` OUT 1 bit；以下字段IN。

| 字段 | bit | IN/OUT | v1取值/意义 | 为什么存在 |
|---|---:|---|---|---|
| TxnID | 8 | IN | L2分配的Snoop token | 把回应关联到本次Snoop，不与原Load混用 |
| SrcID | 1 | IN | 固定0，L2 | 确认发起节点 |
| TgtID | 2 | IN | DCache端应为0 | 三个上游中路由到正确目标 |
| Opcode | 2 | IN | 0 MakeInvalid、1 ToInvalid、2 ToShared、3 ToClean | 指定状态变化和是否需要交脏数据 |
| Addr | 45 | IN | PA[47:3]；低3位必须0 | 紧凑编码物理行地址，恢复规则见第3节 |
| NS | 1 | IN | 固定0 | 地址域一致 |
| TraceTag | 1 | IN | 固定0 | 保留跟踪字段 |

没有TagAlias/needData/Data/DBID/last。2位alias通过本地四个候选set扫描解决，不新增引脚。同一目标同一物理行只允许一笔未完成Snoop，避免两个Snoop状态提交交错；不同地址Snoop仍可并发。

### 5.4 RXRSP（L2无数据响应）

`rxrsp_valid` IN 1 bit；`rxrsp_ready` OUT 1 bit；以下字段IN。

| 字段 | bit | IN/OUT | v1取值/意义 | 为什么存在 |
|---|---:|---|---|---|
| TxnID | 8 | IN | 原始REQ/EVT的ID | 查MSHR/WBQ/CMO/Stash表项 |
| SrcID | 1 | IN | 固定0 | 来源L2 |
| TgtID | 2 | IN | DCache端为0 | 目的上游 |
| DBID | 8 | IN | DBIDResp/CompDBIDResp及需后续Ack的授权返回token；不适用时0 | 告诉L1后续数据/确认用哪个编号 |
| Opcode | 3 | IN | CompStash/Comp/DBIDResp/CompDBIDResp/CompCMO | 决定是否获得DBID、是否完成、是否仍需数据 |
| RespErr | 2 | IN | 项目错误分类见第6节 | 避免错误被当成正常授权 |
| Resp | 3 | IN | 状态/脏责任编码；无状态语义时000 | 告知权限类结果；不能只看Opcode判断可写 |
| CBusy | 3 | IN | 固定000 | 保留提示字段；不是Credit/ready |
| TraceTag | 1 | IN | 固定0 | 保留跟踪字段 |

省略WayValid/Way。没有数据和DataID。无效DBID=0不能被误当成已分配token；是否有效由Opcode/事务决定，0本身仍是合法的活动DBID数值。

### 5.5 RXDAT（L2返回读数据）

`rxdat_valid` IN 1 bit；`rxdat_ready` OUT 1 bit；以下字段IN。

| 字段 | bit | IN/OUT | v1取值/意义 | 为什么存在 |
|---|---:|---|---|---|
| TxnID | 8 | IN | 原始读请求ID | 定位MSHR |
| SrcID | 1 | IN | 固定0 | 来源L2 |
| TgtID | 2 | IN | DCache端为0 | 指向正确上游 |
| DBID | 8 | IN | 分配型读确认token；非分配读填0且不使用 | 后续CompAck关联 |
| RespErr | 2 | IN | 本拍错误类型，事务内累计 | 第二拍错误不能被第一拍正常掩盖 |
| Resp | 3 | IN | ReadShared正常001=SC，ReadUnique正常010=UC | 明确实际授予权限；两拍必须相同 |
| DataSource | 5 | IN | 固定00000=未分类（项目约定） | 保留性能来源字段，不依赖它判断数据正确性 |
| CBusy | 3 | IN | 固定000 | 保留提示，不参与流控 |
| DataID | 1 | IN | 整行0→1；窄访问规则见第8节 | 将32B数据放入正确半行 |
| Data | 256 | IN | 当前32B数据，低8位对应本拍最低字节地址 | 真正的读数据载荷 |
| TraceTag | 1 | IN | 固定0 | 保留跟踪字段 |

省略Opcode（固定CompData，PDF允许0位）、WayValid/Way。没有BE和last。每拍元信息都完整携带，接收首拍保存DBID/Resp、后续拍核对；不采用“只有首拍有效、后拍随便填”的约定。

### 5.6 TXRSP（确认/无数据Snoop回应）

`txrsp_valid` OUT 1 bit；`txrsp_ready` IN 1 bit；以下字段OUT。

| 字段 | bit | IN/OUT | v1取值/意义 | 为什么存在 |
|---|---:|---|---|---|
| TxnID | 8 | OUT | CompAck填返回DBID；SnpResp填收到的Snoop.TxnID | L2关联对应token；不是原读TxnID |
| SrcID | 2 | OUT | 固定0 | 来源DCache |
| TgtID | 1 | OUT | 固定0 | 目标L2 |
| Opcode | 1 | OUT | 0=CompAck，1=SnpResp | 区分读授权确认与Snoop回复 |
| RespErr | 2 | OUT | CompAck报告累计接收错误；SnpResp报告相应错误 | L2不能把失败当正常安装/正常Snoop数据结果 |
| Resp | 3 | OUT | CompAck固定000（不重授予状态）；SnpResp报告I/SC/UC | Snoop需要知道结果，CompAck仅确认对应token |
| TraceTag | 1 | OUT | 固定0 | 保留跟踪字段 |

无Addr/Data/独立DBID字段。仲裁时尚未发出的SnpResp优先，已经valid的消息必须先保持并握手，不允许中途换成另一事务。

### 5.7 TXDAT（写回/直写/Snoop数据）

`txdat_valid` OUT 1 bit；`txdat_ready` IN 1 bit；以下字段OUT。

| 字段 | bit | IN/OUT | v1取值/意义 | 为什么存在 |
|---|---:|---|---|---|
| TxnID | 8 | OUT | 写数据填返回DBID；SnpRespData填Snoop.TxnID | 在没有Addr字段时仍能找到目标事务 |
| SrcID | 2 | OUT | 固定0 | 来源DCache |
| TgtID | 1 | OUT | 固定0 | 目标L2 |
| Opcode | 2 | OUT | 0 NonCopyBackWrData、2 CopyBackWrData、3 SnpRespData | 三种数据来源和完成义务不同 |
| RespErr | 2 | OUT | 数据/存储错误标志 | 防止损坏脏数据被悄悄当成正确写回 |
| Resp | 3 | OUT | 按消息表达状态及PD，见第6节 | 数据传输同时交代脏责任/状态 |
| DataID | 1 | OUT | 整行0→1 | 明确哪半行数据 |
| Data | 256 | OUT | 当前32B数据 | 真正的数据载荷 |
| BE | 32 | OUT | 每bit对应Data的一个字节，1=有效 | 完整行每拍全1，部分直写只更新被选字节 |
| TraceTag | 1 | OUT | 固定0 | 保留跟踪字段 |

无Addr/独立DBID/last。CopyBackWrData与脏SnpRespData整行两拍、每拍BE全1。直写使用NonCopyBackWrData，与“已有脏缓存行写回”不同。

## 6. PDF未详细定义字段的本项目编码

本节全部未由PDF明确给出的位解释都是**项目约定**，L2必须采用相同定义；外接其它Compact CHI实现时需适配，不能假称天然兼容。

### 6.1 固定/关闭的字段

- NS=0：单地址域。非0不支持。
- Order=00：不请求链路附加排序。LSU仍负责ISA内存顺序/fence，L2仍负责一致性和同地址顺序。v1不以此接口承诺设备MMIO强序访问；设备访问应走单独有排序保证的Uncache/设备路径。
- Excl=0：不使用链路Exclusive扩展。普通ReadUnique照常支持；CPU LR/SC的本地reservation机制需另行实现，不能仅靠Excl=0声称LR/SC已支持。
- TraceTag=0、CBusy=000、DataSource=00000：保留字段但不依赖其优化信息。
- UWPersist_Enable=false、UWPredict_Enable=false：WayIndex_Width=0，所有通道省略WayValid/Way。
- AllowRetry不存在：没有本协议的资源重试。LSU本地replay与链路Retry不是同一概念。

### 6.2 MemAttr

TXREQ四位项目编码：`[0]=Allocate`，`[1]=Cacheable`，`[2]=Device`，`[3]=Reserved=0`。不是从AMBA CHI复制的位布局。

| 值 | 用途 |
|---|---|
| 0011 | ReadShared/ReadUnique/MakeUnique/Stash：Cacheable，可分配 |
| 0010 | ReadOnce/WriteUniqueFull/CMO：Cacheable，不提出下游分配提示 |
| 0000 | ReadNoSnp/WriteNoSnp：普通非缓存内存访问 |

v1 Device=1和其它组合不支持，不发出此类请求。Allocate是给下游的分配提示，不是Requester是否拥有有效行的决定权，不覆盖Opcode语义：WriteUniqueFull仍不在Requester分配；CMO不能因某个位而变成普通读。TXEVT只有1位Allocate，本项目填1。

### 6.3 Resp与Dirty

保留PDF原表：000=I，001=SC，010=UC，100=I_PD，101=SC_PD，110=UC_PD；011/111禁止。项目将PD理解为消息关联的脏数据责任传递标志，并补以下解释，避免把UD错误编码成011：

- RXDAT中110若在未来启用，可表示接收Unique数据及Dirty责任，安装为UD；**v1分配型读不使用此路径**，L2只授SC/UC并保留最新数据。
- TXDAT/SnpRespData：100表示发送方最终I且交出脏数据；101表示最终SC且交出脏数据；110表示最终UC且交出脏数据（v1 SnpToClean选择清脏、保留UC）。
- TXDAT/CopyBackWrData：脏行使用110表达已有Unique dirty数据交接，写回事务最终状态仍I；不是收到/发出110就一律把本地Tag写UC。
- TXDAT/NonCopyBackWrData：v1填000，数据是直写负载，不表示缓存行Dirty状态转移。
- TXRSP/SnpResp不携数据，因此正常回复只用000/001/010；不能仅发PD标志就丢弃未交付脏数据。SnpMakeInvalid按其明确的丢弃语义处理。

原文事务表的UD_PD标签和编码表UC_PD存在命名差异；上述消息相关解释是本项目明确补充，待未来对接其它实现时核对。

### 6.4 RespErr与失败

项目定义：00=正常，01=请求不支持/执行失败，10=数据损坏，11=协议违规报告（本地fail-stop）。没有ResourceRetry含义。

- 正常数据错误：RXDAT仍按期望拍数交付，用RespErr标记；DCache累计任一拍错误，不安装行、不向CPU完成正常数据，向CPU上报访问错误；需CompAck的事务仍发带累计错误的CompAck。对于这类clean读授权，DCache在错误确认前还需撤销本事务涉及的本地clean副本/安装；L2收到错误确认后不保留该Requester的有效目录副本，避免“L1还留有SC、L2却认为不存在”的不一致。
- 全部同值约束不包含RespErr，第二拍可以首次发现错误。错误优先级11>10>01>00。
- 语法正确但不支持的REQ Opcode：L2用RXRSP.Comp + RespErr=01作**项目定义的终止错误响应**，TxnID回原请求、Resp=I、DBID=0，不返回数据、不等待CompAck。Requester必须识别该终止路径，不能继续永远等CompData。这不是PDF已证明的通用错误流程。
- 非法ID、重复拍、第二拍DBID/Resp变化、两拍顺序错误、保留编码或错误节点ID：锁存本地protocolFault并触发assert；不覆盖已有数据、不增加接收进度、不重用相关表项、不向CPU提交错误结果。停止接受新请求并由系统复位恢复，v1不提供自动链路重传。遇到错误时已有脏数据不能默默丢弃，尤其WBQ必须保留数据直到系统明确接管恢复责任。protocolFault是模块诊断状态，不额外混入七通道payload。

## 7. Opcode清单与v1功能边界

| 通道 | 编码 |
|---|---|
| TXREQ | 00 StashShared；01 StashUnique；02 ReadNoSnp；03 ReadOnce；04 ReadShared；08 WriteNoSnpPtl；09 WriteNoSnpFull；0A WriteUniquePtl；0B WriteUniqueFull；0C CleanShared；0D CleanInvalid；0E MakeInvalid；10 ReadUnique；12 MakeUnique（均十六进制） |
| TXREQ原子 | 20–27 AtomicLoad；28–2F AtomicStore；30 AtomicSwap；31 AtomicCompare；PDF事务章节TBD，v1不发出，收到则终止错误 |
| TXEVT | 0 Evict；1 WriteBackFull |
| RXSNP | 0 SnpMakeInvalid；1 SnpToInvalid；2 SnpToShared；3 SnpToClean |
| RXRSP | 0 CompStash；1 Comp；2 DBIDResp；3 CompDBIDResp；4 CompCMO；5–7保留 |
| TXRSP | 0 CompAck；1 SnpResp |
| RXDAT | 固定CompData，省略Opcode引脚 |
| TXDAT | 0 NonCopyBackWrData；1保留；2 CopyBackWrData；3 SnpRespData |

TXREQ其它编码保留；WriteUniquePtl虽然有编码，但PDF未完整展开流程，v1不发出，收到按终止错误处理。定义全部通道并不等于第一版RTL已经支持每一种操作；本文确定的是合法接口及未来实现应遵守的功能范围。

StashShared/Unique填ExpCompStash=1，收到CompStash才释放本次Stash事务编号。此回应表示预取请求按约定完成，不保证将来CPU访问时目标行仍在L2中，也不意味着给L1授予了缓存行权限。

## 8. 两拍数据的精确位置和检查

### 8.1 完整缓存行

设lineBase=物理地址清零[5:0]：

```text
DataID=0：Data[8*j+7:8*j] = memory[lineBase+j]，       j=0..31
DataID=1：Data[8*j+7:8*j] = memory[lineBase+32+j]，    j=0..31
```

整行接收顺序与mask：`00 -> 01 -> 11`。DataID=1不单独等于完成，必须对应预期进度；重复0、先1、额外第三拍都是协议违规。TXDAT发送采用同一顺序，只有fire才更新sentMask。

同一RXDAT消息两拍DBID、Resp、TxnID及固定元数据一致；同一TXDAT消息两拍Opcode、Resp、TxnID等一致。不同消息可使用不同DBID和权限。两拍之间允许valid为0的气泡，也允许ready反压；不允许夹入另一条消息的beat。

### 8.2 窄的非分配访问

项目允许Size<=5（<=32B）的ReadNoSnp/ReadOnce及WriteNoSnp窄访问采用一拍，必须自然对齐且不跨32B拍边界：DataID=Addr[5]，数据按32B窗口放置，字节lane=Addr[4:0]。读方只提取Size指定字节，窗口其它字节不使用；写方BE只置相应字节。Size=6为完整两拍。

这时预期mask可能为01或10，**不能用整行ReadShared的11判断所有事务结束**。跨边界访问由上层拆分，v1不在链路偷偷生成第三拍。

## 9. Snoop优先：读期间如何保持一致性

这是双方必须共同实现的**项目顺序规则**，不是只给ProbeQueue加一个priority位。

### 9.1 为什么v1读只返回SC/UC

若第一拍就把Dirty责任授给L1，而L1尚无第二拍，此时Snoop要求完整脏行数据，就无法做到“不等读数据收齐”。因此v1让L2先从必要来源获取最新数据并保留，ReadShared只授SC、ReadUnique只授UC。Store在完整行和可写权限均确认、没有优先Snoop冲突前不得修改数据。

### 9.2 两种先后关系

以读返回的首个成功握手为边界；未返回任何数据/授权的Snoop，属于旧状态阶段；已经返回首拍后的Snoop，属于新授权之后。双方不得用各自不同的顺序解释同一个交错。

1. **Snoop先于首拍返回**：L1按当前稳定行/写回上下文处理Snoop，不等待读完成。L2在该Snoop处理后重新确认原读应返回的数据和权限，再返回CompData；这个未来授权不应仅因“过去来过Snoop”就被永久丢弃。
2. **首拍已返回、行尚未安装时收到Snoop**：新授予行是clean且L2保有最新数据。L1优先处理Snoop，放弃这笔尚未安装的授权；对该未安装副本返回SnpResp_I，标记旧读返回不得安装/向CPU正常完成。仍接收剩余拍并完成CompAck，向LSU报告本地replay，让需要数据/写权限的原操作重新取得结果。
3. 若同时握手同地址首个RXDAT与RXSNP，定义为“该读授权先发生、Snoop随后”，但Snoop赢得本地安装/CPU提交仲裁，按第2种处理；二者都接收，不等读完成。
4. 若还有已存在的稳定副本（例如SC升级期间），必须先按该真实稳定状态处理Snoop并报告结果，不能仅凭有MSHR就回复I。正在形成的新授权仍按上述阶段规则判定。

L2要记录同地址Snoop是否已经撤销/改变该grant：**较晚到达的旧CompAck只能完成确认/释放token，不能把目录中的无效副本重新标为有效。** 当Snoop在读之前完成，未来读才可以重新建立有效副本。L2在选择响应与Snoop输出时必须保持已valid消息稳定；DCache为合法返回预留独立接收槽以避免在首拍发布处产生不可控等待。

Snoop优先不取消RXDAT接收，也不等价于资源Retry。LSU本地replay是在旧事务安全结束后重新执行CPU访问；没有PRETRY、Credit或AllowRetry流程。

### 9.3 已安装行和其它事务

- 已安装clean行遇到SnpToInvalid：失效并回SnpResp_I。
- 已安装UD行遇到需要数据的Snoop：保存并发送完整SnpRespData及PD，直到握手结束；不能只清dirty位。
- SnpMakeInvalid是明确允许丢弃数据的操作，L2只能在该操作语义允许时使用，不得当成通用取脏数据失效。
- 同地址WriteBackFull的特定嵌套Snoop顺序仍按PDF §10.4处理；“读期间Snoop优先”不删除写回所需DBID顺序。
- 本节选定了可执行的保守策略；后续RTL仍要用交错测试验证，不宣称文档本身已证明整机一致性。

## 10. 确认与结束条件

v1分配型读收齐全部期望数据并保存结果后才产生CompAck（项目保守策略）；Snoop处理不等待这个Ack。正常读的CPU响应、缓存安装、CompAck发送分别跟踪，MSHR仅在义务完成或已完整移交其它队列后释放。

| 事务 | v1正常路径 |
|---|---|
| ReadShared | TXREQ -> RXDAT两拍CompData(SC) -> TXRSP CompAck |
| ReadUnique | TXREQ(ExpCompData=1) -> RXDAT两拍CompData(UC) -> CompAck；可写条件满足后本地Store变UD |
| ReadNoSnp/ReadOnce | TXREQ -> 按Size接收CompData；不产生CompAck，不安装本地一致性行 |
| MakeUnique | TXREQ -> RXRSP Comp(UC) -> CompAck；整行新数据由本地完整覆盖，不能用于局部Store |
| Evict | TXEVT -> RXRSP Comp |
| WriteBackFull | TXEVT -> CompDBIDResp -> TXDAT两拍CopyBackWrData；全部发送后结束 |
| WriteUniqueFull | TXREQ -> CompDBIDResp -> 两拍NonCopyBackWrData，不分配Requester副本 |
| WriteNoSnpPtl/Full | TXREQ -> DBIDResp -> TXDAT按Size/BE发送 -> Comp；v1在写数据被接收/操作完成后才发Comp，不使用提前写完成优化 |
| CMO | TXREQ -> 必要的Snoop -> RXRSP CompCMO；ISA/设备可见性仍需系统层正确实现 |
| Stash | TXREQ(ExpCompStash=1) -> RXRSP CompStash |
| Snoop | RXSNP -> TXRSP SnpResp，或TXDAT两拍SnpRespData；不用强制两条响应都发送 |

为减少实现组合，v1的WriteBackFull选组合回复；接口仍有DBIDResp/Comp以支持WriteNoSnp。单独的Comp不会额外出现在正常ReadShared的CompData之后。错误结束按第6.4节，不能套正常路径无限等待。

## 11. 配套实现检查清单（非RTL代码）

后续断言/测试围绕以下契约展开：

- 所有发端被反压时稳定；节点ID和保留字段取值合法。
- REQ/EVT的TxnID不能在本节点活动表项中重复；RXRSP/RXDAT必须命中唯一上下文。
- 数据两拍有序且不交织；DBID/Resp不变，DataID不重复，BE与事务类型/Size相符。
- 两拍错误累计；错误/被Snoop撤销的grant不正常完成CPU访问、不安装有效缓存行。
- Snoop优先与读返回并行接收；先Snoop后grant、先grant后Snoop、同拍首数据+Snoop分别测试。
- 旧CompAck不重新增加已被Snoop撤销的目录副本；第二拍错误不能在CPU提前得到第一拍后才发现。
- alias扫描覆盖四个候选set和活动物理行上下文，禁止同物理行重复脏副本。
- WriteBackFull等得到DBID后才发送写数据；CPU/协议/队列义务未完成不得复用上下文。

## 12. 与历史文档的关系及后续范围

本文件是当前DCache–L2外部接口约定。此前评审稿中的“待定”已由本文件给出具体项目选择；微架构队列数量、LoadPipe流水级及CPU接口具体Bundle不是本文件的冻结对象。

[接口草案](/home/ywj/yqh/docs/compact-chi-dcache-interface-design-draft.md)继续保留CPU/LSU和参数讨论；[TileLink对照](/home/ywj/yqh/docs/xiangshan-tilelink-to-compact-chi-dcache-map.md)用于理解模块迁移；[学习日志](/home/ywj/yqh/docs/agent-memory/cache-coherence-learning-log.md)保留过程，不覆盖本版选择。

接口字段已按本文实现；微架构/CPU侧现有源码未随之重写。后续实现握手、仲裁和事务控制时，仍须遵守本文的行为契约。


## 13. 已实现的 Chisel Bundle

实现文件：[DCache2L2CacheBundle.scala](/home/ywj/yqh/src/main/scala/YQH/DCache2L2CacheBundle.scala)。

- 七个 payload 类保留 `TXEVTBundle/TXREQBundle/RXSNPBundle/TXRSPBundle/TXDATBundle/RXRSPBundle/RXDATBundle` 名称，字段使用 lowerCamelCase（例如文档 TxnID 对应 `txnId`、DBID 对应 `dbId`）。
- `CompactCHIWidths` 集中声明协议线位宽，与CPU `reqIdWidth` 和Data Array `rowBits` 区分。
- `DCacheL2IO` 是DCache视角的完整七通道：TX使用Decoupled，RX使用Flipped(Decoupled)。L2可用`Flipped(new DCacheL2IO)`。Payload内部不单独标Input/Output。
- RXDAT固定CompData，因此没有opcode字段；不添加Credit/Retry/Way/last或MSHR内部寄存器。
- Bundle只规定类型，不自动赋固定字段值，也不自动保证Snoop优先、反压稳定性、元信息一致或事务顺序；这些由后续发送/接收控制实现。

验证：`mill --no-server top.compile`通过。临时对接模块完成Chisel elaboration/Verilog生成，检查七通道payload位宽81/63/60/31/290/18/308、DCache/L2两侧valid/ready及字段方向，以及2位TagAlias、45位SNP地址、32位BE和256位Data。未进行事务仿真，因尚未实现事务状态机。
