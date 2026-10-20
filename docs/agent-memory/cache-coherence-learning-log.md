# 缓存一致性学习记录

## 学习目标与阶段
目标：能分析 DCache、L2、TileLink、ACE、CHI 事务，追踪请求者、权限、数据来源和完成条件。

当前阶段：入门后段，正在进入 TileLink 权限和事务模型。已具备 MSI/MESI、脏数据、Probe/Snoop 的良好直觉；需要继续加强协议精确性和实现差异。

## 已掌握知识点

### 一致性与脏数据
- 多个核心可能缓存同一缓存行。
- 一个核心写入前，其他核心的冲突副本必须降级或失效。
- 失效副本不能继续被当作有效数据使用。
- 缓存一致性关注同一缓存行的副本关系；内存一致性关注多个内存操作的可观察顺序。
- 脏缓存拥有比内存或下级缓存更新的数据；读请求不能直接相信旧内存值。
- 最新数据不必每次都写回内存，只要一致性系统已接管数据并更新目录状态。

### MSI/MESI
MSI：`I` 无效、`S` 共享、`M` 修改。

```text
C0: I -> S       第一次读
C1: I -> S       另一个核心读
C0: S -> M       C0 写；C1: S -> I
```

MESI 增加 `E`，表示干净且独占：

```text
C0: I -> E       没有其他副本
C0: E -> M       写入时通常无需失效广播
```

- `S -> M` 需要回收冲突共享权限。
- 共享状态通常直接 `S -> M`，不是 `S -> E -> M`。
- `E` 表示干净且唯一持有，写入后才成为 `M`。

### TileLink 权限

```text
N < B < T
```

- `N`：无可用权限，粗略对应 MESI `I`。
- `B`：只读、可共享权限，粗略对应 `S`。
- `T`：可写权限；未修改时粗略对应 `E`，写入后粗略对应 `M`。

`N/B/T` 主要表达权限上限，不能与 `I/S/E/M` 完全等同。

### TileLink 消息
- `AcquirePerm`：已有缓存行，只申请更高权限，通常不重新传输整条数据。
- `AcquireBlock`：没有缓存行，请求整条数据和权限。
- `Probe`：一致性管理者要求其他缓存降级或失效。
- `ProbeAck`：Probe 已处理，不带数据。
- `ProbeAckData`：Probe 已处理，并返回最新数据。
- `Grant`：授予权限，通常不带数据。
- `GrantData`：授予权限并返回数据。
- `Release`：主动放弃权限，必要时写回数据。

典型权限升级：

```text
C0(B) -> L2: AcquirePerm，请求 T
L2 -> C1:    Probe，请求 B -> N
C1 -> L2:    ProbeAck
L2 -> C0:    Grant，授予 T
C0: B -> T
C1: B -> N
```

典型脏数据转移：

```text
C0(N) -> L2: AcquireBlock，请求数据 + T
L2 -> C1:    Probe
C1 -> L2:    ProbeAckData，返回最新数据并放弃冲突权限
L2 -> C0:    GrantData，返回数据并授予 T
C0: N -> T
C1: T/M -> N
```

## 已纠正的混淆
1. C0 不直接修改 C1 的状态，通常由一致性管理者发 Probe。
2. 无效读请求不一定从内存取数据，最新数据可能在脏缓存中。
3. 干净共享副本通常返回 `ProbeAck`，脏副本需要 `ProbeAckData`。
4. `S -> M` 不需要经过 `E`。
5. `E` 是干净且独占，不等于已经写脏。
6. `N` 表示无权限，不严格等于 SRAM 中没有残留数据。
7. 内存不必在每次事务完成前更新。
8. 响应名称是 `ProbeAckData`，不是 `ProbeData`。

## 已完成练习
1. C0 写共享行前处理 C1 副本。
2. 读写竞争与合法仲裁顺序。
3. 脏数据从持有者转发而不是从旧内存读取。
4. MSI 状态追踪。
5. MESI 的 `E` 优化。
6. `E` 被另一个核心读取后变为共享。
7. TileLink Acquire/Probe/Grant 角色。
8. `ProbeAck` 与 `ProbeAckData`。
9. `AcquirePerm` 与 `AcquireBlock`。

## 待复习
- TileLink `N/B/T` 与 Acquire/Probe 参数的精确映射。
- L2 目录如何记录持有者、脏数据和权限。
- 同一缓存行请求重叠时的仲裁与瞬态状态。
- ACE snoop 与 TileLink Probe 的对比。
- CHI 的 Request、Snoop、Response、Data 通道。
- 数据路径和权限路径可以不同，但必须在合法完成点汇合。

## 易错点
- 有数据不等于有权限。
- 脏数据转移不等于必须写回内存。
- 不要把 MESI 字母直接映射成 TileLink 字母。
- 看到 `ProbeAckData` 时，同时检查数据交付和原持有者权限是否降级/失效。

## Workflow compliance update (2026-10-15)

- Step 1 ladder: partially complete; needs explicit gate tasks for each level.
- Step 2 resource filter: partially complete; selected resources exist, but a formal audience/sections/skip table remains to be written.
- Step 3 fixed study plan: not yet complete; next deliverable is an 8-12 session plan.
- Step 4 examiner loop: active; one question at a time with scoring and corrections.
- Step 5 topic cheat sheet: not yet complete; create after the current TileLink permission topic reaches its gate.
- Step 6 Feynman feedback: not yet complete; start after the first TileLink cheat sheet.
- Review cadence: one old question after every 2-3 new concepts; five-question review at topic boundaries.

## Latest question and answer

Question: Can C0 receive Grant and start writing before C1 returns ProbeAck after L2 requests C1 to give up B permission?

Learner answer: No. C1 may still have B permission and could later read the line, so granting C0 early could create a conflict.

Score: 9/10.

Correction: The key invariant is that L2 must not grant C0 conflicting writable permission until all required Probe responses and any required data have arrived. C1 may be able to keep reading under B in some intermediate protocol state, but C0 must not begin the write until the coherence manager has established the required ordering and permission transition. The relevant rule is single-writer/multiple-reader: at most one cache may have writable permission for a line, while multiple caches may have read-only permission.

Next review trigger: revisit this question after 2-3 new TileLink concepts, then compare the same ordering rule with ACE snoop responses.

## Formal resource filter

| Resource | Best use | Read first | Skip initially |
|---|---|---|---|
| `humandocs/coherence/A Primer on Memory Consistency and Cache Coherence...pdf` | Build the conceptual foundation | Chapters 1-3: coherence, consistency, MSI/SC | Later formal sections until the state model is solid |
| `humandocs/tilelink/tilelink_spec_1.9.3.pdf` | Learn TileLink channels, operations, and permissions | Architecture, channels, operations/messages, TL-C | Full serialization/deadlock details on first pass |
| `humandocs/AXI总线/IHI0022E_amba_axi_and_ace_protocol_spec.pdf` | Learn ACE snoop and AXI/ACE relationships | ACE overview, snoop requests/responses, coherency examples | AXI details unrelated to coherency |
| `humandocs/CHI/compactchi-architecture-20260828-d0f2609.pdf` | Map the same ideas to CHI | Architecture, components, channels, transaction categories | Implementation-specific optimizations initially |
| `humandocs/香山文档/DCache/...docx` and `...CoupledL2...docx` | Connect protocol ideas to real RTL/verification structure | Functional description, Load/Store/Probe, MissQueue/ProbeQueue, Acquire/Probe/Release flows | Detailed module circuits until the transaction story is clear |

## Ten-session core-20% plan

1. Coherence versus consistency; cache lines, copies, dirty data. Exercise: trace two cores reading and writing one line.
2. MSI and MESI; stable states and transitions. Exercise: draw `I/S/M` and `I/S/E/M` traces.
3. Permission versus data ownership; single-writer/multiple-reader invariant. Exercise: classify clean, dirty, shared, exclusive cases.
4. TileLink channels and message roles. Exercise: label Acquire, Probe, Ack, Grant, Release in one transaction.
5. `AcquirePerm` versus `AcquireBlock`; `ProbeAck` versus `ProbeAckData`. Exercise: choose the right message for four scenarios.
6. L2 directory, MissQueue, ProbeQueue, and transient states. Exercise: define when Grant is legal.
7. ACE snoop model. Exercise: translate one TileLink permission upgrade into ACE-style snoop actions.
8. CHI channels and transaction separation. Exercise: identify Request, Snoop, Response, and Data roles.
9. DCache/L2 engineering flows. Exercise: analyze Load miss, Store upgrade, Probe race, and replacement.
10. Integrated review and verification. Exercise: design assertions and directed tests for dirty forwarding and no-two-writers.

Recommended time: 90-120 minutes per session, about 15-20 hours for the core pass. The core pass is complete when the learner can trace a permission upgrade in TileLink, ACE, and CHI and explain requester, data owner, permission owner, and completion condition.

## One-page cheat sheet: coherence foundation and TileLink entry

### One-sentence definition
Cache coherence ensures that caches holding the same line obey a single-writer/multiple-reader permission discipline and that the newest data is not lost or hidden behind stale copies.

### Core ideas
- `I/S/E/M`: invalid, shared, clean-exclusive, modified.
- TileLink rough permission order: `N < B < T`.
- Read miss needs data; permission upgrade may need no data.
- `Probe` reclaims or downgrades another cache's permission.
- Dirty owner must return the newest data.
- `Grant`/`GrantData` complete the request only after required probes and data dependencies are satisfied.
- Data may travel through L2 or directly cache-to-cache; permission accounting still belongs to the coherence manager.

### Examples
- `B -> T`: `AcquirePerm`, Probe other B holders, `ProbeAck`, then `Grant`.
- `N -> T` with a dirty owner: `AcquireBlock`, Probe, `ProbeAckData`, then `GrantData`.
- `E` read by another core: old owner becomes shared and the new reader becomes shared.

### Common errors
- Granting writable permission before Probe responses.
- Treating `N/B/T` as identical to `I/S/E/M`.
- Fetching stale memory instead of probing the dirty owner.
- Assuming every dirty transfer must reach memory.
- Confusing data presence with permission to use or modify it.

### Pre-analysis checklist
1. Who has the line and which permission?
2. Who has the newest data?
3. Is the request for data, permission, or both?
4. Which holders must be probed?
5. Does a response carry data?
6. What exact event makes Grant legal?
7. What are the final permissions and data owner?

### Five self-test questions
1. Why does `S -> M` require invalidating other shared holders?
2. Why can `E -> M` usually avoid an invalidation broadcast?
3. When is `AcquirePerm` preferable to `AcquireBlock`?
4. Why does a dirty Probe require `ProbeAckData`?
5. Why must Grant wait for required Probe responses?

## Latest examiner result

Question: C0 is waiting for T, C1 has received Probe but has not acknowledged, and C2 requests a read. Why cannot L2 complete both independently?

Learner answer: C2 should finish its read first because C1's data has not arrived; otherwise C0 could get T while C1 may still have T, violating single-writer. Data source is also unknown because C1 may have dirty data.

Score: 8.5/10.

Feedback: Correctly identified the permission conflict, dirty-data dependency, and single-writer invariant. Refinement: C2 does not have to finish first. L2 may serialize C0 first and make C2 read the new value, or serialize C2 first and then grant C0; the coherence manager must choose and enforce one legal order. C1's current permission may be B or T depending on the initial state, but until its Probe effect is acknowledged, L2 cannot assume the required permission transition and data transfer are complete.

New concept: linearization point. For a line, the coherence manager needs an event at which an operation becomes ordered and visible, such as completion of the required Probe/data dependencies before Grant, or completion of C2's read response before the write is granted.

Review trigger: after the next new concept, start Feynman feedback for the single-writer/multiple-reader rule.

## Feynman result

Concept: why a requester cannot write before another cache has given up conflicting permission.

First attempt: correct principle but still used protocol terms; score 7/10.

Revised explanation: two people have copies of one workbook; one person cannot edit their copy until the other confirms they have stopped editing or their latest content has been collected, otherwise the teacher cannot know which version is final. Score 10/10.

Gate result: foundation plus TileLink permission basics passed the first Feynman gate. Next topic: ACE snoop model.

## ACE first exercise

Learner answer: identified AC for snoop request, CR for snoop response, no CD for a clean shared copy, and that C0 must wait before writing. Confused C0 as the snoop initiator and was unsure about the completion response channel. Score: 7.5/10.

Correction: C0 issues a normal AXI write request on AW/W. The interconnect or home/coherence node emits AC to C1. C1 returns CR; clean data normally needs no CD. The interconnect gates the write completion and eventually returns the normal AXI B write response to C0. There is not normally a separate AXI response saying only that C1 downgraded; the B response is withheld until the required snoop/ordering conditions are satisfied.

ACE review trigger: spend two more questions on AC/CR/CD, normal AXI completion, and clean versus dirty snoop responses before moving to CHI.

## ACE second exercise

Learner answer: AC snoop, clean copy needs CR without CD, and B completes the write. Repeatedly called the AXI write data channel A instead of W. Score: 9/10.

Correction: C0 uses AW + W; the interconnect sends AC; a clean shared C1 returns CR without CD; the final write completion is B. AC may request invalidation or downgrade depending on the write/coherence operation.

ACE fixed reminder: AW = write address, W = write data, B = write response; AR = read address, R = read data/response.

## ACE/TileLink read comparison

Learner answer: TileLink Probe and data response; ACE snoop with snoop response and data; C0 obtains newest data from C1; C1 need not become Invalid and may become shared. Score: 8.5/10.

Correction: Use the protocol-level names `Probe` and `ProbeAckData` for TileLink, not `ProbeReq`/`ProbeData`. In ACE, the interconnect sends an `AC` snoop; C1 returns `CR` and, when required, `CD`. The newest data may reach C0 directly from C1 or through L2/interconnect; the invariant is data correctness, not a fixed physical path. For a read request, the dirty owner need not always become Invalid; it can downgrade to a shared/owned-like state if the protocol supports dirty sharing, or become clean shared after data is made visible below. The exact state depends on protocol and requested permissions.

ACE topic status: basic clean/dirty snoop request and response channels passed; exact ACE snoop response encodings and data/ownership states remain for later.

Review trigger: next turn should include one short review of AW/W/B versus AR/R, then introduce ACE read snoop ordering or begin the first five-question topic review before CHI.

## ACE channel retrieval review

Learner answer: AW write address, W write data, B write response, R read address.

Score: 9/10. Correction: `AR` is read address; `R` is read data/read response. Fixed mnemonic: AW/W/B for write address/data/completion; AR/R for read address/data-response.

Review result: channel review completed; the AR/R distinction remains an active error item.

## ACE clean-read exercise

Question: C0 reads X while C1 holds a clean shared copy. Learner answered AR, AC, CR + CD, CD required, R, reasoning that dirty data needs CD.

Score: 6/10. The channel skeleton was mostly right, and the dirty-data rule is correct, but the scenario explicitly said clean shared. Correct flow: C0->interconnect AR; interconnect->C1 AC; C1->interconnect CR; no CD because lower levels already have the same clean data; interconnect->C0 R. The learner must first classify clean versus dirty before choosing CD.

Active review item: for every snoop scenario, explicitly state (1) requester operation, (2) snooped cache state, (3) whether it has newer data, then choose CR/CD.

## ACE repair question

Learner answer: no CD for a clean exclusive owner because the lower level also has the same data. Score: 10/10.

Gate result: clean versus dirty snoop data decision passed after repair. ACE basic channel/data-dependency topic is complete. Next: five-question review across coherence, TileLink, and ACE, then CHI introduction.

## Integrated review question 1

Learner answer: C1 must be handled to avoid stale reads; clean data need not be returned because L2 has a copy; C0 can write after MESI/TileLink/ACE snoop response.

Score: 7.5/10.

Feedback: Correctly identified the need to revoke or downgrade C1 before C0 writes, and correctly recognized that clean copies do not need data return in the described inclusive-L2 model. Refinements: the reason is not only a possible intervening read; the old copy must lose conflicting permission before the write. Inclusive L2 is an implementation assumption, not universal. TileLink C0 may begin only after the required Probe responses are received and L2 sends the appropriate Grant; a Probe response alone is not the permission grant. In ACE, `CR` is the snoop response, while `B` is the normal AXI write response; C0 must obey the interconnect's ordering and only treat the write as complete when the required snoops/data are handled and the normal write response is returned.

Compact CHI scope reminder: use the local Compact CHI architecture document, covering its simplified components, channels, transaction categories, and implementation-specific flow; do not silently substitute full Arm CHI terminology or assumptions.

## Integrated review question 2

Scenario: C0 reads X; C1 owns the newest dirty copy; L2/memory may be stale.

Learner answer: TileLink needs Probe data because C1 is dirty; ACE needs CR+CD; C0's data must come from C1; C1 need not become Invalid and may become shared.

Score: 9/10.

Correction: The TileLink response name is `ProbeAckData`, not `ProbeData`. The newest data logically originates at C1, but may travel directly to C0 or through L2/interconnect. C1 need not always become Invalid for a read; it may downgrade or retain an owned/dirty-shared role depending on the protocol and implementation. The key requirements are that C0 receives the newest data and no conflicting write permissions coexist.

Gate result: dirty-data transfer across TileLink and ACE passed. Ready to begin Compact CHI after a short compression review.

## Compact CHI first exercise

Learner answer attempted REQ, SNP, RSP, DAT, DAT, but attached latest data to every step and reversed/blurred the requester/data roles.

Score: 5.5/10.

Correction for the simplified read-with-dirty-owner flow:

```text
C0 -> L2: REQ, read request; no cache-line data from C0
L2 -> C1: SNP, ask C1 to inspect X; no data in the snoop request
C1 -> L2: RSP, snoop/status response; no cache-line data
C1 -> L2: DAT, latest dirty cache-line data
L2 -> C0: DAT, return latest data to requester
```

A separate RSP from L2 to C0 may be needed for the transaction completion semantics, depending on the Compact CHI transaction. The key invariant is that only DAT carries the cache-line data in this model; REQ/SNP/RSP carry request or control/status information. The logical data source is C1, even if L2 forwards it.

Active Compact CHI gap: channel payload roles and requester/completer direction. Next question should be a channel classification drill before transaction IDs or channel dependencies.

## Compact CHI channel classification drill

Learner correctly classified: read request = REQ; snoop request = SNP; dirty/status response = RSP; cache-line data = DAT. Score: 10/10.

Gate result: basic Compact CHI channel payload roles passed. Next: upstream/downstream direction and transaction categories, then channel dependency rules.

## Compact CHI eviction classification

Learner answer: a cache replacement/writeback initiated by C0 is an EVT because the upstream cache actively initiates the eviction.

Score: 10/10.

Completion: EVT identifies the eviction start message; if the line is dirty, the cache-line data is carried on DAT, and the lower-level component may return RSP for completion. Next: distinguish dirty writeback from clean eviction and track final state.

## Compact CHI clean eviction exercise

Learner answer: EVT; no DAT; L2 already has the newest clean copy; final state was answered as shared for load eviction or exclusive for store eviction.

Score: 8/10.

Correction: The first three are correct. After a successful eviction, C0 no longer owns the line, so its final local permission/state is N/Invalid regardless of whether it was previously shared or exclusive. Shared/exclusive describes the pre-eviction state, not the post-eviction state. A clean eviction normally needs EVT and a completion RSP, without DAT.

