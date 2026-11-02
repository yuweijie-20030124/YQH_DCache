# DCache RTL 冻结记录

日期：2026-11-02。用户已确认，后续写 RTL 以本文件为准。语雀备份在 `/home/ywj/yqh/docs/YQH-docs/YQH-DCache_backup/`。本文件比备份里尚未改掉的旧句子优先。

## 已确认、不要再改的模块

`/home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/AMOALU.scala` 用户已确认无错误。不要重写，不要改 cmd 编码。它仍是 `package xiangshan.cache`，这是原样保留，不是遗漏。

AMOALU 只做组合运算：amoadd、amoxor、amoor、amoand、amomin、amomax、amominu、amomaxu、amoswap。LR、SC、AMOCAS 不进这个模块，由 MainPipe 处理。

## 用户拍板

1. 共享且 PassDirty 的写回使用 `WriteBackFull`。TXEVT opcode：0 = Evict，1 = WriteBackFull。最终状态用 Resp，不另设 opcode。共享且脏的 Resp 是 `SC_PD`。
2. 通道地址编码保持 YQH 文档，不统一成全 48 bit。TXREQ.addr = 48。TXEVT.addr 和 RXSNP.addr = 45，即 `paddr[47:3]`，接收端补低 3 位 0。set 必须先还原字节地址，再用 `{tagAlias, byteAddr[11:6]}`。不要直接取 45 bit 字段的 `[11:6]`。手册 EVT Addr 是 48，按用户决定不改。
3. `TXREQ.valid` 已经拉高后，opcode、地址、alias 保持不变。`ReadShared` 升级成 `ReadUnique` 只能发生在请求还没放到线上的时候。已经在等 ready 时，后来的 store 拒绝并 replay。
4. SC：reservation 失效，或者该行不是 UC/UD，直接失败，不进 MissQueue。成功写内存且 `rd=0`。失败不写，`rd=1`。
5. 合并进同一个 MSHR 的每一条 store 都保留自己的 id。不能只留第一个 `client_id`。
6. `wfi.safe` 要等 MissQueue、CMO、未完成 CompAck、WritebackQueue、ProbeQueue 全部空闲。
7. Snoop 的 `needData` 是独立位，不编进 2 bit opcode。opcode 仍是手册的四种：`SnpMakeInvalid`、`SnpToInvalid`、`SnpToShared`、`SnpToClean`。
8. TXDAT.byteEnable 是 8 bit 字有效。第一版恒为全 1。不采用手册里的 32 bit BE。
9. `respErr` 统一 2 bit。RXRSP 也带这个字段，因为 CMO 要看 `CompCMO.respErr`。
10. `alwaysReleaseData` 关闭。第一版没有 `WriteEvictFull`。

## 参数

- 256 set，4 way，64 B line，8 bank，每 bank 64 bit。两条 LoadPipe。无 WPU，无 StorePipe，无 RefillPipe，无 replace 口。
- MainPipe 仲裁：`probe > refill > store > atomic`。
- MSHR 16 项，txnId 0～15。CMO txnId = 16，不占 MSHR。WritebackQueue 18 项，txnId = 17 + 项号，范围 17～34。
- 物理 tag 是 `paddr[47:12]`，36 bit。不用文档里的 34 bit `paddr[47:14]`，否则同 set 内只有 `paddr[13:12]` 不同的两行会撞 tag。
- 本地 Meta 2 bit：I=0，SC=1，UC=2，UD=3。没有 SD。CHI Resp 是另一套 3 bit 编码。
- 节点号位宽 7。DCache 节点号暂用 2，L2 暂用 0。
- 不用 Credit / Retry，通道只有 valid/ready。Bundle 里没有 AllowRetry。
- CMO：clean = CleanShared，flush = CleanInvalid，inval = MakeInvalid。zero 不是 CMO，是整行写 0 的 store。
- 软件预取进 L1：`prefetch.r` 发 ReadShared，`prefetch.w` 发 ReadUnique。不把它们发成 Stash。

## 代码位置

- 参数：`/home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala`
- 七个通道和 `DCacheL2IO`：`/home/ywj/yqh/src/main/scala/YQH/DCache2L2CacheBundle.scala`
- `L2CacheIO` 只是 `DCacheL2IO` 的别名，字段不再写在 `Dcache.scala` 的空类里。

opcode 数值来自 Compact CHI 手册 9.2.5，不是新编的。下一步才是 Meta、Tag、Data 数组，本轮没有写它们的行为。

## 2026-11-02 核对

用户再次确认上面 10 条，并确认 AMOALU 无错误。AMOALU 源文件没有改。

七个通道 Bundle 和 `DCacheParameters` 已按这个顺序写完，`mill -i top.compile` 通过。还没有写 MetaArray、TagArray、DataArray 的行为。

Opcode 数值对照 Compact CHI 手册 9.2.5，不是新编的：

