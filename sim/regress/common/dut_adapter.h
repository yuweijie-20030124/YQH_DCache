#ifndef YQH_SIM_DUT_ADAPTER_H
#define YQH_SIM_DUT_ADAPTER_H

#include <cstdint>

#include "chi_types.h"
#include "sim_types.h"

class VDCache;

namespace yqh {
namespace sim {
namespace dut {

// -----------------------------------------------------------------------------
// Port images
// -----------------------------------------------------------------------------
// These structures are ordinary C++ images of the DCache top-level ports.
// Models fill DutInputs; the adapter performs the Verilator-specific conversion.
// Models consume DutOutputs; they never access VDCache directly.

struct LoadInputs {
    bool reqValid{};
    std::uint8_t reqCmd{};
    Address reqVaddr{};
    Address reqVaddrDup{};
    CpuData reqData{};
    CpuByteMask reqMask{};
    CpuReqId reqId{};
    std::uint8_t reqInstrType{};
    bool reqIsFirstIssue{};
    std::uint8_t reqReplayCarryRealWayEn{};
    bool reqReplayCarryValid{};
    bool reqLqIdxFlag{};
    std::uint8_t reqLqIdxValue{};
    bool respReady{};
    bool s1KillDataRead{};
    bool s1Kill{};
    bool s2Kill{};
    Address s0Pc{};
    Address s1Pc{};
    Address s2Pc{};
    bool replacementUpdated{};
    bool is128Req{};
    Address s1PaddrDupLsu{};
    Address s1PaddrDupDcache{};
};

struct LoadOutputs {
    bool reqReady{};
    bool respValid{};
    CpuData respData{};
    CpuReqId respId{};
    bool respMiss{};
    bool respReplay{};
    std::uint8_t respReplayCarryRealWayEn{};
    bool respReplayCarryValid{};
    MshrId respMshrId{};
    bool respHandled{};
    bool respRealMiss{};
    bool respReplacementUpdated{};
    bool s1DisableFastWakeup{};
    bool s2Hit{};
    bool s2FirstHit{};
    bool s2BankConflict{};
    bool s2WpuPredFail{};
    bool s2MqNack{};
};

struct StoreInputs {
    bool reqValid{};
    std::uint8_t reqCmd{};
    Address reqVaddr{};
    Address reqAddr{};
    CacheLine reqData{};
    LineByteMask reqMask{};
    CpuReqId reqId{};
    bool mainPipeHitRespReady{};
    bool refillHitRespReady{};
    bool replayRespReady{};
};

struct StoreOutputs {
    bool reqReady{};
    bool mainPipeHitRespValid{};
    bool mainPipeHitRespMiss{};
    bool mainPipeHitRespReplay{};
    CpuReqId mainPipeHitRespId{};
    bool refillHitRespValid{};
    bool refillHitRespMiss{};
    bool refillHitRespReplay{};
    CpuReqId refillHitRespId{};
    bool replayRespValid{};
    bool replayRespMiss{};
    bool replayRespReplay{};
    CpuReqId replayRespId{};
};

struct AtomicInputs {
    bool reqValid{};
    std::uint8_t reqCmd{};
    Address reqVaddr{};
    Address reqAddr{};
    chi::TagAlias reqTagAlias{};
    CpuReqId reqId{};
    MshrId reqMissId{};
    Address reqPc{};
    std::uint8_t reqWordIdx{};
    AtomicData reqAmoData{};
    AtomicByteMask reqAmoMask{};
    AtomicData reqAmoCmp{};
    std::uint8_t reqProbeOp{};
    bool reqNeedData{};
    TxnId reqSnpTxnId{};
    std::uint8_t reqReplaceWay{};
    bool respReady{};
    bool replayReady{};
};

struct AtomicOutputs {
    bool reqReady{};
    bool respValid{};
    CpuReqId respId{};
    std::uint8_t respCmd{};
    AtomicData respData{};
    bool respSuccess{};
    bool replayValid{};
    bool replayMiss{};
    bool replayReplay{};
    CpuReqId replayId{};
};

struct CmoInputs {
    bool reqValid{};
    CpuReqId reqId{};
    std::uint8_t reqOpcode{};
    Address reqAddr{};
    chi::TagAlias reqAlias{};
    bool respReady{};
};

struct CmoOutputs {
    bool reqReady{};
    bool respValid{};
    CpuReqId respId{};
    bool respDone{};
    bool respError{};
};

struct L2Inputs {
    bool reqReady{};
    bool evtReady{};
    bool txRspReady{};
    bool txDatReady{};

    bool rxRspValid{};
    chi::RxRsp rxRsp{};

    bool rxDatValid{};
    chi::RxDat rxDat{};

    bool rxSnpValid{};
    chi::RxSnp rxSnp{};
};

struct L2Outputs {
    bool reqValid{};
    chi::TxReq req{};

    bool evtValid{};
    chi::TxEvt evt{};

    bool txRspValid{};
    chi::TxRsp txRsp{};

    bool txDatValid{};
    chi::TxDat txDat{};

    bool rxRspReady{};
    bool rxDatReady{};
    bool rxSnpReady{};
};

struct ForwardMshrInputs {
    MshrId id{};
    bool half{};
};

struct ForwardChiOutputs {
    bool valid{};
    MshrId id{};
    bool half{};
    ChiDataBeat data{};
};

struct ForwardMshrOutputs {
    bool dataValid{};
    ChiDataBeat data{};
};

struct MissNotifyOutputs {
    bool valid{};
    MshrId id{};
    Address addr{};
    chi::TagAlias alias{};
};


// ************************************** Dut ******************************************** //
struct DutInputs {
    bool clock{};
    bool reset{};

    LoadInputs load0{};
    LoadInputs load1{};
    StoreInputs store{};
    AtomicInputs atomics{};
    CmoInputs cmo{};
    bool wfiReq{};
    L2Inputs l2{};
    ForwardMshrInputs forwardMshr{};
    bool refillWakeupReady{};
    bool loadReplayReady{};
};

struct DutOutputs {
    LoadOutputs load0{};
    LoadOutputs load1{};
    StoreOutputs store{};
    AtomicOutputs atomics{};
    CmoOutputs cmo{};
    bool wfiSafe{};
    L2Outputs l2{};
    ForwardChiOutputs forwardChi{};
    ForwardMshrOutputs forwardMshr{};
    MissNotifyOutputs refillWakeup{};
    MissNotifyOutputs loadReplay{};
};

// -----------------------------------------------------------------------------
// Verilator adapter
// -----------------------------------------------------------------------------
// This is the only interface between the behavioral models and VDCache.  It
// owns no transaction state and makes no pass/fail decisions.
class DutAdapter {
public:
    explicit DutAdapter(VDCache& dut);

    // Drive every DUT input from a complete image.  A value-initialized
    // DutInputs object therefore provides a safe all-zero baseline.
    void drive_inputs(const DutInputs& inputs);

    // Sample every DUT output into ordinary C++ types.
    DutOutputs sample_outputs() const;

    // Convenience operations for the simulator's clock loop.
    void eval();
    void set_clock(bool high);
    void set_reset(bool high);

    // Clear all DUT inputs without requiring the caller to construct an image.
    void clear_inputs();

private:
    VDCache* dut_;
};

}  // namespace dut
}  // namespace sim
}  // namespace yqh

#endif  // YQH_SIM_DUT_ADAPTER_H
