# 定向测试与可替换 L2：验证环境修改方案

状态：已实现显式 do_load/tick 与自动检查/排空，single_load_miss 待用户 review。CMO 和真实 L2 接入未实现。
日期：2026-11-17。

## 1. 已确认的决定

1. 环境保留理想 LSU、理想 L2（包括稀疏理想内存）、DCache DUT 和测试用例。
2. 删除独立 `ReferenceModel`、`Scoreboard`，不再新增理想 DCache 模型。
3. 每个测试直接表达操作顺序、周期边界和期望；重复的检查由 TestContext 自动执行，具体方案以第 13 节为准。
4. 理想 L2 必须通过与真实 L2 一致的 DCache 侧接口工作，后续可以替换成真实 L2 RTL。
5. 不参考 `dcache_test`，不改成大型通用验证框架，不把原 scoreboard 换个名字搬到其他目录。
6. 实现时先迁移现有 Load 的必要检查，再删除旧文件，不让测试变成只跑不检查。首轮已完成该迁移。

这属于自动检查的仿真验证，不是形式化证明。定向测试证明所运行场景符合预期，不宣称覆盖所有并发与一致性组合。

## 2. 最终结构

```text
测试用例：操作 + 固定期望 + 局部检查
      │ CPU 操作                     │ 初始化数据/环境配置
      ▼                              ▼
   CpuModel                        下游实现
  理想 LSU                   ┌─ L2Model + 稀疏内存
      │                     或
      │                      └─ 真实 L2 RTL + 下游内存环境
      ▼                              │
  DCache DUT  <── DCacheL2Link 七通道 ─┘
      │                              │
      └──── 公开端口握手快照 ──────────┘
                      │
                      ▼
                 测试用例检查
```

测试只读取公开端口快照和 CPU 完成结果。不能读取 `L2Model` 私有事务或 DCache 的 tag、way、MSHR 内部寄存器来决定期望答案。

LSU/L2 保留驱动协议所需的状态和局部合法性检查。例如 LSU 仍需记录等待哪个 MSHR；L2 仍需记录已经发送几个数据 beat。这是端点行为，不是另建一套参考 DCache。

## 3. “接口一模一样”的具体约束

### 3.1 唯一数据边界

保留现有 `common/compact_chi_link.h` 的 `DCacheL2Link`，不另造理想 L2 专用请求/响应接口。

| 通道（DCache 视角） | valid 和 bits 的驱动者 | ready 的驱动者 |
|---|---|---|
| TXREQ | DCache | L2 |
| TXEVT | DCache | L2 |
| TXRSP | DCache | L2 |
| TXDAT | DCache | L2 |
| RXRSP | L2 | DCache |
| RXDAT | L2 | DCache |
| RXSNP | L2 | DCache |

每个通道的字段、位宽、opcode、地址编码、ID 含义和 valid/ready 语义必须与项目 Compact-CHI Bundle 一致。当前核对源是：

- `/home/ywj/Compact-CHI/src/main/scala/anserl2/compactchi/CompactChiPort.scala`；
- 同目录的 `CompactChiParams.scala`、`CompactChiOpcodes.scala`；
- `src/main/scala/YQH/cache/DCacheParams.scala` 的项目参数；
- DCache 实际例化的 `CompactChiRequesterIO`。

C++ 类型是这些硬件字段的镜像。`uint8_t` 能存下一个字段不代表语义就相同，仍需检查有效位宽和字段含义：

- TXREQ/TXEVT 使用完整字节地址；RXSNP 地址编码为 `PA[47:3]`，使用已有地址转换函数。
- `tagAlias` 不丢弃，不能直接拿物理地址高位代替虚地址 alias。
- Read 的 `CompAck.txnID` 对应返回 DBID；`SnpResp.txnID` 和 `SnpRespData.txnID` 回填 Snoop ID。
- CMO TXREQ 和 CompCMO 使用 CMO 请求号，当前为 16；它不同于 CPU CMO id 和 L2 发起的 Snoop ID。
- RXSNP 的 `txnID` 在当前 Bundle 中采用 `dbidBits` 宽度。实施时检查 `RxSnp` 当前使用 `TxnId` 别名的问题，即使现配置同宽也不能混淆语义。
- `chi_types.h` 中把所有 TXRSP/TXDAT 的 txnID 一律解释为 DBID 的旧注释需要按 opcode 修正。