Active gap: distinguish pre-transaction state from post-transaction state. Apply this explicitly to Compact CHI state transition tables.

## Compact CHI dirty eviction exercise

Learner clarification: initially interpreted eviction as evicting another cache's line; the scenario meant the local cache line being replaced and actively evicted.

Answer: EVT; DAT required; DAT carries the full cache line; C0 final permission N; L2 records C0 no longer holds X.

Score: 9.5/10.

Correction/addition: L2 should record both directory ownership/sharer removal for C0 and the received latest data, clearing or updating dirty ownership as appropriate. EVT is local/upstream-initiated eviction; asking another cache to invalidate/downgrade is an SNP transaction, not EVT.

Terminology note: distinguish (a) local eviction/writeback of the requester's own line and (b) snoop-driven downgrade/invalidation of another cache's line.

## Compact CHI snoop-versus-eviction exercise

Learner answer: L2 sends SNP, C0 returns RSP, dirty data returns on DAT, and C0 may become shared or N after a read request, with shared preferred.

Score: 9/10.

Correction: The first three are correct. C0's final state is determined by the SNP/request permissions and the Compact CHI implementation; for a read, C0 need not become N and may retain/downgrade to a shared or owned-like state if allowed. N is required only when the protocol asks C0 to relinquish all relevant permission. Do not call shared universally preferable; it is one legal result when the protocol permits it.

Next topic: Compact CHI channel dependency rules and why a requester must not create deadlock by making SNP progress depend on its own REQ progress.

## Compact CHI dependency exercise

Learner correctly identified the deadlock cycle: L2 waits for C0's RSP, while C0 waits for its own REQ to complete before producing RSP. Score: 9/10.

Requested clarification: define channel dependency before continuing. Teaching note: a channel A depends on channel B when A cannot make the required progress, accept/produce its message, or complete its handshake until a specified event/progress on B occurs. This is stronger than merely saying A and B are ordered in time. The key prohibited cycle is RXSNP waiting on TXREQ while the lower level waits on the RSP/DAT needed to complete the outstanding transaction.

Review plan: spend several questions distinguishing dependency from ordinary sequencing, backpressure/resource dependence, and legal versus deadlocking dependencies before moving on.

## Compact CHI dependency clarification

Learner answer: C0 receives SNP on RXSNP and produces TXRSP; called it no dependency, but recognized the one-way temporal order and absence of reverse waiting.

Score: 8.5/10.

Correction: Under the working definition, TXRSP does depend on RXSNP because the response is generated from the received snoop. This is a legal one-way dependency. It is safe because RXSNP does not wait for TXRSP in a circular way. Distinguish “A depends on B” from “A and B form a deadlock”; a one-way dependency is normal, a cycle is dangerous.

## Compact CHI circular dependency drill

Learner answer: TXRSP depends on TXREQ; L2's completion of the outstanding REQ waits for TXRSP; this forms a cycle and must be prohibited to avoid deadlock when a SNP arrives during an outstanding request.

Score: 9.5/10.

Refinement: The cycle is `C0 TXREQ completion -> C0 TXRSP -> L2 completion/forward progress of the request`; exact implementation wording may vary, but the circular wait is the key. Compact CHI forbids an incoming SNP's progress from depending on the requester's own TXREQ progress.

## Compact CHI legal dependency drill

Learner answer: TXRSP depends on RXSNP; RXSNP does not depend on TXREQ; no cycle; immediate RSP lets L2 make progress and prevents the outstanding REQ from blocking snoop handling.

Score: 10/10.

Gate result: Compact CHI channel dependency and deadlock basics passed.

## One-page cheat sheet: Compact CHI channels and dependencies

### One-sentence definition
Compact CHI separates requests, snoops, non-data responses, data responses, and evictions into distinct channels so coherence transactions can progress without circular channel dependencies.

### Channels
- `REQ`: upstream requester starts a non-eviction request.
- `SNP`: downstream completer starts a snoop toward an upstream cache.
- `RSP`: response/status/CompAck-style message without cache-line data.
- `DAT`: cache-line data transfer; dirty snoop data and downstream read data use this channel.
- `EVT`: upstream requester starts an eviction/writeback-style request.

### Direction
```text
Upstream -> downstream: REQ, EVT
Downstream -> upstream: SNP
Responses/data can flow in the direction required by the transaction:
RSP/DAT for downstream replies or upstream snoop replies.
```

### Dirty read example
```text
C0 -> L2: REQ
L2 -> C1: SNP
C1 -> L2: RSP
C1 -> L2: DAT, newest dirty line
L2 -> C0: DAT, returned data
```

### Eviction examples
Dirty local eviction: `EVT + DAT`, then completion `RSP` as required.
Clean local eviction: `EVT`, normally no `DAT`, then completion `RSP` as required.
After successful local eviction, the requester's local permission becomes `N`.

### Dependency definition
Channel A depends on B when A cannot make required progress, accept/produce its message, or complete its handshake until B makes progress. A one-way dependency can be legal; a cycle is dangerous.

Legal:
```text
RXSNP -> TXRSP
```
The cache receives SNP and responds.

Dangerous:
```text
RXSNP -> TXREQ -> TXRSP -> RXSNP
```
A cache must not require its own outstanding REQ to complete before responding to an incoming SNP when the REQ itself may wait for that response.

### Checklist
1. Is this a REQ, SNP, RSP, DAT, or EVT transaction?
2. Which component is upstream and which is downstream?
3. Who owns the newest data?
4. Does the message carry cache-line data, or only status?
5. Is the local action a self-eviction or a snoop-driven downgrade?
6. Does any channel wait on another channel?
7. Is there a circular wait?

### Five self-test questions
1. Why does a dirty snoop need DAT in addition to RSP?
2. Why is local clean eviction EVT without DAT?
3. What is the direction difference between REQ and SNP?
4. Is `TXRSP` depending on `RXSNP` inherently a deadlock?
5. Why must RXSNP not depend on TXREQ in the dangerous case?

## Integrated review 1 (2026-10-16)

Scenario: C0 and C1 both hold X in shared read-only state; C0 wants to write.

Learner answer: MESI final C0=E, C1=I; TileLink Acquire -> Probe -> ProbeAck -> AcquireAck, C0 becomes E; Compact CHI L2 sends SNP.

Score: 8/10.

Correction: C0 wants to write, so MESI final state is `C0: M`, `C1: I`, not `E`; `E` is clean-exclusive before modification. TileLink should be described as `AcquirePerm` for an existing shared line, `Probe`, `ProbeAck`, then `Grant` (or implementation-specific grant response), with C0 gaining writable `T`, which becomes dirty after the store. `AcquireAck` is not the generic TileLink name used here. Compact CHI answer `SNP` is correct because L2 is asking C1 to inspect/downgrade/invalidate.

Active recurring error: clean-exclusive E versus modified/writeable M/T after the actual store.

## Integrated review 2 (2026-10-16)

Scenario: C0 owns newest dirty X; C1 wants to read X.

Learner answer: MESI C0 need not become I and C1 can become S; TileLink AcquirePerm -> Probe -> ProbeAck+data -> AcquireAck, C0 M->S and C1 I->S; Compact CHI SNP with TXRSP+TXDAT and C0 becomes S.

Score: 7.5/10.

Correction: MESI answer is directionally right, but C0's dirty data must be made visible below before both caches can be clean S; otherwise plain MESI cannot represent dirty shared ownership. A protocol with Owned-like state may let C0 retain dirty ownership. Since C1 has no line, TileLink should use `AcquireBlock`, not `AcquirePerm`; C0 returns `ProbeAckData`; L2 returns `GrantData`, not generic `AcquireAck`. C0 may become clean shared only after data is accounted for, or retain an implementation-specific owned/dirty-shared role. Compact CHI: L2 sends `SNP`; C0 returns `RSP` plus `DAT`; C0's final state is protocol/permission dependent and is not automatically plain S.

Active recurring errors: AcquirePerm versus AcquireBlock; GrantData versus invented AcquireAck; dirty owner versus clean shared state.

## Integrated review 3 (2026-10-16)

Scenario: C0 and C1 have clean shared X; C0 wants to write.

Learner answer: ACE AC; C1 returns B; Compact CHI SNP; C1 returns RSP; unsure when C0 gets write permission.

Score: 7/10.

Correction: ACE snoop response from C1 is `CR`, not `B`; `B` is the normal AXI write response from the interconnect to C0. Compact CHI `SNP` and clean `RSP` are correct. In both protocols, C0 may proceed only after the coherence manager has received all required snoop responses, confirmed no needed dirty data is outstanding, and completed the permission/ordering transition. In ACE the normal write transaction later completes with `B`; in Compact CHI the exact completion response depends on the transaction, but it is not the SNP response itself.

Active recurring error: ACE `CR` versus AXI `B`; snoop completion versus requester write completion.

## Integrated review 4 and ordering clarification (2026-10-16)

Learner answer: C1 gets at least S; C0 need not become I and may become S; C0 retaining latest data without exclusive write was answered M; dirty data must be probed to L2.

Score: 7.5/10.

Correction: C1 needs readable permission, often S. C0 may remain shared only after the dirty data is made clean/visible below, or may retain an Owned-like dirty-sharing state in a protocol that supports it. `M` is not the state for “dirty but no exclusive write”; in MESI M includes exclusive write permission, while MOESI's `O` is the closer concept. It is not enough to merely Probe the dirty owner: the dirty data must be transferred to the coherence manager/lower level or requester and the ownership/dirty bookkeeping must be updated.

Documentation verified: ACE IHI0022E C1-143 to C1-145 describes snoop response/data and original requester response; C6-234 to C6-241 assigns interconnect ordering, snoop issuance, response generation, and same-line sequencing rules. C6-235 explicitly defines same-line order by whether the initiating response or snoop arrives first; it also forbids sending a response before the master's CRRESP and forbids sending a same-line response before the snooped master's CRRESP. Compact CHI local PDF page 8 (PDF page 16) explicitly defines channel dependency rules. These are protocol ordering/dependency rules, not a complete definition of the CPU memory consistency model.

## ACE path review: CleanUnique selection (2026-10-16)

Scenario: C0 already has a shared line and wants unique permission before a local partial store.

Learner answer: selected CleanUnique and AR, but said CleanUnique needs to return the full cache line.

Score: 8/10.

Correction: CleanUnique is correct and uses AR. The reason is the opposite: C0 already has the cache line, so CleanUnique primarily obtains unique permission and removes/handles other copies; it normally does not return the full line to C0. C0 performs the local Store after the CleanUnique response/RACK. A dirty snooped owner may send CD to the interconnect, but that data is not necessarily returned to C0.

## ACE path review: WriteUnique selection (2026-10-16)

Scenario: C0 has no X copy and has complete write data ready.

Learner answer: WriteUnique; AW + W; B, but said B carries cache-line data.

Score: 9/10.

Correction: WriteUnique and AW+W are correct. The write data is carried on W; B carries only the write response/status, not the cache-line data. Since the scenario writes a complete cache line, ACE also has the more specific WriteLineUnique transaction, which is restricted to full-line writes; WriteUnique can cover full or partial writes.

## ACE path review: no-copy partial store (2026-10-16)

Scenario: C0 has no X copy, wants to modify only one field, and does not have a full-line write payload.

Learner answer: thought WriteLineUnique could be used, correctly said the full line must be acquired and mask-written, chose Evict, and forgot the channel.

Score: 4/10.

Correction: WriteLineUnique cannot be used because it requires the transaction to write every byte of a full cache line. This scenario needs a read-for-ownership style transaction, typically `ReadUnique`, issued on `AR`; it obtains the current full line, snoops/removes conflicting copies, returns the line on `R`, then C0 performs a masked local Store. This is not an eviction operation. Eviction means giving up an existing local line; here C0 does not yet have X.

Active ACE gaps: distinguish ReadUnique from CleanUnique, and distinguish acquisition/ownership from eviction.

## Focus change (2026-10-16)

ACE is paused by user request. Primary focus is now the local Compact CHI architecture document. ACE remains a reference topic and will not drive the next lessons.

Compact CHI progress estimate: about 30% of the planned learning path.
Completed: channel roles/directions (`EVT/REQ/RSP/SNP/DAT`), dirty-data path, local eviction versus snoop, basic transaction categories, channel dependency and deadlock reasoning, first cheat sheet.
Not yet covered: exact coherence-state model and state tables, request message encodings/flits, cacheable read/write flows from the document, no-data permission transfer, CMO, prefetch, atomic operations, snoop flow details, component Type 1-5 interfaces, protocol resource flow control/P-Credit, retry, QoS, and mapping to the Kunminghu CoupledL2 implementation.

## Compact CHI scope and state correction (2026-10-16)

Compact CHI is now the primary focus; ACE is paused.

Document-specific corrections from local Compact CHI PDF:
- Coherence state attributes are Valid/Invalid, Unique/Shared, Clean/Dirty.
- Concrete states include `I` Invalid, `SC` Shared Clean, `UC` Unique Clean, and `UD` Unique Dirty (PDF pages 16-17).
- `CleanUnique` is currently reserved and equivalent to `MakeUnique` in this Compact CHI draft; it is not the same as ACE's CleanUnique flow.
- `MakeUnique` is a no-data permission transfer intended only when the entire cache line will be overwritten; other copies are invalidated without data writeback.
- `ReadShared` obtains data for a Load and may end in SC, UC, or UD.
- `ReadUnique` obtains data for a Store and may end in UC or UD; if the requester already has SC and retains it/data during ReadUnique, the transaction may return only a new state without data.
- `WriteBackFull` writes back an entire UD line and ends in I.
- `Evict` reports eviction of a clean line and ends in I.

Compact CHI progress estimate updated: about 35% of the planned learning path. Channels/dependencies and basic EVT/SNP reasoning are covered; state model and request-type tables are now starting. Detailed flits, transaction flows, component types, CMO/prefetch/atomics, P-Credit/retry, QoS, and implementation mapping remain.

## Compact CHI state question 1

Learner answer: chose ReadShared; correctly explained ReadShared is for Load and ReadUnique is for Store; said ReadShared can end in SC or UC.

Score: 8/10.

Correction: The state mapping is correct: ReadShared may end in SC, UC, or UD per the document. But the scenario explicitly said C0 intends to modify X after obtaining it, so the preferred transaction is `ReadUnique`, not ReadShared. ReadUnique is the read-for-Store transaction and ends in UC or UD. If the intent were only a Load with no planned Store, ReadShared would be correct.

## Compact CHI state question 2

Learner answer: SC requester uses ReadUnique; need not necessarily receive the full line again if it retained SC/data; final state UC; after Store state UD.

Score: 10/10.

Gate result: ReadShared versus ReadUnique and SC -> UC -> UD state transition passed.

## Compact CHI state question 3

Learner answer: A = ReadUnique because old line is needed for partial update; B = MakeUnique because the full line is overwritten and old data is unnecessary.

Score: 10/10.

Gate result: MakeUnique versus ReadUnique distinction passed.

## Compact CHI state question 4

Learner answer: A = ReadOnce, ends I and does not retain coherence state; B = ReadShared, retains state and may end SC/UC/UD.

Score: 10/10.

Refinement: For an ordinary read-only caching intent, SC is the natural expected state, but the Compact CHI table permits SC, UC, or UD as acceptable final states for ReadShared. The learner correctly used the document's allowed-state set.

Gate result: ReadOnce versus ReadShared versus ReadUnique passed.

## Compact CHI state/request question 5

Scenario: C0 is UD and evicts X due to capacity replacement.

Learner answer: WriteBackFull; EVT and DAT; DAT carries dirty data; final C0=I.

Score: 10/10.

Gate result: Compact CHI state/request review passed: ReadOnce, ReadShared, ReadUnique, MakeUnique, WriteBackFull, and Evict.

## One-page cheat sheet: Compact CHI states and request types

### State attributes
- Valid/Invalid: whether the component has the line.
- Unique/Shared: whether effective data may exist elsewhere and whether the component may write.
- Clean/Dirty: whether the component is responsible for eventual writeback.

### Main states
- `I`: Invalid.
- `SC`: Shared Clean, readable and shareable, no writeback responsibility.
- `UC`: Unique Clean, only possible valid data holder, writable, not dirty.
- `UD`: Unique Dirty, only possible valid data holder, writable, must eventually write back unless invalidated by an allowed operation.

### Read requests
- `ReadOnce`: one-time snapshot; requester ends `I`.
- `ReadShared`: Load; requester may end `SC`, `UC`, or `UD`.
- `ReadUnique`: read for a following Store; requester ends `UC` or `UD`. If requester already has `SC` and retains data through the transaction, a new state may be returned without data.

### Permission-only / full overwrite
- `MakeUnique`: no old data read; only valid when the entire line will be overwritten; invalidates other copies; ends `UD`.
- Compact CHI draft `CleanUnique` is reserved and equivalent to `MakeUnique`; do not import ACE CleanUnique semantics.

### Eviction/writeback
- `WriteBackFull`: starts from `UD`, uses `EVT + DAT`, sends the full dirty line, ends `I`.
- `Evict`: clean-line eviction, uses `EVT` without `DAT`, ends `I`.

### Selection checklist
1. Does the requester need old bytes? If yes, use a read transaction.
2. Will the requester Store? If yes, use `ReadUnique` unless the whole line is overwritten with known data.
3. Is every byte overwritten? If yes, `MakeUnique` may avoid reading old data.
4. Is the local line dirty and being released? `WriteBackFull`.
5. Is the local line clean and being released? `Evict`.
6. What state is allowed at transaction start and end?

## Compact CHI Feynman gate

Topic compressed: state attributes and request selection. Feynman feedback is now due before detailed request flows.

## Compact CHI Feynman gate: partial versus full overwrite

Learner explanation: changing only part of a bookshelf requires taking out/remembering all other books first; replacing every book means old contents need not be known.

Score: 10/10.

Feynman result: clearly explained why a partial update needs the old full line and why a full-line overwrite can avoid reading old data. State/request topic passed. Next topic: detailed Compact CHI cacheable-read transaction flows from the local document.

## Compact CHI cacheable-read question 1

Scenario: C0=I, wants to Load X, retain X for future Loads, no planned Store.

Learner answer: ReadShared; allocating cacheable read; final state S; L2 uses TXDAT.

Score: 9/10.

Correction: The Compact CHI state name is `SC` (Shared Clean), not generic MESI `S`. ReadShared and allocating read are correct. L2 as downstream Completer sends data on its TXDAT/DnDAT direction; C0 receives it on RXDAT/Upstream-facing receive direction.

## Compact CHI cacheable-read question 2

Learner answer: ReadOnce; non-allocating transient cacheable read; no Directory/Snoop Filter allocation; final state I.

Score: 10/10.

Gate result: ReadOnce versus ReadShared and allocating versus non-allocating Cacheable Read passed.

## Compact CHI ReadUnique question 1

Scenario: C0=I wants Store X; C1=SC.

Learner answer: ReadUnique; L2 sends SNP to invalidate C1; clean C1 sends no DAT; C0 ends UC; after Store C0 becomes UD.

Score: 10/10.

Refinement: The Snoop opcode can be represented as `SnpToInvalid` for the required invalidation in this scenario. All state/data reasoning is correct.

## Compact CHI ReadUnique with dirty owner

Scenario: C0=I, C1=UD, C0 wants to Store only one field of X.

