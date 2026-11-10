#include "VDCache.h"
#include "dcache_io_struct.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#include <cstdint>
#include <cstdio>
#include <cstring>

// 激励先写进结构体，再由 apply_inputs() 送到 dut。
VDCache dut;
VerilatedVcdC trace;
static vluint64_t main_time;

static input_load in_load;
static input_store in_store;
static input_automics in_automics;
static input_cmoReq in_cmo_req;
static input_cmoResp in_cmo_resp;
static input_wfi in_wfi;
static input_l2 in_l2;
static input_forwardMshr in_forward_mshr;
static input_refillWakeup in_refill_wakeup;
static input_loadReplay in_load_replay;

static void zero_w(WData* words, int n) {
  for (int i = 0; i < n; ++i) words[i] = 0;
}

static void apply_inputs() {
  dut.io_load_0_req_valid = in_load.io_load_0_req_valid;
  dut.io_load_0_req_bits_cmd = in_load.io_load_0_req_bits_cmd;
  dut.io_load_0_req_bits_id = in_load.io_load_0_req_bits_id;
  dut.io_load_0_req_bits_instrtype = in_load.io_load_0_req_bits_instrtype;
  dut.io_load_0_req_bits_isFirstIssue = in_load.io_load_0_req_bits_isFirstIssue;
  dut.io_load_0_req_bits_replayCarry_real_way_en = in_load.io_load_0_req_bits_replayCarry_real_way_en;
  dut.io_load_0_req_bits_replayCarry_valid = in_load.io_load_0_req_bits_replayCarry_valid;
  dut.io_load_0_req_bits_lqIdx_flag = in_load.io_load_0_req_bits_lqIdx_flag;
  dut.io_load_0_req_bits_lqIdx_value = in_load.io_load_0_req_bits_lqIdx_value;
  dut.io_load_0_resp_ready = in_load.io_load_0_resp_ready;
  dut.io_load_0_s1_kill_data_read = in_load.io_load_0_s1_kill_data_read;
  dut.io_load_0_s1_kill = in_load.io_load_0_s1_kill;
  dut.io_load_0_s2_kill = in_load.io_load_0_s2_kill;
  dut.io_load_0_replacementUpdated = in_load.io_load_0_replacementUpdated;
  dut.io_load_0_is128Req = in_load.io_load_0_is128Req;
  dut.io_load_1_req_valid = in_load.io_load_1_req_valid;
  dut.io_load_1_req_bits_cmd = in_load.io_load_1_req_bits_cmd;
  dut.io_load_1_req_bits_id = in_load.io_load_1_req_bits_id;
  dut.io_load_1_req_bits_instrtype = in_load.io_load_1_req_bits_instrtype;
  dut.io_load_1_req_bits_isFirstIssue = in_load.io_load_1_req_bits_isFirstIssue;
  dut.io_load_1_req_bits_replayCarry_real_way_en = in_load.io_load_1_req_bits_replayCarry_real_way_en;
  dut.io_load_1_req_bits_replayCarry_valid = in_load.io_load_1_req_bits_replayCarry_valid;
  dut.io_load_1_req_bits_lqIdx_flag = in_load.io_load_1_req_bits_lqIdx_flag;
  dut.io_load_1_req_bits_lqIdx_value = in_load.io_load_1_req_bits_lqIdx_value;
  dut.io_load_1_resp_ready = in_load.io_load_1_resp_ready;
  dut.io_load_1_s1_kill_data_read = in_load.io_load_1_s1_kill_data_read;
  dut.io_load_1_s1_kill = in_load.io_load_1_s1_kill;
  dut.io_load_1_s2_kill = in_load.io_load_1_s2_kill;
  dut.io_load_1_replacementUpdated = in_load.io_load_1_replacementUpdated;
  dut.io_load_1_is128Req = in_load.io_load_1_is128Req;
  dut.io_store_req_valid = in_store.io_store_req_valid;
  dut.io_store_req_bits_cmd = in_store.io_store_req_bits_cmd;
  dut.io_store_req_bits_id = in_store.io_store_req_bits_id;
  dut.io_store_main_pipe_hit_resp_ready = in_store.io_store_main_pipe_hit_resp_ready;
  dut.io_store_refill_hit_resp_ready = in_store.io_store_refill_hit_resp_ready;
  dut.io_store_replay_resp_ready = in_store.io_store_replay_resp_ready;
  dut.io_atomics_req_valid = in_automics.io_atomics_req_valid;
  dut.io_atomics_req_bits_cmd = in_automics.io_atomics_req_bits_cmd;
  dut.io_atomics_req_bits_tagAlias = in_automics.io_atomics_req_bits_tagAlias;
  dut.io_atomics_req_bits_id = in_automics.io_atomics_req_bits_id;
  dut.io_atomics_req_bits_missId = in_automics.io_atomics_req_bits_missId;
  dut.io_atomics_req_bits_wordIdx = in_automics.io_atomics_req_bits_wordIdx;
  dut.io_atomics_req_bits_probeOp = in_automics.io_atomics_req_bits_probeOp;
  dut.io_atomics_req_bits_needData = in_automics.io_atomics_req_bits_needData;
  dut.io_atomics_req_bits_snpTxnId = in_automics.io_atomics_req_bits_snpTxnId;
  dut.io_atomics_req_bits_replaceWay = in_automics.io_atomics_req_bits_replaceWay;
  dut.io_atomics_resp_ready = in_automics.io_atomics_resp_ready;
  dut.io_atomics_replay_ready = in_automics.io_atomics_replay_ready;
  dut.io_cmoReq_valid = in_cmo_req.io_cmoReq_valid;
  dut.io_cmoReq_bits_id = in_cmo_req.io_cmoReq_bits_id;
  dut.io_cmoReq_bits_opcode = in_cmo_req.io_cmoReq_bits_opcode;
  dut.io_cmoReq_bits_alias = in_cmo_req.io_cmoReq_bits_alias;
  dut.io_cmoResp_ready = in_cmo_resp.io_cmoResp_ready;
  dut.io_wfi_req = in_wfi.io_wfi_req;
  dut.io_l2_req_ready = in_l2.io_l2_req_ready;
  dut.io_l2_evt_ready = in_l2.io_l2_evt_ready;
  dut.io_l2_txRsp_ready = in_l2.io_l2_txRsp_ready;
  dut.io_l2_txDat_ready = in_l2.io_l2_txDat_ready;
  dut.io_l2_rxRsp_valid = in_l2.io_l2_rxRsp_valid;
  dut.io_l2_rxRsp_bits_txnID = in_l2.io_l2_rxRsp_bits_txnID;
  dut.io_l2_rxRsp_bits_srcID = in_l2.io_l2_rxRsp_bits_srcID;
  dut.io_l2_rxRsp_bits_tgtID = in_l2.io_l2_rxRsp_bits_tgtID;
  dut.io_l2_rxRsp_bits_opcode = in_l2.io_l2_rxRsp_bits_opcode;
  dut.io_l2_rxRsp_bits_dbID = in_l2.io_l2_rxRsp_bits_dbID;
  dut.io_l2_rxRsp_bits_respErr = in_l2.io_l2_rxRsp_bits_respErr;
  dut.io_l2_rxRsp_bits_resp = in_l2.io_l2_rxRsp_bits_resp;
  dut.io_l2_rxRsp_bits_cBusy = in_l2.io_l2_rxRsp_bits_cBusy;
  dut.io_l2_rxRsp_bits_traceTag = in_l2.io_l2_rxRsp_bits_traceTag;
  dut.io_l2_rxDat_valid = in_l2.io_l2_rxDat_valid;
  dut.io_l2_rxDat_bits_txnID = in_l2.io_l2_rxDat_bits_txnID;
  dut.io_l2_rxDat_bits_srcID = in_l2.io_l2_rxDat_bits_srcID;
  dut.io_l2_rxDat_bits_tgtID = in_l2.io_l2_rxDat_bits_tgtID;
  dut.io_l2_rxDat_bits_opcode = in_l2.io_l2_rxDat_bits_opcode;
  dut.io_l2_rxDat_bits_dbID = in_l2.io_l2_rxDat_bits_dbID;
  dut.io_l2_rxDat_bits_respErr = in_l2.io_l2_rxDat_bits_respErr;
  dut.io_l2_rxDat_bits_resp = in_l2.io_l2_rxDat_bits_resp;
  dut.io_l2_rxDat_bits_dataSource = in_l2.io_l2_rxDat_bits_dataSource;
  dut.io_l2_rxDat_bits_cBusy = in_l2.io_l2_rxDat_bits_cBusy;
  dut.io_l2_rxDat_bits_dataID = in_l2.io_l2_rxDat_bits_dataID;
  dut.io_l2_rxDat_bits_traceTag = in_l2.io_l2_rxDat_bits_traceTag;
  dut.io_l2_rxSnp_valid = in_l2.io_l2_rxSnp_valid;
  dut.io_l2_rxSnp_bits_txnID = in_l2.io_l2_rxSnp_bits_txnID;
  dut.io_l2_rxSnp_bits_srcID = in_l2.io_l2_rxSnp_bits_srcID;
  dut.io_l2_rxSnp_bits_tgtID = in_l2.io_l2_rxSnp_bits_tgtID;
  dut.io_l2_rxSnp_bits_opcode = in_l2.io_l2_rxSnp_bits_opcode;
  dut.io_l2_rxSnp_bits_tagAlias = in_l2.io_l2_rxSnp_bits_tagAlias;
  dut.io_l2_rxSnp_bits_ns = in_l2.io_l2_rxSnp_bits_ns;
  dut.io_l2_rxSnp_bits_traceTag = in_l2.io_l2_rxSnp_bits_traceTag;
  dut.io_forwardMshr_id = in_forward_mshr.io_forwardMshr_id;
  dut.io_forwardMshr_half = in_forward_mshr.io_forwardMshr_half;
  dut.io_refillWakeup_ready = in_refill_wakeup.io_refillWakeup_ready;
  dut.io_loadReplay_ready = in_load_replay.io_loadReplay_ready;
  dut.io_load_0_req_bits_mask = in_load.io_load_0_req_bits_mask;
  dut.io_load_1_req_bits_mask = in_load.io_load_1_req_bits_mask;
  dut.io_atomics_req_bits_amoMask = in_automics.io_atomics_req_bits_amoMask;
  zero_w(dut.io_load_0_req_bits_data, 4);
  dut.io_load_0_req_bits_data[0] = in_load.io_load_0_req_bits_data;
  zero_w(dut.io_load_1_req_bits_data, 4);
  dut.io_load_1_req_bits_data[0] = in_load.io_load_1_req_bits_data;
  zero_w(dut.io_store_req_bits_data, 16);
  dut.io_store_req_bits_data[0] = in_store.io_store_req_bits_data;
  zero_w(dut.io_atomics_req_bits_amoData, 4);
  dut.io_atomics_req_bits_amoData[0] = in_automics.io_atomics_req_bits_amoData;
  zero_w(dut.io_atomics_req_bits_amoCmp, 4);
  dut.io_atomics_req_bits_amoCmp[0] = in_automics.io_atomics_req_bits_amoCmp;
  zero_w(dut.io_l2_rxDat_bits_data, 8);
  dut.io_l2_rxDat_bits_data[0] = in_l2.io_l2_rxDat_bits_data;
  dut.io_load_0_req_bits_vaddr = in_load.io_load_0_req_bits_vaddr;
  dut.io_load_0_req_bits_vaddr_dup = in_load.io_load_0_req_bits_vaddr_dup;
  dut.io_load_0_s0_pc = in_load.io_load_0_s0_pc;
  dut.io_load_0_s1_pc = in_load.io_load_0_s1_pc;
  dut.io_load_0_s2_pc = in_load.io_load_0_s2_pc;
  dut.io_load_0_s1_paddr_dup_lsu = in_load.io_load_0_s1_paddr_dup_lsu;
  dut.io_load_0_s1_paddr_dup_dcache = in_load.io_load_0_s1_paddr_dup_dcache;
  dut.io_load_1_req_bits_vaddr = in_load.io_load_1_req_bits_vaddr;
  dut.io_load_1_req_bits_vaddr_dup = in_load.io_load_1_req_bits_vaddr_dup;
  dut.io_load_1_s0_pc = in_load.io_load_1_s0_pc;
  dut.io_load_1_s1_pc = in_load.io_load_1_s1_pc;
  dut.io_load_1_s2_pc = in_load.io_load_1_s2_pc;
  dut.io_load_1_s1_paddr_dup_lsu = in_load.io_load_1_s1_paddr_dup_lsu;
  dut.io_load_1_s1_paddr_dup_dcache = in_load.io_load_1_s1_paddr_dup_dcache;
  dut.io_store_req_bits_vaddr = in_store.io_store_req_bits_vaddr;
  dut.io_store_req_bits_addr = in_store.io_store_req_bits_addr;
  dut.io_store_req_bits_mask = in_store.io_store_req_bits_mask;
  dut.io_atomics_req_bits_vaddr = in_automics.io_atomics_req_bits_vaddr;
  dut.io_atomics_req_bits_addr = in_automics.io_atomics_req_bits_addr;
  dut.io_atomics_req_bits_pc = in_automics.io_atomics_req_bits_pc;
  dut.io_cmoReq_bits_addr = in_cmo_req.io_cmoReq_bits_addr;
  dut.io_l2_rxSnp_bits_addr = in_l2.io_l2_rxSnp_bits_addr;
}