接口相同不要求理想 L2 与真实 L2 延迟、命中率、并发能力完全相同。理想 L2 可以暂时用 ready 限制成单事务，但不能绕开实际七通道调用 DUT 内部方法。

### 3.2 当前已具备与尚缺的部分

现有 L2Model 已只依赖 `DCacheL2Link`，没有直接访问 VDCache。这部分保留。

尚需解耦的是：`main.cpp` 直接实例化 L2Model、直接调用其内存初始化函数，并使用只适合一个 RTL DUT 的 eval 流程。测试不能继续绑定这些实现细节。

真实 L2 的具体顶层、版本、端口名和下游内存接口尚未在本次任务中指定。因此现在冻结公共契约，不宣称已经完成真实 L2 的逐字段适配。接入时必须逐字段核对真实顶层。若它暴露的是其他协议或 credit/retry 接口，需明确的协议桥，不能用简单改名伪装成同一接口。

### 3.3 数据接口和环境控制分开

运行时数据只能从七通道进入/离开 DCache。以下属于仿真环境控制，不是 CHI flit：

- 设置时钟和复位；
- 初始化后备内存；
- 设置理想 L2 的延迟策略；
- 查询下游是否排空；
- 为特定测试安排外部一致性请求。

测试通过仿真运行器的少量普通方法使用这些功能，不调用 `l2_.read_line()` 取得正确答案，也不调用 `l2_.current_transaction()` 判断 DUT 对错。

同一份初始数据 D：测试自己保存期望副本；理想模式写入稀疏内存；真实模式初始化真实 L2 后面的内存模型。真实模式下不能只填写一个与真实 L2 无连接的 C++ map。

CMO 的 Snoop 必须由下游根据收到的 CMO 请求发起。真实 L2 模式不能同时保留理想 L2 向这条 RXSNP 线驱动，否则形成两个源。单独 Probe 测试将来通过真实系统的外部请求入口触发；暂时无法支持的环境控制明确报“不支持”，不能返回假成功。

### 3.4 真实 L2 adapter 的边界

接入真实 L2 时新增单独 `RtlL2Adapter`：只做端口位宽转换、驱动、采样和 RTL eval，不生成假 CompCMO、不代替真实 L2 做事务。

当前不创建空的 RTL adapter、不新增复杂继承树。下游实现的选择只留在仿真运行器中，测试文件和 CpuModel 不出现 `VL2` 或 backend 分支。只有一个理想实现时可以直接调用；接入第二个实现时再用一个小接口或编译选项切换。

真实 L2 的下游内存模拟属于该 backend 的组成部分，其接口和维护工作不会因为 DCache 侧接口一致而自动消失。

## 4. 共同的采样规则

当前主循环实际顺序是：低电平 eval/采样，保存边沿快照，执行高电平 eval，然后 CPU/L2 advance。沿用这个边界，不采用旧 CMO 文档曾列出的“先更新模型再上升沿”顺序。

修改后的运行器每拍执行：

1. 根据 current 状态驱动 LSU 和下游各自拥有的输入输出。
2. 时钟保持低，计算组合逻辑并取得稳定的 DCache/L2 七通道快照。
3. 测试检查该快照中的握手和当前 CPU 完成结果；同拍多事件从同一快照判断，不能反复计数。
4. 保存快照，让所有参与的 RTL 模块经历一次有效上升沿。
5. LSU 和理想下游根据该快照计算并提交 next 状态。真实 L2 的寄存器由 RTL 时钟推进，不能额外用软件再次推进事务。
6. 进入下一拍；新完成结果在后续采样中交给测试一次。

未来两个独立 Verilator 模块之间若有 ready/valid 组合依赖，运行器需要在不改变时钟的情况下反复交换/求值到稳定，或使用统一 RTL 顶层由模拟器处理组合逻辑。设置收敛上限，不能把每次跨模块复制人为变成一拍延迟，也不能分别重复触发上升沿。

reset、wave dump、cycle 计数由运行器统一负责；L2Model 自己不调用 DUT eval。