Learner answer: MakeUnique; a writeback-capable Snoop; RSP+DAT; DAT carries dirty line; C1 becomes I.

Score: 8/10.

Correction: Because only one field is modified, C0 needs the old full line, so the requester must use `ReadUnique`, not `MakeUnique`. MakeUnique is only for full-line overwrite where old data is unnecessary. The rest is correct at the abstract level: L2 can use `SnpToInvalid`; C1 returns upstream `RSP` plus `SnpRespData` on `DAT`; DAT carries the newest dirty full line; C1 ends `I` and C0 can receive the line and reach UC before its Store.

## Compact CHI Snoop opcode question 1

Scenario: C0=I wants to Read X; C1=UD owns newest dirty data; C1 need not fully invalidate.

Learner answer: choose SnpToShared; C1 becomes shared; return DAT because C1 is UD.

Score: 10/10.

Document-level refinement: `SnpToShared` from UD can end at `SC` and returns `SnpRespData_SC_PD` (state/data response with dirty data indication). This lets C0 receive the newest data and obtain a readable state while C1 no longer remains Unique/Dirty.

## Compact CHI Snoop opcode question 2

Learner answer: A = SnpToShared; B = SnpToClean.

Score: 10/10.

Gate result: Snoop target-state semantics passed: ToInvalid removes the line, ToShared permits shared retention without Unique, ToClean removes Dirty responsibility while allowing at least Unique Clean.

## Compact CHI Snoop response question 3

Scenario: C1=SC, L2 sends SnpToInvalid.

Learner answer: C1 ends I; sends only RSP; no DAT because the line is clean.

Score: 10/10.

Gate result: Snoop response selection for clean versus dirty states passed.

## Compact CHI Snoop response question 4

Scenario: C1=UD, L2 sends SnpToClean.

Learner answer: C1 cannot remain Dirty; final at least UC; DAT required; DAT carries C1's dirty data.

Score: 10/10.

Document-level result: SnpToClean requires the target to be at least Unique Clean and not Dirty. A UD target must provide dirty data via SnpRespData so the dirty responsibility can be removed/handled.

Next topic: Compact CHI cacheable WriteUniqueFull transaction and NonCopyBackWrData.

## Compact CHI WriteUniqueFull question 1

Scenario: C0=I, has the complete new line, wants to write X without retaining a local copy.

Learner answer: MakeUnique; initial TXREQ; L2 returns RXRSP/RXDAT and DBID unclear; C0 sends RXDAT; final I.

Score: 4/10.

Correction: The correct transaction is `WriteUniqueFull`, not MakeUnique, because the request carries the complete new line and does not retain a requester cache state. C0 sends the request on its TXREQ/REQ direction. L2 sends a downstream-to-upstream RSP `CompDBIDResp`, not an RXDAT data response, before C0 may send data. DBID associates the later write-data flit with this request. C0 then sends upstream-originated DAT `NonCopyBackWrData` on its TXDAT/UpDAT direction; C0 receives on RXDAT, so RXDAT is the wrong direction here. Final C0 state is I.

Active gap: distinguish message type (RSP/DAT), channel direction (TX/RX relative to component), and transaction ID purpose (TxnID versus DBID).

## Compact CHI write question 2

Scenario: C0=I writes a full line to a clearly Non-Cacheable address; no other cache participates.

Learner answer: WriteNoSnpFull; no SNP; NonCopyBackWrData; final I.

Score: 10/10.

Gate result: distinguished WriteNoSnpFull from WriteUniqueFull and retained direction/data/final-state understanding.

## Compact CHI CMO question 1

Scenario: C0=UD wants dirty data cleaned while retaining the local line.

Learner answer: CleanShared; final SC; MakeInvalid is wrong because it does not write back dirty data.

Score: 9/10.

Correction: CleanShared and the MakeInvalid reasoning are correct. Per the Compact CHI table, `CleanShared` from UD most directly ends at `UC` (Unique Clean), because the line remains uniquely held but no longer Dirty. It may become shared only under a different sharing flow; do not replace the document's `UC` result with generic SC.

## Compact CHI CMO question 2

Scenario: C0=UD wants dirty data cleaned/written back and will not retain X.

Learner answer: CleanInvalid; final I; CleanShared is wrong because it retains X.

Score: 10/10.

Gate result: CleanShared versus CleanInvalid distinction passed.

## Compact CHI CMO question 3

Scenario: C0=UD, system separately guarantees newest data is safe, and C0 only needs to drop the local line without this CMO writing it back.

Learner answer: MakeInvalid; final I; no DAT; dangerous because dirty data would otherwise be lost.

Score: 10/10.

Gate result: MakeInvalid and the danger of discarding dirty data passed.

## One-page cheat sheet: Compact CHI CMO

- `CleanShared`: clean Dirty responsibility and retain the line; `UD -> UC`.
- `CleanInvalid`: clean/write back Dirty data and invalidate the local line; `UD -> I`.
- `MakeInvalid`: invalidate without requiring this operation to write back Dirty data; final `I`; use only when data safety is guaranteed elsewhere.
- `CompCMO`: completion response for CMO; receiving it means the Completer guarantees the requested CMO result for the specified coherent scope, subject to the document's I/O-coherent qualification.
- Decide first whether the local line remains; then decide whether Dirty data must be cleaned. Never use MakeInvalid casually on the only UD copy.

## Feynman feedback status

Learner chose to skip the CMO Feynman explanation for now. Record as pending rather than failed; revisit during a later spaced review. Continue Compact CHI main line with prefetch transactions.

## Compact CHI prefetch question 1

Learner asked whether StashShared/StashUnique are software prefetches. Clarification: they are protocol-level cross-layer prefetch transactions; the initiator may be software-visible hardware, a hardware prefetcher, or another component. The protocol does not require a software origin.

Answer: StashShared; final requester state I; feedback field unknown; feedback message unknown.

Score: 8/10.

Correction: If feedback is requested, set `ExpCompStash=1`; the Completer may return `CompStash`. The returned CompStash timing does not by itself prove the whole prefetch is complete; interpret its contents and transaction state.

## Compact CHI component-type correction (2026-10-16)

Learner asked whether 100% progress would mean being able to understand/write a DCache-L2 Compact CHI interface, and correctly noted that Type 1-5 had not been taught before the quiz.

Correction: The Type quiz was premature. Teach the component categories before testing them.

Progress meaning: 100% of the current learning path should mean the learner can read the Compact CHI architecture, classify components/transactions, trace the main flows, identify required fields/IDs/state transitions, and draft a protocol-level DCache-L2 interface. It does not by itself guarantee production RTL: that also requires implementation choices, exact flit widths/handshakes, buffering, retry/credit logic, timing closure, assertions, and verification.

Type categories introduced for next lesson:
- Type 1 Fully coherent: supports all transaction classes and maintains complete local coherence state; typical L1 D-cache.
- Type 2 Read-only coherent: supports coherent reads/eviction/prefetch but cannot receive Unique/write permission; typical L1 I-cache or coherent TLB.
- Type 3 Non-coherent: no local coherence state; supports non-cacheable accesses, limited reads/writes, and prefetch; typical MMIO controller.
- Type 4 Read-only non-coherent: non-coherent read-only requester, limited read/prefetch; typical non-coherent PTW/prefetcher.
- Type 5 Lower-level prefetcher: only StashShared/StashUnique; no normal data/coherence request ownership.

## Compact CHI component type check 1

Learner summary: Type 1 can read and write; Type 2 only reads.

Score: 9/10.

Refinement: Core distinction is correct. Type 2 is read-only coherent: it cannot obtain Unique/write permission, but it may also support Evict and StashShared/StashUnique operations in addition to coherent reads. Type 1 supports the full transaction set and complete local coherence state.

## Compact CHI component type check 2

Learner classified MMIO controller as Type 3 and non-coherent read-only PTW as Type 4; asked for PTW definition and the core Type 3/4 distinction.

Score: 10/10.

Teaching note: PTW means Page Table Walker, hardware that walks page tables after a TLB miss to translate virtual addresses to physical addresses. Type 3 is non-coherent and can support non-cacheable reads and writes; Type 4 is read-only non-coherent and does not support writes. Neither maintains full coherent cache state.

## Compact CHI component type check 3

Learner answer: Type 4; Type 2 maintains coherence and can read.

Score: 9/10.

Refinement: Type 4 is correct because the component does not maintain full coherent state and cannot obtain Unique. Type 2 is also read-only, but it is read-only coherent and may retain Shared state. Type 4 can issue limited cacheable reads such as ReadOnce but does not participate as a coherent cache holding Shared state.

## Compact CHI component type check 4

Learner answered Type 3 because ReadNoSnp/ReadOnce implied MMIO.

Score: 5/10.

Correction: The capability set is Type 2, not Type 3. Type 2 supports ReadNoSnp, ReadOnce, ReadShared (without Unique), Evict, StashShared/StashUnique, and SnpMakeInvalid. Type 3 supports non-coherent reads/writes but does not support ReadShared coherent retention or coherent Snoop handling. ReadNoSnp is not unique to MMIO; it is also supported by Type 2.

Active gap: classify by the complete capability set, especially ReadShared and SnpMakeInvalid, rather than by one transaction name.

## Scope adjustment (2026-10-16)

Learner requested skipping detailed Type 1-5 classification and focusing on the Compact CHI protocol interface between an L1 DCache and L2. Keep only a compact reference: L1 DCache is typically Type 1; L2 is the downstream Completer; other types are out of the primary path.

Final type quiz correction: the capability set with WriteNoSnpPtl/Full and WriteUniqueFull but no ReadShared/coherent Snoop is Type 3, because it is non-coherent but supports writes. Type 4 is read-only non-coherent.

Next teaching path: Type 1 DCache<->L2 interface, REQ/RSP/DAT/SNP/EVT roles, cacheable ReadShared/ReadUnique, WriteUniqueFull, WriteBackFull/Evict, IDs, state transitions, and then flow-control/retry needed for a practical interface.

## DCache Compact CHI load-miss question 1

Scenario: L1 DCache X=I, processor executes Load X and does not plan to modify.

Learner answer: ReadShared; TXREQ; RXDAT; final Shared; MSHR.

Score: 9.5/10.

Correction: Compact CHI final state should be `SC` (Shared Clean), not generic Shared/S. The channel and structure answers are correct. In a real interface the MSHR also tracks the expected RXRSP/Comp completion, not only RXDAT; the question asked specifically for the data channel.

## DCache Compact CHI store-miss question 1

Scenario: L1 DCache X=I; processor writes one field.

Learner answer: ReadUnique; ReadShared only gives SC/no write permission; TXREQ; RXDAT; final UC before Store; UD after Store.

Score: 10/10.

Gate result: DCache Load miss versus Store miss and I->UC->UD path passed.

## DCache Compact CHI snoop question 1

Scenario: L1=UD; L2 sends RXSNP SnpToInvalid.

Learner answer: send TXRSP and TXDAT; TXDAT carries dirty data; final I; cannot discard after only TXRSP because data could be lost.

Score: 9.5/10.

Correction: All core reasoning is correct. Compact CHI's Snoop flow ends after the required SnpResp/SnpRespData messages have been sent; it is not necessarily a separate downstream response after TXDAT. The L1 must retain the data/state until the TXDAT transfer/handshake is accepted and the snoop transaction's completion conditions are met, then transition UD->I. TXRSP alone is not enough.

## DCache Compact CHI snoop question 2

Scenario: L1=SC; L2 sends RXSNP SnpToInvalid.

Learner answer: TXRSP yes; TXDAT no; final I; explanation reversed clean/dirty data requirement.

Score: 9/10.

Correction: SC is clean, so only TXRSP/SnpResp is needed and final state is I. UD is dirty, so UD requires TXRSP plus TXDAT. The difference is exactly whether L1 owns newer data that must be transferred before invalidation.

## DCache Compact CHI snoop question 2

Scenario: L1=SC; L2 sends RXSNP SnpToInvalid.

Learner answer: send TXRSP; no TXDAT; final Invalid; difference from UD is that SC is clean and needs no data return.

Score: 10/10.

Gate result: DCache clean versus dirty snoop response passed. Expected abstract response is TXRSP/SnpResp_I and SC->I.

## DCache Compact CHI writeback question 1

Scenario: L1=UD and capacity replacement releases X.

Learner answer: TXEVT; Evict; wait for an EvictResp; send data on DAT; final I.

Score: 6.5/10.

Correction: The direction and final state are right, but UD requires `WriteBackFull`, not `Evict`. L1 sends `TXEVT/EVT WriteBackFull`, waits for `DBIDResp` or combined `CompDBIDResp`, then sends `TXDAT/UpDAT CopyBackWrData` carrying the full dirty cache line. `Evict` is for a clean line and carries no data. The completion response is `Comp`, not a generic EvictResp.

Active gap: distinguish clean Evict from dirty WriteBackFull, and distinguish response names DBIDResp/CompDBIDResp/Comp.

## DCache Compact CHI writeback repair question

Learner answer: A clean SC eviction uses Evict without TXDAT; B dirty UD eviction uses WriteBackFull with TXDAT.

Score: 10/10.

Gate result: clean Evict versus dirty WriteBackFull distinction passed.

## DCache Compact CHI WriteUniqueFull question 1

Learner asked when a DCache would use WriteUniqueFull, then answered: WriteUniqueFull; TXREQ; wait RXRSP/DBID; Q4 omitted the data channel/message; final Invalid.

Score: 9/10.

Correction: WriteUniqueFull is useful for full-line non-temporal/streaming stores or other cases where the complete line is available and the DCache does not want to allocate/retain it; exact use is an implementation policy. The sequence is TXREQ -> RXRSP CompDBIDResp/DBIDResp -> TXDAT NonCopyBackWrData; final state I. It is not the normal path for a partial store, where ReadUnique is needed.

## DCache Compact CHI path question 2

Learner answer: A=ReadUnique because partial update needs old bytes and later reuse benefits from retaining the line; B=WriteUniqueFull because full-line overwrite does not need old data and no later reuse means no local allocation.

Score: 10/10.

Progress update: Compact CHI conceptual path about 55%; DCache<->L2 interface path about 40%; overall cache-coherence goal about 40%. Remaining primary work: detailed request/response/flit fields, exact DnRSP/UpRSP/DnDAT/UpDAT mapping, cacheable write and writeback timing, concurrent requests/MSHR/ProbeQueue, DBID/TxnID tracking, retry/P-Credit, and implementation mapping to Kunminghu DCache/CoupledL2.

## DCache ID tracking question 1

Scenario: outstanding A ReadShared X TxnID=3 and B ReadUnique Y TxnID=7; B response arrives first.

Learner answer: use TxnID; look up MSHR/MissEntry; FIFO response matching could deliver B to A and A to B.

Score: 9/10.

Correction: TxnID matching and MSHR/MissEntry are correct, and the reordering hazard is correctly explained. TxnID identifies a transaction within/requested by a requester; it does not by itself identify which sender node. `SrcID` identifies the source node and `TgtID` the target node. A complete lookup may use channel direction plus source/target and TxnID; DBID is for later data-buffer association.

## Compact CHI ID clarification (2026-10-16)

Learner asked whether DBID means selecting the MSHR entry and requested a detailed definition of TxnID/DBID/SrcID/TgtID.

Document-precise teaching correction: DBID is not simply an MSHR index. TxnID identifies the original requester transaction; DBID is allocated/returned by the Completer for the return/data transaction context. The DnRSP/DnDAT fields carry the original transaction identity plus DBID where applicable; UpRSP/UpDAT use a TxnID field whose width is DBID_Width, effectively using the returned DBID to associate later upstream response/data (for example CopyBackWrData or CompAck). In an implementation, the DCache may map DBID to a MissEntry/writeback entry, but that mapping is local design, not the semantic definition.

For ReadShared CompData, primary original-request lookup is by TxnID (with SrcID/TgtID and address/DBID checks as needed); for WriteBackFull CopyBackWrData, the returned DBID is the critical association before sending data.

## DCache concurrent RXDAT/RXSNP lesson (2026-10-17)

Learner requested explanation rather than answering the concurrent-event question.

Teaching content: RXDAT and RXSNP are independent incoming transaction classes. RXDAT is matched to an outstanding requester entry using the original request identity (TxnID, plus source/target checks and DBID where required), then data beats are assembled using DataID. RXSNP is matched using the Snoop transaction identity and cache-line address; its TxnID belongs to the downstream-issued Snoop namespace and is not the same as the original request TxnID. The DCache consults the tag/state array and any MissEntry/MSHR for the same line. Different addresses can progress independently. Same-address conflicts must be serialized by a transient-state controller: do not complete a requester operation or discard/modify data until the Snoop and any data dependencies are resolved. A dirty resident line responds with TXRSP+TXDAT; a clean line responds with TXRSP only. If a fill/ReadUnique is in flight for the same line, the controller must apply the implementation's ordering rule and may stall, merge, or discard stale downstream data as required by the Compact CHI transaction state.

## DCache concurrent RXDAT/RXSNP question

Learner summarized RXDAT as refill and RXSNP as probe, and answered: cannot return I solely from Tag miss; must check MSHR; same-address transient conflict; cannot ignore RXSNP because it may affect the in-flight refill/ownership and must be ordered.

Score: 9/10.

Refinement: RXDAT often represents refill/response data for an outstanding request, but more generally is downstream data; RXSNP is a snoop/probe request. For an in-flight same-line request, the DCache must not independently complete both operations. It must apply the protocol/implementation ordering: stall, cancel/merge, or complete then apply the Snoop as appropriate, and ensure the final state and response ordering are legal. The reason is not necessarily that the later Snoop must see the refilled line, but that the in-flight request and Snoop compete for the same line's ownership/data.

## DCache address-versus-transaction matching question

Given MSHR[5] line_addr=X ReadUnique target UC and ProbeQueue[9] line_addr=X SnpToInvalid.

Learner answer: they are not the same transaction; unsure whether same line, line matching field, and state-machine matching fields.

Score: 5/10.

Correction: They are different transactions but target the same cache line because both line_addr values are X. Same-line matching uses the physical cache-line address (address aligned by removing byte/word offset bits), implemented as tag+set or line address. Original requester state-machine matching uses the request's TxnID/DBID and MSHR entry; Snoop state-machine matching uses the Snoop TxnID plus ProbeQueue entry. A cross-path conflict is found by comparing the two entries' line_addr, not by treating the IDs as equal.

## DCache address conflict question 2

Given MSHR[5] line X ReadUnique and ProbeQueue[9] line Y SnpToInvalid.

Learner answer: no conflict; can process in parallel because addresses differ; unsure table lookups.

Score: 8.5/10.

Correction: RXDAT for X is matched by its original TxnID to MSHR[5]. RXSNP for Y is matched by its Snoop TxnID to ProbeQueue[9], while the line address is used to access Tag/state and check conflicts. Different addresses permit protocol-level parallelism, subject to implementation resource conflicts such as a shared tag/data bank.

## DCache same-line transient question 2

Scenario: MSHR[5] has X ReadUnique target UC; RXSNP targets X SnpToInvalid; Tag has no X.

Learner answer: cannot answer only from Tag miss; check MSHR for same address; cannot install UC because the ReadUnique data is not yet available; unsure what must be unified.

Score: 8/10.

