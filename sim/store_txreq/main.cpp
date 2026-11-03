#include "VStoreOnlyTb.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#include <cstdio>

// 只拉时钟和复位。store 在 StoreOnlyTb 里打出。波形给人工看。
int main(int argc, char** argv) {
  Verilated::commandArgs(argc, argv);
  Verilated::traceEverOn(true);

  VStoreOnlyTb dut;
  VerilatedVcdC trace;
  dut.trace(&trace, 99);
  trace.open("logs/store-txreq.vcd");

  dut.reset = 1;
  dut.clock = 0;
  dut.eval();

  bool printed = false;
  const int cycles = 80;
  for (int cycle = 0; cycle < cycles; ++cycle) {
    if (cycle == 5) dut.reset = 0;

    dut.clock = 0;
    dut.eval();
    trace.dump(static_cast<vluint64_t>(cycle) * 2);

    dut.clock = 1;
    dut.eval();
    trace.dump(static_cast<vluint64_t>(cycle) * 2 + 1);
    trace.flush();

    if (!printed && dut.io_txreqFire) {
      std::printf(
          "cycle %d TXREQ fire opcode=0x%02x addr=0x%012lx txnId=%u tagAlias=%u\n",
          cycle,
          dut.io_txreqOpcode,
          static_cast<unsigned long>(dut.io_txreqAddr),
          dut.io_txreqTxnId,
          dut.io_txreqTagAlias);
      printed = true;
    }
  }

  trace.close();
  if (!dut.io_txreqSeen) {
    std::printf("TXREQ not seen in %d cycles. wave: logs/store-txreq.vcd\n", cycles);
  } else {
    std::printf("wave: logs/store-txreq.vcd\n");
  }
  return 0;
}
