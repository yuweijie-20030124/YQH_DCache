// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VDCACHE_H_
#define VERILATED_VDCACHE_H_  // guard

#include "verilated.h"

class VDCache__Syms;
class VDCache___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VDCache VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VDCache__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_OUT8(&io_load_0_req_ready,0,0);
    VL_IN8(&io_load_0_req_valid,0,0);
    VL_IN8(&io_load_0_req_bits_cmd,4,0);
    VL_IN8(&io_load_0_req_bits_id,5,0);
    VL_IN8(&io_load_0_req_bits_instrtype,3,0);
    VL_IN8(&io_load_0_req_bits_isFirstIssue,0,0);
    VL_IN8(&io_load_0_req_bits_replayCarry_real_way_en,3,0);
    VL_IN8(&io_load_0_req_bits_replayCarry_valid,0,0);
    VL_IN8(&io_load_0_req_bits_lqIdx_flag,0,0);
    VL_IN8(&io_load_0_req_bits_lqIdx_value,3,0);
    VL_IN8(&io_load_0_resp_ready,0,0);
    VL_OUT8(&io_load_0_resp_valid,0,0);
    VL_OUT8(&io_load_0_resp_bits_id,5,0);
    VL_OUT8(&io_load_0_resp_bits_miss,0,0);
    VL_OUT8(&io_load_0_resp_bits_replay,0,0);
    VL_OUT8(&io_load_0_resp_bits_replayCarry_real_way_en,3,0);
    VL_OUT8(&io_load_0_resp_bits_replayCarry_valid,0,0);
    VL_OUT8(&io_load_0_resp_bits_mshr_id,3,0);
    VL_OUT8(&io_load_0_resp_bits_handled,0,0);
    VL_OUT8(&io_load_0_resp_bits_real_miss,0,0);
    VL_OUT8(&io_load_0_resp_bits_replacementUpdated,0,0);
    VL_IN8(&io_load_0_s1_kill_data_read,0,0);
    VL_IN8(&io_load_0_s1_kill,0,0);
    VL_IN8(&io_load_0_s2_kill,0,0);
    VL_IN8(&io_load_0_replacementUpdated,0,0);
    VL_IN8(&io_load_0_is128Req,0,0);
    VL_OUT8(&io_load_0_s1_disable_fast_wakeup,0,0);
    VL_OUT8(&io_load_0_s2_hit,0,0);
    VL_OUT8(&io_load_0_s2_first_hit,0,0);
    VL_OUT8(&io_load_0_s2_bank_conflict,0,0);
    VL_OUT8(&io_load_0_s2_wpu_pred_fail,0,0);
    VL_OUT8(&io_load_0_s2_mq_nack,0,0);
    VL_OUT8(&io_load_1_req_ready,0,0);
    VL_IN8(&io_load_1_req_valid,0,0);
    VL_IN8(&io_load_1_req_bits_cmd,4,0);
    VL_IN8(&io_load_1_req_bits_id,5,0);
    VL_IN8(&io_load_1_req_bits_instrtype,3,0);
    VL_IN8(&io_load_1_req_bits_isFirstIssue,0,0);
    VL_IN8(&io_load_1_req_bits_replayCarry_real_way_en,3,0);
    VL_IN8(&io_load_1_req_bits_replayCarry_valid,0,0);
    VL_IN8(&io_load_1_req_bits_lqIdx_flag,0,0);
    VL_IN8(&io_load_1_req_bits_lqIdx_value,3,0);
    VL_IN8(&io_load_1_resp_ready,0,0);
    VL_OUT8(&io_load_1_resp_valid,0,0);
    VL_OUT8(&io_load_1_resp_bits_id,5,0);
    VL_OUT8(&io_load_1_resp_bits_miss,0,0);
    VL_OUT8(&io_load_1_resp_bits_replay,0,0);
    VL_OUT8(&io_load_1_resp_bits_replayCarry_real_way_en,3,0);
    VL_OUT8(&io_load_1_resp_bits_replayCarry_valid,0,0);
    VL_OUT8(&io_load_1_resp_bits_mshr_id,3,0);
    VL_OUT8(&io_load_1_resp_bits_handled,0,0);
    VL_OUT8(&io_load_1_resp_bits_real_miss,0,0);
    VL_OUT8(&io_load_1_resp_bits_replacementUpdated,0,0);
    VL_IN8(&io_load_1_s1_kill_data_read,0,0);
    VL_IN8(&io_load_1_s1_kill,0,0);
    VL_IN8(&io_load_1_s2_kill,0,0);
    VL_IN8(&io_load_1_replacementUpdated,0,0);
    VL_IN8(&io_load_1_is128Req,0,0);
    VL_OUT8(&io_load_1_s1_disable_fast_wakeup,0,0);
    VL_OUT8(&io_load_1_s2_hit,0,0);
    VL_OUT8(&io_load_1_s2_first_hit,0,0);
    VL_OUT8(&io_load_1_s2_bank_conflict,0,0);
    VL_OUT8(&io_load_1_s2_wpu_pred_fail,0,0);
    VL_OUT8(&io_load_1_s2_mq_nack,0,0);
    VL_OUT8(&io_store_req_ready,0,0);
    VL_IN8(&io_store_req_valid,0,0);
    VL_IN8(&io_store_req_bits_cmd,4,0);
    VL_IN8(&io_store_req_bits_id,5,0);
    VL_IN8(&io_store_main_pipe_hit_resp_ready,0,0);
    VL_OUT8(&io_store_main_pipe_hit_resp_valid,0,0);
    VL_OUT8(&io_store_main_pipe_hit_resp_bits_miss,0,0);
    VL_OUT8(&io_store_main_pipe_hit_resp_bits_replay,0,0);
    VL_OUT8(&io_store_main_pipe_hit_resp_bits_id,5,0);
    VL_IN8(&io_store_refill_hit_resp_ready,0,0);
    VL_OUT8(&io_store_refill_hit_resp_valid,0,0);
    VL_OUT8(&io_store_refill_hit_resp_bits_miss,0,0);
    VL_OUT8(&io_store_refill_hit_resp_bits_replay,0,0);
    VL_OUT8(&io_store_refill_hit_resp_bits_id,5,0);
    VL_IN8(&io_store_replay_resp_ready,0,0);
    VL_OUT8(&io_store_replay_resp_valid,0,0);
    VL_OUT8(&io_store_replay_resp_bits_miss,0,0);
    VL_OUT8(&io_store_replay_resp_bits_replay,0,0);
    VL_OUT8(&io_store_replay_resp_bits_id,5,0);
    VL_OUT8(&io_atomics_req_ready,0,0);
    VL_IN8(&io_atomics_req_valid,0,0);
    VL_IN8(&io_atomics_req_bits_cmd,4,0);
    VL_IN8(&io_atomics_req_bits_tagAlias,1,0);
    VL_IN8(&io_atomics_req_bits_id,5,0);
    VL_IN8(&io_atomics_req_bits_missId,3,0);
    VL_IN8(&io_atomics_req_bits_wordIdx,2,0);
    VL_IN8(&io_atomics_req_bits_probeOp,1,0);
    VL_IN8(&io_atomics_req_bits_needData,0,0);
    VL_IN8(&io_atomics_req_bits_snpTxnId,7,0);
    VL_IN8(&io_atomics_req_bits_replaceWay,3,0);
    VL_IN8(&io_atomics_resp_ready,0,0);
    VL_OUT8(&io_atomics_resp_valid,0,0);
    VL_OUT8(&io_atomics_resp_bits_id,5,0);
    VL_OUT8(&io_atomics_resp_bits_cmd,4,0);
    VL_OUT8(&io_atomics_resp_bits_success,0,0);
    VL_IN8(&io_atomics_replay_ready,0,0);
    VL_OUT8(&io_atomics_replay_valid,0,0);
    VL_OUT8(&io_atomics_replay_bits_miss,0,0);
    VL_OUT8(&io_atomics_replay_bits_replay,0,0);
    VL_OUT8(&io_atomics_replay_bits_id,5,0);
    VL_OUT8(&io_cmoReq_ready,0,0);
    VL_IN8(&io_cmoReq_valid,0,0);
    VL_IN8(&io_cmoReq_bits_id,5,0);
    VL_IN8(&io_cmoReq_bits_opcode,5,0);
    VL_IN8(&io_cmoReq_bits_alias,1,0);
    VL_IN8(&io_cmoResp_ready,0,0);
    VL_OUT8(&io_cmoResp_valid,0,0);
    VL_OUT8(&io_cmoResp_bits_id,5,0);
    VL_OUT8(&io_cmoResp_bits_done,0,0);
    VL_OUT8(&io_cmoResp_bits_error,0,0);
    VL_IN8(&io_wfi_req,0,0);
    VL_OUT8(&io_wfi_safe,0,0);
    VL_IN8(&io_l2_req_ready,0,0);
    VL_OUT8(&io_l2_req_valid,0,0);
    VL_OUT8(&io_l2_req_bits_txnID,7,0);
    VL_OUT8(&io_l2_req_bits_srcID,6,0);
    VL_OUT8(&io_l2_req_bits_tgtID,6,0);
    VL_OUT8(&io_l2_req_bits_opcode,5,0);
    VL_OUT8(&io_l2_req_bits_size,2,0);
    VL_OUT8(&io_l2_req_bits_tagAlias,1,0);
    VL_OUT8(&io_l2_req_bits_ns,0,0);
    VL_OUT8(&io_l2_req_bits_order,1,0);
    VL_OUT8(&io_l2_req_bits_memAttr,3,0);
    VL_OUT8(&io_l2_req_bits_excl,0,0);
    VL_OUT8(&io_l2_req_bits_expCompData,0,0);
    VL_OUT8(&io_l2_req_bits_expCompStash,0,0);
    VL_OUT8(&io_l2_req_bits_wayValid,0,0);
    VL_OUT8(&io_l2_req_bits_way,1,0);
    VL_OUT8(&io_l2_req_bits_traceTag,0,0);
    VL_IN8(&io_l2_evt_ready,0,0);
    VL_OUT8(&io_l2_evt_valid,0,0);
    VL_OUT8(&io_l2_evt_bits_txnID,7,0);
    VL_OUT8(&io_l2_evt_bits_srcID,6,0);
    VL_OUT8(&io_l2_evt_bits_tgtID,6,0);
    VL_OUT8(&io_l2_evt_bits_opcode,0,0);
    VL_OUT8(&io_l2_evt_bits_ns,0,0);
    VL_OUT8(&io_l2_evt_bits_memAttr,0,0);
    VL_OUT8(&io_l2_evt_bits_wayValid,0,0);
    VL_OUT8(&io_l2_evt_bits_way,1,0);
    VL_OUT8(&io_l2_evt_bits_traceTag,0,0);
    VL_IN8(&io_l2_txRsp_ready,0,0);
    VL_OUT8(&io_l2_txRsp_valid,0,0);
    VL_OUT8(&io_l2_txRsp_bits_txnID,7,0);
    VL_OUT8(&io_l2_txRsp_bits_srcID,6,0);
    VL_OUT8(&io_l2_txRsp_bits_tgtID,6,0);
    VL_OUT8(&io_l2_txRsp_bits_opcode,0,0);
    VL_OUT8(&io_l2_txRsp_bits_respErr,1,0);
    VL_OUT8(&io_l2_txRsp_bits_resp,2,0);
    VL_OUT8(&io_l2_txRsp_bits_traceTag,0,0);
    VL_IN8(&io_l2_txDat_ready,0,0);
    VL_OUT8(&io_l2_txDat_valid,0,0);
    VL_OUT8(&io_l2_txDat_bits_txnID,7,0);
    VL_OUT8(&io_l2_txDat_bits_srcID,6,0);
    VL_OUT8(&io_l2_txDat_bits_tgtID,6,0);
    VL_OUT8(&io_l2_txDat_bits_opcode,1,0);
    VL_OUT8(&io_l2_txDat_bits_respErr,1,0);
    VL_OUT8(&io_l2_txDat_bits_resp,2,0);
    VL_OUT8(&io_l2_txDat_bits_dataID,0,0);
    VL_OUT8(&io_l2_txDat_bits_traceTag,0,0);
    VL_OUT8(&io_l2_rxRsp_ready,0,0);
    VL_IN8(&io_l2_rxRsp_valid,0,0);
    VL_IN8(&io_l2_rxRsp_bits_txnID,7,0);
    VL_IN8(&io_l2_rxRsp_bits_srcID,6,0);
    VL_IN8(&io_l2_rxRsp_bits_tgtID,6,0);
    VL_IN8(&io_l2_rxRsp_bits_opcode,2,0);
    VL_IN8(&io_l2_rxRsp_bits_dbID,7,0);
    VL_IN8(&io_l2_rxRsp_bits_respErr,1,0);
    VL_IN8(&io_l2_rxRsp_bits_resp,2,0);
    VL_IN8(&io_l2_rxRsp_bits_cBusy,2,0);
    VL_IN8(&io_l2_rxRsp_bits_traceTag,0,0);
    VL_OUT8(&io_l2_rxDat_ready,0,0);
    VL_IN8(&io_l2_rxDat_valid,0,0);
    VL_IN8(&io_l2_rxDat_bits_txnID,7,0);
    VL_IN8(&io_l2_rxDat_bits_srcID,6,0);
    VL_IN8(&io_l2_rxDat_bits_tgtID,6,0);
    VL_IN8(&io_l2_rxDat_bits_opcode,0,0);
    VL_IN8(&io_l2_rxDat_bits_dbID,7,0);
    VL_IN8(&io_l2_rxDat_bits_respErr,1,0);
    VL_IN8(&io_l2_rxDat_bits_resp,2,0);
    VL_IN8(&io_l2_rxDat_bits_dataSource,4,0);
    VL_IN8(&io_l2_rxDat_bits_cBusy,2,0);
    VL_IN8(&io_l2_rxDat_bits_dataID,0,0);
    VL_IN8(&io_l2_rxDat_bits_traceTag,0,0);
    VL_OUT8(&io_l2_rxSnp_ready,0,0);
    VL_IN8(&io_l2_rxSnp_valid,0,0);
    VL_IN8(&io_l2_rxSnp_bits_txnID,7,0);
    VL_IN8(&io_l2_rxSnp_bits_srcID,6,0);
    VL_IN8(&io_l2_rxSnp_bits_tgtID,6,0);
    VL_IN8(&io_l2_rxSnp_bits_opcode,1,0);
    VL_IN8(&io_l2_rxSnp_bits_tagAlias,1,0);
    VL_IN8(&io_l2_rxSnp_bits_ns,0,0);
    VL_IN8(&io_l2_rxSnp_bits_traceTag,0,0);
    VL_OUT8(&io_forwardChi_valid,0,0);
    VL_OUT8(&io_forwardChi_bits_id,3,0);
    VL_OUT8(&io_forwardChi_bits_half,0,0);
    VL_IN8(&io_forwardMshr_id,3,0);
    VL_IN8(&io_forwardMshr_half,0,0);
    VL_OUT8(&io_forwardMshr_data_valid,0,0);
    VL_IN8(&io_refillWakeup_ready,0,0);
    VL_OUT8(&io_refillWakeup_valid,0,0);
    VL_OUT8(&io_refillWakeup_bits_id,3,0);
    VL_OUT8(&io_refillWakeup_bits_alias,1,0);
    VL_IN8(&io_loadReplay_ready,0,0);
    VL_OUT8(&io_loadReplay_valid,0,0);
    VL_OUT8(&io_loadReplay_bits_id,3,0);
    VL_OUT8(&io_loadReplay_bits_alias,1,0);
    VL_IN16(&io_load_0_req_bits_mask,15,0);
    VL_IN16(&io_load_1_req_bits_mask,15,0);
    VL_IN16(&io_atomics_req_bits_amoMask,15,0);
    VL_INW(&io_load_0_req_bits_data,127,0,4);
    VL_OUTW(&io_load_0_resp_bits_data,127,0,4);
    VL_INW(&io_load_1_req_bits_data,127,0,4);
    VL_OUTW(&io_load_1_resp_bits_data,127,0,4);
    VL_INW(&io_store_req_bits_data,511,0,16);
    VL_INW(&io_atomics_req_bits_amoData,127,0,4);
    VL_INW(&io_atomics_req_bits_amoCmp,127,0,4);
    VL_OUTW(&io_atomics_resp_bits_data,127,0,4);
    VL_OUTW(&io_l2_txDat_bits_data,255,0,8);
    VL_OUT(&io_l2_txDat_bits_byteEnable,31,0);
    VL_INW(&io_l2_rxDat_bits_data,255,0,8);
    VL_OUTW(&io_forwardChi_bits_data,255,0,8);
    VL_OUTW(&io_forwardMshr_data_bits,255,0,8);
    VL_IN64(&io_load_0_req_bits_vaddr,47,0);
    VL_IN64(&io_load_0_req_bits_vaddr_dup,47,0);
    VL_IN64(&io_load_0_s0_pc,47,0);
    VL_IN64(&io_load_0_s1_pc,47,0);
    VL_IN64(&io_load_0_s2_pc,47,0);
    VL_IN64(&io_load_0_s1_paddr_dup_lsu,47,0);
    VL_IN64(&io_load_0_s1_paddr_dup_dcache,47,0);
    VL_IN64(&io_load_1_req_bits_vaddr,47,0);
    VL_IN64(&io_load_1_req_bits_vaddr_dup,47,0);
    VL_IN64(&io_load_1_s0_pc,47,0);
    VL_IN64(&io_load_1_s1_pc,47,0);
    VL_IN64(&io_load_1_s2_pc,47,0);
    VL_IN64(&io_load_1_s1_paddr_dup_lsu,47,0);
    VL_IN64(&io_load_1_s1_paddr_dup_dcache,47,0);
    VL_IN64(&io_store_req_bits_vaddr,47,0);
    VL_IN64(&io_store_req_bits_addr,47,0);
    VL_IN64(&io_store_req_bits_mask,63,0);
    VL_IN64(&io_atomics_req_bits_vaddr,47,0);
    VL_IN64(&io_atomics_req_bits_addr,47,0);
    VL_IN64(&io_atomics_req_bits_pc,47,0);
    VL_IN64(&io_cmoReq_bits_addr,47,0);
    VL_OUT64(&io_l2_req_bits_addr,47,0);
    VL_OUT64(&io_l2_evt_bits_addr,47,0);
    VL_IN64(&io_l2_rxSnp_bits_addr,44,0);
    VL_OUT64(&io_refillWakeup_bits_addr,47,0);
    VL_OUT64(&io_loadReplay_bits_addr,47,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VDCache___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VDCache(VerilatedContext* contextp, const char* name = "TOP");
    explicit VDCache(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VDCache();
  private:
    VL_UNCOPYABLE(VDCache);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
};

#endif  // guard