Correction: First three are substantially correct. Even after RXDAT arrives, L1 cannot commit UC until the pending Snoop/ordering is resolved, because SnpToInvalid may require the line to end I. The transient controller must unify (a) the ordering of ReadUnique and Snoop, (b) whether data must be retained/forwarded/discarded, (c) the final cache state, and (d) the exact TXRSP/TXDAT/RXRSP completion obligations. It cannot let the two state machines independently commit contradictory states.

## DCache transient wording clarification (2026-10-17)

Learner asked what “RXSNP has not completed” means. Clarification: L2 sends RXSNP to L1; L1 must answer via TXRSP and, for dirty data, TXDAT. “RXSNP not completed” means L1 has received/accepted the Snoop but its required response handshake/data transfer has not finished. This is distinct from the original ReadUnique RXDAT arriving from L2.

Teaching answer: early RXDAT may be buffered in a refill/data buffer and associated with MSHR[5]; it must not be committed as final UC while the same-line SnpToInvalid response/order is unresolved. Final state is decided only after the relevant RXSNP/TXRSP/TXDAT and ReadUnique RXDAT/RXRSP dependencies are resolved.

## DCache channel-direction confirmation

Learner correctly described from L1 perspective: RXDAT is L2->L1 data (e.g. CompData/refill); RXSNP is L2->L1 Snoop; TXRSP is L1->L2 Snoop/status response; TXDAT is L1->L2 data, including dirty SnpRespData when required.

Score: 10/10.

Refinement: TXRSP is not merely an acknowledgment of receipt; its message can encode the resulting Snoop state/response. TXDAT's payload meaning depends on context: SnpRespData for a Snoop, CopyBackWrData for WriteBackFull, or other upstream data message.

## DCache active-store versus Snoop question

Scenario: L1 X=SC; processor Store wants ReadUnique/UC; L2 sends SnpToInvalid for X.

Learner answer: active path SC->UC; Snoop path SC->I; conflict; cannot expose UC while telling L2 SnpResp_I because L1 and L2 would disagree.

Score: 10/10.

Gate result: recognized direct conflict between local permission upgrade and incoming invalidating Snoop. Next: arbitration/serialization choices and replay behavior for a local Store when Snoop wins.

## DCache active-store versus Snoop-priority question

Learner asked for DCache mainline duration and engineering start point. Answer attempted: Snoop first, Store replay, then request data; final UD; Store cannot complete; replay request later.

Score: 6.5/10.

Correction: With Snoop-priority and X=SC, L1 immediately returns `TXRSP/SnpResp_I` (no DAT), X becomes `I`, and the current Store cannot complete. The processor/store is replayed. On the replay, L1 sees I and issues a new `ReadUnique` via TXREQ; after receiving data/permission it reaches UC, then the actual Store changes UC->UD. Thus UD is the eventual post-replay state, not the final state of the initial Snoop conflict. The L1 does not return a generic data response to L2 for the clean Snoop.

Progress plan: start engineering-oriented work now with protocol tables and a transaction-level interface; after the remaining ID/state/queue/flow-control lessons, draft a DCache-L2 Compact CHI interface and transient-state machine. Estimated conceptual path 8-12 more sessions / 15-25 hours; draft RTL-level design 25-40 hours total; production-quality implementation requires substantially more verification and microarchitectural work.

## DCache state summary question

Learner answer: I has no line/no write/no writeback; SC has line/no write/clean/no writeback; UC has line/write/clean/no writeback; UD has line/write/dirty/writeback required.

Score: 10/10.

Gate result: Compact CHI state attributes are understood and ready to use in the engineering tables.

## Workflow state audit (2026-10-17)

Persistent record currently contains:
- Goal and current competency/progress estimates.
- Learning ladder, resource filter, ten-session core plan, and selected local source documents.
- Concept summaries for coherence, MSI/MESI, TileLink, ACE (paused), and Compact CHI.
- Question/answer/score/correction entries through the DCache state summary and concurrent RXDAT/RXSNP lessons.
- Knowledge gaps and recurring errors: E versus M/T, SC/UC/UD precision, ACE CR versus B (paused), TXREQ/TXDAT/RX directions, TxnID versus DBID, same-line transient arbitration.
- Topic cheat sheets for coherence/TileLink and Compact CHI channels/dependencies, states/request types, and CMO.
- Feynman transcript for the single-writer rule and partial-versus-full overwrite; CMO Feynman explanation remains pending because the learner skipped it.
- Review triggers after 2-3 new concepts and at topic gates.

Workflow status:
- Step 1 Learning ladder: present; gate tasks still need a more explicit DCache engineering gate table.
- Step 2 Resource filter: present; exact local paths for some listed docs and section-level reading map can be refined later.
- Step 3 Core plan: present; sessions are being executed out of order in response to the learner's focus change.
- Step 4 Examiner loop: active and current.
- Step 5 Cheat sheets: active; add a DCache-L2 interface sheet after the next transaction block.
- Step 6 Feynman: partially complete; revisit the skipped CMO explanation during spaced review.

Next review trigger: after 2-3 more DCache interface concepts, review I/SC/UC/UD, TxnID/DBID, and clean-versus-dirty Snoop responses before drafting the first interface table.

## DCache MSHR Load/Store merge lesson (2026-10-17)

Learner requested an explanation of Load/Store merge conditions rather than answering the scenario.

Local DCache document rules taught: for same line A/B, if the existing MissEntry A is a Load and its downstream Acquire/TXREQ has not handshaken, a new Load or Store B may merge and be sent under the same miss. If the Acquire/TXREQ has handshaken but no Grant/GrantData or no data has yet been forwarded to the LoadQueue, a new Load B may merge; a new Store B generally cannot merge. If the same-line entry is in a later/unsafe phase, reject/replay rather than merge. A different line mapping to the same cache slot may also be rejected due to set/way/resource conflict.

Reason: multiple Loads need the same line and can share the eventual refill; a Store needs stronger ordering and writable permission, so it cannot be silently attached after an ownership request is already in flight unless the microarchitecture explicitly supports that transition.

## DCache MSHR merge check

Scenario: MSHR[5] has X Load, TXREQ not yet handshaken; then Load X and Store X arrive.

Learner answer: both can merge; request can be upgraded to ReadUnique.

Score: 10/10.

Refinement: The merged entry must retain both demand types and ordering/data requirements; the downstream request should be ReadUnique if the Store requires ownership. The Load can be satisfied from the same refill, then the Store completes after UC is obtained.

## DCache MSHR merge check after TXREQ

Scenario: MSHR[5] X ReadShared TXREQ handshaken, RXDAT pending; new Load X and Store X arrive.

Learner answer: Load can merge; Store cannot; Store stays in Store Buffer for replay; ReadShared ends SC; Store later needs ReadUnique to obtain write permission and invalidate other sharers.

Score: 10/10.

Gate result: pre-handshake versus post-handshake merge rules passed.

## DCache same-set resource conflict lesson (2026-10-17)

Learner requested explanation of different-line same-set conflicts.

Teaching content: Y cannot merge into MSHR[5] for X because merging is primarily for the same cache line; Y is a separate transaction. Y may be temporarily rejected/stalled/replayed if its set/way/data/tag resources conflict with X's refill or replacement. Different lines can conflict because a set-associative cache shares Tag/Meta RAM ports, Data RAM banks/ports, replacement-way logic, and pipeline stages. This is an internal microarchitectural/resource conflict, distinct from a coherence permission conflict. Protocol-level transactions can be independent while the DCache still serializes them internally.

## DCache conflict classification

Learner classified ReadUnique X versus SnpToInvalid X as protocol conflict, and RefillPipe Set 3 versus MainPipe Set 3 Y as resource conflict.

Score: 10/10.

Gate result: distinguished coherence transaction conflicts from internal set/RAM/pipeline resource conflicts.

## DCache interface table extension and Store row

Learner requested adding software prefetch to the interface table. Store row answer: TXREQ; L2 may send RXSNP SnpToInvalid; L1 receives RXDAT; interim UC; after Store UD.

Score: 9/10.

Refinement: the Snoop opcode spelling is `SnpToInvalid`; the incoming data message is `RXDAT/CompData`. Add prefetch rows: `TXREQ/StashShared` or `TXREQ/StashUnique`, optional `RXRSP/CompStash` when `ExpCompStash=1`, and requester state normally remains unchanged (including I for a Type 1 requester in the local table). Protocol does not distinguish software-triggered and hardware-triggered prefetch at the transaction channel level.

## DCache Compact CHI prefetch interface question

Scenario: L1=I, wants to prefetch shared X before an actual Load, and requests feedback.

Learner answer: TXREQ; forgot request/feedback field/message; said final SC.

Score: 4/10.

Correction: Use `TXREQ` with `StashShared`; set `ExpCompStash=1`; L2 may return `RXRSP/CompStash`. The prefetch does not necessarily allocate/modify the requester's coherence state; for this scenario L1 can remain `I`. Do not confuse StashShared with ReadShared: ReadShared is an allocating Load request and can end SC, while StashShared is cross-layer prefetch and its completion feedback does not imply the requester now owns SC.

Active gap: keep prefetch semantics separate from cacheable read semantics; remember ExpCompStash -> CompStash.

## DCache Compact CHI prefetch distinction repair

Learner answer: ReadShared + CompData leads C0 to SC; StashShared + CompStash leaves C0 I.

Score: 10/10.

Gate result: distinguished allocating cacheable read from non-state-changing cross-layer prefetch.

## DCache Compact CHI response/data message question

Learner answer: CompData is L2->L1 with cache-line data for a read; SnpRespData is L1->L2 with data after a Snoop; CopyBackWrData was forgotten.

Score: 8.5/10.

Correction: A and B are correct. `CopyBackWrData` is L1/upstream -> L2/downstream data for a `WriteBackFull` eviction of a dirty line. Distinguish it from `NonCopyBackWrData`, which carries direct write data for WriteNoSnp/WriteUniqueFull and does not allocate a requester copy.

## DCache Compact CHI data message distinction

Learner answer: A=CopyBackWrData; B=NonCopyBackWrData.

Score: 10/10.

Gate result: distinguished writeback of an existing dirty line from direct full-line write without requester allocation.

## DCache multi-beat DAT question

Scenario: 64B line, Data_Width=16B.

Learner answer: 4 beats; TxnID alone is insufficient (initially unsure); DataID identifies beat position.

Score: 9/10.

Correction: 4 beats and DataID are correct. TxnID/DBID identifies which transaction/data context; DataID identifies which beat within the line. DCache uses both to place data into the correct refill/writeback buffer offset and tracks all beats before committing state.

## DCache multi-beat receive question

Scenario: 64B line, 16B Data_Width, received DataID 0,2,3; missing DataID 1.

Learner answer: line not complete; cannot commit UC; cannot wake Load; did not know progress tracking.

Score: 8.5/10.

Correction: Use a received-beat bitmap, e.g. `received_mask=4'b1101` if bit i represents DataID i; full refill only when `received_mask==4'b1111` (or count==4 plus validity checks). Do not commit UC or install the line as fully valid before all required beats and ordering conditions are complete. Load wakeup is implementation-dependent: if the requested word's beat is present and critical-word-first/forwarding is supported, the Load may be woken early; the local Kunminghu DCache document says the first GrantData beat can be forwarded to LoadQueue. If the requested beat is missing, wait. Full refill and state commit still wait for all beats.

## DCache critical-word-first and implementation notes (2026-10-18)

Learner asked for the definition of critical-word-first and DCache implementation cautions.

Exercise: 64B line, 16B beats; requested Load is DataID=2; received IDs 0,2,3; missing 1. Learner answered: early wakeup yes; full refill no; UC no; wait ID1; mask 1011.

Score: 9/10. With the agreed convention `received_mask[DataID]` (bit0=DataID0), the mask is `4'b1101` for IDs 0,2,3. `1011` would represent IDs 0,1,3 under that convention. If an implementation displays MSB as DataID0, the visual string changes, so the convention must be documented.

Critical-word-first: when a miss returns a multi-beat line, forward the beat containing the processor's requested word as soon as it arrives, before the rest of the line is refilled. It can reduce load-use latency but does not permit final line-valid/state commit until all beats and coherence/order conditions are satisfied.

DCache implementation cautions to remember: line address/tag/index/offset discipline; MSHR merge/reject rules; TxnID/DBID/SrcID/TgtID/DataID tracking; beat bitmap and data buffer; critical-word forwarding; refill/writeback/snoop arbitration; same-line transient ordering; set/RAM port conflicts; dirty data retention until TXDAT handshake; Tag/Meta validity only after safe commit; Store replay; replacement and WritebackQueue capacity; multi-beat backpressure; Retry/P-Credit; reset/error/poison handling; assertions for no-two-writers, no-lost-dirty-data, response-to-entry matching, and eventual progress.

## RefillEntry structure exercise (2026-10-18)

Scenario: L1=I, partial-field Store X, ReadUnique already issued with TxnID=7, 64B line, 16B/128-bit DAT beats, requested beat DataID=2.
Learner answer: request_type unknown; target_state unknown; expected_beats=4; critical_word_id=2; received_mask=0100; proposed waking processor to modify data on the first beat while state stays I.
Score: 7/10.

Correction:
- request_type=ReadUnique, copied from the outgoing transaction.
- target_state=UC for the deliberately selected clean-grant teaching path. Actual granted state must be decoded from response Resp/dirty responsibility; section 10.2 permits UC or UD for ReadUnique, so do not hardcode all hardware grants as UC.
- expected_beats=4; critical_word_id=2. On allocation received_mask=0000; after accepting DataID2 it becomes 0100.
- For this simple full-line-fill implementation, receiving one Store-target beat does not authorize a Store or certify its completion. Retain Store data/mask in StoreBuffer or the miss entry. Merge into an internal buffer only when the implementation explicitly supports it and preserves original/updated data and snoop ordering; do not expose a writable valid line until required data, permissions and ordering are safe. CPU retirement, StoreBuffer acceptance and DCache Store completion are different events.
- The line may retain stable Tag=I while the MSHR records an active transient; this is not an idle Invalid line.

Source: local Compact CHI PDF section 10.2, printed page 36 / PDF page 44. Data-bearing ReadUnique returns CompData (including state information), or eligible permission-only ReadUnique returns Comp. These are alternatives, not obligatory CompData plus separate Comp. Allocating read ends with requester CompAck. Supersedes older wait-for-both-RXDAT-and-Comp wording and overly simple unconditional UC assumptions.

Next question: receiving DataID2 only cannot complete the pending Store in the chosen simple model; ask learner to identify the still-missing data and permission/order conditions. Review mask initialization and request_type/target_state again after one repair turn. User wants continued study before beginning RTL implementation; ACE and Type2-5 quizzes remain paused.

## RefillEntry Store completion repair (2026-10-18)

Question: In the chosen simple full-line refill design, can the Store be reported complete when only DataID=2 has arrived?
Learner answer: No; wait for old data then merge before the StoreBuffer can write.
Score: 9/10.
Feedback: Correctly rejects premature Store completion. Refine the roles: StoreBuffer already holds the Store's new bytes and byte mask; DCache receives the old line, obtains suitable write permission, resolves same-line ordering, merges new bytes while preserving untouched bytes, and completes the cache update. In this teaching path the final modified state is UD. This full-line waiting policy is the selected simple microarchitecture, not a universal Compact CHI requirement for every possible Store implementation.
Review status: partial data readiness versus Store completion repaired; request_type/target_state and bitmap initialization still warrant retrieval practice.
Next pending retrieval question: ReadShared for X already handshaken; new Store X arrives. Can the already-sent request be changed in place to ReadUnique? Why? This reviews the previously learned MSHR merge boundary before further RefillEntry detail.

## MSHR retrieval review: request acceptance versus granted state (2026-10-18)

Question: ReadShared X has handshaken; can a later Store X change that accepted transaction into ReadUnique?
Learner answer: cannot change the request because TXREQ has handshaken and state is already fixed as SC.
Score: 9/10.
Correction: Correct conclusion, but handshake means the downstream accepted the request's opcode and payload, not that the local stable cache state is already SC or the returned state is fixed. ReadShared is permitted to return SC, UC, or UD (local Compact CHI section 10.2, printed page 36). Store remains pending under the selected merge policy. If the returned valid line is SC, request stronger permission with ReadUnique; if it is UC/UD and no conflicting transient/snoop is pending, another ReadUnique solely to obtain write permission is unnecessary. A new transaction is distinct from changing the already accepted transaction. Correct opening wording to 'cannot modify the accepted request', rather than 'cannot handshake'.
Next retrieval question: after ReadShared returns UC and all other conditions are satisfied, must a pending Store request ReadUnique again merely to obtain write permission? This tests granted-state-based decisions.

## Granted permission retrieval check (2026-10-18)

Question: ReadShared X returned UC; full data received, no pending Snoop, Store waiting. Must another ReadUnique be issued for write permission?
Learner answer: No; write directly and change Unique Clean to Unique Dirty.
Score: 10/10.
Gate result: correctly uses actual granted permission rather than assuming all ReadShared responses are SC. UC -> local Store -> UD requires no new permission transaction when other safety conditions are satisfied.

## RefillEntry intent versus returned state

Next bounded concept: store the outgoing request type separately from the state decoded from the response. `request_type` records ReadShared/ReadUnique; `granted_state` is an illustrative local register holding the logical state decoded from CompData/Comp Resp and dirty-responsibility indication. Raw Resp encoding is not always identical to the logical UC/UD label. The earlier unconditional target_state=SC/UC mapping was a teaching simplification, not a rule for assigning actual cache permissions. In particular, all data beats received does not itself authorize a write.
Next pending question: request_type=ReadShared, all four beats received, granted_state=SC, local Store pending, no Snoop conflict. May the controller simply set the line to UC and write? Explain permission acquisition.
Review queue: revisit initial received_mask=0000 versus post-DataID2=0100 after this granted-state exercise; learner preference remains continued conceptual study before RTL.

## RefillEntry permission escalation check (2026-10-18)

Question: ReadShared complete, received_mask=1111, granted_state=SC, no Snoop pending, Store waiting. May L1 set SC to UC itself?
Learner answer: No; L2 would not know, other L1 shared copies could remain valid and read stale data.
Score: 10/10.
Feedback: Correctly connects permission escalation to manager coordination and other sharers' invalidation. Refine 'cannot change its state': SC->UC cannot be performed unilaterally; UC->UD after a local Store is permitted because writable permission was already granted. A valid SC copy does not prove another sharer exists, but L1 cannot assume sole ownership solely from SC.

Next bounded concept: ReadUnique permission-only response. Source: local Compact CHI section 10.2, printed page 36 / PDF page 44. If Requester retains valid data and state and ExpCompData=0, Completer may (and is recommended to) return Comp with new state without data; if valid data is absent/lost, CompData is required. Allocating ReadUnique subsequently requires CompAck. Do not teach obligatory Comp plus CompData.
Pending question: SC requester retains all data through ReadUnique, ExpCompData=0; response is Comp_UC on RXRSP. Does absence of RXDAT imply missing data, or can the existing data support the Store? Explain.

## Permission-only ReadUnique explanation repair (2026-10-18)

Learner said the Comp_UC/CompData question was hard to understand. No score; this is a teaching clarity issue, not evidence of an incorrect answer.
Adaptation: pause additional fields and completion details. Explain with a complete file already present but read-only; manager grants modification permission without retransmitting file contents. Map file contents to existing valid SC data and permission grant to completed ReadUnique. Ask only what is missing when data is present but write permission is absent.
Keep the caveat that valid data must be retained throughout the request. Teach CompAck and ExpCompData separately after the learner understands permission-only return. Comp_UC is teaching shorthand for a Comp message whose response indicates UC, not a distinct opcode.
Next pending question: L1 already has the full valid line but can only read it; what does it need to request from L2 before writing?

