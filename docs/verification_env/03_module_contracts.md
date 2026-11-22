# DCache 验证环境模块契约

状态：2026-11-17 修订；首轮 Load 迁移已实现并验证，CMO 与真实 L2 仍为后续计划。

本文记录各模块的初始职责和边界。具体字段在实现某个模块前单独确认，不在本文中提前冻结全部代码接口。

## 1. `common`

### `sim_types`

保存 CPU 操作、CHI flit、握手事件、cache line 和错误信息等普通 C++ 数据结构。

不保存模型内部状态，不保存 DUT 指针。

### `line_image`

提供：

- cache line 对齐；
- line offset；
- 64 B line 与 32 B beat 之间的切分和合并；
- byte mask 合并；
- Load 数据提取。

### `dut_adapter`

负责：

- 将普通 C++ 请求转换成 Verilator DUT 输入；
- 从 DUT 输出采样普通 C++ 数据；
- 处理宽位信号的拆分和拼接；
- 集中维护 `VDCache` 端口名称的适配细节。

不实现 CPU、L2 或测试的行为逻辑。

## 2. `simCPU`

### `CpuModel`

负责：

- 维护 CPU 操作队列；
- 当前驱动两条 Load lane；后续独立接入 CmoModel，再按需扩展 Store/Atomic；
- 处理请求握手；
- 区分 hit、miss/handled、refillWakeup、loadReplay 和最终完成；
- 正常安装成功的 miss 在 `refillWakeup` 握手后重新发起 Load；
- 只有最终未安装或错误路径才根据 `loadReplay` 重新发起 Load；
- 根据 DCache 的可观察通知重新发起请求。

不负责：

- 判断返回数据是否正确；
- 维护 L2 memory；
- 模拟 DCache 内部 MSHR 或 replacement。

### `CpuScenario`

负责生成一个测试需要的 CPU 操作序列和场景参数。

已有首版只生成 `single_load_miss` 的一个 Load。后续每个 tests 文件自己表达操作步骤；不预建通用 CpuScenario 类层次。

## 3. `simL2Cache`

### 稀疏内存

当前由 L2Model 自己持有，支持 line 读取、line 写入、byte mask 合并和确定性初始 pattern；不为此强制拆一个 MemoryModel class。测试通过运行器初始化，不通过内存回读生成 expected。

### `L2Model`

负责：

- 接收 DCache 的 TXREQ/TXEVT；
- 建立 CHI 事务表；
- 生成 RXRSP/RXDAT；
- 接收 DCache 的 TXRSP/TXDAT；
- 维护 DBID 和多拍数据状态。

第一版只支持 `ReadShared` 的两拍 `RXDAT` 返回。L2 只通过公共 `DCacheL2Link` 驱动/采样，不依赖整个 DUT 的 `DutInputs`/`DutOutputs`。

### CMO 与 Snoop

后续由同一个 L2Model 的 CMO 状态生成 RXSNP、接收 SnpResp 并发送 CompCMO，不要求独立 ProbeScheduler。真实 L2 模式由真实 RTL 完成这些事务，adapter 只做信号适配。

## 4. 测试用例与旧 `simLDCache` 的退出

已删除 `simLDCache/reference_model.h/.cpp`、`scoreboard.h/.cpp`，不再保留独立参考模型和记分牌。04 文档只保留历史用途。

当前 `tests/single_load_miss.cpp` 只调用 do_load 和显式 tick。新增 TestContext 封装重复的采样、数据比较、结果关联和结束排空；用例配置保存可选的流量约束。后续场景沿用同一操作入口，不手写握手循环。

公共链路检查函数只检查字段范围和反压保持，不维护缓存权限、参考内存或通用事务表。必要检查已迁移，数据反例和缺失事件反例均确认失败；不能把删除变成取消检查。

## 5. 仿真运行器与入口

`main.cpp` 负责参数解析、创建 Simulation/TestContext、选择测试，并在测试函数返回后调用 finish，成功排空和检查后才输出 PASS。

已新增 `simulation.h/.cpp`，从原 main 提取对象管理、初始化、复位、时钟、稳定采样、边沿快照、超时和排空。测试与运行器用普通结构体交互，不访问模型私有状态。

下游实现选择集中在运行器。两种实现共用同一 DCacheL2Link；真正接入 RTL L2 时再添加 RtlL2Adapter 及其下游内存环境。CPU 模型和通用功能用例不依赖具体 L2 类型。

详细文件职责、采样边界及迁移顺序见 [06_simple_tests_and_replaceable_l2.md](06_simple_tests_and_replaceable_l2.md)。

## 6. `common` 的确定文件集合

当前 `common` 包含以下公共文件：

```text
sim/regress/common/
├── sim_config.h
├── sim_types.h
├── chi_types.h
├── compact_chi_link.h
├── chi_link_checks.h
├── chi_link_checks.cpp
├── compact_chi_monitor.h
├── compact_chi_monitor.cpp
├── line_image.h
├── dut_adapter.h
└── dut_adapter.cpp
```

### `sim_config.h`