## 5. 删除 reference/scoreboard 后怎样检查

### 5.1 用例自己保存少量状态

例如 `single_load_miss` 只需要：

- 目标地址、初始化数据 D；
- 当前阶段、已完成的 CPU 操作号；
- 当前读请求的 TxnID、返回 DBID、已收到的 beat mask；
- ReadShared、CompAck、refillWakeup、最终 Load 完成次数；
- 最后一次进展周期和总超时。

不用物理行到权限的全局表，不用通用 PendingLoad/PendingCmo 事务数据库。字段只为当前测试的具体检查服务；不能把原 scoreboard 的全部表复制进 TestContext。

### 5.2 检查职责

| 检查 | 放置位置 |
|---|---|
| LSU 请求和响应身份、Load replay/wakeup 状态 | 现有 LSU 模型 |
| 理想 L2 收发 beat、DBID/CompAck 等事务合法性 | 理想 L2 的现有行为逻辑 |
| 最终数据、预期 miss/hit、CMO opcode/响应关系、次数和顺序 | 各测试用例 |
| 七通道反压保持和字段范围 | 一个小的公共检查函数，供两种下游模式共用 |
| 超时、错误打印、时钟、波形 | 仿真运行器 |

公共链路检查只保存上一拍被反压的 flit，不保存内存、权限或一般事务表。这样切换真实 L2 后，仍能检查公开接口，而不是只依靠理想 L2 内部检查。

测试从 fixture 保存 D 的副本，直接计算目标字节的期望值；数据比较不能使用 DUT 返回数据或 L2 可变内存来生成 expected。

### 5.3 最小 Load 验收

```text
准备 A 所在行数据 D
  -> 提交一次 Load A
  -> 检查一笔地址正确的 ReadShared
  -> 检查两拍 RXDAT 的内容、DataID、事务关联
  -> 检查一笔正确 CompAck
  -> 检查正常 refillWakeup 与 CPU 最终返回 D 的目标 8 B
  -> 检查只完成一次，且没有意外 loadReplay
  -> 等待场景和环境排空
```

CompAck 与 refillWakeup 不绑定固定先后，也不指定固定周期。Load 完成不能代替 CHI 事务完成。

故意让 expected 数据不同、漏一拍、重复响应或提前 CompCMO 时，检查必须报错；通过这种检查自身的反例验证，避免删除 scoreboard 后出现“只要不超时就 PASS”。

## 6. CMO 的简化检查

用户已同意独立 `CmoModel` 以及先验证干净行。具体设计见修订后的 `05_cmo_verification_design.md`。

每个用例只有明确的阶段：

```text
首次 Load 完成并排空
  -> CMO 请求/响应闭环
  -> 第二次 Load 完成并排空
  -> 核对本用例计数与数据
```

记录本笔 CPU CMO id、CMO TxnID、Snoop ID 和事件标志即可。测试不能驱动 L2 的协议线；L2 自己根据 CMO TXREQ 发 Snoop 并等待响应。

- Clean：SC 保持 SC；第二次 Load 在无其他干扰的该用例中应 hit。
- Flush/Inval：检查对应 Snoop 响应为 I；第二次 Load 应重新 miss。
- TXRSP 没有地址字段，通过已记录的 Snoop ID 关联目标行。
- 不在 cmoResp 到达时修改一张参考缓存表；后续 Load 和公开响应验证效果。

同样的操作和功能结果检查可用于真实 L2。理想模式的 4～7 拍延迟、特定 Snoop 数量/映射等策略检查要明确适用 backend；是否能跨 backend 严格复用，由真实 L2 的接口契约决定，不暗中放宽为无检查。

Clean 的准确含义是清脏并保留有效行，不是强制降成 SharedClean。当前项目采用 `CleanShared -> SnpToClean`，UD 会变 UC，UC 保持 UC；首版预热为 SC，所以只检查 SC 保持 SC。

## 7. 文件修改清单

下表为总体修改清单。已完成部分见第 10 节，CMO/真实 L2 相关项仍为后续计划。