## Permission-only ReadUnique simplified repair answer (2026-10-18)

Question: L1 already holds complete valid data in SC. What is missing before writing?
Learner answer: obtain UC and invalidate other L1 copies of the same line.
Score: 10/10.
Feedback: Correct distinction between having data and having write permission. Permission is obtained through L2 coordination and authorization, not unilateral SC->UC. Other read copies must lose conflicting permission if present; if no other holder exists, no actual invalidation message is needed. Under the retained-valid-data and ExpCompData=0 conditions, L2 may return Comp with UC response state without retransmitting CompData. The learner has repaired the conceptual gap; reintroduce only Comp versus CompData now, and defer DBID/CompAck details until the next bounded lesson.
Next pending question: why does the retained-SC permission-upgrade path not require another full-line RXDAT transfer? Source: local Compact CHI section 10.2, printed page 36 / PDF page 44.

## Permission-only response retention check (2026-10-18)

Question: Why can the retained-SC ReadUnique path avoid receiving another full cache line on RXDAT?
Learner answer: because the previous state was SC, it could obtain newest data, so RXDAT need not repeat the line.
Score: 9/10.
Feedback: Direction correct. Use 'already holds complete valid data', not merely 'can obtain data'. Initial SC alone is insufficient: the data and valid coherence state must be retained through the permission request. If an invalidating Snoop removes that data/state before the response, Comp alone is insufficient; the Completer must use CompData, per local Compact CHI section 10.2, printed page 36. Permission-only return also assumes ExpCompData=0; leave this field for a later lesson to keep the repair focused.
Next pending question: L1 originally SC, issues ReadUnique, then loses the line due to invalidating Snoop before the response. May L2 now return only a Comp granting permission? Why?

## ReadUnique loses valid data during request (2026-10-18)

Question: L1 was SC, issued ReadUnique, then an invalidating Snoop made X I before the response. Can L2 return only Comp?
Learner answer: No; L1 no longer has complete data, so data must be returned.
Score: 10/10.
Refinement: What matters is usable valid data/coherence state. SRAM bits may remain after invalidation, but are not a valid retained copy. For this case the Completer must return CompData, not only Comp. Source: local Compact CHI section 10.2, printed page 36 / PDF page 44.
Gate result: permission-only response versus data-required response understood under retained-valid-data versus lost-data cases.

## ReadUnique return-path compression and next field

Decision rules from section 10.2:
- No valid retained data -> CompData required.
- Valid retained data and ExpCompData=0 -> Comp permitted and recommended; CompData permitted but not recommended.
- ExpCompData=1 -> no Comp-only path; return data with CompData.
These are alternatives, not an obligatory Comp plus CompData pair. Allocating read has a subsequent requester CompAck; teach its construction separately.
Next concept: ExpCompData means expectation/request for a data-bearing completion. Do not conflate it with ExpCompStash (prefetch feedback) or with data already being present.
Pending question: L1 retains valid SC data throughout ReadUnique, but sets ExpCompData=1. Can L2 choose Comp-only response? Review cadence: after this field, revisit TXREQ/RXRSP/RXDAT channel matching before introducing CompAck details.

## ReadUnique ExpCompData check (2026-10-18)

Question: L1 retains valid SC data throughout ReadUnique, ExpCompData=1. May L2 return only Comp?
Learner answer: data must be returned because ExpCompData=1.
Score: 10/10.
Gate result: all three return-path cases understood: invalid/no retained data needs CompData; retained valid data and ExpCompData=0 permits/recommends Comp; ExpCompData=1 forbids Comp-only response.

## Next bounded concept: allocating-read CompAck

Source: local Compact CHI section 10.2, printed page 36 / PDF page 44; message directions/opcodes in chapter 9. Allocating ReadShared/ReadUnique ends with Requester sending CompAck; Requester must not send CompAck before receiving a corresponding CompData or Comp. Comp/CompData come from L2 to L1; CompAck goes L1 to L2 on L1 TXRSP (UpRSP). It is distinct from SnpResp, which answers an incoming SNP. Teach direction and purpose first with a fully received single-beat no-conflict example; postpone multi-beat Ack timing and returned DBID mapping. Do not invent a separate mandatory Comp after CompData.
Pending retrieval question: following a complete single-beat ReadShared CompData response without conflict, which component sends CompAck and which L1-relative channel carries it?

## CompAck channel-direction check (2026-10-18)

Question: Which L1-relative channel carries the CompAck that L1 sends after a corresponding CompData response?
Learner answer: TXRSP; TX means transmit and RX means receive.
Score: 10/10.
Gate result: CompAck direction understood. TX/RX is relative to the component, so L1 TXRSP connects to L2 RXRSP.

Next retrieval exercise: distinguish messages that share TXRSP. CompAck acknowledges an allocating read/permission transaction's Comp or CompData response; SnpResp is a no-data response to an incoming SNP. For stable SC plus SnpToInvalid, a valid no-data response path is SnpResp_I on TXRSP with final I. Use the known clean no-data path; do not repeat the earlier incorrect blanket rule that data-bearing Snoop always needs both separate SnpResp and SnpRespData. Local section 10.11 permits a status-only SnpResp path or a combined status/data SnpRespData path.
Pending question: L1 holds SC and receives SnpToInvalid; on the selected no-data path, which TXRSP message answers that Snoop, and what request is it responding to?

## Current progress checkpoint and Snoop correction (2026-10-18)

Latest answer: L1 sends SnpResp on TXRSP in response to L2's SnpToInvalid. Correct; score 10/10. Opcode spelling is SnpToInvalid.

Scope remains L1 DCache <-> L2 Compact CHI. ACE and Type2-5 classification are paused. User prefers further guided learning before RTL.
Progress estimates are qualitative curriculum estimates, not validated competence measurements: conceptual coverage roughly 60-65%; independently designing/validating an interface roughly halfway (55% as a planning estimate). No new percentage is earned merely by repeating an identical exercise. No RTL or simulation has been completed.
Solid in recent checks: channel directions; I/SC/UC/UD distinctions; partial versus full overwrite; clean versus dirty local replacement; request opcode cannot change after acceptance; actual granted permission differs from request intent; Comp versus CompData paths with retained/lost data and ExpCompData; TXRSP CompAck versus SnpResp.
Introduced but not independently consolidated: full transaction traces and completion conditions; TxnID/DBID/node ID association; beat assembly/bitmap; refill and Snoop conflicts; MSHR merge rules; Stash feedback fields; CMO completion scope.
Not taught in sufficient detail: exact CompAck return-ID construction and ID lifetime/reuse; multi-beat progress/backpressure with errors; WriteBackFull split/combined completion concurrency; Snoop/writeback races; P-Credit and resource/conflict retry; reset/drain and relevant verification; end-to-end DCache/L2 implementation mapping. QoS, Way/alias, atomics are later scoped topics; local atomic transaction-flow section 10.10 is TBD, so do not invent full protocol detail.

AUTHORITATIVE CORRECTION overriding many older lessons in this log:
Local Compact CHI section 10.11, printed page 42 / PDF page 50, defines alternative Snoop responses:
1. State-only response: SnpResp on UpRSP / L1 TXRSP.
2. State+data response: SnpRespData on UpDAT / L1 TXDAT, carrying response state as well as data.
Do NOT require an extra separate SnpResp on TXRSP for every data-bearing Snoop. Earlier lessons importing ACE CR+CD as Compact CHI RSP+DAT were wrong and must be repaired in teaching and any generated interface tables. Do not penalize learner for repeating those earlier instructions.

Next lesson: repair the alternative Snoop response model, then ask a single check for a stable UD line receiving SnpToInvalid on the data-bearing response path. Follow with DBID/CompAck mapping and an actual protocol sequence rather than more naming-only questions.

## Compact CHI data-bearing Snoop correction check (2026-10-18)

Question: stable UD receives SnpToInvalid and must return dirty data. Which response/message/channel?
Learner answer: TXDAT carries SnpRespData including state and data.
Score: 10/10.
Gate result: successfully repaired the older incorrect teaching that both separate TXRSP/SnpResp and TXDAT/SnpRespData are mandatory. Source: section 10.11, printed page 42. Clean selected status-only path uses TXRSP/SnpResp; data-bearing path uses TXDAT/SnpRespData.

## Next bounded lesson: split WriteBackFull completion

Source rechecked: local Compact CHI section 10.4, printed pages 37-38 / PDF pages 45-46. After DBIDResp, requester may send CopyBackWrData. Completer may send Comp before, during or after data transfer; it need not wait for any or all data. In this split path the transaction ends only when requester has sent all CopyBackWrData AND received Comp. Thus Comp alone is not proof that writeback data has finished. Teach a simple writeback entry with have_dbid, comp_seen and sent_mask, not a rigid DBIDResp -> all data -> Comp ordering.
Pending question: 4-beat WriteBackFull has DBIDResp and Comp, but only DataID0 and 1 have been sent successfully. In a simple entry that still owns remaining buffered data/transaction context, may it be released? Explain the outstanding obligation.

## WriteBackFull split-completion check (2026-10-18)

Question: DBIDResp and Comp received, only 2 of 4 CopyBackWrData beats sent, remaining data/context still in WritebackEntry. May the entry be released?
Learner answer: No; completion requires Comp received plus all CopyBackWrData successfully sent.
Score: 10/10.
Gate result: understands that early Comp does not waive remaining writeback data obligation.

## Next bounded lesson: combined WriteBackFull response

Source: local Compact CHI section 10.4, printed pages 37-38. Combined path uses CompDBIDResp (DBID information plus completion semantics); requester may send CopyBackWrData only after receiving it, and the transaction ends after all data are sent. No additional standalone Comp is required in this path. Illustrative local flags: have_dbid and comp_seen are both set by CompDBIDResp; split DBIDResp sets have_dbid and separate Comp sets comp_seen. data_sent_complete must still be tracked independently in either path. Do not teach an obligatory extra Comp after CompDBIDResp.
Pending question: combined CompDBIDResp received and all 4 CopyBackWrData beats accepted; no standalone Comp arrived. Is writeback complete, and why?
Review plan: after combined-response exercise, revisit DBID matching before moving to flow-control/resource availability. Preserve current scope (DCache-L2 Compact CHI, conceptual study before RTL).

## WriteBackFull combined-response repair needed (2026-10-18)

Question: CompDBIDResp received; all 4 CopyBackWrData beats successfully sent; no separate Comp. Is writeback finished?
Learner answer: No; unsure why and why no separate Comp was received.
Score: 5/10.
Gap: interprets completion as requiring a separately named Comp message in every path, rather than recognizing completion semantics in combined response.
Repair explanation: message opcode and information carried are different. DBIDResp supplies DBID, Comp supplies completion semantics, CompDBIDResp supplies both in one message. In the combined path, receipt of CompDBIDResp sets have_dbid=1 AND comp_seen=1; sending all write data then satisfies the remaining condition. There is no missing separate Comp. Source: local Compact CHI section 10.4, printed pages 37-38.
Teaching adaptation: keep the next exercise to one bit only; do not add IDs, channel races or credit rules. Pending question: immediately after receiving CompDBIDResp, should comp_seen be 0 or 1? Explain using combined completion semantics. Revisit the entire combined completion condition only after this is understood.

## CompDBIDResp completion-information repair (2026-10-18)

Question: Does receiving CompDBIDResp already provide the completion information expressed by Comp?
Learner answer: Yes.
Score: 10/10 for this narrow confirmation.
Status: combined-response information recognized; do not yet mark full WriteBackFull completion independently mastered based only on a yes/no reply.
Next transfer check: CompDBIDResp received, 3 of 4 CopyBackWrData beats successfully sent; may the WritebackEntry be released and what obligation remains? Expected: no, completion information is present but the last data beat must still be sent. In the illustrative local flags, have_dbid=1, comp_seen=1, data_sent_complete=0. Keep ID mapping/credit topics deferred until completion conditions consolidate.

## WriteBackFull combined completion transfer check (2026-10-18)

Question: CompDBIDResp received; 3 of 4 CopyBackWrData beats successfully sent. May L1 release WritebackEntry?
Learner answer: No; wait to receive the last beat before freeing wbentry.
Score: 9/10.
Feedback: Correctly retains the entry and identifies the missing last beat. Correct direction: L1 must successfully SEND the final CopyBackWrData beat to L2 on L1 TXDAT, not receive it on RXDAT. Completion information is already present in CompDBIDResp; no extra Comp is needed.
Status: completion conditions substantially understood, but refill receive direction versus writeback transmit direction needs retrieval.
Pending repair question: the last CopyBackWrData beat goes from which component to which component, and on which L1-relative channel? Keep question bounded before DBID mapping.

## CopyBackWrData direction repair passed (2026-10-18)

Question: Who sends the final CopyBackWrData beat to whom, and which L1-relative channel carries it?
Learner answer: L1 -> L2, L1 TXDAT.
Score: 10/10.
Gate result: writeback transmit versus refill receive direction repaired. Recent checks distinguish split/combined completion information and all-data-sent obligations; use these as context for practical ID matching rather than continuing naming-only repetition.

## Writeback ID return example

Teach one example: L1 originates WriteBackFull with original TxnID=5; L2 sends CompDBIDResp containing original-response TxnID=5 and newly assigned DBID=12. L1 uses original TxnID5 to find its outstanding writeback entry and stores remote DBID12. Later CopyBackWrData uses the returned downstream identifier12 to reach the L2 transaction/data context. These are independently allocated local/remote transaction namespaces, not necessarily physical array indices; both numbers may legally differ. In Compact CHI UpDAT has a TxnID field with DBID_Width, not a separate DBID payload field; do not draw an imaginary UpDAT.DBID field.
Pending question: when the CompDBIDResp arrives with TxnID5 and DBID12, which identifier does L1 use to find its original waiting writeback entry, and what is the purpose of saving12? Ask the local-lookup question first if the two-part form is confusing.
Source context: local Compact CHI chapter9 channel fields and section10.4 WriteBackFull. Review after one numeric example before introducing ID reuse/lifetime.

## Writeback original-response lookup repair (2026-10-18)

Question: CompDBIDResp arrives with TxnID=5, DBID=12. Which ID finds L1's original waiting writeback entry?
Learner answer: DBID=12.
Score: 5/10.
Correction: use original TxnID=5. Before the response, L1 knows its own allocated ID5, not the newly assigned downstream DBID12. First find the original entry by returned TxnID5, then store returned DBID12 in that entry for the subsequent data/return stage. Do not confuse original-response lookup with the later L2-side data association. Internal entry index need not equal the ID value.
Teaching adaptation: show a before-response entry with req_txn_id=5 and dbid_valid=0, then after-response req_txn_id=5 and remote_dbid=12/dbid_valid=1. Use one renamed numeric example to test local lookup only, without data encoding, CompAck or ID lifetime details.
Pending repair question: local original TxnID=7, returned CompDBIDResp has TxnID7 and DBID3. Which ID finds L1's existing waiting entry? Revisit save-DBID step after correct local lookup.

## Original TxnID lookup repair passed (2026-10-18)

Question: L1 issued TxnID7; CompDBIDResp returns TxnID7 and DBID3. Which identifier finds L1's original entry?
Learner answer: TxnID.
Score: 10/10 for original-response lookup.
Status: narrow local lookup repaired; later-data remote association still needs a check.
Next explanation: locate entry by req_txn_id7, store returned remote_dbid3, then use the returned identifier3 to associate subsequent CopyBackWrData with L2's transaction context. Keep local/remote allocation distinct and avoid assuming identifier equals a physical table index.
Pending question: when sending CopyBackWrData after this response, which returned identifier lets L2 associate the data with its transaction context? Expected returned DBID3. Defer raw UpDAT TxnID field mapping until this conceptual association is understood.

## Returned DBID data-association check passed (2026-10-18)

Question: which returned identifier associates later CopyBackWrData with L2's transaction context?
Learner answer: DBID.
Score: 10/10.
Gate result: original response lookup uses original TxnID; later write-data association uses returned DBID.

## Next bounded lesson: actual UpDAT field mapping

Rechecked local Compact CHI section 9.1.5, printed page29 / PDF page37: UpDAT contains TxnID with DBID_Width; there is no separate UpDAT DBID field in this table. Concrete writeback example:
1. L1 TXEVT WriteBackFull: TxnID=7 (L1-originated request identity).
2. L1 RXRSP CompDBIDResp: TxnID=7 (find original L1 entry), DBID=3 (L2-assigned return identity).
3. L1 TXDAT CopyBackWrData: TxnID=3 (the value copied from returned DBID), not original7.
Explain that an identically named TxnID field in different message directions need not refer to the same allocator/namespace. Treat DataID as an independent beat-position field; do not overload it as transaction identity.
Pending application question: with original TxnID7 and returned DBID3, is CopyBackWrData.TxnID=7 correct? What value should it carry? Consolidate this mapping before CompAck DBID construction or ID reuse/lifetime.

## CopyBackWrData raw field mapping check passed (2026-10-18)

Question: original TxnID7, returned DBID3; is CopyBackWrData.TxnID=7 correct?
Learner answer: No; use3 because DBID3 lets L2 identify the subsequent writeback data.
Score: 10/10.
Gate result: original-request identity versus returned-data identity understood at actual UpDAT field level for this writeback example.

## Next bounded lesson: outstanding response and original-ID reuse

Use split WriteBackFull: TXEVT TxnID7; DBIDResp returns TxnID7/DBID3; TXDAT CopyBackWrData uses TxnID3. The later standalone Comp still belongs to the original request and must be matched using original TxnID7. If Comp is outstanding, L1 must retain an unambiguous original transaction context and not reuse its active original identifier for a new request in the same namespace. Otherwise the delayed Comp could be delivered to the wrong request. For the teaching implementation, keep the writeback context/ID until the known full completion condition (all data sent and Comp seen), then reclaim according to design. Do not generalize the ID value to an exact physical array index or impose a physical-entry lifetime universally; the requirement is preservation of correlation and no ambiguous reuse.
Source context: local Compact CHI section10.4 split completion plus chapter9 response field definitions; the entry/free-list policy is an illustrative DCache design derived from these obligations.
Pending question: DBIDResp received and all CopyBackWrData sent, but Comp not yet received. May original TxnID7 be reassigned to another pending request, and why?

## Original writeback TxnID lifetime check passed (2026-10-18)

Question: DBIDResp received and all CopyBackWrData sent, but Comp outstanding. May L1 reuse original TxnID7 for a new pending request?
Learner answer: No; writeback is unfinished and original TxnID is needed to identify the old transaction.
Score: 10/10.
Gate result: original writeback response correlation must survive until outstanding Comp is handled; do not ambiguously reuse active original IDs.

## Next bounded lesson: CompAck uses the returned downstream identity

