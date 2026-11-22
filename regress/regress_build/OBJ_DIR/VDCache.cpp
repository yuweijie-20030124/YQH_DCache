// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VDCache.h"
#include "VDCache__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VDCache::VDCache(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VDCache__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_load_0_req_ready{vlSymsp->TOP.io_load_0_req_ready}
    , io_load_0_req_valid{vlSymsp->TOP.io_load_0_req_valid}
    , io_load_0_req_bits_cmd{vlSymsp->TOP.io_load_0_req_bits_cmd}
    , io_load_0_req_bits_id{vlSymsp->TOP.io_load_0_req_bits_id}
    , io_load_0_req_bits_instrtype{vlSymsp->TOP.io_load_0_req_bits_instrtype}
    , io_load_0_req_bits_isFirstIssue{vlSymsp->TOP.io_load_0_req_bits_isFirstIssue}
    , io_load_0_req_bits_replayCarry_real_way_en{vlSymsp->TOP.io_load_0_req_bits_replayCarry_real_way_en}
    , io_load_0_req_bits_replayCarry_valid{vlSymsp->TOP.io_load_0_req_bits_replayCarry_valid}
    , io_load_0_req_bits_lqIdx_flag{vlSymsp->TOP.io_load_0_req_bits_lqIdx_flag}
    , io_load_0_req_bits_lqIdx_value{vlSymsp->TOP.io_load_0_req_bits_lqIdx_value}
    , io_load_0_resp_ready{vlSymsp->TOP.io_load_0_resp_ready}
    , io_load_0_resp_valid{vlSymsp->TOP.io_load_0_resp_valid}
    , io_load_0_resp_bits_id{vlSymsp->TOP.io_load_0_resp_bits_id}
    , io_load_0_resp_bits_miss{vlSymsp->TOP.io_load_0_resp_bits_miss}
    , io_load_0_resp_bits_replay{vlSymsp->TOP.io_load_0_resp_bits_replay}
    , io_load_0_resp_bits_replayCarry_real_way_en{vlSymsp->TOP.io_load_0_resp_bits_replayCarry_real_way_en}
    , io_load_0_resp_bits_replayCarry_valid{vlSymsp->TOP.io_load_0_resp_bits_replayCarry_valid}
    , io_load_0_resp_bits_mshr_id{vlSymsp->TOP.io_load_0_resp_bits_mshr_id}
    , io_load_0_resp_bits_handled{vlSymsp->TOP.io_load_0_resp_bits_handled}
    , io_load_0_resp_bits_real_miss{vlSymsp->TOP.io_load_0_resp_bits_real_miss}
    , io_load_0_resp_bits_replacementUpdated{vlSymsp->TOP.io_load_0_resp_bits_replacementUpdated}
    , io_load_0_s1_kill_data_read{vlSymsp->TOP.io_load_0_s1_kill_data_read}
    , io_load_0_s1_kill{vlSymsp->TOP.io_load_0_s1_kill}
    , io_load_0_s2_kill{vlSymsp->TOP.io_load_0_s2_kill}
    , io_load_0_replacementUpdated{vlSymsp->TOP.io_load_0_replacementUpdated}
    , io_load_0_is128Req{vlSymsp->TOP.io_load_0_is128Req}
    , io_load_0_s1_disable_fast_wakeup{vlSymsp->TOP.io_load_0_s1_disable_fast_wakeup}
    , io_load_0_s2_hit{vlSymsp->TOP.io_load_0_s2_hit}
    , io_load_0_s2_first_hit{vlSymsp->TOP.io_load_0_s2_first_hit}
    , io_load_0_s2_bank_conflict{vlSymsp->TOP.io_load_0_s2_bank_conflict}
    , io_load_0_s2_wpu_pred_fail{vlSymsp->TOP.io_load_0_s2_wpu_pred_fail}
    , io_load_0_s2_mq_nack{vlSymsp->TOP.io_load_0_s2_mq_nack}
    , io_load_1_req_ready{vlSymsp->TOP.io_load_1_req_ready}
    , io_load_1_req_valid{vlSymsp->TOP.io_load_1_req_valid}
    , io_load_1_req_bits_cmd{vlSymsp->TOP.io_load_1_req_bits_cmd}
    , io_load_1_req_bits_id{vlSymsp->TOP.io_load_1_req_bits_id}
    , io_load_1_req_bits_instrtype{vlSymsp->TOP.io_load_1_req_bits_instrtype}
    , io_load_1_req_bits_isFirstIssue{vlSymsp->TOP.io_load_1_req_bits_isFirstIssue}
    , io_load_1_req_bits_replayCarry_real_way_en{vlSymsp->TOP.io_load_1_req_bits_replayCarry_real_way_en}
    , io_load_1_req_bits_replayCarry_valid{vlSymsp->TOP.io_load_1_req_bits_replayCarry_valid}
    , io_load_1_req_bits_lqIdx_flag{vlSymsp->TOP.io_load_1_req_bits_lqIdx_flag}
    , io_load_1_req_bits_lqIdx_value{vlSymsp->TOP.io_load_1_req_bits_lqIdx_value}
    , io_load_1_resp_ready{vlSymsp->TOP.io_load_1_resp_ready}
    , io_load_1_resp_valid{vlSymsp->TOP.io_load_1_resp_valid}
    , io_load_1_resp_bits_id{vlSymsp->TOP.io_load_1_resp_bits_id}
    , io_load_1_resp_bits_miss{vlSymsp->TOP.io_load_1_resp_bits_miss}
    , io_load_1_resp_bits_replay{vlSymsp->TOP.io_load_1_resp_bits_replay}
    , io_load_1_resp_bits_replayCarry_real_way_en{vlSymsp->TOP.io_load_1_resp_bits_replayCarry_real_way_en}
    , io_load_1_resp_bits_replayCarry_valid{vlSymsp->TOP.io_load_1_resp_bits_replayCarry_valid}
    , io_load_1_resp_bits_mshr_id{vlSymsp->TOP.io_load_1_resp_bits_mshr_id}
    , io_load_1_resp_bits_handled{vlSymsp->TOP.io_load_1_resp_bits_handled}
    , io_load_1_resp_bits_real_miss{vlSymsp->TOP.io_load_1_resp_bits_real_miss}
    , io_load_1_resp_bits_replacementUpdated{vlSymsp->TOP.io_load_1_resp_bits_replacementUpdated}
    , io_load_1_s1_kill_data_read{vlSymsp->TOP.io_load_1_s1_kill_data_read}
    , io_load_1_s1_kill{vlSymsp->TOP.io_load_1_s1_kill}
    , io_load_1_s2_kill{vlSymsp->TOP.io_load_1_s2_kill}
    , io_load_1_replacementUpdated{vlSymsp->TOP.io_load_1_replacementUpdated}
    , io_load_1_is128Req{vlSymsp->TOP.io_load_1_is128Req}
    , io_load_1_s1_disable_fast_wakeup{vlSymsp->TOP.io_load_1_s1_disable_fast_wakeup}
    , io_load_1_s2_hit{vlSymsp->TOP.io_load_1_s2_hit}
    , io_load_1_s2_first_hit{vlSymsp->TOP.io_load_1_s2_first_hit}
    , io_load_1_s2_bank_conflict{vlSymsp->TOP.io_load_1_s2_bank_conflict}
    , io_load_1_s2_wpu_pred_fail{vlSymsp->TOP.io_load_1_s2_wpu_pred_fail}
    , io_load_1_s2_mq_nack{vlSymsp->TOP.io_load_1_s2_mq_nack}
    , io_store_req_ready{vlSymsp->TOP.io_store_req_ready}
    , io_store_req_valid{vlSymsp->TOP.io_store_req_valid}
    , io_store_req_bits_cmd{vlSymsp->TOP.io_store_req_bits_cmd}
    , io_store_req_bits_id{vlSymsp->TOP.io_store_req_bits_id}
    , io_store_main_pipe_hit_resp_ready{vlSymsp->TOP.io_store_main_pipe_hit_resp_ready}
    , io_store_main_pipe_hit_resp_valid{vlSymsp->TOP.io_store_main_pipe_hit_resp_valid}
    , io_store_main_pipe_hit_resp_bits_miss{vlSymsp->TOP.io_store_main_pipe_hit_resp_bits_miss}
    , io_store_main_pipe_hit_resp_bits_replay{vlSymsp->TOP.io_store_main_pipe_hit_resp_bits_replay}
    , io_store_main_pipe_hit_resp_bits_id{vlSymsp->TOP.io_store_main_pipe_hit_resp_bits_id}
    , io_store_refill_hit_resp_ready{vlSymsp->TOP.io_store_refill_hit_resp_ready}
    , io_store_refill_hit_resp_valid{vlSymsp->TOP.io_store_refill_hit_resp_valid}
    , io_store_refill_hit_resp_bits_miss{vlSymsp->TOP.io_store_refill_hit_resp_bits_miss}
    , io_store_refill_hit_resp_bits_replay{vlSymsp->TOP.io_store_refill_hit_resp_bits_replay}
    , io_store_refill_hit_resp_bits_id{vlSymsp->TOP.io_store_refill_hit_resp_bits_id}
    , io_store_replay_resp_ready{vlSymsp->TOP.io_store_replay_resp_ready}
    , io_store_replay_resp_valid{vlSymsp->TOP.io_store_replay_resp_valid}
    , io_store_replay_resp_bits_miss{vlSymsp->TOP.io_store_replay_resp_bits_miss}
    , io_store_replay_resp_bits_replay{vlSymsp->TOP.io_store_replay_resp_bits_replay}
    , io_store_replay_resp_bits_id{vlSymsp->TOP.io_store_replay_resp_bits_id}
    , io_atomics_req_ready{vlSymsp->TOP.io_atomics_req_ready}
    , io_atomics_req_valid{vlSymsp->TOP.io_atomics_req_valid}
    , io_atomics_req_bits_cmd{vlSymsp->TOP.io_atomics_req_bits_cmd}
    , io_atomics_req_bits_tagAlias{vlSymsp->TOP.io_atomics_req_bits_tagAlias}
    , io_atomics_req_bits_id{vlSymsp->TOP.io_atomics_req_bits_id}
    , io_atomics_req_bits_missId{vlSymsp->TOP.io_atomics_req_bits_missId}
    , io_atomics_req_bits_wordIdx{vlSymsp->TOP.io_atomics_req_bits_wordIdx}
    , io_atomics_req_bits_probeOp{vlSymsp->TOP.io_atomics_req_bits_probeOp}
    , io_atomics_req_bits_needData{vlSymsp->TOP.io_atomics_req_bits_needData}
    , io_atomics_req_bits_snpTxnId{vlSymsp->TOP.io_atomics_req_bits_snpTxnId}
    , io_atomics_req_bits_replaceWay{vlSymsp->TOP.io_atomics_req_bits_replaceWay}
    , io_atomics_resp_ready{vlSymsp->TOP.io_atomics_resp_ready}
    , io_atomics_resp_valid{vlSymsp->TOP.io_atomics_resp_valid}
    , io_atomics_resp_bits_id{vlSymsp->TOP.io_atomics_resp_bits_id}
    , io_atomics_resp_bits_cmd{vlSymsp->TOP.io_atomics_resp_bits_cmd}
    , io_atomics_resp_bits_success{vlSymsp->TOP.io_atomics_resp_bits_success}
    , io_atomics_replay_ready{vlSymsp->TOP.io_atomics_replay_ready}
    , io_atomics_replay_valid{vlSymsp->TOP.io_atomics_replay_valid}
    , io_atomics_replay_bits_miss{vlSymsp->TOP.io_atomics_replay_bits_miss}
    , io_atomics_replay_bits_replay{vlSymsp->TOP.io_atomics_replay_bits_replay}
    , io_atomics_replay_bits_id{vlSymsp->TOP.io_atomics_replay_bits_id}
    , io_cmoReq_ready{vlSymsp->TOP.io_cmoReq_ready}
    , io_cmoReq_valid{vlSymsp->TOP.io_cmoReq_valid}
    , io_cmoReq_bits_id{vlSymsp->TOP.io_cmoReq_bits_id}
    , io_cmoReq_bits_opcode{vlSymsp->TOP.io_cmoReq_bits_opcode}
    , io_cmoReq_bits_alias{vlSymsp->TOP.io_cmoReq_bits_alias}
    , io_cmoResp_ready{vlSymsp->TOP.io_cmoResp_ready}
    , io_cmoResp_valid{vlSymsp->TOP.io_cmoResp_valid}
    , io_cmoResp_bits_id{vlSymsp->TOP.io_cmoResp_bits_id}
    , io_cmoResp_bits_done{vlSymsp->TOP.io_cmoResp_bits_done}
    , io_cmoResp_bits_error{vlSymsp->TOP.io_cmoResp_bits_error}
    , io_wfi_req{vlSymsp->TOP.io_wfi_req}
    , io_wfi_safe{vlSymsp->TOP.io_wfi_safe}
    , io_l2_req_ready{vlSymsp->TOP.io_l2_req_ready}
    , io_l2_req_valid{vlSymsp->TOP.io_l2_req_valid}
    , io_l2_req_bits_txnID{vlSymsp->TOP.io_l2_req_bits_txnID}
    , io_l2_req_bits_srcID{vlSymsp->TOP.io_l2_req_bits_srcID}
    , io_l2_req_bits_tgtID{vlSymsp->TOP.io_l2_req_bits_tgtID}
    , io_l2_req_bits_opcode{vlSymsp->TOP.io_l2_req_bits_opcode}
    , io_l2_req_bits_size{vlSymsp->TOP.io_l2_req_bits_size}
    , io_l2_req_bits_tagAlias{vlSymsp->TOP.io_l2_req_bits_tagAlias}
    , io_l2_req_bits_ns{vlSymsp->TOP.io_l2_req_bits_ns}
    , io_l2_req_bits_order{vlSymsp->TOP.io_l2_req_bits_order}
    , io_l2_req_bits_memAttr{vlSymsp->TOP.io_l2_req_bits_memAttr}
    , io_l2_req_bits_excl{vlSymsp->TOP.io_l2_req_bits_excl}
    , io_l2_req_bits_expCompData{vlSymsp->TOP.io_l2_req_bits_expCompData}
    , io_l2_req_bits_expCompStash{vlSymsp->TOP.io_l2_req_bits_expCompStash}
    , io_l2_req_bits_wayValid{vlSymsp->TOP.io_l2_req_bits_wayValid}
    , io_l2_req_bits_way{vlSymsp->TOP.io_l2_req_bits_way}
    , io_l2_req_bits_traceTag{vlSymsp->TOP.io_l2_req_bits_traceTag}
    , io_l2_evt_ready{vlSymsp->TOP.io_l2_evt_ready}
    , io_l2_evt_valid{vlSymsp->TOP.io_l2_evt_valid}
    , io_l2_evt_bits_txnID{vlSymsp->TOP.io_l2_evt_bits_txnID}
    , io_l2_evt_bits_srcID{vlSymsp->TOP.io_l2_evt_bits_srcID}
    , io_l2_evt_bits_tgtID{vlSymsp->TOP.io_l2_evt_bits_tgtID}
    , io_l2_evt_bits_opcode{vlSymsp->TOP.io_l2_evt_bits_opcode}
    , io_l2_evt_bits_ns{vlSymsp->TOP.io_l2_evt_bits_ns}
    , io_l2_evt_bits_memAttr{vlSymsp->TOP.io_l2_evt_bits_memAttr}
    , io_l2_evt_bits_wayValid{vlSymsp->TOP.io_l2_evt_bits_wayValid}
    , io_l2_evt_bits_way{vlSymsp->TOP.io_l2_evt_bits_way}
    , io_l2_evt_bits_traceTag{vlSymsp->TOP.io_l2_evt_bits_traceTag}
    , io_l2_txRsp_ready{vlSymsp->TOP.io_l2_txRsp_ready}
    , io_l2_txRsp_valid{vlSymsp->TOP.io_l2_txRsp_valid}
    , io_l2_txRsp_bits_txnID{vlSymsp->TOP.io_l2_txRsp_bits_txnID}
    , io_l2_txRsp_bits_srcID{vlSymsp->TOP.io_l2_txRsp_bits_srcID}
    , io_l2_txRsp_bits_tgtID{vlSymsp->TOP.io_l2_txRsp_bits_tgtID}
    , io_l2_txRsp_bits_opcode{vlSymsp->TOP.io_l2_txRsp_bits_opcode}
    , io_l2_txRsp_bits_respErr{vlSymsp->TOP.io_l2_txRsp_bits_respErr}
    , io_l2_txRsp_bits_resp{vlSymsp->TOP.io_l2_txRsp_bits_resp}
    , io_l2_txRsp_bits_traceTag{vlSymsp->TOP.io_l2_txRsp_bits_traceTag}
    , io_l2_txDat_ready{vlSymsp->TOP.io_l2_txDat_ready}
    , io_l2_txDat_valid{vlSymsp->TOP.io_l2_txDat_valid}
    , io_l2_txDat_bits_txnID{vlSymsp->TOP.io_l2_txDat_bits_txnID}
    , io_l2_txDat_bits_srcID{vlSymsp->TOP.io_l2_txDat_bits_srcID}
    , io_l2_txDat_bits_tgtID{vlSymsp->TOP.io_l2_txDat_bits_tgtID}
    , io_l2_txDat_bits_opcode{vlSymsp->TOP.io_l2_txDat_bits_opcode}
    , io_l2_txDat_bits_respErr{vlSymsp->TOP.io_l2_txDat_bits_respErr}
    , io_l2_txDat_bits_resp{vlSymsp->TOP.io_l2_txDat_bits_resp}
    , io_l2_txDat_bits_dataID{vlSymsp->TOP.io_l2_txDat_bits_dataID}
    , io_l2_txDat_bits_traceTag{vlSymsp->TOP.io_l2_txDat_bits_traceTag}
    , io_l2_rxRsp_ready{vlSymsp->TOP.io_l2_rxRsp_ready}
    , io_l2_rxRsp_valid{vlSymsp->TOP.io_l2_rxRsp_valid}
    , io_l2_rxRsp_bits_txnID{vlSymsp->TOP.io_l2_rxRsp_bits_txnID}
    , io_l2_rxRsp_bits_srcID{vlSymsp->TOP.io_l2_rxRsp_bits_srcID}
    , io_l2_rxRsp_bits_tgtID{vlSymsp->TOP.io_l2_rxRsp_bits_tgtID}
    , io_l2_rxRsp_bits_opcode{vlSymsp->TOP.io_l2_rxRsp_bits_opcode}
    , io_l2_rxRsp_bits_dbID{vlSymsp->TOP.io_l2_rxRsp_bits_dbID}
    , io_l2_rxRsp_bits_respErr{vlSymsp->TOP.io_l2_rxRsp_bits_respErr}
    , io_l2_rxRsp_bits_resp{vlSymsp->TOP.io_l2_rxRsp_bits_resp}
    , io_l2_rxRsp_bits_cBusy{vlSymsp->TOP.io_l2_rxRsp_bits_cBusy}
    , io_l2_rxRsp_bits_traceTag{vlSymsp->TOP.io_l2_rxRsp_bits_traceTag}
    , io_l2_rxDat_ready{vlSymsp->TOP.io_l2_rxDat_ready}
    , io_l2_rxDat_valid{vlSymsp->TOP.io_l2_rxDat_valid}
    , io_l2_rxDat_bits_txnID{vlSymsp->TOP.io_l2_rxDat_bits_txnID}
    , io_l2_rxDat_bits_srcID{vlSymsp->TOP.io_l2_rxDat_bits_srcID}
    , io_l2_rxDat_bits_tgtID{vlSymsp->TOP.io_l2_rxDat_bits_tgtID}
    , io_l2_rxDat_bits_opcode{vlSymsp->TOP.io_l2_rxDat_bits_opcode}
    , io_l2_rxDat_bits_dbID{vlSymsp->TOP.io_l2_rxDat_bits_dbID}
    , io_l2_rxDat_bits_respErr{vlSymsp->TOP.io_l2_rxDat_bits_respErr}
    , io_l2_rxDat_bits_resp{vlSymsp->TOP.io_l2_rxDat_bits_resp}
    , io_l2_rxDat_bits_dataSource{vlSymsp->TOP.io_l2_rxDat_bits_dataSource}
    , io_l2_rxDat_bits_cBusy{vlSymsp->TOP.io_l2_rxDat_bits_cBusy}
    , io_l2_rxDat_bits_dataID{vlSymsp->TOP.io_l2_rxDat_bits_dataID}
    , io_l2_rxDat_bits_traceTag{vlSymsp->TOP.io_l2_rxDat_bits_traceTag}
    , io_l2_rxSnp_ready{vlSymsp->TOP.io_l2_rxSnp_ready}
    , io_l2_rxSnp_valid{vlSymsp->TOP.io_l2_rxSnp_valid}
    , io_l2_rxSnp_bits_txnID{vlSymsp->TOP.io_l2_rxSnp_bits_txnID}
    , io_l2_rxSnp_bits_srcID{vlSymsp->TOP.io_l2_rxSnp_bits_srcID}
    , io_l2_rxSnp_bits_tgtID{vlSymsp->TOP.io_l2_rxSnp_bits_tgtID}
    , io_l2_rxSnp_bits_opcode{vlSymsp->TOP.io_l2_rxSnp_bits_opcode}
    , io_l2_rxSnp_bits_tagAlias{vlSymsp->TOP.io_l2_rxSnp_bits_tagAlias}
    , io_l2_rxSnp_bits_ns{vlSymsp->TOP.io_l2_rxSnp_bits_ns}
    , io_l2_rxSnp_bits_traceTag{vlSymsp->TOP.io_l2_rxSnp_bits_traceTag}
    , io_forwardChi_valid{vlSymsp->TOP.io_forwardChi_valid}
    , io_forwardChi_bits_id{vlSymsp->TOP.io_forwardChi_bits_id}
    , io_forwardChi_bits_half{vlSymsp->TOP.io_forwardChi_bits_half}
    , io_forwardMshr_id{vlSymsp->TOP.io_forwardMshr_id}
    , io_forwardMshr_half{vlSymsp->TOP.io_forwardMshr_half}
    , io_forwardMshr_data_valid{vlSymsp->TOP.io_forwardMshr_data_valid}
    , io_refillWakeup_ready{vlSymsp->TOP.io_refillWakeup_ready}
    , io_refillWakeup_valid{vlSymsp->TOP.io_refillWakeup_valid}
    , io_refillWakeup_bits_id{vlSymsp->TOP.io_refillWakeup_bits_id}
    , io_refillWakeup_bits_alias{vlSymsp->TOP.io_refillWakeup_bits_alias}
    , io_loadReplay_ready{vlSymsp->TOP.io_loadReplay_ready}
    , io_loadReplay_valid{vlSymsp->TOP.io_loadReplay_valid}
    , io_loadReplay_bits_id{vlSymsp->TOP.io_loadReplay_bits_id}
    , io_loadReplay_bits_alias{vlSymsp->TOP.io_loadReplay_bits_alias}
    , io_load_0_req_bits_mask{vlSymsp->TOP.io_load_0_req_bits_mask}
    , io_load_1_req_bits_mask{vlSymsp->TOP.io_load_1_req_bits_mask}
    , io_atomics_req_bits_amoMask{vlSymsp->TOP.io_atomics_req_bits_amoMask}
    , io_load_0_req_bits_data{vlSymsp->TOP.io_load_0_req_bits_data}
    , io_load_0_resp_bits_data{vlSymsp->TOP.io_load_0_resp_bits_data}
    , io_load_1_req_bits_data{vlSymsp->TOP.io_load_1_req_bits_data}
    , io_load_1_resp_bits_data{vlSymsp->TOP.io_load_1_resp_bits_data}
    , io_store_req_bits_data{vlSymsp->TOP.io_store_req_bits_data}
    , io_atomics_req_bits_amoData{vlSymsp->TOP.io_atomics_req_bits_amoData}
    , io_atomics_req_bits_amoCmp{vlSymsp->TOP.io_atomics_req_bits_amoCmp}
    , io_atomics_resp_bits_data{vlSymsp->TOP.io_atomics_resp_bits_data}
    , io_l2_txDat_bits_data{vlSymsp->TOP.io_l2_txDat_bits_data}
    , io_l2_txDat_bits_byteEnable{vlSymsp->TOP.io_l2_txDat_bits_byteEnable}
    , io_l2_rxDat_bits_data{vlSymsp->TOP.io_l2_rxDat_bits_data}
    , io_forwardChi_bits_data{vlSymsp->TOP.io_forwardChi_bits_data}
    , io_forwardMshr_data_bits{vlSymsp->TOP.io_forwardMshr_data_bits}
    , io_load_0_req_bits_vaddr{vlSymsp->TOP.io_load_0_req_bits_vaddr}
    , io_load_0_req_bits_vaddr_dup{vlSymsp->TOP.io_load_0_req_bits_vaddr_dup}
    , io_load_0_s0_pc{vlSymsp->TOP.io_load_0_s0_pc}
    , io_load_0_s1_pc{vlSymsp->TOP.io_load_0_s1_pc}
    , io_load_0_s2_pc{vlSymsp->TOP.io_load_0_s2_pc}
    , io_load_0_s1_paddr_dup_lsu{vlSymsp->TOP.io_load_0_s1_paddr_dup_lsu}
    , io_load_0_s1_paddr_dup_dcache{vlSymsp->TOP.io_load_0_s1_paddr_dup_dcache}
    , io_load_1_req_bits_vaddr{vlSymsp->TOP.io_load_1_req_bits_vaddr}
    , io_load_1_req_bits_vaddr_dup{vlSymsp->TOP.io_load_1_req_bits_vaddr_dup}
    , io_load_1_s0_pc{vlSymsp->TOP.io_load_1_s0_pc}
    , io_load_1_s1_pc{vlSymsp->TOP.io_load_1_s1_pc}
    , io_load_1_s2_pc{vlSymsp->TOP.io_load_1_s2_pc}
    , io_load_1_s1_paddr_dup_lsu{vlSymsp->TOP.io_load_1_s1_paddr_dup_lsu}
    , io_load_1_s1_paddr_dup_dcache{vlSymsp->TOP.io_load_1_s1_paddr_dup_dcache}
    , io_store_req_bits_vaddr{vlSymsp->TOP.io_store_req_bits_vaddr}
    , io_store_req_bits_addr{vlSymsp->TOP.io_store_req_bits_addr}
    , io_store_req_bits_mask{vlSymsp->TOP.io_store_req_bits_mask}
    , io_atomics_req_bits_vaddr{vlSymsp->TOP.io_atomics_req_bits_vaddr}
    , io_atomics_req_bits_addr{vlSymsp->TOP.io_atomics_req_bits_addr}
    , io_atomics_req_bits_pc{vlSymsp->TOP.io_atomics_req_bits_pc}
    , io_cmoReq_bits_addr{vlSymsp->TOP.io_cmoReq_bits_addr}
    , io_l2_req_bits_addr{vlSymsp->TOP.io_l2_req_bits_addr}
    , io_l2_evt_bits_addr{vlSymsp->TOP.io_l2_evt_bits_addr}
    , io_l2_rxSnp_bits_addr{vlSymsp->TOP.io_l2_rxSnp_bits_addr}
    , io_refillWakeup_bits_addr{vlSymsp->TOP.io_refillWakeup_bits_addr}
    , io_loadReplay_bits_addr{vlSymsp->TOP.io_loadReplay_bits_addr}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VDCache::VDCache(const char* _vcname__)
    : VDCache(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VDCache::~VDCache() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VDCache___024root___eval_debug_assertions(VDCache___024root* vlSelf);
#endif  // VL_DEBUG
void VDCache___024root___eval_static(VDCache___024root* vlSelf);
void VDCache___024root___eval_initial(VDCache___024root* vlSelf);
void VDCache___024root___eval_settle(VDCache___024root* vlSelf);
void VDCache___024root___eval(VDCache___024root* vlSelf);

void VDCache::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VDCache::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VDCache___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VDCache___024root___eval_static(&(vlSymsp->TOP));
        VDCache___024root___eval_initial(&(vlSymsp->TOP));
        VDCache___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VDCache___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VDCache::eventsPending() { return false; }

uint64_t VDCache::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VDCache::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VDCache___024root___eval_final(VDCache___024root* vlSelf);

VL_ATTR_COLD void VDCache::final() {
    VDCache___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VDCache::hierName() const { return vlSymsp->name(); }
const char* VDCache::modelName() const { return "VDCache"; }
unsigned VDCache::threads() const { return 1; }
void VDCache::prepareClone() const { contextp()->prepareClone(); }
void VDCache::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VDCache::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VDCache___024root__trace_init_top(VDCache___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VDCache___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDCache___024root*>(voidSelf);
    VDCache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VDCache___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VDCache___024root__trace_register(VDCache___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VDCache::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VDCache::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VDCache___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