| 文件 | 计划改动 |
|---|---|
| `simLDCache/reference_model.h/.cpp` | 删除，不搬迁其内存/权限表 |
| `simLDCache/scoreboard.h/.cpp` | 删除，必要检查按第 5 节迁移；不保留兼容壳 |
| `main.cpp` | 删除 Scoreboard include、对象、初始化、observe/check_drained；只保留入口、测试选择、报告 |
| 新增 `simulation.h/.cpp` | 从现有 main 提取运行器，持有 DUT/LSU/下游，统一 reset、内存准备、单周期推进、快照、排空 |
| `test_framework.h/.cpp` | 保存测试配置和注册；修复 all 当前始终传 `SingleLoadMiss` 的分派；结果由场景决定 |
| 新增 `tests/single_load_miss.cpp` | 迁移现有场景及其必要检查，不新增复杂测试基类 |
| 新增 `tests/cmo_tests.cpp` | 后续实现三个小的 CMO 场景，各自阶段和期望值清晰可见 |
| `simCPU/cpu_model.h/.cpp`、`cpu_types.h` | 保留 Load 行为；将“结果由 scoreboard 判断”改成由测试判断；后续接 CmoModel |
| 新增 `simCPU/cmo_model.h/.cpp` | 独立单笔 CMO 驱动，保持用户已接受的拆分 |
| `simCPU/load_queue.*`、`load_port.*` | 继续处理 LSU 行为，不加入参考内存和 cache 权限判断 |
| `simL2Cache/l2_model.h/.cpp` | 保留一个 L2Model class 和稀疏内存，仅通过七通道通信，扩展 CMO/Snoop；不持有测试对象 |
| 可新增 `simL2Cache/l2_cmo.cpp` | 实现同一个 L2Model 的 CMO 方法；需要拆分时使用，不额外增加 CMO L2 类 |
| `common/compact_chi_link.h` | 保持公共线网边界；补充双方所有权、采样和真实 RTL 对接约定 |
| `common/chi_types.h`、`sim_config.h` | 核对字段宽度/ID 含义、修正注释；CMO 保留号由配置派生 |
| 新增 `common/chi_link_checks.h/.cpp` | 少量字段范围/反压稳定性检查，不维护功能模型 |
| `common/dut_adapter.h/.cpp` | 仍只映射 DCache 端口，不加入 L2/测试行为 |
| `Makefile` | 删除旧源码依赖，确认新目录自动收集；保留按 test 选择及 all；真实 backend 接入后再加构建选项 |
| 将来的 `rtl_l2_adapter.h/.cpp` | 真实 L2 顶层确定后实现；本轮不生成空文件或假接口 |

测试与运行器之间使用普通结构体：CPU 操作/完成、初始化 line、只读边沿快照、场景进展。快照包含 `DutInputs/DutOutputs`、`DCacheL2Link`、`CpuOutputs` 和 cycle，不包含 L2 私有状态指针。

## 8. 结束条件和切换验收

删除 `scoreboard.is_idle()` 后，结束条件由以下内容共同组成：

1. 用例的全部操作完成，且所有要求检查的事件已发生，计数符合预期；
2. 理想 LSU 空闲且完成结果已消费；
3. 下游已完成本场景的事务，DCache `wfiSafe` 等公开状态满足排空条件；
4. 在有界的结束观察阶段没有额外重复响应或悬挂通道，否则失败/超时。

只有“模型 idle”或者“连续几拍没有 flit”不足以证明成功。真实 backend 没有 idle 端口时，不能硬编码 true；需结合该用例已发事务和真实环境公开的完成条件定义排空。静默窗口只是补充，不替代事务完成检查。

真实 L2 接入验收包括：逐字段接口比对、同一 Load 用例运行、CMO 后 Load 效果、复位、反压、时钟边界以及下游内存初始化。切换时不修改 LSU 行为和用例中的预期数据；必须改变的协议策略检查要明确记录原因。

## 9. 实施顺序和 review 边界

1. review 本文的文件职责、七通道契约、采样边界和测试检查。
2. 先迁移 `single_load_miss` 到用例自己的检查，提取运行器；在同一轮删除四个旧模型文件及其引用，确保可构建。
3. 核对 Load 正常通过，以及数据不匹配/缺失完成能够失败；检查源码无旧模型依赖。
4. 再逐步实现 CmoModel、理想 L2 的 CMO/Snoop、三个定向 CMO 用例。
5. 最后接真实 L2；该步骤需实际顶层与下游协议，不能提前宣称已支持。

