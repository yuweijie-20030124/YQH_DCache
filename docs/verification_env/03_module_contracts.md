# DCache 验证环境模块契约

状态：Draft

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

不实现 CPU、L2 或 scoreboard 的行为逻辑。

## 2. `simCPU`

### `CpuModel`

负责：

- 维护 CPU 操作队列；
- 驱动两条 Load lane、Store 和 Atomic 接口；
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

第一版只生成 `single_load_miss` 的一个 Load。

## 3. `simL2Cache`

### `MemoryModel`

维护 L2 自己的稀疏后备内存，支持 line 读取、line 写入、byte mask 合并和确定性初始 pattern。

### `L2Model`

负责：

- 接收 DCache 的 TXREQ/TXEVT；
- 建立 CHI 事务表；
- 生成 RXRSP/RXDAT；
- 接收 DCache 的 TXRSP/TXDAT；
- 维护 DBID 和多拍数据状态。

第一版只支持 `ReadShared` 的两拍 `RXDAT` 返回。

### `ProbeScheduler`

第一版不主动发 Probe，但保留独立职责。后续负责按定点或条件调度 RXSNP。

## 4. `simLDCache`

### `ReferenceMemory`

独立维护 CPU 可见的参考内存和初始 pattern，不读取 L2 内部 memory 对象。

### `ReferenceCacheLines`

后续用于保存 cache line 数据、coherence state、dirty 状态和 Probe 相关语义。

### `ProtocolChecker`

按 cycle 和 flit 检查：

- valid/ready；
- 反压时 payload 稳定；
- TxnID/DBID 合法；
- RXDAT/TXDAT 多拍顺序和字段一致性。

### `Scoreboard`

连接 CPU 操作、CHI 事务和 reference，按事务生命周期以及 CPU 最终完成点判断功能正确性。

第一版只检查：

- CPU Load 最终数据；
- ReadShared TXREQ 与 RXDAT 的关联；
- RXDAT 两拍数据正确；
- DCache 对应的 TXRSP CompAck 合法且只被计为 CHI 事务完成；
- `refillWakeup` 与 CPU 重发关系；
- 正常场景不出现 `loadReplay`；
- 活动事务最终清空。

## 5. `main.cpp`

负责：

1. 解析测试名称和 seed；
2. 实例化 DUT adapter、CPU model、L2 model 和 scoreboard；
3. 执行 reset；
4. 驱动输入并采样输出；
5. 分发握手事件；
6. 推进 cycle；
7. 检查超时和最终 idle；
8. 输出 PASS/FAIL。

不实现具体测试场景和协议状态机。

## 6. `common` 的确定文件集合

第一版 `common` 固定为六个文件：

```text
sim/regress/common/
├── sim_config.h
├── sim_types.h
├── chi_types.h
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

不保存 CPU、L2 或 scoreboard 的内部状态，不包含 `VDCache.h`，不依赖 `simCPU`、`simL2Cache` 或 `simLDCache`。

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

其他 common 文件、CPU model、L2 model 和 scoreboard 不直接访问 `VDCache` 生成端口。

## 7. 第一版明确不放入 `common` 的内容

第一版不创建以下文件或抽象：

- `event_bus.h`；
- `logger.h`；
- `transaction_base.h`；
- `random.h`；
- `test_registry.h`；
- CPU/L2/reference 专用状态机；
- 任何复制 DCache 内部 MSHR、way 或流水线的模型。

等 `single_load_miss` 的接口和事件流确认后，再决定事件结构是否需要单独拆文件。
