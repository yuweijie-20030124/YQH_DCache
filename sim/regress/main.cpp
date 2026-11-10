#include "VDCache.h"
#include "verilated.h"

#include <cstdint>
#include <cstdio>
#include <cstring>

VDCache dut;                    // 实例化顶层模块
VerilatedVcdC trace;            // 记录波形
static vluint64_t main_time;    // 运行时间

// 模拟一个时钟周期
void one_cycle(){
    dut.clock = !dut.clock;
    dut.eval();
    dut.clock = !dut.clock;
    dut.eval();
}

// 输入全部清空
static void zero_inputs() {
    dut.io_atomics_replay_bits_id = 0;
}

// 进行一次load
static void load_once() {

}

// 进行一次store
static void store_once() {

}

// 进行一次原子操作
static void atomics_once() {

}