// 整行 store。mask 用 -1，赋到 64 位端口后是全 1。data 结构体只有一个 int，只进最低 32 位。
static void give_stimulus() {
  const int addr = 0x80001000;
  in_store.io_store_req_valid = 1;
  in_store.io_store_req_bits_cmd = 0x1;  // M_XWR
  in_store.io_store_req_bits_vaddr = addr;
  in_store.io_store_req_bits_addr = addr;
  in_store.io_store_req_bits_data = 0x89abcdef;
  in_store.io_store_req_bits_mask = -1;
  in_store.io_store_req_bits_id = 7;
  apply_inputs();
}

static void no_stimulus() { //make valid = 0
  const int addr = 0;
  in_store.io_store_req_valid = 0;
  in_store.io_store_req_bits_cmd = 0x1;  // M_XWR
  in_store.io_store_req_bits_vaddr = addr;
  in_store.io_store_req_bits_addr = addr;
  in_store.io_store_req_bits_data = 0x89abcdef;
  in_store.io_store_req_bits_mask = -1;
  in_store.io_store_req_bits_id = 7;
  apply_inputs();
}

void one_cycle(void){
  dut.clock = !dut.clock;
  dut.eval();
  trace.dump(main_time++);
  
  dut.clock = !dut.clock;
  dut.eval();
  trace.dump(main_time++);
}


int main(int argc, char** argv) {
  Verilated::commandArgs(argc, argv);
  Verilated::traceEverOn(true);


  dut.trace(&trace, 99);
  trace.open("logs/store-txreq.vcd");

  dut.reset = 1;
  dut.clock = 0;
  dut.eval();

    one_cycle();
    one_cycle();
    one_cycle();
    dut.reset = 0;
    dut.eval();
    one_cycle();
    one_cycle();

    give_stimulus();
    dut.eval(); //给完状态之后记得更新电路状态。
    one_cycle();

    no_stimulus();
    one_cycle();

    one_cycle();
    one_cycle();
    one_cycle();
    one_cycle();

  trace.flush();
  trace.close();

  return 0;
}