Use a simple fully received single-beat allocating read, without Snoop/error/ordering conflicts: L1 TXREQ ReadShared TxnID5; L2 RXDAT CompData carries TxnID5, DBID12 and response state SC; L1 TXRSP CompAck uses TxnID12 (returned DBID), not original5. Original5 identifies the local miss; returned12 identifies the downstream acknowledgment context. Source context rechecked: chapter9 UpRSP TxnID width is DBID_Width; section10.2 requires requester CompAck after an eligible Comp/CompData response. Do not add a mandatory standalone Comp after CompData. Do not infer the universal multi-beat Ack timing from this single-beat example.
Pending question: CompData has original TxnID5 and DBID12; what value is placed in the outgoing CompAck.TxnID field? Follow this with short integrated read/write ID review rather than further unrelated message names.

## CompAck returned-ID mapping check passed (2026-10-18)

Question: CompData carries original TxnID5 and DBID12; what is outgoing CompAck.TxnID?
Learner answer: 12.
Score: 10/10.
Gate result: both CopyBackWrData and CompAck use the returned downstream DBID value in their outgoing TxnID field; original-response lookup remains by original requester TxnID. Check complete scenario before marking ID/completion topic fully consolidated.

Next review: no new concept. WriteBackFull original TxnID9 receives CompDBIDResp(TxnID9, DBID4); 4 data beats required, only 3 successfully sent. Ask one integrated scenario: which original ID finds the local entry, what goes in CopyBackWrData.TxnID, and when may the entry be released? Expected original9, downstream4, all data successfully sent since combined completion already present. Keep namespace-vs-physical-index distinction and avoid requiring another Comp.

## Integrated writeback ID/completion gate passed (2026-10-18)

Scenario: original WriteBackFull TxnID9, CompDBIDResp returns TxnID9/DBID4, 3 of 4 data beats sent.
Learner answer: find original entry with9; CopyBackWrData.TxnID=4; do not release until last beat sent.
Score: 10/10.
Gate result: recent integrated example independently combines local lookup, returned-ID data association, combined completion semantics and remaining transmit obligation. This is a small-topic gate, not full RTL competence.
Compression artifact: outputs/compact-chi-writeback-id-review.md contains concise rules, example, pitfalls/checklist and five retrieval questions with answers under a collapsible section.

## Next bounded topic: Compact CHI P-Credit resource flow control

Rechecked local chapter14, printed pages50-51 / PDF pages58-59. Important: Compact CHI P-Credit is its own link-layer mechanism and differs from full AMBA CHI P-Credit; do not import full CHI RetryAck/PCrdGrant flows. Completer exposes implementation-defined resource types to Requester with dynamic/static credits. L1 local MSHR availability alone does not establish L2 available processing capacity. First-time request issuance requires enough dynamic P-Credits for the agreed required resource types, consumed when request leaves Requester. Concrete resource types/needs are implementation-defined; a teaching L2 transaction entry is an example, not a mandated universal mapping. Defer static credits/reclaim/retry signal details to separate lessons.
Next comprehension/Feynman-style prompt: using own words, why does a free L1 MSHR alone not guarantee permission to issue a first request immediately when required L2 credits are absent? Explain local versus remote resources. Review ID topic after 2-3 new credit concepts. CMO Feynman remains deliberately skipped by user; do not force it as a prerequisite.

## Compact CHI local-versus-downstream resource check (2026-10-18)

Question: Why is an available L1 MSHR alone insufficient to issue a new first-time request?
Learner answer: downstream L2 may lack resources to receive new requests.
Score: 10/10.
Gate result: distinguishes local buffering from remote protocol resources.

## Next bounded lesson: dynamic P-Credit counting

Source: local Compact CHI chapter14, especially section14.1.1, printed page51. Use one agreed resource type as an example: PDCRD0GNT is a grant pulse for one dynamic P-Credit of type0. An illustrative Requester counter increments per received grant and consumes the agreed resource cost when the first-time request leaves Requester. Must have enough required dynamic credits before issuing. Concrete mapping/type costs are implementation-defined; no guarantee that credit0 universally means an L2 MSHR. Start with each request requiring one type0 credit, and exclude concurrent grants/reclaims/retry from the numerical exercise.
Pending question: start with2 type0 credits, successfully issue two first-time requests costing1 each, no other credit events. Can a third be issued merely because a local MSHR is still free? Expected no, count0; wait for appropriate credit availability. Teach grant/consume event handling before static credits or reclaim races.
Review trigger: after this counter and the next credit concept, retrieve original TxnID versus returned DBID using a writeback example.

## Dynamic credit exhaustion check and signal-channel clarification (2026-10-18)

Learner answer: cannot issue the third first-time request because no required credits remain; sufficient credits are required before sending. Score: 10/10.
Learner question: on which channel is dynamic P-Credit carried?
Verified source: local Compact CHI section14.1.1, printed page51 / PDF page59; chapter14 note printed page50.
Answer: dynamic credit/synchronization uses an independent signal-channel group, not REQ/RSP/DAT/SNP/EVT flit messages. PDCRD{type}GNT from L2/Completer to L1/Requester is a one-cycle grant indication. L2->L1 PDCRD{type}RCLREQ requests reclaim; L1->L2 RCLACCEPT/RCLDENY reports acceptance/denial. Resource-type numbering and interpretation are agreed by both ends at design time. Do not introduce full AMBA CHI PCrdGrant messages into this local Compact CHI flow.
Illustrative local counter: received GNT adds one credit, first-time outgoing request consumes agreed needed credits when it leaves Requester. Avoid same-cycle grant/consume timing assumptions until the concrete controller is specified. A successful reclaim can reduce available credits; teach this in the next bounded lesson, without assuming dynamic credits are irrevocably guaranteed slots.
Interface implication: five flit-channel classes alone do not enumerate the complete DCache-L2 hardware interface; separate credit control signals are also required.
Next pending exercise: identify directions of GNT and RCLREQ versus RCLACCEPT/RCLDENY, then teach why dynamic credits may be reclaimed. No need to repeat completed original-ID/DBID name-only questions until the spaced review is due.

## Dynamic P-Credit reclaim lesson (2026-10-18)

User requested continued learning. Rechecked local Compact CHI section14.1.1, printed pages51-53 / PDF pages59-61.
Purpose: L2 may reclaim dynamically distributed credits from quiet requesters and favor a busy requester. Reclaim concerns resource credits, not invalidating a cache line or undoing an already issued transaction.
Signals: L2->L1 PDCRD{type}RCLREQ; L1->L2 PDCRD{type}RCLACCEPT or RCLDENY. Every reclaim pulse must receive exactly one accept/deny response in a short bounded-by-design time; do not prescribe a universally fixed one-cycle latency. Count of accepts+denies must match reclaim requests.
Acceptance: permitted only when L1 holds a corresponding returnable credit; accepting must decrement it. Reclaim request alone is a hint and not proof L1 returned credit. Rejection is permitted, and is required if no returnable credit remains (including a credit already allocated/consumed for a pending/outgoing transaction). Remaining credits cannot go negative or be spent twice.
Concurrency example: initial count1, first-time request consumes it, then/same time reclaim considered; if request is chosen and credit consumed, L1 must deny reclaim rather than also accept and subtract again. The manual notes requester/completer dynamic-count desynchronization can lead to a Retry; defer its static-credit details to the next lesson.
Next repair question: L1 has one type0 dynamic credit; it has already been consumed by a successfully sent request when reclaim must be answered. What response is legal and why? Expected RCLDENY because no returnable credit remains.
Spaced review: after learner answers reclaim and learns one next concept, retrieve a combined WriteBackFull TxnID/DBID/completion example. Do not describe full AMBA CHI P-Credit as this protocol.

## Dynamic reclaim question, TileLink comparison and progress (2026-10-18)

Learner selected PDCRD0RCLDENY but could not explain it. Score: 7/10 (signal choice correct, reason not consolidated).
Repair: initial count1; issuing the request consumes that one credit -> count0. A reclaim then asks for an available returnable credit, not for a credit previously granted at some past time. L1 has none to return; it must deny. It must not accept and subtract again (double spending/underflow). Denial leaves the credit count at0; it does not grant a new credit and does not itself cancel the issued transaction.

TileLink source checked: local tilelink_spec_1.9.3.pdf, section4/4.1, PDF page19. Standard TileLink uses per-channel ready/valid beat exchange; transfer requires both asserted. Receiver can deassert ready under backpressure; sender valid must not depend on ready. No separate protocol dynamic-credit grant/reclaim mechanism corresponding to Compact CHI PDCRD signals appears in this standard. TileLink systems still have finite internal resources and transaction/source-ID constraints; do not teach that they have no resource control. An implementation or transport wrapper can add internal credits, but this is distinct from the base TileLink mechanism. No need to revisit ACE or Type2-5.

Progress snapshot: approximate conceptual coverage65%; DCache-L2 implementation preparation55-60%. These are curriculum estimates, not demonstrated RTL completion or a measured percentage of the document. Recent strengthened material: request/grant distinction, Comp/CompData, ExpCompData, CompAck vs SnpResp, Snoop data response correction, writeback split/combined completion, originalTxnID vs returnedDBID including actual CopyBackWrData/CompAck TxnID-field mapping. Dynamic-credit grant/count basics introduced; reclaim reason is being repaired. Still to cover static credits and resource/conflict retry, reclaim/consume concurrency, ID lifetime edge cases, complete multi-beat/error handling, protocol-specified concurrency/completion rules, end-to-end interface/state-machine and verification exercises.

Next check: after count1 was consumed by an issued request and L1 replied RCLDENY, what is L1's credit count? Expected0; denial does not restore/grant credit. Then proceed to static credits only after the reason for denial is understood. Source: Compact CHI section14.1.1 printed51-53.

## Teaching pace adjustment (2026-10-18)

User wrote '不着调'. This may express dissatisfaction; do not silently reinterpret it as a confirmed typo for '不知道', and do not assign an exercise score or infer a wrong numerical answer.
Observed teaching issue: too many repeated one-bit/name/count confirmation questions fragment the lesson. State the current conclusion directly: after the last credit was consumed, RCLDENY leaves the requester count at0; rejecting a reclaim does not grant a credit. Prefer a complete worked transaction with a small number of meaningful checkpoints rather than repeated trivial confirmation. Keep per-answer records but do not let record-keeping dominate the teaching response.
Next substantive lesson when continuing: one complete dynamic-credit consumption/reclaim conflict -> resource Retry -> static-credit grant -> resend flow from the local Compact CHI chapter14. Read the exact resource Retry fields/rules first, especially AllowRetry and PRETRY signals. Do not import full CHI messaging or infer fixed cycle latencies.

## Complete Compact CHI resource Retry lesson (2026-10-18)

User requested next step after pace feedback. Use a whole worked ReadShared transaction, not repeated one-bit/name drills. Source rechecked: local Compact CHI sections14.1.1/14.1.2/14.2, printed53-55 (PDF61-63). Section14.3 conflict Retry is only a heading in this draft; do not invent its full behavior.

Worked case: a first-time ReadShared(X) has the required dynamic credit, is issued with AllowRetry=1, and consumes that credit. Due to dynamic-credit reclaim/consumption races or endpoint count disagreement, L2 can notify that the issued request must Retry. Dynamic credit availability at L1 is not an irrevocable static reservation at L2. This is not permission to issue first-time requests while knowingly lacking required dynamic credits.

Retry arrives on dedicated sideband signals from L2: PRETRYV=1 for one cycle, PRETRYTXNID identifies the original outgoing request (example7), and PRETRYCRD{n} indicates which resource classes require reacquisition. This is not a Comp and not a flit on RXRSP. L1 must always be able to capture Retry; do not implement backpressure that loses a one-cycle PRETRYV. Retain/reconstruct the miss context and mark it waiting for resources instead of declaring the Load complete or freeing all its context.

L2 later grants static credits with PSCRD{n}GNT. Static resources allocated to the Requester cannot be reclaimed or reassigned before consumption. For each indicated required resource class, L1 must acquire sufficient static credits before resend. A zero retry mask is forbidden; classes not requested by the retry mask may already have been reserved by L2.

Resend: same logical request over TXREQ, AllowRetry=0, consume corresponding static credits as request leaves. The local resource-Retry section allows each request at most one Retry, and the second send must not again be treated as an ordinary first send subject to another resource Retry. The draft refers resend field constraints to a reserved section, so do not invent universal exact TxnID/opcode bit-preservation rules; retain an unambiguous logical request association. Then normal ReadShared CompData and CompAck flow follows. Retry is distinct from an internal StoreBuffer replay.

Illustrative implementation states (not protocol-fixed names): WAIT_RESPONSE -> WAIT_STATIC_CREDIT -> RESEND -> WAIT_RESPONSE. Fields may include retry_pending, retry_resource_mask, and has_been_retried. Do not implement retry credits as completion/data IDs or use dynamic grants as a substitute for the indicated static resource requirements.

Pending integrated question: PRETRYCRD0=1 and PRETRYCRD1=1; only the needed type0 static credit has arrived, type1 is still absent. Can L1 resend? What must it wait for, and what AllowRetry value must the resend use? Expected: wait for sufficient static credits of all requested resource classes; AllowRetry=0. Grade this as one scenario, then clarify only missed conditions.
Review cadence: after this integrated Retry exercise, retrieve one old TxnID/DBID/combined-writeback completion scenario if needed, then compress the flow-control topic. Current conceptual progress estimates remain approximate; no automatically increased percentage for reading a new lesson.

## Resource Retry multi-class explanation repair (2026-10-18)

Learner said '不知道啊，你继续讲解' to the scenario requiring type0 and type1 static credits with only type0 received. No attempted answer; do not assign an invented wrong-answer score or claim comprehension.
Teaching issue: previous whole-flow explanation introduced too many new signals at once. Repair using two example L2 resources (transaction entry and data buffer), explicitly hypothetical implementation mapping. Retry tells L1 which resource classes must be reacquired. If both classes are requested and only one grant arrives, do not resend; wait for sufficient static credits of both. Then resend with AllowRetry=0. AllowRetry=1 means first send may be retried; 0 means already retried once and second send uses reserved resources. Static credits are not node/transaction IDs or completion notifications.
Provide the answer directly and walk it through; no new signal encodings, counter races or fields. Use one compact table showing type0 ready/type1 missing -> wait, then both ready -> resend. Keep chosen resource examples as design examples, not Compact CHI-mandated type numbering. Offer only one end-to-end own-words checkpoint after explanation; avoid restarting a series of trivial binary quizzes.
Pending checkpoint: explain why one type of resource is insufficient when the Retry explicitly requests two, using the two-resource example. Static credit grant is L2's promise/reservation that cannot be reclaimed until consumed. Preserve original request context while waiting; awaiting resources is not transaction completion.

## Retry state-machine continuation (2026-10-18)

After a resource Retry, the existing DCache MissEntry remains allocated and retains the logical request context (line address, request type, original TxnID, data/merge information). Retry is not a processor-level failure and should not allocate a second MSHR for the same logical request. Suggested internal states: REQ_READY -> SENT_ONCE -> RETRY_WAIT_RESOURCE -> RESEND_READY -> SENT_RETRY -> normal response/refill. First send AllowRetry=1; resend AllowRetry=0. Static credits are consumed when the retry leaves the Requester. On normal completion, release MSHR and any credits/entry resources according to implementation.

Do not yet teach exact Retry field-preservation beyond PRETRYTXNID/CRD mask and AllowRetry; the draft points field constraints to a reserved section. Keep the distinction: Store Replay is caused by coherence/order conflict and re-executes a processor Store; protocol Retry is caused by Completer resource handling and resends the same logical interconnect request.

Next lesson: compare Retry with Store Replay and MSHR merge using one table, then a single integrated DCache scenario. Review trigger satisfied for ID topic; do not force another TxnID/DBID naming quiz before the comparison.

## Retry integrated scenario explanation repair (2026-10-18)

Learner said the combined Retry scenario was hard to understand and asked for explanation rather than deduction. No score assigned.

Scenario: ReadShared X TxnID7 AllowRetry=1 was sent; L2 requested Retry and indicated static resources type0 and type1; only type0 grant has arrived.

Direct answer: cannot resend; original MSHR remains allocated; wait for type1 static credit as well as type0; resend the same logical request with AllowRetry=0; this is protocol resource Retry, not Store Replay.

Teaching adaptation: explain with one simple analogy: a delivery request needs two reserved slots, a transaction slot and a data slot. Having one slot is insufficient; keep the original order slip/MSHR while waiting; after both slots are reserved, resend the same order once with retry disallowed. Do not introduce more signal fields until learner can state the four decisions.

## P-Credit resource-type clarification (2026-10-18)

Learner correctly answered: wait for type1 before resending when Retry requests type0+type1 and only type0 is granted.

Clarification: type0/type1 are not Compact CHI-mandated semantic resources. The local specification says resource types and the mapping to P-Credit signal groups are implementation-defined and agreed by Requester/Completer at design time. Teaching examples may map type0 to an L2 transaction-entry slot and type1 to a data-buffer slot, or to other resources such as SnoopEntry/response buffer; these are examples only. They are not coherence states, channel names, IDs, or fixed meanings. The retry mask tells L1 which agreed resource classes must be reacquired, not what those classes universally mean.

Next teaching: use a concrete illustrative DCache-L2 design contract with named resources (L2TxnSlot and L2DataBuffer) rather than opaque numbers, then revisit retry. Keep local spec versus implementation choice explicit.

## Compact CHI flow-control architecture lesson (2026-10-18)

Source: local chapter14.3/14.4, printed pages56-57 / PDF pages64-65. The draft's section14.3 is only a heading, so do not invent detailed conflict-Retry rules. Reference designs define three port styles: dynamic flow control (dynamic P-Credit + Retry), static flow control (static P-Credit, no Retry needed), and no-blocking (always enough resources).

For a typical Type1 L1-upstream/L2-downstream link in the local reference design: TXREQ uses full dynamic flow control with dynamic P-Credit, Retry, and QoS; RXSNP uses static flow control and Retry is not recommended because Snoop has high coherence priority and Snoop Retry would complicate ordering. In the reverse physical direction, L2 is the Completer of TXREQ/RXREQ and the sender of RXSNP; keep the L1-relative names clear.

Concrete resource names are illustrative: TXREQ dynamic credits may correspond to L2 transaction slots/data buffers; RXSNP static credits may correspond to guaranteed L1 ProbeQueue/SnoopEntry capacity. A static credit is a reserved capacity token and cannot be reclaimed/reassigned before consumption. For RXSNP, design must provide enough guaranteed capacity to avoid losing high-priority Snoop requests.

Next lesson: translate this reference design into an L1 DCache interface checklist: TXREQ dynamic credit/Retry; RXSNP static capacity/no Retry; TXRSP/TXDAT response backpressure and dirty-data retention. Then one integrated scenario, not another abstract resource-type quiz.

## Snoop-side static flow-control worked lesson (2026-10-18)

User requested continued learning. Source rechecked: local Compact CHI sections14.1.2,14.4.1.2,14.4.2, printed53,56-57 / PDF61,64-65.
New bounded concept: Requester/Completer are transaction roles, not fixed synonyms for physically upstream L1 and downstream L2. For ordinary REQ, L1 is requester and L2 completer; for SNP, L2 initiates and L1 completes. Credit direction follows receiver resources: in the reference static SNP flow-control design, L1 grants Snoop receive capacity to L2 (static grant signal group, e.g. PSCRD0GNT if the independently agreed SNP resource type is0). L2 consumes that receive-capacity credit when sending SNP; L1 receives on RXSNP. Do not confuse these with L2->L1 static grants for retried normal requests, and do not imply all links mandate the reference dynamic/static choices.