每一步保持“先接口和行为说明、用户 review、再实现、验证并说明改动”的四步节奏。不自行提交；本轮按用户授权删除了四个旧模型文件，等待代码 review。

## 10. 首轮实现与验证记录（2026-11-17）

已完成：

- `simulation.h/.cpp`：从 main 提取运行器。通过 `initialize_memory_line` 准备下游，通过 `sample_cycle/advance` 取得公开边沿快照和推进时钟。
- `tests/single_load_miss.cpp`：单个函数按 Load 尝试、CHI 事件、最终完成三部分检查；保存一笔事务所需的 ID/标志和计数，没有 map 或参考权限表。
- `common/chi_link_checks.h/.cpp`：仅字段位宽和反压保持检查。
- 删除 `simLDCache/reference_model.h/.cpp`、`scoreboard.h/.cpp`；main 不再依赖这些模型。
- 测试注册使用名称、TestKind 和普通函数入口；all 遍历同一注册表。
- Makefile 支持 `max_cycles` 小写参数，并从源文件发现中排除构建目录和 out。
- 修正 CHI 上行响应/数据 ID 注释、RXSNP ID 别名，保留同一七通道边界。没有新增虚假的 RTL L2 adapter。

首个用例固定地址为 0x1008，line 为 0x1000，初始字节为 `0x40 + byteIndex`。期望返回 8 字节为 `48 49 4a 4b 4c 4d 4e 4f`（十六进制），CPU data 容器高 8 字节为 0。

检查：一次逻辑 Load、两次尝试、一个 miss/handled、一个 hit、一笔 ReadShared、两个不同 DataID 的 RXDAT、一笔 CompAck、一次 refillWakeup 和一次最终完成。CompAck 与 wakeup 不要求固定相对顺序。全部条件满足、环境排空后再观察四拍，没有额外事件才通过。

验证结果：

- 完整重新生成 RTL、Verilator 编译并运行 `single_load_miss`，seed=1，cycle=30 通过，VCD 已生成。
- seed=2/3/4 均通过，cycle=32；`--test all` 使用注册表通过。
- C++ 新增文件通过严格 warning 的语法检查。
- 临时错误 expected 副本在第 24 拍报出 `expected=0x49 actual=0x48`。
- 临时漏记 CompAck 的副本即使 CPU 已完成，仍在上限 100 拍时报超时，未因 idle 误判通过。
- 独立检查确认反压时修改 RXDAT、撤销 valid、RXSNP 地址位宽溢出均报错。

反例编译在 /tmp，不向正常用例增加故障注入开关。验证沿用现有 Makefile 的 `--noassert`；以上结果是 C++ 场景/接口检查通过，不声称打开了 RTL 内部 assertion。

review 建议顺序：`tests/single_load_miss.cpp` -> `simulation.h/.cpp` -> `common/chi_link_checks.*` -> `main.cpp/test_framework.*`。

运行：

```sh
make -C /home/ywj/yqh/sim/regress srun test=single_load_miss max_cycles=1000 VCD=1
# 已构建时只运行：
make -C /home/ywj/yqh/sim/regress run test=single_load_miss max_cycles=1000
# 当前注册表只有 single_load_miss：
make -C /home/ywj/yqh/sim/regress run test=all
```

当前只验证单个 Load miss；不是流水并发测试，不包含 CMO/Store/Atomic。真实 L2 仍需指定实际顶层并适配内存和组合求值边界。L2Model 的原有 4～7 拍延迟策略未改。

## 11. do_load 提交入口（首版低层接口，现由第 13 节封装）

已实现供定向/随机激励共同使用的非阻塞 Load 入口，目前只支持对齐 8 B：

```cpp
const auto& edge = simulation.sample_cycle();
// 每拍先消费 edge.cpu.completed，再根据场景决定是否提交新操作。
const auto submitted = simulation.do_load(0x1008); // VA=PA，PC=0
if (submitted.accepted()) {
    // 保存 submitted.operationId；不要再次提交这条逻辑操作。
}
simulation.advance();
```

