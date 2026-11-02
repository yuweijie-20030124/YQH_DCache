---
title: "AMOALU"
slug: malq3ow945hsd7fn
source: https://www.yuque.com/yuweijie-rwekl/gmlakv/malq3ow945hsd7fn
updated_at: 2026-11-02T02:36:38.000Z
word_count: 732
---

## 功能描述

这是一个组合逻辑电路，不带时序的。是从Rocket-Chip中复制粘贴过来的文件。
输出是旧数据和AtomicsUnit的操作数，输出是要写回的新数据。

计算除了 **LR SC** 和 **CAS **以外的全部原子操作。

本模块在Mainpipe处理原子的时候的s3流水线中使用。

​

## 事务描述

所有 AMO 指令都严格按以下顺序原子执行（不可被打断）：

**地址 = GPR[rs1]**

**旧值 = Memory[地址]**

**结果 = 旧值 op GPR[rs2]**

**​**

**GPR[rd] = 旧值**

**Memory[地址] = 结果**

**​**

将这个模块当成，**旧值 + rs2操作数** 根据 cmd 能得到out的组合逻辑电路即可，其余逻辑如仍需MainPipe来实现。
1.旧值放到rd中

2.out放回rs1地址中

​

- **amoadd**：将内存原值与 `rs2` 进行**加法**运算，结果写回内存。
- **amoxor**：将内存原值与 `rs2` 进行**按位异或**运算，结果写回内存。
- **amoor**：将内存原值与 `rs2` 进行**按位或**运算，结果写回内存。
- **amoand**：将内存原值与 `rs2` 进行**按位与**运算，结果写回内存。
- **amomin**：将内存原值与 `rs2` 视为**有符号数**，比较后取**较小值**写回内存。
- **amomax**：将内存原值与 `rs2` 视为**有符号数**，比较后取**较大值**写回内存。
- **amominu**：将内存原值与 `rs2` 视为**无符号数**，比较后取**较小值**写回内存。
- **amomaxu**：将内存原值与 `rs2` 视为**无符号数**，比较后取**较大值**写回内存。
- **amoswap**：不进行算术或逻辑运算，直接将 `rs2` 的值**写入**内存，完成交换。你提到的“mask 内等于操作数”是对交换行为的一种描述，即把指定位置的内容替换为操作数。

​

## 接口描述

| 字段 | 方向 | 位宽 | 说明 |
| --- | --- | --- | --- |
| cmd | in | 5 | 原子操作类型 |
| mask | in | 8 | 这个 64 bit bank 里哪些字节参加运算。1 表示参加 |
| lhs | in | 64 | 旧数据。来源见下面两行，不是“SRAM 里刚好读到的那一份” |
| rhs | in | 64 | AtomicsUnit 送来的操作数。128 bit 请求里取这个 bank 对应的低 64 bit |
| out | out | 64 | mask 内是运算结果，mask 外保持 lhs |

| cmd | 指令 | 谁处理 |
| --- | --- | --- |
| `b01000` | amoadd | AMOALU，加法 |
| `b01001` | amoxor | AMOALU，异或 |
| `b01010` | amoor | AMOALU，或 |
| `b01011` | amoand | AMOALU，与 |
| `b01100` | amomin | AMOALU，有符号取小 |
| `b01101` | amomax | AMOALU，有符号取大 |
| `b01110` | amominu | AMOALU，无符号取小 |
| `b01111` | amomaxu | AMOALU，无符号取大 |
| `b00100` | amoswap | AMOALU，mask 内等于操作数 |
| `b00110` | lr | 不进 ALU |
| `b00111` | sc | 不进 ALU |
| `b11010` | amocas.w | 不进 ALU，比较器，32 bit |
| `b11011` | amocas.d | 不进 ALU，比较器，64 bit |
| `b11000` | amocas.q | 不进 ALU。比较器，128 bit，两个 bank |

​

###