Illustrative microarchitecture only: ProbeQueue has2 entries, no other users, no in-flight initial messages; a static credit represents one guaranteed queue slot. L1 grants2 credits to L2; two accepted Snoop sends consume them and occupy2 entries. No third SNP may be sent on this statically controlled link until new capacity is granted. L2 must retain the unsent Snoop task; no dropping and no pretending invalidate completed. In the example L1 holds each entry through its response, then frees it and grants one replacement credit; other implementations may decouple ingress buffering from longer-lived transaction state but must preserve guaranteed capacity and request/response obligations. Sending a grant does not complete the Snoop, and receiving the SNP is not equivalent to responding.

Worked SC SnpToInvalid response path: L2 sends SNP using a credit, L1 receives/queues, reads state, transitions appropriately and sends TXRSP/SnpResp_I; when chosen entry lifetime ends and slot is free, L1 may grant fresh receive capacity. UD data-bearing path remains TXDAT/SnpRespData without mandatory separate SnpResp.
Pending integrated checkpoint: two entries occupied and L2 has zero remaining Snoop credits; L2 nevertheless has a free normal transaction entry. Can it send a third SNP, and what event allows sending again? Expected no; local L2 capacity does not replace L1 receive capacity; wait for L1 freeing guaranteed receive capacity and granting credit. This also retrieves local-versus-remote resource distinction. After learner answer, compress Credit/Retry topic and review a representative ordinary request Retry with named resources, not abstract numeric-type repetition.
No new mastery score assigned because this turn is instruction, not an answered test. Current remaining tasks unchanged; avoid moving progress percentages for every lesson.

## Snoop static receive-capacity check passed (2026-10-18)

Question: both L1 ProbeQueue entries occupied, L2 has zero SNP credits but a free local transaction slot. May it send another SNP?
Learner answer: No; wait for L1 to finish Probe, grant another Snoop credit, then send the third SNP.
Score: 10/10 for the stated example.
Refinement: in this example the entry remains occupied through response. The general prerequisite is guaranteed receive capacity and a fresh grant, not necessarily completion of the entire Snoop if another microarchitecture separates ingress buffering from subsequent context.

Compression saved to outputs/compact-chi-credit-retry-review.md: current covered rules, named roles, worked receive-capacity example, pitfalls, five self-tests with answers. Topic status: this capacity subscenario passed; full static/dynamic Retry logic remains to consolidate, no blanket claim of complete mastery.

Next bounded lesson: physical empty slots versus already-promised capacity. Example two queue slots, two static credits already granted to L2, one SNP launched but in flight and the other credit unused. ProbeQueue remains physically empty, but one slot is reserved for the in-flight message and the other for the unused granted credit. L1 cannot grant two additional credits from raw emptiness; that double-counts promised capacity and can overflow later. Source basis: section14.1.2 static grants cannot be revoked/reassigned before consumption; section14.4.1.2 recommends receiver-buffer-capacity credits. Specific counting is a teaching microarchitecture/invariant, not a quoted normative register equation.
Pending checkpoint: why can L1 not issue two more credits when its two-entry queue looks empty in the above in-flight/unused-credit scenario? Use a single explained response rather than several binary drills. Next spaced review after this: a combined writeback ID/completion scenario or an ordinary request Retry using resource names. Do not force the user-skipped CMO Feynman exercise.

## Static Snoop credit reservation explanation check (2026-10-18)

Question: Why cannot L1 grant the same two empty ProbeQueue slots again after two credits were already granted, with one SNP in flight and the other credit unused?
Learner answer: ensure there is space to process a Probe whenever it arrives.
Score: 9/10.
Feedback: correctly states the purpose of guaranteed receive capacity. Add accounting reason: issued credit is an outstanding capacity promise, whether unused at sender or converted into an in-flight message. Current physical emptiness does not mean unpromised capacity; duplicate grants allow arrivals to exceed storage. Do not infer full counter-implementation mastery from this purpose-only response.
Next bounded application: two queue slots, two credits already granted; SNP X arrives and occupies slotA, while slotB stays empty and the second credit remains unused at L2. Can L1 grant another credit merely for empty slotB? Expected no, slotB already backs the second outstanding credit. In this chosen simple design, grant replacement capacity after a slot is actually freed, not simply after a message arrives. Keep physical ingress capacity versus full-transaction completion implementation distinction explicit.

## No double-grant of Snoop capacity check passed (2026-10-18)

Question: two physical queue slots, two grants already issued; one Probe arrived, other granted credit still unused at L2. May L1 grant another credit merely because slotB is empty?
Learner answer: No, credit has already been authorized; positions depend on committed credit.
Score: 10/10 for the reservation decision.
Refinement: physical capacity is fixed by hardware, not determined by credits. Available additional grant capacity must account for queue occupancy plus outstanding capacity commitments (unused granted credits, grants/messages in flight). Learner now recognizes unused granted credit reserves space and raw emptiness is insufficient. No overflow policy should reclaim already-promised static capacity.

## Next integrated lesson: P-Credit is not a substitute for DBID response

Rechecked local section10.9, printed41 / PDF49: WriteUniqueFull starts REQ, receives CompDBIDResp, then sends NonCopyBackWrData; no data may be sent before CompDBIDResp in this described combined path. Use an explicitly configured dynamic-flow-controlled TXREQ with one agreed required credit, not an assertion that every possible port must use dynamic credits.
Flow: enough required dynamic P-Credits -> may issue first-time WriteUniqueFull request if local conditions also satisfied -> request consumes credits -> await CompDBIDResp -> save returned DBID and completion information -> send full data as NonCopyBackWrData using returned identity. Credit describes agreed resource availability before request issuance, while DBID is a per-transaction returned association; one does not replace the other. Do not incorrectly add a new independent dynamic credit requirement on TXDAT or conflate DBID with resource-type credit count.
Pending integrated retrieval question: request had sufficient credits and WriteUniqueFull was sent, but CompDBIDResp has not arrived. May L1 send NonCopyBackWrData immediately simply because it had credit? Expected no, wait for the required response/DBID. This retrieves ID/data-phase ordering after two credit-capacity exercises, without another trivial queue-count drill.

## Credit versus DBID prerequisite integrated check (2026-10-18)

Question: sufficient required dynamic credit, WriteUniqueFull issued, CompDBIDResp not received; can L1 send NonCopyBackWrData immediately?
Learner answer: No; L2 has not prepared and cannot accept it, otherwise dirty data may be lost. Also requested progress estimate.
Score: 9/10.
Feedback: correctly waits for the required response. Precise normative reason from section10.9 is that this combined path forbids NonCopyBackWrData before CompDBIDResp; returned DBID is also needed for association. Absence of response alone does not prove L2's physical buffer is full or guarantee an immediate data loss event. NonCopyBackWrData here carries new full-line write data, not the writeback of an existing UD line. L1 must preserve the payload in its selected pending-write buffer until all required send/completion obligations are met; do not equate CPU retirement with this interface event.

## Updated bounded progress checkpoint (2026-10-18)

Current focus: L1 DCache–L2 Compact CHI; ACE and Type2-5 deep classification paused. User wants continued guided study before implementation.
Approximate conceptual coverage65-70% (about one third of the core curriculum remains); independent interface-design preparation55-60%. These are curriculum estimates, not measured completion of RTL or guaranteed competence. Recent progress strengthens completion/ID mapping and static-capacity reservations; no justification to jump to near100%.
Stronger now: channel/state/request distinctions, permission-only versus data-bearing ReadUnique, Comp/CompData/CompAck/SnpResp roles, correct data-bearing Snoop path, split/combined WriteBackFull completion, TxnID/DBID direction-specific field mapping, dynamic credit consume/grant, static Snoop receive-capacity promises. Mixed but improving: resource Retry integrated reasoning, named resource categories, precise distinction of Credit resource availability versus per-transaction DBID response.
Remaining core gates: full ordinary request Retry/resend sequence without prompting; concurrent credit grant/consume/reclaim accounting; full multi-beat receive/send including valid error/order handling; response/dirty-responsibility Resp decoding; actual allowed Snoop/refill/writeback ordering from this draft instead of invented general arbitration; ID reuse and local context release; end-to-end port/state-machine and targeted verification walkthroughs. Optional implementation-specific extras: QoS/Way/alias; local draft atomic flow is TBD, conflict-Retry heading lacks details. These are not hidden prerequisites to all minimal interface learning.
Next substantive activity: a complete ReadShared resource-Retry-to-CompData-to-CompAck trace using named L2 resources and original/returned IDs. This consolidates earlier weak Retry reasoning before adding more terminology. Avoid repeated one-bit quizzes and avoid inflating completion from coached answers.

## Complete ReadShared Retry-to-CompAck worked example (2026-10-18)

User requested next lesson. Source verified: Compact CHI section10.2 (printed36) and chapter14 (printed53-55).

Illustrative design contract: one required resource class named L2TxnSlot; first-time ReadShared requires one corresponding dynamic credit. L1 has MSHR[2] for X, original TxnID7, ReadShared. Use a single-beat full-line DAT configuration/no Snoop/error conflicts to avoid conflating Ack timing and beat assembly.
Flow: enough dynamic credit -> TXREQ ReadShared AllowRetry1; L2 resource-accounting race triggers PRETRY for original7/L2TxnSlot; L1 keeps request context and waits for static credit; grant arrives -> resend same logical request with AllowRetry0 using agreed transaction association (draft does not fully specify resend-field constraints; no universal bit-for-bit rule invented); CompData later returns with original association (example7), returned DBID11, SC data; L1 maps response to MSHR[2], retains valid data/state, sends TXRSP CompAck.TxnID11; after local refill/consumer/ack obligations safely handled, release local miss entry. No extra mandatory Comp after CompData.

Pending integrated checkpoint: at the time PRETRY arrived but static L2TxnSlot credit has not arrived, can L1 free the waiting MSHR or immediately resend? Explain both actions through the request remaining unfinished and absent required static resource. Ask as one scenario rather than five fragmented fields. Follow correct answer by completing the ID11 CompAck retrieval in another full trace if needed. Do not claim independent full-flow mastery before the learner reconstructs it.

## Dynamic versus static Credit foundational repair (2026-10-18)

Learner answer to mid-Retry scenario: cannot release MSHR or resend immediately, but explicitly cannot explain why and cannot distinguish dynamic/static Credit. Record correct outcome, rationale unmastered; no full-flow gate passed and no progress increase.
Source rechecked: local Compact CHI sections14.1.1-14.1.2, printed51-53. Dynamic resources are reserved dynamically; Completer may request reclaim, requester may deny, and endpoint resource accounting can diverge during races; dynamic grants are valid required permission for first issuance, not merely optional hints. Static resources assigned to a Requester cannot be reclaimed or reassigned until consumed. In the currently studied dynamic+Retry port: first transmission consumes dynamic credits; after Retry, requester waits for sufficient static credits for the required resource classes before second transmission with AllowRetry0. Static credits also have other uses (Snoop/static-only port), so do not define them universally as only for retries or as per-transaction ID tokens.

Teaching repair: separate three concepts instead of five-step transaction:
1. L1 MSHR = local record of outstanding work; retain original logical request while waiting because no data/normal completion arrived, not because Credit lives in MSHR.
2. Dynamic Credit = adjustable L2 resource reservation for the first-send path; once consumed it does not remain an unused resource token.
3. Static Credit = non-reclaimable L2 resource reservation before consumption in the retry path; absence means retry's guaranteed resources not yet available to L1, not a free local MSHR shortage.
Explain the distinction with a two-row table and one worked ordinary ReadShared resource race. Avoid more signal acronyms or pretending 'retry=' a CPU request failing. Independent physical entry retention is a selected design; original context must remain safely recoverable.
Pending single comprehension check: during Retry wait with free local MSHR but no required static grant, is the missing prerequisite local request-recording space or the reserved downstream processing resource? Expected downstream reservation. Use answer to assess concept before another multi-part trace. User pace preference: concrete mechanisms, fewer fragmented one-bit/count drills; repeated misunderstanding requires genuinely new explanatory framing.

## Retry waiting prerequisite repair check passed (2026-10-18)

Question: an allocated L1 MSHR already records the retried Load, but required static credits are absent. Which prerequisite is missing?
Learner answer: the L2 processing-resource quota reserved for the resend.
Score: 10/10 for distinguishing local request context from downstream resource quota.
Status: this distinction repaired; dynamic/static complete-flow mastery still requires an applied example. Do not inflate progress from a narrow correct choice.

## Next bounded concept: resource-ready versus data-ready

Use one ReadShared Load, one illustrative required resource named L2TxnSlot, no Snoop or errors. Existing MSHR is retained after Retry. Static grant means the resource prerequisite is available, not a read result or completion response. Requester may resend once all required resources/local sending conditions hold, with AllowRetry0, consuming static credit. It still waits for corresponding CompData, validates/uses returned data/state, and sends required CompAck. MSHR entry release depends on safely handling all local obligations, not merely receipt of a credit. Avoid introducing additional acronyms before learner can explain this distinction.
Pending integrated question: required static credit has arrived, but no read data has returned; can L1 tell the waiting Load that its result is ready? Explain what the credit does and which event/data is still missing. Expected no; grant enables resend, CompData supplies read data. Ask as one scenario, not a five-field quiz.

## Static grant versus returned read data check passed (2026-10-18)

Question: all required static credits received but read data absent; can L1 report the waiting Load result ready?
Learner answer: No; still needs L2's read data.
Score: 10/10.
Gate result: separates downstream resource availability from read-data availability. This does not independently certify the full Retry state-machine yet.

## Next bounded engineering lesson: capture one-cycle Retry despite full MSHRs

Source rechecked: local Compact CHI section14.2, printed54-55 / PDF62-63. PRETRYV indicates valid retry for one cycle and Requester must accept such notifications at any time; no assumption that the sender holds it until a newly allocated MSHR is available. PRETRYTXNID identifies an already-issued outstanding request; locate its existing local context and update retry_pending/resource mask/wait state. No extra MSHR is required merely to record that same logical request's retry in this illustrative implementation. Full MSHRs prevent accepting new misses, not permission to drop a valid notification for an outstanding request. PRETRYTXNID that matches no issued request is undefined behavior in the draft, not a reason to silently allocate a new miss.
Illustrative local fields: req_txn_id, retry_pending, needed_resource_mask; event PRETRYV -> match outstanding entry by original ID -> save required resource types -> await static quota -> resend with AllowRetry0 -> await CompData -> required CompAck and local completion handling. Buffer/register Retry capture if pipeline cannot update context immediately; ensure storage/bandwidth supports the specified arrival stream, not just an arbitrary one-entry buffer.
Pending integrated question: MSHR array completely occupied, L2 sends PRETRYV for request7 already held in MSHR[2]. May L1 ignore it because no empty MSHR exists? Expected no; capture it and update existing MSHR[2]. Avoid splitting this into multiple naming quizzes. After this response, consider topic compression or worked timing walkthrough before more credit terms.

## PRETRY capture with full MSHR explanation (2026-10-19)

Learner understood that a full MSHR array cannot justify ignoring PRETRY, but asked how to handle it. Explanation: PRETRYV is a dedicated one-cycle sideband notification for an already-issued request. L1 matches PRETRYTXNID against existing MSHR[2], sets retry_pending, saves PRETRYCRD/resource mask, and transitions the same entry to RETRY_WAIT_RESOURCE; no new MSHR is allocated and no entry is released. It later waits for all required static credits, resends the same logical request with AllowRetry=0, then resumes normal response/refill. If the datapath cannot update the MSHR in the same cycle, a dedicated Retry-capture register/FIFO must capture the one-cycle notification; it cannot rely on a new free MSHR or drop it. This capture capacity is an implementation obligation derived from the spec's requirement that Requester always receive PRETRY.

Illustrative fields after capture:
MSHR[2].valid=1; req_txn_id=7; retry_pending=1; retry_resource_mask=...; allow_retry_next=0; state=WAIT_STATIC_CREDIT.

Next lesson: show a compact timeline from PRETRY capture to static grant to resend; no new abstract resource categories. Then compress/score Retry topic.

## Retry resend arbitration lesson (2026-10-19)

User requested continued study. Keep the current focus on DCache-L2 Compact CHI and use one named resource, not several unexplained numeric credit types.
Source rechecked: sections14.1.2/14.2 (printed53-55) define static reservation/consumption and AllowRetry; section14.4.3 (printed59-60) confirms resource mappings are examples and implementation-defined. No authoritative public source located for the exact PSCRD mechanism; local draft remains the source. The prose below table14.5 appears inconsistent with its ReadOnce credit-column mapping; do not teach the apparent typo as a normative rule.

Chosen illustrative design contract: two pending retried requests on the same L1-to-same-L2 link, A MSHR[2]/Load X and B MSHR[3]/Load Y; each requires one interchangeable static credit of the same agreed L2TxnSlot resource class and no other missing resources. A single PSCRD grant increments a shared available counter once, not once per waiting MSHR. Sending both would double-spend one downstream reservation. A resend arbiter can choose A first, reserve its token so B cannot take the same one, then consume on actual outgoing send. B remains waiting for another credit. Choosing older first is an example scheduling policy, not a Compact CHI-mandated order; fairness should avoid starving B.
Successful resend uses AllowRetry0 and changes A from WAIT_STATIC_CREDIT to WAIT_RESPONSE. It does not declare A complete, release its MSHR, or restore L1's line data/state before normal responses. Actual retry field-preservation requirements are incomplete in the draft; no unsupported exact TxnID reuse rule introduced. This lesson's queue indices are local implementation indices, not protocol IDs.

Pending applied checkpoint: a naive implementation sends one static-grant pulse to every waiting MSHR, and both A/B clear their wait flags and each claim the same credit for resend. What is wrong, and how should the shared credit allocator/arbiter handle the single grant? Expected: one credit can support one send, one winner consumes/reserves it; other remains waiting. Correct answer should explain the double-spend risk rather than only repeat a signal name. After this, retrieve that a resent ReadShared still waits for CompData and CompAck obligations (data availability vs resource availability); then summarize the Retry internal states. No new mastery score before answer.

## Shared static-credit arbitration check (2026-10-19)

Scenario: MSHR[2] and MSHR[3] both wait for the same resource class; one static credit arrives. Naive design wakes both and both resend.
Learner answer: wrong because one credit can authorize only one resend; notify/choose one MSHR; older MSHR may win.
Score: 10/10.
Feedback: Correct. Age-based oldest-first is a valid local fairness policy, not a Compact CHI requirement. Implement credit reservation atomically with the resend winner: select one eligible MSHR, reserve/consume the single token, transition it to WAIT_RESPONSE with AllowRetry0; leave other entries waiting. Do not broadcast a grant as independent per-entry permission.

## Retry controller compact model

```text
if retry_credit_available && eligible_waiting_mshr:
    winner = arbiter.select(waiting_mshrs) // oldest-first example
    reserve credit for winner
    winner.state = RESEND_READY
    winner.allow_retry = 0
    send TXREQ when channel/resource conditions hold
    consume credit exactly once at request departure
else:
    keep entries in WAIT_STATIC_CREDIT
```

The grant counter and resend arbitration must handle concurrent grants/requests without double-spending. Recheck that the same logical request still has its original context and is not declared complete until normal CompData/CompAck/refill obligations finish.

Next topic after one more applied timing check: compress resource Retry and begin verification properties/assertions for DCache-L2 Compact CHI. CMO Feynman remains skipped by user choice; ACE remains paused.