显式地址可调用 `do_load(cpu::LoadOperation{vaddr, paddr, pc})`。VA/PA 页内偏移必须一致，地址/PC 必须满足当前 48 bit 约束。两个入口共用 LoadQueue 的地址检查，非法参数立即报错，不占容量。

- 先 `sample_cycle()`，随后可以调用多次 `do_load()`，最后只调用一次 `advance()`。
- `Accepted` 只表示预留本拍的 LSU 入队名额；实际由 advance 提交。它不表示 DUT 已握手或 Load 已完成。
- `Busy` 表示本拍名额不足或 LQ 满；不消耗操作号、不保存请求，调用者自行重试。
- 每拍最多接受两条，并扣除本拍已经接受的数量；重复 sample 不会重新获得容量。
- 返回的 `operationId` 对应最终 `LoadCompletion.opSeq`，不同于会复用的 DUT requestId 和 MSHR id。reset 后操作号从 0 重新开始，旧请求与未提交操作被清除。
- 同一 Load 的 miss/replay 不改变 opSeq。测试从 `edge.cpu.completed` 收取最终结果，仍由测试检查数据。
- `advance()` 不再从测试接收手填 CpuInputs；运行器只暂存本拍有限个操作。`is_idle()` 同时考虑尚未 advance 的操作。
- 当前没有 Store/CMO/Prefetch API，不创建返回假成功的占位函数。

`single_load_miss` 已改用 do_load，并核对返回操作号与最终完成 opSeq。seed=1、seed=2 的单用例/all 运行通过，时序与上一轮一致。额外在 /tmp 编译接口检查：同拍两条 accepted/第三条 busy、16 项 LQ 满、Busy 不耗 ID、槽位复用后的 opSeq、VA/PA 显式输入、非法参数、调用阶段限制、reset 丢弃待提交项，18 条 Load 完成且无重复。接口检查没有增加正式测试注册项。


## 12. CHIron 协议监视器接入（2026-11-17）

用户已授权直接复制 CHIron 源码进本仓库。`third_party/chiron` 保存 Joint 的 28 个原始头文件及许可证/来源清单，构建不 include 外部 CHIron 目录。`common/compact_chi_monitor.*` 将七通道握手交给原版 Joint/Xaction，Simulation 在稳定采样后调用一次，协议拒绝直接 FAIL，排空包含未完成 Xaction。

原 chi_link_checks 的字段范围/反压检查由监视器统一调用，不重复采样。没有恢复 reference/scoreboard，数据和场景检查仍由测试负责。详细映射、同拍顺序、原库检查边界和验收见 [07_compact_chi_monitor.md](07_compact_chi_monitor.md)。


## 13. 显式 tick 与自动检查（当前接口）

用户确认：操作函数不能等待完成，也不能在 Busy 时偷偷推进时钟。同一个 tick 前可提交多个操作；只有显式 tick 才切到下一拍。下文覆盖第 11 节要求测试手写 sample/advance 和完成检查的旧用法。

### 13.1 用例写法

当前 `tests/single_load_miss.cpp` 的有效操作只有：

```cpp
void run_single_load_miss(TestContext& test, const TestConfig& config) {
    test.do_load(config.loadAddress, LoadExpectation::Miss);
    test.tick();
}
```

`main.cpp` 先创建 Simulation 和 TestContext，再调用用例，最后统一 `context.finish()`；只有 finish 成功才打印 PASS。TestContext 构造时复位并初始化配置中的 line，测试不再重复写这些步骤。

默认 `do_load(A)` 使用 `LoadExpectation::Any`，允许 hit 或 miss。`Miss`/`Hit` 是可选场景要求，完成时核对是否发生了等待 refill 的 miss。当前这条冷 Load 的接受是由全新空队列保证的，且 finish 还会检查 submitted=1；其他可能 Busy 的用例必须检查返回值，Busy 不算已提交。

### 13.2 同拍提交和容量

```cpp
auto a = test.do_load(A);
auto b = test.do_load(B);
auto busy = test.do_load(C); // 当前每拍两个 Load 名额：第三条返回 Busy。
test.tick();
auto c = test.do_load(C);    // 下一拍由当前 LQ 容量重新决定。
test.tick();
```