唯一的仿真参数中心。保存当前 DCache/Compact-CHI 对接所需的静态参数：

- 物理地址位宽；
- cache line 字节数；
- CHI data beat 字节数；
- CPU Load 数据字节数；
- set、way、bank、MSHR 等需要被模型理解的参数；
- TxnID/DBID 等协议字段宽度。

只保存参数和必要的静态检查，不保存模型状态，不执行行为逻辑。参数变化时优先修改这个文件；Verilator 端口宽度变化由 `dut_adapter` 编译错误暴露。

### `sim_types.h`

保存与具体模型无关的基础数据类型：

- `Address`、`Cycle`、`TxnId`、`DbId` 等别名；
- 64 B cache line 的字节数组类型；
- 32 B CHI beat 类型；
- 128 bit CPU data 类型；
- byte mask 类型；
- 少量通用枚举，例如通道名和握手方向。

不保存 CPU、L2 或测试用例的内部状态，不包含 `VDCache.h`，不依赖 `simCPU`、`simL2Cache` 或测试用例。

### `chi_types.h`

保存 Compact-CHI 的 C++ flit 类型和协议常量，按照当前 Bundle 对应七个通道：

- `TxReq`；
- `TxEvt`；
- `TxRsp`；
- `TxDat`；
- `RxRsp`；
- `RxDat`；
- `RxSnp`。

同时保存 Req、Evt、Rsp、Dat、Snp opcode 和 RespErr 常量。flit 类型只表示一次已经被采样或准备发送的 payload，不隐含 `valid`、`ready`，也不维护事务状态。

### `compact_chi_link.h`

定义 DCache 与 L2 间七个 ready/valid 通道的链路快照。TXREQ/TXEVT/TXRSP/TXDAT 由 DCache 发起，RXRSP/RXDAT/RXSNP 由 L2 发起。每通道共用一套 `valid`、`bits`、`ready` 表示。

`DutAdapter` 负责在 Verilator DCache 端口镜像与 `DCacheL2Link` 间转换。理想 L2 和未来真实 L2 RTL adapter 都只依赖该链路类型；主循环负责在同一周期组合双方驱动值、采样 DCache 输出并把握手快照交给模型推进。

### `line_image.h`

保存纯函数形式的 cache line 和地址操作：

- line base 和 line offset；
- cache line 与 32 B beat 的切分和合并；
- DataID 转 beat；
- byte mask 合并；
- 从 cache line 提取 CPU Load 数据；
- 检查自然对齐和 line 对齐。

这些函数不访问 DUT，不修改模型状态，不知道 Load miss、MSHR 或 coherence 状态。

### `dut_adapter.h`

声明 DUT 端口的普通 C++ 输入/输出镜像和 `DutAdapter` 类。职责是：

- 保存 CPU、L2、通知口和 reset 所需的输入镜像；
- 保存 DUT 输出的普通 C++ 镜像；
- 提供集中式输入驱动和输出采样接口；
- 提供宽位信号的拆分、拼接和默认值处理接口。

第一版 adapter 应能覆盖完整顶层端口，但模型只填写 `single_load_miss` 使用的字段，其余输入由 adapter 统一清零或置为 ready。adapter 不判断测试是否通过，不创建 CPU/L2 事务，不实现协议状态机。

### `dut_adapter.cpp`

唯一允许直接包含 `VDCache.h` 并访问 `dut.io_*` 端口的 common 实现文件。负责把 `dut_adapter.h` 中的输入/输出镜像映射到 Verilator 生成的端口。

宽位字段必须在这里集中处理，例如：

- Load data：128 bit；
- Store data：512 bit；
- RXDAT/TXDAT data：256 bit；
- Store mask：64 bit；
- 地址：48 bit。

其他 common 文件、CPU model、L2 model 和测试用例不直接访问 `VDCache` 生成端口。

## 7. 第一版明确不放入 `common` 的内容

第一版不创建以下文件或抽象：

- `event_bus.h`；
- `logger.h`；
- `transaction_base.h`；
- `random.h`；
- `test_registry.h`；
- CPU/L2 专用状态机或参考模型；
- 任何复制 DCache 内部 MSHR、way 或流水线的模型。

保持少量普通结构体；只有实际重复使用时才抽取公共事件类型。06 中计划的 chi_link_checks 仅做局部检查，不是功能状态机。


## 8. 内置 CHIron 协议检查

`compact_chi_monitor` 复用本仓库 `third_party/chiron` 中的 Joint/Xaction，消费同一七通道边沿快照，只检查协议关联并参与排空，不驱动接口、不维护参考缓存。原 chi_link_checks 由它调用，协议错误使测试失败。外部 CHIron 路径不参与构建。详见 07 文档。


## 9. TestContext 操作入口

`do_load()` 不等待、不推进时钟；同拍可调用多次，容量不足返回 Busy。`tick()` 自动采样/检查并推进一拍；`finish()` 由运行框架显式收尾，继续检查到排空或超时。只有已提交 Load 的期望字节、只读 fixture 和数据返回关联，不维护参考缓存权限表。详细契约及验证见 06 文档第 13 节。
