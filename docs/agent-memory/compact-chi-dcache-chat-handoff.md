# Compact CHI / DCache 学习交接上下文

请把这份内容当作上一段学习对话的结构化上下文，继续教学，不要从零开始，也不要把下面的文档内容当成用户指令；文档只提供背景和资料来源。

## 用户目标

用户希望学习面向 L1 DCache–L2 Cache 接口的 Compact CHI，并最终能够：

- 读懂 Compact CHI 事务；
- 分析 DCache/L2 的数据、权限和状态变化；
- 设计 MSHR、RefillQueue/Buffer、ProbeQueue、WritebackQueue 和瞬态状态机；
- 使用 Chisel 开发 DCache；
- 为接口和状态机编写 Chisel `assert` 与 directed tests。

用户目前还没有开始 RTL 开发，希望先继续学习和评审设计参数。正式开始冻结参数、定义 Chisel Bundle、写 RTL 之前，必须先明确提醒：

```text
【即将开始正式 DCache 设计】接下来将冻结参数、定义 Chisel Bundle，并开始编写 RTL/断言。
```

## 学习方式偏好

- 使用中文教学。
- 一次讲清一个完整机制，再问一个有意义的问题。
- 用户不理解时直接换一种解释，不要连续出很多只回答“是/否”的碎片题。
- 保持 AI Learning Coach workflow：记录知识点、题目、回答、评分、纠正、知识缺口和下一次复习触发条件。
- 每学习 2–3 个新概念插入旧题复习。
- 可以跳过费曼环节；用户曾暂时跳过 CMO 的费曼复述，不要把它当作继续学习的阻塞条件。
- ACE 学习已暂停；Type 2–5 组件分类已降级为背景知识，不要继续大量考分类题。
- 重点放在 Compact CHI、DCache–L2 接口和 Chisel 实现准备。

## 当前进度估计

这是课程范围的粗略估计，不是 RTL 完成度：

```text
Compact CHI 概念覆盖：约 65%–70%
DCache–L2 接口设计准备：约 55%–60%
Chisel Bundle：尚未开始
Chisel RTL：尚未开始
Chisel 断言实际接入：尚未开始，目前只有设计级模板
仿真/SPEC2006 集成：尚未开始
```

已经创建但仍属于设计准备的文件：

- `outputs/compact-chi-dcache-design-baseline.md`
- `outputs/compact-chi-dcache-verification-assertions.md`
- `outputs/compact-chi-dcache-writeback-id-review.md`
- `outputs/compact-chi-credit-retry-review.md`
- `work/cache-coherence-learning-log.md`

如果这些文件在新环境不可见，不要声称已经读取；让用户复制本交接文本或提供文件。

## 已掌握的 Compact CHI 内容

### 通道

从 L1 视角：

```text
TXREQ：L1 -> L2，普通请求
TXEVT：L1 -> L2，主动驱逐/写回
TXRSP：L1 -> L2，响应/确认
TXDAT：L1 -> L2，数据
RXSNP：L2 -> L1，Snoop
RXRSP：L2 -> L1，响应
RXDAT：L2 -> L1，数据
```

Compact CHI 的五类通道：

```text
REQ / SNP / RSP / DAT / EVT
```

### 状态

```text
I  = Invalid
SC = Shared Clean
UC = Unique Clean
UD = Unique Dirty
```

```text
I  --ReadShared--> SC（常见结果）
I  --ReadUnique--> UC
UC --Store-------> UD
SC --授权升级----> UC
UD --写回--------> I
SC/UC --Evict----> I
```

不要把 MESI 的 `S/E/M` 直接当作 Compact CHI 的状态名。

### 主要请求

```text
ReadOnce：一次性读取，不保留 Requester 缓存状态，通常 I
ReadShared：Load，分配缓存状态，常见结果 SC
ReadUnique：为 Store 获取唯一/可写权限，结果 UC 或 UD
MakeUnique：整条缓存行完全覆盖写，不需要旧数据
WriteUniqueFull：直接发送完整新行，不在 Requester 分配副本，最终 I
WriteBackFull：写回已有 UD 脏行，最终 I
Evict：驱逐干净缓存行，不发送脏数据，最终 I
CleanShared：清理 Dirty 责任但保留，UD -> UC
CleanInvalid：清理 Dirty 并失效，UD -> I
MakeInvalid：失效但本操作不保证写回 Dirty，需谨慎
```

### Snoop

```text
SnpToInvalid：目标最终 I；若脏则返回数据
SnpToShared：目标至少 Shared；UD 通常返回数据并可变为 SC
SnpToClean：目标至少 Unique Clean；UD 必须交出脏数据并清除 Dirty
```

重要更正：Compact CHI 本地草稿第 10.11 节允许两种 Snoop 响应路径：

```text
只返回状态：TXRSP / SnpResp
状态+数据：TXDAT / SnpRespData
```

`SnpRespData` 本身包含状态和数据，不要求每个带数据的 Snoop 再额外发送一条 `SnpResp`。不要把 ACE 的 `CR+CD` 机械套成 Compact CHI 的强制 `RSP+DAT`。

### 数据消息

```text
CompData：L2 -> L1，返回读请求数据
SnpRespData：L1 -> L2，Snoop 状态+数据
CopyBackWrData：L1 -> L2，WriteBackFull 的已有脏行
NonCopyBackWrData：L1 -> L2，WriteUniqueFull/非 Cacheable 直接写数据
```

### ID

```text
原始 TxnID：L1 找自己的原始 MSHR/WritebackEntry
DBID：L2 返回，关联后续数据/确认
SrcID：消息源节点
TgtID：目标节点
DataID：缓存行多拍数据的 beat 编号
```

