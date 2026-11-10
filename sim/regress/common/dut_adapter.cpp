#include "dut_adapter.h"

#include "VDCache.h"
#include "verilated.h"

#include <cstddef>
#include <cstdint>

namespace yqh {
namespace sim {
namespace dut {
namespace {

template <std::size_t Bytes>
void write_wide(WData* destination,
                const std::array<Byte, Bytes>& source) {
    constexpr std::size_t wordCount = (Bytes + sizeof(WData) - 1) / sizeof(WData);
    for (std::size_t word = 0; word < wordCount; ++word) {
        destination[word] = 0;
    }

    for (std::size_t byte = 0; byte < Bytes; ++byte) {
        const std::size_t word = byte / sizeof(WData);
        const std::size_t shift = (byte % sizeof(WData)) * 8;
        destination[word] |= static_cast<WData>(source[byte]) << shift;
    }
}

template <std::size_t Bytes>
std::array<Byte, Bytes> read_wide(const WData* source) {
    std::array<Byte, Bytes> destination{};
    for (std::size_t byte = 0; byte < Bytes; ++byte) {
        const std::size_t word = byte / sizeof(WData);
        const std::size_t shift = (byte % sizeof(WData)) * 8;
        destination[byte] = static_cast<Byte>(source[word] >> shift);
    }

    return destination;
}

template <std::size_t Bits>
std::uint64_t pack_mask(const std::bitset<Bits>& mask) {
    return mask.to_ullong();
}

template <std::size_t Bits>
std::bitset<Bits> unpack_mask(std::uint64_t value) {
    std::bitset<Bits> mask;
    for (std::size_t bit = 0; bit < Bits; ++bit) {
        if ((value >> bit) & 1ULL) {
            mask.set(bit);
        }
    }
    return mask;
}

void drive_load0(VDCache& dut, const LoadInputs& in) {
    dut.io_load_0_req_valid = in.reqValid;
    dut.io_load_0_req_bits_cmd = in.reqCmd;
    dut.io_load_0_req_bits_vaddr = in.reqVaddr;
    dut.io_load_0_req_bits_vaddr_dup = in.reqVaddrDup;
    write_wide(dut.io_load_0_req_bits_data, in.reqData);
    dut.io_load_0_req_bits_mask = static_cast<std::uint16_t>(pack_mask(in.reqMask));
    dut.io_load_0_req_bits_id = in.reqId;
    dut.io_load_0_req_bits_instrtype = in.reqInstrType;
    dut.io_load_0_req_bits_isFirstIssue = in.reqIsFirstIssue;
    dut.io_load_0_req_bits_replayCarry_real_way_en = in.reqReplayCarryRealWayEn;
    dut.io_load_0_req_bits_replayCarry_valid = in.reqReplayCarryValid;
    dut.io_load_0_req_bits_lqIdx_flag = in.reqLqIdxFlag;
    dut.io_load_0_req_bits_lqIdx_value = in.reqLqIdxValue;
    dut.io_load_0_resp_ready = in.respReady;
    dut.io_load_0_s1_kill_data_read = in.s1KillDataRead;
    dut.io_load_0_s1_kill = in.s1Kill;
    dut.io_load_0_s2_kill = in.s2Kill;
    dut.io_load_0_s0_pc = in.s0Pc;
    dut.io_load_0_s1_pc = in.s1Pc;
    dut.io_load_0_s2_pc = in.s2Pc;
    dut.io_load_0_replacementUpdated = in.replacementUpdated;
    dut.io_load_0_is128Req = in.is128Req;
    dut.io_load_0_s1_paddr_dup_lsu = in.s1PaddrDupLsu;
    dut.io_load_0_s1_paddr_dup_dcache = in.s1PaddrDupDcache;
}

void drive_load1(VDCache& dut, const LoadInputs& in) {
    dut.io_load_1_req_valid = in.reqValid;
    dut.io_load_1_req_bits_cmd = in.reqCmd;
    dut.io_load_1_req_bits_vaddr = in.reqVaddr;
    dut.io_load_1_req_bits_vaddr_dup = in.reqVaddrDup;
    write_wide(dut.io_load_1_req_bits_data, in.reqData);
    dut.io_load_1_req_bits_mask = static_cast<std::uint16_t>(pack_mask(in.reqMask));
    dut.io_load_1_req_bits_id = in.reqId;
    dut.io_load_1_req_bits_instrtype = in.reqInstrType;
    dut.io_load_1_req_bits_isFirstIssue = in.reqIsFirstIssue;
    dut.io_load_1_req_bits_replayCarry_real_way_en = in.reqReplayCarryRealWayEn;
    dut.io_load_1_req_bits_replayCarry_valid = in.reqReplayCarryValid;
    dut.io_load_1_req_bits_lqIdx_flag = in.reqLqIdxFlag;
    dut.io_load_1_req_bits_lqIdx_value = in.reqLqIdxValue;
    dut.io_load_1_resp_ready = in.respReady;
    dut.io_load_1_s1_kill_data_read = in.s1KillDataRead;
    dut.io_load_1_s1_kill = in.s1Kill;
    dut.io_load_1_s2_kill = in.s2Kill;
    dut.io_load_1_s0_pc = in.s0Pc;
    dut.io_load_1_s1_pc = in.s1Pc;
    dut.io_load_1_s2_pc = in.s2Pc;
    dut.io_load_1_replacementUpdated = in.replacementUpdated;
    dut.io_load_1_is128Req = in.is128Req;
    dut.io_load_1_s1_paddr_dup_lsu = in.s1PaddrDupLsu;
    dut.io_load_1_s1_paddr_dup_dcache = in.s1PaddrDupDcache;
}

void drive_store(VDCache& dut, const StoreInputs& in) {
    dut.io_store_req_valid = in.reqValid;
    dut.io_store_req_bits_cmd = in.reqCmd;
    dut.io_store_req_bits_vaddr = in.reqVaddr;
    dut.io_store_req_bits_addr = in.reqAddr;
    write_wide(dut.io_store_req_bits_data, in.reqData);
    dut.io_store_req_bits_mask = pack_mask(in.reqMask);
    dut.io_store_req_bits_id = in.reqId;
    dut.io_store_main_pipe_hit_resp_ready = in.mainPipeHitRespReady;
    dut.io_store_refill_hit_resp_ready = in.refillHitRespReady;
    dut.io_store_replay_resp_ready = in.replayRespReady;
}

void drive_atomics(VDCache& dut, const AtomicInputs& in) {
    dut.io_atomics_req_valid = in.reqValid;
    dut.io_atomics_req_bits_cmd = in.reqCmd;
    dut.io_atomics_req_bits_vaddr = in.reqVaddr;
    dut.io_atomics_req_bits_addr = in.reqAddr;
    dut.io_atomics_req_bits_tagAlias = in.reqTagAlias;
    dut.io_atomics_req_bits_id = in.reqId;
    dut.io_atomics_req_bits_missId = in.reqMissId;
    dut.io_atomics_req_bits_pc = in.reqPc;
    dut.io_atomics_req_bits_wordIdx = in.reqWordIdx;
    write_wide(dut.io_atomics_req_bits_amoData, in.reqAmoData);
    dut.io_atomics_req_bits_amoMask = static_cast<std::uint16_t>(pack_mask(in.reqAmoMask));
    write_wide(dut.io_atomics_req_bits_amoCmp, in.reqAmoCmp);
    dut.io_atomics_req_bits_probeOp = in.reqProbeOp;
    dut.io_atomics_req_bits_needData = in.reqNeedData;
    dut.io_atomics_req_bits_snpTxnId = in.reqSnpTxnId;
    dut.io_atomics_req_bits_replaceWay = in.reqReplaceWay;
    dut.io_atomics_resp_ready = in.respReady;
    dut.io_atomics_replay_ready = in.replayReady;
}

void drive_cmo(VDCache& dut, const CmoInputs& in) {
    dut.io_cmoReq_valid = in.reqValid;
    dut.io_cmoReq_bits_id = in.reqId;
    dut.io_cmoReq_bits_opcode = in.reqOpcode;
    dut.io_cmoReq_bits_addr = in.reqAddr;
    dut.io_cmoReq_bits_alias = in.reqAlias;
    dut.io_cmoResp_ready = in.respReady;
}

void drive_l2(VDCache& dut, const L2Inputs& in) {
    dut.io_l2_req_ready = in.reqReady;
    dut.io_l2_evt_ready = in.evtReady;
    dut.io_l2_txRsp_ready = in.txRspReady;
    dut.io_l2_txDat_ready = in.txDatReady;

    dut.io_l2_rxRsp_valid = in.rxRspValid;
    dut.io_l2_rxRsp_bits_txnID = in.rxRsp.txnId;
    dut.io_l2_rxRsp_bits_srcID = in.rxRsp.srcId;
    dut.io_l2_rxRsp_bits_tgtID = in.rxRsp.tgtId;
    dut.io_l2_rxRsp_bits_opcode = static_cast<std::uint8_t>(in.rxRsp.opcode);
    dut.io_l2_rxRsp_bits_dbID = in.rxRsp.dbId;
    dut.io_l2_rxRsp_bits_respErr = static_cast<std::uint8_t>(in.rxRsp.respErr);
    dut.io_l2_rxRsp_bits_resp = in.rxRsp.resp;
    dut.io_l2_rxRsp_bits_cBusy = in.rxRsp.cBusy;
    dut.io_l2_rxRsp_bits_traceTag = in.rxRsp.traceTag;

    dut.io_l2_rxDat_valid = in.rxDatValid;
    dut.io_l2_rxDat_bits_txnID = in.rxDat.txnId;
    dut.io_l2_rxDat_bits_srcID = in.rxDat.srcId;
    dut.io_l2_rxDat_bits_tgtID = in.rxDat.tgtId;
    dut.io_l2_rxDat_bits_opcode = static_cast<std::uint8_t>(in.rxDat.opcode);
    dut.io_l2_rxDat_bits_dbID = in.rxDat.dbId;
    dut.io_l2_rxDat_bits_respErr = static_cast<std::uint8_t>(in.rxDat.respErr);
    dut.io_l2_rxDat_bits_resp = in.rxDat.resp;
    dut.io_l2_rxDat_bits_dataSource = in.rxDat.dataSource;
    dut.io_l2_rxDat_bits_cBusy = in.rxDat.cBusy;
    dut.io_l2_rxDat_bits_dataID = in.rxDat.dataId;
    write_wide(dut.io_l2_rxDat_bits_data, in.rxDat.data);
    dut.io_l2_rxDat_bits_traceTag = in.rxDat.traceTag;

    dut.io_l2_rxSnp_valid = in.rxSnpValid;
    dut.io_l2_rxSnp_bits_txnID = in.rxSnp.txnId;
    dut.io_l2_rxSnp_bits_srcID = in.rxSnp.srcId;
    dut.io_l2_rxSnp_bits_tgtID = in.rxSnp.tgtId;
    dut.io_l2_rxSnp_bits_opcode = static_cast<std::uint8_t>(in.rxSnp.opcode);
    dut.io_l2_rxSnp_bits_addr = in.rxSnp.addr;
    dut.io_l2_rxSnp_bits_tagAlias = in.rxSnp.tagAlias;
    dut.io_l2_rxSnp_bits_ns = in.rxSnp.ns;
    dut.io_l2_rxSnp_bits_traceTag = in.rxSnp.traceTag;
}

LoadOutputs sample_load0(const VDCache& dut) {
    LoadOutputs out{};
    out.reqReady = dut.io_load_0_req_ready;
    out.respValid = dut.io_load_0_resp_valid;
    out.respData = read_wide<config::kLoadDataBytes>(dut.io_load_0_resp_bits_data);
    out.respId = dut.io_load_0_resp_bits_id;
    out.respMiss = dut.io_load_0_resp_bits_miss;
    out.respReplay = dut.io_load_0_resp_bits_replay;
    out.respReplayCarryRealWayEn = dut.io_load_0_resp_bits_replayCarry_real_way_en;
    out.respReplayCarryValid = dut.io_load_0_resp_bits_replayCarry_valid;
    out.respMshrId = dut.io_load_0_resp_bits_mshr_id;
    out.respHandled = dut.io_load_0_resp_bits_handled;
    out.respRealMiss = dut.io_load_0_resp_bits_real_miss;
    out.respReplacementUpdated = dut.io_load_0_resp_bits_replacementUpdated;
    out.s1DisableFastWakeup = dut.io_load_0_s1_disable_fast_wakeup;
    out.s2Hit = dut.io_load_0_s2_hit;
    out.s2FirstHit = dut.io_load_0_s2_first_hit;
    out.s2BankConflict = dut.io_load_0_s2_bank_conflict;
    out.s2WpuPredFail = dut.io_load_0_s2_wpu_pred_fail;
    out.s2MqNack = dut.io_load_0_s2_mq_nack;
    return out;
}

LoadOutputs sample_load1(const VDCache& dut) {
    LoadOutputs out{};
    out.reqReady = dut.io_load_1_req_ready;
    out.respValid = dut.io_load_1_resp_valid;
    out.respData = read_wide<config::kLoadDataBytes>(dut.io_load_1_resp_bits_data);
    out.respId = dut.io_load_1_resp_bits_id;
    out.respMiss = dut.io_load_1_resp_bits_miss;
    out.respReplay = dut.io_load_1_resp_bits_replay;
    out.respReplayCarryRealWayEn = dut.io_load_1_resp_bits_replayCarry_real_way_en;
    out.respReplayCarryValid = dut.io_load_1_resp_bits_replayCarry_valid;
    out.respMshrId = dut.io_load_1_resp_bits_mshr_id;
    out.respHandled = dut.io_load_1_resp_bits_handled;
    out.respRealMiss = dut.io_load_1_resp_bits_real_miss;
    out.respReplacementUpdated = dut.io_load_1_resp_bits_replacementUpdated;
    out.s1DisableFastWakeup = dut.io_load_1_s1_disable_fast_wakeup;
    out.s2Hit = dut.io_load_1_s2_hit;
    out.s2FirstHit = dut.io_load_1_s2_first_hit;
    out.s2BankConflict = dut.io_load_1_s2_bank_conflict;
    out.s2WpuPredFail = dut.io_load_1_s2_wpu_pred_fail;
    out.s2MqNack = dut.io_load_1_s2_mq_nack;
    return out;
}

StoreOutputs sample_store(const VDCache& dut) {
    StoreOutputs out{};
    out.reqReady = dut.io_store_req_ready;
    out.mainPipeHitRespValid = dut.io_store_main_pipe_hit_resp_valid;
    out.mainPipeHitRespMiss = dut.io_store_main_pipe_hit_resp_bits_miss;
    out.mainPipeHitRespReplay = dut.io_store_main_pipe_hit_resp_bits_replay;
    out.mainPipeHitRespId = dut.io_store_main_pipe_hit_resp_bits_id;
    out.refillHitRespValid = dut.io_store_refill_hit_resp_valid;
    out.refillHitRespMiss = dut.io_store_refill_hit_resp_bits_miss;
    out.refillHitRespReplay = dut.io_store_refill_hit_resp_bits_replay;
    out.refillHitRespId = dut.io_store_refill_hit_resp_bits_id;
    out.replayRespValid = dut.io_store_replay_resp_valid;
    out.replayRespMiss = dut.io_store_replay_resp_bits_miss;
    out.replayRespReplay = dut.io_store_replay_resp_bits_replay;
    out.replayRespId = dut.io_store_replay_resp_bits_id;
    return out;
}

AtomicOutputs sample_atomics(const VDCache& dut) {
    AtomicOutputs out{};
    out.reqReady = dut.io_atomics_req_ready;
    out.respValid = dut.io_atomics_resp_valid;
    out.respId = dut.io_atomics_resp_bits_id;
    out.respCmd = dut.io_atomics_resp_bits_cmd;
    out.respData = read_wide<config::kAtomicDataBytes>(dut.io_atomics_resp_bits_data);
    out.respSuccess = dut.io_atomics_resp_bits_success;
    out.replayValid = dut.io_atomics_replay_valid;
    out.replayMiss = dut.io_atomics_replay_bits_miss;
    out.replayReplay = dut.io_atomics_replay_bits_replay;
    out.replayId = dut.io_atomics_replay_bits_id;
    return out;
}

CmoOutputs sample_cmo(const VDCache& dut) {
    CmoOutputs out{};
    out.reqReady = dut.io_cmoReq_ready;
    out.respValid = dut.io_cmoResp_valid;
    out.respId = dut.io_cmoResp_bits_id;
    out.respDone = dut.io_cmoResp_bits_done;
    out.respError = dut.io_cmoResp_bits_error;
    return out;
}

L2Outputs sample_l2(const VDCache& dut) {
    L2Outputs out{};

    out.reqValid = dut.io_l2_req_valid;
    out.req.txnId = dut.io_l2_req_bits_txnID;
    out.req.srcId = dut.io_l2_req_bits_srcID;
    out.req.tgtId = dut.io_l2_req_bits_tgtID;
    out.req.opcode = static_cast<chi::ReqOpcode>(dut.io_l2_req_bits_opcode);
    out.req.size = dut.io_l2_req_bits_size;
    out.req.addr = dut.io_l2_req_bits_addr;
    out.req.tagAlias = dut.io_l2_req_bits_tagAlias;
    out.req.ns = dut.io_l2_req_bits_ns;
    out.req.order = dut.io_l2_req_bits_order;
    out.req.memAttr = dut.io_l2_req_bits_memAttr;
    out.req.excl = dut.io_l2_req_bits_excl;
    out.req.expCompData = dut.io_l2_req_bits_expCompData;
    out.req.expCompStash = dut.io_l2_req_bits_expCompStash;
    out.req.wayValid = dut.io_l2_req_bits_wayValid;
    out.req.way = dut.io_l2_req_bits_way;
    out.req.traceTag = dut.io_l2_req_bits_traceTag;

    out.evtValid = dut.io_l2_evt_valid;
    out.evt.txnId = dut.io_l2_evt_bits_txnID;
    out.evt.srcId = dut.io_l2_evt_bits_srcID;
    out.evt.tgtId = dut.io_l2_evt_bits_tgtID;
    out.evt.opcode = static_cast<chi::EvtOpcode>(dut.io_l2_evt_bits_opcode);
    out.evt.addr = dut.io_l2_evt_bits_addr;
    out.evt.ns = dut.io_l2_evt_bits_ns;
    out.evt.memAttr = dut.io_l2_evt_bits_memAttr;
    out.evt.wayValid = dut.io_l2_evt_bits_wayValid;
    out.evt.way = dut.io_l2_evt_bits_way;
    out.evt.traceTag = dut.io_l2_evt_bits_traceTag;

    out.txRspValid = dut.io_l2_txRsp_valid;
    out.txRsp.txnId = dut.io_l2_txRsp_bits_txnID;
    out.txRsp.srcId = dut.io_l2_txRsp_bits_srcID;
    out.txRsp.tgtId = dut.io_l2_txRsp_bits_tgtID;
    out.txRsp.opcode = static_cast<chi::UpRspOpcode>(dut.io_l2_txRsp_bits_opcode);
    out.txRsp.respErr = static_cast<chi::RespErr>(dut.io_l2_txRsp_bits_respErr);
    out.txRsp.resp = dut.io_l2_txRsp_bits_resp;
    out.txRsp.traceTag = dut.io_l2_txRsp_bits_traceTag;

    out.txDatValid = dut.io_l2_txDat_valid;
    out.txDat.txnId = dut.io_l2_txDat_bits_txnID;
    out.txDat.srcId = dut.io_l2_txDat_bits_srcID;
    out.txDat.tgtId = dut.io_l2_txDat_bits_tgtID;
    out.txDat.opcode = static_cast<chi::UpDatOpcode>(dut.io_l2_txDat_bits_opcode);
    out.txDat.respErr = static_cast<chi::RespErr>(dut.io_l2_txDat_bits_respErr);
    out.txDat.resp = dut.io_l2_txDat_bits_resp;
    out.txDat.dataId = dut.io_l2_txDat_bits_dataID;
    out.txDat.data = read_wide<config::kChiDataBytes>(dut.io_l2_txDat_bits_data);
    out.txDat.byteEnable = unpack_mask<config::kChiByteEnableBits>(dut.io_l2_txDat_bits_byteEnable);
    out.txDat.traceTag = dut.io_l2_txDat_bits_traceTag;

    out.rxRspReady = dut.io_l2_rxRsp_ready;
    out.rxDatReady = dut.io_l2_rxDat_ready;
    out.rxSnpReady = dut.io_l2_rxSnp_ready;
    return out;
}

ForwardChiOutputs sample_forward_chi(const VDCache& dut) {
    ForwardChiOutputs out{};
    out.valid = dut.io_forwardChi_valid;
    out.id = dut.io_forwardChi_bits_id;
    out.half = dut.io_forwardChi_bits_half;
    out.data = read_wide<config::kChiDataBytes>(dut.io_forwardChi_bits_data);
    return out;
}

ForwardMshrOutputs sample_forward_mshr(const VDCache& dut) {
    ForwardMshrOutputs out{};
    out.dataValid = dut.io_forwardMshr_data_valid;
    out.data = read_wide<config::kChiDataBytes>(dut.io_forwardMshr_data_bits);
    return out;
}

MissNotifyOutputs sample_notify(bool valid,
                                MshrId id,
                                Address addr,
                                chi::TagAlias alias) {
    MissNotifyOutputs out{};
    out.valid = valid;
    out.id = id;
    out.addr = addr;
    out.alias = alias;
    return out;
}

}  // namespace

DutAdapter::DutAdapter(VDCache& dut) : dut_(&dut) {}

void DutAdapter::drive_inputs(const DutInputs& inputs) {
    dut_->clock = inputs.clock;
    dut_->reset = inputs.reset;

    drive_load0(*dut_, inputs.load0);
    drive_load1(*dut_, inputs.load1);
    drive_store(*dut_, inputs.store);
    drive_atomics(*dut_, inputs.atomics);
    drive_cmo(*dut_, inputs.cmo);

    dut_->io_wfi_req = inputs.wfiReq;
    drive_l2(*dut_, inputs.l2);

    dut_->io_forwardMshr_id = inputs.forwardMshr.id;
    dut_->io_forwardMshr_half = inputs.forwardMshr.half;
    dut_->io_refillWakeup_ready = inputs.refillWakeupReady;
    dut_->io_loadReplay_ready = inputs.loadReplayReady;
}

DutOutputs DutAdapter::sample_outputs() const {
    DutOutputs out{};
    out.load0 = sample_load0(*dut_);
    out.load1 = sample_load1(*dut_);
    out.store = sample_store(*dut_);
    out.atomics = sample_atomics(*dut_);
    out.cmo = sample_cmo(*dut_);
    out.wfiSafe = dut_->io_wfi_safe;
    out.l2 = sample_l2(*dut_);
    out.forwardChi = sample_forward_chi(*dut_);
    out.forwardMshr = sample_forward_mshr(*dut_);
    out.refillWakeup = sample_notify(
        dut_->io_refillWakeup_valid,
        dut_->io_refillWakeup_bits_id,
        dut_->io_refillWakeup_bits_addr,
        dut_->io_refillWakeup_bits_alias);
    out.loadReplay = sample_notify(
        dut_->io_loadReplay_valid,
        dut_->io_loadReplay_bits_id,
        dut_->io_loadReplay_bits_addr,
        dut_->io_loadReplay_bits_alias);
    return out;
}

void DutAdapter::eval() {
    dut_->eval();
}

void DutAdapter::set_clock(bool high) {
    dut_->clock = high;
}

void DutAdapter::set_reset(bool high) {
    dut_->reset = high;
}

void DutAdapter::clear_inputs() {
    drive_inputs(DutInputs{});
}

}  // namespace dut
}  // namespace sim
}  // namespace yqh
