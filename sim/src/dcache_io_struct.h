#ifndef DCACHE_IO_STRUCT_H
#define DCACHE_IO_STRUCT_H

// DCache 顶层端口。input 是激励要驱动的，output 是要观察的。
// 字段名和 Verilog 端口一致。注释里的位宽大于 int 时，写激励不能只靠这一个 int。

// INPUT

// 两条loadpipe
struct input_load
{
    int io_load_0_req_valid;
    int io_load_0_req_bits_cmd;  // [4:0]
    int io_load_0_req_bits_vaddr;  // [47:0]
    int io_load_0_req_bits_vaddr_dup;  // [47:0]
    int io_load_0_req_bits_data;  // [127:0]
    int io_load_0_req_bits_mask;  // [15:0]
    int io_load_0_req_bits_id;  // [5:0]
    int io_load_0_req_bits_instrtype;  // [3:0]
    int io_load_0_req_bits_isFirstIssue;
    int io_load_0_req_bits_replayCarry_real_way_en;  // [3:0]
    int io_load_0_req_bits_replayCarry_valid;
    int io_load_0_req_bits_lqIdx_flag;
    int io_load_0_req_bits_lqIdx_value;  // [3:0]
    int io_load_0_resp_ready;
    int io_load_0_s1_kill_data_read;
    int io_load_0_s1_kill;
    int io_load_0_s2_kill;
    int io_load_0_s0_pc;  // [47:0]
    int io_load_0_s1_pc;  // [47:0]
    int io_load_0_s2_pc;  // [47:0]
    int io_load_0_replacementUpdated;
    int io_load_0_is128Req;
    int io_load_0_s1_paddr_dup_lsu;  // [47:0]
    int io_load_0_s1_paddr_dup_dcache;  // [47:0]
    int io_load_1_req_valid;
    int io_load_1_req_bits_cmd;  // [4:0]
    int io_load_1_req_bits_vaddr;  // [47:0]
    int io_load_1_req_bits_vaddr_dup;  // [47:0]
    int io_load_1_req_bits_data;  // [127:0]
    int io_load_1_req_bits_mask;  // [15:0]
    int io_load_1_req_bits_id;  // [5:0]
    int io_load_1_req_bits_instrtype;  // [3:0]
    int io_load_1_req_bits_isFirstIssue;
    int io_load_1_req_bits_replayCarry_real_way_en;  // [3:0]
    int io_load_1_req_bits_replayCarry_valid;
    int io_load_1_req_bits_lqIdx_flag;
    int io_load_1_req_bits_lqIdx_value;  // [3:0]
    int io_load_1_resp_ready;
    int io_load_1_s1_kill_data_read;
    int io_load_1_s1_kill;
    int io_load_1_s2_kill;
    int io_load_1_s0_pc;  // [47:0]
    int io_load_1_s1_pc;  // [47:0]
    int io_load_1_s2_pc;  // [47:0]
    int io_load_1_replacementUpdated;
    int io_load_1_is128Req;
    int io_load_1_s1_paddr_dup_lsu;  // [47:0]
    int io_load_1_s1_paddr_dup_dcache;  // [47:0]
};

struct input_store
{
    int io_store_req_valid;
    int io_store_req_bits_cmd;  // [4:0]
    int io_store_req_bits_vaddr;  // [47:0]
    int io_store_req_bits_addr;  // [47:0]
    int io_store_req_bits_data;  // [511:0]
    int io_store_req_bits_mask;  // [63:0]
    int io_store_req_bits_id;  // [5:0]
    int io_store_main_pipe_hit_resp_ready;
    int io_store_refill_hit_resp_ready;
    int io_store_replay_resp_ready;
};

struct input_automics
{
    int io_atomics_req_valid;
    int io_atomics_req_bits_cmd;  // [4:0]
    int io_atomics_req_bits_vaddr;  // [47:0]
    int io_atomics_req_bits_addr;  // [47:0]
    int io_atomics_req_bits_tagAlias;  // [1:0]
    int io_atomics_req_bits_id;  // [5:0]
    int io_atomics_req_bits_missId;  // [3:0]
    int io_atomics_req_bits_pc;  // [47:0]
    int io_atomics_req_bits_wordIdx;  // [2:0]
    int io_atomics_req_bits_amoData;  // [127:0]
    int io_atomics_req_bits_amoMask;  // [15:0]
    int io_atomics_req_bits_amoCmp;  // [127:0]
    int io_atomics_req_bits_probeOp;  // [1:0]
    int io_atomics_req_bits_needData;
    int io_atomics_req_bits_snpTxnId;  // [7:0]
    int io_atomics_req_bits_replaceWay;  // [3:0]
    int io_atomics_resp_ready;
    int io_atomics_replay_ready;
};

struct input_cmoReq
{
    int io_cmoReq_valid;
    int io_cmoReq_bits_id;  // [5:0]
    int io_cmoReq_bits_opcode;  // [5:0]
    int io_cmoReq_bits_addr;  // [47:0]
    int io_cmoReq_bits_alias;  // [1:0]
};