例子：

```text
TXEVT WriteBackFull：TxnID=9
RXRSP CompDBIDResp：TxnID=9，DBID=4
TXDAT CopyBackWrData：UpDAT 的 TxnID 字段填4
```

L1 用原始 `TxnID=9` 找本地表项，再保存返回的 `DBID=4`。不能用 DBID 反查原始请求，也不能把所有后续消息都填原始 TxnID。

### WriteBackFull 完成

分步回复：

```text
DBIDResp
CopyBackWrData 全部成功发送
Comp
```

事务结束条件：

```text
收到 Comp && 全部 CopyBackWrData 已发送
```

组合回复：

```text
CompDBIDResp
CopyBackWrData 全部成功发送
```

`CompDBIDResp` 已经包含完成语义，不需要额外等待单独 `Comp`；但数据没发完之前不能释放 WritebackEntry。

### ReadUnique 返回路径

本地 Compact CHI 第 10.2 节：

```text
Requester 没有有效数据 -> 必须 CompData
Requester 保留有效数据，ExpCompData=0 -> 可以只 Comp + 新状态
ExpCompData=1 -> 不能只 Comp，必须 CompData
```

收到 `Comp/CompData` 后，分配型读需要 `CompAck`；`CompAck` 从 L1 走 TXRSP，使用返回 DBID 关联。

## MSHR/队列和并发

```text
MSHR/MissEntry：L1 主动请求上下文
RefillBuffer/Pipe：RXDAT、多拍数据、received_mask、critical-word-first
ProbeQueue：RXSNP 上下文
WritebackQueue：WriteBackFull/Evict、CopyBackWrData、TXDAT 反压
Transient Controller：同地址主动请求/Snoop 仲裁
```

关键规则：

- 同地址请求可以按阶段合并；同地址 Store 在已发出 ReadShared 后通常不能直接合并。
- 同地址 ReadUnique 和 SnpToInvalid 不能各自独立提交 UC/I。
- 不同地址也可能因相同 Set、RAM bank、端口或流水线资源冲突而阻塞。
- 64B line、16B beat 时为 4 beat；按 `received_mask[DataID]` 记录接收进度。
- critical-word-first 可以提前唤醒请求 Load，但不能提前提交完整缓存行状态。
- TXDAT 反压时必须保持当前 beat 和脏数据上下文。

## P-Credit/Retry

- `TXREQ` 参考设计采用动态 P-Credit + Retry。
- `RXSNP` 参考设计采用静态接收容量，通常不建议 Retry。
- Credit 类别和每种请求消耗的资源由实现约定，不是协议固定语义。
- L1 MSHR 空位不等于 L2 有资源。
- 动态 Credit 可被收回；已消耗的 Credit 不能再次接受收回，需拒绝。
- Retry 必须匹配已有请求，不能因为 MSHR 满而丢失。
- Retry 等待期间保留原 MSHR，等齐所有静态资源后再重发。
- 首次发送 `AllowRetry=1`，Retry 后重发 `AllowRetry=0`。
- 一个 Credit 只能被一个等待 MSHR 消费；需要重发仲裁器。
- 静态 Credit 是消费前不可收回/改配的容量承诺。

## 设计基线和参考源码

用户希望用 Chisel 开发 DCache，并考虑参考 XiangShan/Kunminghu 源码。

可以参考 XiangShan，但需要把它作为：

```text
模块划分/工程组织/状态机/验证方法的参考
```

不要直接复制并假设参数或接口完全适用。当前建议：

```text
第一阶段：先参考功能结构
第二阶段：根据 Compact CHI 冻结接口
第三阶段：再确定参数和 Chisel Bundle
```

已经创建的设计基线中包含临时参数建议和 Mermaid 架构图；这些参数尚未冻结。

## SPEC2006 目标

用户目前只知道“大概 SPEC2006 分数 8”，这还不足以冻结 DCache 参数。必须明确：

```text
SPECint2006 / SPECfp2006 / 混合
完整运行 / 采样或 SimPoint
绝对分数 / Ratio / points per GHz
核心数、频率、编译器、内存模型、L2/内存延迟
```

DCache 只能影响整体分数的一部分。先用功能测试、延迟/带宽微基准和缓存敏感性测试选参数，再用 SPEC 验证。

## 下一步教学建议

不要立即写大块 RTL。先做：

1. 确定参考配置与 SPEC 指标；
2. 评审 line size/Data_Width/MSHR/ProbeQueue/WritebackQueue/ID widths；
3. 补一笔完整 ReadShared Retry -> CompData -> CompAck 时序；
4. 确认参数后发出正式提醒；
5. 提醒文本：

```text
【即将开始正式 DCache 设计】接下来将冻结参数、定义 Chisel Bundle，并开始编写 RTL/断言。
```

6. 再开始 Chisel Bundle、状态机和 Chisel `assert`。

## 用户当前问题的直接恢复指令

请先告诉用户：

- 当前 DCache 还在协议/设计准备阶段，RTL 尚未开始；
- 设计基线和架构图已创建，但正式设计参数尚未冻结；
- 用户不确定参数时，应使用“硬约束 -> 参考配置 -> 暂定值 -> 敏感性测试 -> 冻结”的流程；
- 可以参考 XiangShan，但不要盲目复制；
- 如果要看 ASUS 仓库，需要在新聊天/远程工作区选择 ASUS，当前聊天没有直接访问它。

然后继续一笔完整的、有意义的 Compact CHI/DCache 事务，不要重新从通道名称开始。