- EVT：0 Evict，1 WriteBackFull。
- REQ：ReadShared=0x04，CleanShared=0x0C，CleanInvalid=0x0D，MakeInvalid=0x0E，ReadUnique=0x10，MakeUnique=0x12。
- SNP：0 SnpMakeInvalid，1 SnpToInvalid，2 SnpToShared，3 SnpToClean。
- 下游 RSP：0 CompStash，1 Comp，2 DBIDResp，3 CompDBIDResp，4 CompCMO。
- 上游 RSP：0 CompAck，1 SnpResp。
- 下游 DAT：只有 CompData=0。上游 DAT：0 NonCopyBackWrData，2 CopyBackWrData，3 SnpRespData。
- Resp：I=0，SC=1，UC=2，I_PD=4，SC_PD=5，UC_PD=6。没有 UD。授予 UD 的 CompData 在线上是 UC_PD，本地 Meta 再记成 UD。

和手册字段表不同、但按拍板保留的地方：

- TXEVT.addr、RXSNP.addr 保持 45 bit，不改成手册 EVT 的 48 bit。
- RXSNP 额外有 `needData` 和 `tagAlias`。手册 SNP 通道表没有这两项。
- `way` 的位宽按语雀写成 `nWays`，当前是 4 bit，不是手册的 WayIndex 2 bit。
- 没有 AllowRetry。TXDAT.byteEnable 是 8 bit。
- 手册表 8.7/8.8 里 WriteBackFull 只允许 UD 到 I。本设计仍用 WriteBackFull 加 `SC_PD` 表达共享且脏的写回。

还没拍板，不要当成已冻结：CPU 侧 `id` 位宽。`DCacheParameters.reqIdWidth` 默认是 5，`HasDCacheParameters` 里又写死成 6，实际 Bundle 用的是 6。

## 2026-11-02 接口改用 Compact-CHI

用户要求 DCache 到 L2 的参数和 Bundle 改用 `/home/ywj/Compact-CHI`，不再使用 YQH 自己写的那份通道。`DCache2L2CacheBundle.scala` 已删除。

YQH 的 `build.sc` 直接编译这个目录：

`/home/ywj/Compact-CHI/src/main/scala`

包名是 `anserl2.compactchi`。没有把源码抄进 YQH，也没有改 Compact-CHI 仓库。YQH 仍是 Scala 2.12 / Chisel 3.6，只是把这四份协议源码加进编译。

端口是 `L2CacheIO`，它就是 `CompactChiRequesterIO(p.chi, p.chiWayBits)`。`p.chi` 是 `CompactChiParams()` 的默认值。

| 原先叫法 | Compact-CHI 端口 | Flit |
| --- | --- | --- |
| TXREQ | `req` | `CompactChiReqFlit` |
| TXEVT | `evt` | `CompactChiEvtFlit` |
| TXRSP | `txRsp` | `CompactChiUpRspFlit` |
| TXDAT | `txDat` | `CompactChiUpDatFlit` |
| RXRSP | `rxRsp` | `CompactChiDownRspFlit` |
| RXDAT | `rxDat` | `CompactChiDownDatFlit` |
| RXSNP | `rxSnp` | `CompactChiSnpFlit` |

字段名是 `txnID`、`srcID`、`tgtID`、`dbID`、`dataID`。Opcode 用 `CompactChiOpcode`，错误码用 `CompactChiRespErr`。

这几条覆盖上面为本地 Bundle 做的决定：

- REQ 和 EVT 的地址都是 48 bit。只有 SNP 是 45 bit，即 `paddr[47:3]`。
- `tagAliasBits` 固定为 2，不使用 Compact-CHI 的默认 1，也不跟手册。256 set 的 index 是 `{tagAlias, addr[11:6]}`，共 8 bit。
- `byteEnable` 是 `dataBits / 8 = 32`，不是 8。
- SNP 上没有 `needData`。
- `way` 是路号索引。四路所以 `chiWayBits = 2`，不是 4 bit 的 one-hot。八路在库文档里才是 3。
- 没有 AllowRetry。EVT 仍然只有 Evict=0 和 WriteBackFull=1。
- DCache 节点号用 `CompactChiUpstreamNodeId.DCache`，值是 2。L2 节点号 Compact-CHI 没给常量，YQH 仍暂用 0。

DCache 自己的 256 set、4 way、64 B、两条 LoadPipe 没有改。

用户确认接受 Compact-CHI 覆盖后的宽度：EVT 地址 48 bit，SNP 地址 45 bit，byteEnable 32 bit，SNP 没有 needData，way 是 2 bit 索引。唯一例外是 tagAliasBits，用户要求固定 2 bit。

L2 节点号仍暂用 0。CPU 侧请求 id 仍未拍板，参数默认 5，实际 Bundle 用写死的 6。