## Verification assertion organization started (2026-10-19)

Created output artifact: outputs/compact-chi-dcache-verification-assertions.md.
It organizes protocol-level assertion candidates into request/MSHR correlation, TxnID/DBID, multi-beat DataID/masks, state/permission, Snoop, ReadShared/ReadUnique, WriteBackFull/Evict, Credit/Retry, queue capacity, backpressure, and liveness. It includes priority order for SVA translation and explicit limitations where the local draft or RTL signal names are not yet fixed.

Important current assertion correction: Compact CHI local section10.11 permits status-only TXRSP/SnpResp or status+data TXDAT/SnpRespData; do not require both for every data-bearing Snoop. The artifact reflects this.

Next teaching step: begin with the first five executable invariants (response-to-entry match, no duplicate TxnID, DataID mask completion, dirty data retention under TXDAT backpressure, and SC->UC authorization) using named pseudo-signals. Avoid writing compile-ready SVA until the user's RTL interface names/encodings exist.

## Chisel assertion intent clarification (2026-10-19)

Learner asked whether the first protocol assertion is a reminder for future Chisel development. Answer: yes. Current assertions are design-time invariants/checklist, not immediate RTL work. When development begins, translate them to Chisel `assert` guarded by actual channel handshakes and reset/error exceptions. Added Chisel translation templates to outputs/compact-chi-dcache-verification-assertions.md: response-to-entry matching, DataID duplicate detection, TXDAT backpressure stability, plus notes that actual Bundle fields/ID namespaces/flush behavior must be supplied before compile-ready code.

## DCache design baseline artifact created (2026-10-19)

User asked whether to learn or develop next and whether to create a DCache document/architecture diagram. Decision: create a first protocol-level design baseline and architecture diagram before RTL; continue learning while filling it. Artifact saved at outputs/compact-chi-dcache-design-baseline.md.

It contains: scope, Mermaid component architecture, I/SC/UC/UD state table, message/transaction table, MSHR/Refill/ProbeQueue/WritebackQueue roles, ID rules, Retry/Credit baseline, priority, development order, open parameters, and first Chisel assertion checklist. This is a learning/design baseline, not final RTL. Chisel implementation is deferred until line/data widths, queue sizes, ID widths, ordering/critical-word policies and Credit mappings are chosen.

Next teaching step: review the baseline's first design choices and identify which parameters are mandatory before defining Chisel Bundles. Do not start large RTL code without that parameter pass. Verification work will be translated to Chisel `assert` once actual Bundle fields exist.

## User project constraints (2026-10-19)

- When the work is about to transition from learning/baseline design into formal DCache design-document and architecture-diagram work, explicitly remind the user. A first baseline document and Mermaid architecture diagram already exist, but this is still pre-RTL design preparation.
- User target: approximately SPEC2006 score 8.0; do not treat this as sufficient microarchitectural specification. Need workload definition, frequency, core count, memory system, compiler/toolchain, cache sizes/latencies, and measurement method before turning it into DCache requirements.
- User asks whether XiangShan/Kunminghu source can be used as a reference and whether remote ASUS repository is visible. Need inspect official/public source and clarify current host/repository access boundaries; do not claim access to remote repository unless attached or handed off.

## DCache design and XiangShan reference checkpoint (2026-10-19)

User requested an explicit reminder before formal DCache design-document/architecture work. First protocol baseline and Mermaid architecture already exist; formal parameter freeze and Chisel Bundle/RTL have not started. Before crossing into that phase, explicitly say: 【即将开始正式 DCache 设计】.

Public reference check: official OpenXiangShan repository is Chisel-based and has Kunminghu-v2/v3 development branches; official design documentation covers Kunminghu V2R2. Official user guide lists typical V2 configurations including L1 DCache 64/128KB configurable and L2 512KB-1MB, 8-way, inclusive. These are references, not automatic requirements for this project.

SPEC target note: user says approximately 8, but metric is underspecified. Public XSCC page reports KHV2R2-RTL sampled SPECint2006/SPECfp2006 Ratio/GHz geomeans under a stated toolchain and explicitly says results are sampled estimates, not full SPEC CPU2006 scores. XS-GEM5 reports current configurations with different coverage and warns scores with 0.3c/0.8c/1c are not directly comparable. Do not claim a definitive public Kunminghu V2 full SPEC2006 score from these figures.

Decision method: hard constraints -> documented baseline -> provisional parameter -> sensitivity test -> freeze. Keep uncertain values configurable and record rationale. Suggested learning baseline is in outputs/compact-chi-dcache-design-baseline.md; it is explicitly marked as a design starting point, not a XiangShan parameter claim.

User asks about remote ASUS visibility: current thread has no attached ASUS repository/worktree, so do not claim direct access. Access requires the repository/worktree to be attached or the thread handed off to that host.

## Complete ReadShared Credit/Retry/DBID timing check (2026-10-19)

Question: distinguish the meanings of static Credit arrival, a `TXREQ` resend with `AllowRetry=0`, and `CompData` returning `DBID=11`.

Learner answer: static Credit means L1 gains resend permission and L2 resources are ready; `AllowRetry=0` resend means the L2 request is formally accepted and L2 can allocate a DBID; `CompData` returning `DBID=11` supplies the transaction identity needed for later confirmation.

Score: 8.5/10.

Correct points: understood that static Credit is a prerequisite for resend; understood that the returned DBID is the identity used for subsequent confirmation; preserved the ordering from resource permission to returned transaction identity.

Correction: `AllowRetry=0` is a property of the request L1 sends after resource permission. It means L1 is asserting that the required retry-preventing resource contract has been satisfied; it does not by itself prove that L2 has formally accepted the request. Formal acceptance is established by the subsequent normal response path (in this teaching ReadShared model, `CompData` carrying the returned DBID and state, with no Retry). Static Credit is a resource promise/permission, not itself the DBID and not necessarily proof that every downstream stage has completed.

Knowledge gap: keep separating (1) permission to attempt/resend, (2) request acceptance and DBID allocation, and (3) transaction completion/MSHR release. Review trigger: before introducing another new mechanism, ask the learner to classify each event in a short ReadShared timeline and identify which event creates `returnedDBID` and which event permits MSHR release.

## ReadShared transient Snoop and refill-discard check (2026-10-19)

Question: L1 starts in `I`, sends `ReadShared(X)`, then receives `SnpToInvalid(X)` before `CompData`; if four `DataID` beats later return, why must L1 receive them but not install the line as valid?

Learner answer: `pendingSnoop=SnpToInvalid` means a Snoop arrived during the read and requires the same-address cache line to become Invalid; the four data beats are still received to complete the read, but they are not written as a valid cache line because the later Snoop invalidates the line.

Score: 9/10.

Correct points: correctly understood the meaning of `pendingSnoop=SnpToInvalid`; correctly separated receiving the four-beat response from installing a valid cache line; correctly identified that the pending invalidation controls the final cache state.

Precision added: the line was still stably `I`, so the Snoop does not necessarily invalidate an already-installed `SC` line. It records that the in-flight allocation must not be committed. The data may still be used to complete or forward the original CPU Load, and the L1 must complete any required ReadShared acknowledgment, but the refill is discarded or kept invalid. `pendingSnoop` is local transient metadata, not a new protocol channel message.

Knowledge gap: transient state must be modeled as stable state plus active request plus pending external event plus data-progress mask plus finalization action. Review trigger: before moving to another mechanism, reconstruct `IS_WAIT_DATA -> IS_SNP_INVALID_PENDING -> receive/discard refill -> CompAck -> I -> MSHR free` and explain why `RefillBuffer` is not the same as `Cache Array`.

## Critical-word forwarding and MSHR release clarification (2026-10-19)

Learner asked what it means to forward the critical word directly to the original CPU Load, and stated that the MSHR cannot release immediately because it still records refill information, final state, and the pending Snoop; it must wait until the Snoop finishes and the final state becomes `I`.

Assessment: conceptually correct, with one precision correction.

Critical-word forwarding means that when the `RXDAT` beat containing the CPU request's word arrives, the refill path extracts the word from `RefillBuffer`, applies the load byte mask/sign or zero extension, and sends it through the load-response/wakeup path to the waiting CPU request without waiting for the whole cache line to be installed. The response must itself use a valid/ready-style holding register or response queue so it is not lost under CPU backpressure. The remaining DataID beats must still be received and tracked.

MSHR release condition: forwarding the critical word alone is insufficient. The MSHR remains until the original CPU response is accepted, all required RXDAT beats and protocol acknowledgments are complete, any pending Snoop response/data is sent, the final cache-install/discard decision is committed, and no merged request still depends on the entry. In the teaching `SnpToInvalid` case, this normally means the refill is discarded, the final stable state remains `I`, the necessary CompAck is completed, and only then is the MSHR freed. “Snoop ended” means the response handshake and local finalization are complete, not merely that `RXSNP` arrived.

Review trigger: ask the learner to trace a four-beat line where the CPU word is in DataID=1 and arrives before DataID=0/2/3, identifying the forwarding handshake, the received mask, and why the MSHR remains allocated.

## Valid/Ready-only Compact CHI choice and TileLink state mapping (2026-10-20)

Learner clarified that the intended L1 DCache-L2 interface uses `valid/ready` only, without P-Credit flow control, and forgot the mapping of XiangShan TileLink `w_grantlast`, `s_grantack`, and `s_mainpipe_req` to the Compact CHI flow.

Design decision: for this simplified point-to-point interface, Retry can be omitted if `TXREQ.ready=1` is a strong admission signal: when `TXREQ.valid && TXREQ.ready` fires, L2 must have allocated or secured all resources needed to accept and complete the transaction; after the handshake, L2 cannot reject the request due to ordinary resource shortage. If `ready` only means an ingress FIFO has space and later resource failure is possible, Retry or another explicit rejection/recovery mechanism is still required. `valid/ready` is still flow control; the choice removes Credit-based protocol resource flow control, not all backpressure.

Mapping is approximate, not a protocol equivalence:

- TileLink `w_grantlast`: the last Grant/GrantData beat arrived. Compact CHI analogue is all expected `RXDAT`/CompData beats have been accepted, tracked by `receivedMask`; it does not by itself mean the refill has committed or CompAck has completed.
- TileLink `s_grantack`: requester sends GrantAck after the grant path. Compact CHI allocating-read analogue is L1 `TXRSP` CompAck after receiving the required `CompData` or `Comp`; the exact ID field follows the chosen Compact CHI Bundle contract.
- TileLink `s_mainpipe_req`: a local request from the miss entry to the main pipe for refill/metadata/data-array processing. It has no direct CHI channel counterpart; it corresponds to a local `refillCommit` or `cacheArrayWrite` stage after protocol data reception.

Knowledge gap: distinguish protocol-channel completion from local cache-array commit and CPU response completion. Review trigger: ask which of the three events permits MSHR release; the answer is none individually, because release requires all protocol, local refill, CPU response, and pending Snoop obligations to be complete.

## Valid/Ready admission backpressure check (2026-10-20)

Question: in the no-Credit/no-Retry design, if the L2 transaction table is full and cannot accept a new `ReadShared`, what should `TXREQ.ready` be, and what must L1 preserve?

Learner answer: `TXREQ.ready` should be `0`; preserve the read address and final state.

Score: 8/10.

Correct points: correctly drove `ready=0` when L2 cannot admit the request; correctly understood that the request remains pending rather than being retried or discarded.

Correction: while `TXREQ.valid=1` and `TXREQ.ready=0`, L1 must keep the entire TXREQ payload stable until `valid && ready`: opcode (`ReadShared`), address, original TxnID, size/attributes and all other request fields. The MSHR remains allocated and stores the request context. The final coherence state is generally not known yet for `ReadShared` because L2 may return `SC`, `UC`, or `UD`; store it as unknown/undecided until the response, rather than pretending a final state is already determined. The MSHR may store a target policy or allowed-state set.

Review trigger: ask the learner to distinguish fields known before TXREQ acceptance (address, opcode, original TxnID) from fields created or determined after acceptance (returned DBID, returned state, received DataID mask).

## TXREQ pre-acceptance field classification check (2026-10-20)

Question: before `TXREQ` handshakes, classify `Addr=X`, `Opcode=ReadShared`, `TxnID=7`, `DBID=11`, `returnedState=SC`, and `receivedMask=1111`.

Learner answer: treated `Addr`, `Opcode`, `TxnID`, `DBID`, and `receivedMask` as known before acceptance, and `returnedState=SC` as only known after the L2 response.

Score: 6/10.

Correction: before the TXREQ handshake, L1 knows and holds `Addr=X`, `Opcode=ReadShared`, and the original `TxnID=7`. `DBID=11` is allocated/returned by L2 only after the request is accepted, so it is invalid before then. `receivedMask` is not a request field; it starts at `0000` and changes only as RXDAT/CompData beats are accepted. `receivedMask=1111` means all expected data beats have arrived, so it is also only known later. `returnedState=SC` is likewise determined by the L2 response and must not be assumed in advance.

Knowledge gap: distinguish request context, downstream-generated response context, and local receive-progress state. Review trigger: before the next transient-state lesson, reconstruct a timeline with `reqAccepted`, `returnedDBID`, `returnedState`, and `receivedMask` in that order.

## Post-TXREQ acceptance field-state check and readiness checkpoint (2026-10-20)

Question: after `TXREQ` has successfully handshaken but before any `RXDAT` response, classify `returnedDBID`, `returnedState`, and `receivedMask`.

Learner answer: `returnedDBID = INVALID`, `returnedState = unknown`, `receivedMask = 0000`.

Score: 10/10.

Feedback: correct. A successful TXREQ handshake means the request was admitted under the strong `ready` contract, but it does not mean L2's returned DBID or coherence state has arrived. No RXDAT beat has been accepted, so the local data-progress mask remains zero. Current learning readiness is sufficient to continue protocol/design review, but not yet to freeze all parameters or start RTL.

Readiness checkpoint: Compact CHI conceptual coverage remains approximately 70% (not a measured competence score); DCache-L2 interface preparation is approximately 60%–65% after choosing a valid/ready-only admission model. Stable-state/request/response basics, ID timing, writeback/evict, Snoop classes, multi-beat receive concepts, and the initial transient-state model are covered. Remaining gates before formal DCache design are: complete transient-state matrices for in-flight ReadShared/ReadUnique/WriteBack plus Snoop, define the no-Retry strong-ready resource contract and channel dependency checks, review mandatory parameters, and write the transaction/resource/release rules into the design baseline.

The learner may continue studying DCache mechanisms immediately. Formal DCache design should begin only after the parameter review and transient-state gate; before freezing parameters, defining Chisel Bundles, or writing RTL/assertions, issue the exact reminder: `【即将开始正式 DCache 设计】接下来将冻结参数、定义 Chisel Bundle，并开始编写 RTL/断言。`

## Transient ReadShared DataID placement check (2026-10-20)

Scenario: `MSHR[2]` has stable state `I`, active `ReadShared`, `pendingSnoop=SnpToInvalid`, and `receivedMask=0010`; `RXDAT` then returns `DataID=3`.

Learner answer: place `DataID=3` in the MSHR entry; do not commit the line as `SC`; do not release the MSHR because the Snoop has not started yet.

Score: 7/10.

Correct points: correctly rejected the `SC` commit; correctly kept the MSHR allocated while the line has pending refill/Snoop work.

Correction: the complete data beat belongs in `RefillBuffer[3]` (or an equivalent data storage), while the MSHR stores `receivedMask[3]=1` and a pointer/index to the refill storage. The MSHR should not normally hold the entire cache-line beat payload. Also, `pendingSnoop=SnpToInvalid` means the Snoop has already arrived and been recorded; the remaining work is to complete its response/ordering and commit the final invalid/discard decision. The line cannot become `SC` because the pending Snoop requires the in-flight refill not to be installed, not because Snoop has not started.

Review trigger: ask the learner to distinguish three actions for a received beat: store payload in RefillBuffer, update progress in MSHR, and decide whether Cache Array installation is allowed.

## RefillBuffer ownership versus physical placement correction (2026-10-20)

Learner challenged the statement that RefillBuffer should not be in the MSHR, noting that XiangShan appears to handle refill data with the MissEntry/MSHR. Correction accepted: “MSHR owns the refill context” and “the refill payload is physically stored inside the MSHR entry” are different claims.

Logical ownership: an MSHR must own or reference the refill storage for its transaction, including the DataID progress mask and the final install/discard decision. Physical implementations may use per-entry refill data, a shared refill/grant buffer plus an MSHR buffer ID, or direct forwarding into a refill/MainPipe pipeline. The XiangShan public DCache documentation describes MissEntry state, early MainPipe refill requests, forwarding of Grant data to MainPipe, and releasing the MissEntry after refill completion; it does not require a single physical storage organization.

For the teaching Compact CHI design, allow either of these equivalent models:

```text
MSHR[2].refillData[DataID]
```

or:

```text
RefillBuffer[bufId][DataID]
MSHR[2].refillBufId = bufId
```

In both cases, `receivedMask` and `pendingSnoop` stay in the MSHR/transaction context. In the `SnpToInvalid` case, “refill complete” must mean all RXDAT beats are received, not that a valid SC line has been installed. The MSHR may release only after data reception, CPU response, required protocol acknowledgments, Snoop response/ordering, and final `I`/discard commit are complete.

## Refill completion versus cache installation distinction passed (2026-10-20)

Learner clarified: once `receivedMask=1111`, the RefillBuffer contains the complete cache line, so data refill is complete; `Cache Array.Valid=0` remains possible because `SnpToInvalid` forbids installing the line. Data reception means a complete cache line arrived from L2; cache installation additionally requires the line to be admitted into the cache with `Valid=1` and the correct coherence state.

Assessment: 9.5/10. This distinction is correct and important. Recommended implementation terminology is to avoid one ambiguous `refillDone` bit:

```text
allDataReceived       = receivedMask == allOnes
refillStorageComplete = allDataReceived
cacheInstallAllowed   = allDataReceived && !discardRefill && finalStateValid
cacheInstallDone      = cacheInstallAllowed && tag/data/state write committed
```

For `pendingSnoop=SnpToInvalid`: `allDataReceived=1`, `cacheInstallAllowed=0`, `finalState=I`. None of these individual bits alone releases the MSHR; protocol acknowledgments, CPU response, Snoop response, and finalization must also be complete.

## MSHR release blocked by CPU response backpressure (2026-10-20)

Question: if `allDataReceived=1`, `pendingSnoop=SnpToInvalid`, Snoop response and CompAck are complete, but the CPU Load response has not been accepted, can the MSHR release?

Learner answer: no; the cache line has not yet been made Invalid and the Load transaction is not complete.

Score: 8.5/10.

Correct conclusion: the MSHR must remain allocated because the CPU response has not completed its valid/ready handshake. The waiting CPU request still depends on the MSHR/response data, so releasing it could lose or misroute the response.

Precision correction: the final coherence state may already be logically committed as `I`; in this `SnpToInvalid` path, `Cache Array.Valid` can remain `0`, so there may be no separate “write Invalid” operation. The immediate blocker is not necessarily that an `I` state write is pending, but that the original Load response is not accepted and the local transaction is not fully finalized.

Review trigger: distinguish final coherence-state commitment from CPU-response acceptance; either one can be complete before the other, and both are required before MSHR release.