struct input_cmoResp
{
    int io_cmoResp_ready;
};

struct input_wfi
{
    int io_wfi_req;
};

struct input_l2
{
    int io_l2_req_ready;
    int io_l2_evt_ready;
    int io_l2_txRsp_ready;
    int io_l2_txDat_ready;
    int io_l2_rxRsp_valid;
    int io_l2_rxRsp_bits_txnID;  // [7:0]
    int io_l2_rxRsp_bits_srcID;  // [6:0]
    int io_l2_rxRsp_bits_tgtID;  // [6:0]
    int io_l2_rxRsp_bits_opcode;  // [2:0]
    int io_l2_rxRsp_bits_dbID;  // [7:0]
    int io_l2_rxRsp_bits_respErr;  // [1:0]
    int io_l2_rxRsp_bits_resp;  // [2:0]
    int io_l2_rxRsp_bits_cBusy;  // [2:0]
    int io_l2_rxRsp_bits_traceTag;
    int io_l2_rxDat_valid;
    int io_l2_rxDat_bits_txnID;  // [7:0]
    int io_l2_rxDat_bits_srcID;  // [6:0]
    int io_l2_rxDat_bits_tgtID;  // [6:0]
    int io_l2_rxDat_bits_opcode;
    int io_l2_rxDat_bits_dbID;  // [7:0]
    int io_l2_rxDat_bits_respErr;  // [1:0]
    int io_l2_rxDat_bits_resp;  // [2:0]
    int io_l2_rxDat_bits_dataSource;  // [4:0]
    int io_l2_rxDat_bits_cBusy;  // [2:0]
    int io_l2_rxDat_bits_dataID;
    int io_l2_rxDat_bits_data;  // [255:0]
    int io_l2_rxDat_bits_traceTag;
    int io_l2_rxSnp_valid;
    int io_l2_rxSnp_bits_txnID;  // [7:0]
    int io_l2_rxSnp_bits_srcID;  // [6:0]
    int io_l2_rxSnp_bits_tgtID;  // [6:0]
    int io_l2_rxSnp_bits_opcode;  // [1:0]
    int io_l2_rxSnp_bits_addr;  // [44:0]
    int io_l2_rxSnp_bits_tagAlias;  // [1:0]
    int io_l2_rxSnp_bits_ns;
    int io_l2_rxSnp_bits_traceTag;
};

struct input_forwardMshr
{
    int io_forwardMshr_id;  // [3:0]
    int io_forwardMshr_half;
};

struct input_refillWakeup
{
    int io_refillWakeup_ready;
};

struct input_loadReplay
{
    int io_loadReplay_ready;
};

// OUTPUT
struct output_load
{
    int io_load_0_req_ready;
    int io_load_0_resp_valid;
    int io_load_0_resp_bits_data;  // [127:0]
    int io_load_0_resp_bits_id;  // [5:0]
    int io_load_0_resp_bits_miss;
    int io_load_0_resp_bits_replay;
    int io_load_0_resp_bits_replayCarry_real_way_en;  // [3:0]
    int io_load_0_resp_bits_replayCarry_valid;
    int io_load_0_resp_bits_mshr_id;  // [3:0]
    int io_load_0_resp_bits_handled;
    int io_load_0_resp_bits_real_miss;
    int io_load_0_resp_bits_replacementUpdated;
    int io_load_0_s1_disable_fast_wakeup;
    int io_load_0_s2_hit;
    int io_load_0_s2_first_hit;
    int io_load_0_s2_bank_conflict;
    int io_load_0_s2_wpu_pred_fail;
    int io_load_0_s2_mq_nack;
    int io_load_1_req_ready;
    int io_load_1_resp_valid;
    int io_load_1_resp_bits_data;  // [127:0]
    int io_load_1_resp_bits_id;  // [5:0]
    int io_load_1_resp_bits_miss;
    int io_load_1_resp_bits_replay;
    int io_load_1_resp_bits_replayCarry_real_way_en;  // [3:0]
    int io_load_1_resp_bits_replayCarry_valid;
    int io_load_1_resp_bits_mshr_id;  // [3:0]
    int io_load_1_resp_bits_handled;
    int io_load_1_resp_bits_real_miss;
    int io_load_1_resp_bits_replacementUpdated;
    int io_load_1_s1_disable_fast_wakeup;
    int io_load_1_s2_hit;
    int io_load_1_s2_first_hit;
    int io_load_1_s2_bank_conflict;
    int io_load_1_s2_wpu_pred_fail;
    int io_load_1_s2_mq_nack;
};

