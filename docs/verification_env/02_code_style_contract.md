# DCache 验证环境代码风格约束

状态：Draft

本文用于保持验证环境代码清晰、可读、可逐步审查。实现过程中优先遵守可读性和职责边界，不为假想的未来需求提前搭建复杂框架。

## 1. 总体风格

- 使用简单、明确的 C++ 类和结构体。
- 每个类只承担一个主要职责。
- 状态机使用显式 `enum class`，不使用多个互相隐含关系的布尔变量代替。
- 事务状态、握手事件和错误信息都使用可读的名称。
- 函数名尽量使用 DCache 和 Compact-CHI 已有术语。
- 注释解释设计原因和协议约束，不重复逐行翻译代码。
- 不复制 `dcache_test` 的组织方式或代码风格。

## 2. 暂不使用的复杂手段

除非经过单独讨论和确认，暂不引入：

- 大型模板化验证框架；
- 宏驱动的行为生成；
- 全局可变 singleton；
- 隐式回调链；
- 过度通用的 transaction 基类层次；
- 为了扩展性提前引入的插件系统；
- 隐藏 DUT 时钟推进的工具函数。

## 3. 数据表示

- 48 bit 地址在 C++ 中使用 `uint64_t` 保存，并通过工具函数限制有效位。
- 64 B cache line 使用 `std::array<uint8_t, 64>`。
- 32 B CHI data beat 使用 `std::array<uint8_t, 32>` 或等价的明确结构。
- 128 bit、256 bit、512 bit 信号不能使用单个 `int` 表示。
- 地址对齐、line offset、DataID、byte enable 的转换集中放在公共工具中。

## 4. 模型接口风格

模型优先使用明确的阶段函数：

```text
reset()
drive_inputs()
sample_outputs()
handle_event()
advance()
is_idle()
```

DUT 端口访问集中通过 adapter 完成。CPU model、L2 model 和 scoreboard 不直接散落访问 `VDCache` 的生成端口。

## 5. 改动粒度

每次实现必须明确：

- 本次修改哪些文件；
- 本次增加哪个行为；
- 本次不增加哪些行为；
- 如何编译；
- 如何运行最小检查。

一轮修改不同时引入 Store、Probe、random 和复杂 backpressure。

## 6. 错误报告

错误信息至少包含：

- test name；
- random seed（如果有）；
- cycle；
- channel 或 CPU 操作类型；
- 地址；
- TxnID/DBID（如果有）；
- expected；
- actual；
- 相关事务当前状态。

## 7. 评审要求

在写实现代码前，先给出：

1. 文件职责；
2. public data structure；
3. 状态机；
4. 事件流；
5. 不变量；
6. 最小运行例子。

只有这些内容确认后，才开始写对应文件。