- do_load 不调用 eval、sample_cycle、advance，也不等待结果；周期号不变。
- Accepted 保存本拍操作、opSeq 和对应期望字节；Busy 不保存、不消耗 ID、不自动重试。
- tick 统一采样和检查，推进一个有效边沿，将本拍操作提交给 LSU；新入队项按已有 LSU 调度规则参与后续发射。
- “同拍调用被接受”表示同拍进入理想 LSU，不强制对应 DUT 接口在同拍握手；实际发射仍看 pipeline 和 ready。
- 首版只实现 Load。Store/CMO 未提供空壳函数；后续需各自独立入口容量与真实排序约束。

### 13.3 自动检查的边界

新增 `test_context.h/.cpp`，不恢复独立 reference/scoreboard。它保存：

1. 测试显式初始化的只读 fixture 副本。不存在缺失地址从 L2 回读生成 expected 的回退路径。
2. 至多 LQ 容量的 PendingLoad，包含 opSeq、地址、期望字节和 Any/Hit/Miss，完成后释放。
3. 按 MSHR ID 索引的少量 ReadData，用于将无地址 RXDAT 对应到 fixture，记录 beat mask、DBID 和等待 Ack；没有缓存权限、way、替换状态。
4. 用例可选的统计约束。single_load_miss 要求：submitted/completed=1、attempts=2、misses/hits=1、ReadShared=1、RXDAT=2、CompAck=1、refillWakeup=1、无 fastReplay/loadReplay。

Joint/Xaction 仍检查协议，LSU 仍负责响应身份、miss/replay/wakeup 和重发；TestContext 自动比较 RXDAT/CPU 数据与 fixture，检查完成 opSeq、地址和可选命中预期，最后核对统计约束。通用 Any 操作不要求固定尝试次数，允许同拍 Load 的合法冲突重发。

第一版只适用于当前 ReadShared/SC、普通 8 B Load 场景。出现未实现的 Store/Atomic/CMO/Snoop/写回行为明确报错；这不是已具备全功能并发验证环境。

### 13.4 tick 与 finish

```text
测试调用若干 do_load（只登记当前拍）
    -> tick
       -> Simulation 稳定采样及 Joint 检查
       -> TestContext 收取并检查本拍结果
       -> 上升沿 + LSU/L2 状态更新一次
    -> 下一拍
```

finish 不再产生新操作，但会提交已经登记、尚未 tick 的操作，继续 tick 到全部操作完成、CHI/LSU/L2/DUT 排空，再观察四拍安静，最后核对用例统计。未知/重复完成、数据错误、缺失事件或超时均失败。finish 成功后重复调用不推进时钟；关闭或失败的 context 不能继续提交/tick。

finish 是明确的结束排空阶段，可以推进多拍；do_load 和 Busy 不会隐式推进。当前未增加 wait_all 或 Store/CMO 接口。

### 13.5 本轮验证

- 完整重新生成 RTL、C++/Verilator 编译并运行 single_load_miss：seed=1 通过，输出 cycle=31；seed=2 的 all 通过，cycle=33。finish 现在统计执行完最后一次观察 tick 后的周期，因此比旧实现“最后一拍 advance 前打印”多 1，不是 Load 请求多了一拍。
- 八组 Joint/Xaction 独立协议测试仍通过。
- 在 /tmp 编译独立 TestContext API 检查：同拍两个 Accepted、第三个 Busy 且周期不变；一个 tick 只前进一拍；下一拍再次提交；finish 自动处理最后未 tick 的操作并收齐三条 Load。
- 相同地址先 Miss 后 Hit 的两条操作正确完成；两个不同 line、显式 VA/PA 的操作正确完成。
- 修改下游内存而不改 expected 副本会报 RXDAT 字节不匹配；冷 Load 指定 Hit 会报错；未发请求却要求 submitted=1 会失败；短周期上限会因未完成 Xaction 而失败。
- 本轮未修改 RTL、用户已有 dcache_test 文件、LSU 时序或 L2 行为。独立接口反例未增加到正式场景注册表。

review 顺序：`tests/single_load_miss.cpp` -> `test_context.h` -> `test_context.cpp` -> `main.cpp`。