struct output_store
{
    int io_store_req_ready;
    int io_store_main_pipe_hit_resp_valid;
    int io_store_main_pipe_hit_resp_bits_miss;
    int io_store_main_pipe_hit_resp_bits_replay;
    int io_store_main_pipe_hit_resp_bits_id;  // [5:0]
    int io_store_refill_hit_resp_valid;
    int io_store_refill_hit_resp_bits_miss;
    int io_store_refill_hit_resp_bits_replay;
    int io_store_refill_hit_resp_bits_id;  // [5:0]
    int io_store_replay_resp_valid;
    int io_store_replay_resp_bits_miss;
    int io_store_replay_resp_bits_replay;
    int io_store_replay_resp_bits_id;  // [5:0]
};

struct output_automics
{
    int io_atomics_req_ready;
    int io_atomics_resp_valid;
    int io_atomics_resp_bits_id;  // [5:0]
    int io_atomics_resp_bits_cmd;  // [4:0]
    int io_atomics_resp_bits_data;  // [127:0]
    int io_atomics_resp_bits_success;
    int io_atomics_replay_valid;
    int io_atomics_replay_bits_miss;
    int io_atomics_replay_bits_replay;
    int io_atomics_replay_bits_id;  // [5:0]
};

struct output_cmoReq
{
    int io_cmoReq_ready;
};

struct output_cmoResp
{
    int io_cmoResp_valid;
    int io_cmoResp_bits_id;  // [5:0]
    int io_cmoResp_bits_done;
    int io_cmoResp_bits_error;
};

struct output_wfi
{
    int io_wfi_safe;
};

struct output_l2
{
    int io_l2_req_valid;
    int io_l2_req_bits_txnID;  // [7:0]
    int io_l2_req_bits_srcID;  // [6:0]
    int io_l2_req_bits_tgtID;  // [6:0]
    int io_l2_req_bits_opcode;  // [5:0]
    int io_l2_req_bits_size;  // [2:0]
    int io_l2_req_bits_addr;  // [47:0]
    int io_l2_req_bits_tagAlias;  // [1:0]
    int io_l2_req_bits_ns;
    int io_l2_req_bits_order;  // [1:0]
    int io_l2_req_bits_memAttr;  // [3:0]
    int io_l2_req_bits_excl;
    int io_l2_req_bits_expCompData;
    int io_l2_req_bits_expCompStash;
    int io_l2_req_bits_wayValid;
    int io_l2_req_bits_way;  // [1:0]
    int io_l2_req_bits_traceTag;
    int io_l2_evt_valid;
    int io_l2_evt_bits_txnID;  // [7:0]
    int io_l2_evt_bits_srcID;  // [6:0]
    int io_l2_evt_bits_tgtID;  // [6:0]
    int io_l2_evt_bits_opcode;
    int io_l2_evt_bits_addr;  // [47:0]
    int io_l2_evt_bits_ns;
    int io_l2_evt_bits_memAttr;
    int io_l2_evt_bits_wayValid;
    int io_l2_evt_bits_way;  // [1:0]
    int io_l2_evt_bits_traceTag;
    int io_l2_txRsp_valid;
    int io_l2_txRsp_bits_txnID;  // [7:0]
    int io_l2_txRsp_bits_srcID;  // [6:0]
    int io_l2_txRsp_bits_tgtID;  // [6:0]
    int io_l2_txRsp_bits_opcode;
    int io_l2_txRsp_bits_respErr;  // [1:0]
    int io_l2_txRsp_bits_resp;  // [2:0]
    int io_l2_txRsp_bits_traceTag;
    int io_l2_txDat_valid;
    int io_l2_txDat_bits_txnID;  // [7:0]
    int io_l2_txDat_bits_srcID;  // [6:0]
    int io_l2_txDat_bits_tgtID;  // [6:0]
    int io_l2_txDat_bits_opcode;  // [1:0]
    int io_l2_txDat_bits_respErr;  // [1:0]
    int io_l2_txDat_bits_resp;  // [2:0]
    int io_l2_txDat_bits_dataID;
    int io_l2_txDat_bits_data;  // [255:0]
    int io_l2_txDat_bits_byteEnable;  // [31:0]
    int io_l2_txDat_bits_traceTag;
    int io_l2_rxRsp_ready;
    int io_l2_rxDat_ready;
    int io_l2_rxSnp_ready;
};

struct output_forwardChi
{
    int io_forwardChi_valid;
    int io_forwardChi_bits_id;  // [3:0]
    int io_forwardChi_bits_half;
    int io_forwardChi_bits_data;  // [255:0]
};

struct output_forwardMshr
{
    int io_forwardMshr_data_valid;
    int io_forwardMshr_data_bits;  // [255:0]
};

struct output_refillWakeup
{
    int io_refillWakeup_valid;
    int io_refillWakeup_bits_id;  // [3:0]
    int io_refillWakeup_bits_addr;  // [47:0]
    int io_refillWakeup_bits_alias;  // [1:0]
};

struct output_loadReplay
{
    int io_loadReplay_valid;
    int io_loadReplay_bits_id;  // [3:0]
    int io_loadReplay_bits_addr;  // [47:0]
    int io_loadReplay_bits_alias;  // [1:0]
};

#endif
