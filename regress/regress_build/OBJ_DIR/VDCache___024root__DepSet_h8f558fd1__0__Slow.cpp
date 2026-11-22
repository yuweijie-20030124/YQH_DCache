// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDCache.h for the primary calling header

#include "verilated.h"

#include "VDCache__Syms.h"
#include "VDCache___024root.h"

VL_ATTR_COLD void VDCache___024root___eval_static(VDCache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDCache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDCache___024root___eval_static\n"); );
}

VL_ATTR_COLD void VDCache___024root___eval_initial__TOP(VDCache___024root* vlSelf);

VL_ATTR_COLD void VDCache___024root___eval_initial(VDCache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDCache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDCache___024root___eval_initial\n"); );
    // Body
    VDCache___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
}

VL_ATTR_COLD void VDCache___024root___eval_initial__TOP(VDCache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDCache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDCache___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->io_load_0_s2_wpu_pred_fail = 0U;
    vlSelf->io_load_1_s2_wpu_pred_fail = 0U;
    vlSelf->io_store_main_pipe_hit_resp_bits_miss = 0U;
    vlSelf->io_store_main_pipe_hit_resp_bits_replay = 0U;
    vlSelf->io_store_refill_hit_resp_bits_miss = 0U;
    vlSelf->io_store_refill_hit_resp_bits_replay = 0U;
    vlSelf->io_store_replay_resp_bits_replay = 1U;
    vlSelf->io_atomics_replay_bits_miss = 0U;
    vlSelf->io_atomics_replay_bits_replay = 1U;
    vlSelf->io_cmoResp_bits_done = 1U;
    vlSelf->io_l2_req_bits_srcID = 2U;
    vlSelf->io_l2_req_bits_tgtID = 0U;
    vlSelf->io_l2_req_bits_size = 6U;
    vlSelf->io_l2_req_bits_ns = 0U;
    vlSelf->io_l2_req_bits_order = 0U;
    vlSelf->io_l2_req_bits_memAttr = 0U;
    vlSelf->io_l2_req_bits_excl = 0U;
    vlSelf->io_l2_req_bits_wayValid = 0U;
    vlSelf->io_l2_req_bits_way = 0U;
    vlSelf->io_l2_req_bits_traceTag = 0U;
    vlSelf->io_l2_evt_bits_srcID = 2U;
    vlSelf->io_l2_evt_bits_tgtID = 0U;
    vlSelf->io_l2_evt_bits_ns = 0U;
    vlSelf->io_l2_evt_bits_memAttr = 0U;
    vlSelf->io_l2_evt_bits_wayValid = 0U;
    vlSelf->io_l2_evt_bits_way = 0U;
    vlSelf->io_l2_txRsp_bits_srcID = 2U;
    vlSelf->io_l2_txRsp_bits_respErr = 0U;
    vlSelf->io_l2_txDat_bits_srcID = 2U;
    vlSelf->io_l2_txDat_bits_respErr = 0U;
    vlSelf->io_l2_txDat_bits_byteEnable = 0xffffffffU;
    vlSelf->io_l2_rxDat_ready = 1U;
}

VL_ATTR_COLD void VDCache___024root___eval_final(VDCache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDCache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDCache___024root___eval_final\n"); );
}

VL_ATTR_COLD void VDCache___024root___eval_triggers__stl(VDCache___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VDCache___024root___dump_triggers__stl(VDCache___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VDCache___024root___eval_stl(VDCache___024root* vlSelf);

VL_ATTR_COLD void VDCache___024root___eval_settle(VDCache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDCache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDCache___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VDCache___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VDCache___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("regress_build/verilog/DCache.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VDCache___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VDCache___024root___dump_triggers__stl(VDCache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDCache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDCache___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VDCache___024root___stl_sequent__TOP__0(VDCache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDCache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDCache___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ DCache__DOT__miss__DOT___GEN_4980;
    DCache__DOT__miss__DOT___GEN_4980 = 0;
    VlWide<16>/*511:0*/ DCache__DOT__miss__DOT___GEN_4996;
    VL_ZERO_W(512, DCache__DOT__miss__DOT___GEN_4996);
    CData/*0:0*/ DCache__DOT__wb__DOT___io_block_3_T_81;
    DCache__DOT__wb__DOT___io_block_3_T_81 = 0;
    // Body
    vlSelf->io_load_0_resp_bits_id = vlSelf->DCache__DOT__loads_0__DOT__s2_req_id;
    vlSelf->io_load_0_resp_bits_replayCarry_real_way_en 
        = vlSelf->DCache__DOT__loads_0__DOT__s2_way_en;
    vlSelf->io_load_1_resp_bits_id = vlSelf->DCache__DOT__loads_1__DOT__s2_req_id;
    vlSelf->io_load_1_resp_bits_replayCarry_real_way_en 
        = vlSelf->DCache__DOT__loads_1__DOT__s2_way_en;
    vlSelf->io_atomics_resp_bits_cmd = vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd;
    vlSelf->io_cmoResp_bits_error = vlSelf->DCache__DOT__miss__DOT__cmoErr;
    vlSelf->io_forwardChi_bits_half = vlSelf->io_l2_rxDat_bits_dataID;
    vlSelf->DCache__DOT__data__DOT___T_15 = (7U & (
                                                   (3U 
                                                    & ((1U 
                                                        & ((IData)(1U) 
                                                           << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way))) 
                                                       + 
                                                       (1U 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)) 
                                                           >> 1U)))) 
                                                   + 
                                                   (3U 
                                                    & ((1U 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)) 
                                                           >> 2U)) 
                                                       + 
                                                       (1U 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)) 
                                                           >> 3U))))));
    vlSelf->DCache__DOT__pipe__DOT___probeClears_T_2 
        = (0U != (IData)(vlSelf->DCache__DOT__pipe__DOT__lrsc_count));
    vlSelf->DCache__DOT__pipe__DOT___lrsc_count_T_1 
        = (0x3fU & ((IData)(vlSelf->DCache__DOT__pipe__DOT__lrsc_count) 
                    - (IData)(1U)));
    vlSelf->DCache__DOT__miss__DOT___cntNext_T_1 = 
        (0xfU & ((IData)(1U) + (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_waitCnt)));
    vlSelf->DCache__DOT__miss__DOT___cntNext_T_3 = 
        (0xfU & ((IData)(1U) + (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_waitCnt)));
    vlSelf->DCache__DOT__miss__DOT___cntNext_T_5 = 
        (0xfU & ((IData)(1U) + (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_waitCnt)));
    vlSelf->DCache__DOT__miss__DOT___cntNext_T_7 = 
        (0xfU & ((IData)(1U) + (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_waitCnt)));
    vlSelf->DCache__DOT__miss__DOT___cntNext_T_9 = 
        (0xfU & ((IData)(1U) + (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_waitCnt)));
    vlSelf->DCache__DOT__miss__DOT___cntNext_T_11 = 
        (0xfU & ((IData)(1U) + (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_waitCnt)));
    vlSelf->DCache__DOT__miss__DOT___cntNext_T_13 = 
        (0xfU & ((IData)(1U) + (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_waitCnt)));
    vlSelf->DCache__DOT__miss__DOT___cntNext_T_15 = 
        (0xfU & ((IData)(1U) + (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_waitCnt)));
    vlSelf->DCache__DOT__miss__DOT___cntNext_T_17 = 
        (0xfU & ((IData)(1U) + (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_waitCnt)));
    vlSelf->DCache__DOT__miss__DOT___cntNext_T_19 = 
        (0xfU & ((IData)(1U) + (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_waitCnt)));
    vlSelf->DCache__DOT__miss__DOT___cntNext_T_21 = 
        (0xfU & ((IData)(1U) + (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_waitCnt)));
    vlSelf->DCache__DOT__miss__DOT___cntNext_T_23 = 
        (0xfU & ((IData)(1U) + (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_waitCnt)));
    vlSelf->DCache__DOT__miss__DOT___cntNext_T_25 = 
        (0xfU & ((IData)(1U) + (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_waitCnt)));
    vlSelf->DCache__DOT__miss__DOT___cntNext_T_27 = 
        (0xfU & ((IData)(1U) + (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_waitCnt)));
    vlSelf->DCache__DOT__miss__DOT___cntNext_T_29 = 
        (0xfU & ((IData)(1U) + (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_waitCnt)));
    vlSelf->DCache__DOT__miss__DOT___cntNext_T_31 = 
        (0xfU & ((IData)(1U) + (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_waitCnt)));
    vlSelf->DCache__DOT__wb__DOT___datStart_T_1 = (3U 
                                                   == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_state));
    vlSelf->DCache__DOT__wb__DOT___beatsNext_T_3 = 
        (3U & ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_beatsLeft) 
               - (IData)(1U)));
    vlSelf->DCache__DOT__wb__DOT___datStart_T_8 = (3U 
                                                   == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_state));
    vlSelf->DCache__DOT__wb__DOT___beatsNext_T_7 = 
        (3U & ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_beatsLeft) 
               - (IData)(1U)));
    vlSelf->DCache__DOT__wb__DOT___datStart_T_15 = 
        (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_state));
    vlSelf->DCache__DOT__wb__DOT___beatsNext_T_11 = 
        (3U & ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_beatsLeft) 
               - (IData)(1U)));
    vlSelf->DCache__DOT__wb__DOT___datStart_T_22 = 
        (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_state));
    vlSelf->DCache__DOT__wb__DOT___beatsNext_T_15 = 
        (3U & ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_beatsLeft) 
               - (IData)(1U)));
    vlSelf->DCache__DOT__wb__DOT___datStart_T_29 = 
        (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_state));
    vlSelf->DCache__DOT__wb__DOT___beatsNext_T_19 = 
        (3U & ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_beatsLeft) 
               - (IData)(1U)));
    vlSelf->DCache__DOT__wb__DOT___datStart_T_36 = 
        (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_state));
    vlSelf->DCache__DOT__wb__DOT___beatsNext_T_23 = 
        (3U & ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_beatsLeft) 
               - (IData)(1U)));
    vlSelf->DCache__DOT__wb__DOT___datStart_T_43 = 
        (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_state));
    vlSelf->DCache__DOT__wb__DOT___beatsNext_T_27 = 
        (3U & ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_beatsLeft) 
               - (IData)(1U)));
    vlSelf->DCache__DOT__wb__DOT___datStart_T_50 = 
        (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_state));
    vlSelf->DCache__DOT__wb__DOT___beatsNext_T_31 = 
        (3U & ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_beatsLeft) 
               - (IData)(1U)));
    vlSelf->DCache__DOT__wb__DOT___datStart_T_57 = 
        (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_state));
    vlSelf->DCache__DOT__wb__DOT___beatsNext_T_35 = 
        (3U & ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_beatsLeft) 
               - (IData)(1U)));
    vlSelf->DCache__DOT__wb__DOT___datStart_T_64 = 
        (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_state));
    vlSelf->DCache__DOT__wb__DOT___beatsNext_T_39 = 
        (3U & ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_beatsLeft) 
               - (IData)(1U)));
    vlSelf->DCache__DOT__wb__DOT___datStart_T_71 = 
        (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_state));
    vlSelf->DCache__DOT__wb__DOT___beatsNext_T_43 = 
        (3U & ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_beatsLeft) 
               - (IData)(1U)));
    vlSelf->DCache__DOT__wb__DOT___datStart_T_78 = 
        (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_state));
    vlSelf->DCache__DOT__wb__DOT___beatsNext_T_47 = 
        (3U & ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_beatsLeft) 
               - (IData)(1U)));
    vlSelf->DCache__DOT__wb__DOT___datStart_T_85 = 
        (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_state));
    vlSelf->DCache__DOT__wb__DOT___beatsNext_T_51 = 
        (3U & ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_beatsLeft) 
               - (IData)(1U)));
    vlSelf->DCache__DOT__wb__DOT___datStart_T_92 = 
        (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_state));
    vlSelf->DCache__DOT__wb__DOT___beatsNext_T_55 = 
        (3U & ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_beatsLeft) 
               - (IData)(1U)));
    vlSelf->DCache__DOT__wb__DOT___datStart_T_99 = 
        (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_state));
    vlSelf->DCache__DOT__wb__DOT___beatsNext_T_59 = 
        (3U & ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_beatsLeft) 
               - (IData)(1U)));
    vlSelf->DCache__DOT__wb__DOT___datStart_T_106 = 
        (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_state));
    vlSelf->DCache__DOT__wb__DOT___beatsNext_T_63 = 
        (3U & ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_beatsLeft) 
               - (IData)(1U)));
    vlSelf->DCache__DOT__wb__DOT___datStart_T_113 = 
        (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_state));
    vlSelf->DCache__DOT__wb__DOT___beatsNext_T_67 = 
        (3U & ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_beatsLeft) 
               - (IData)(1U)));
    vlSelf->DCache__DOT__wb__DOT___datStart_T_120 = 
        (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_state));
    vlSelf->DCache__DOT__wb__DOT___beatsNext_T_71 = 
        (3U & ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_beatsLeft) 
               - (IData)(1U)));
    vlSelf->io_cmoResp_bits_id = vlSelf->DCache__DOT__miss__DOT__cmoId;
    vlSelf->io_load_0_s2_bank_conflict = ((IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_bank_conflict) 
                                          & (IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_valid));
    vlSelf->io_load_1_s2_bank_conflict = ((IData)(vlSelf->DCache__DOT__loads_1__DOT__s2_bank_conflict) 
                                          & (IData)(vlSelf->DCache__DOT__loads_1__DOT__s2_valid));
    vlSelf->DCache__DOT__loads_0__DOT___T_5 = (1U & 
                                               ((~ (IData)(vlSelf->DCache__DOT__loads_0__DOT__s1_valid)) 
                                                | (IData)(vlSelf->io_load_0_s1_kill)));
    vlSelf->DCache__DOT__loads_1__DOT___T_5 = (1U & 
                                               ((~ (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_valid)) 
                                                | (IData)(vlSelf->io_load_1_s1_kill)));
    vlSelf->DCache__DOT__pipe__DOT___T_188 = ((IData)(vlSelf->DCache__DOT__pipe__DOT__s2_hold_id) 
                                              == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_id));
    vlSelf->DCache__DOT__miss__DOT___beatAfter_T_2 
        = (3U & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_beatValid) 
                 | ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID))));
    vlSelf->DCache__DOT__miss__DOT___beatAfter_T_5 
        = (3U & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_beatValid) 
                 | ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID))));
    vlSelf->DCache__DOT__miss__DOT___beatAfter_T_8 
        = (3U & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_beatValid) 
                 | ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID))));
    vlSelf->DCache__DOT__miss__DOT___beatAfter_T_11 
        = (3U & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_beatValid) 
                 | ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID))));
    vlSelf->DCache__DOT__miss__DOT___beatAfter_T_14 
        = (3U & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_beatValid) 
                 | ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID))));
    vlSelf->DCache__DOT__miss__DOT___beatAfter_T_17 
        = (3U & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_beatValid) 
                 | ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID))));
    vlSelf->DCache__DOT__miss__DOT___beatAfter_T_20 
        = (3U & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_beatValid) 
                 | ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID))));
    vlSelf->DCache__DOT__miss__DOT___beatAfter_T_23 
        = (3U & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_beatValid) 
                 | ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID))));
    vlSelf->DCache__DOT__miss__DOT___beatAfter_T_26 
        = (3U & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_beatValid) 
                 | ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID))));
    vlSelf->DCache__DOT__miss__DOT___beatAfter_T_29 
        = (3U & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_beatValid) 
                 | ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID))));
    vlSelf->DCache__DOT__miss__DOT___beatAfter_T_32 
        = (3U & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_beatValid) 
                 | ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID))));
    vlSelf->DCache__DOT__miss__DOT___beatAfter_T_35 
        = (3U & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_beatValid) 
                 | ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID))));
    vlSelf->DCache__DOT__miss__DOT___beatAfter_T_38 
        = (3U & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_beatValid) 
                 | ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID))));
    vlSelf->DCache__DOT__miss__DOT___beatAfter_T_41 
        = (3U & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_beatValid) 
                 | ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID))));
    vlSelf->DCache__DOT__miss__DOT___beatAfter_T_44 
        = (3U & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_beatValid) 
                 | ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID))));
    vlSelf->DCache__DOT__miss__DOT___beatAfter_T_47 
        = (3U & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_beatValid) 
                 | ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID))));
    vlSelf->DCache__DOT__probe__DOT___clash_T_35 = 
        ((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_8_state)) 
         & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_8_addr) 
            == (0xffffffffffc0ULL & (vlSelf->io_l2_rxSnp_bits_addr 
                                     << 3U))));
    vlSelf->DCache__DOT__probe__DOT___clash_T_39 = 
        ((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_9_state)) 
         & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_9_addr) 
            == (0xffffffffffc0ULL & (vlSelf->io_l2_rxSnp_bits_addr 
                                     << 3U))));
    vlSelf->DCache__DOT__probe__DOT___clash_T_43 = 
        ((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_10_state)) 
         & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_10_addr) 
            == (0xffffffffffc0ULL & (vlSelf->io_l2_rxSnp_bits_addr 
                                     << 3U))));
    vlSelf->DCache__DOT__probe__DOT___clash_T_47 = 
        ((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_11_state)) 
         & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_11_addr) 
            == (0xffffffffffc0ULL & (vlSelf->io_l2_rxSnp_bits_addr 
                                     << 3U))));
    vlSelf->DCache__DOT__probe__DOT___clash_T_51 = 
        ((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_12_state)) 
         & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_12_addr) 
            == (0xffffffffffc0ULL & (vlSelf->io_l2_rxSnp_bits_addr 
                                     << 3U))));
    vlSelf->DCache__DOT__probe__DOT___clash_T_55 = 
        ((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_13_state)) 
         & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_13_addr) 
            == (0xffffffffffc0ULL & (vlSelf->io_l2_rxSnp_bits_addr 
                                     << 3U))));
    vlSelf->DCache__DOT__probe__DOT___clash_T_59 = 
        ((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_14_state)) 
         & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_14_addr) 
            == (0xffffffffffc0ULL & (vlSelf->io_l2_rxSnp_bits_addr 
                                     << 3U))));
    vlSelf->DCache__DOT__probe__DOT___clash_T_63 = 
        ((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_15_state)) 
         & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_15_addr) 
            == (0xffffffffffc0ULL & (vlSelf->io_l2_rxSnp_bits_addr 
                                     << 3U))));
    vlSelf->io_store_main_pipe_hit_resp_bits_id = vlSelf->DCache__DOT__pipe__DOT__s3_hold_id;
    vlSelf->io_cmoResp_valid = (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__cmoState));
    if (vlSelf->DCache__DOT__miss__DOT__entries_0_dbidValid) {
        vlSelf->DCache__DOT__miss__DOT___GEN_445 = vlSelf->DCache__DOT__miss__DOT__entries_0_dbid;
        vlSelf->DCache__DOT__miss__DOT___GEN_446 = vlSelf->DCache__DOT__miss__DOT__entries_0_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_447 = vlSelf->DCache__DOT__miss__DOT__entries_0_respErr;
    } else {
        vlSelf->DCache__DOT__miss__DOT___GEN_445 = vlSelf->io_l2_rxRsp_bits_dbID;
        vlSelf->DCache__DOT__miss__DOT___GEN_446 = vlSelf->io_l2_rxRsp_bits_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_447 = vlSelf->io_l2_rxRsp_bits_respErr;
    }
    if (vlSelf->DCache__DOT__miss__DOT__entries_1_dbidValid) {
        vlSelf->DCache__DOT__miss__DOT___GEN_644 = vlSelf->DCache__DOT__miss__DOT__entries_1_dbid;
        vlSelf->DCache__DOT__miss__DOT___GEN_645 = vlSelf->DCache__DOT__miss__DOT__entries_1_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_646 = vlSelf->DCache__DOT__miss__DOT__entries_1_respErr;
    } else {
        vlSelf->DCache__DOT__miss__DOT___GEN_644 = vlSelf->io_l2_rxRsp_bits_dbID;
        vlSelf->DCache__DOT__miss__DOT___GEN_645 = vlSelf->io_l2_rxRsp_bits_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_646 = vlSelf->io_l2_rxRsp_bits_respErr;
    }
    if (vlSelf->DCache__DOT__miss__DOT__entries_2_dbidValid) {
        vlSelf->DCache__DOT__miss__DOT___GEN_843 = vlSelf->DCache__DOT__miss__DOT__entries_2_dbid;
        vlSelf->DCache__DOT__miss__DOT___GEN_844 = vlSelf->DCache__DOT__miss__DOT__entries_2_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_845 = vlSelf->DCache__DOT__miss__DOT__entries_2_respErr;
    } else {
        vlSelf->DCache__DOT__miss__DOT___GEN_843 = vlSelf->io_l2_rxRsp_bits_dbID;
        vlSelf->DCache__DOT__miss__DOT___GEN_844 = vlSelf->io_l2_rxRsp_bits_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_845 = vlSelf->io_l2_rxRsp_bits_respErr;
    }
    if (vlSelf->DCache__DOT__miss__DOT__entries_3_dbidValid) {
        vlSelf->DCache__DOT__miss__DOT___GEN_1042 = vlSelf->DCache__DOT__miss__DOT__entries_3_dbid;
        vlSelf->DCache__DOT__miss__DOT___GEN_1043 = vlSelf->DCache__DOT__miss__DOT__entries_3_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_1044 = vlSelf->DCache__DOT__miss__DOT__entries_3_respErr;
    } else {
        vlSelf->DCache__DOT__miss__DOT___GEN_1042 = vlSelf->io_l2_rxRsp_bits_dbID;
        vlSelf->DCache__DOT__miss__DOT___GEN_1043 = vlSelf->io_l2_rxRsp_bits_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_1044 = vlSelf->io_l2_rxRsp_bits_respErr;
    }
    if (vlSelf->DCache__DOT__miss__DOT__entries_4_dbidValid) {
        vlSelf->DCache__DOT__miss__DOT___GEN_1241 = vlSelf->DCache__DOT__miss__DOT__entries_4_dbid;
        vlSelf->DCache__DOT__miss__DOT___GEN_1242 = vlSelf->DCache__DOT__miss__DOT__entries_4_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_1243 = vlSelf->DCache__DOT__miss__DOT__entries_4_respErr;
    } else {
        vlSelf->DCache__DOT__miss__DOT___GEN_1241 = vlSelf->io_l2_rxRsp_bits_dbID;
        vlSelf->DCache__DOT__miss__DOT___GEN_1242 = vlSelf->io_l2_rxRsp_bits_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_1243 = vlSelf->io_l2_rxRsp_bits_respErr;
    }
    if (vlSelf->DCache__DOT__miss__DOT__entries_5_dbidValid) {
        vlSelf->DCache__DOT__miss__DOT___GEN_1440 = vlSelf->DCache__DOT__miss__DOT__entries_5_dbid;
        vlSelf->DCache__DOT__miss__DOT___GEN_1441 = vlSelf->DCache__DOT__miss__DOT__entries_5_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_1442 = vlSelf->DCache__DOT__miss__DOT__entries_5_respErr;
    } else {
        vlSelf->DCache__DOT__miss__DOT___GEN_1440 = vlSelf->io_l2_rxRsp_bits_dbID;
        vlSelf->DCache__DOT__miss__DOT___GEN_1441 = vlSelf->io_l2_rxRsp_bits_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_1442 = vlSelf->io_l2_rxRsp_bits_respErr;
    }
    if (vlSelf->DCache__DOT__miss__DOT__entries_6_dbidValid) {
        vlSelf->DCache__DOT__miss__DOT___GEN_1639 = vlSelf->DCache__DOT__miss__DOT__entries_6_dbid;
        vlSelf->DCache__DOT__miss__DOT___GEN_1640 = vlSelf->DCache__DOT__miss__DOT__entries_6_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_1641 = vlSelf->DCache__DOT__miss__DOT__entries_6_respErr;
    } else {
        vlSelf->DCache__DOT__miss__DOT___GEN_1639 = vlSelf->io_l2_rxRsp_bits_dbID;
        vlSelf->DCache__DOT__miss__DOT___GEN_1640 = vlSelf->io_l2_rxRsp_bits_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_1641 = vlSelf->io_l2_rxRsp_bits_respErr;
    }
    if (vlSelf->DCache__DOT__miss__DOT__entries_7_dbidValid) {
        vlSelf->DCache__DOT__miss__DOT___GEN_1838 = vlSelf->DCache__DOT__miss__DOT__entries_7_dbid;
        vlSelf->DCache__DOT__miss__DOT___GEN_1839 = vlSelf->DCache__DOT__miss__DOT__entries_7_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_1840 = vlSelf->DCache__DOT__miss__DOT__entries_7_respErr;
    } else {
        vlSelf->DCache__DOT__miss__DOT___GEN_1838 = vlSelf->io_l2_rxRsp_bits_dbID;
        vlSelf->DCache__DOT__miss__DOT___GEN_1839 = vlSelf->io_l2_rxRsp_bits_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_1840 = vlSelf->io_l2_rxRsp_bits_respErr;
    }
    if (vlSelf->DCache__DOT__miss__DOT__entries_8_dbidValid) {
        vlSelf->DCache__DOT__miss__DOT___GEN_2037 = vlSelf->DCache__DOT__miss__DOT__entries_8_dbid;
        vlSelf->DCache__DOT__miss__DOT___GEN_2038 = vlSelf->DCache__DOT__miss__DOT__entries_8_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_2039 = vlSelf->DCache__DOT__miss__DOT__entries_8_respErr;
    } else {
        vlSelf->DCache__DOT__miss__DOT___GEN_2037 = vlSelf->io_l2_rxRsp_bits_dbID;
        vlSelf->DCache__DOT__miss__DOT___GEN_2038 = vlSelf->io_l2_rxRsp_bits_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_2039 = vlSelf->io_l2_rxRsp_bits_respErr;
    }
    if (vlSelf->DCache__DOT__miss__DOT__entries_9_dbidValid) {
        vlSelf->DCache__DOT__miss__DOT___GEN_2236 = vlSelf->DCache__DOT__miss__DOT__entries_9_dbid;
        vlSelf->DCache__DOT__miss__DOT___GEN_2237 = vlSelf->DCache__DOT__miss__DOT__entries_9_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_2238 = vlSelf->DCache__DOT__miss__DOT__entries_9_respErr;
    } else {
        vlSelf->DCache__DOT__miss__DOT___GEN_2236 = vlSelf->io_l2_rxRsp_bits_dbID;
        vlSelf->DCache__DOT__miss__DOT___GEN_2237 = vlSelf->io_l2_rxRsp_bits_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_2238 = vlSelf->io_l2_rxRsp_bits_respErr;
    }
    if (vlSelf->DCache__DOT__miss__DOT__entries_10_dbidValid) {
        vlSelf->DCache__DOT__miss__DOT___GEN_2435 = vlSelf->DCache__DOT__miss__DOT__entries_10_dbid;
        vlSelf->DCache__DOT__miss__DOT___GEN_2436 = vlSelf->DCache__DOT__miss__DOT__entries_10_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_2437 = vlSelf->DCache__DOT__miss__DOT__entries_10_respErr;
    } else {
        vlSelf->DCache__DOT__miss__DOT___GEN_2435 = vlSelf->io_l2_rxRsp_bits_dbID;
        vlSelf->DCache__DOT__miss__DOT___GEN_2436 = vlSelf->io_l2_rxRsp_bits_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_2437 = vlSelf->io_l2_rxRsp_bits_respErr;
    }
    if (vlSelf->DCache__DOT__miss__DOT__entries_11_dbidValid) {
        vlSelf->DCache__DOT__miss__DOT___GEN_2634 = vlSelf->DCache__DOT__miss__DOT__entries_11_dbid;
        vlSelf->DCache__DOT__miss__DOT___GEN_2635 = vlSelf->DCache__DOT__miss__DOT__entries_11_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_2636 = vlSelf->DCache__DOT__miss__DOT__entries_11_respErr;
    } else {
        vlSelf->DCache__DOT__miss__DOT___GEN_2634 = vlSelf->io_l2_rxRsp_bits_dbID;
        vlSelf->DCache__DOT__miss__DOT___GEN_2635 = vlSelf->io_l2_rxRsp_bits_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_2636 = vlSelf->io_l2_rxRsp_bits_respErr;
    }
    if (vlSelf->DCache__DOT__miss__DOT__entries_12_dbidValid) {
        vlSelf->DCache__DOT__miss__DOT___GEN_2833 = vlSelf->DCache__DOT__miss__DOT__entries_12_dbid;
        vlSelf->DCache__DOT__miss__DOT___GEN_2834 = vlSelf->DCache__DOT__miss__DOT__entries_12_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_2835 = vlSelf->DCache__DOT__miss__DOT__entries_12_respErr;
    } else {
        vlSelf->DCache__DOT__miss__DOT___GEN_2833 = vlSelf->io_l2_rxRsp_bits_dbID;
        vlSelf->DCache__DOT__miss__DOT___GEN_2834 = vlSelf->io_l2_rxRsp_bits_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_2835 = vlSelf->io_l2_rxRsp_bits_respErr;
    }
    if (vlSelf->DCache__DOT__miss__DOT__entries_13_dbidValid) {
        vlSelf->DCache__DOT__miss__DOT___GEN_3032 = vlSelf->DCache__DOT__miss__DOT__entries_13_dbid;
        vlSelf->DCache__DOT__miss__DOT___GEN_3033 = vlSelf->DCache__DOT__miss__DOT__entries_13_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_3034 = vlSelf->DCache__DOT__miss__DOT__entries_13_respErr;
    } else {
        vlSelf->DCache__DOT__miss__DOT___GEN_3032 = vlSelf->io_l2_rxRsp_bits_dbID;
        vlSelf->DCache__DOT__miss__DOT___GEN_3033 = vlSelf->io_l2_rxRsp_bits_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_3034 = vlSelf->io_l2_rxRsp_bits_respErr;
    }
    if (vlSelf->DCache__DOT__miss__DOT__entries_14_dbidValid) {
        vlSelf->DCache__DOT__miss__DOT___GEN_3231 = vlSelf->DCache__DOT__miss__DOT__entries_14_dbid;
        vlSelf->DCache__DOT__miss__DOT___GEN_3232 = vlSelf->DCache__DOT__miss__DOT__entries_14_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_3233 = vlSelf->DCache__DOT__miss__DOT__entries_14_respErr;
    } else {
        vlSelf->DCache__DOT__miss__DOT___GEN_3231 = vlSelf->io_l2_rxRsp_bits_dbID;
        vlSelf->DCache__DOT__miss__DOT___GEN_3232 = vlSelf->io_l2_rxRsp_bits_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_3233 = vlSelf->io_l2_rxRsp_bits_respErr;
    }
    if (vlSelf->DCache__DOT__miss__DOT__entries_15_dbidValid) {
        vlSelf->DCache__DOT__miss__DOT___GEN_3430 = vlSelf->DCache__DOT__miss__DOT__entries_15_dbid;
        vlSelf->DCache__DOT__miss__DOT___GEN_3431 = vlSelf->DCache__DOT__miss__DOT__entries_15_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_3432 = vlSelf->DCache__DOT__miss__DOT__entries_15_respErr;
    } else {
        vlSelf->DCache__DOT__miss__DOT___GEN_3430 = vlSelf->io_l2_rxRsp_bits_dbID;
        vlSelf->DCache__DOT__miss__DOT___GEN_3431 = vlSelf->io_l2_rxRsp_bits_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_3432 = vlSelf->io_l2_rxRsp_bits_respErr;
    }
    vlSelf->DCache__DOT__pipe__DOT___storeWords_0_T_1 
        = (((QData)((IData)((0xffU & ((1U & (IData)(
                                                    (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                     >> 7U)))
                                       ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[1U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[1U] 
                                           >> 0x18U))
                                       : (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_word_0 
                                                  >> 0x38U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((1U & (IData)(
                                                          (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                           >> 6U)))
                                             ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[1U] 
                                                   >> 0x10U))
                                             : (IData)(
                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_word_0 
                                                        >> 0x30U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((1U 
                                                             & (IData)(
                                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                        >> 5U)))
                                                             ? 
                                                            ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[1U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[1U] 
                                                                >> 8U))
                                                             : (IData)(
                                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_word_0 
                                                                        >> 0x28U)))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((1U 
                                                              & (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                         >> 4U)))
                                                              ? 
                                                             vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[1U]
                                                              : (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_word_0 
                                                                         >> 0x20U)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((1U 
                                                              & (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                         >> 3U)))
                                                              ? 
                                                             ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0U] 
                                                                 >> 0x18U))
                                                              : (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_word_0 
                                                                         >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((1U 
                                                                    & (IData)(
                                                                              (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                               >> 2U)))
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0U] 
                                                                       >> 0x10U))
                                                                    : (IData)(
                                                                              (vlSelf->DCache__DOT__pipe__DOT__s3_word_0 
                                                                               >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((1U 
                                                                       & (IData)(
                                                                                (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                                >> 1U)))
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0U] 
                                                                          >> 8U))
                                                                       : (IData)(
                                                                                (vlSelf->DCache__DOT__pipe__DOT__s3_word_0 
                                                                                >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((1U 
                                                                        & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask))
                                                                        ? 
                                                                       vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0U]
                                                                        : (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_word_0))))))))))));
    vlSelf->DCache__DOT__pipe__DOT___storeWords_1_T_1 
        = (((QData)((IData)((0xffU & ((1U & (IData)(
                                                    (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                     >> 0xfU)))
                                       ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[3U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[3U] 
                                           >> 0x18U))
                                       : (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_word_1 
                                                  >> 0x38U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((1U & (IData)(
                                                          (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                           >> 0xeU)))
                                             ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[3U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[3U] 
                                                   >> 0x10U))
                                             : (IData)(
                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_word_1 
                                                        >> 0x30U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((1U 
                                                             & (IData)(
                                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                        >> 0xdU)))
                                                             ? 
                                                            ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[3U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[3U] 
                                                                >> 8U))
                                                             : (IData)(
                                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_word_1 
                                                                        >> 0x28U)))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((1U 
                                                              & (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                         >> 0xcU)))
                                                              ? 
                                                             vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[3U]
                                                              : (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_word_1 
                                                                         >> 0x20U)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((1U 
                                                              & (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                         >> 0xbU)))
                                                              ? 
                                                             ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[2U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[2U] 
                                                                 >> 0x18U))
                                                              : (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_word_1 
                                                                         >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((1U 
                                                                    & (IData)(
                                                                              (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                               >> 0xaU)))
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[2U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[2U] 
                                                                       >> 0x10U))
                                                                    : (IData)(
                                                                              (vlSelf->DCache__DOT__pipe__DOT__s3_word_1 
                                                                               >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((1U 
                                                                       & (IData)(
                                                                                (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                                >> 9U)))
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[2U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[2U] 
                                                                          >> 8U))
                                                                       : (IData)(
                                                                                (vlSelf->DCache__DOT__pipe__DOT__s3_word_1 
                                                                                >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                                >> 8U)))
                                                                        ? 
                                                                       vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[2U]
                                                                        : (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_word_1))))))))))));
    vlSelf->DCache__DOT__pipe__DOT___storeWords_2_T_1 
        = (((QData)((IData)((0xffU & ((1U & (IData)(
                                                    (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                     >> 0x17U)))
                                       ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[5U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[5U] 
                                           >> 0x18U))
                                       : (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_word_2 
                                                  >> 0x38U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((1U & (IData)(
                                                          (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                           >> 0x16U)))
                                             ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[5U] 
                                                   >> 0x10U))
                                             : (IData)(
                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_word_2 
                                                        >> 0x30U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((1U 
                                                             & (IData)(
                                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                        >> 0x15U)))
                                                             ? 
                                                            ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[5U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[5U] 
                                                                >> 8U))
                                                             : (IData)(
                                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_word_2 
                                                                        >> 0x28U)))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((1U 
                                                              & (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                         >> 0x14U)))
                                                              ? 
                                                             vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[5U]
                                                              : (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_word_2 
                                                                         >> 0x20U)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((1U 
                                                              & (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                         >> 0x13U)))
                                                              ? 
                                                             ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[4U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[4U] 
                                                                 >> 0x18U))
                                                              : (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_word_2 
                                                                         >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((1U 
                                                                    & (IData)(
                                                                              (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                               >> 0x12U)))
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[4U] 
                                                                       >> 0x10U))
                                                                    : (IData)(
                                                                              (vlSelf->DCache__DOT__pipe__DOT__s3_word_2 
                                                                               >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((1U 
                                                                       & (IData)(
                                                                                (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                                >> 0x11U)))
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[4U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[4U] 
                                                                          >> 8U))
                                                                       : (IData)(
                                                                                (vlSelf->DCache__DOT__pipe__DOT__s3_word_2 
                                                                                >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                                >> 0x10U)))
                                                                        ? 
                                                                       vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[4U]
                                                                        : (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_word_2))))))))))));
    vlSelf->DCache__DOT__pipe__DOT___storeWords_3_T_1 
        = (((QData)((IData)((0xffU & ((1U & (IData)(
                                                    (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                     >> 0x1fU)))
                                       ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[7U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[7U] 
                                           >> 0x18U))
                                       : (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_word_3 
                                                  >> 0x38U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((1U & (IData)(
                                                          (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                           >> 0x1eU)))
                                             ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[7U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[7U] 
                                                   >> 0x10U))
                                             : (IData)(
                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_word_3 
                                                        >> 0x30U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((1U 
                                                             & (IData)(
                                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                        >> 0x1dU)))
                                                             ? 
                                                            ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[7U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[7U] 
                                                                >> 8U))
                                                             : (IData)(
                                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_word_3 
                                                                        >> 0x28U)))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((1U 
                                                              & (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                         >> 0x1cU)))
                                                              ? 
                                                             vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[7U]
                                                              : (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_word_3 
                                                                         >> 0x20U)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((1U 
                                                              & (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                         >> 0x1bU)))
                                                              ? 
                                                             ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[6U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[6U] 
                                                                 >> 0x18U))
                                                              : (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_word_3 
                                                                         >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((1U 
                                                                    & (IData)(
                                                                              (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                               >> 0x1aU)))
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[6U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[6U] 
                                                                       >> 0x10U))
                                                                    : (IData)(
                                                                              (vlSelf->DCache__DOT__pipe__DOT__s3_word_3 
                                                                               >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((1U 
                                                                       & (IData)(
                                                                                (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                                >> 0x19U)))
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[6U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[6U] 
                                                                          >> 8U))
                                                                       : (IData)(
                                                                                (vlSelf->DCache__DOT__pipe__DOT__s3_word_3 
                                                                                >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                                >> 0x18U)))
                                                                        ? 
                                                                       vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[6U]
                                                                        : (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_word_3))))))))))));
    vlSelf->DCache__DOT__pipe__DOT___storeWords_4_T_1 
        = (((QData)((IData)((0xffU & ((1U & (IData)(
                                                    (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                     >> 0x27U)))
                                       ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[9U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[9U] 
                                           >> 0x18U))
                                       : (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_word_4 
                                                  >> 0x38U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((1U & (IData)(
                                                          (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                           >> 0x26U)))
                                             ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[9U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[9U] 
                                                   >> 0x10U))
                                             : (IData)(
                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_word_4 
                                                        >> 0x30U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((1U 
                                                             & (IData)(
                                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                        >> 0x25U)))
                                                             ? 
                                                            ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[9U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[9U] 
                                                                >> 8U))
                                                             : (IData)(
                                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_word_4 
                                                                        >> 0x28U)))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((1U 
                                                              & (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                         >> 0x24U)))
                                                              ? 
                                                             vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[9U]
                                                              : (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_word_4 
                                                                         >> 0x20U)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((1U 
                                                              & (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                         >> 0x23U)))
                                                              ? 
                                                             ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[8U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[8U] 
                                                                 >> 0x18U))
                                                              : (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_word_4 
                                                                         >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((1U 
                                                                    & (IData)(
                                                                              (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                               >> 0x22U)))
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[8U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[8U] 
                                                                       >> 0x10U))
                                                                    : (IData)(
                                                                              (vlSelf->DCache__DOT__pipe__DOT__s3_word_4 
                                                                               >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((1U 
                                                                       & (IData)(
                                                                                (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                                >> 0x21U)))
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[8U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[8U] 
                                                                          >> 8U))
                                                                       : (IData)(
                                                                                (vlSelf->DCache__DOT__pipe__DOT__s3_word_4 
                                                                                >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                                >> 0x20U)))
                                                                        ? 
                                                                       vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[8U]
                                                                        : (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_word_4))))))))))));
    vlSelf->DCache__DOT__pipe__DOT___storeWords_5_T_1 
        = (((QData)((IData)((0xffU & ((1U & (IData)(
                                                    (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                     >> 0x2fU)))
                                       ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xbU] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xbU] 
                                           >> 0x18U))
                                       : (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_word_5 
                                                  >> 0x38U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((1U & (IData)(
                                                          (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                           >> 0x2eU)))
                                             ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xbU] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xbU] 
                                                   >> 0x10U))
                                             : (IData)(
                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_word_5 
                                                        >> 0x30U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((1U 
                                                             & (IData)(
                                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                        >> 0x2dU)))
                                                             ? 
                                                            ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xbU] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xbU] 
                                                                >> 8U))
                                                             : (IData)(
                                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_word_5 
                                                                        >> 0x28U)))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((1U 
                                                              & (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                         >> 0x2cU)))
                                                              ? 
                                                             vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xbU]
                                                              : (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_word_5 
                                                                         >> 0x20U)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((1U 
                                                              & (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                         >> 0x2bU)))
                                                              ? 
                                                             ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xaU] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xaU] 
                                                                 >> 0x18U))
                                                              : (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_word_5 
                                                                         >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((1U 
                                                                    & (IData)(
                                                                              (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                               >> 0x2aU)))
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xaU] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xaU] 
                                                                       >> 0x10U))
                                                                    : (IData)(
                                                                              (vlSelf->DCache__DOT__pipe__DOT__s3_word_5 
                                                                               >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((1U 
                                                                       & (IData)(
                                                                                (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                                >> 0x29U)))
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xaU] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xaU] 
                                                                          >> 8U))
                                                                       : (IData)(
                                                                                (vlSelf->DCache__DOT__pipe__DOT__s3_word_5 
                                                                                >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                                >> 0x28U)))
                                                                        ? 
                                                                       vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xaU]
                                                                        : (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_word_5))))))))))));
    vlSelf->DCache__DOT__pipe__DOT___storeWords_6_T_1 
        = (((QData)((IData)((0xffU & ((1U & (IData)(
                                                    (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                     >> 0x37U)))
                                       ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xdU] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xdU] 
                                           >> 0x18U))
                                       : (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_word_6 
                                                  >> 0x38U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((1U & (IData)(
                                                          (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                           >> 0x36U)))
                                             ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xdU] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xdU] 
                                                   >> 0x10U))
                                             : (IData)(
                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_word_6 
                                                        >> 0x30U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((1U 
                                                             & (IData)(
                                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                        >> 0x35U)))
                                                             ? 
                                                            ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xdU] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xdU] 
                                                                >> 8U))
                                                             : (IData)(
                                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_word_6 
                                                                        >> 0x28U)))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((1U 
                                                              & (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                         >> 0x34U)))
                                                              ? 
                                                             vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xdU]
                                                              : (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_word_6 
                                                                         >> 0x20U)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((1U 
                                                              & (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                         >> 0x33U)))
                                                              ? 
                                                             ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xcU] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xcU] 
                                                                 >> 0x18U))
                                                              : (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_word_6 
                                                                         >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((1U 
                                                                    & (IData)(
                                                                              (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                               >> 0x32U)))
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xcU] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xcU] 
                                                                       >> 0x10U))
                                                                    : (IData)(
                                                                              (vlSelf->DCache__DOT__pipe__DOT__s3_word_6 
                                                                               >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((1U 
                                                                       & (IData)(
                                                                                (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                                >> 0x31U)))
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xcU] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xcU] 
                                                                          >> 8U))
                                                                       : (IData)(
                                                                                (vlSelf->DCache__DOT__pipe__DOT__s3_word_6 
                                                                                >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                                >> 0x30U)))
                                                                        ? 
                                                                       vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xcU]
                                                                        : (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_word_6))))))))))));
    vlSelf->DCache__DOT__pipe__DOT___storeWords_7_T_1 
        = (((QData)((IData)((0xffU & ((1U & (IData)(
                                                    (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                     >> 0x3fU)))
                                       ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xfU] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xfU] 
                                           >> 0x18U))
                                       : (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_word_7 
                                                  >> 0x38U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((1U & (IData)(
                                                          (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                           >> 0x3eU)))
                                             ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xfU] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xfU] 
                                                   >> 0x10U))
                                             : (IData)(
                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_word_7 
                                                        >> 0x30U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((1U 
                                                             & (IData)(
                                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                        >> 0x3dU)))
                                                             ? 
                                                            ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xfU] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xfU] 
                                                                >> 8U))
                                                             : (IData)(
                                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_word_7 
                                                                        >> 0x28U)))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((1U 
                                                              & (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                         >> 0x3cU)))
                                                              ? 
                                                             vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xfU]
                                                              : (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_word_7 
                                                                         >> 0x20U)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((1U 
                                                              & (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                         >> 0x3bU)))
                                                              ? 
                                                             ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xeU] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xeU] 
                                                                 >> 0x18U))
                                                              : (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_word_7 
                                                                         >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((1U 
                                                                    & (IData)(
                                                                              (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                               >> 0x3aU)))
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xeU] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xeU] 
                                                                       >> 0x10U))
                                                                    : (IData)(
                                                                              (vlSelf->DCache__DOT__pipe__DOT__s3_word_7 
                                                                               >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((1U 
                                                                       & (IData)(
                                                                                (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                                >> 0x39U)))
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xeU] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xeU] 
                                                                          >> 8U))
                                                                       : (IData)(
                                                                                (vlSelf->DCache__DOT__pipe__DOT__s3_word_7 
                                                                                >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                                >> 0x38U)))
                                                                        ? 
                                                                       vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xeU]
                                                                        : (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_word_7))))))))))));
    vlSelf->DCache__DOT__probe__DOT___T_189 = (0x1fU 
                                               & ((0xfU 
                                                   & ((7U 
                                                       & ((3U 
                                                           & ((2U 
                                                               == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_0_state)) 
                                                              + 
                                                              (2U 
                                                               == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_1_state)))) 
                                                          + 
                                                          (3U 
                                                           & ((2U 
                                                               == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_2_state)) 
                                                              + 
                                                              (2U 
                                                               == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_3_state)))))) 
                                                      + 
                                                      (7U 
                                                       & ((3U 
                                                           & ((2U 
                                                               == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_4_state)) 
                                                              + 
                                                              (2U 
                                                               == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_5_state)))) 
                                                          + 
                                                          (3U 
                                                           & ((2U 
                                                               == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_6_state)) 
                                                              + 
                                                              (2U 
                                                               == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_7_state)))))))) 
                                                  + 
                                                  (0xfU 
                                                   & ((7U 
                                                       & ((3U 
                                                           & ((2U 
                                                               == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_8_state)) 
                                                              + 
                                                              (2U 
                                                               == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_9_state)))) 
                                                          + 
                                                          (3U 
                                                           & ((2U 
                                                               == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_10_state)) 
                                                              + 
                                                              (2U 
                                                               == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_11_state)))))) 
                                                      + 
                                                      (7U 
                                                       & ((3U 
                                                           & ((2U 
                                                               == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_12_state)) 
                                                              + 
                                                              (2U 
                                                               == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_13_state)))) 
                                                          + 
                                                          (3U 
                                                           & ((2U 
                                                               == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_14_state)) 
                                                              + 
                                                              (2U 
                                                               == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_15_state))))))))));
    vlSelf->DCache__DOT__miss__DOT___GEN_4004 = ((0xfU 
                                                  == (IData)(vlSelf->DCache__DOT__pipe__DOT__s2_hold_missId))
                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_resp)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->DCache__DOT__pipe__DOT__s2_hold_missId))
                                                   ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_resp)
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->DCache__DOT__pipe__DOT__s2_hold_missId))
                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_resp)
                                                    : 
                                                   ((0xcU 
                                                     == (IData)(vlSelf->DCache__DOT__pipe__DOT__s2_hold_missId))
                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_resp)
                                                     : 
                                                    ((0xbU 
                                                      == (IData)(vlSelf->DCache__DOT__pipe__DOT__s2_hold_missId))
                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_resp)
                                                      : 
                                                     ((0xaU 
                                                       == (IData)(vlSelf->DCache__DOT__pipe__DOT__s2_hold_missId))
                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_resp)
                                                       : 
                                                      ((9U 
                                                        == (IData)(vlSelf->DCache__DOT__pipe__DOT__s2_hold_missId))
                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_resp)
                                                        : 
                                                       ((8U 
                                                         == (IData)(vlSelf->DCache__DOT__pipe__DOT__s2_hold_missId))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_resp)
                                                         : 
                                                        ((7U 
                                                          == (IData)(vlSelf->DCache__DOT__pipe__DOT__s2_hold_missId))
                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_resp)
                                                          : 
                                                         ((6U 
                                                           == (IData)(vlSelf->DCache__DOT__pipe__DOT__s2_hold_missId))
                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_resp)
                                                           : 
                                                          ((5U 
                                                            == (IData)(vlSelf->DCache__DOT__pipe__DOT__s2_hold_missId))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_resp)
                                                            : 
                                                           ((4U 
                                                             == (IData)(vlSelf->DCache__DOT__pipe__DOT__s2_hold_missId))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_resp)
                                                             : 
                                                            ((3U 
                                                              == (IData)(vlSelf->DCache__DOT__pipe__DOT__s2_hold_missId))
                                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_resp)
                                                              : 
                                                             ((2U 
                                                               == (IData)(vlSelf->DCache__DOT__pipe__DOT__s2_hold_missId))
                                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_resp)
                                                               : 
                                                              ((1U 
                                                                == (IData)(vlSelf->DCache__DOT__pipe__DOT__s2_hold_missId))
                                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_resp)
                                                                : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_resp))))))))))))))));
    vlSelf->DCache__DOT__probe__DOT___GEN_225 = ((0xfU 
                                                  == (IData)(vlSelf->DCache__DOT__probe__DOT__outIdx))
                                                  ? (IData)(vlSelf->DCache__DOT__probe__DOT__entries_15_state)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->DCache__DOT__probe__DOT__outIdx))
                                                   ? (IData)(vlSelf->DCache__DOT__probe__DOT__entries_14_state)
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->DCache__DOT__probe__DOT__outIdx))
                                                    ? (IData)(vlSelf->DCache__DOT__probe__DOT__entries_13_state)
                                                    : 
                                                   ((0xcU 
                                                     == (IData)(vlSelf->DCache__DOT__probe__DOT__outIdx))
                                                     ? (IData)(vlSelf->DCache__DOT__probe__DOT__entries_12_state)
                                                     : 
                                                    ((0xbU 
                                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__outIdx))
                                                      ? (IData)(vlSelf->DCache__DOT__probe__DOT__entries_11_state)
                                                      : 
                                                     ((0xaU 
                                                       == (IData)(vlSelf->DCache__DOT__probe__DOT__outIdx))
                                                       ? (IData)(vlSelf->DCache__DOT__probe__DOT__entries_10_state)
                                                       : 
                                                      ((9U 
                                                        == (IData)(vlSelf->DCache__DOT__probe__DOT__outIdx))
                                                        ? (IData)(vlSelf->DCache__DOT__probe__DOT__entries_9_state)
                                                        : 
                                                       ((8U 
                                                         == (IData)(vlSelf->DCache__DOT__probe__DOT__outIdx))
                                                         ? (IData)(vlSelf->DCache__DOT__probe__DOT__entries_8_state)
                                                         : 
                                                        ((7U 
                                                          == (IData)(vlSelf->DCache__DOT__probe__DOT__outIdx))
                                                          ? (IData)(vlSelf->DCache__DOT__probe__DOT__entries_7_state)
                                                          : 
                                                         ((6U 
                                                           == (IData)(vlSelf->DCache__DOT__probe__DOT__outIdx))
                                                           ? (IData)(vlSelf->DCache__DOT__probe__DOT__entries_6_state)
                                                           : 
                                                          ((5U 
                                                            == (IData)(vlSelf->DCache__DOT__probe__DOT__outIdx))
                                                            ? (IData)(vlSelf->DCache__DOT__probe__DOT__entries_5_state)
                                                            : 
                                                           ((4U 
                                                             == (IData)(vlSelf->DCache__DOT__probe__DOT__outIdx))
                                                             ? (IData)(vlSelf->DCache__DOT__probe__DOT__entries_4_state)
                                                             : 
                                                            ((3U 
                                                              == (IData)(vlSelf->DCache__DOT__probe__DOT__outIdx))
                                                              ? (IData)(vlSelf->DCache__DOT__probe__DOT__entries_3_state)
                                                              : 
                                                             ((2U 
                                                               == (IData)(vlSelf->DCache__DOT__probe__DOT__outIdx))
                                                               ? (IData)(vlSelf->DCache__DOT__probe__DOT__entries_2_state)
                                                               : 
                                                              ((1U 
                                                                == (IData)(vlSelf->DCache__DOT__probe__DOT__outIdx))
                                                                ? (IData)(vlSelf->DCache__DOT__probe__DOT__entries_1_state)
                                                                : (IData)(vlSelf->DCache__DOT__probe__DOT__entries_0_state))))))))))))))));
    vlSelf->DCache__DOT__probe__DOT__clash_lo = (((
                                                   (0U 
                                                    != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_7_state)) 
                                                   & ((0xffffffffffc0ULL 
                                                       & vlSelf->DCache__DOT__probe__DOT__entries_7_addr) 
                                                      == 
                                                      (0xffffffffffc0ULL 
                                                       & (vlSelf->io_l2_rxSnp_bits_addr 
                                                          << 3U)))) 
                                                  << 7U) 
                                                 | ((((0U 
                                                       != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_6_state)) 
                                                      & ((0xffffffffffc0ULL 
                                                          & vlSelf->DCache__DOT__probe__DOT__entries_6_addr) 
                                                         == 
                                                         (0xffffffffffc0ULL 
                                                          & (vlSelf->io_l2_rxSnp_bits_addr 
                                                             << 3U)))) 
                                                     << 6U) 
                                                    | ((((0U 
                                                          != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_5_state)) 
                                                         & ((0xffffffffffc0ULL 
                                                             & vlSelf->DCache__DOT__probe__DOT__entries_5_addr) 
                                                            == 
                                                            (0xffffffffffc0ULL 
                                                             & (vlSelf->io_l2_rxSnp_bits_addr 
                                                                << 3U)))) 
                                                        << 5U) 
                                                       | ((((0U 
                                                             != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_4_state)) 
                                                            & ((0xffffffffffc0ULL 
                                                                & vlSelf->DCache__DOT__probe__DOT__entries_4_addr) 
                                                               == 
                                                               (0xffffffffffc0ULL 
                                                                & (vlSelf->io_l2_rxSnp_bits_addr 
                                                                   << 3U)))) 
                                                           << 4U) 
                                                          | ((((0U 
                                                                != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_3_state)) 
                                                               & ((0xffffffffffc0ULL 
                                                                   & vlSelf->DCache__DOT__probe__DOT__entries_3_addr) 
                                                                  == 
                                                                  (0xffffffffffc0ULL 
                                                                   & (vlSelf->io_l2_rxSnp_bits_addr 
                                                                      << 3U)))) 
                                                              << 3U) 
                                                             | ((((0U 
                                                                   != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_2_state)) 
                                                                  & ((0xffffffffffc0ULL 
                                                                      & vlSelf->DCache__DOT__probe__DOT__entries_2_addr) 
                                                                     == 
                                                                     (0xffffffffffc0ULL 
                                                                      & (vlSelf->io_l2_rxSnp_bits_addr 
                                                                         << 3U)))) 
                                                                 << 2U) 
                                                                | ((((0U 
                                                                      != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_1_state)) 
                                                                     & ((0xffffffffffc0ULL 
                                                                         & vlSelf->DCache__DOT__probe__DOT__entries_1_addr) 
                                                                        == 
                                                                        (0xffffffffffc0ULL 
                                                                         & (vlSelf->io_l2_rxSnp_bits_addr 
                                                                            << 3U)))) 
                                                                    << 1U) 
                                                                   | ((0U 
                                                                       != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_0_state)) 
                                                                      & ((0xffffffffffc0ULL 
                                                                          & vlSelf->DCache__DOT__probe__DOT__entries_0_addr) 
                                                                         == 
                                                                         (0xffffffffffc0ULL 
                                                                          & (vlSelf->io_l2_rxSnp_bits_addr 
                                                                             << 3U)))))))))));
    vlSelf->DCache__DOT__pipe__DOT___io_wbReq_bits_data_T[0U] 
        = (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_word_0);
    vlSelf->DCache__DOT__pipe__DOT___io_wbReq_bits_data_T[1U] 
        = (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_word_0 
                   >> 0x20U));
    vlSelf->DCache__DOT__pipe__DOT___io_wbReq_bits_data_T[2U] 
        = (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_word_1);
    vlSelf->DCache__DOT__pipe__DOT___io_wbReq_bits_data_T[3U] 
        = (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_word_1 
                   >> 0x20U));
    vlSelf->DCache__DOT__pipe__DOT___io_wbReq_bits_data_T[4U] 
        = (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_word_2);
    vlSelf->DCache__DOT__pipe__DOT___io_wbReq_bits_data_T[5U] 
        = (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_word_2 
                   >> 0x20U));
    vlSelf->DCache__DOT__pipe__DOT___io_wbReq_bits_data_T[6U] 
        = (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_word_3);
    vlSelf->DCache__DOT__pipe__DOT___io_wbReq_bits_data_T[7U] 
        = (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_word_3 
                   >> 0x20U));
    vlSelf->DCache__DOT__pipe__DOT___io_wbReq_bits_data_T[8U] 
        = (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_word_4);
    vlSelf->DCache__DOT__pipe__DOT___io_wbReq_bits_data_T[9U] 
        = (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_word_4 
                   >> 0x20U));
    vlSelf->DCache__DOT__pipe__DOT___io_wbReq_bits_data_T[0xaU] 
        = (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_word_5);
    vlSelf->DCache__DOT__pipe__DOT___io_wbReq_bits_data_T[0xbU] 
        = (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_word_5 
                   >> 0x20U));
    vlSelf->DCache__DOT__pipe__DOT___io_wbReq_bits_data_T[0xcU] 
        = (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_word_6);
    vlSelf->DCache__DOT__pipe__DOT___io_wbReq_bits_data_T[0xdU] 
        = (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_word_6 
                   >> 0x20U));
    vlSelf->DCache__DOT__pipe__DOT___io_wbReq_bits_data_T[0xeU] 
        = (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_word_7);
    vlSelf->DCache__DOT__pipe__DOT___io_wbReq_bits_data_T[0xfU] 
        = (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_word_7 
                   >> 0x20U));
    vlSelf->io_cmoReq_ready = (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__cmoState));
    vlSelf->io_l2_rxSnp_ready = ((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_15_state)) 
                                 | ((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_14_state)) 
                                    | ((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_13_state)) 
                                       | ((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_12_state)) 
                                          | ((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_11_state)) 
                                             | ((0U 
                                                 == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_10_state)) 
                                                | ((0U 
                                                    == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_9_state)) 
                                                   | ((0U 
                                                       == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_8_state)) 
                                                      | ((0U 
                                                          == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_7_state)) 
                                                         | ((0U 
                                                             == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_6_state)) 
                                                            | ((0U 
                                                                == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_5_state)) 
                                                               | ((0U 
                                                                   == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_4_state)) 
                                                                  | ((0U 
                                                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_3_state)) 
                                                                     | ((0U 
                                                                         == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_2_state)) 
                                                                        | ((0U 
                                                                            == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_1_state)) 
                                                                           | (0U 
                                                                              == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_0_state)))))))))))))))));
    vlSelf->DCache__DOT__data__DOT__dataBank_7_io_r_data_3 
        = vlSelf->DCache__DOT__data__DOT__dataBank_7__DOT__mem_3
        [vlSelf->DCache__DOT__data__DOT__dataBank_7__DOT__mem_3_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__data__DOT__dataBank_0_io_r_data_3 
        = vlSelf->DCache__DOT__data__DOT__dataBank_0__DOT__mem_3
        [vlSelf->DCache__DOT__data__DOT__dataBank_0__DOT__mem_3_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__data__DOT__dataBank_1_io_r_data_3 
        = vlSelf->DCache__DOT__data__DOT__dataBank_1__DOT__mem_3
        [vlSelf->DCache__DOT__data__DOT__dataBank_1__DOT__mem_3_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__data__DOT__dataBank_2_io_r_data_3 
        = vlSelf->DCache__DOT__data__DOT__dataBank_2__DOT__mem_3
        [vlSelf->DCache__DOT__data__DOT__dataBank_2__DOT__mem_3_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__data__DOT__dataBank_3_io_r_data_3 
        = vlSelf->DCache__DOT__data__DOT__dataBank_3__DOT__mem_3
        [vlSelf->DCache__DOT__data__DOT__dataBank_3__DOT__mem_3_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__data__DOT__dataBank_4_io_r_data_3 
        = vlSelf->DCache__DOT__data__DOT__dataBank_4__DOT__mem_3
        [vlSelf->DCache__DOT__data__DOT__dataBank_4__DOT__mem_3_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__data__DOT__dataBank_5_io_r_data_3 
        = vlSelf->DCache__DOT__data__DOT__dataBank_5__DOT__mem_3
        [vlSelf->DCache__DOT__data__DOT__dataBank_5__DOT__mem_3_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__data__DOT__dataBank_6_io_r_data_3 
        = vlSelf->DCache__DOT__data__DOT__dataBank_6__DOT__mem_3
        [vlSelf->DCache__DOT__data__DOT__dataBank_6__DOT__mem_3_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__probe__DOT__allocId = ((0U 
                                                 == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_0_state))
                                                 ? 0U
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_1_state))
                                                  ? 1U
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_2_state))
                                                   ? 2U
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_3_state))
                                                    ? 3U
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_4_state))
                                                     ? 4U
                                                     : 
                                                    ((0U 
                                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_5_state))
                                                      ? 5U
                                                      : 
                                                     ((0U 
                                                       == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_6_state))
                                                       ? 6U
                                                       : 
                                                      ((0U 
                                                        == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_7_state))
                                                        ? 7U
                                                        : 
                                                       ((0U 
                                                         == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_8_state))
                                                         ? 8U
                                                         : 
                                                        ((0U 
                                                          == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_9_state))
                                                          ? 9U
                                                          : 
                                                         ((0U 
                                                           == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_10_state))
                                                           ? 0xaU
                                                           : 
                                                          ((0U 
                                                            == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_11_state))
                                                            ? 0xbU
                                                            : 
                                                           ((0U 
                                                             == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_12_state))
                                                             ? 0xcU
                                                             : 
                                                            ((0U 
                                                              == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_13_state))
                                                              ? 0xdU
                                                              : 
                                                             ((0U 
                                                               == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_14_state))
                                                               ? 0xeU
                                                               : 0xfU)))))))))))))));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_172 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_0_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_15_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_362 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_1_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_15_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_552 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_2_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_15_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_742 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_3_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_15_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_932 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_4_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_15_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1122 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_5_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_15_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1312 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_6_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_15_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1502 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_7_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_15_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1692 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_8_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_15_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1882 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_9_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_15_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2072 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_10_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_15_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2262 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_11_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_15_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2452 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_12_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_15_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2642 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_13_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_15_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2832 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_14_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_15_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_3022 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_15_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_15_addr));
    vlSelf->__VdfgTmp_h19245a98__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_15_tagAlias));
    vlSelf->__VdfgTmp_hb264060a__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_15_tagAlias));
    vlSelf->__VdfgTmp_h9f5c066c__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_15_tagAlias));
    vlSelf->__VdfgTmp_he0a2278c__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_15_tagAlias));
    vlSelf->__VdfgTmp_h2a146286__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_15_tagAlias));
    vlSelf->__VdfgTmp_ha70e87fc__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_15_tagAlias));
    vlSelf->__VdfgTmp_hd4362a75__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_15_tagAlias));
    vlSelf->__VdfgTmp_hfd508099__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_15_tagAlias));
    vlSelf->__VdfgTmp_hc14532bc__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_15_tagAlias));
    vlSelf->__VdfgTmp_h5289ab24__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_15_tagAlias));
    vlSelf->__VdfgTmp_h20424724__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_15_tagAlias));
    vlSelf->__VdfgTmp_h4c7cbaf5__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_15_tagAlias));
    vlSelf->__VdfgTmp_h53db4267__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_15_tagAlias));
    vlSelf->__VdfgTmp_h26fc8f95__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_15_tagAlias));
    vlSelf->__VdfgTmp_h943ba398__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_15_tagAlias));
    vlSelf->__VdfgTmp_h45c4c044__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_15_tagAlias));
    vlSelf->DCache__DOT__miss__DOT___dupBeat_T_12 = 
        ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_beatValid) 
         & ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID)));
    vlSelf->DCache__DOT__miss__DOT___dupBeat_T_13 = 
        ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_beatValid) 
         & ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID)));
    vlSelf->DCache__DOT__miss__DOT___dupBeat_T_14 = 
        ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_beatValid) 
         & ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID)));
    vlSelf->DCache__DOT__miss__DOT___dupBeat_T_15 = 
        ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_beatValid) 
         & ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID)));
    vlSelf->DCache__DOT__miss__DOT___cmoBlocked_T_73 
        = (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_busy) 
            & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_0_addr) 
               == (0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__cmoAddr))) 
           | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_busy) 
               & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_1_addr) 
                  == (0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__cmoAddr))) 
              | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_busy) 
                  & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_2_addr) 
                     == (0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__cmoAddr))) 
                 | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_busy) 
                     & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_3_addr) 
                        == (0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__cmoAddr))) 
                    | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_busy) 
                        & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_4_addr) 
                           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__cmoAddr))) 
                       | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_busy) 
                           & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_5_addr) 
                              == (0xffffffffffc0ULL 
                                  & vlSelf->DCache__DOT__miss__DOT__cmoAddr))) 
                          | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_busy) 
                              & ((0xffffffffffc0ULL 
                                  & vlSelf->DCache__DOT__miss__DOT__entries_6_addr) 
                                 == (0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__miss__DOT__cmoAddr))) 
                             | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_busy) 
                                 & ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__miss__DOT__entries_7_addr) 
                                    == (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__miss__DOT__cmoAddr))) 
                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_busy) 
                                    & ((0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__miss__DOT__entries_8_addr) 
                                       == (0xffffffffffc0ULL 
                                           & vlSelf->DCache__DOT__miss__DOT__cmoAddr))) 
                                   | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_busy) 
                                       & ((0xffffffffffc0ULL 
                                           & vlSelf->DCache__DOT__miss__DOT__entries_9_addr) 
                                          == (0xffffffffffc0ULL 
                                              & vlSelf->DCache__DOT__miss__DOT__cmoAddr))) 
                                      | ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_busy) 
                                         & ((0xffffffffffc0ULL 
                                             & vlSelf->DCache__DOT__miss__DOT__entries_10_addr) 
                                            == (0xffffffffffc0ULL 
                                                & vlSelf->DCache__DOT__miss__DOT__cmoAddr)))))))))))));
    vlSelf->DCache__DOT__data__DOT__dataBank_7_io_r_data_2 
        = vlSelf->DCache__DOT__data__DOT__dataBank_7__DOT__mem_2
        [vlSelf->DCache__DOT__data__DOT__dataBank_7__DOT__mem_2_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__data__DOT__dataBank_0_io_r_data_2 
        = vlSelf->DCache__DOT__data__DOT__dataBank_0__DOT__mem_2
        [vlSelf->DCache__DOT__data__DOT__dataBank_0__DOT__mem_2_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__data__DOT__dataBank_1_io_r_data_2 
        = vlSelf->DCache__DOT__data__DOT__dataBank_1__DOT__mem_2
        [vlSelf->DCache__DOT__data__DOT__dataBank_1__DOT__mem_2_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__data__DOT__dataBank_2_io_r_data_2 
        = vlSelf->DCache__DOT__data__DOT__dataBank_2__DOT__mem_2
        [vlSelf->DCache__DOT__data__DOT__dataBank_2__DOT__mem_2_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__data__DOT__dataBank_3_io_r_data_2 
        = vlSelf->DCache__DOT__data__DOT__dataBank_3__DOT__mem_2
        [vlSelf->DCache__DOT__data__DOT__dataBank_3__DOT__mem_2_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__data__DOT__dataBank_4_io_r_data_2 
        = vlSelf->DCache__DOT__data__DOT__dataBank_4__DOT__mem_2
        [vlSelf->DCache__DOT__data__DOT__dataBank_4__DOT__mem_2_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__data__DOT__dataBank_5_io_r_data_2 
        = vlSelf->DCache__DOT__data__DOT__dataBank_5__DOT__mem_2
        [vlSelf->DCache__DOT__data__DOT__dataBank_5__DOT__mem_2_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__data__DOT__dataBank_6_io_r_data_2 
        = vlSelf->DCache__DOT__data__DOT__dataBank_6__DOT__mem_2
        [vlSelf->DCache__DOT__data__DOT__dataBank_6__DOT__mem_2_MPORT_addr_pipe_0];
    DCache__DOT__wb__DOT___io_block_3_T_81 = (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy) 
                                               & ((0xffffffffffc0ULL 
                                                   & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
                                                  == 
                                                  (0xffffffffffc0ULL 
                                                   & vlSelf->DCache__DOT__miss__DOT__cmoAddr))) 
                                              | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy) 
                                                  & ((0xffffffffffc0ULL 
                                                      & vlSelf->DCache__DOT__wb__DOT__entries_1_addr) 
                                                     == 
                                                     (0xffffffffffc0ULL 
                                                      & vlSelf->DCache__DOT__miss__DOT__cmoAddr))) 
                                                 | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy) 
                                                     & ((0xffffffffffc0ULL 
                                                         & vlSelf->DCache__DOT__wb__DOT__entries_2_addr) 
                                                        == 
                                                        (0xffffffffffc0ULL 
                                                         & vlSelf->DCache__DOT__miss__DOT__cmoAddr))) 
                                                    | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy) 
                                                        & ((0xffffffffffc0ULL 
                                                            & vlSelf->DCache__DOT__wb__DOT__entries_3_addr) 
                                                           == 
                                                           (0xffffffffffc0ULL 
                                                            & vlSelf->DCache__DOT__miss__DOT__cmoAddr))) 
                                                       | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy) 
                                                           & ((0xffffffffffc0ULL 
                                                               & vlSelf->DCache__DOT__wb__DOT__entries_4_addr) 
                                                              == 
                                                              (0xffffffffffc0ULL 
                                                               & vlSelf->DCache__DOT__miss__DOT__cmoAddr))) 
                                                          | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy) 
                                                              & ((0xffffffffffc0ULL 
                                                                  & vlSelf->DCache__DOT__wb__DOT__entries_5_addr) 
                                                                 == 
                                                                 (0xffffffffffc0ULL 
                                                                  & vlSelf->DCache__DOT__miss__DOT__cmoAddr))) 
                                                             | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy) 
                                                                 & ((0xffffffffffc0ULL 
                                                                     & vlSelf->DCache__DOT__wb__DOT__entries_6_addr) 
                                                                    == 
                                                                    (0xffffffffffc0ULL 
                                                                     & vlSelf->DCache__DOT__miss__DOT__cmoAddr))) 
                                                                | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy) 
                                                                    & ((0xffffffffffc0ULL 
                                                                        & vlSelf->DCache__DOT__wb__DOT__entries_7_addr) 
                                                                       == 
                                                                       (0xffffffffffc0ULL 
                                                                        & vlSelf->DCache__DOT__miss__DOT__cmoAddr))) 
                                                                   | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy) 
                                                                       & ((0xffffffffffc0ULL 
                                                                           & vlSelf->DCache__DOT__wb__DOT__entries_8_addr) 
                                                                          == 
                                                                          (0xffffffffffc0ULL 
                                                                           & vlSelf->DCache__DOT__miss__DOT__cmoAddr))) 
                                                                      | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy) 
                                                                          & ((0xffffffffffc0ULL 
                                                                              & vlSelf->DCache__DOT__wb__DOT__entries_9_addr) 
                                                                             == 
                                                                             (0xffffffffffc0ULL 
                                                                              & vlSelf->DCache__DOT__miss__DOT__cmoAddr))) 
                                                                         | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy) 
                                                                            & ((0xffffffffffc0ULL 
                                                                                & vlSelf->DCache__DOT__wb__DOT__entries_10_addr) 
                                                                               == 
                                                                               (0xffffffffffc0ULL 
                                                                                & vlSelf->DCache__DOT__miss__DOT__cmoAddr)))))))))))));
    vlSelf->DCache__DOT__miss__DOT___dupBeat_T_6 = 
        ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_beatValid) 
         & ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID)));
    vlSelf->DCache__DOT__miss__DOT___dupBeat_T_7 = 
        ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_beatValid) 
         & ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID)));
    vlSelf->DCache__DOT__miss__DOT___dupBeat_T_8 = 
        ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_beatValid) 
         & ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID)));
    vlSelf->DCache__DOT__miss__DOT___dupBeat_T_9 = 
        ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_beatValid) 
         & ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID)));
    vlSelf->DCache__DOT__miss__DOT___dupBeat_T_10 = 
        ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_beatValid) 
         & ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID)));
    vlSelf->DCache__DOT__miss__DOT___dupBeat_T_11 = 
        ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_beatValid) 
         & ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID)));
    vlSelf->DCache__DOT__miss__DOT___dupBeat_T = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_beatValid) 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelf->io_l2_rxDat_bits_dataID)));
    vlSelf->DCache__DOT__miss__DOT___dupBeat_T_1 = 
        ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_beatValid) 
         & ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID)));
    vlSelf->DCache__DOT__miss__DOT___dupBeat_T_2 = 
        ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_beatValid) 
         & ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID)));
    vlSelf->DCache__DOT__miss__DOT___dupBeat_T_3 = 
        ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_beatValid) 
         & ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID)));
    if ((0xfU == (IData)(vlSelf->io_forwardMshr_id))) {
        DCache__DOT__miss__DOT___GEN_4996[0U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[0U];
        DCache__DOT__miss__DOT___GEN_4996[1U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[1U];
        DCache__DOT__miss__DOT___GEN_4996[2U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[2U];
        DCache__DOT__miss__DOT___GEN_4996[3U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[3U];
        DCache__DOT__miss__DOT___GEN_4996[4U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[4U];
        DCache__DOT__miss__DOT___GEN_4996[5U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[5U];
        DCache__DOT__miss__DOT___GEN_4996[6U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[6U];
        DCache__DOT__miss__DOT___GEN_4996[7U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[7U];
        DCache__DOT__miss__DOT___GEN_4996[8U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[8U];
        DCache__DOT__miss__DOT___GEN_4996[9U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[9U];
        DCache__DOT__miss__DOT___GEN_4996[0xaU] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[0xaU];
        DCache__DOT__miss__DOT___GEN_4996[0xbU] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[0xbU];
        DCache__DOT__miss__DOT___GEN_4996[0xcU] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[0xcU];
        DCache__DOT__miss__DOT___GEN_4996[0xdU] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[0xdU];
        DCache__DOT__miss__DOT___GEN_4996[0xeU] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[0xeU];
        DCache__DOT__miss__DOT___GEN_4996[0xfU] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[0xfU];
        DCache__DOT__miss__DOT___GEN_4980 = vlSelf->DCache__DOT__miss__DOT__entries_15_beatValid;
    } else if ((0xeU == (IData)(vlSelf->io_forwardMshr_id))) {
        DCache__DOT__miss__DOT___GEN_4996[0U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[0U];
        DCache__DOT__miss__DOT___GEN_4996[1U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[1U];
        DCache__DOT__miss__DOT___GEN_4996[2U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[2U];
        DCache__DOT__miss__DOT___GEN_4996[3U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[3U];
        DCache__DOT__miss__DOT___GEN_4996[4U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[4U];
        DCache__DOT__miss__DOT___GEN_4996[5U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[5U];
        DCache__DOT__miss__DOT___GEN_4996[6U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[6U];
        DCache__DOT__miss__DOT___GEN_4996[7U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[7U];
        DCache__DOT__miss__DOT___GEN_4996[8U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[8U];
        DCache__DOT__miss__DOT___GEN_4996[9U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[9U];
        DCache__DOT__miss__DOT___GEN_4996[0xaU] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[0xaU];
        DCache__DOT__miss__DOT___GEN_4996[0xbU] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[0xbU];
        DCache__DOT__miss__DOT___GEN_4996[0xcU] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[0xcU];
        DCache__DOT__miss__DOT___GEN_4996[0xdU] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[0xdU];
        DCache__DOT__miss__DOT___GEN_4996[0xeU] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[0xeU];
        DCache__DOT__miss__DOT___GEN_4996[0xfU] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[0xfU];
        DCache__DOT__miss__DOT___GEN_4980 = vlSelf->DCache__DOT__miss__DOT__entries_14_beatValid;
    } else if ((0xdU == (IData)(vlSelf->io_forwardMshr_id))) {
        DCache__DOT__miss__DOT___GEN_4996[0U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[0U];
        DCache__DOT__miss__DOT___GEN_4996[1U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[1U];
        DCache__DOT__miss__DOT___GEN_4996[2U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[2U];
        DCache__DOT__miss__DOT___GEN_4996[3U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[3U];
        DCache__DOT__miss__DOT___GEN_4996[4U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[4U];
        DCache__DOT__miss__DOT___GEN_4996[5U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[5U];
        DCache__DOT__miss__DOT___GEN_4996[6U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[6U];
        DCache__DOT__miss__DOT___GEN_4996[7U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[7U];
        DCache__DOT__miss__DOT___GEN_4996[8U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[8U];
        DCache__DOT__miss__DOT___GEN_4996[9U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[9U];
        DCache__DOT__miss__DOT___GEN_4996[0xaU] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[0xaU];
        DCache__DOT__miss__DOT___GEN_4996[0xbU] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[0xbU];
        DCache__DOT__miss__DOT___GEN_4996[0xcU] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[0xcU];
        DCache__DOT__miss__DOT___GEN_4996[0xdU] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[0xdU];
        DCache__DOT__miss__DOT___GEN_4996[0xeU] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[0xeU];
        DCache__DOT__miss__DOT___GEN_4996[0xfU] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[0xfU];
        DCache__DOT__miss__DOT___GEN_4980 = vlSelf->DCache__DOT__miss__DOT__entries_13_beatValid;
    } else if ((0xcU == (IData)(vlSelf->io_forwardMshr_id))) {
        DCache__DOT__miss__DOT___GEN_4996[0U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[0U];
        DCache__DOT__miss__DOT___GEN_4996[1U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[1U];
        DCache__DOT__miss__DOT___GEN_4996[2U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[2U];
        DCache__DOT__miss__DOT___GEN_4996[3U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[3U];
        DCache__DOT__miss__DOT___GEN_4996[4U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[4U];
        DCache__DOT__miss__DOT___GEN_4996[5U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[5U];
        DCache__DOT__miss__DOT___GEN_4996[6U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[6U];
        DCache__DOT__miss__DOT___GEN_4996[7U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[7U];
        DCache__DOT__miss__DOT___GEN_4996[8U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[8U];
        DCache__DOT__miss__DOT___GEN_4996[9U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[9U];
        DCache__DOT__miss__DOT___GEN_4996[0xaU] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[0xaU];
        DCache__DOT__miss__DOT___GEN_4996[0xbU] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[0xbU];
        DCache__DOT__miss__DOT___GEN_4996[0xcU] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[0xcU];
        DCache__DOT__miss__DOT___GEN_4996[0xdU] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[0xdU];
        DCache__DOT__miss__DOT___GEN_4996[0xeU] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[0xeU];
        DCache__DOT__miss__DOT___GEN_4996[0xfU] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[0xfU];
        DCache__DOT__miss__DOT___GEN_4980 = vlSelf->DCache__DOT__miss__DOT__entries_12_beatValid;
    } else if ((0xbU == (IData)(vlSelf->io_forwardMshr_id))) {
        DCache__DOT__miss__DOT___GEN_4996[0U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[0U];
        DCache__DOT__miss__DOT___GEN_4996[1U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[1U];
        DCache__DOT__miss__DOT___GEN_4996[2U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[2U];
        DCache__DOT__miss__DOT___GEN_4996[3U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[3U];
        DCache__DOT__miss__DOT___GEN_4996[4U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[4U];
        DCache__DOT__miss__DOT___GEN_4996[5U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[5U];
        DCache__DOT__miss__DOT___GEN_4996[6U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[6U];
        DCache__DOT__miss__DOT___GEN_4996[7U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[7U];
        DCache__DOT__miss__DOT___GEN_4996[8U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[8U];
        DCache__DOT__miss__DOT___GEN_4996[9U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[9U];
        DCache__DOT__miss__DOT___GEN_4996[0xaU] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[0xaU];
        DCache__DOT__miss__DOT___GEN_4996[0xbU] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[0xbU];
        DCache__DOT__miss__DOT___GEN_4996[0xcU] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[0xcU];
        DCache__DOT__miss__DOT___GEN_4996[0xdU] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[0xdU];
        DCache__DOT__miss__DOT___GEN_4996[0xeU] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[0xeU];
        DCache__DOT__miss__DOT___GEN_4996[0xfU] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[0xfU];
        DCache__DOT__miss__DOT___GEN_4980 = vlSelf->DCache__DOT__miss__DOT__entries_11_beatValid;
    } else if ((0xaU == (IData)(vlSelf->io_forwardMshr_id))) {
        DCache__DOT__miss__DOT___GEN_4996[0U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[0U];
        DCache__DOT__miss__DOT___GEN_4996[1U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[1U];
        DCache__DOT__miss__DOT___GEN_4996[2U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[2U];
        DCache__DOT__miss__DOT___GEN_4996[3U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[3U];
        DCache__DOT__miss__DOT___GEN_4996[4U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[4U];
        DCache__DOT__miss__DOT___GEN_4996[5U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[5U];
        DCache__DOT__miss__DOT___GEN_4996[6U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[6U];
        DCache__DOT__miss__DOT___GEN_4996[7U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[7U];
        DCache__DOT__miss__DOT___GEN_4996[8U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[8U];
        DCache__DOT__miss__DOT___GEN_4996[9U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[9U];
        DCache__DOT__miss__DOT___GEN_4996[0xaU] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[0xaU];
        DCache__DOT__miss__DOT___GEN_4996[0xbU] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[0xbU];
        DCache__DOT__miss__DOT___GEN_4996[0xcU] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[0xcU];
        DCache__DOT__miss__DOT___GEN_4996[0xdU] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[0xdU];
        DCache__DOT__miss__DOT___GEN_4996[0xeU] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[0xeU];
        DCache__DOT__miss__DOT___GEN_4996[0xfU] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[0xfU];
        DCache__DOT__miss__DOT___GEN_4980 = vlSelf->DCache__DOT__miss__DOT__entries_10_beatValid;
    } else if ((9U == (IData)(vlSelf->io_forwardMshr_id))) {
        DCache__DOT__miss__DOT___GEN_4996[0U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[0U];
        DCache__DOT__miss__DOT___GEN_4996[1U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[1U];
        DCache__DOT__miss__DOT___GEN_4996[2U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[2U];
        DCache__DOT__miss__DOT___GEN_4996[3U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[3U];
        DCache__DOT__miss__DOT___GEN_4996[4U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[4U];
        DCache__DOT__miss__DOT___GEN_4996[5U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[5U];
        DCache__DOT__miss__DOT___GEN_4996[6U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[6U];
        DCache__DOT__miss__DOT___GEN_4996[7U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[7U];
        DCache__DOT__miss__DOT___GEN_4996[8U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[8U];
        DCache__DOT__miss__DOT___GEN_4996[9U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[9U];
        DCache__DOT__miss__DOT___GEN_4996[0xaU] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[0xaU];
        DCache__DOT__miss__DOT___GEN_4996[0xbU] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[0xbU];
        DCache__DOT__miss__DOT___GEN_4996[0xcU] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[0xcU];
        DCache__DOT__miss__DOT___GEN_4996[0xdU] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[0xdU];
        DCache__DOT__miss__DOT___GEN_4996[0xeU] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[0xeU];
        DCache__DOT__miss__DOT___GEN_4996[0xfU] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[0xfU];
        DCache__DOT__miss__DOT___GEN_4980 = vlSelf->DCache__DOT__miss__DOT__entries_9_beatValid;
    } else if ((8U == (IData)(vlSelf->io_forwardMshr_id))) {
        DCache__DOT__miss__DOT___GEN_4996[0U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[0U];
        DCache__DOT__miss__DOT___GEN_4996[1U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[1U];
        DCache__DOT__miss__DOT___GEN_4996[2U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[2U];
        DCache__DOT__miss__DOT___GEN_4996[3U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[3U];
        DCache__DOT__miss__DOT___GEN_4996[4U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[4U];
        DCache__DOT__miss__DOT___GEN_4996[5U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[5U];
        DCache__DOT__miss__DOT___GEN_4996[6U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[6U];
        DCache__DOT__miss__DOT___GEN_4996[7U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[7U];
        DCache__DOT__miss__DOT___GEN_4996[8U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[8U];
        DCache__DOT__miss__DOT___GEN_4996[9U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[9U];
        DCache__DOT__miss__DOT___GEN_4996[0xaU] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[0xaU];
        DCache__DOT__miss__DOT___GEN_4996[0xbU] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[0xbU];
        DCache__DOT__miss__DOT___GEN_4996[0xcU] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[0xcU];
        DCache__DOT__miss__DOT___GEN_4996[0xdU] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[0xdU];
        DCache__DOT__miss__DOT___GEN_4996[0xeU] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[0xeU];
        DCache__DOT__miss__DOT___GEN_4996[0xfU] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[0xfU];
        DCache__DOT__miss__DOT___GEN_4980 = vlSelf->DCache__DOT__miss__DOT__entries_8_beatValid;
    } else if ((7U == (IData)(vlSelf->io_forwardMshr_id))) {
        DCache__DOT__miss__DOT___GEN_4996[0U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[0U];
        DCache__DOT__miss__DOT___GEN_4996[1U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[1U];
        DCache__DOT__miss__DOT___GEN_4996[2U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[2U];
        DCache__DOT__miss__DOT___GEN_4996[3U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[3U];
        DCache__DOT__miss__DOT___GEN_4996[4U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[4U];
        DCache__DOT__miss__DOT___GEN_4996[5U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[5U];
        DCache__DOT__miss__DOT___GEN_4996[6U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[6U];
        DCache__DOT__miss__DOT___GEN_4996[7U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[7U];
        DCache__DOT__miss__DOT___GEN_4996[8U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[8U];
        DCache__DOT__miss__DOT___GEN_4996[9U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[9U];
        DCache__DOT__miss__DOT___GEN_4996[0xaU] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[0xaU];
        DCache__DOT__miss__DOT___GEN_4996[0xbU] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[0xbU];
        DCache__DOT__miss__DOT___GEN_4996[0xcU] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[0xcU];
        DCache__DOT__miss__DOT___GEN_4996[0xdU] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[0xdU];
        DCache__DOT__miss__DOT___GEN_4996[0xeU] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[0xeU];
        DCache__DOT__miss__DOT___GEN_4996[0xfU] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[0xfU];
        DCache__DOT__miss__DOT___GEN_4980 = vlSelf->DCache__DOT__miss__DOT__entries_7_beatValid;
    } else if ((6U == (IData)(vlSelf->io_forwardMshr_id))) {
        DCache__DOT__miss__DOT___GEN_4996[0U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[0U];
        DCache__DOT__miss__DOT___GEN_4996[1U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[1U];
        DCache__DOT__miss__DOT___GEN_4996[2U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[2U];
        DCache__DOT__miss__DOT___GEN_4996[3U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[3U];
        DCache__DOT__miss__DOT___GEN_4996[4U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[4U];
        DCache__DOT__miss__DOT___GEN_4996[5U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[5U];
        DCache__DOT__miss__DOT___GEN_4996[6U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[6U];
        DCache__DOT__miss__DOT___GEN_4996[7U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[7U];
        DCache__DOT__miss__DOT___GEN_4996[8U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[8U];
        DCache__DOT__miss__DOT___GEN_4996[9U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[9U];
        DCache__DOT__miss__DOT___GEN_4996[0xaU] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[0xaU];
        DCache__DOT__miss__DOT___GEN_4996[0xbU] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[0xbU];
        DCache__DOT__miss__DOT___GEN_4996[0xcU] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[0xcU];
        DCache__DOT__miss__DOT___GEN_4996[0xdU] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[0xdU];
        DCache__DOT__miss__DOT___GEN_4996[0xeU] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[0xeU];
        DCache__DOT__miss__DOT___GEN_4996[0xfU] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[0xfU];
        DCache__DOT__miss__DOT___GEN_4980 = vlSelf->DCache__DOT__miss__DOT__entries_6_beatValid;
    } else if ((5U == (IData)(vlSelf->io_forwardMshr_id))) {
        DCache__DOT__miss__DOT___GEN_4996[0U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[0U];
        DCache__DOT__miss__DOT___GEN_4996[1U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[1U];
        DCache__DOT__miss__DOT___GEN_4996[2U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[2U];
        DCache__DOT__miss__DOT___GEN_4996[3U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[3U];
        DCache__DOT__miss__DOT___GEN_4996[4U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[4U];
        DCache__DOT__miss__DOT___GEN_4996[5U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[5U];
        DCache__DOT__miss__DOT___GEN_4996[6U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[6U];
        DCache__DOT__miss__DOT___GEN_4996[7U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[7U];
        DCache__DOT__miss__DOT___GEN_4996[8U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[8U];
        DCache__DOT__miss__DOT___GEN_4996[9U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[9U];
        DCache__DOT__miss__DOT___GEN_4996[0xaU] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[0xaU];
        DCache__DOT__miss__DOT___GEN_4996[0xbU] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[0xbU];
        DCache__DOT__miss__DOT___GEN_4996[0xcU] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[0xcU];
        DCache__DOT__miss__DOT___GEN_4996[0xdU] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[0xdU];
        DCache__DOT__miss__DOT___GEN_4996[0xeU] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[0xeU];
        DCache__DOT__miss__DOT___GEN_4996[0xfU] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[0xfU];
        DCache__DOT__miss__DOT___GEN_4980 = vlSelf->DCache__DOT__miss__DOT__entries_5_beatValid;
    } else if ((4U == (IData)(vlSelf->io_forwardMshr_id))) {
        DCache__DOT__miss__DOT___GEN_4996[0U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[0U];
        DCache__DOT__miss__DOT___GEN_4996[1U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[1U];
        DCache__DOT__miss__DOT___GEN_4996[2U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[2U];
        DCache__DOT__miss__DOT___GEN_4996[3U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[3U];
        DCache__DOT__miss__DOT___GEN_4996[4U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[4U];
        DCache__DOT__miss__DOT___GEN_4996[5U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[5U];
        DCache__DOT__miss__DOT___GEN_4996[6U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[6U];
        DCache__DOT__miss__DOT___GEN_4996[7U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[7U];
        DCache__DOT__miss__DOT___GEN_4996[8U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[8U];
        DCache__DOT__miss__DOT___GEN_4996[9U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[9U];
        DCache__DOT__miss__DOT___GEN_4996[0xaU] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[0xaU];
        DCache__DOT__miss__DOT___GEN_4996[0xbU] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[0xbU];
        DCache__DOT__miss__DOT___GEN_4996[0xcU] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[0xcU];
        DCache__DOT__miss__DOT___GEN_4996[0xdU] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[0xdU];
        DCache__DOT__miss__DOT___GEN_4996[0xeU] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[0xeU];
        DCache__DOT__miss__DOT___GEN_4996[0xfU] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[0xfU];
        DCache__DOT__miss__DOT___GEN_4980 = vlSelf->DCache__DOT__miss__DOT__entries_4_beatValid;
    } else if ((3U == (IData)(vlSelf->io_forwardMshr_id))) {
        DCache__DOT__miss__DOT___GEN_4996[0U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[0U];
        DCache__DOT__miss__DOT___GEN_4996[1U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[1U];
        DCache__DOT__miss__DOT___GEN_4996[2U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[2U];
        DCache__DOT__miss__DOT___GEN_4996[3U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[3U];
        DCache__DOT__miss__DOT___GEN_4996[4U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[4U];
        DCache__DOT__miss__DOT___GEN_4996[5U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[5U];
        DCache__DOT__miss__DOT___GEN_4996[6U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[6U];
        DCache__DOT__miss__DOT___GEN_4996[7U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[7U];
        DCache__DOT__miss__DOT___GEN_4996[8U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[8U];
        DCache__DOT__miss__DOT___GEN_4996[9U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[9U];
        DCache__DOT__miss__DOT___GEN_4996[0xaU] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[0xaU];
        DCache__DOT__miss__DOT___GEN_4996[0xbU] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[0xbU];
        DCache__DOT__miss__DOT___GEN_4996[0xcU] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[0xcU];
        DCache__DOT__miss__DOT___GEN_4996[0xdU] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[0xdU];
        DCache__DOT__miss__DOT___GEN_4996[0xeU] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[0xeU];
        DCache__DOT__miss__DOT___GEN_4996[0xfU] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[0xfU];
        DCache__DOT__miss__DOT___GEN_4980 = vlSelf->DCache__DOT__miss__DOT__entries_3_beatValid;
    } else if ((2U == (IData)(vlSelf->io_forwardMshr_id))) {
        DCache__DOT__miss__DOT___GEN_4996[0U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[0U];
        DCache__DOT__miss__DOT___GEN_4996[1U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[1U];
        DCache__DOT__miss__DOT___GEN_4996[2U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[2U];
        DCache__DOT__miss__DOT___GEN_4996[3U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[3U];
        DCache__DOT__miss__DOT___GEN_4996[4U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[4U];
        DCache__DOT__miss__DOT___GEN_4996[5U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[5U];
        DCache__DOT__miss__DOT___GEN_4996[6U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[6U];
        DCache__DOT__miss__DOT___GEN_4996[7U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[7U];
        DCache__DOT__miss__DOT___GEN_4996[8U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[8U];
        DCache__DOT__miss__DOT___GEN_4996[9U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[9U];
        DCache__DOT__miss__DOT___GEN_4996[0xaU] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[0xaU];
        DCache__DOT__miss__DOT___GEN_4996[0xbU] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[0xbU];
        DCache__DOT__miss__DOT___GEN_4996[0xcU] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[0xcU];
        DCache__DOT__miss__DOT___GEN_4996[0xdU] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[0xdU];
        DCache__DOT__miss__DOT___GEN_4996[0xeU] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[0xeU];
        DCache__DOT__miss__DOT___GEN_4996[0xfU] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[0xfU];
        DCache__DOT__miss__DOT___GEN_4980 = vlSelf->DCache__DOT__miss__DOT__entries_2_beatValid;
    } else if ((1U == (IData)(vlSelf->io_forwardMshr_id))) {
        DCache__DOT__miss__DOT___GEN_4996[0U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[0U];
        DCache__DOT__miss__DOT___GEN_4996[1U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[1U];
        DCache__DOT__miss__DOT___GEN_4996[2U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[2U];
        DCache__DOT__miss__DOT___GEN_4996[3U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[3U];
        DCache__DOT__miss__DOT___GEN_4996[4U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[4U];
        DCache__DOT__miss__DOT___GEN_4996[5U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[5U];
        DCache__DOT__miss__DOT___GEN_4996[6U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[6U];
        DCache__DOT__miss__DOT___GEN_4996[7U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[7U];
        DCache__DOT__miss__DOT___GEN_4996[8U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[8U];
        DCache__DOT__miss__DOT___GEN_4996[9U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[9U];
        DCache__DOT__miss__DOT___GEN_4996[0xaU] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[0xaU];
        DCache__DOT__miss__DOT___GEN_4996[0xbU] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[0xbU];
        DCache__DOT__miss__DOT___GEN_4996[0xcU] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[0xcU];
        DCache__DOT__miss__DOT___GEN_4996[0xdU] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[0xdU];
        DCache__DOT__miss__DOT___GEN_4996[0xeU] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[0xeU];
        DCache__DOT__miss__DOT___GEN_4996[0xfU] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[0xfU];
        DCache__DOT__miss__DOT___GEN_4980 = vlSelf->DCache__DOT__miss__DOT__entries_1_beatValid;
    } else {
        DCache__DOT__miss__DOT___GEN_4996[0U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[0U];
        DCache__DOT__miss__DOT___GEN_4996[1U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[1U];
        DCache__DOT__miss__DOT___GEN_4996[2U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[2U];
        DCache__DOT__miss__DOT___GEN_4996[3U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[3U];
        DCache__DOT__miss__DOT___GEN_4996[4U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[4U];
        DCache__DOT__miss__DOT___GEN_4996[5U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[5U];
        DCache__DOT__miss__DOT___GEN_4996[6U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[6U];
        DCache__DOT__miss__DOT___GEN_4996[7U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[7U];
        DCache__DOT__miss__DOT___GEN_4996[8U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[8U];
        DCache__DOT__miss__DOT___GEN_4996[9U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[9U];
        DCache__DOT__miss__DOT___GEN_4996[0xaU] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[0xaU];
        DCache__DOT__miss__DOT___GEN_4996[0xbU] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[0xbU];
        DCache__DOT__miss__DOT___GEN_4996[0xcU] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[0xcU];
        DCache__DOT__miss__DOT___GEN_4996[0xdU] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[0xdU];
        DCache__DOT__miss__DOT___GEN_4996[0xeU] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[0xeU];
        DCache__DOT__miss__DOT___GEN_4996[0xfU] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[0xfU];
        DCache__DOT__miss__DOT___GEN_4980 = vlSelf->DCache__DOT__miss__DOT__entries_0_beatValid;
    }
    vlSelf->DCache__DOT__miss__DOT___dupBeat_T_4 = 
        ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_beatValid) 
         & ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID)));
    vlSelf->DCache__DOT__miss__DOT___dupBeat_T_5 = 
        ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_beatValid) 
         & ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID)));
    vlSelf->DCache__DOT__pipe__DOT__amoalu__DOT__logic_xor 
        = ((9U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd)) 
           | (0xaU == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd)));
    vlSelf->DCache__DOT__data__DOT__dataBank_7_io_r_data_0 
        = vlSelf->DCache__DOT__data__DOT__dataBank_7__DOT__mem_0
        [vlSelf->DCache__DOT__data__DOT__dataBank_7__DOT__mem_0_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__data__DOT__dataBank_7_io_r_data_1 
        = vlSelf->DCache__DOT__data__DOT__dataBank_7__DOT__mem_1
        [vlSelf->DCache__DOT__data__DOT__dataBank_7__DOT__mem_1_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__data__DOT__dataBank_0_io_r_data_0 
        = vlSelf->DCache__DOT__data__DOT__dataBank_0__DOT__mem_0
        [vlSelf->DCache__DOT__data__DOT__dataBank_0__DOT__mem_0_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__data__DOT__dataBank_0_io_r_data_1 
        = vlSelf->DCache__DOT__data__DOT__dataBank_0__DOT__mem_1
        [vlSelf->DCache__DOT__data__DOT__dataBank_0__DOT__mem_1_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__data__DOT__dataBank_1_io_r_data_0 
        = vlSelf->DCache__DOT__data__DOT__dataBank_1__DOT__mem_0
        [vlSelf->DCache__DOT__data__DOT__dataBank_1__DOT__mem_0_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__data__DOT__dataBank_1_io_r_data_1 
        = vlSelf->DCache__DOT__data__DOT__dataBank_1__DOT__mem_1
        [vlSelf->DCache__DOT__data__DOT__dataBank_1__DOT__mem_1_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__data__DOT__dataBank_2_io_r_data_0 
        = vlSelf->DCache__DOT__data__DOT__dataBank_2__DOT__mem_0
        [vlSelf->DCache__DOT__data__DOT__dataBank_2__DOT__mem_0_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__data__DOT__dataBank_2_io_r_data_1 
        = vlSelf->DCache__DOT__data__DOT__dataBank_2__DOT__mem_1
        [vlSelf->DCache__DOT__data__DOT__dataBank_2__DOT__mem_1_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__data__DOT__dataBank_3_io_r_data_0 
        = vlSelf->DCache__DOT__data__DOT__dataBank_3__DOT__mem_0
        [vlSelf->DCache__DOT__data__DOT__dataBank_3__DOT__mem_0_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__data__DOT__dataBank_3_io_r_data_1 
        = vlSelf->DCache__DOT__data__DOT__dataBank_3__DOT__mem_1
        [vlSelf->DCache__DOT__data__DOT__dataBank_3__DOT__mem_1_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__data__DOT__dataBank_4_io_r_data_0 
        = vlSelf->DCache__DOT__data__DOT__dataBank_4__DOT__mem_0
        [vlSelf->DCache__DOT__data__DOT__dataBank_4__DOT__mem_0_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__data__DOT__dataBank_4_io_r_data_1 
        = vlSelf->DCache__DOT__data__DOT__dataBank_4__DOT__mem_1
        [vlSelf->DCache__DOT__data__DOT__dataBank_4__DOT__mem_1_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__data__DOT__dataBank_5_io_r_data_0 
        = vlSelf->DCache__DOT__data__DOT__dataBank_5__DOT__mem_0
        [vlSelf->DCache__DOT__data__DOT__dataBank_5__DOT__mem_0_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__data__DOT__dataBank_5_io_r_data_1 
        = vlSelf->DCache__DOT__data__DOT__dataBank_5__DOT__mem_1
        [vlSelf->DCache__DOT__data__DOT__dataBank_5__DOT__mem_1_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__data__DOT__dataBank_6_io_r_data_0 
        = vlSelf->DCache__DOT__data__DOT__dataBank_6__DOT__mem_0
        [vlSelf->DCache__DOT__data__DOT__dataBank_6__DOT__mem_0_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__data__DOT__dataBank_6_io_r_data_1 
        = vlSelf->DCache__DOT__data__DOT__dataBank_6__DOT__mem_1
        [vlSelf->DCache__DOT__data__DOT__dataBank_6__DOT__mem_1_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_7 = 
        ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_0_addr) 
         == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_0_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_18 = 
        ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_0_addr) 
         == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_1_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_197 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_1_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_0_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_208 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_1_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_1_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_387 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_2_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_0_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_398 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_2_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_1_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_577 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_3_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_0_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_588 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_3_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_1_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_767 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_4_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_0_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_778 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_4_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_1_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_957 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_5_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_0_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_968 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_5_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_1_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1147 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_6_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_0_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1158 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_6_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_1_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1337 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_7_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_0_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1348 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_7_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_1_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1527 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_8_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_0_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1538 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_8_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_1_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1717 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_9_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_0_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1728 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_9_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_1_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1907 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_10_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_0_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1918 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_10_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_1_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2097 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_11_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_0_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2108 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_11_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_1_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2287 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_12_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_0_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2298 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_12_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_1_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2477 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_13_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_0_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2488 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_13_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_1_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2667 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_14_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_0_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2678 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_14_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_1_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2857 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_15_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_0_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2868 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_15_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_1_addr));
    vlSelf->__VdfgTmp_hb99d0ec6__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_0_tagAlias));
    vlSelf->__VdfgTmp_h6c4dda41__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_1_tagAlias));
    vlSelf->__VdfgTmp_h13fd2bb4__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_0_tagAlias));
    vlSelf->__VdfgTmp_hb8cd8733__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_1_tagAlias));
    vlSelf->__VdfgTmp_h38e53a06__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_0_tagAlias));
    vlSelf->__VdfgTmp_h84368685__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_1_tagAlias));
    vlSelf->__VdfgTmp_h8fc573e6__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_0_tagAlias));
    vlSelf->__VdfgTmp_hfb15a767__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_1_tagAlias));
    vlSelf->__VdfgTmp_h8bb336e8__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_0_tagAlias));
    vlSelf->__VdfgTmp_h2482e269__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_1_tagAlias));
    vlSelf->__VdfgTmp_h18b77a5a__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_0_tagAlias));
    vlSelf->__VdfgTmp_hac6706c5__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_1_tagAlias));
    vlSelf->__VdfgTmp_h74df05db__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_0_tagAlias));
    vlSelf->__VdfgTmp_hc1afa95a__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_1_tagAlias));
    vlSelf->__VdfgTmp_h1ef9bd33__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_0_tagAlias));
    vlSelf->__VdfgTmp_hca2901b2__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_1_tagAlias));
    vlSelf->__VdfgTmp_ha62206e2__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_0_tagAlias));
    vlSelf->__VdfgTmp_hdaf3b363__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_1_tagAlias));
    vlSelf->__VdfgTmp_hf322ffde__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_0_tagAlias));
    vlSelf->__VdfgTmp_hac732a5f__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_1_tagAlias));
    vlSelf->__VdfgTmp_hc1ed2b8a__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_0_tagAlias));
    vlSelf->__VdfgTmp_h16bcc60b__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_1_tagAlias));
    vlSelf->__VdfgTmp_h2fd58e13__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_0_tagAlias));
    vlSelf->__VdfgTmp_h52e53d9c__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_1_tagAlias));
    vlSelf->__VdfgTmp_hb3409e01__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_0_tagAlias));
    vlSelf->__VdfgTmp_h5c70c28e__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_1_tagAlias));
    vlSelf->__VdfgTmp_h8667ba33__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_0_tagAlias));
    vlSelf->__VdfgTmp_h2b170ebc__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_1_tagAlias));
    vlSelf->__VdfgTmp_h74927c72__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_0_tagAlias));
    vlSelf->__VdfgTmp_ha1c220f1__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_1_tagAlias));
    vlSelf->__VdfgTmp_h245dabaa__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_0_tagAlias));
    vlSelf->__VdfgTmp_h736e7f2b__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_1_tagAlias));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_29 = 
        ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_0_addr) 
         == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_2_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_40 = 
        ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_0_addr) 
         == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_3_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_51 = 
        ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_0_addr) 
         == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_4_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_62 = 
        ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_0_addr) 
         == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_5_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_73 = 
        ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_0_addr) 
         == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_6_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_84 = 
        ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_0_addr) 
         == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_7_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_95 = 
        ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_0_addr) 
         == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_8_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_106 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_0_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_9_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_117 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_0_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_10_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_128 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_0_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_11_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_139 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_0_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_12_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_150 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_0_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_13_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_161 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_0_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_14_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_219 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_1_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_2_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_230 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_1_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_3_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_241 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_1_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_4_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_252 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_1_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_5_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_263 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_1_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_6_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_274 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_1_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_7_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_285 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_1_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_8_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_296 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_1_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_9_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_307 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_1_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_10_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_318 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_1_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_11_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_329 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_1_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_12_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_340 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_1_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_13_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_351 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_1_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_14_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_409 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_2_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_2_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_420 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_2_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_3_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_431 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_2_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_4_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_442 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_2_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_5_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_453 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_2_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_6_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_464 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_2_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_7_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_475 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_2_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_8_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_486 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_2_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_9_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_497 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_2_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_10_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_508 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_2_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_11_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_519 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_2_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_12_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_530 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_2_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_13_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_541 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_2_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_14_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_599 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_3_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_2_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_610 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_3_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_3_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_621 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_3_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_4_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_632 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_3_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_5_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_643 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_3_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_6_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_654 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_3_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_7_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_665 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_3_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_8_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_676 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_3_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_9_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_687 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_3_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_10_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_698 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_3_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_11_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_709 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_3_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_12_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_720 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_3_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_13_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_731 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_3_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_14_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_789 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_4_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_2_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_800 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_4_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_3_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_811 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_4_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_4_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_822 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_4_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_5_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_833 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_4_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_6_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_844 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_4_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_7_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_855 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_4_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_8_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_866 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_4_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_9_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_877 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_4_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_10_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_888 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_4_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_11_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_899 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_4_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_12_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_910 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_4_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_13_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_921 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_4_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_14_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_979 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_5_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_2_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_990 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_5_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_3_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1001 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_5_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_4_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1012 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_5_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_5_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1023 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_5_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_6_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1034 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_5_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_7_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1045 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_5_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_8_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1056 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_5_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_9_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1067 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_5_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_10_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1078 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_5_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_11_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1089 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_5_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_12_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1100 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_5_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_13_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1111 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_5_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_14_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1169 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_6_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_2_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1180 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_6_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_3_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1191 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_6_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_4_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1202 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_6_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_5_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1213 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_6_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_6_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1224 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_6_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_7_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1235 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_6_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_8_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1246 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_6_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_9_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1257 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_6_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_10_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1268 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_6_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_11_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1279 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_6_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_12_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1290 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_6_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_13_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1301 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_6_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_14_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1359 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_7_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_2_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1370 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_7_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_3_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1381 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_7_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_4_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1392 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_7_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_5_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1403 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_7_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_6_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1414 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_7_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_7_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1425 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_7_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_8_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1436 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_7_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_9_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1447 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_7_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_10_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1458 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_7_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_11_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1469 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_7_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_12_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1480 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_7_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_13_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1491 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_7_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_14_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1549 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_8_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_2_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1560 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_8_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_3_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1571 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_8_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_4_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1582 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_8_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_5_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1593 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_8_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_6_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1604 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_8_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_7_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1615 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_8_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_8_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1626 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_8_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_9_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1637 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_8_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_10_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1648 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_8_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_11_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1659 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_8_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_12_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1670 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_8_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_13_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1681 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_8_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_14_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1739 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_9_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_2_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1750 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_9_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_3_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1761 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_9_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_4_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1772 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_9_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_5_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1783 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_9_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_6_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1794 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_9_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_7_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1805 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_9_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_8_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1816 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_9_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_9_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1827 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_9_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_10_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1838 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_9_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_11_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1849 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_9_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_12_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1860 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_9_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_13_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1871 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_9_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_14_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1929 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_10_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_2_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1940 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_10_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_3_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1951 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_10_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_4_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1962 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_10_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_5_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1973 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_10_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_6_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1984 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_10_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_7_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_1995 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_10_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_8_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2006 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_10_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_9_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2017 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_10_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_10_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2028 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_10_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_11_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2039 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_10_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_12_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2050 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_10_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_13_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2061 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_10_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_14_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2119 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_11_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_2_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2130 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_11_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_3_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2141 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_11_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_4_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2152 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_11_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_5_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2163 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_11_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_6_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2174 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_11_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_7_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2185 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_11_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_8_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2196 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_11_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_9_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2207 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_11_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_10_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2218 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_11_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_11_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2229 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_11_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_12_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2240 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_11_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_13_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2251 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_11_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_14_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2309 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_12_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_2_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2320 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_12_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_3_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2331 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_12_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_4_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2342 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_12_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_5_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2353 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_12_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_6_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2364 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_12_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_7_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2375 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_12_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_8_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2386 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_12_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_9_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2397 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_12_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_10_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2408 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_12_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_11_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2419 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_12_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_12_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2430 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_12_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_13_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2441 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_12_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_14_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2499 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_13_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_2_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2510 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_13_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_3_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2521 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_13_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_4_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2532 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_13_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_5_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2543 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_13_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_6_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2554 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_13_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_7_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2565 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_13_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_8_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2576 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_13_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_9_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2587 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_13_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_10_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2598 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_13_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_11_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2609 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_13_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_12_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2620 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_13_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_13_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2631 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_13_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_14_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2689 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_14_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_2_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2700 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_14_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_3_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2711 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_14_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_4_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2722 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_14_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_5_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2733 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_14_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_6_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2744 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_14_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_7_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2755 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_14_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_8_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2766 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_14_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_9_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2777 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_14_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_10_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2788 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_14_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_11_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2799 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_14_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_12_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2810 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_14_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_13_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2821 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_14_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_14_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2879 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_15_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_2_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2890 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_15_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_3_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2901 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_15_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_4_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2912 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_15_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_5_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2923 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_15_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_6_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2934 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_15_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_7_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2945 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_15_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_8_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2956 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_15_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_9_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2967 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_15_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_10_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2978 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_15_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_11_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_2989 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_15_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_12_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_3000 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_15_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_13_addr));
    vlSelf->DCache__DOT__miss__DOT___dropHit_T_3011 
        = ((0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__entries_15_addr) 
           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__probe__DOT__entries_14_addr));
    vlSelf->__VdfgTmp_h0f914751__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_2_tagAlias));
    vlSelf->__VdfgTmp_hcda7edad__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_3_tagAlias));
    vlSelf->__VdfgTmp_h7d103831__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_4_tagAlias));
    vlSelf->__VdfgTmp_h105d4c66__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_5_tagAlias));
    vlSelf->__VdfgTmp_hcf3953e8__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_6_tagAlias));
    vlSelf->__VdfgTmp_hf833fb5c__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_7_tagAlias));
    vlSelf->__VdfgTmp_he79eaa22__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_8_tagAlias));
    vlSelf->__VdfgTmp_hd3ac9510__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_9_tagAlias));
    vlSelf->__VdfgTmp_h122838eb__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_10_tagAlias));
    vlSelf->__VdfgTmp_h941b3b68__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_11_tagAlias));
    vlSelf->__VdfgTmp_h1c5681ea__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_12_tagAlias));
    vlSelf->__VdfgTmp_hb9c3e853__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_13_tagAlias));
    vlSelf->__VdfgTmp_h87720796__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_14_tagAlias));
    vlSelf->__VdfgTmp_h9df17243__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_2_tagAlias));
    vlSelf->__VdfgTmp_hdfe3971f__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_3_tagAlias));
    vlSelf->__VdfgTmp_h4e70e1a3__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_4_tagAlias));
    vlSelf->__VdfgTmp_ha4bd7554__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_5_tagAlias));
    vlSelf->__VdfgTmp_hdc590eda__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_6_tagAlias));
    vlSelf->__VdfgTmp_hd35fa64e__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_7_tagAlias));
    vlSelf->__VdfgTmp_h35fb5790__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_8_tagAlias));
    vlSelf->__VdfgTmp_he9ed4c82__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_9_tagAlias));
    vlSelf->__VdfgTmp_ha968e1d9__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_10_tagAlias));
    vlSelf->__VdfgTmp_h2087e65a__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_11_tagAlias));
    vlSelf->__VdfgTmp_ha8b2b8d8__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_12_tagAlias));
    vlSelf->__VdfgTmp_h134f9141__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_13_tagAlias));
    vlSelf->__VdfgTmp_h159e3d04__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_14_tagAlias));
    vlSelf->__VdfgTmp_haae173b5__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_2_tagAlias));
    vlSelf->__VdfgTmp_he4d09561__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_3_tagAlias));
    vlSelf->__VdfgTmp_h7b61e015__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_4_tagAlias));
    vlSelf->__VdfgTmp_h902574a6__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_5_tagAlias));
    vlSelf->__VdfgTmp_he9591f5c__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_6_tagAlias));
    vlSelf->__VdfgTmp_hf844a7b0__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_7_tagAlias));
    vlSelf->__VdfgTmp_h02e756e2__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_8_tagAlias));
    vlSelf->__VdfgTmp_hd6d55df4__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_9_tagAlias));
    vlSelf->__VdfgTmp_h9669e05b__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_10_tagAlias));
    vlSelf->__VdfgTmp_h2c7ce7dc__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_11_tagAlias));
    vlSelf->__VdfgTmp_h942f495a__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_12_tagAlias));
    vlSelf->__VdfgTmp_h38b490b3__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_13_tagAlias));
    vlSelf->__VdfgTmp_h21023376__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_14_tagAlias));
    vlSelf->__VdfgTmp_h1dc93a77__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_2_tagAlias));
    vlSelf->__VdfgTmp_h5c3f949b__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_3_tagAlias));
    vlSelf->__VdfgTmp_hcc4e4917__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_4_tagAlias));
    vlSelf->__VdfgTmp_h17053546__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_5_tagAlias));
    vlSelf->__VdfgTmp_h5ea12edc__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_6_tagAlias));
    vlSelf->__VdfgTmp_h4fab8648__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_7_tagAlias));
    vlSelf->__VdfgTmp_h65c4d71a__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_8_tagAlias));
    vlSelf->__VdfgTmp_h2a3aec34__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_9_tagAlias));
    vlSelf->__VdfgTmp_he9b649dd__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_10_tagAlias));
    vlSelf->__VdfgTmp_h9343465c__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_11_tagAlias));
    vlSelf->__VdfgTmp_heb0ce0d2__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_12_tagAlias));
    vlSelf->__VdfgTmp_h8f9b9975__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_13_tagAlias));
    vlSelf->__VdfgTmp_h86687ab6__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_14_tagAlias));
    vlSelf->__VdfgTmp_h19af6979__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_2_tagAlias));
    vlSelf->__VdfgTmp_h4798938d__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_3_tagAlias));
    vlSelf->__VdfgTmp_h362ffc19__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_4_tagAlias));
    vlSelf->__VdfgTmp_h10f37048__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_5_tagAlias));
    vlSelf->__VdfgTmp_h581715d6__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_6_tagAlias));
    vlSelf->__VdfgTmp_h4b0cbd42__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_7_tagAlias));
    vlSelf->__VdfgTmp_ha1b1520c__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_8_tagAlias));
    vlSelf->__VdfgTmp_h55a35b3e__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_9_tagAlias));
    vlSelf->__VdfgTmp_h1527fcd7__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_10_tagAlias));
    vlSelf->__VdfgTmp_h9f34fd56__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_11_tagAlias));
    vlSelf->__VdfgTmp_h14e9a7d4__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_12_tagAlias));
    vlSelf->__VdfgTmp_h8b7c8c7f__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_13_tagAlias));
    vlSelf->__VdfgTmp_h81ce29b8__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_14_tagAlias));
    vlSelf->__VdfgTmp_h8abbb3b5__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_2_tagAlias));
    vlSelf->__VdfgTmp_hcc8916e1__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_3_tagAlias));
    vlSelf->__VdfgTmp_h5b3a2455__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_4_tagAlias));
    vlSelf->__VdfgTmp_hb077b8ba__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_5_tagAlias));
    vlSelf->__VdfgTmp_hc9139f2c__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_6_tagAlias));
    vlSelf->__VdfgTmp_hd816e7b0__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_7_tagAlias));
    vlSelf->__VdfgTmp_h22b1d666__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_8_tagAlias));
    vlSelf->__VdfgTmp_hfe87c174__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_9_tagAlias));
    vlSelf->__VdfgTmp_hbe02242f__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_10_tagAlias));
    vlSelf->__VdfgTmp_h342d27ac__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_11_tagAlias));
    vlSelf->__VdfgTmp_hbc79cd2e__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_12_tagAlias));
    vlSelf->__VdfgTmp_h18e514b7__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_13_tagAlias));
    vlSelf->__VdfgTmp_h0154730a__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_14_tagAlias));
    vlSelf->__VdfgTmp_he2dadeaa__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_2_tagAlias));
    vlSelf->__VdfgTmp_ha0b5b97e__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_3_tagAlias));
    vlSelf->__VdfgTmp_h305a4bca__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_4_tagAlias));
    vlSelf->__VdfgTmp_hdd9ec7bb__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_5_tagAlias));
    vlSelf->__VdfgTmp_ha2332305__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_6_tagAlias));
    vlSelf->__VdfgTmp_hb5398ab1__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_7_tagAlias));
    vlSelf->__VdfgTmp_h4adcf9ff__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_8_tagAlias));
    vlSelf->__VdfgTmp_h9ecee0ed__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_9_tagAlias));
    vlSelf->__VdfgTmp_hdf424c04__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_10_tagAlias));
    vlSelf->__VdfgTmp_h59514a85__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_11_tagAlias));
    vlSelf->__VdfgTmp_hd1849507__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_12_tagAlias));
    vlSelf->__VdfgTmp_h7529bbac__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_13_tagAlias));
    vlSelf->__VdfgTmp_h6a781f6b__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_14_tagAlias));
    vlSelf->__VdfgTmp_he8c474a2__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_2_tagAlias));
    vlSelf->__VdfgTmp_haad31196__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_3_tagAlias));
    vlSelf->__VdfgTmp_hd944e302__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_4_tagAlias));
    vlSelf->__VdfgTmp_he6387f53__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_5_tagAlias));
    vlSelf->__VdfgTmp_haf5d9bc9__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_6_tagAlias));
    vlSelf->__VdfgTmp_h5ea720a5__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_7_tagAlias));
    vlSelf->__VdfgTmp_h70fa5117__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_8_tagAlias));
    vlSelf->__VdfgTmp_ha4c84661__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_9_tagAlias));
    vlSelf->__VdfgTmp_he44ce2c8__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_10_tagAlias));
    vlSelf->__VdfgTmp_h627fe049__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_11_tagAlias));
    vlSelf->__VdfgTmp_hfa024dcf__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_12_tagAlias));
    vlSelf->__VdfgTmp_h1eb713a0__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_13_tagAlias));
    vlSelf->__VdfgTmp_h1766b7e3__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_14_tagAlias));
    vlSelf->__VdfgTmp_h37de3e73__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_2_tagAlias));
    vlSelf->__VdfgTmp_h75c9a347__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_3_tagAlias));
    vlSelf->__VdfgTmp_he5594cd3__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_4_tagAlias));
    vlSelf->__VdfgTmp_hcee2c102__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_5_tagAlias));
    vlSelf->__VdfgTmp_h7746258c__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_6_tagAlias));
    vlSelf->__VdfgTmp_h667d9278__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_7_tagAlias));
    vlSelf->__VdfgTmp_h5c20e2c6__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_8_tagAlias));
    vlSelf->__VdfgTmp_h0bd2e834__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_9_tagAlias));
    vlSelf->__VdfgTmp_hc8514c8d__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_10_tagAlias));
    vlSelf->__VdfgTmp_hb2a4520c__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_11_tagAlias));
    vlSelf->__VdfgTmp_hca98f78e__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_12_tagAlias));
    vlSelf->__VdfgTmp_ha66d9d75__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_13_tagAlias));
    vlSelf->__VdfgTmp_hbfbf79b2__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_14_tagAlias));
    vlSelf->__VdfgTmp_h4126a76f__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_2_tagAlias));
    vlSelf->__VdfgTmp_h0f151a33__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_3_tagAlias));
    vlSelf->__VdfgTmp_hbea635cf__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_4_tagAlias));
    vlSelf->__VdfgTmp_h5862b87e__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_5_tagAlias));
    vlSelf->__VdfgTmp_h008e9cf4__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_6_tagAlias));
    vlSelf->__VdfgTmp_h33810b60__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_7_tagAlias));
    vlSelf->__VdfgTmp_h292c5bb2__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_8_tagAlias));
    vlSelf->__VdfgTmp_h1d1252ac__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_9_tagAlias));
    vlSelf->__VdfgTmp_h5d9e35f5__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_10_tagAlias));
    vlSelf->__VdfgTmp_hc7a8cb74__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_11_tagAlias));
    vlSelf->__VdfgTmp_h5c646e0a__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_12_tagAlias));
    vlSelf->__VdfgTmp_hf3f1046d__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_13_tagAlias));
    vlSelf->__VdfgTmp_hc947e02e__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_14_tagAlias));
    vlSelf->__VdfgTmp_h33e9731b__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_2_tagAlias));
    vlSelf->__VdfgTmp_h75c6d62f__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_3_tagAlias));
    vlSelf->__VdfgTmp_h0469e5bb__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_4_tagAlias));
    vlSelf->__VdfgTmp_h2aad69ea__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_5_tagAlias));
    vlSelf->__VdfgTmp_h72414c74__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_6_tagAlias));
    vlSelf->__VdfgTmp_h814aa4e0__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_7_tagAlias));
    vlSelf->__VdfgTmp_h9bef97ae__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_8_tagAlias));
    vlSelf->__VdfgTmp_h67dd8edc__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_9_tagAlias));
    vlSelf->__VdfgTmp_h2751e575__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_10_tagAlias));
    vlSelf->__VdfgTmp_had62e4f4__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_11_tagAlias));
    vlSelf->__VdfgTmp_h2697ba76__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_12_tagAlias));
    vlSelf->__VdfgTmp_hc13ad41d__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_13_tagAlias));
    vlSelf->__VdfgTmp_hbb88305a__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_14_tagAlias));
    vlSelf->__VdfgTmp_hb1c9c68c__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_2_tagAlias));
    vlSelf->__VdfgTmp_hf3ff2df8__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_3_tagAlias));
    vlSelf->__VdfgTmp_h6048586c__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_4_tagAlias));
    vlSelf->__VdfgTmp_h4695cfb3__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_5_tagAlias));
    vlSelf->__VdfgTmp_hfe71b325__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_6_tagAlias));
    vlSelf->__VdfgTmp_hef6b1a89__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_7_tagAlias));
    vlSelf->__VdfgTmp_hc9d7ea7f__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_8_tagAlias));
    vlSelf->__VdfgTmp_h85c5f54d__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_9_tagAlias));
    vlSelf->__VdfgTmp_h45405826__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_10_tagAlias));
    vlSelf->__VdfgTmp_h3b535aa5__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_11_tagAlias));
    vlSelf->__VdfgTmp_h428e0127__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_12_tagAlias));
    vlSelf->__VdfgTmp_h2f1b2b8e__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_13_tagAlias));
    vlSelf->__VdfgTmp_h29aa87c3__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_14_tagAlias));
    vlSelf->__VdfgTmp_h414449be__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_2_tagAlias));
    vlSelf->__VdfgTmp_hff56f36a__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_3_tagAlias));
    vlSelf->__VdfgTmp_h6fc7a41e__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_4_tagAlias));
    vlSelf->__VdfgTmp_h480050a1__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_5_tagAlias));
    vlSelf->__VdfgTmp_h01dc7d57__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_6_tagAlias));
    vlSelf->__VdfgTmp_hf0e2e5bb__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_7_tagAlias));
    vlSelf->__VdfgTmp_hd6be32ed__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_8_tagAlias));
    vlSelf->__VdfgTmp_h0d503bff__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_9_tagAlias));
    vlSelf->__VdfgTmp_h4acfa454__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_10_tagAlias));
    vlSelf->__VdfgTmp_hc43aa5d7__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_11_tagAlias));
    vlSelf->__VdfgTmp_h4c060f55__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_12_tagAlias));
    vlSelf->__VdfgTmp_hb0f2f4bc__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_13_tagAlias));
    vlSelf->__VdfgTmp_hb9258971__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_14_tagAlias));
    vlSelf->__VdfgTmp_h146873ac__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_2_tagAlias));
    vlSelf->__VdfgTmp_h4a791e98__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_3_tagAlias));
    vlSelf->__VdfgTmp_h3ae8e00c__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_4_tagAlias));
    vlSelf->__VdfgTmp_h1f247c53__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_5_tagAlias));
    vlSelf->__VdfgTmp_h548398c5__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_6_tagAlias));
    vlSelf->__VdfgTmp_h47852fa9__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_7_tagAlias));
    vlSelf->__VdfgTmp_hac665e1f__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_8_tagAlias));
    vlSelf->__VdfgTmp_h5874456d__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_9_tagAlias));
    vlSelf->__VdfgTmp_h19f0e1c6__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_10_tagAlias));
    vlSelf->__VdfgTmp_h93ddef45__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_11_tagAlias));
    vlSelf->__VdfgTmp_h1b2e4ac7__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_12_tagAlias));
    vlSelf->__VdfgTmp_h879510ae__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_13_tagAlias));
    vlSelf->__VdfgTmp_h8ccab4e3__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_14_tagAlias));
    vlSelf->__VdfgTmp_h82aeb7c1__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_2_tagAlias));
    vlSelf->__VdfgTmp_hc0bc10ed__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_3_tagAlias));
    vlSelf->__VdfgTmp_hb02f4261__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_4_tagAlias));
    vlSelf->__VdfgTmp_h8dd2bed2__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_5_tagAlias));
    vlSelf->__VdfgTmp_hc2369aa8__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_6_tagAlias));
    vlSelf->__VdfgTmp_h353003dc__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_7_tagAlias));
    vlSelf->__VdfgTmp_h1a94d06e__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_8_tagAlias));
    vlSelf->__VdfgTmp_hcea2d900__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_9_tagAlias));
    vlSelf->__VdfgTmp_h8f2745a7__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_10_tagAlias));
    vlSelf->__VdfgTmp_h09184328__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_11_tagAlias));
    vlSelf->__VdfgTmp_h91ececa6__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_12_tagAlias));
    vlSelf->__VdfgTmp_h754012df__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_13_tagAlias));
    vlSelf->__VdfgTmp_h7af17682__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_14_tagAlias));
    vlSelf->__VdfgTmp_h5651f43b__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_2_tagAlias));
    vlSelf->__VdfgTmp_h90404f4f__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_3_tagAlias));
    vlSelf->__VdfgTmp_h61d161db__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_4_tagAlias));
    vlSelf->__VdfgTmp_h4c9ded0a__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_5_tagAlias));
    vlSelf->__VdfgTmp_h97f9c894__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_6_tagAlias));
    vlSelf->__VdfgTmp_he4fc2000__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_7_tagAlias));
    vlSelf->__VdfgTmp_hfe5f0fce__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_8_tagAlias));
    vlSelf->__VdfgTmp_h824d06fc__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_9_tagAlias));
    vlSelf->__VdfgTmp_h42c96195__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_10_tagAlias));
    vlSelf->__VdfgTmp_hc8a46014__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_11_tagAlias));
    vlSelf->__VdfgTmp_h40973a96__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_12_tagAlias));
    vlSelf->__VdfgTmp_h24ec513d__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_13_tagAlias));
    vlSelf->__VdfgTmp_hdfb2b57a__0 = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_14_tagAlias));
    vlSelf->DCache__DOT__miss__DOT___wakeVec_T_446 
        = (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_0_valid) 
            & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_0_source))) 
           | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_1_valid) 
               & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_1_source))) 
              | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_2_valid) 
                  & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_2_source))) 
                 | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_3_valid) 
                     & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_3_source))) 
                    | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_4_valid) 
                        & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_4_source))) 
                       | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_5_valid) 
                           & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_5_source))) 
                          | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_6_valid) 
                              & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_6_source))) 
                             | ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_7_valid) 
                                & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_7_source))))))))));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h7b655722__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_7_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_7_source)));
    if ((0xdU == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                   >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3085 = vlSelf->DCache__DOT__meta__DOT__meta_13_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3341 = vlSelf->DCache__DOT__meta__DOT__meta_13_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3597 = vlSelf->DCache__DOT__meta__DOT__meta_13_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3853 = vlSelf->DCache__DOT__meta__DOT__meta_13_3_coh;
    } else if ((0xcU == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                          >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3085 = vlSelf->DCache__DOT__meta__DOT__meta_12_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3341 = vlSelf->DCache__DOT__meta__DOT__meta_12_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3597 = vlSelf->DCache__DOT__meta__DOT__meta_12_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3853 = vlSelf->DCache__DOT__meta__DOT__meta_12_3_coh;
    } else if ((0xbU == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                          >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3085 = vlSelf->DCache__DOT__meta__DOT__meta_11_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3341 = vlSelf->DCache__DOT__meta__DOT__meta_11_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3597 = vlSelf->DCache__DOT__meta__DOT__meta_11_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3853 = vlSelf->DCache__DOT__meta__DOT__meta_11_3_coh;
    } else if ((0xaU == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                          >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3085 = vlSelf->DCache__DOT__meta__DOT__meta_10_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3341 = vlSelf->DCache__DOT__meta__DOT__meta_10_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3597 = vlSelf->DCache__DOT__meta__DOT__meta_10_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3853 = vlSelf->DCache__DOT__meta__DOT__meta_10_3_coh;
    } else if ((9U == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                        >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3085 = vlSelf->DCache__DOT__meta__DOT__meta_9_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3341 = vlSelf->DCache__DOT__meta__DOT__meta_9_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3597 = vlSelf->DCache__DOT__meta__DOT__meta_9_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3853 = vlSelf->DCache__DOT__meta__DOT__meta_9_3_coh;
    } else if ((8U == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                        >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3085 = vlSelf->DCache__DOT__meta__DOT__meta_8_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3341 = vlSelf->DCache__DOT__meta__DOT__meta_8_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3597 = vlSelf->DCache__DOT__meta__DOT__meta_8_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3853 = vlSelf->DCache__DOT__meta__DOT__meta_8_3_coh;
    } else if ((7U == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                        >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3085 = vlSelf->DCache__DOT__meta__DOT__meta_7_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3341 = vlSelf->DCache__DOT__meta__DOT__meta_7_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3597 = vlSelf->DCache__DOT__meta__DOT__meta_7_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3853 = vlSelf->DCache__DOT__meta__DOT__meta_7_3_coh;
    } else if ((6U == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                        >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3085 = vlSelf->DCache__DOT__meta__DOT__meta_6_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3341 = vlSelf->DCache__DOT__meta__DOT__meta_6_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3597 = vlSelf->DCache__DOT__meta__DOT__meta_6_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3853 = vlSelf->DCache__DOT__meta__DOT__meta_6_3_coh;
    } else if ((5U == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                        >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3085 = vlSelf->DCache__DOT__meta__DOT__meta_5_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3341 = vlSelf->DCache__DOT__meta__DOT__meta_5_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3597 = vlSelf->DCache__DOT__meta__DOT__meta_5_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3853 = vlSelf->DCache__DOT__meta__DOT__meta_5_3_coh;
    } else if ((4U == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                        >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3085 = vlSelf->DCache__DOT__meta__DOT__meta_4_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3341 = vlSelf->DCache__DOT__meta__DOT__meta_4_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3597 = vlSelf->DCache__DOT__meta__DOT__meta_4_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3853 = vlSelf->DCache__DOT__meta__DOT__meta_4_3_coh;
    } else if ((3U == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                        >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3085 = vlSelf->DCache__DOT__meta__DOT__meta_3_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3341 = vlSelf->DCache__DOT__meta__DOT__meta_3_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3597 = vlSelf->DCache__DOT__meta__DOT__meta_3_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3853 = vlSelf->DCache__DOT__meta__DOT__meta_3_3_coh;
    } else if ((2U == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                        >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3085 = vlSelf->DCache__DOT__meta__DOT__meta_2_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3341 = vlSelf->DCache__DOT__meta__DOT__meta_2_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3597 = vlSelf->DCache__DOT__meta__DOT__meta_2_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3853 = vlSelf->DCache__DOT__meta__DOT__meta_2_3_coh;
    } else if ((1U == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                        >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3085 = vlSelf->DCache__DOT__meta__DOT__meta_1_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3341 = vlSelf->DCache__DOT__meta__DOT__meta_1_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3597 = vlSelf->DCache__DOT__meta__DOT__meta_1_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3853 = vlSelf->DCache__DOT__meta__DOT__meta_1_3_coh;
    } else {
        vlSelf->DCache__DOT__meta__DOT___GEN_3085 = vlSelf->DCache__DOT__meta__DOT__meta_0_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3341 = vlSelf->DCache__DOT__meta__DOT__meta_0_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3597 = vlSelf->DCache__DOT__meta__DOT__meta_0_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3853 = vlSelf->DCache__DOT__meta__DOT__meta_0_3_coh;
    }
    if ((0xdU == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                   >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4121 = vlSelf->DCache__DOT__meta__DOT__meta_13_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4377 = vlSelf->DCache__DOT__meta__DOT__meta_13_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4633 = vlSelf->DCache__DOT__meta__DOT__meta_13_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4889 = vlSelf->DCache__DOT__meta__DOT__meta_13_3_coh;
    } else if ((0xcU == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                          >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4121 = vlSelf->DCache__DOT__meta__DOT__meta_12_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4377 = vlSelf->DCache__DOT__meta__DOT__meta_12_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4633 = vlSelf->DCache__DOT__meta__DOT__meta_12_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4889 = vlSelf->DCache__DOT__meta__DOT__meta_12_3_coh;
    } else if ((0xbU == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                          >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4121 = vlSelf->DCache__DOT__meta__DOT__meta_11_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4377 = vlSelf->DCache__DOT__meta__DOT__meta_11_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4633 = vlSelf->DCache__DOT__meta__DOT__meta_11_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4889 = vlSelf->DCache__DOT__meta__DOT__meta_11_3_coh;
    } else if ((0xaU == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                          >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4121 = vlSelf->DCache__DOT__meta__DOT__meta_10_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4377 = vlSelf->DCache__DOT__meta__DOT__meta_10_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4633 = vlSelf->DCache__DOT__meta__DOT__meta_10_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4889 = vlSelf->DCache__DOT__meta__DOT__meta_10_3_coh;
    } else if ((9U == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                        >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4121 = vlSelf->DCache__DOT__meta__DOT__meta_9_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4377 = vlSelf->DCache__DOT__meta__DOT__meta_9_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4633 = vlSelf->DCache__DOT__meta__DOT__meta_9_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4889 = vlSelf->DCache__DOT__meta__DOT__meta_9_3_coh;
    } else if ((8U == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                        >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4121 = vlSelf->DCache__DOT__meta__DOT__meta_8_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4377 = vlSelf->DCache__DOT__meta__DOT__meta_8_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4633 = vlSelf->DCache__DOT__meta__DOT__meta_8_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4889 = vlSelf->DCache__DOT__meta__DOT__meta_8_3_coh;
    } else if ((7U == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                        >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4121 = vlSelf->DCache__DOT__meta__DOT__meta_7_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4377 = vlSelf->DCache__DOT__meta__DOT__meta_7_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4633 = vlSelf->DCache__DOT__meta__DOT__meta_7_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4889 = vlSelf->DCache__DOT__meta__DOT__meta_7_3_coh;
    } else if ((6U == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                        >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4121 = vlSelf->DCache__DOT__meta__DOT__meta_6_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4377 = vlSelf->DCache__DOT__meta__DOT__meta_6_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4633 = vlSelf->DCache__DOT__meta__DOT__meta_6_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4889 = vlSelf->DCache__DOT__meta__DOT__meta_6_3_coh;
    } else if ((5U == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                        >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4121 = vlSelf->DCache__DOT__meta__DOT__meta_5_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4377 = vlSelf->DCache__DOT__meta__DOT__meta_5_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4633 = vlSelf->DCache__DOT__meta__DOT__meta_5_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4889 = vlSelf->DCache__DOT__meta__DOT__meta_5_3_coh;
    } else if ((4U == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                        >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4121 = vlSelf->DCache__DOT__meta__DOT__meta_4_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4377 = vlSelf->DCache__DOT__meta__DOT__meta_4_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4633 = vlSelf->DCache__DOT__meta__DOT__meta_4_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4889 = vlSelf->DCache__DOT__meta__DOT__meta_4_3_coh;
    } else if ((3U == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                        >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4121 = vlSelf->DCache__DOT__meta__DOT__meta_3_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4377 = vlSelf->DCache__DOT__meta__DOT__meta_3_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4633 = vlSelf->DCache__DOT__meta__DOT__meta_3_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4889 = vlSelf->DCache__DOT__meta__DOT__meta_3_3_coh;
    } else if ((2U == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                        >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4121 = vlSelf->DCache__DOT__meta__DOT__meta_2_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4377 = vlSelf->DCache__DOT__meta__DOT__meta_2_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4633 = vlSelf->DCache__DOT__meta__DOT__meta_2_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4889 = vlSelf->DCache__DOT__meta__DOT__meta_2_3_coh;
    } else if ((1U == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                        >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4121 = vlSelf->DCache__DOT__meta__DOT__meta_1_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4377 = vlSelf->DCache__DOT__meta__DOT__meta_1_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4633 = vlSelf->DCache__DOT__meta__DOT__meta_1_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4889 = vlSelf->DCache__DOT__meta__DOT__meta_1_3_coh;
    } else {
        vlSelf->DCache__DOT__meta__DOT___GEN_4121 = vlSelf->DCache__DOT__meta__DOT__meta_0_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4377 = vlSelf->DCache__DOT__meta__DOT__meta_0_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4633 = vlSelf->DCache__DOT__meta__DOT__meta_0_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4889 = vlSelf->DCache__DOT__meta__DOT__meta_0_3_coh;
    }
    vlSelf->DCache__DOT__wb__DOT__isDbid = ((2U == (IData)(vlSelf->io_l2_rxRsp_bits_opcode)) 
                                            | (3U == (IData)(vlSelf->io_l2_rxRsp_bits_opcode)));
    vlSelf->DCache__DOT__miss__DOT___wakeVec_T_26 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_0_valid) 
          & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_0_source))) 
         | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_1_valid) 
             & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_1_source))) 
            | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_2_valid) 
                & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_2_source))) 
               | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_3_valid) 
                   & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_3_source))) 
                  | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_4_valid) 
                      & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_4_source))) 
                     | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_5_valid) 
                         & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_5_source))) 
                        | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_6_valid) 
                            & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_6_source))) 
                           | ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_7_valid) 
                              & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_7_source))))))))));
    vlSelf->DCache__DOT__miss__DOT___wakeVec_T_54 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_0_valid) 
          & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_0_source))) 
         | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_1_valid) 
             & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_1_source))) 
            | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_2_valid) 
                & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_2_source))) 
               | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_3_valid) 
                   & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_3_source))) 
                  | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_4_valid) 
                      & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_4_source))) 
                     | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_5_valid) 
                         & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_5_source))) 
                        | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_6_valid) 
                            & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_6_source))) 
                           | ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_7_valid) 
                              & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_7_source))))))))));
    vlSelf->DCache__DOT__miss__DOT___wakeVec_T_82 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_0_valid) 
          & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_0_source))) 
         | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_1_valid) 
             & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_1_source))) 
            | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_2_valid) 
                & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_2_source))) 
               | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_3_valid) 
                   & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_3_source))) 
                  | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_4_valid) 
                      & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_4_source))) 
                     | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_5_valid) 
                         & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_5_source))) 
                        | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_6_valid) 
                            & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_6_source))) 
                           | ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_7_valid) 
                              & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_7_source))))))))));
    vlSelf->DCache__DOT__miss__DOT___wakeVec_T_110 
        = (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_0_valid) 
            & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_0_source))) 
           | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_1_valid) 
               & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_1_source))) 
              | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_2_valid) 
                  & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_2_source))) 
                 | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_3_valid) 
                     & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_3_source))) 
                    | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_4_valid) 
                        & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_4_source))) 
                       | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_5_valid) 
                           & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_5_source))) 
                          | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_6_valid) 
                              & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_6_source))) 
                             | ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_7_valid) 
                                & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_7_source))))))))));
    vlSelf->DCache__DOT__miss__DOT___wakeVec_T_138 
        = (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_0_valid) 
            & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_0_source))) 
           | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_1_valid) 
               & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_1_source))) 
              | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_2_valid) 
                  & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_2_source))) 
                 | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_3_valid) 
                     & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_3_source))) 
                    | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_4_valid) 
                        & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_4_source))) 
                       | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_5_valid) 
                           & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_5_source))) 
                          | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_6_valid) 
                              & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_6_source))) 
                             | ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_7_valid) 
                                & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_7_source))))))))));
    vlSelf->DCache__DOT__miss__DOT___wakeVec_T_166 
        = (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_0_valid) 
            & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_0_source))) 
           | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_1_valid) 
               & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_1_source))) 
              | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_2_valid) 
                  & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_2_source))) 
                 | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_3_valid) 
                     & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_3_source))) 
                    | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_4_valid) 
                        & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_4_source))) 
                       | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_5_valid) 
                           & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_5_source))) 
                          | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_6_valid) 
                              & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_6_source))) 
                             | ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_7_valid) 
                                & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_7_source))))))))));
    vlSelf->DCache__DOT__miss__DOT___wakeVec_T_194 
        = (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_0_valid) 
            & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_0_source))) 
           | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_1_valid) 
               & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_1_source))) 
              | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_2_valid) 
                  & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_2_source))) 
                 | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_3_valid) 
                     & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_3_source))) 
                    | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_4_valid) 
                        & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_4_source))) 
                       | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_5_valid) 
                           & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_5_source))) 
                          | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_6_valid) 
                              & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_6_source))) 
                             | ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_7_valid) 
                                & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_7_source))))))))));
    vlSelf->DCache__DOT__miss__DOT___wakeVec_T_222 
        = (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_0_valid) 
            & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_0_source))) 
           | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_1_valid) 
               & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_1_source))) 
              | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_2_valid) 
                  & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_2_source))) 
                 | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_3_valid) 
                     & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_3_source))) 
                    | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_4_valid) 
                        & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_4_source))) 
                       | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_5_valid) 
                           & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_5_source))) 
                          | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_6_valid) 
                              & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_6_source))) 
                             | ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_7_valid) 
                                & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_7_source))))))))));
    vlSelf->DCache__DOT__miss__DOT___wakeVec_T_250 
        = (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_0_valid) 
            & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_0_source))) 
           | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_1_valid) 
               & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_1_source))) 
              | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_2_valid) 
                  & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_2_source))) 
                 | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_3_valid) 
                     & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_3_source))) 
                    | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_4_valid) 
                        & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_4_source))) 
                       | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_5_valid) 
                           & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_5_source))) 
                          | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_6_valid) 
                              & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_6_source))) 
                             | ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_7_valid) 
                                & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_7_source))))))))));
    vlSelf->DCache__DOT__miss__DOT___wakeVec_T_278 
        = (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_0_valid) 
            & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_0_source))) 
           | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_1_valid) 
               & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_1_source))) 
              | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_2_valid) 
                  & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_2_source))) 
                 | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_3_valid) 
                     & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_3_source))) 
                    | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_4_valid) 
                        & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_4_source))) 
                       | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_5_valid) 
                           & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_5_source))) 
                          | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_6_valid) 
                              & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_6_source))) 
                             | ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_7_valid) 
                                & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_7_source))))))))));
    vlSelf->DCache__DOT__miss__DOT___wakeVec_T_306 
        = (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_0_valid) 
            & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_0_source))) 
           | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_1_valid) 
               & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_1_source))) 
              | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_2_valid) 
                  & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_2_source))) 
                 | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_3_valid) 
                     & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_3_source))) 
                    | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_4_valid) 
                        & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_4_source))) 
                       | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_5_valid) 
                           & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_5_source))) 
                          | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_6_valid) 
                              & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_6_source))) 
                             | ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_7_valid) 
                                & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_7_source))))))))));
    vlSelf->DCache__DOT__miss__DOT___wakeVec_T_334 
        = (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_0_valid) 
            & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_0_source))) 
           | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_1_valid) 
               & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_1_source))) 
              | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_2_valid) 
                  & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_2_source))) 
                 | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_3_valid) 
                     & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_3_source))) 
                    | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_4_valid) 
                        & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_4_source))) 
                       | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_5_valid) 
                           & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_5_source))) 
                          | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_6_valid) 
                              & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_6_source))) 
                             | ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_7_valid) 
                                & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_7_source))))))))));
    vlSelf->DCache__DOT__miss__DOT___wakeVec_T_362 
        = (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_0_valid) 
            & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_0_source))) 
           | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_1_valid) 
               & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_1_source))) 
              | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_2_valid) 
                  & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_2_source))) 
                 | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_3_valid) 
                     & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_3_source))) 
                    | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_4_valid) 
                        & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_4_source))) 
                       | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_5_valid) 
                           & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_5_source))) 
                          | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_6_valid) 
                              & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_6_source))) 
                             | ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_7_valid) 
                                & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_7_source))))))))));
    vlSelf->DCache__DOT__miss__DOT___wakeVec_T_390 
        = (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_0_valid) 
            & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_0_source))) 
           | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_1_valid) 
               & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_1_source))) 
              | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_2_valid) 
                  & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_2_source))) 
                 | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_3_valid) 
                     & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_3_source))) 
                    | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_4_valid) 
                        & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_4_source))) 
                       | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_5_valid) 
                           & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_5_source))) 
                          | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_6_valid) 
                              & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_6_source))) 
                             | ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_7_valid) 
                                & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_7_source))))))))));
    vlSelf->DCache__DOT__miss__DOT___wakeVec_T_418 
        = (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_0_valid) 
            & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_0_source))) 
           | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_1_valid) 
               & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_1_source))) 
              | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_2_valid) 
                  & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_2_source))) 
                 | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_3_valid) 
                     & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_3_source))) 
                    | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_4_valid) 
                        & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_4_source))) 
                       | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_5_valid) 
                           & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_5_source))) 
                          | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_6_valid) 
                              & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_6_source))) 
                             | ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_7_valid) 
                                & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_7_source))))))))));
    vlSelf->DCache__DOT__data__DOT__port1Older = (((IData)(vlSelf->DCache__DOT__loads_0__DOT__s1_req_lqIdx_flag) 
                                                   == (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_req_lqIdx_flag))
                                                   ? 
                                                  ((IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_req_lqIdx_value) 
                                                   < (IData)(vlSelf->DCache__DOT__loads_0__DOT__s1_req_lqIdx_value))
                                                   : 
                                                  ((IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_req_lqIdx_value) 
                                                   > (IData)(vlSelf->DCache__DOT__loads_0__DOT__s1_req_lqIdx_value)));
    vlSelf->DCache__DOT__miss__DOT__rspDone = (((1U 
                                                 == (IData)(vlSelf->io_l2_rxRsp_bits_opcode)) 
                                                | (2U 
                                                   == (IData)(vlSelf->io_l2_rxRsp_bits_opcode))) 
                                               | (3U 
                                                  == (IData)(vlSelf->io_l2_rxRsp_bits_opcode)));
    vlSelf->DCache__DOT__miss_io_rxRsp_ready = ((0x10U 
                                                 > (IData)(vlSelf->io_l2_rxRsp_bits_txnID)) 
                                                | ((0x10U 
                                                    == (IData)(vlSelf->io_l2_rxRsp_bits_txnID)) 
                                                   & (2U 
                                                      == (IData)(vlSelf->DCache__DOT__miss__DOT__cmoState))));
    if (vlSelf->io_l2_rxDat_bits_dataID) {
        vlSelf->DCache__DOT__miss__DOT__storeHalf_12[0U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_12_storeData[8U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_12[1U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_12_storeData[9U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_12[2U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_12_storeData[0xaU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_12[3U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_12_storeData[0xbU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_12[4U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_12_storeData[0xcU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_12[5U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_12_storeData[0xdU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_12[6U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_12_storeData[0xeU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_12[7U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_12_storeData[0xfU];
        vlSelf->DCache__DOT__miss__DOT__maskHalf_12 
            = (IData)((vlSelf->DCache__DOT__miss__DOT__entries_12_storeMask 
                       >> 0x20U));
        vlSelf->DCache__DOT__miss__DOT__storeHalf_13[0U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_13_storeData[8U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_13[1U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_13_storeData[9U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_13[2U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_13_storeData[0xaU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_13[3U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_13_storeData[0xbU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_13[4U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_13_storeData[0xcU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_13[5U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_13_storeData[0xdU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_13[6U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_13_storeData[0xeU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_13[7U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_13_storeData[0xfU];
        vlSelf->DCache__DOT__miss__DOT__maskHalf_13 
            = (IData)((vlSelf->DCache__DOT__miss__DOT__entries_13_storeMask 
                       >> 0x20U));
        vlSelf->DCache__DOT__miss__DOT__storeHalf_14[0U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_14_storeData[8U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_14[1U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_14_storeData[9U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_14[2U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_14_storeData[0xaU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_14[3U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_14_storeData[0xbU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_14[4U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_14_storeData[0xcU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_14[5U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_14_storeData[0xdU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_14[6U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_14_storeData[0xeU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_14[7U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_14_storeData[0xfU];
        vlSelf->DCache__DOT__miss__DOT__maskHalf_14 
            = (IData)((vlSelf->DCache__DOT__miss__DOT__entries_14_storeMask 
                       >> 0x20U));
        vlSelf->DCache__DOT__miss__DOT__storeHalf_15[0U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_15_storeData[8U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_15[1U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_15_storeData[9U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_15[2U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_15_storeData[0xaU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_15[3U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_15_storeData[0xbU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_15[4U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_15_storeData[0xcU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_15[5U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_15_storeData[0xdU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_15[6U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_15_storeData[0xeU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_15[7U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_15_storeData[0xfU];
        vlSelf->DCache__DOT__miss__DOT__maskHalf_15 
            = (IData)((vlSelf->DCache__DOT__miss__DOT__entries_15_storeMask 
                       >> 0x20U));
        vlSelf->DCache__DOT__miss__DOT__storeHalf_6[0U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_6_storeData[8U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_6[1U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_6_storeData[9U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_6[2U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_6_storeData[0xaU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_6[3U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_6_storeData[0xbU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_6[4U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_6_storeData[0xcU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_6[5U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_6_storeData[0xdU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_6[6U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_6_storeData[0xeU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_6[7U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_6_storeData[0xfU];
        vlSelf->DCache__DOT__miss__DOT__maskHalf_6 
            = (IData)((vlSelf->DCache__DOT__miss__DOT__entries_6_storeMask 
                       >> 0x20U));
        vlSelf->DCache__DOT__miss__DOT__storeHalf_7[0U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_7_storeData[8U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_7[1U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_7_storeData[9U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_7[2U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_7_storeData[0xaU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_7[3U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_7_storeData[0xbU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_7[4U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_7_storeData[0xcU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_7[5U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_7_storeData[0xdU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_7[6U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_7_storeData[0xeU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_7[7U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_7_storeData[0xfU];
        vlSelf->DCache__DOT__miss__DOT__maskHalf_7 
            = (IData)((vlSelf->DCache__DOT__miss__DOT__entries_7_storeMask 
                       >> 0x20U));
        vlSelf->DCache__DOT__miss__DOT__storeHalf_8[0U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_8_storeData[8U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_8[1U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_8_storeData[9U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_8[2U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_8_storeData[0xaU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_8[3U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_8_storeData[0xbU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_8[4U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_8_storeData[0xcU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_8[5U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_8_storeData[0xdU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_8[6U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_8_storeData[0xeU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_8[7U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_8_storeData[0xfU];
        vlSelf->DCache__DOT__miss__DOT__maskHalf_8 
            = (IData)((vlSelf->DCache__DOT__miss__DOT__entries_8_storeMask 
                       >> 0x20U));
        vlSelf->DCache__DOT__miss__DOT__storeHalf_9[0U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_9_storeData[8U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_9[1U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_9_storeData[9U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_9[2U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_9_storeData[0xaU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_9[3U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_9_storeData[0xbU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_9[4U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_9_storeData[0xcU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_9[5U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_9_storeData[0xdU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_9[6U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_9_storeData[0xeU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_9[7U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_9_storeData[0xfU];
        vlSelf->DCache__DOT__miss__DOT__maskHalf_9 
            = (IData)((vlSelf->DCache__DOT__miss__DOT__entries_9_storeMask 
                       >> 0x20U));
        vlSelf->DCache__DOT__miss__DOT__storeHalf_10[0U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_10_storeData[8U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_10[1U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_10_storeData[9U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_10[2U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_10_storeData[0xaU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_10[3U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_10_storeData[0xbU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_10[4U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_10_storeData[0xcU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_10[5U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_10_storeData[0xdU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_10[6U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_10_storeData[0xeU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_10[7U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_10_storeData[0xfU];
        vlSelf->DCache__DOT__miss__DOT__maskHalf_10 
            = (IData)((vlSelf->DCache__DOT__miss__DOT__entries_10_storeMask 
                       >> 0x20U));
        vlSelf->DCache__DOT__miss__DOT__storeHalf_11[0U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_11_storeData[8U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_11[1U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_11_storeData[9U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_11[2U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_11_storeData[0xaU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_11[3U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_11_storeData[0xbU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_11[4U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_11_storeData[0xcU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_11[5U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_11_storeData[0xdU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_11[6U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_11_storeData[0xeU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_11[7U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_11_storeData[0xfU];
        vlSelf->DCache__DOT__miss__DOT__maskHalf_11 
            = (IData)((vlSelf->DCache__DOT__miss__DOT__entries_11_storeMask 
                       >> 0x20U));
        vlSelf->DCache__DOT__miss__DOT__storeHalf[0U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_0_storeData[8U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf[1U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_0_storeData[9U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf[2U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_0_storeData[0xaU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf[3U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_0_storeData[0xbU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf[4U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_0_storeData[0xcU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf[5U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_0_storeData[0xdU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf[6U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_0_storeData[0xeU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf[7U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_0_storeData[0xfU];
        vlSelf->DCache__DOT__miss__DOT__maskHalf = (IData)(
                                                           (vlSelf->DCache__DOT__miss__DOT__entries_0_storeMask 
                                                            >> 0x20U));
        vlSelf->DCache__DOT__miss__DOT__storeHalf_1[0U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_1_storeData[8U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_1[1U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_1_storeData[9U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_1[2U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_1_storeData[0xaU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_1[3U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_1_storeData[0xbU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_1[4U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_1_storeData[0xcU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_1[5U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_1_storeData[0xdU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_1[6U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_1_storeData[0xeU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_1[7U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_1_storeData[0xfU];
        vlSelf->DCache__DOT__miss__DOT__maskHalf_1 
            = (IData)((vlSelf->DCache__DOT__miss__DOT__entries_1_storeMask 
                       >> 0x20U));
        vlSelf->DCache__DOT__miss__DOT__storeHalf_2[0U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_2_storeData[8U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_2[1U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_2_storeData[9U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_2[2U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_2_storeData[0xaU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_2[3U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_2_storeData[0xbU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_2[4U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_2_storeData[0xcU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_2[5U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_2_storeData[0xdU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_2[6U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_2_storeData[0xeU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_2[7U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_2_storeData[0xfU];
        vlSelf->DCache__DOT__miss__DOT__maskHalf_2 
            = (IData)((vlSelf->DCache__DOT__miss__DOT__entries_2_storeMask 
                       >> 0x20U));
        vlSelf->DCache__DOT__miss__DOT__storeHalf_3[0U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_3_storeData[8U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_3[1U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_3_storeData[9U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_3[2U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_3_storeData[0xaU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_3[3U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_3_storeData[0xbU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_3[4U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_3_storeData[0xcU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_3[5U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_3_storeData[0xdU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_3[6U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_3_storeData[0xeU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_3[7U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_3_storeData[0xfU];
        vlSelf->DCache__DOT__miss__DOT__maskHalf_3 
            = (IData)((vlSelf->DCache__DOT__miss__DOT__entries_3_storeMask 
                       >> 0x20U));
        vlSelf->DCache__DOT__miss__DOT__storeHalf_4[0U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_4_storeData[8U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_4[1U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_4_storeData[9U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_4[2U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_4_storeData[0xaU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_4[3U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_4_storeData[0xbU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_4[4U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_4_storeData[0xcU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_4[5U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_4_storeData[0xdU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_4[6U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_4_storeData[0xeU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_4[7U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_4_storeData[0xfU];
        vlSelf->DCache__DOT__miss__DOT__maskHalf_4 
            = (IData)((vlSelf->DCache__DOT__miss__DOT__entries_4_storeMask 
                       >> 0x20U));
        vlSelf->DCache__DOT__miss__DOT__storeHalf_5[0U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_5_storeData[8U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_5[1U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_5_storeData[9U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_5[2U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_5_storeData[0xaU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_5[3U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_5_storeData[0xbU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_5[4U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_5_storeData[0xcU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_5[5U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_5_storeData[0xdU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_5[6U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_5_storeData[0xeU];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_5[7U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_5_storeData[0xfU];
        vlSelf->DCache__DOT__miss__DOT__maskHalf_5 
            = (IData)((vlSelf->DCache__DOT__miss__DOT__entries_5_storeMask 
                       >> 0x20U));
    } else {
        vlSelf->DCache__DOT__miss__DOT__storeHalf_12[0U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_12_storeData[0U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_12[1U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_12_storeData[1U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_12[2U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_12_storeData[2U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_12[3U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_12_storeData[3U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_12[4U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_12_storeData[4U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_12[5U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_12_storeData[5U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_12[6U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_12_storeData[6U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_12[7U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_12_storeData[7U];
        vlSelf->DCache__DOT__miss__DOT__maskHalf_12 
            = (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_storeMask);
        vlSelf->DCache__DOT__miss__DOT__storeHalf_13[0U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_13_storeData[0U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_13[1U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_13_storeData[1U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_13[2U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_13_storeData[2U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_13[3U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_13_storeData[3U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_13[4U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_13_storeData[4U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_13[5U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_13_storeData[5U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_13[6U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_13_storeData[6U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_13[7U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_13_storeData[7U];
        vlSelf->DCache__DOT__miss__DOT__maskHalf_13 
            = (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_storeMask);
        vlSelf->DCache__DOT__miss__DOT__storeHalf_14[0U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_14_storeData[0U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_14[1U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_14_storeData[1U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_14[2U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_14_storeData[2U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_14[3U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_14_storeData[3U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_14[4U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_14_storeData[4U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_14[5U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_14_storeData[5U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_14[6U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_14_storeData[6U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_14[7U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_14_storeData[7U];
        vlSelf->DCache__DOT__miss__DOT__maskHalf_14 
            = (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_storeMask);
        vlSelf->DCache__DOT__miss__DOT__storeHalf_15[0U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_15_storeData[0U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_15[1U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_15_storeData[1U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_15[2U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_15_storeData[2U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_15[3U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_15_storeData[3U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_15[4U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_15_storeData[4U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_15[5U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_15_storeData[5U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_15[6U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_15_storeData[6U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_15[7U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_15_storeData[7U];
        vlSelf->DCache__DOT__miss__DOT__maskHalf_15 
            = (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_storeMask);
        vlSelf->DCache__DOT__miss__DOT__storeHalf_6[0U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_6_storeData[0U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_6[1U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_6_storeData[1U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_6[2U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_6_storeData[2U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_6[3U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_6_storeData[3U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_6[4U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_6_storeData[4U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_6[5U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_6_storeData[5U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_6[6U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_6_storeData[6U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_6[7U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_6_storeData[7U];
        vlSelf->DCache__DOT__miss__DOT__maskHalf_6 
            = (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_storeMask);
        vlSelf->DCache__DOT__miss__DOT__storeHalf_7[0U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_7_storeData[0U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_7[1U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_7_storeData[1U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_7[2U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_7_storeData[2U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_7[3U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_7_storeData[3U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_7[4U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_7_storeData[4U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_7[5U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_7_storeData[5U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_7[6U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_7_storeData[6U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_7[7U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_7_storeData[7U];
        vlSelf->DCache__DOT__miss__DOT__maskHalf_7 
            = (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_storeMask);
        vlSelf->DCache__DOT__miss__DOT__storeHalf_8[0U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_8_storeData[0U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_8[1U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_8_storeData[1U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_8[2U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_8_storeData[2U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_8[3U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_8_storeData[3U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_8[4U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_8_storeData[4U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_8[5U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_8_storeData[5U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_8[6U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_8_storeData[6U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_8[7U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_8_storeData[7U];
        vlSelf->DCache__DOT__miss__DOT__maskHalf_8 
            = (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_storeMask);
        vlSelf->DCache__DOT__miss__DOT__storeHalf_9[0U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_9_storeData[0U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_9[1U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_9_storeData[1U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_9[2U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_9_storeData[2U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_9[3U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_9_storeData[3U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_9[4U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_9_storeData[4U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_9[5U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_9_storeData[5U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_9[6U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_9_storeData[6U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_9[7U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_9_storeData[7U];
        vlSelf->DCache__DOT__miss__DOT__maskHalf_9 
            = (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_storeMask);
        vlSelf->DCache__DOT__miss__DOT__storeHalf_10[0U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_10_storeData[0U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_10[1U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_10_storeData[1U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_10[2U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_10_storeData[2U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_10[3U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_10_storeData[3U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_10[4U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_10_storeData[4U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_10[5U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_10_storeData[5U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_10[6U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_10_storeData[6U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_10[7U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_10_storeData[7U];
        vlSelf->DCache__DOT__miss__DOT__maskHalf_10 
            = (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_storeMask);
        vlSelf->DCache__DOT__miss__DOT__storeHalf_11[0U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_11_storeData[0U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_11[1U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_11_storeData[1U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_11[2U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_11_storeData[2U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_11[3U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_11_storeData[3U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_11[4U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_11_storeData[4U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_11[5U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_11_storeData[5U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_11[6U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_11_storeData[6U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_11[7U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_11_storeData[7U];
        vlSelf->DCache__DOT__miss__DOT__maskHalf_11 
            = (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_storeMask);
        vlSelf->DCache__DOT__miss__DOT__storeHalf[0U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_0_storeData[0U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf[1U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_0_storeData[1U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf[2U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_0_storeData[2U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf[3U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_0_storeData[3U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf[4U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_0_storeData[4U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf[5U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_0_storeData[5U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf[6U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_0_storeData[6U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf[7U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_0_storeData[7U];
        vlSelf->DCache__DOT__miss__DOT__maskHalf = (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_storeMask);
        vlSelf->DCache__DOT__miss__DOT__storeHalf_1[0U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_1_storeData[0U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_1[1U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_1_storeData[1U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_1[2U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_1_storeData[2U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_1[3U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_1_storeData[3U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_1[4U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_1_storeData[4U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_1[5U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_1_storeData[5U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_1[6U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_1_storeData[6U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_1[7U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_1_storeData[7U];
        vlSelf->DCache__DOT__miss__DOT__maskHalf_1 
            = (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_storeMask);
        vlSelf->DCache__DOT__miss__DOT__storeHalf_2[0U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_2_storeData[0U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_2[1U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_2_storeData[1U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_2[2U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_2_storeData[2U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_2[3U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_2_storeData[3U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_2[4U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_2_storeData[4U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_2[5U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_2_storeData[5U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_2[6U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_2_storeData[6U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_2[7U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_2_storeData[7U];
        vlSelf->DCache__DOT__miss__DOT__maskHalf_2 
            = (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_storeMask);
        vlSelf->DCache__DOT__miss__DOT__storeHalf_3[0U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_3_storeData[0U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_3[1U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_3_storeData[1U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_3[2U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_3_storeData[2U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_3[3U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_3_storeData[3U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_3[4U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_3_storeData[4U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_3[5U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_3_storeData[5U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_3[6U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_3_storeData[6U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_3[7U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_3_storeData[7U];
        vlSelf->DCache__DOT__miss__DOT__maskHalf_3 
            = (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_storeMask);
        vlSelf->DCache__DOT__miss__DOT__storeHalf_4[0U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_4_storeData[0U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_4[1U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_4_storeData[1U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_4[2U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_4_storeData[2U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_4[3U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_4_storeData[3U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_4[4U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_4_storeData[4U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_4[5U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_4_storeData[5U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_4[6U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_4_storeData[6U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_4[7U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_4_storeData[7U];
        vlSelf->DCache__DOT__miss__DOT__maskHalf_4 
            = (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_storeMask);
        vlSelf->DCache__DOT__miss__DOT__storeHalf_5[0U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_5_storeData[0U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_5[1U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_5_storeData[1U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_5[2U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_5_storeData[2U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_5[3U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_5_storeData[3U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_5[4U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_5_storeData[4U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_5[5U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_5_storeData[5U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_5[6U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_5_storeData[6U];
        vlSelf->DCache__DOT__miss__DOT__storeHalf_5[7U] 
            = vlSelf->DCache__DOT__miss__DOT__entries_5_storeData[7U];
        vlSelf->DCache__DOT__miss__DOT__maskHalf_5 
            = (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_storeMask);
    }
    vlSelf->DCache__DOT__wb__DOT__isComp = ((1U == (IData)(vlSelf->io_l2_rxRsp_bits_opcode)) 
                                            | (3U == (IData)(vlSelf->io_l2_rxRsp_bits_opcode)));
    vlSelf->DCache__DOT__data_io_load_1_bits_bankMask 
        = (0xffU & ((IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_is128)
                     ? ((((IData)(1U) << (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_bank)) 
                         << 1U) | ((IData)(1U) << (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_bank)))
                     : ((IData)(1U) << (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_bank))));
    vlSelf->DCache__DOT__data_io_load_0_bits_bankMask 
        = (0xffU & ((IData)(vlSelf->DCache__DOT__loads_0__DOT__s1_is128)
                     ? ((((IData)(1U) << (IData)(vlSelf->DCache__DOT__loads_0__DOT__s1_bank)) 
                         << 1U) | ((IData)(1U) << (IData)(vlSelf->DCache__DOT__loads_0__DOT__s1_bank)))
                     : ((IData)(1U) << (IData)(vlSelf->DCache__DOT__loads_0__DOT__s1_bank))));
    vlSelf->DCache__DOT__loads_1__DOT___s1_go_T_1 = 
        ((~ (IData)(vlSelf->io_load_1_s1_kill)) & (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_valid));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_159 = 
        ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_opcode)) 
         | (5U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_opcode)));
    vlSelf->DCache__DOT__wb__DOT__allocId = ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)
                                              ? ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)
                                                  ? 
                                                 ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy)
                                                   ? 
                                                  ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy)
                                                    ? 
                                                   ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy)
                                                     ? 
                                                    ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy)
                                                      ? 
                                                     ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy)
                                                       ? 
                                                      ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy)
                                                        ? 
                                                       ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy)
                                                         ? 
                                                        ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy)
                                                          ? 
                                                         ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy)
                                                           ? 
                                                          ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy)
                                                            ? 
                                                           ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy)
                                                             ? 
                                                            ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy)
                                                              ? 
                                                             ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy)
                                                               ? 
                                                              ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy)
                                                                ? 
                                                               ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy)
                                                                 ? 0x11U
                                                                 : 0x10U)
                                                                : 0xfU)
                                                               : 0xeU)
                                                              : 0xdU)
                                                             : 0xcU)
                                                            : 0xbU)
                                                           : 0xaU)
                                                          : 9U)
                                                         : 8U)
                                                        : 7U)
                                                       : 6U)
                                                      : 5U)
                                                     : 4U)
                                                    : 3U)
                                                   : 2U)
                                                  : 1U)
                                              : 0U);
    vlSelf->DCache__DOT__loads_0__DOT___s1_go_T_1 = 
        ((~ (IData)(vlSelf->io_load_0_s1_kill)) & (IData)(vlSelf->DCache__DOT__loads_0__DOT__s1_valid));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_153 = vlSelf->DCache__DOT__wb__DOT__entries_17_busy;
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_141 = 
        ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_opcode)) 
         | (5U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_opcode)));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_150 = 
        ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_opcode)) 
         | (5U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_opcode)));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_78 = (
                                                   (2U 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_opcode)) 
                                                   | (5U 
                                                      == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_opcode)));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_87 = (
                                                   (2U 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_opcode)) 
                                                   | (5U 
                                                      == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_opcode)));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_96 = (
                                                   (2U 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_opcode)) 
                                                   | (5U 
                                                      == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_opcode)));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_105 = 
        ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_opcode)) 
         | (5U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_opcode)));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_114 = 
        ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_opcode)) 
         | (5U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_opcode)));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_123 = 
        ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_opcode)) 
         | (5U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_opcode)));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_132 = 
        ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_opcode)) 
         | (5U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_opcode)));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_6 = ((2U 
                                                   == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_opcode)) 
                                                  | (5U 
                                                     == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_opcode)));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_15 = (
                                                   (2U 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_opcode)) 
                                                   | (5U 
                                                      == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_opcode)));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_24 = (
                                                   (2U 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_opcode)) 
                                                   | (5U 
                                                      == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_opcode)));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_33 = (
                                                   (2U 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_opcode)) 
                                                   | (5U 
                                                      == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_opcode)));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_42 = (
                                                   (2U 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_opcode)) 
                                                   | (5U 
                                                      == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_opcode)));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_51 = (
                                                   (2U 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_opcode)) 
                                                   | (5U 
                                                      == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_opcode)));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_60 = (
                                                   (2U 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_opcode)) 
                                                   | (5U 
                                                      == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_opcode)));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_69 = (
                                                   (2U 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_opcode)) 
                                                   | (5U 
                                                      == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_opcode)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hb05b35d9__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_0_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_0_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h64277893__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_1_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_1_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hbbb4bf77__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_2_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_2_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h8dad96d8__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_3_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_3_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h69c04ed4__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_4_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_4_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1ce64408__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_5_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_5_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_heb8455ee__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_6_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_6_source)));
    vlSelf->DCache__DOT__wb__DOT__datHeld = (((IData)(vlSelf->DCache__DOT__wb__DOT__datHold) 
                                              & (((0x11U 
                                                   == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                   ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy)
                                                   : 
                                                  ((0x10U 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                    ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy)
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                     ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                      ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy)
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                       ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy)
                                                       : 
                                                      ((0xcU 
                                                        == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                        ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy)
                                                        : 
                                                       ((0xbU 
                                                         == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                         ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy)
                                                         : 
                                                        ((0xaU 
                                                          == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                          ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy)
                                                          : 
                                                         ((9U 
                                                           == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                           ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy)
                                                           : 
                                                          ((8U 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                            ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy)
                                                            : 
                                                           ((7U 
                                                             == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                             ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy)
                                                             : 
                                                            ((6U 
                                                              == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                              ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy)
                                                              : 
                                                             ((5U 
                                                               == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                               ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy)
                                                               : 
                                                              ((4U 
                                                                == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                                ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy)
                                                                : 
                                                               ((3U 
                                                                 == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                                 ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy)
                                                                 : 
                                                                ((2U 
                                                                  == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                                  ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy)
                                                                  : 
                                                                 ((1U 
                                                                   == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                                   ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)
                                                                   : (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)))))))))))))))))) 
                                                 & (3U 
                                                    == 
                                                    ((0x11U 
                                                      == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                      ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_state)
                                                      : 
                                                     ((0x10U 
                                                       == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                       ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_state)
                                                       : 
                                                      ((0xfU 
                                                        == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                        ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_state)
                                                        : 
                                                       ((0xeU 
                                                         == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                         ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_state)
                                                         : 
                                                        ((0xdU 
                                                          == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                          ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_state)
                                                          : 
                                                         ((0xcU 
                                                           == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                           ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_state)
                                                           : 
                                                          ((0xbU 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                            ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_state)
                                                            : 
                                                           ((0xaU 
                                                             == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                             ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_state)
                                                             : 
                                                            ((9U 
                                                              == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                              ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_state)
                                                              : 
                                                             ((8U 
                                                               == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                               ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_state)
                                                               : 
                                                              ((7U 
                                                                == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                                ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_state)
                                                                : 
                                                               ((6U 
                                                                 == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                                 ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_state)
                                                                 : 
                                                                ((5U 
                                                                  == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                                  ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_state)
                                                                  : 
                                                                 ((4U 
                                                                   == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                                   ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_state)
                                                                   : 
                                                                  ((3U 
                                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                                    ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_state)
                                                                    : 
                                                                   ((2U 
                                                                     == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                                     ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_state)
                                                                     : 
                                                                    ((1U 
                                                                      == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                                      ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_state)
                                                                      : (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_state))))))))))))))))))))) 
                                             & (0U 
                                                != 
                                                ((0x11U 
                                                  == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                  ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_beatsLeft)
                                                  : 
                                                 ((0x10U 
                                                   == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                   ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_beatsLeft)
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                    ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_beatsLeft)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                     ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_beatsLeft)
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                      ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_beatsLeft)
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                       ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_beatsLeft)
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                        ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_beatsLeft)
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                         ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_beatsLeft)
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                          ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_beatsLeft)
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                           ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_beatsLeft)
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                            ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_beatsLeft)
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                             ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_beatsLeft)
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                              ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_beatsLeft)
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                               ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_beatsLeft)
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                                ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_beatsLeft)
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                                 ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_beatsLeft)
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlSelf->DCache__DOT__wb__DOT__datHoldIdx))
                                                                  ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_beatsLeft)
                                                                  : (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_beatsLeft))))))))))))))))))));
    vlSelf->DCache__DOT__loads_1__DOT___s1_tag_way_T_15 
        = ((vlSelf->DCache__DOT__tags__DOT__arrays_1__DOT__banks_1__DOT__tagSram__DOT__mem_1
            [vlSelf->DCache__DOT__tags__DOT__arrays_1__DOT__banks_1__DOT__tagSram__DOT__mem_1_MPORT_addr_pipe_0] 
            == (0xfffffffffULL & (vlSelf->io_load_1_s1_paddr_dup_dcache 
                                  >> 0xcU))) & (0U 
                                                != (IData)(vlSelf->DCache__DOT__meta__DOT__r_1_3_coh)));
    vlSelf->DCache__DOT__loads_1__DOT___s1_tag_way_T_11 
        = ((vlSelf->DCache__DOT__tags__DOT__arrays_1__DOT__banks_1__DOT__tagSram__DOT__mem_0
            [vlSelf->DCache__DOT__tags__DOT__arrays_1__DOT__banks_1__DOT__tagSram__DOT__mem_0_MPORT_addr_pipe_0] 
            == (0xfffffffffULL & (vlSelf->io_load_1_s1_paddr_dup_dcache 
                                  >> 0xcU))) & (0U 
                                                != (IData)(vlSelf->DCache__DOT__meta__DOT__r_1_2_coh)));
    vlSelf->DCache__DOT__loads_1__DOT___s1_tag_way_T_7 
        = ((vlSelf->DCache__DOT__tags__DOT__arrays_1__DOT__banks_0__DOT__tagSram__DOT__mem_1
            [vlSelf->DCache__DOT__tags__DOT__arrays_1__DOT__banks_0__DOT__tagSram__DOT__mem_0_MPORT_addr_pipe_0] 
            == (0xfffffffffULL & (vlSelf->io_load_1_s1_paddr_dup_dcache 
                                  >> 0xcU))) & (0U 
                                                != (IData)(vlSelf->DCache__DOT__meta__DOT__r_1_1_coh)));
    vlSelf->DCache__DOT__loads_1__DOT___s1_tag_way_T_3 
        = ((vlSelf->DCache__DOT__tags__DOT__arrays_1__DOT__banks_0__DOT__tagSram__DOT__mem_0
            [vlSelf->DCache__DOT__tags__DOT__arrays_1__DOT__banks_0__DOT__tagSram__DOT__mem_0_MPORT_addr_pipe_0] 
            == (0xfffffffffULL & (vlSelf->io_load_1_s1_paddr_dup_dcache 
                                  >> 0xcU))) & (0U 
                                                != (IData)(vlSelf->DCache__DOT__meta__DOT__r_1_0_coh)));
    vlSelf->DCache__DOT__loads_0__DOT___s1_tag_way_T_15 
        = ((vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_1__DOT__tagSram__DOT__mem_1
            [vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_1__DOT__tagSram__DOT__mem_1_MPORT_addr_pipe_0] 
            == (0xfffffffffULL & (vlSelf->io_load_0_s1_paddr_dup_dcache 
                                  >> 0xcU))) & (0U 
                                                != (IData)(vlSelf->DCache__DOT__meta__DOT__r___05F3_coh)));
    vlSelf->DCache__DOT__loads_0__DOT___s1_tag_way_T_11 
        = ((vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_1__DOT__tagSram__DOT__mem_0
            [vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_1__DOT__tagSram__DOT__mem_1_MPORT_addr_pipe_0] 
            == (0xfffffffffULL & (vlSelf->io_load_0_s1_paddr_dup_dcache 
                                  >> 0xcU))) & (0U 
                                                != (IData)(vlSelf->DCache__DOT__meta__DOT__r___05F2_coh)));
    vlSelf->DCache__DOT__loads_0__DOT___s1_tag_way_T_7 
        = ((vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_0__DOT__tagSram__DOT__mem_1
            [vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_0__DOT__tagSram__DOT__mem_1_MPORT_addr_pipe_0] 
            == (0xfffffffffULL & (vlSelf->io_load_0_s1_paddr_dup_dcache 
                                  >> 0xcU))) & (0U 
                                                != (IData)(vlSelf->DCache__DOT__meta__DOT__r___05F1_coh)));
    vlSelf->DCache__DOT__loads_0__DOT___s1_tag_way_T_3 
        = ((vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_0__DOT__tagSram__DOT__mem_0
            [vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_0__DOT__tagSram__DOT__mem_1_MPORT_addr_pipe_0] 
            == (0xfffffffffULL & (vlSelf->io_load_0_s1_paddr_dup_dcache 
                                  >> 0xcU))) & (0U 
                                                != (IData)(vlSelf->DCache__DOT__meta__DOT__r___05F0_coh)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_ha82ab2c4__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_0_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_0_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hd39bd47f__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_1_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_1_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h30641be7__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_2_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_2_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h3c5f36f0__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_3_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_3_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h37dee91d__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_4_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_4_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_he4929bf3__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_5_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_5_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h5d32e72a__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_6_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_6_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hec99fcc7__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_7_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_7_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_ha4f7c151__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_0_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_0_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hf3dc866f__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_1_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_1_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hb9850717__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_2_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_2_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h93e80316__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_3_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_3_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h4d1ac0d5__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_4_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_4_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h139a5f49__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_5_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_5_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hf7313020__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_6_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_6_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hafe70b8f__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_7_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_7_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h52a6e7c3__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_0_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_0_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_he50ce861__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_1_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_1_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h459b65ff__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_2_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_2_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hb4c832da__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_3_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_3_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hea8f2495__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_4_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_4_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h8182bc95__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_5_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_5_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h3f218ab1__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_6_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_6_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hc6a0bcbd__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_7_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_7_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_haa5aa7e1__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_0_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_0_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hbea4ee78__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_1_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_1_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h0f5de785__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_2_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_2_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h8a58440c__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_3_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_3_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h5e1a8c55__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_4_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_4_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h773bc121__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_5_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_5_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hff8e87a9__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_6_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_6_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h54c4bcac__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_7_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_7_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h012f5926__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_0_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_0_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h60fa38df__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_1_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_1_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_he997681a__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_2_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_2_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h6a22ca28__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_3_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_3_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h7c0ae238__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_4_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_4_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h5cedfe0b__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_5_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_5_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h517971c3__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_6_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_6_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h9db56499__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_7_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_7_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h6c16a5f8__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_0_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_0_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hde818154__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_1_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_1_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_ha96f0a69__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_2_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_2_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h6d7cfb37__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_3_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_3_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hcc053339__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_4_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_4_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h777cb394__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_5_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_5_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h73811571__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_6_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_6_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h5f3ab0bd__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_7_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_7_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h372bdf5f__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_0_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_0_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h626c50bd__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_1_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_1_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h52ac261a__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_2_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_2_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h575f28e9__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_3_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_3_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hfba743ca__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_4_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_4_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h39f98d8b__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_5_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_5_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h08256e0e__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_6_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_6_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h78f0cd31__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_7_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_7_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h31c7e44a__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_0_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_0_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h63438a9f__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_1_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_1_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1778b92d__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_2_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_2_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_haf8bd464__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_3_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_3_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h46b4ebc5__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_4_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_4_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hbd994d4f__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_5_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_5_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h9fa3b143__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_6_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_6_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hab364bb6__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_7_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_7_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hac60b386__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_0_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_0_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1db80f75__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_1_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_1_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h4074c9e5__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_2_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_2_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h340f578f__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_3_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_3_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hc0872111__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_4_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_4_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h49e0e344__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_5_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_5_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hdcb805e5__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_6_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_6_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hb249a538__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_7_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_7_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h46cd77b2__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_0_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_0_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hd16c1380__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_1_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_1_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h94a0da00__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_2_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_2_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hd87b311e__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_3_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_3_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h8ddb632d__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_4_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_4_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h3bdc60c3__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_5_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_5_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h0b0254d6__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_6_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_6_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hc41f629d__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_7_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_7_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h3a8b672d__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_0_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_0_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h464c3e30__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_1_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_1_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hae014dc6__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_2_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_2_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h9621501d__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_3_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_3_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h3a1fc80a__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_4_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_4_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h615b7484__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_5_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_5_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h92a9dda2__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_6_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_6_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hb92d46c9__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_7_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_7_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_ha78f74c4__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_0_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_0_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hd7b80a96__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_1_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_1_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hc6615835__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_2_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_2_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h8a8d2b1c__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_3_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_3_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h08216823__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_4_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_4_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hacb0aa47__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_5_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_5_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1f391837__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_6_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_6_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_ha8ad35ef__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_7_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_7_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hf839751f__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_0_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_0_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hd21ab5c6__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_1_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_1_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h8a7fc2d8__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_2_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_2_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hedfca82f__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_3_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_3_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hca19e29c__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_4_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_4_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h7c906af7__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_5_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_5_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_ha7191196__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_6_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_6_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h48575628__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_7_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_7_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1f59e3c4__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_0_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_0_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1508cbee__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_1_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_1_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hddb728f0__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_2_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_2_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hdb95b317__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_3_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_3_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1a49c80b__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_4_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_4_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h7df3603a__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_5_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_5_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_ha5f234fa__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_6_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_6_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_he5471390__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_7_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_7_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h84122c5f__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_0_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_0_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1c22eb49__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_1_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_1_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h3a66ed9e__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_2_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_2_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h57b4a119__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_3_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_3_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hd2aa3350__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_4_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_4_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hee892809__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_5_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_5_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h28c74173__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_6_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_6_source)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_he7650560__0 
        = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_7_sent)) 
           & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_7_source)));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T = ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy) 
                                                & (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_dataReady));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_9 = ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy) 
                                                  & (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_dataReady));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_18 = ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy) 
                                                   & (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_dataReady));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_27 = ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy) 
                                                   & (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_dataReady));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_36 = ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy) 
                                                   & (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_dataReady));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_45 = ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy) 
                                                   & (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_dataReady));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_54 = ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy) 
                                                   & (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_dataReady));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_63 = ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy) 
                                                   & (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_dataReady));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_72 = ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy) 
                                                   & (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_dataReady));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_81 = ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy) 
                                                   & (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_dataReady));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_90 = ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy) 
                                                   & (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_dataReady));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_99 = ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy) 
                                                   & (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_dataReady));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_108 = 
        ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy) 
         & (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_dataReady));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_117 = 
        ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy) 
         & (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_dataReady));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_126 = 
        ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy) 
         & (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_dataReady));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_135 = 
        ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy) 
         & (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_dataReady));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_144 = 
        ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy) 
         & (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_dataReady));
    vlSelf->DCache__DOT__miss__DOT__datIn = ((IData)(vlSelf->io_l2_rxDat_valid) 
                                             & (0x10U 
                                                > (IData)(vlSelf->io_l2_rxDat_bits_txnID)));
    vlSelf->DCache__DOT__rspToWb = ((0x11U <= (IData)(vlSelf->io_l2_rxRsp_bits_txnID)) 
                                    & (0x23U > (IData)(vlSelf->io_l2_rxRsp_bits_txnID)));
    vlSelf->DCache__DOT__miss__DOT__allocId = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_busy)
                                                ? ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_busy)
                                                    ? 
                                                   ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_busy)
                                                     ? 
                                                    ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_busy)
                                                      ? 
                                                     ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_busy)
                                                       ? 
                                                      ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_busy)
                                                        ? 
                                                       ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_busy)
                                                         ? 
                                                        ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_busy)
                                                          ? 
                                                         ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_busy)
                                                           ? 
                                                          ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_busy)
                                                            ? 
                                                           ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_busy)
                                                             ? 
                                                            ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_busy)
                                                              ? 
                                                             ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_busy)
                                                               ? 
                                                              ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_busy)
                                                                ? 
                                                               ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_busy)
                                                                 ? 0xfU
                                                                 : 0xeU)
                                                                : 0xdU)
                                                               : 0xcU)
                                                              : 0xbU)
                                                             : 0xaU)
                                                            : 9U)
                                                           : 8U)
                                                          : 7U)
                                                         : 6U)
                                                        : 5U)
                                                       : 4U)
                                                      : 3U)
                                                     : 2U)
                                                    : 1U)
                                                : 0U);
    vlSelf->DCache__DOT__miss__DOT___storeHits_120_T 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_busy) 
           & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_refillDone));
    vlSelf->DCache__DOT__miss__DOT___storeHits_0_T 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_busy) 
           & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_refillDone));
    vlSelf->DCache__DOT__miss__DOT___storeHits_8_T 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_busy) 
           & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_refillDone));
    vlSelf->DCache__DOT__miss__DOT___storeHits_16_T 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_busy) 
           & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_refillDone));
    vlSelf->DCache__DOT__miss__DOT___storeHits_24_T 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_busy) 
           & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_refillDone));
    vlSelf->DCache__DOT__miss__DOT___storeHits_32_T 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_busy) 
           & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_refillDone));
    vlSelf->DCache__DOT__miss__DOT___storeHits_40_T 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_busy) 
           & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_refillDone));
    vlSelf->DCache__DOT__miss__DOT___storeHits_48_T 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_busy) 
           & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_refillDone));
    vlSelf->DCache__DOT__miss__DOT___storeHits_56_T 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_busy) 
           & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_refillDone));
    vlSelf->DCache__DOT__miss__DOT___storeHits_64_T 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_busy) 
           & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_refillDone));
    vlSelf->DCache__DOT__miss__DOT___storeHits_72_T 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_busy) 
           & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_refillDone));
    vlSelf->DCache__DOT__miss__DOT___storeHits_80_T 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_busy) 
           & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_refillDone));
    vlSelf->DCache__DOT__miss__DOT___storeHits_88_T 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_busy) 
           & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_refillDone));
    vlSelf->DCache__DOT__miss__DOT___storeHits_96_T 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_busy) 
           & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_refillDone));
    vlSelf->DCache__DOT__miss__DOT___storeHits_104_T 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_busy) 
           & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_refillDone));
    vlSelf->DCache__DOT__miss__DOT___storeHits_112_T 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_busy) 
           & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_refillDone));
    vlSelf->DCache__DOT__pipe__DOT__probeSet = (((IData)(vlSelf->DCache__DOT__probe__DOT__outBits_tagAlias) 
                                                 << 6U) 
                                                | (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->DCache__DOT__probe__DOT__outBits_addr 
                                                              >> 6U))));
    vlSelf->DCache__DOT__pipe__DOT__isAtomic1 = ((IData)(vlSelf->DCache__DOT__pipe__DOT__s1_valid) 
                                                 & (1U 
                                                    == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_src)));
    vlSelf->DCache__DOT__pipe_io_mainpipeInfo_s2Refill 
        = ((IData)(vlSelf->DCache__DOT__pipe__DOT__s2_valid) 
           & (3U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s2_hold_src)));
    vlSelf->DCache__DOT__pipe__DOT__twoBanks1 = (IData)(
                                                        ((0U 
                                                          != 
                                                          (0xff00U 
                                                           & (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoMask))) 
                                                         | (0x18U 
                                                            == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd))));
    vlSelf->DCache__DOT__pipe__DOT__isProbe1 = ((IData)(vlSelf->DCache__DOT__pipe__DOT__s1_valid) 
                                                & (2U 
                                                   == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_src)));
    vlSelf->DCache__DOT__pipe__DOT___storeNeed1_T_35 
        = ((((~ (IData)((0xffU == (0xffU & (IData)(
                                                   (vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask 
                                                    >> 0x38U)))))) 
             & (0U != (0xffU & (IData)((vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask 
                                        >> 0x38U))))) 
            << 7U) | ((((~ (IData)((0xffU == (0xffU 
                                              & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask 
                                                         >> 0x30U)))))) 
                        & (0U != (0xffU & (IData)((vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask 
                                                   >> 0x30U))))) 
                       << 6U) | ((((~ (IData)((0xffU 
                                               == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask 
                                                              >> 0x28U)))))) 
                                   & (0U != (0xffU 
                                             & (IData)(
                                                       (vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask 
                                                        >> 0x28U))))) 
                                  << 5U) | ((((~ (IData)(
                                                         (0xffU 
                                                          == 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask 
                                                                      >> 0x20U)))))) 
                                              & (0U 
                                                 != 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask 
                                                             >> 0x20U))))) 
                                             << 4U) 
                                            | ((((~ (IData)(
                                                            (0xffU 
                                                             == 
                                                             (0xffU 
                                                              & (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask 
                                                                         >> 0x18U)))))) 
                                                 & (0U 
                                                    != 
                                                    (0xffU 
                                                     & (IData)(
                                                               (vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask 
                                                                >> 0x18U))))) 
                                                << 3U) 
                                               | ((((~ (IData)(
                                                               (0xffU 
                                                                == 
                                                                (0xffU 
                                                                 & (IData)(
                                                                           (vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask 
                                                                            >> 0x10U)))))) 
                                                    & (0U 
                                                       != 
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask 
                                                                   >> 0x10U))))) 
                                                   << 2U) 
                                                  | ((((~ (IData)(
                                                                  (0xffU 
                                                                   == 
                                                                   (0xffU 
                                                                    & (IData)(
                                                                              (vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask 
                                                                               >> 8U)))))) 
                                                       & (0U 
                                                          != 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask 
                                                                      >> 8U))))) 
                                                      << 1U) 
                                                     | ((~ (IData)(
                                                                   (0xffU 
                                                                    == 
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask))))) 
                                                        & (0U 
                                                           != 
                                                           (0xffU 
                                                            & (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask)))))))))));
    vlSelf->DCache__DOT__pipe__DOT__isStore1 = ((IData)(vlSelf->DCache__DOT__pipe__DOT__s1_valid) 
                                                & (0U 
                                                   == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_src)));
    vlSelf->DCache__DOT__pipe__DOT__plru__DOT___GEN_21 
        = ((0x15U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_set))
            ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_21)
            : ((0x14U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_set))
                ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_20)
                : ((0x13U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_set))
                    ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_19)
                    : ((0x12U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_set))
                        ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_18)
                        : ((0x11U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_set))
                            ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_17)
                            : ((0x10U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_set))
                                ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_16)
                                : ((0xfU == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_set))
                                    ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_15)
                                    : ((0xeU == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_set))
                                        ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_14)
                                        : ((0xdU == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_set))
                                            ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_13)
                                            : ((0xcU 
                                                == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_set))
                                                ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_12)
                                                : (
                                                   (0xbU 
                                                    == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_set))
                                                    ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_11)
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_set))
                                                     ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_10)
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_set))
                                                      ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_9)
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_set))
                                                       ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_8)
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_set))
                                                        ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_7)
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_set))
                                                         ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_6)
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_set))
                                                          ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_5)
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_set))
                                                           ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_4)
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_set))
                                                            ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_3)
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_set))
                                                             ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_2)
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_set))
                                                              ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_1)
                                                              : (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_0))))))))))))))))))))));
    vlSelf->DCache__DOT__miss__DOT__txWant_0 = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_txreqDone)) 
                                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_busy));
    vlSelf->DCache__DOT__miss__DOT__txWant_1 = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_txreqDone)) 
                                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_busy));
    vlSelf->DCache__DOT__miss__DOT__txWant_2 = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_txreqDone)) 
                                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_busy));
    vlSelf->DCache__DOT__miss__DOT__txWant_3 = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_txreqDone)) 
                                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_busy));
    vlSelf->DCache__DOT__miss__DOT__txWant_4 = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_txreqDone)) 
                                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_busy));
    vlSelf->DCache__DOT__miss__DOT__txWant_5 = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_txreqDone)) 
                                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_busy));
    vlSelf->DCache__DOT__miss__DOT__txWant_6 = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_txreqDone)) 
                                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_busy));
    vlSelf->DCache__DOT__miss__DOT__txWant_7 = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_txreqDone)) 
                                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_busy));
    vlSelf->DCache__DOT__miss__DOT__txWant_8 = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_txreqDone)) 
                                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_busy));
    vlSelf->DCache__DOT__miss__DOT__txWant_9 = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_txreqDone)) 
                                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_busy));
    vlSelf->DCache__DOT__miss__DOT__txWant_10 = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_txreqDone)) 
                                                 & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_busy));
    vlSelf->DCache__DOT__miss__DOT__txWant_11 = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_txreqDone)) 
                                                 & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_busy));
    vlSelf->DCache__DOT__miss__DOT__txWant_12 = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_txreqDone)) 
                                                 & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_busy));
    vlSelf->DCache__DOT__miss__DOT__txWant_13 = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_txreqDone)) 
                                                 & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_busy));
    vlSelf->DCache__DOT__miss__DOT__txWant_14 = ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_txreqDone)) 
                                                 & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_busy));
    vlSelf->DCache__DOT__miss_io_snoopHold_15_valid 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_busy) 
           & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_dataDone));
    vlSelf->DCache__DOT__wb__DOT___io_block_1_T_81 
        = (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy) 
            & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
               == (0xffffffffffc0ULL & vlSelf->DCache__DOT__loads_1__DOT__s2_paddr))) 
           | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy) 
               & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__wb__DOT__entries_1_addr) 
                  == (0xffffffffffc0ULL & vlSelf->DCache__DOT__loads_1__DOT__s2_paddr))) 
              | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy) 
                  & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__wb__DOT__entries_2_addr) 
                     == (0xffffffffffc0ULL & vlSelf->DCache__DOT__loads_1__DOT__s2_paddr))) 
                 | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy) 
                     & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__wb__DOT__entries_3_addr) 
                        == (0xffffffffffc0ULL & vlSelf->DCache__DOT__loads_1__DOT__s2_paddr))) 
                    | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy) 
                        & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__wb__DOT__entries_4_addr) 
                           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__loads_1__DOT__s2_paddr))) 
                       | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy) 
                           & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__wb__DOT__entries_5_addr) 
                              == (0xffffffffffc0ULL 
                                  & vlSelf->DCache__DOT__loads_1__DOT__s2_paddr))) 
                          | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy) 
                              & ((0xffffffffffc0ULL 
                                  & vlSelf->DCache__DOT__wb__DOT__entries_6_addr) 
                                 == (0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__loads_1__DOT__s2_paddr))) 
                             | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy) 
                                 & ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_7_addr) 
                                    == (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__loads_1__DOT__s2_paddr))) 
                                | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy) 
                                    & ((0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_8_addr) 
                                       == (0xffffffffffc0ULL 
                                           & vlSelf->DCache__DOT__loads_1__DOT__s2_paddr))) 
                                   | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy) 
                                       & ((0xffffffffffc0ULL 
                                           & vlSelf->DCache__DOT__wb__DOT__entries_9_addr) 
                                          == (0xffffffffffc0ULL 
                                              & vlSelf->DCache__DOT__loads_1__DOT__s2_paddr))) 
                                      | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy) 
                                         & ((0xffffffffffc0ULL 
                                             & vlSelf->DCache__DOT__wb__DOT__entries_10_addr) 
                                            == (0xffffffffffc0ULL 
                                                & vlSelf->DCache__DOT__loads_1__DOT__s2_paddr)))))))))))));
    vlSelf->DCache__DOT__loads_0__DOT__s2_prefetch 
        = ((2U == (IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_req_cmd)) 
           | (3U == (IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_req_cmd)));
    vlSelf->DCache__DOT__loads_1__DOT__s2_prefetch 
        = ((2U == (IData)(vlSelf->DCache__DOT__loads_1__DOT__s2_req_cmd)) 
           | (3U == (IData)(vlSelf->DCache__DOT__loads_1__DOT__s2_req_cmd)));
    vlSelf->DCache__DOT__pipe__DOT__probeNew = ((3U 
                                                 == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_probeOp))
                                                 ? 
                                                ((3U 
                                                  == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_coh))
                                                  ? 2U
                                                  : (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_coh))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_probeOp))
                                                  ? 1U
                                                  : 0U));
    vlSelf->DCache__DOT__miss_io_snoopHold_0_valid 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_busy) 
           & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_dataDone));
    vlSelf->DCache__DOT__miss_io_snoopHold_1_valid 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_busy) 
           & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_dataDone));
    vlSelf->DCache__DOT__miss_io_snoopHold_2_valid 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_busy) 
           & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_dataDone));
    vlSelf->DCache__DOT__miss_io_snoopHold_3_valid 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_busy) 
           & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_dataDone));
    vlSelf->DCache__DOT__miss_io_snoopHold_4_valid 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_busy) 
           & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_dataDone));
    vlSelf->DCache__DOT__miss_io_snoopHold_5_valid 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_busy) 
           & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_dataDone));
    vlSelf->DCache__DOT__miss_io_snoopHold_6_valid 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_busy) 
           & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_dataDone));
    vlSelf->DCache__DOT__miss_io_snoopHold_7_valid 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_busy) 
           & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_dataDone));
    vlSelf->DCache__DOT__miss_io_snoopHold_8_valid 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_busy) 
           & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_dataDone));
    vlSelf->DCache__DOT__miss_io_snoopHold_9_valid 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_busy) 
           & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_dataDone));
    vlSelf->DCache__DOT__miss_io_snoopHold_10_valid 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_busy) 
           & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_dataDone));
    vlSelf->DCache__DOT__miss_io_snoopHold_11_valid 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_busy) 
           & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_dataDone));
    vlSelf->DCache__DOT__miss_io_snoopHold_12_valid 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_busy) 
           & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_dataDone));
    vlSelf->DCache__DOT__miss_io_snoopHold_13_valid 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_busy) 
           & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_dataDone));
    vlSelf->DCache__DOT__miss_io_snoopHold_14_valid 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_busy) 
           & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_dataDone));
    vlSelf->io_load_1_resp_valid = ((~ (IData)(vlSelf->io_load_1_s2_kill)) 
                                    & (IData)(vlSelf->DCache__DOT__loads_1__DOT__s2_valid));
    vlSelf->DCache__DOT__loads_1_io_unique_occupy_valid 
        = ((IData)(vlSelf->DCache__DOT__loads_1__DOT__s2_upgrade) 
           & (IData)(vlSelf->DCache__DOT__loads_1__DOT__s2_valid));
    vlSelf->DCache__DOT__pipe__DOT___storeBanks_T_18 
        = (((IData)((0U != (0xffU & (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                             >> 0x38U))))) 
            << 7U) | (((IData)((0U != (0xffU & (IData)(
                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                        >> 0x30U))))) 
                       << 6U) | (((IData)((0U != (0xffU 
                                                  & (IData)(
                                                            (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                             >> 0x28U))))) 
                                  << 5U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (0xffU 
                                                       & (IData)(
                                                                 (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                  >> 0x20U))))) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                     >> 0x18U))))) 
                                                << 3U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                        >> 0x10U))))) 
                                                   << 2U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (0xffU 
                                                                & (IData)(
                                                                          (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                                           >> 8U))))) 
                                                      << 1U) 
                                                     | (0U 
                                                        != 
                                                        (0xffU 
                                                         & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask))))))))));
    vlSelf->DCache__DOT__pipe__DOT__twoBanks3 = (IData)(
                                                        ((0U 
                                                          != 
                                                          (0xff00U 
                                                           & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))) 
                                                         | (0x18U 
                                                            == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd))));
    vlSelf->DCache__DOT__pipe__DOT__amoalu__DOT__wmask 
        = (((QData)((IData)(((0x80U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                              ? 0xffU : 0U))) << 0x38U) 
           | (((QData)((IData)(((0x40U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                 ? 0xffU : 0U))) << 0x30U) 
              | (((QData)((IData)(((0x20U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                    ? 0xffU : 0U))) 
                  << 0x28U) | (((QData)((IData)(((0x10U 
                                                  & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                                  ? 0xffU
                                                  : 0U))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((8U 
                                                                & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                                                ? 0xffU
                                                                : 0U) 
                                                              << 0x18U) 
                                                             | ((((4U 
                                                                   & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                                                   ? 0xffU
                                                                   : 0U) 
                                                                 << 0x10U) 
                                                                | ((((2U 
                                                                      & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                                                      ? 0xffU
                                                                      : 0U) 
                                                                    << 8U) 
                                                                   | ((1U 
                                                                       & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                                                       ? 0xffU
                                                                       : 0U))))))))));
    vlSelf->DCache__DOT__pipe__DOT__lineMatch = ((0xffffffffffc0ULL 
                                                  & vlSelf->DCache__DOT__pipe__DOT__s3_hold_addr) 
                                                 == vlSelf->DCache__DOT__pipe__DOT__lrsc_addr);
    vlSelf->DCache__DOT__pipe__DOT__s3_store = ((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_valid) 
                                                & (0U 
                                                   == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_src)));
    vlSelf->DCache__DOT__pipe__DOT__refillLine_hi_hi_lo 
        = (((QData)((IData)((0xffU & ((1U & (IData)(
                                                    (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                                     >> 0x37U)))
                                       ? ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xdU] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xdU] 
                                           >> 0x18U))
                                       : ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xdU] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xdU] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((1U & (IData)(
                                                          (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                                           >> 0x36U)))
                                             ? ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xdU] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xdU] 
                                                   >> 0x10U))
                                             : ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xdU] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xdU] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((1U 
                                                             & (IData)(
                                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                                                        >> 0x35U)))
                                                             ? 
                                                            ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xdU] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xdU] 
                                                                >> 8U))
                                                             : 
                                                            ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xdU] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xdU] 
                                                                >> 8U)))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((1U 
                                                              & (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                                                         >> 0x34U)))
                                                              ? 
                                                             vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xdU]
                                                              : 
                                                             vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xdU])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((1U 
                                                              & (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                                                         >> 0x33U)))
                                                              ? 
                                                             ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xcU] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xcU] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xcU] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xcU] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((1U 
                                                                    & (IData)(
                                                                              (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                                                               >> 0x32U)))
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xcU] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xcU] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xcU] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xcU] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((1U 
                                                                       & (IData)(
                                                                                (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                                                                >> 0x31U)))
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xcU] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xcU] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xcU] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xcU] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                                                                >> 0x30U)))
                                                                        ? 
                                                                       vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xcU]
                                                                        : 
                                                                       vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xcU])))))))))));
    vlSelf->DCache__DOT__pipe__DOT__refillLine_hi_lo_lo 
        = (((QData)((IData)((0xffU & ((1U & (IData)(
                                                    (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                                     >> 0x27U)))
                                       ? ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[9U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[9U] 
                                           >> 0x18U))
                                       : ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[9U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[9U] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((1U & (IData)(
                                                          (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                                           >> 0x26U)))
                                             ? ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[9U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[9U] 
                                                   >> 0x10U))
                                             : ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[9U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[9U] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((1U 
                                                             & (IData)(
                                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                                                        >> 0x25U)))
                                                             ? 
                                                            ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[9U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[9U] 
                                                                >> 8U))
                                                             : 
                                                            ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[9U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[9U] 
                                                                >> 8U)))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((1U 
                                                              & (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                                                         >> 0x24U)))
                                                              ? 
                                                             vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[9U]
                                                              : 
                                                             vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[9U])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((1U 
                                                              & (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                                                         >> 0x23U)))
                                                              ? 
                                                             ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[8U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[8U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[8U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[8U] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((1U 
                                                                    & (IData)(
                                                                              (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                                                               >> 0x22U)))
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[8U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[8U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[8U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[8U] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((1U 
                                                                       & (IData)(
                                                                                (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                                                                >> 0x21U)))
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[8U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[8U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[8U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[8U] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                                                                >> 0x20U)))
                                                                        ? 
                                                                       vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[8U]
                                                                        : 
                                                                       vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[8U])))))))))));
    vlSelf->DCache__DOT__pipe__DOT__refillLine_lo_hi_lo 
        = (((QData)((IData)((0xffU & ((1U & (IData)(
                                                    (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                                     >> 0x17U)))
                                       ? ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[5U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[5U] 
                                           >> 0x18U))
                                       : ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[5U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[5U] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((1U & (IData)(
                                                          (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                                           >> 0x16U)))
                                             ? ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[5U] 
                                                   >> 0x10U))
                                             : ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[5U] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((1U 
                                                             & (IData)(
                                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                                                        >> 0x15U)))
                                                             ? 
                                                            ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[5U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[5U] 
                                                                >> 8U))
                                                             : 
                                                            ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[5U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[5U] 
                                                                >> 8U)))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((1U 
                                                              & (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                                                         >> 0x14U)))
                                                              ? 
                                                             vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[5U]
                                                              : 
                                                             vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[5U])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((1U 
                                                              & (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                                                         >> 0x13U)))
                                                              ? 
                                                             ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[4U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[4U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[4U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[4U] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((1U 
                                                                    & (IData)(
                                                                              (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                                                               >> 0x12U)))
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[4U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[4U] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((1U 
                                                                       & (IData)(
                                                                                (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                                                                >> 0x11U)))
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[4U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[4U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[4U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[4U] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                                                                >> 0x10U)))
                                                                        ? 
                                                                       vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[4U]
                                                                        : 
                                                                       vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[4U])))))))))));
    vlSelf->DCache__DOT__pipe__DOT__refillLine_lo_lo_lo 
        = (((QData)((IData)((0xffU & ((1U & (IData)(
                                                    (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                                     >> 7U)))
                                       ? ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[1U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[1U] 
                                           >> 0x18U))
                                       : ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[1U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[1U] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((1U & (IData)(
                                                          (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                                           >> 6U)))
                                             ? ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[1U] 
                                                   >> 0x10U))
                                             : ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[1U] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((1U 
                                                             & (IData)(
                                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                                                        >> 5U)))
                                                             ? 
                                                            ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[1U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[1U] 
                                                                >> 8U))
                                                             : 
                                                            ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[1U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[1U] 
                                                                >> 8U)))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((1U 
                                                              & (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                                                         >> 4U)))
                                                              ? 
                                                             vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[1U]
                                                              : 
                                                             vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[1U])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((1U 
                                                              & (IData)(
                                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                                                         >> 3U)))
                                                              ? 
                                                             ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0U] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((1U 
                                                                    & (IData)(
                                                                              (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                                                               >> 2U)))
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0U] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((1U 
                                                                       & (IData)(
                                                                                (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                                                                >> 1U)))
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0U] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((1U 
                                                                        & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask))
                                                                        ? 
                                                                       vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0U]
                                                                        : 
                                                                       vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0U])))))))))));
    vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_63 
        = (0xffU & ((1U & (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                   >> 0x3fU))) ? ((
                                                   vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xfU] 
                                                   << 8U) 
                                                  | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xfU] 
                                                     >> 0x18U))
                     : ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xfU] 
                         << 8U) | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xfU] 
                                   >> 0x18U))));
    vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_62 
        = (0xffU & ((1U & (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                   >> 0x3eU))) ? ((
                                                   vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xfU] 
                                                   << 0x10U) 
                                                  | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xfU] 
                                                     >> 0x10U))
                     : ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xfU] 
                         << 0x10U) | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xfU] 
                                      >> 0x10U))));
    vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_61 
        = (0xffU & ((1U & (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                   >> 0x3dU))) ? ((
                                                   vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xfU] 
                                                   << 0x18U) 
                                                  | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xfU] 
                                                     >> 8U))
                     : ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xfU] 
                         << 0x18U) | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xfU] 
                                      >> 8U))));
    vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_60 
        = (0xffU & ((1U & (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                   >> 0x3cU))) ? vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xfU]
                     : vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xfU]));
    vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_59 
        = (0xffU & ((1U & (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                   >> 0x3bU))) ? ((
                                                   vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xeU] 
                                                   << 8U) 
                                                  | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xeU] 
                                                     >> 0x18U))
                     : ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xeU] 
                         << 8U) | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xeU] 
                                   >> 0x18U))));
    vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_58 
        = (0xffU & ((1U & (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                   >> 0x3aU))) ? ((
                                                   vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xeU] 
                                                   << 0x10U) 
                                                  | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xeU] 
                                                     >> 0x10U))
                     : ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xeU] 
                         << 0x10U) | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xeU] 
                                      >> 0x10U))));
    vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_57 
        = (0xffU & ((1U & (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                   >> 0x39U))) ? ((
                                                   vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xeU] 
                                                   << 0x18U) 
                                                  | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xeU] 
                                                     >> 8U))
                     : ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xeU] 
                         << 0x18U) | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xeU] 
                                      >> 8U))));
    vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_56 
        = (0xffU & ((1U & (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                   >> 0x38U))) ? vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xeU]
                     : vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xeU]));
    vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_47 
        = (0xffU & ((1U & (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                   >> 0x2fU))) ? ((
                                                   vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xbU] 
                                                   << 8U) 
                                                  | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xbU] 
                                                     >> 0x18U))
                     : ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xbU] 
                         << 8U) | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xbU] 
                                   >> 0x18U))));
    vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_46 
        = (0xffU & ((1U & (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                   >> 0x2eU))) ? ((
                                                   vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xbU] 
                                                   << 0x10U) 
                                                  | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xbU] 
                                                     >> 0x10U))
                     : ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xbU] 
                         << 0x10U) | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xbU] 
                                      >> 0x10U))));
    vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_45 
        = (0xffU & ((1U & (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                   >> 0x2dU))) ? ((
                                                   vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xbU] 
                                                   << 0x18U) 
                                                  | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xbU] 
                                                     >> 8U))
                     : ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xbU] 
                         << 0x18U) | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xbU] 
                                      >> 8U))));
    vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_44 
        = (0xffU & ((1U & (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                   >> 0x2cU))) ? vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xbU]
                     : vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xbU]));
    vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_43 
        = (0xffU & ((1U & (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                   >> 0x2bU))) ? ((
                                                   vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xaU] 
                                                   << 8U) 
                                                  | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xaU] 
                                                     >> 0x18U))
                     : ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xaU] 
                         << 8U) | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xaU] 
                                   >> 0x18U))));
    vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_42 
        = (0xffU & ((1U & (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                   >> 0x2aU))) ? ((
                                                   vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xaU] 
                                                   << 0x10U) 
                                                  | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xaU] 
                                                     >> 0x10U))
                     : ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xaU] 
                         << 0x10U) | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xaU] 
                                      >> 0x10U))));
    vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_41 
        = (0xffU & ((1U & (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                   >> 0x29U))) ? ((
                                                   vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xaU] 
                                                   << 0x18U) 
                                                  | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xaU] 
                                                     >> 8U))
                     : ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xaU] 
                         << 0x18U) | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xaU] 
                                      >> 8U))));
    vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_40 
        = (0xffU & ((1U & (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                   >> 0x28U))) ? vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0xaU]
                     : vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0xaU]));
    vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_31 
        = (0xffU & ((1U & (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                   >> 0x1fU))) ? ((
                                                   vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[7U] 
                                                   << 8U) 
                                                  | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[7U] 
                                                     >> 0x18U))
                     : ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[7U] 
                         << 8U) | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[7U] 
                                   >> 0x18U))));
    vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_30 
        = (0xffU & ((1U & (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                   >> 0x1eU))) ? ((
                                                   vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[7U] 
                                                   << 0x10U) 
                                                  | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[7U] 
                                                     >> 0x10U))
                     : ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[7U] 
                         << 0x10U) | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[7U] 
                                      >> 0x10U))));
    vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_29 
        = (0xffU & ((1U & (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                   >> 0x1dU))) ? ((
                                                   vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[7U] 
                                                   << 0x18U) 
                                                  | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[7U] 
                                                     >> 8U))
                     : ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[7U] 
                         << 0x18U) | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[7U] 
                                      >> 8U))));
    vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_28 
        = (0xffU & ((1U & (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                   >> 0x1cU))) ? vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[7U]
                     : vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[7U]));
    vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_27 
        = (0xffU & ((1U & (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                   >> 0x1bU))) ? ((
                                                   vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[6U] 
                                                   << 8U) 
                                                  | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[6U] 
                                                     >> 0x18U))
                     : ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[6U] 
                         << 8U) | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[6U] 
                                   >> 0x18U))));
    vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_26 
        = (0xffU & ((1U & (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                   >> 0x1aU))) ? ((
                                                   vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[6U] 
                                                   << 0x10U) 
                                                  | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[6U] 
                                                     >> 0x10U))
                     : ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[6U] 
                         << 0x10U) | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[6U] 
                                      >> 0x10U))));
    vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_25 
        = (0xffU & ((1U & (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                   >> 0x19U))) ? ((
                                                   vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[6U] 
                                                   << 0x18U) 
                                                  | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[6U] 
                                                     >> 8U))
                     : ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[6U] 
                         << 0x18U) | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[6U] 
                                      >> 8U))));
    vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_24 
        = (0xffU & ((1U & (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                   >> 0x18U))) ? vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[6U]
                     : vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[6U]));
    vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_15 
        = (0xffU & ((1U & (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                   >> 0xfU))) ? ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[3U] 
                                                  << 8U) 
                                                 | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[3U] 
                                                    >> 0x18U))
                     : ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[3U] 
                         << 8U) | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[3U] 
                                   >> 0x18U))));
    vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_14 
        = (0xffU & ((1U & (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                   >> 0xeU))) ? ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[3U] 
                                                  << 0x10U) 
                                                 | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[3U] 
                                                    >> 0x10U))
                     : ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[3U] 
                         << 0x10U) | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[3U] 
                                      >> 0x10U))));
    vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_13 
        = (0xffU & ((1U & (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                   >> 0xdU))) ? ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[3U] 
                                                  << 0x18U) 
                                                 | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[3U] 
                                                    >> 8U))
                     : ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[3U] 
                         << 0x18U) | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[3U] 
                                      >> 8U))));
    vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_12 
        = (0xffU & ((1U & (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                   >> 0xcU))) ? vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[3U]
                     : vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[3U]));
    vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_11 
        = (0xffU & ((1U & (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                   >> 0xbU))) ? ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[2U] 
                                                  << 8U) 
                                                 | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[2U] 
                                                    >> 0x18U))
                     : ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[2U] 
                         << 8U) | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[2U] 
                                   >> 0x18U))));
    vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_10 
        = (0xffU & ((1U & (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                   >> 0xaU))) ? ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[2U] 
                                                  << 0x10U) 
                                                 | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[2U] 
                                                    >> 0x10U))
                     : ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[2U] 
                         << 0x10U) | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[2U] 
                                      >> 0x10U))));
    vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_9 
        = (0xffU & ((1U & (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                   >> 9U))) ? ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[2U] 
                                                << 0x18U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[2U] 
                                                  >> 8U))
                     : ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[2U] 
                         << 0x18U) | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[2U] 
                                      >> 8U))));
    vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_8 
        = (0xffU & ((1U & (IData)((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                   >> 8U))) ? vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[2U]
                     : vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[2U]));
    vlSelf->DCache__DOT__pipe__DOT__amoalu__DOT__logic_and 
        = ((0xaU == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd)) 
           | (0xbU == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd)));
    vlSelf->DCache__DOT__pipe__DOT__plru__DOT___GEN_269 
        = ((0xdU == (0xffU & (IData)((vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                      >> 6U)))) ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_13)
            : ((0xcU == (0xffU & (IData)((vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                          >> 6U))))
                ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_12)
                : ((0xbU == (0xffU & (IData)((vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                              >> 6U))))
                    ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_11)
                    : ((0xaU == (0xffU & (IData)((vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                  >> 6U))))
                        ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_10)
                        : ((9U == (0xffU & (IData)(
                                                   (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                    >> 6U))))
                            ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_9)
                            : ((8U == (0xffU & (IData)(
                                                       (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                        >> 6U))))
                                ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_8)
                                : ((7U == (0xffU & (IData)(
                                                           (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                            >> 6U))))
                                    ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_7)
                                    : ((6U == (0xffU 
                                               & (IData)(
                                                         (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                          >> 6U))))
                                        ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_6)
                                        : ((5U == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                              >> 6U))))
                                            ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_5)
                                            : ((4U 
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                            >> 6U))))
                                                ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_4)
                                                : (
                                                   (3U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(
                                                               (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                                >> 6U))))
                                                    ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_3)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                                 >> 6U))))
                                                     ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_2)
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(
                                                                 (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                                  >> 6U))))
                                                      ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_1)
                                                      : (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_0))))))))))))));
    vlSelf->DCache__DOT__pipe__DOT___s3_cas_T_4 = (
                                                   (0x1aU 
                                                    == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd)) 
                                                   | ((0x1bU 
                                                       == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd)) 
                                                      | (0x18U 
                                                         == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd))));
    vlSelf->DCache__DOT__pipe__DOT__s3_atomic = ((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_valid) 
                                                 & (1U 
                                                    == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_src)));
    vlSelf->DCache__DOT__pipe__DOT__s3_probe = ((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_valid) 
                                                & (2U 
                                                   == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_src)));
    if ((0xfU == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_missId))) {
        vlSelf->DCache__DOT__miss__DOT___GEN_4164 = vlSelf->DCache__DOT__miss__DOT__entries_15_addr;
        vlSelf->DCache__DOT__miss__DOT___GEN_4180 = vlSelf->DCache__DOT__miss__DOT__entries_15_alias;
    } else if ((0xeU == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_missId))) {
        vlSelf->DCache__DOT__miss__DOT___GEN_4164 = vlSelf->DCache__DOT__miss__DOT__entries_14_addr;
        vlSelf->DCache__DOT__miss__DOT___GEN_4180 = vlSelf->DCache__DOT__miss__DOT__entries_14_alias;
    } else if ((0xdU == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_missId))) {
        vlSelf->DCache__DOT__miss__DOT___GEN_4164 = vlSelf->DCache__DOT__miss__DOT__entries_13_addr;
        vlSelf->DCache__DOT__miss__DOT___GEN_4180 = vlSelf->DCache__DOT__miss__DOT__entries_13_alias;
    } else if ((0xcU == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_missId))) {
        vlSelf->DCache__DOT__miss__DOT___GEN_4164 = vlSelf->DCache__DOT__miss__DOT__entries_12_addr;
        vlSelf->DCache__DOT__miss__DOT___GEN_4180 = vlSelf->DCache__DOT__miss__DOT__entries_12_alias;
    } else if ((0xbU == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_missId))) {
        vlSelf->DCache__DOT__miss__DOT___GEN_4164 = vlSelf->DCache__DOT__miss__DOT__entries_11_addr;
        vlSelf->DCache__DOT__miss__DOT___GEN_4180 = vlSelf->DCache__DOT__miss__DOT__entries_11_alias;
    } else if ((0xaU == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_missId))) {
        vlSelf->DCache__DOT__miss__DOT___GEN_4164 = vlSelf->DCache__DOT__miss__DOT__entries_10_addr;
        vlSelf->DCache__DOT__miss__DOT___GEN_4180 = vlSelf->DCache__DOT__miss__DOT__entries_10_alias;
    } else if ((9U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_missId))) {
        vlSelf->DCache__DOT__miss__DOT___GEN_4164 = vlSelf->DCache__DOT__miss__DOT__entries_9_addr;
        vlSelf->DCache__DOT__miss__DOT___GEN_4180 = vlSelf->DCache__DOT__miss__DOT__entries_9_alias;
    } else if ((8U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_missId))) {
        vlSelf->DCache__DOT__miss__DOT___GEN_4164 = vlSelf->DCache__DOT__miss__DOT__entries_8_addr;
        vlSelf->DCache__DOT__miss__DOT___GEN_4180 = vlSelf->DCache__DOT__miss__DOT__entries_8_alias;
    } else if ((7U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_missId))) {
        vlSelf->DCache__DOT__miss__DOT___GEN_4164 = vlSelf->DCache__DOT__miss__DOT__entries_7_addr;
        vlSelf->DCache__DOT__miss__DOT___GEN_4180 = vlSelf->DCache__DOT__miss__DOT__entries_7_alias;
    } else if ((6U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_missId))) {
        vlSelf->DCache__DOT__miss__DOT___GEN_4164 = vlSelf->DCache__DOT__miss__DOT__entries_6_addr;
        vlSelf->DCache__DOT__miss__DOT___GEN_4180 = vlSelf->DCache__DOT__miss__DOT__entries_6_alias;
    } else if ((5U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_missId))) {
        vlSelf->DCache__DOT__miss__DOT___GEN_4164 = vlSelf->DCache__DOT__miss__DOT__entries_5_addr;
        vlSelf->DCache__DOT__miss__DOT___GEN_4180 = vlSelf->DCache__DOT__miss__DOT__entries_5_alias;
    } else if ((4U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_missId))) {
        vlSelf->DCache__DOT__miss__DOT___GEN_4164 = vlSelf->DCache__DOT__miss__DOT__entries_4_addr;
        vlSelf->DCache__DOT__miss__DOT___GEN_4180 = vlSelf->DCache__DOT__miss__DOT__entries_4_alias;
    } else if ((3U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_missId))) {
        vlSelf->DCache__DOT__miss__DOT___GEN_4164 = vlSelf->DCache__DOT__miss__DOT__entries_3_addr;
        vlSelf->DCache__DOT__miss__DOT___GEN_4180 = vlSelf->DCache__DOT__miss__DOT__entries_3_alias;
    } else if ((2U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_missId))) {
        vlSelf->DCache__DOT__miss__DOT___GEN_4164 = vlSelf->DCache__DOT__miss__DOT__entries_2_addr;
        vlSelf->DCache__DOT__miss__DOT___GEN_4180 = vlSelf->DCache__DOT__miss__DOT__entries_2_alias;
    } else if ((1U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_missId))) {
        vlSelf->DCache__DOT__miss__DOT___GEN_4164 = vlSelf->DCache__DOT__miss__DOT__entries_1_addr;
        vlSelf->DCache__DOT__miss__DOT___GEN_4180 = vlSelf->DCache__DOT__miss__DOT__entries_1_alias;
    } else {
        vlSelf->DCache__DOT__miss__DOT___GEN_4164 = vlSelf->DCache__DOT__miss__DOT__entries_0_addr;
        vlSelf->DCache__DOT__miss__DOT___GEN_4180 = vlSelf->DCache__DOT__miss__DOT__entries_0_alias;
    }
    vlSelf->DCache__DOT__miss_io_probeDrop_0_valid 
        = ((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_0_state)) 
           & (0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_0_opcode)));
    vlSelf->DCache__DOT__miss_io_probeDrop_1_valid 
        = ((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_1_state)) 
           & (0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_1_opcode)));
    vlSelf->DCache__DOT__miss_io_probeDrop_2_valid 
        = ((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_2_state)) 
           & (0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_2_opcode)));
    vlSelf->DCache__DOT__miss_io_probeDrop_3_valid 
        = ((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_3_state)) 
           & (0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_3_opcode)));
    vlSelf->DCache__DOT__miss_io_probeDrop_4_valid 
        = ((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_4_state)) 
           & (0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_4_opcode)));
    vlSelf->DCache__DOT__miss_io_probeDrop_5_valid 
        = ((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_5_state)) 
           & (0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_5_opcode)));
    vlSelf->DCache__DOT__miss_io_probeDrop_6_valid 
        = ((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_6_state)) 
           & (0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_6_opcode)));
    vlSelf->DCache__DOT__miss_io_probeDrop_7_valid 
        = ((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_7_state)) 
           & (0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_7_opcode)));
    vlSelf->DCache__DOT__miss_io_probeDrop_8_valid 
        = ((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_8_state)) 
           & (0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_8_opcode)));
    vlSelf->DCache__DOT__miss_io_probeDrop_9_valid 
        = ((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_9_state)) 
           & (0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_9_opcode)));
    vlSelf->DCache__DOT__miss_io_probeDrop_10_valid 
        = ((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_10_state)) 
           & (0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_10_opcode)));
    vlSelf->DCache__DOT__miss_io_probeDrop_11_valid 
        = ((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_11_state)) 
           & (0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_11_opcode)));
    vlSelf->DCache__DOT__miss_io_probeDrop_12_valid 
        = ((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_12_state)) 
           & (0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_12_opcode)));
    vlSelf->DCache__DOT__miss_io_probeDrop_13_valid 
        = ((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_13_state)) 
           & (0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_13_opcode)));
    vlSelf->DCache__DOT__miss_io_probeDrop_14_valid 
        = ((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_14_state)) 
           & (0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_14_opcode)));
    vlSelf->DCache__DOT__miss_io_probeDrop_15_valid 
        = ((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_15_state)) 
           & (0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_15_opcode)));
    vlSelf->DCache__DOT__wb__DOT___io_block_0_T_81 
        = (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy) 
            & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
               == (0xffffffffffc0ULL & vlSelf->DCache__DOT__loads_0__DOT__s2_paddr))) 
           | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy) 
               & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__wb__DOT__entries_1_addr) 
                  == (0xffffffffffc0ULL & vlSelf->DCache__DOT__loads_0__DOT__s2_paddr))) 
              | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy) 
                  & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__wb__DOT__entries_2_addr) 
                     == (0xffffffffffc0ULL & vlSelf->DCache__DOT__loads_0__DOT__s2_paddr))) 
                 | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy) 
                     & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__wb__DOT__entries_3_addr) 
                        == (0xffffffffffc0ULL & vlSelf->DCache__DOT__loads_0__DOT__s2_paddr))) 
                    | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy) 
                        & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__wb__DOT__entries_4_addr) 
                           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__loads_0__DOT__s2_paddr))) 
                       | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy) 
                           & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__wb__DOT__entries_5_addr) 
                              == (0xffffffffffc0ULL 
                                  & vlSelf->DCache__DOT__loads_0__DOT__s2_paddr))) 
                          | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy) 
                              & ((0xffffffffffc0ULL 
                                  & vlSelf->DCache__DOT__wb__DOT__entries_6_addr) 
                                 == (0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__loads_0__DOT__s2_paddr))) 
                             | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy) 
                                 & ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_7_addr) 
                                    == (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__loads_0__DOT__s2_paddr))) 
                                | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy) 
                                    & ((0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_8_addr) 
                                       == (0xffffffffffc0ULL 
                                           & vlSelf->DCache__DOT__loads_0__DOT__s2_paddr))) 
                                   | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy) 
                                       & ((0xffffffffffc0ULL 
                                           & vlSelf->DCache__DOT__wb__DOT__entries_9_addr) 
                                          == (0xffffffffffc0ULL 
                                              & vlSelf->DCache__DOT__loads_0__DOT__s2_paddr))) 
                                      | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy) 
                                         & ((0xffffffffffc0ULL 
                                             & vlSelf->DCache__DOT__wb__DOT__entries_10_addr) 
                                            == (0xffffffffffc0ULL 
                                                & vlSelf->DCache__DOT__loads_0__DOT__s2_paddr)))))))))))));
    vlSelf->DCache__DOT__wb__DOT___io_block_2_T_81 
        = (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy) 
            & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
               == (0xffffffffffc0ULL & vlSelf->DCache__DOT__pipe__DOT__s2_hold_addr))) 
           | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy) 
               & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__wb__DOT__entries_1_addr) 
                  == (0xffffffffffc0ULL & vlSelf->DCache__DOT__pipe__DOT__s2_hold_addr))) 
              | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy) 
                  & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__wb__DOT__entries_2_addr) 
                     == (0xffffffffffc0ULL & vlSelf->DCache__DOT__pipe__DOT__s2_hold_addr))) 
                 | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy) 
                     & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__wb__DOT__entries_3_addr) 
                        == (0xffffffffffc0ULL & vlSelf->DCache__DOT__pipe__DOT__s2_hold_addr))) 
                    | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy) 
                        & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__wb__DOT__entries_4_addr) 
                           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__pipe__DOT__s2_hold_addr))) 
                       | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy) 
                           & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__wb__DOT__entries_5_addr) 
                              == (0xffffffffffc0ULL 
                                  & vlSelf->DCache__DOT__pipe__DOT__s2_hold_addr))) 
                          | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy) 
                              & ((0xffffffffffc0ULL 
                                  & vlSelf->DCache__DOT__wb__DOT__entries_6_addr) 
                                 == (0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__pipe__DOT__s2_hold_addr))) 
                             | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy) 
                                 & ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_7_addr) 
                                    == (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__pipe__DOT__s2_hold_addr))) 
                                | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy) 
                                    & ((0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_8_addr) 
                                       == (0xffffffffffc0ULL 
                                           & vlSelf->DCache__DOT__pipe__DOT__s2_hold_addr))) 
                                   | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy) 
                                       & ((0xffffffffffc0ULL 
                                           & vlSelf->DCache__DOT__wb__DOT__entries_9_addr) 
                                          == (0xffffffffffc0ULL 
                                              & vlSelf->DCache__DOT__pipe__DOT__s2_hold_addr))) 
                                      | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy) 
                                         & ((0xffffffffffc0ULL 
                                             & vlSelf->DCache__DOT__wb__DOT__entries_10_addr) 
                                            == (0xffffffffffc0ULL 
                                                & vlSelf->DCache__DOT__pipe__DOT__s2_hold_addr)))))))))))));
    vlSelf->DCache__DOT__pipe_io_pendingSnoop_valid 
        = ((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_valid) 
           & (3U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_src)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h4d77fa70__0 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_busy) 
           & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_refillDone)) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_isUpgrade)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h61b0276b__0 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_busy) 
           & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_refillDone)) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_isUpgrade)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h6783de16__0 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_busy) 
           & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_refillDone)) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_isUpgrade)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h7d4aa529__0 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_busy) 
           & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_refillDone)) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_isUpgrade)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hca8b2adc__0 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_busy) 
           & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_refillDone)) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_isUpgrade)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hf014a9c1__0 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_busy) 
           & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_refillDone)) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_isUpgrade)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h772cccf4__0 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_busy) 
           & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_refillDone)) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_isUpgrade)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h6a2b22db__0 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_busy) 
           & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_refillDone)) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_isUpgrade)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h4c369b54__0 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_busy) 
           & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_refillDone)) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_isUpgrade)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h43a696fc__0 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_busy) 
           & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_refillDone)) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_isUpgrade)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hcbcd308f__0 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_busy) 
           & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_refillDone)) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_isUpgrade)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h3d7e8f47__0 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_busy) 
           & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_refillDone)) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_isUpgrade)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hacb11800__0 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_busy) 
           & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_refillDone)) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_isUpgrade)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1e5176c2__0 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_busy) 
           & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_refillDone)) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_isUpgrade)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h3b4f30a1__0 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_busy) 
           & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_refillDone)) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_isUpgrade)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_haa49fc28__0 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_busy) 
           & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_refillDone)) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_isUpgrade)));
    vlSelf->DCache__DOT__miss__DOT___hit_T_89 = (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_alias) 
                                                  << 6U) 
                                                 | (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->DCache__DOT__miss__DOT__entries_12_addr 
                                                               >> 6U))));
    vlSelf->DCache__DOT__miss__DOT___hit_T_96 = (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_alias) 
                                                  << 6U) 
                                                 | (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->DCache__DOT__miss__DOT__entries_13_addr 
                                                               >> 6U))));
    vlSelf->DCache__DOT__miss__DOT___hit_T_103 = (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_alias) 
                                                   << 6U) 
                                                  | (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->DCache__DOT__miss__DOT__entries_14_addr 
                                                                >> 6U))));
    vlSelf->DCache__DOT__miss__DOT___hit_T_110 = (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_alias) 
                                                   << 6U) 
                                                  | (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->DCache__DOT__miss__DOT__entries_15_addr 
                                                                >> 6U))));
    vlSelf->DCache__DOT__miss__DOT___hit_T_5 = (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_alias) 
                                                 << 6U) 
                                                | (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->DCache__DOT__miss__DOT__entries_0_addr 
                                                              >> 6U))));
    vlSelf->DCache__DOT__miss__DOT___hit_T_12 = (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_alias) 
                                                  << 6U) 
                                                 | (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->DCache__DOT__miss__DOT__entries_1_addr 
                                                               >> 6U))));
    vlSelf->DCache__DOT__miss__DOT___hit_T_19 = (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_alias) 
                                                  << 6U) 
                                                 | (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->DCache__DOT__miss__DOT__entries_2_addr 
                                                               >> 6U))));
    vlSelf->DCache__DOT__miss__DOT___hit_T_26 = (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_alias) 
                                                  << 6U) 
                                                 | (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->DCache__DOT__miss__DOT__entries_3_addr 
                                                               >> 6U))));
    vlSelf->DCache__DOT__miss__DOT___hit_T_33 = (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_alias) 
                                                  << 6U) 
                                                 | (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->DCache__DOT__miss__DOT__entries_4_addr 
                                                               >> 6U))));
    vlSelf->DCache__DOT__miss__DOT___hit_T_40 = (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_alias) 
                                                  << 6U) 
                                                 | (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->DCache__DOT__miss__DOT__entries_5_addr 
                                                               >> 6U))));
    vlSelf->DCache__DOT__miss__DOT___hit_T_47 = (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_alias) 
                                                  << 6U) 
                                                 | (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->DCache__DOT__miss__DOT__entries_6_addr 
                                                               >> 6U))));
    vlSelf->DCache__DOT__miss__DOT___hit_T_54 = (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_alias) 
                                                  << 6U) 
                                                 | (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->DCache__DOT__miss__DOT__entries_7_addr 
                                                               >> 6U))));
    vlSelf->DCache__DOT__miss__DOT___hit_T_61 = (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_alias) 
                                                  << 6U) 
                                                 | (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->DCache__DOT__miss__DOT__entries_8_addr 
                                                               >> 6U))));
    vlSelf->DCache__DOT__miss__DOT___hit_T_68 = (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_alias) 
                                                  << 6U) 
                                                 | (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->DCache__DOT__miss__DOT__entries_9_addr 
                                                               >> 6U))));
    vlSelf->DCache__DOT__miss__DOT___hit_T_75 = (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_alias) 
                                                  << 6U) 
                                                 | (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->DCache__DOT__miss__DOT__entries_10_addr 
                                                               >> 6U))));
    vlSelf->DCache__DOT__miss__DOT___hit_T_82 = (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_alias) 
                                                  << 6U) 
                                                 | (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->DCache__DOT__miss__DOT__entries_11_addr 
                                                               >> 6U))));
    vlSelf->io_load_0_resp_valid = ((~ (IData)(vlSelf->io_load_0_s2_kill)) 
                                    & (IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_valid));
    vlSelf->DCache__DOT__loads_0_io_unique_occupy_valid 
        = ((IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_upgrade) 
           & (IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_valid));
    vlSelf->DCache__DOT__pipe__DOT__specWay = ((((0U 
                                                  != (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_replaceWay)) 
                                                 & (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_replaceWay) 
                                                        >> 2U)))) 
                                                << 1U) 
                                               | (1U 
                                                  & ((((0U 
                                                        != (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_replaceWay))
                                                        ? 
                                                       ((IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_replaceWay) 
                                                        >> 2U)
                                                        : 0U) 
                                                      | ((0U 
                                                          != (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_replaceWay))
                                                          ? (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_replaceWay)
                                                          : 1U)) 
                                                     >> 1U)));
    vlSelf->DCache__DOT__pipe__DOT__s2_write_hit = 
        ((IData)(vlSelf->DCache__DOT__pipe__DOT__s2_hit) 
         & ((2U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s2_coh)) 
            | (3U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s2_coh))));
    vlSelf->DCache__DOT__pipe__DOT__s2_atomic = ((IData)(vlSelf->DCache__DOT__pipe__DOT__s2_valid) 
                                                 & (1U 
                                                    == (IData)(vlSelf->DCache__DOT__pipe__DOT__s2_hold_src)));
    vlSelf->DCache__DOT__pipe__DOT__s2_store = ((IData)(vlSelf->DCache__DOT__pipe__DOT__s2_valid) 
                                                & (0U 
                                                   == (IData)(vlSelf->DCache__DOT__pipe__DOT__s2_hold_src)));
    vlSelf->DCache__DOT__pipe__DOT__isRefill1 = ((IData)(vlSelf->DCache__DOT__pipe__DOT__s1_valid) 
                                                 & (3U 
                                                    == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_src)));
    vlSelf->DCache__DOT__tags_io_resp_2_0 = vlSelf->DCache__DOT__tags__DOT__arrays_2__DOT__banks_0__DOT__tagSram__DOT__mem_0
        [vlSelf->DCache__DOT__tags__DOT__arrays_2__DOT__banks_0__DOT__tagSram__DOT__mem_1_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__tags_io_resp_2_1 = vlSelf->DCache__DOT__tags__DOT__arrays_2__DOT__banks_0__DOT__tagSram__DOT__mem_1
        [vlSelf->DCache__DOT__tags__DOT__arrays_2__DOT__banks_0__DOT__tagSram__DOT__mem_1_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__tags_io_resp_2_2 = vlSelf->DCache__DOT__tags__DOT__arrays_2__DOT__banks_1__DOT__tagSram__DOT__mem_0
        [vlSelf->DCache__DOT__tags__DOT__arrays_2__DOT__banks_1__DOT__tagSram__DOT__mem_1_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__tags_io_resp_2_3 = vlSelf->DCache__DOT__tags__DOT__arrays_2__DOT__banks_1__DOT__tagSram__DOT__mem_1
        [vlSelf->DCache__DOT__tags__DOT__arrays_2__DOT__banks_1__DOT__tagSram__DOT__mem_1_MPORT_addr_pipe_0];
    if (vlSelf->DCache__DOT__pipe__DOT__s1_first) {
        vlSelf->DCache__DOT__pipe__DOT__metaNow_3_coh 
            = vlSelf->DCache__DOT__meta__DOT__r_2_3_coh;
        vlSelf->DCache__DOT__pipe__DOT__metaNow_2_coh 
            = vlSelf->DCache__DOT__meta__DOT__r_2_2_coh;
        vlSelf->DCache__DOT__pipe__DOT__metaNow_1_coh 
            = vlSelf->DCache__DOT__meta__DOT__r_2_1_coh;
        vlSelf->DCache__DOT__pipe__DOT__metaNow_0_coh 
            = vlSelf->DCache__DOT__meta__DOT__r_2_0_coh;
    } else {
        vlSelf->DCache__DOT__pipe__DOT__metaNow_3_coh 
            = vlSelf->DCache__DOT__pipe__DOT__s1_meta_3_coh;
        vlSelf->DCache__DOT__pipe__DOT__metaNow_2_coh 
            = vlSelf->DCache__DOT__pipe__DOT__s1_meta_2_coh;
        vlSelf->DCache__DOT__pipe__DOT__metaNow_1_coh 
            = vlSelf->DCache__DOT__pipe__DOT__s1_meta_1_coh;
        vlSelf->DCache__DOT__pipe__DOT__metaNow_0_coh 
            = vlSelf->DCache__DOT__pipe__DOT__s1_meta_0_coh;
    }
    vlSelf->io_atomics_resp_bits_id = vlSelf->io_store_main_pipe_hit_resp_bits_id;
    vlSelf->DCache__DOT__miss__DOT___GEN_3690 = ((IData)(vlSelf->io_cmoResp_valid)
                                                  ? 
                                                 (((IData)(vlSelf->io_cmoResp_ready) 
                                                   & (IData)(vlSelf->io_cmoResp_valid))
                                                   ? 0U
                                                   : (IData)(vlSelf->DCache__DOT__miss__DOT__cmoState))
                                                  : (IData)(vlSelf->DCache__DOT__miss__DOT__cmoState));
    if (vlSelf->io_forwardMshr_half) {
        vlSelf->io_forwardMshr_data_bits[0U] = DCache__DOT__miss__DOT___GEN_4996[8U];
        vlSelf->io_forwardMshr_data_bits[1U] = DCache__DOT__miss__DOT___GEN_4996[9U];
        vlSelf->io_forwardMshr_data_bits[2U] = DCache__DOT__miss__DOT___GEN_4996[0xaU];
        vlSelf->io_forwardMshr_data_bits[3U] = DCache__DOT__miss__DOT___GEN_4996[0xbU];
        vlSelf->io_forwardMshr_data_bits[4U] = DCache__DOT__miss__DOT___GEN_4996[0xcU];
        vlSelf->io_forwardMshr_data_bits[5U] = DCache__DOT__miss__DOT___GEN_4996[0xdU];
        vlSelf->io_forwardMshr_data_bits[6U] = DCache__DOT__miss__DOT___GEN_4996[0xeU];
        vlSelf->io_forwardMshr_data_bits[7U] = DCache__DOT__miss__DOT___GEN_4996[0xfU];
    } else {
        vlSelf->io_forwardMshr_data_bits[0U] = DCache__DOT__miss__DOT___GEN_4996[0U];
        vlSelf->io_forwardMshr_data_bits[1U] = DCache__DOT__miss__DOT___GEN_4996[1U];
        vlSelf->io_forwardMshr_data_bits[2U] = DCache__DOT__miss__DOT___GEN_4996[2U];
        vlSelf->io_forwardMshr_data_bits[3U] = DCache__DOT__miss__DOT___GEN_4996[3U];
        vlSelf->io_forwardMshr_data_bits[4U] = DCache__DOT__miss__DOT___GEN_4996[4U];
        vlSelf->io_forwardMshr_data_bits[5U] = DCache__DOT__miss__DOT___GEN_4996[5U];
        vlSelf->io_forwardMshr_data_bits[6U] = DCache__DOT__miss__DOT___GEN_4996[6U];
        vlSelf->io_forwardMshr_data_bits[7U] = DCache__DOT__miss__DOT___GEN_4996[7U];
    }
    vlSelf->DCache__DOT__miss__DOT___T_1937 = ((IData)(vlSelf->io_cmoReq_ready) 
                                               & (IData)(vlSelf->io_cmoReq_valid));
    vlSelf->io_wfi_safe = (((~ ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_busy) 
                                | ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_busy) 
                                   | ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_busy) 
                                      | ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_busy) 
                                         | ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_busy) 
                                            | ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_busy) 
                                               | ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_busy) 
                                                  | ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_busy) 
                                                     | ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_busy) 
                                                        | ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_busy) 
                                                           | ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_busy) 
                                                              | ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_busy) 
                                                                 | ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_busy) 
                                                                    | ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_busy) 
                                                                       | ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_busy) 
                                                                          | (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_busy))))))))))))))))) 
                            & (IData)(vlSelf->io_cmoReq_ready)) 
                           & ((~ ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy) 
                                  | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy) 
                                     | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy) 
                                        | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy) 
                                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy) 
                                              | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy) 
                                                 | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy) 
                                                    | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy) 
                                                       | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy) 
                                                          | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy) 
                                                             | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy) 
                                                                | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy) 
                                                                   | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy) 
                                                                      | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy) 
                                                                         | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy) 
                                                                            | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy) 
                                                                               | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy) 
                                                                                | (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy))))))))))))))))))) 
                              & ((~ (((IData)(vlSelf->DCache__DOT__pipe__DOT__s1_valid) 
                                      | ((IData)(vlSelf->DCache__DOT__pipe__DOT__s2_valid) 
                                         | (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_valid))) 
                                     | (((IData)(vlSelf->DCache__DOT__loads_0__DOT__s1_valid) 
                                         | (IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_valid)) 
                                        | ((IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_valid) 
                                           | (IData)(vlSelf->DCache__DOT__loads_1__DOT__s2_valid))))) 
                                 & (~ ((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_0_state)) 
                                       | ((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_1_state)) 
                                          | ((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_2_state)) 
                                             | ((0U 
                                                 != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_3_state)) 
                                                | ((0U 
                                                    != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_4_state)) 
                                                   | ((0U 
                                                       != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_5_state)) 
                                                      | ((0U 
                                                          != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_6_state)) 
                                                         | ((0U 
                                                             != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_7_state)) 
                                                            | ((0U 
                                                                != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_8_state)) 
                                                               | ((0U 
                                                                   != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_9_state)) 
                                                                  | ((0U 
                                                                      != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_10_state)) 
                                                                     | ((0U 
                                                                         != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_11_state)) 
                                                                        | ((0U 
                                                                            != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_12_state)) 
                                                                           | ((0U 
                                                                               != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_13_state)) 
                                                                              | ((0U 
                                                                                != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_14_state)) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_15_state)) 
                                                                                | (IData)(vlSelf->DCache__DOT__probe__DOT__outValid)))))))))))))))))))));
    vlSelf->DCache__DOT__probe__DOT___T = ((IData)(vlSelf->io_l2_rxSnp_ready) 
                                           & (IData)(vlSelf->io_l2_rxSnp_valid));
    vlSelf->DCache__DOT__probe__DOT___GEN_241 = ((0xfU 
                                                  == (IData)(vlSelf->DCache__DOT__probe__DOT__allocId))
                                                  ? (IData)(vlSelf->DCache__DOT__probe__DOT__entries_15_state)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->DCache__DOT__probe__DOT__allocId))
                                                   ? (IData)(vlSelf->DCache__DOT__probe__DOT__entries_14_state)
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->DCache__DOT__probe__DOT__allocId))
                                                    ? (IData)(vlSelf->DCache__DOT__probe__DOT__entries_13_state)
                                                    : 
                                                   ((0xcU 
                                                     == (IData)(vlSelf->DCache__DOT__probe__DOT__allocId))
                                                     ? (IData)(vlSelf->DCache__DOT__probe__DOT__entries_12_state)
                                                     : 
                                                    ((0xbU 
                                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__allocId))
                                                      ? (IData)(vlSelf->DCache__DOT__probe__DOT__entries_11_state)
                                                      : 
                                                     ((0xaU 
                                                       == (IData)(vlSelf->DCache__DOT__probe__DOT__allocId))
                                                       ? (IData)(vlSelf->DCache__DOT__probe__DOT__entries_10_state)
                                                       : 
                                                      ((9U 
                                                        == (IData)(vlSelf->DCache__DOT__probe__DOT__allocId))
                                                        ? (IData)(vlSelf->DCache__DOT__probe__DOT__entries_9_state)
                                                        : 
                                                       ((8U 
                                                         == (IData)(vlSelf->DCache__DOT__probe__DOT__allocId))
                                                         ? (IData)(vlSelf->DCache__DOT__probe__DOT__entries_8_state)
                                                         : 
                                                        ((7U 
                                                          == (IData)(vlSelf->DCache__DOT__probe__DOT__allocId))
                                                          ? (IData)(vlSelf->DCache__DOT__probe__DOT__entries_7_state)
                                                          : 
                                                         ((6U 
                                                           == (IData)(vlSelf->DCache__DOT__probe__DOT__allocId))
                                                           ? (IData)(vlSelf->DCache__DOT__probe__DOT__entries_6_state)
                                                           : 
                                                          ((5U 
                                                            == (IData)(vlSelf->DCache__DOT__probe__DOT__allocId))
                                                            ? (IData)(vlSelf->DCache__DOT__probe__DOT__entries_5_state)
                                                            : 
                                                           ((4U 
                                                             == (IData)(vlSelf->DCache__DOT__probe__DOT__allocId))
                                                             ? (IData)(vlSelf->DCache__DOT__probe__DOT__entries_4_state)
                                                             : 
                                                            ((3U 
                                                              == (IData)(vlSelf->DCache__DOT__probe__DOT__allocId))
                                                              ? (IData)(vlSelf->DCache__DOT__probe__DOT__entries_3_state)
                                                              : 
                                                             ((2U 
                                                               == (IData)(vlSelf->DCache__DOT__probe__DOT__allocId))
                                                               ? (IData)(vlSelf->DCache__DOT__probe__DOT__entries_2_state)
                                                               : 
                                                              ((1U 
                                                                == (IData)(vlSelf->DCache__DOT__probe__DOT__allocId))
                                                                ? (IData)(vlSelf->DCache__DOT__probe__DOT__entries_1_state)
                                                                : (IData)(vlSelf->DCache__DOT__probe__DOT__entries_0_state))))))))))))))));
    vlSelf->DCache__DOT__wb__DOT___io_block_3_T_88 
        = ((IData)(DCache__DOT__wb__DOT___io_block_3_T_81) 
           | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy) 
               & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__wb__DOT__entries_11_addr) 
                  == (0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__cmoAddr))) 
              | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy) 
                  & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__wb__DOT__entries_12_addr) 
                     == (0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__cmoAddr))) 
                 | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy) 
                     & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__wb__DOT__entries_13_addr) 
                        == (0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__cmoAddr))) 
                    | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy) 
                        & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__wb__DOT__entries_14_addr) 
                           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__miss__DOT__cmoAddr))) 
                       | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy) 
                           & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__wb__DOT__entries_15_addr) 
                              == (0xffffffffffc0ULL 
                                  & vlSelf->DCache__DOT__miss__DOT__cmoAddr))) 
                          | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy) 
                              & ((0xffffffffffc0ULL 
                                  & vlSelf->DCache__DOT__wb__DOT__entries_16_addr) 
                                 == (0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__miss__DOT__cmoAddr))) 
                             | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy) 
                                & ((0xffffffffffc0ULL 
                                    & vlSelf->DCache__DOT__wb__DOT__entries_17_addr) 
                                   == (0xffffffffffc0ULL 
                                       & vlSelf->DCache__DOT__miss__DOT__cmoAddr))))))))));
    vlSelf->DCache__DOT__loads_0__DOT___GEN_46 = ((2U 
                                                   == (IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_way))
                                                   ? 
                                                  ((7U 
                                                    == (IData)(vlSelf->DCache__DOT__data__DOT__bank0))
                                                    ? vlSelf->DCache__DOT__data__DOT__dataBank_7_io_r_data_2
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->DCache__DOT__data__DOT__bank0))
                                                     ? vlSelf->DCache__DOT__data__DOT__dataBank_6_io_r_data_2
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->DCache__DOT__data__DOT__bank0))
                                                      ? vlSelf->DCache__DOT__data__DOT__dataBank_5_io_r_data_2
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlSelf->DCache__DOT__data__DOT__bank0))
                                                       ? vlSelf->DCache__DOT__data__DOT__dataBank_4_io_r_data_2
                                                       : 
                                                      ((3U 
                                                        == (IData)(vlSelf->DCache__DOT__data__DOT__bank0))
                                                        ? vlSelf->DCache__DOT__data__DOT__dataBank_3_io_r_data_2
                                                        : 
                                                       ((2U 
                                                         == (IData)(vlSelf->DCache__DOT__data__DOT__bank0))
                                                         ? vlSelf->DCache__DOT__data__DOT__dataBank_2_io_r_data_2
                                                         : 
                                                        ((1U 
                                                          == (IData)(vlSelf->DCache__DOT__data__DOT__bank0))
                                                          ? vlSelf->DCache__DOT__data__DOT__dataBank_1_io_r_data_2
                                                          : vlSelf->DCache__DOT__data__DOT__dataBank_0_io_r_data_2)))))))
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_way))
                                                    ? 
                                                   ((7U 
                                                     == (IData)(vlSelf->DCache__DOT__data__DOT__bank0))
                                                     ? vlSelf->DCache__DOT__data__DOT__dataBank_7_io_r_data_1
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->DCache__DOT__data__DOT__bank0))
                                                      ? vlSelf->DCache__DOT__data__DOT__dataBank_6_io_r_data_1
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->DCache__DOT__data__DOT__bank0))
                                                       ? vlSelf->DCache__DOT__data__DOT__dataBank_5_io_r_data_1
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelf->DCache__DOT__data__DOT__bank0))
                                                        ? vlSelf->DCache__DOT__data__DOT__dataBank_4_io_r_data_1
                                                        : 
                                                       ((3U 
                                                         == (IData)(vlSelf->DCache__DOT__data__DOT__bank0))
                                                         ? vlSelf->DCache__DOT__data__DOT__dataBank_3_io_r_data_1
                                                         : 
                                                        ((2U 
                                                          == (IData)(vlSelf->DCache__DOT__data__DOT__bank0))
                                                          ? vlSelf->DCache__DOT__data__DOT__dataBank_2_io_r_data_1
                                                          : 
                                                         ((1U 
                                                           == (IData)(vlSelf->DCache__DOT__data__DOT__bank0))
                                                           ? vlSelf->DCache__DOT__data__DOT__dataBank_1_io_r_data_1
                                                           : vlSelf->DCache__DOT__data__DOT__dataBank_0_io_r_data_1)))))))
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelf->DCache__DOT__data__DOT__bank0))
                                                     ? vlSelf->DCache__DOT__data__DOT__dataBank_7_io_r_data_0
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->DCache__DOT__data__DOT__bank0))
                                                      ? vlSelf->DCache__DOT__data__DOT__dataBank_6_io_r_data_0
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->DCache__DOT__data__DOT__bank0))
                                                       ? vlSelf->DCache__DOT__data__DOT__dataBank_5_io_r_data_0
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelf->DCache__DOT__data__DOT__bank0))
                                                        ? vlSelf->DCache__DOT__data__DOT__dataBank_4_io_r_data_0
                                                        : 
                                                       ((3U 
                                                         == (IData)(vlSelf->DCache__DOT__data__DOT__bank0))
                                                         ? vlSelf->DCache__DOT__data__DOT__dataBank_3_io_r_data_0
                                                         : 
                                                        ((2U 
                                                          == (IData)(vlSelf->DCache__DOT__data__DOT__bank0))
                                                          ? vlSelf->DCache__DOT__data__DOT__dataBank_2_io_r_data_0
                                                          : 
                                                         ((1U 
                                                           == (IData)(vlSelf->DCache__DOT__data__DOT__bank0))
                                                           ? vlSelf->DCache__DOT__data__DOT__dataBank_1_io_r_data_0
                                                           : vlSelf->DCache__DOT__data__DOT__dataBank_0_io_r_data_0)))))))));
    vlSelf->DCache__DOT__loads_1__DOT___GEN_46 = ((2U 
                                                   == (IData)(vlSelf->DCache__DOT__loads_1__DOT__s2_way))
                                                   ? 
                                                  ((7U 
                                                    == (IData)(vlSelf->DCache__DOT__data__DOT__bank0_1))
                                                    ? vlSelf->DCache__DOT__data__DOT__dataBank_7_io_r_data_2
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->DCache__DOT__data__DOT__bank0_1))
                                                     ? vlSelf->DCache__DOT__data__DOT__dataBank_6_io_r_data_2
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->DCache__DOT__data__DOT__bank0_1))
                                                      ? vlSelf->DCache__DOT__data__DOT__dataBank_5_io_r_data_2
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlSelf->DCache__DOT__data__DOT__bank0_1))
                                                       ? vlSelf->DCache__DOT__data__DOT__dataBank_4_io_r_data_2
                                                       : 
                                                      ((3U 
                                                        == (IData)(vlSelf->DCache__DOT__data__DOT__bank0_1))
                                                        ? vlSelf->DCache__DOT__data__DOT__dataBank_3_io_r_data_2
                                                        : 
                                                       ((2U 
                                                         == (IData)(vlSelf->DCache__DOT__data__DOT__bank0_1))
                                                         ? vlSelf->DCache__DOT__data__DOT__dataBank_2_io_r_data_2
                                                         : 
                                                        ((1U 
                                                          == (IData)(vlSelf->DCache__DOT__data__DOT__bank0_1))
                                                          ? vlSelf->DCache__DOT__data__DOT__dataBank_1_io_r_data_2
                                                          : vlSelf->DCache__DOT__data__DOT__dataBank_0_io_r_data_2)))))))
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->DCache__DOT__loads_1__DOT__s2_way))
                                                    ? 
                                                   ((7U 
                                                     == (IData)(vlSelf->DCache__DOT__data__DOT__bank0_1))
                                                     ? vlSelf->DCache__DOT__data__DOT__dataBank_7_io_r_data_1
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->DCache__DOT__data__DOT__bank0_1))
                                                      ? vlSelf->DCache__DOT__data__DOT__dataBank_6_io_r_data_1
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->DCache__DOT__data__DOT__bank0_1))
                                                       ? vlSelf->DCache__DOT__data__DOT__dataBank_5_io_r_data_1
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelf->DCache__DOT__data__DOT__bank0_1))
                                                        ? vlSelf->DCache__DOT__data__DOT__dataBank_4_io_r_data_1
                                                        : 
                                                       ((3U 
                                                         == (IData)(vlSelf->DCache__DOT__data__DOT__bank0_1))
                                                         ? vlSelf->DCache__DOT__data__DOT__dataBank_3_io_r_data_1
                                                         : 
                                                        ((2U 
                                                          == (IData)(vlSelf->DCache__DOT__data__DOT__bank0_1))
                                                          ? vlSelf->DCache__DOT__data__DOT__dataBank_2_io_r_data_1
                                                          : 
                                                         ((1U 
                                                           == (IData)(vlSelf->DCache__DOT__data__DOT__bank0_1))
                                                           ? vlSelf->DCache__DOT__data__DOT__dataBank_1_io_r_data_1
                                                           : vlSelf->DCache__DOT__data__DOT__dataBank_0_io_r_data_1)))))))
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelf->DCache__DOT__data__DOT__bank0_1))
                                                     ? vlSelf->DCache__DOT__data__DOT__dataBank_7_io_r_data_0
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->DCache__DOT__data__DOT__bank0_1))
                                                      ? vlSelf->DCache__DOT__data__DOT__dataBank_6_io_r_data_0
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->DCache__DOT__data__DOT__bank0_1))
                                                       ? vlSelf->DCache__DOT__data__DOT__dataBank_5_io_r_data_0
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelf->DCache__DOT__data__DOT__bank0_1))
                                                        ? vlSelf->DCache__DOT__data__DOT__dataBank_4_io_r_data_0
                                                        : 
                                                       ((3U 
                                                         == (IData)(vlSelf->DCache__DOT__data__DOT__bank0_1))
                                                         ? vlSelf->DCache__DOT__data__DOT__dataBank_3_io_r_data_0
                                                         : 
                                                        ((2U 
                                                          == (IData)(vlSelf->DCache__DOT__data__DOT__bank0_1))
                                                          ? vlSelf->DCache__DOT__data__DOT__dataBank_2_io_r_data_0
                                                          : 
                                                         ((1U 
                                                           == (IData)(vlSelf->DCache__DOT__data__DOT__bank0_1))
                                                           ? vlSelf->DCache__DOT__data__DOT__dataBank_1_io_r_data_0
                                                           : vlSelf->DCache__DOT__data__DOT__dataBank_0_io_r_data_0)))))))));
    vlSelf->DCache__DOT__loads_0__DOT___GEN_41 = ((1U 
                                                   == (IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_way))
                                                   ? 
                                                  ((IData)(vlSelf->DCache__DOT__data__DOT__is128)
                                                    ? 
                                                   ((7U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelf->DCache__DOT__data__DOT__bank0))))
                                                     ? vlSelf->DCache__DOT__data__DOT__dataBank_7_io_r_data_1
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(1U) 
                                                          + (IData)(vlSelf->DCache__DOT__data__DOT__bank0))))
                                                      ? vlSelf->DCache__DOT__data__DOT__dataBank_6_io_r_data_1
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(1U) 
                                                           + (IData)(vlSelf->DCache__DOT__data__DOT__bank0))))
                                                       ? vlSelf->DCache__DOT__data__DOT__dataBank_5_io_r_data_1
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelf->DCache__DOT__data__DOT__bank0))))
                                                        ? vlSelf->DCache__DOT__data__DOT__dataBank_4_io_r_data_1
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + (IData)(vlSelf->DCache__DOT__data__DOT__bank0))))
                                                         ? vlSelf->DCache__DOT__data__DOT__dataBank_3_io_r_data_1
                                                         : 
                                                        ((2U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(1U) 
                                                              + (IData)(vlSelf->DCache__DOT__data__DOT__bank0))))
                                                          ? vlSelf->DCache__DOT__data__DOT__dataBank_2_io_r_data_1
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(1U) 
                                                               + (IData)(vlSelf->DCache__DOT__data__DOT__bank0))))
                                                           ? vlSelf->DCache__DOT__data__DOT__dataBank_1_io_r_data_1
                                                           : vlSelf->DCache__DOT__data__DOT__dataBank_0_io_r_data_1)))))))
                                                    : 0ULL)
                                                   : 
                                                  ((IData)(vlSelf->DCache__DOT__data__DOT__is128)
                                                    ? 
                                                   ((7U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelf->DCache__DOT__data__DOT__bank0))))
                                                     ? vlSelf->DCache__DOT__data__DOT__dataBank_7_io_r_data_0
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(1U) 
                                                          + (IData)(vlSelf->DCache__DOT__data__DOT__bank0))))
                                                      ? vlSelf->DCache__DOT__data__DOT__dataBank_6_io_r_data_0
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(1U) 
                                                           + (IData)(vlSelf->DCache__DOT__data__DOT__bank0))))
                                                       ? vlSelf->DCache__DOT__data__DOT__dataBank_5_io_r_data_0
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelf->DCache__DOT__data__DOT__bank0))))
                                                        ? vlSelf->DCache__DOT__data__DOT__dataBank_4_io_r_data_0
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + (IData)(vlSelf->DCache__DOT__data__DOT__bank0))))
                                                         ? vlSelf->DCache__DOT__data__DOT__dataBank_3_io_r_data_0
                                                         : 
                                                        ((2U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(1U) 
                                                              + (IData)(vlSelf->DCache__DOT__data__DOT__bank0))))
                                                          ? vlSelf->DCache__DOT__data__DOT__dataBank_2_io_r_data_0
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(1U) 
                                                               + (IData)(vlSelf->DCache__DOT__data__DOT__bank0))))
                                                           ? vlSelf->DCache__DOT__data__DOT__dataBank_1_io_r_data_0
                                                           : vlSelf->DCache__DOT__data__DOT__dataBank_0_io_r_data_0)))))))
                                                    : 0ULL));
    vlSelf->DCache__DOT__loads_1__DOT___GEN_41 = ((1U 
                                                   == (IData)(vlSelf->DCache__DOT__loads_1__DOT__s2_way))
                                                   ? 
                                                  ((IData)(vlSelf->DCache__DOT__data__DOT__is128_1)
                                                    ? 
                                                   ((7U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelf->DCache__DOT__data__DOT__bank0_1))))
                                                     ? vlSelf->DCache__DOT__data__DOT__dataBank_7_io_r_data_1
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(1U) 
                                                          + (IData)(vlSelf->DCache__DOT__data__DOT__bank0_1))))
                                                      ? vlSelf->DCache__DOT__data__DOT__dataBank_6_io_r_data_1
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(1U) 
                                                           + (IData)(vlSelf->DCache__DOT__data__DOT__bank0_1))))
                                                       ? vlSelf->DCache__DOT__data__DOT__dataBank_5_io_r_data_1
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelf->DCache__DOT__data__DOT__bank0_1))))
                                                        ? vlSelf->DCache__DOT__data__DOT__dataBank_4_io_r_data_1
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + (IData)(vlSelf->DCache__DOT__data__DOT__bank0_1))))
                                                         ? vlSelf->DCache__DOT__data__DOT__dataBank_3_io_r_data_1
                                                         : 
                                                        ((2U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(1U) 
                                                              + (IData)(vlSelf->DCache__DOT__data__DOT__bank0_1))))
                                                          ? vlSelf->DCache__DOT__data__DOT__dataBank_2_io_r_data_1
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(1U) 
                                                               + (IData)(vlSelf->DCache__DOT__data__DOT__bank0_1))))
                                                           ? vlSelf->DCache__DOT__data__DOT__dataBank_1_io_r_data_1
                                                           : vlSelf->DCache__DOT__data__DOT__dataBank_0_io_r_data_1)))))))
                                                    : 0ULL)
                                                   : 
                                                  ((IData)(vlSelf->DCache__DOT__data__DOT__is128_1)
                                                    ? 
                                                   ((7U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelf->DCache__DOT__data__DOT__bank0_1))))
                                                     ? vlSelf->DCache__DOT__data__DOT__dataBank_7_io_r_data_0
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(1U) 
                                                          + (IData)(vlSelf->DCache__DOT__data__DOT__bank0_1))))
                                                      ? vlSelf->DCache__DOT__data__DOT__dataBank_6_io_r_data_0
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(1U) 
                                                           + (IData)(vlSelf->DCache__DOT__data__DOT__bank0_1))))
                                                       ? vlSelf->DCache__DOT__data__DOT__dataBank_5_io_r_data_0
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelf->DCache__DOT__data__DOT__bank0_1))))
                                                        ? vlSelf->DCache__DOT__data__DOT__dataBank_4_io_r_data_0
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + (IData)(vlSelf->DCache__DOT__data__DOT__bank0_1))))
                                                         ? vlSelf->DCache__DOT__data__DOT__dataBank_3_io_r_data_0
                                                         : 
                                                        ((2U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(1U) 
                                                              + (IData)(vlSelf->DCache__DOT__data__DOT__bank0_1))))
                                                          ? vlSelf->DCache__DOT__data__DOT__dataBank_2_io_r_data_0
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(1U) 
                                                               + (IData)(vlSelf->DCache__DOT__data__DOT__bank0_1))))
                                                           ? vlSelf->DCache__DOT__data__DOT__dataBank_1_io_r_data_0
                                                           : vlSelf->DCache__DOT__data__DOT__dataBank_0_io_r_data_0)))))))
                                                    : 0ULL));
    vlSelf->io_forwardMshr_data_valid = (((0xfU == (IData)(vlSelf->io_forwardMshr_id))
                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_busy)
                                           : ((0xeU 
                                               == (IData)(vlSelf->io_forwardMshr_id))
                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_busy)
                                               : ((0xdU 
                                                   == (IData)(vlSelf->io_forwardMshr_id))
                                                   ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_busy)
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(vlSelf->io_forwardMshr_id))
                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_busy)
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSelf->io_forwardMshr_id))
                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_busy)
                                                     : 
                                                    ((0xaU 
                                                      == (IData)(vlSelf->io_forwardMshr_id))
                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_busy)
                                                      : 
                                                     ((9U 
                                                       == (IData)(vlSelf->io_forwardMshr_id))
                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_busy)
                                                       : 
                                                      ((8U 
                                                        == (IData)(vlSelf->io_forwardMshr_id))
                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_busy)
                                                        : 
                                                       ((7U 
                                                         == (IData)(vlSelf->io_forwardMshr_id))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_busy)
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelf->io_forwardMshr_id))
                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_busy)
                                                          : 
                                                         ((5U 
                                                           == (IData)(vlSelf->io_forwardMshr_id))
                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_busy)
                                                           : 
                                                          ((4U 
                                                            == (IData)(vlSelf->io_forwardMshr_id))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_busy)
                                                            : 
                                                           ((3U 
                                                             == (IData)(vlSelf->io_forwardMshr_id))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_busy)
                                                             : 
                                                            ((2U 
                                                              == (IData)(vlSelf->io_forwardMshr_id))
                                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_busy)
                                                              : 
                                                             ((1U 
                                                               == (IData)(vlSelf->io_forwardMshr_id))
                                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_busy)
                                                               : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_busy)))))))))))))))) 
                                         & (((((0xfU 
                                                == (IData)(vlSelf->io_forwardMshr_id))
                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_0_valid)
                                                : (
                                                   (0xeU 
                                                    == (IData)(vlSelf->io_forwardMshr_id))
                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_0_valid)
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(vlSelf->io_forwardMshr_id))
                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_0_valid)
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->io_forwardMshr_id))
                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_0_valid)
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlSelf->io_forwardMshr_id))
                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_0_valid)
                                                       : 
                                                      ((0xaU 
                                                        == (IData)(vlSelf->io_forwardMshr_id))
                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_0_valid)
                                                        : 
                                                       ((9U 
                                                         == (IData)(vlSelf->io_forwardMshr_id))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_0_valid)
                                                         : 
                                                        ((8U 
                                                          == (IData)(vlSelf->io_forwardMshr_id))
                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_0_valid)
                                                          : 
                                                         ((7U 
                                                           == (IData)(vlSelf->io_forwardMshr_id))
                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_0_valid)
                                                           : 
                                                          ((6U 
                                                            == (IData)(vlSelf->io_forwardMshr_id))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_0_valid)
                                                            : 
                                                           ((5U 
                                                             == (IData)(vlSelf->io_forwardMshr_id))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_0_valid)
                                                             : 
                                                            ((4U 
                                                              == (IData)(vlSelf->io_forwardMshr_id))
                                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_0_valid)
                                                              : 
                                                             ((3U 
                                                               == (IData)(vlSelf->io_forwardMshr_id))
                                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_0_valid)
                                                               : 
                                                              ((2U 
                                                                == (IData)(vlSelf->io_forwardMshr_id))
                                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_0_valid)
                                                                : 
                                                               ((1U 
                                                                 == (IData)(vlSelf->io_forwardMshr_id))
                                                                 ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_0_valid)
                                                                 : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_0_valid)))))))))))))))) 
                                              & (0U 
                                                 == 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->io_forwardMshr_id))
                                                   ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_0_source)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->io_forwardMshr_id))
                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_0_source)
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(vlSelf->io_forwardMshr_id))
                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_0_source)
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->io_forwardMshr_id))
                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_0_source)
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlSelf->io_forwardMshr_id))
                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_0_source)
                                                       : 
                                                      ((0xaU 
                                                        == (IData)(vlSelf->io_forwardMshr_id))
                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_0_source)
                                                        : 
                                                       ((9U 
                                                         == (IData)(vlSelf->io_forwardMshr_id))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_0_source)
                                                         : 
                                                        ((8U 
                                                          == (IData)(vlSelf->io_forwardMshr_id))
                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_0_source)
                                                          : 
                                                         ((7U 
                                                           == (IData)(vlSelf->io_forwardMshr_id))
                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_0_source)
                                                           : 
                                                          ((6U 
                                                            == (IData)(vlSelf->io_forwardMshr_id))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_0_source)
                                                            : 
                                                           ((5U 
                                                             == (IData)(vlSelf->io_forwardMshr_id))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_0_source)
                                                             : 
                                                            ((4U 
                                                              == (IData)(vlSelf->io_forwardMshr_id))
                                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_0_source)
                                                              : 
                                                             ((3U 
                                                               == (IData)(vlSelf->io_forwardMshr_id))
                                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_0_source)
                                                               : 
                                                              ((2U 
                                                                == (IData)(vlSelf->io_forwardMshr_id))
                                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_0_source)
                                                                : 
                                                               ((1U 
                                                                 == (IData)(vlSelf->io_forwardMshr_id))
                                                                 ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_0_source)
                                                                 : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_0_source)))))))))))))))))) 
                                             | ((((0xfU 
                                                   == (IData)(vlSelf->io_forwardMshr_id))
                                                   ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_1_valid)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->io_forwardMshr_id))
                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_1_valid)
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(vlSelf->io_forwardMshr_id))
                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_1_valid)
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->io_forwardMshr_id))
                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_1_valid)
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlSelf->io_forwardMshr_id))
                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_1_valid)
                                                       : 
                                                      ((0xaU 
                                                        == (IData)(vlSelf->io_forwardMshr_id))
                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_1_valid)
                                                        : 
                                                       ((9U 
                                                         == (IData)(vlSelf->io_forwardMshr_id))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_1_valid)
                                                         : 
                                                        ((8U 
                                                          == (IData)(vlSelf->io_forwardMshr_id))
                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_1_valid)
                                                          : 
                                                         ((7U 
                                                           == (IData)(vlSelf->io_forwardMshr_id))
                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_1_valid)
                                                           : 
                                                          ((6U 
                                                            == (IData)(vlSelf->io_forwardMshr_id))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_1_valid)
                                                            : 
                                                           ((5U 
                                                             == (IData)(vlSelf->io_forwardMshr_id))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_1_valid)
                                                             : 
                                                            ((4U 
                                                              == (IData)(vlSelf->io_forwardMshr_id))
                                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_1_valid)
                                                              : 
                                                             ((3U 
                                                               == (IData)(vlSelf->io_forwardMshr_id))
                                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_1_valid)
                                                               : 
                                                              ((2U 
                                                                == (IData)(vlSelf->io_forwardMshr_id))
                                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_1_valid)
                                                                : 
                                                               ((1U 
                                                                 == (IData)(vlSelf->io_forwardMshr_id))
                                                                 ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_1_valid)
                                                                 : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_1_valid)))))))))))))))) 
                                                 & (0U 
                                                    == 
                                                    ((0xfU 
                                                      == (IData)(vlSelf->io_forwardMshr_id))
                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_1_source)
                                                      : 
                                                     ((0xeU 
                                                       == (IData)(vlSelf->io_forwardMshr_id))
                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_1_source)
                                                       : 
                                                      ((0xdU 
                                                        == (IData)(vlSelf->io_forwardMshr_id))
                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_1_source)
                                                        : 
                                                       ((0xcU 
                                                         == (IData)(vlSelf->io_forwardMshr_id))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_1_source)
                                                         : 
                                                        ((0xbU 
                                                          == (IData)(vlSelf->io_forwardMshr_id))
                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_1_source)
                                                          : 
                                                         ((0xaU 
                                                           == (IData)(vlSelf->io_forwardMshr_id))
                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_1_source)
                                                           : 
                                                          ((9U 
                                                            == (IData)(vlSelf->io_forwardMshr_id))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_1_source)
                                                            : 
                                                           ((8U 
                                                             == (IData)(vlSelf->io_forwardMshr_id))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_1_source)
                                                             : 
                                                            ((7U 
                                                              == (IData)(vlSelf->io_forwardMshr_id))
                                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_1_source)
                                                              : 
                                                             ((6U 
                                                               == (IData)(vlSelf->io_forwardMshr_id))
                                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_1_source)
                                                               : 
                                                              ((5U 
                                                                == (IData)(vlSelf->io_forwardMshr_id))
                                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_1_source)
                                                                : 
                                                               ((4U 
                                                                 == (IData)(vlSelf->io_forwardMshr_id))
                                                                 ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_1_source)
                                                                 : 
                                                                ((3U 
                                                                  == (IData)(vlSelf->io_forwardMshr_id))
                                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_1_source)
                                                                  : 
                                                                 ((2U 
                                                                   == (IData)(vlSelf->io_forwardMshr_id))
                                                                   ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_1_source)
                                                                   : 
                                                                  ((1U 
                                                                    == (IData)(vlSelf->io_forwardMshr_id))
                                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_1_source)
                                                                    : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_1_source)))))))))))))))))) 
                                                | ((((0xfU 
                                                      == (IData)(vlSelf->io_forwardMshr_id))
                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_2_valid)
                                                      : 
                                                     ((0xeU 
                                                       == (IData)(vlSelf->io_forwardMshr_id))
                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_2_valid)
                                                       : 
                                                      ((0xdU 
                                                        == (IData)(vlSelf->io_forwardMshr_id))
                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_2_valid)
                                                        : 
                                                       ((0xcU 
                                                         == (IData)(vlSelf->io_forwardMshr_id))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_2_valid)
                                                         : 
                                                        ((0xbU 
                                                          == (IData)(vlSelf->io_forwardMshr_id))
                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_2_valid)
                                                          : 
                                                         ((0xaU 
                                                           == (IData)(vlSelf->io_forwardMshr_id))
                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_2_valid)
                                                           : 
                                                          ((9U 
                                                            == (IData)(vlSelf->io_forwardMshr_id))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_2_valid)
                                                            : 
                                                           ((8U 
                                                             == (IData)(vlSelf->io_forwardMshr_id))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_2_valid)
                                                             : 
                                                            ((7U 
                                                              == (IData)(vlSelf->io_forwardMshr_id))
                                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_2_valid)
                                                              : 
                                                             ((6U 
                                                               == (IData)(vlSelf->io_forwardMshr_id))
                                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_2_valid)
                                                               : 
                                                              ((5U 
                                                                == (IData)(vlSelf->io_forwardMshr_id))
                                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_2_valid)
                                                                : 
                                                               ((4U 
                                                                 == (IData)(vlSelf->io_forwardMshr_id))
                                                                 ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_2_valid)
                                                                 : 
                                                                ((3U 
                                                                  == (IData)(vlSelf->io_forwardMshr_id))
                                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_2_valid)
                                                                  : 
                                                                 ((2U 
                                                                   == (IData)(vlSelf->io_forwardMshr_id))
                                                                   ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_2_valid)
                                                                   : 
                                                                  ((1U 
                                                                    == (IData)(vlSelf->io_forwardMshr_id))
                                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_2_valid)
                                                                    : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_2_valid)))))))))))))))) 
                                                    & (0U 
                                                       == 
                                                       ((0xfU 
                                                         == (IData)(vlSelf->io_forwardMshr_id))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_2_source)
                                                         : 
                                                        ((0xeU 
                                                          == (IData)(vlSelf->io_forwardMshr_id))
                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_2_source)
                                                          : 
                                                         ((0xdU 
                                                           == (IData)(vlSelf->io_forwardMshr_id))
                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_2_source)
                                                           : 
                                                          ((0xcU 
                                                            == (IData)(vlSelf->io_forwardMshr_id))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_2_source)
                                                            : 
                                                           ((0xbU 
                                                             == (IData)(vlSelf->io_forwardMshr_id))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_2_source)
                                                             : 
                                                            ((0xaU 
                                                              == (IData)(vlSelf->io_forwardMshr_id))
                                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_2_source)
                                                              : 
                                                             ((9U 
                                                               == (IData)(vlSelf->io_forwardMshr_id))
                                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_2_source)
                                                               : 
                                                              ((8U 
                                                                == (IData)(vlSelf->io_forwardMshr_id))
                                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_2_source)
                                                                : 
                                                               ((7U 
                                                                 == (IData)(vlSelf->io_forwardMshr_id))
                                                                 ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_2_source)
                                                                 : 
                                                                ((6U 
                                                                  == (IData)(vlSelf->io_forwardMshr_id))
                                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_2_source)
                                                                  : 
                                                                 ((5U 
                                                                   == (IData)(vlSelf->io_forwardMshr_id))
                                                                   ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_2_source)
                                                                   : 
                                                                  ((4U 
                                                                    == (IData)(vlSelf->io_forwardMshr_id))
                                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_2_source)
                                                                    : 
                                                                   ((3U 
                                                                     == (IData)(vlSelf->io_forwardMshr_id))
                                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_2_source)
                                                                     : 
                                                                    ((2U 
                                                                      == (IData)(vlSelf->io_forwardMshr_id))
                                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_2_source)
                                                                      : 
                                                                     ((1U 
                                                                       == (IData)(vlSelf->io_forwardMshr_id))
                                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_2_source)
                                                                       : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_2_source)))))))))))))))))) 
                                                   | ((((0xfU 
                                                         == (IData)(vlSelf->io_forwardMshr_id))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_3_valid)
                                                         : 
                                                        ((0xeU 
                                                          == (IData)(vlSelf->io_forwardMshr_id))
                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_3_valid)
                                                          : 
                                                         ((0xdU 
                                                           == (IData)(vlSelf->io_forwardMshr_id))
                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_3_valid)
                                                           : 
                                                          ((0xcU 
                                                            == (IData)(vlSelf->io_forwardMshr_id))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_3_valid)
                                                            : 
                                                           ((0xbU 
                                                             == (IData)(vlSelf->io_forwardMshr_id))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_3_valid)
                                                             : 
                                                            ((0xaU 
                                                              == (IData)(vlSelf->io_forwardMshr_id))
                                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_3_valid)
                                                              : 
                                                             ((9U 
                                                               == (IData)(vlSelf->io_forwardMshr_id))
                                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_3_valid)
                                                               : 
                                                              ((8U 
                                                                == (IData)(vlSelf->io_forwardMshr_id))
                                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_3_valid)
                                                                : 
                                                               ((7U 
                                                                 == (IData)(vlSelf->io_forwardMshr_id))
                                                                 ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_3_valid)
                                                                 : 
                                                                ((6U 
                                                                  == (IData)(vlSelf->io_forwardMshr_id))
                                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_3_valid)
                                                                  : 
                                                                 ((5U 
                                                                   == (IData)(vlSelf->io_forwardMshr_id))
                                                                   ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_3_valid)
                                                                   : 
                                                                  ((4U 
                                                                    == (IData)(vlSelf->io_forwardMshr_id))
                                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_3_valid)
                                                                    : 
                                                                   ((3U 
                                                                     == (IData)(vlSelf->io_forwardMshr_id))
                                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_3_valid)
                                                                     : 
                                                                    ((2U 
                                                                      == (IData)(vlSelf->io_forwardMshr_id))
                                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_3_valid)
                                                                      : 
                                                                     ((1U 
                                                                       == (IData)(vlSelf->io_forwardMshr_id))
                                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_3_valid)
                                                                       : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_3_valid)))))))))))))))) 
                                                       & (0U 
                                                          == 
                                                          ((0xfU 
                                                            == (IData)(vlSelf->io_forwardMshr_id))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_3_source)
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->io_forwardMshr_id))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_3_source)
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(vlSelf->io_forwardMshr_id))
                                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_3_source)
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->io_forwardMshr_id))
                                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_3_source)
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(vlSelf->io_forwardMshr_id))
                                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_3_source)
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(vlSelf->io_forwardMshr_id))
                                                                 ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_3_source)
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(vlSelf->io_forwardMshr_id))
                                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_3_source)
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(vlSelf->io_forwardMshr_id))
                                                                   ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_3_source)
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(vlSelf->io_forwardMshr_id))
                                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_3_source)
                                                                    : 
                                                                   ((6U 
                                                                     == (IData)(vlSelf->io_forwardMshr_id))
                                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_3_source)
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->io_forwardMshr_id))
                                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_3_source)
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->io_forwardMshr_id))
                                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_3_source)
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelf->io_forwardMshr_id))
                                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_3_source)
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->io_forwardMshr_id))
                                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_3_source)
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->io_forwardMshr_id))
                                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_3_source)
                                                                          : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_3_source)))))))))))))))))) 
                                                      | ((((0xfU 
                                                            == (IData)(vlSelf->io_forwardMshr_id))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_4_valid)
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->io_forwardMshr_id))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_4_valid)
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(vlSelf->io_forwardMshr_id))
                                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_4_valid)
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->io_forwardMshr_id))
                                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_4_valid)
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(vlSelf->io_forwardMshr_id))
                                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_4_valid)
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(vlSelf->io_forwardMshr_id))
                                                                 ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_4_valid)
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(vlSelf->io_forwardMshr_id))
                                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_4_valid)
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(vlSelf->io_forwardMshr_id))
                                                                   ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_4_valid)
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(vlSelf->io_forwardMshr_id))
                                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_4_valid)
                                                                    : 
                                                                   ((6U 
                                                                     == (IData)(vlSelf->io_forwardMshr_id))
                                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_4_valid)
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->io_forwardMshr_id))
                                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_4_valid)
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->io_forwardMshr_id))
                                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_4_valid)
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelf->io_forwardMshr_id))
                                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_4_valid)
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->io_forwardMshr_id))
                                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_4_valid)
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->io_forwardMshr_id))
                                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_4_valid)
                                                                          : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_4_valid)))))))))))))))) 
                                                          & (0U 
                                                             == 
                                                             ((0xfU 
                                                               == (IData)(vlSelf->io_forwardMshr_id))
                                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_4_source)
                                                               : 
                                                              ((0xeU 
                                                                == (IData)(vlSelf->io_forwardMshr_id))
                                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_4_source)
                                                                : 
                                                               ((0xdU 
                                                                 == (IData)(vlSelf->io_forwardMshr_id))
                                                                 ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_4_source)
                                                                 : 
                                                                ((0xcU 
                                                                  == (IData)(vlSelf->io_forwardMshr_id))
                                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_4_source)
                                                                  : 
                                                                 ((0xbU 
                                                                   == (IData)(vlSelf->io_forwardMshr_id))
                                                                   ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_4_source)
                                                                   : 
                                                                  ((0xaU 
                                                                    == (IData)(vlSelf->io_forwardMshr_id))
                                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_4_source)
                                                                    : 
                                                                   ((9U 
                                                                     == (IData)(vlSelf->io_forwardMshr_id))
                                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_4_source)
                                                                     : 
                                                                    ((8U 
                                                                      == (IData)(vlSelf->io_forwardMshr_id))
                                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_4_source)
                                                                      : 
                                                                     ((7U 
                                                                       == (IData)(vlSelf->io_forwardMshr_id))
                                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_4_source)
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSelf->io_forwardMshr_id))
                                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_4_source)
                                                                        : 
                                                                       ((5U 
                                                                         == (IData)(vlSelf->io_forwardMshr_id))
                                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_4_source)
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSelf->io_forwardMshr_id))
                                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_4_source)
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSelf->io_forwardMshr_id))
                                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_4_source)
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSelf->io_forwardMshr_id))
                                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_4_source)
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSelf->io_forwardMshr_id))
                                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_4_source)
                                                                             : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_4_source)))))))))))))))))) 
                                                         | ((((0xfU 
                                                               == (IData)(vlSelf->io_forwardMshr_id))
                                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_5_valid)
                                                               : 
                                                              ((0xeU 
                                                                == (IData)(vlSelf->io_forwardMshr_id))
                                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_5_valid)
                                                                : 
                                                               ((0xdU 
                                                                 == (IData)(vlSelf->io_forwardMshr_id))
                                                                 ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_5_valid)
                                                                 : 
                                                                ((0xcU 
                                                                  == (IData)(vlSelf->io_forwardMshr_id))
                                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_5_valid)
                                                                  : 
                                                                 ((0xbU 
                                                                   == (IData)(vlSelf->io_forwardMshr_id))
                                                                   ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_5_valid)
                                                                   : 
                                                                  ((0xaU 
                                                                    == (IData)(vlSelf->io_forwardMshr_id))
                                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_5_valid)
                                                                    : 
                                                                   ((9U 
                                                                     == (IData)(vlSelf->io_forwardMshr_id))
                                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_5_valid)
                                                                     : 
                                                                    ((8U 
                                                                      == (IData)(vlSelf->io_forwardMshr_id))
                                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_5_valid)
                                                                      : 
                                                                     ((7U 
                                                                       == (IData)(vlSelf->io_forwardMshr_id))
                                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_5_valid)
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSelf->io_forwardMshr_id))
                                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_5_valid)
                                                                        : 
                                                                       ((5U 
                                                                         == (IData)(vlSelf->io_forwardMshr_id))
                                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_5_valid)
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSelf->io_forwardMshr_id))
                                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_5_valid)
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSelf->io_forwardMshr_id))
                                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_5_valid)
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSelf->io_forwardMshr_id))
                                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_5_valid)
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSelf->io_forwardMshr_id))
                                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_5_valid)
                                                                             : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_5_valid)))))))))))))))) 
                                                             & (0U 
                                                                == 
                                                                ((0xfU 
                                                                  == (IData)(vlSelf->io_forwardMshr_id))
                                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_5_source)
                                                                  : 
                                                                 ((0xeU 
                                                                   == (IData)(vlSelf->io_forwardMshr_id))
                                                                   ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_5_source)
                                                                   : 
                                                                  ((0xdU 
                                                                    == (IData)(vlSelf->io_forwardMshr_id))
                                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_5_source)
                                                                    : 
                                                                   ((0xcU 
                                                                     == (IData)(vlSelf->io_forwardMshr_id))
                                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_5_source)
                                                                     : 
                                                                    ((0xbU 
                                                                      == (IData)(vlSelf->io_forwardMshr_id))
                                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_5_source)
                                                                      : 
                                                                     ((0xaU 
                                                                       == (IData)(vlSelf->io_forwardMshr_id))
                                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_5_source)
                                                                       : 
                                                                      ((9U 
                                                                        == (IData)(vlSelf->io_forwardMshr_id))
                                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_5_source)
                                                                        : 
                                                                       ((8U 
                                                                         == (IData)(vlSelf->io_forwardMshr_id))
                                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_5_source)
                                                                         : 
                                                                        ((7U 
                                                                          == (IData)(vlSelf->io_forwardMshr_id))
                                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_5_source)
                                                                          : 
                                                                         ((6U 
                                                                           == (IData)(vlSelf->io_forwardMshr_id))
                                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_5_source)
                                                                           : 
                                                                          ((5U 
                                                                            == (IData)(vlSelf->io_forwardMshr_id))
                                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_5_source)
                                                                            : 
                                                                           ((4U 
                                                                             == (IData)(vlSelf->io_forwardMshr_id))
                                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_5_source)
                                                                             : 
                                                                            ((3U 
                                                                              == (IData)(vlSelf->io_forwardMshr_id))
                                                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_5_source)
                                                                              : 
                                                                             ((2U 
                                                                               == (IData)(vlSelf->io_forwardMshr_id))
                                                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_5_source)
                                                                               : 
                                                                              ((1U 
                                                                                == (IData)(vlSelf->io_forwardMshr_id))
                                                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_5_source)
                                                                                : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_5_source)))))))))))))))))) 
                                                            | ((((0xfU 
                                                                  == (IData)(vlSelf->io_forwardMshr_id))
                                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_6_valid)
                                                                  : 
                                                                 ((0xeU 
                                                                   == (IData)(vlSelf->io_forwardMshr_id))
                                                                   ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_6_valid)
                                                                   : 
                                                                  ((0xdU 
                                                                    == (IData)(vlSelf->io_forwardMshr_id))
                                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_6_valid)
                                                                    : 
                                                                   ((0xcU 
                                                                     == (IData)(vlSelf->io_forwardMshr_id))
                                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_6_valid)
                                                                     : 
                                                                    ((0xbU 
                                                                      == (IData)(vlSelf->io_forwardMshr_id))
                                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_6_valid)
                                                                      : 
                                                                     ((0xaU 
                                                                       == (IData)(vlSelf->io_forwardMshr_id))
                                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_6_valid)
                                                                       : 
                                                                      ((9U 
                                                                        == (IData)(vlSelf->io_forwardMshr_id))
                                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_6_valid)
                                                                        : 
                                                                       ((8U 
                                                                         == (IData)(vlSelf->io_forwardMshr_id))
                                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_6_valid)
                                                                         : 
                                                                        ((7U 
                                                                          == (IData)(vlSelf->io_forwardMshr_id))
                                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_6_valid)
                                                                          : 
                                                                         ((6U 
                                                                           == (IData)(vlSelf->io_forwardMshr_id))
                                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_6_valid)
                                                                           : 
                                                                          ((5U 
                                                                            == (IData)(vlSelf->io_forwardMshr_id))
                                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_6_valid)
                                                                            : 
                                                                           ((4U 
                                                                             == (IData)(vlSelf->io_forwardMshr_id))
                                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_6_valid)
                                                                             : 
                                                                            ((3U 
                                                                              == (IData)(vlSelf->io_forwardMshr_id))
                                                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_6_valid)
                                                                              : 
                                                                             ((2U 
                                                                               == (IData)(vlSelf->io_forwardMshr_id))
                                                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_6_valid)
                                                                               : 
                                                                              ((1U 
                                                                                == (IData)(vlSelf->io_forwardMshr_id))
                                                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_6_valid)
                                                                                : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_6_valid)))))))))))))))) 
                                                                & (0U 
                                                                   == 
                                                                   ((0xfU 
                                                                     == (IData)(vlSelf->io_forwardMshr_id))
                                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_6_source)
                                                                     : 
                                                                    ((0xeU 
                                                                      == (IData)(vlSelf->io_forwardMshr_id))
                                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_6_source)
                                                                      : 
                                                                     ((0xdU 
                                                                       == (IData)(vlSelf->io_forwardMshr_id))
                                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_6_source)
                                                                       : 
                                                                      ((0xcU 
                                                                        == (IData)(vlSelf->io_forwardMshr_id))
                                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_6_source)
                                                                        : 
                                                                       ((0xbU 
                                                                         == (IData)(vlSelf->io_forwardMshr_id))
                                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_6_source)
                                                                         : 
                                                                        ((0xaU 
                                                                          == (IData)(vlSelf->io_forwardMshr_id))
                                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_6_source)
                                                                          : 
                                                                         ((9U 
                                                                           == (IData)(vlSelf->io_forwardMshr_id))
                                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_6_source)
                                                                           : 
                                                                          ((8U 
                                                                            == (IData)(vlSelf->io_forwardMshr_id))
                                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_6_source)
                                                                            : 
                                                                           ((7U 
                                                                             == (IData)(vlSelf->io_forwardMshr_id))
                                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_6_source)
                                                                             : 
                                                                            ((6U 
                                                                              == (IData)(vlSelf->io_forwardMshr_id))
                                                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_6_source)
                                                                              : 
                                                                             ((5U 
                                                                               == (IData)(vlSelf->io_forwardMshr_id))
                                                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_6_source)
                                                                               : 
                                                                              ((4U 
                                                                                == (IData)(vlSelf->io_forwardMshr_id))
                                                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_6_source)
                                                                                : 
                                                                               ((3U 
                                                                                == (IData)(vlSelf->io_forwardMshr_id))
                                                                                 ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_6_source)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->io_forwardMshr_id))
                                                                                 ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_6_source)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->io_forwardMshr_id))
                                                                                 ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_6_source)
                                                                                 : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_6_source)))))))))))))))))) 
                                                               | (((0xfU 
                                                                    == (IData)(vlSelf->io_forwardMshr_id))
                                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_7_valid)
                                                                    : 
                                                                   ((0xeU 
                                                                     == (IData)(vlSelf->io_forwardMshr_id))
                                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_7_valid)
                                                                     : 
                                                                    ((0xdU 
                                                                      == (IData)(vlSelf->io_forwardMshr_id))
                                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_7_valid)
                                                                      : 
                                                                     ((0xcU 
                                                                       == (IData)(vlSelf->io_forwardMshr_id))
                                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_7_valid)
                                                                       : 
                                                                      ((0xbU 
                                                                        == (IData)(vlSelf->io_forwardMshr_id))
                                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_7_valid)
                                                                        : 
                                                                       ((0xaU 
                                                                         == (IData)(vlSelf->io_forwardMshr_id))
                                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_7_valid)
                                                                         : 
                                                                        ((9U 
                                                                          == (IData)(vlSelf->io_forwardMshr_id))
                                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_7_valid)
                                                                          : 
                                                                         ((8U 
                                                                           == (IData)(vlSelf->io_forwardMshr_id))
                                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_7_valid)
                                                                           : 
                                                                          ((7U 
                                                                            == (IData)(vlSelf->io_forwardMshr_id))
                                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_7_valid)
                                                                            : 
                                                                           ((6U 
                                                                             == (IData)(vlSelf->io_forwardMshr_id))
                                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_7_valid)
                                                                             : 
                                                                            ((5U 
                                                                              == (IData)(vlSelf->io_forwardMshr_id))
                                                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_7_valid)
                                                                              : 
                                                                             ((4U 
                                                                               == (IData)(vlSelf->io_forwardMshr_id))
                                                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_7_valid)
                                                                               : 
                                                                              ((3U 
                                                                                == (IData)(vlSelf->io_forwardMshr_id))
                                                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_7_valid)
                                                                                : 
                                                                               ((2U 
                                                                                == (IData)(vlSelf->io_forwardMshr_id))
                                                                                 ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_7_valid)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->io_forwardMshr_id))
                                                                                 ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_7_valid)
                                                                                 : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_7_valid)))))))))))))))) 
                                                                  & (0U 
                                                                     == 
                                                                     ((0xfU 
                                                                       == (IData)(vlSelf->io_forwardMshr_id))
                                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_7_source)
                                                                       : 
                                                                      ((0xeU 
                                                                        == (IData)(vlSelf->io_forwardMshr_id))
                                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_7_source)
                                                                        : 
                                                                       ((0xdU 
                                                                         == (IData)(vlSelf->io_forwardMshr_id))
                                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_7_source)
                                                                         : 
                                                                        ((0xcU 
                                                                          == (IData)(vlSelf->io_forwardMshr_id))
                                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_7_source)
                                                                          : 
                                                                         ((0xbU 
                                                                           == (IData)(vlSelf->io_forwardMshr_id))
                                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_7_source)
                                                                           : 
                                                                          ((0xaU 
                                                                            == (IData)(vlSelf->io_forwardMshr_id))
                                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_7_source)
                                                                            : 
                                                                           ((9U 
                                                                             == (IData)(vlSelf->io_forwardMshr_id))
                                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_7_source)
                                                                             : 
                                                                            ((8U 
                                                                              == (IData)(vlSelf->io_forwardMshr_id))
                                                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_7_source)
                                                                              : 
                                                                             ((7U 
                                                                               == (IData)(vlSelf->io_forwardMshr_id))
                                                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_7_source)
                                                                               : 
                                                                              ((6U 
                                                                                == (IData)(vlSelf->io_forwardMshr_id))
                                                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_7_source)
                                                                                : 
                                                                               ((5U 
                                                                                == (IData)(vlSelf->io_forwardMshr_id))
                                                                                 ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_7_source)
                                                                                 : 
                                                                                ((4U 
                                                                                == (IData)(vlSelf->io_forwardMshr_id))
                                                                                 ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_7_source)
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->io_forwardMshr_id))
                                                                                 ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_7_source)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->io_forwardMshr_id))
                                                                                 ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_7_source)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->io_forwardMshr_id))
                                                                                 ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_7_source)
                                                                                 : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_7_source))))))))))))))))))))))))) 
                                            & ((IData)(vlSelf->io_forwardMshr_half)
                                                ? ((IData)(DCache__DOT__miss__DOT___GEN_4980) 
                                                   >> 1U)
                                                : (IData)(DCache__DOT__miss__DOT___GEN_4980))));
    if ((0x1aU == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                    >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3098 = vlSelf->DCache__DOT__meta__DOT__meta_26_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3354 = vlSelf->DCache__DOT__meta__DOT__meta_26_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3610 = vlSelf->DCache__DOT__meta__DOT__meta_26_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3866 = vlSelf->DCache__DOT__meta__DOT__meta_26_3_coh;
    } else if ((0x19U == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3098 = vlSelf->DCache__DOT__meta__DOT__meta_25_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3354 = vlSelf->DCache__DOT__meta__DOT__meta_25_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3610 = vlSelf->DCache__DOT__meta__DOT__meta_25_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3866 = vlSelf->DCache__DOT__meta__DOT__meta_25_3_coh;
    } else if ((0x18U == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3098 = vlSelf->DCache__DOT__meta__DOT__meta_24_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3354 = vlSelf->DCache__DOT__meta__DOT__meta_24_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3610 = vlSelf->DCache__DOT__meta__DOT__meta_24_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3866 = vlSelf->DCache__DOT__meta__DOT__meta_24_3_coh;
    } else if ((0x17U == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3098 = vlSelf->DCache__DOT__meta__DOT__meta_23_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3354 = vlSelf->DCache__DOT__meta__DOT__meta_23_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3610 = vlSelf->DCache__DOT__meta__DOT__meta_23_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3866 = vlSelf->DCache__DOT__meta__DOT__meta_23_3_coh;
    } else if ((0x16U == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3098 = vlSelf->DCache__DOT__meta__DOT__meta_22_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3354 = vlSelf->DCache__DOT__meta__DOT__meta_22_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3610 = vlSelf->DCache__DOT__meta__DOT__meta_22_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3866 = vlSelf->DCache__DOT__meta__DOT__meta_22_3_coh;
    } else if ((0x15U == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3098 = vlSelf->DCache__DOT__meta__DOT__meta_21_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3354 = vlSelf->DCache__DOT__meta__DOT__meta_21_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3610 = vlSelf->DCache__DOT__meta__DOT__meta_21_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3866 = vlSelf->DCache__DOT__meta__DOT__meta_21_3_coh;
    } else if ((0x14U == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3098 = vlSelf->DCache__DOT__meta__DOT__meta_20_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3354 = vlSelf->DCache__DOT__meta__DOT__meta_20_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3610 = vlSelf->DCache__DOT__meta__DOT__meta_20_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3866 = vlSelf->DCache__DOT__meta__DOT__meta_20_3_coh;
    } else if ((0x13U == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3098 = vlSelf->DCache__DOT__meta__DOT__meta_19_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3354 = vlSelf->DCache__DOT__meta__DOT__meta_19_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3610 = vlSelf->DCache__DOT__meta__DOT__meta_19_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3866 = vlSelf->DCache__DOT__meta__DOT__meta_19_3_coh;
    } else if ((0x12U == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3098 = vlSelf->DCache__DOT__meta__DOT__meta_18_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3354 = vlSelf->DCache__DOT__meta__DOT__meta_18_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3610 = vlSelf->DCache__DOT__meta__DOT__meta_18_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3866 = vlSelf->DCache__DOT__meta__DOT__meta_18_3_coh;
    } else if ((0x11U == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3098 = vlSelf->DCache__DOT__meta__DOT__meta_17_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3354 = vlSelf->DCache__DOT__meta__DOT__meta_17_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3610 = vlSelf->DCache__DOT__meta__DOT__meta_17_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3866 = vlSelf->DCache__DOT__meta__DOT__meta_17_3_coh;
    } else if ((0x10U == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3098 = vlSelf->DCache__DOT__meta__DOT__meta_16_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3354 = vlSelf->DCache__DOT__meta__DOT__meta_16_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3610 = vlSelf->DCache__DOT__meta__DOT__meta_16_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3866 = vlSelf->DCache__DOT__meta__DOT__meta_16_3_coh;
    } else if ((0xfU == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                          >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3098 = vlSelf->DCache__DOT__meta__DOT__meta_15_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3354 = vlSelf->DCache__DOT__meta__DOT__meta_15_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3610 = vlSelf->DCache__DOT__meta__DOT__meta_15_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3866 = vlSelf->DCache__DOT__meta__DOT__meta_15_3_coh;
    } else if ((0xeU == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                          >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3098 = vlSelf->DCache__DOT__meta__DOT__meta_14_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3354 = vlSelf->DCache__DOT__meta__DOT__meta_14_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3610 = vlSelf->DCache__DOT__meta__DOT__meta_14_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3866 = vlSelf->DCache__DOT__meta__DOT__meta_14_3_coh;
    } else {
        vlSelf->DCache__DOT__meta__DOT___GEN_3098 = vlSelf->DCache__DOT__meta__DOT___GEN_3085;
        vlSelf->DCache__DOT__meta__DOT___GEN_3354 = vlSelf->DCache__DOT__meta__DOT___GEN_3341;
        vlSelf->DCache__DOT__meta__DOT___GEN_3610 = vlSelf->DCache__DOT__meta__DOT___GEN_3597;
        vlSelf->DCache__DOT__meta__DOT___GEN_3866 = vlSelf->DCache__DOT__meta__DOT___GEN_3853;
    }
    if ((0x1aU == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                    >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4134 = vlSelf->DCache__DOT__meta__DOT__meta_26_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4390 = vlSelf->DCache__DOT__meta__DOT__meta_26_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4646 = vlSelf->DCache__DOT__meta__DOT__meta_26_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4902 = vlSelf->DCache__DOT__meta__DOT__meta_26_3_coh;
    } else if ((0x19U == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4134 = vlSelf->DCache__DOT__meta__DOT__meta_25_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4390 = vlSelf->DCache__DOT__meta__DOT__meta_25_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4646 = vlSelf->DCache__DOT__meta__DOT__meta_25_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4902 = vlSelf->DCache__DOT__meta__DOT__meta_25_3_coh;
    } else if ((0x18U == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4134 = vlSelf->DCache__DOT__meta__DOT__meta_24_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4390 = vlSelf->DCache__DOT__meta__DOT__meta_24_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4646 = vlSelf->DCache__DOT__meta__DOT__meta_24_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4902 = vlSelf->DCache__DOT__meta__DOT__meta_24_3_coh;
    } else if ((0x17U == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4134 = vlSelf->DCache__DOT__meta__DOT__meta_23_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4390 = vlSelf->DCache__DOT__meta__DOT__meta_23_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4646 = vlSelf->DCache__DOT__meta__DOT__meta_23_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4902 = vlSelf->DCache__DOT__meta__DOT__meta_23_3_coh;
    } else if ((0x16U == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4134 = vlSelf->DCache__DOT__meta__DOT__meta_22_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4390 = vlSelf->DCache__DOT__meta__DOT__meta_22_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4646 = vlSelf->DCache__DOT__meta__DOT__meta_22_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4902 = vlSelf->DCache__DOT__meta__DOT__meta_22_3_coh;
    } else if ((0x15U == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4134 = vlSelf->DCache__DOT__meta__DOT__meta_21_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4390 = vlSelf->DCache__DOT__meta__DOT__meta_21_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4646 = vlSelf->DCache__DOT__meta__DOT__meta_21_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4902 = vlSelf->DCache__DOT__meta__DOT__meta_21_3_coh;
    } else if ((0x14U == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4134 = vlSelf->DCache__DOT__meta__DOT__meta_20_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4390 = vlSelf->DCache__DOT__meta__DOT__meta_20_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4646 = vlSelf->DCache__DOT__meta__DOT__meta_20_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4902 = vlSelf->DCache__DOT__meta__DOT__meta_20_3_coh;
    } else if ((0x13U == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4134 = vlSelf->DCache__DOT__meta__DOT__meta_19_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4390 = vlSelf->DCache__DOT__meta__DOT__meta_19_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4646 = vlSelf->DCache__DOT__meta__DOT__meta_19_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4902 = vlSelf->DCache__DOT__meta__DOT__meta_19_3_coh;
    } else if ((0x12U == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4134 = vlSelf->DCache__DOT__meta__DOT__meta_18_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4390 = vlSelf->DCache__DOT__meta__DOT__meta_18_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4646 = vlSelf->DCache__DOT__meta__DOT__meta_18_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4902 = vlSelf->DCache__DOT__meta__DOT__meta_18_3_coh;
    } else if ((0x11U == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4134 = vlSelf->DCache__DOT__meta__DOT__meta_17_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4390 = vlSelf->DCache__DOT__meta__DOT__meta_17_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4646 = vlSelf->DCache__DOT__meta__DOT__meta_17_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4902 = vlSelf->DCache__DOT__meta__DOT__meta_17_3_coh;
    } else if ((0x10U == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4134 = vlSelf->DCache__DOT__meta__DOT__meta_16_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4390 = vlSelf->DCache__DOT__meta__DOT__meta_16_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4646 = vlSelf->DCache__DOT__meta__DOT__meta_16_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4902 = vlSelf->DCache__DOT__meta__DOT__meta_16_3_coh;
    } else if ((0xfU == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                          >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4134 = vlSelf->DCache__DOT__meta__DOT__meta_15_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4390 = vlSelf->DCache__DOT__meta__DOT__meta_15_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4646 = vlSelf->DCache__DOT__meta__DOT__meta_15_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4902 = vlSelf->DCache__DOT__meta__DOT__meta_15_3_coh;
    } else if ((0xeU == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                          >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4134 = vlSelf->DCache__DOT__meta__DOT__meta_14_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4390 = vlSelf->DCache__DOT__meta__DOT__meta_14_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4646 = vlSelf->DCache__DOT__meta__DOT__meta_14_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4902 = vlSelf->DCache__DOT__meta__DOT__meta_14_3_coh;
    } else {
        vlSelf->DCache__DOT__meta__DOT___GEN_4134 = vlSelf->DCache__DOT__meta__DOT___GEN_4121;
        vlSelf->DCache__DOT__meta__DOT___GEN_4390 = vlSelf->DCache__DOT__meta__DOT___GEN_4377;
        vlSelf->DCache__DOT__meta__DOT___GEN_4646 = vlSelf->DCache__DOT__meta__DOT___GEN_4633;
        vlSelf->DCache__DOT__meta__DOT___GEN_4902 = vlSelf->DCache__DOT__meta__DOT___GEN_4889;
    }
    vlSelf->DCache__DOT__miss__DOT___rspIn_T = ((IData)(vlSelf->DCache__DOT__miss_io_rxRsp_ready) 
                                                & ((IData)(vlSelf->io_l2_rxRsp_valid) 
                                                   & (0x10U 
                                                      >= (IData)(vlSelf->io_l2_rxRsp_bits_txnID))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_hi_lo_12 
        = (((QData)((IData)((0xffU & ((0x800000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                       ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[5U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[5U] 
                                           >> 0x18U))
                                       : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                           << 8U) | 
                                          (vlSelf->io_l2_rxDat_bits_data[5U] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x400000U 
                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                             ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[5U] 
                                                   >> 0x10U))
                                             : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x200000U 
                                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                                             ? 
                                                            ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[5U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[5U] 
                                                                >> 8U))
                                                             : 
                                                            ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                                              << 0x18U) 
                                                             | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                                >> 8U)))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((0x100000U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                                              ? 
                                                             vlSelf->DCache__DOT__miss__DOT__storeHalf_12[5U]
                                                              : 
                                                             vlSelf->io_l2_rxDat_bits_data[5U])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((0x80000U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                                              ? 
                                                             ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[4U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[4U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                               << 8U) 
                                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((0x40000U 
                                                                    & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[4U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((0x20000U 
                                                                       & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[4U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[4U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((0x10000U 
                                                                        & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                                                        ? 
                                                                       vlSelf->DCache__DOT__miss__DOT__storeHalf_12[4U]
                                                                        : 
                                                                       vlSelf->io_l2_rxDat_bits_data[4U])))))))))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_12 
        = (((QData)((IData)((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                       ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[1U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[1U] 
                                           >> 0x18U))
                                       : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                           << 8U) | 
                                          (vlSelf->io_l2_rxDat_bits_data[1U] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x40U 
                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                             ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[1U] 
                                                   >> 0x10U))
                                             : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x20U 
                                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                                             ? 
                                                            ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[1U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[1U] 
                                                                >> 8U))
                                                             : 
                                                            ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                                              << 0x18U) 
                                                             | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                                >> 8U)))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((0x10U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                                              ? 
                                                             vlSelf->DCache__DOT__miss__DOT__storeHalf_12[1U]
                                                              : 
                                                             vlSelf->io_l2_rxDat_bits_data[1U])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((8U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                                              ? 
                                                             ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[0U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[0U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                               << 8U) 
                                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((4U 
                                                                    & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[0U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((2U 
                                                                       & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[0U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((1U 
                                                                        & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                                                        ? 
                                                                       vlSelf->DCache__DOT__miss__DOT__storeHalf_12[0U]
                                                                        : 
                                                                       vlSelf->io_l2_rxDat_bits_data[0U])))))))))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_hi_lo_13 
        = (((QData)((IData)((0xffU & ((0x800000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                       ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[5U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[5U] 
                                           >> 0x18U))
                                       : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                           << 8U) | 
                                          (vlSelf->io_l2_rxDat_bits_data[5U] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x400000U 
                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                             ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[5U] 
                                                   >> 0x10U))
                                             : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x200000U 
                                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                                             ? 
                                                            ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[5U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[5U] 
                                                                >> 8U))
                                                             : 
                                                            ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                                              << 0x18U) 
                                                             | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                                >> 8U)))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((0x100000U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                                              ? 
                                                             vlSelf->DCache__DOT__miss__DOT__storeHalf_13[5U]
                                                              : 
                                                             vlSelf->io_l2_rxDat_bits_data[5U])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((0x80000U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                                              ? 
                                                             ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[4U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[4U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                               << 8U) 
                                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((0x40000U 
                                                                    & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[4U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((0x20000U 
                                                                       & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[4U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[4U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((0x10000U 
                                                                        & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                                                        ? 
                                                                       vlSelf->DCache__DOT__miss__DOT__storeHalf_13[4U]
                                                                        : 
                                                                       vlSelf->io_l2_rxDat_bits_data[4U])))))))))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_13 
        = (((QData)((IData)((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                       ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[1U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[1U] 
                                           >> 0x18U))
                                       : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                           << 8U) | 
                                          (vlSelf->io_l2_rxDat_bits_data[1U] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x40U 
                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                             ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[1U] 
                                                   >> 0x10U))
                                             : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x20U 
                                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                                             ? 
                                                            ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[1U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[1U] 
                                                                >> 8U))
                                                             : 
                                                            ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                                              << 0x18U) 
                                                             | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                                >> 8U)))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((0x10U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                                              ? 
                                                             vlSelf->DCache__DOT__miss__DOT__storeHalf_13[1U]
                                                              : 
                                                             vlSelf->io_l2_rxDat_bits_data[1U])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((8U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                                              ? 
                                                             ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[0U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[0U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                               << 8U) 
                                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((4U 
                                                                    & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[0U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((2U 
                                                                       & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[0U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((1U 
                                                                        & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                                                        ? 
                                                                       vlSelf->DCache__DOT__miss__DOT__storeHalf_13[0U]
                                                                        : 
                                                                       vlSelf->io_l2_rxDat_bits_data[0U])))))))))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_hi_lo_14 
        = (((QData)((IData)((0xffU & ((0x800000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                       ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[5U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[5U] 
                                           >> 0x18U))
                                       : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                           << 8U) | 
                                          (vlSelf->io_l2_rxDat_bits_data[5U] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x400000U 
                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                             ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[5U] 
                                                   >> 0x10U))
                                             : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x200000U 
                                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                                             ? 
                                                            ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[5U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[5U] 
                                                                >> 8U))
                                                             : 
                                                            ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                                              << 0x18U) 
                                                             | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                                >> 8U)))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((0x100000U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                                              ? 
                                                             vlSelf->DCache__DOT__miss__DOT__storeHalf_14[5U]
                                                              : 
                                                             vlSelf->io_l2_rxDat_bits_data[5U])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((0x80000U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                                              ? 
                                                             ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[4U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[4U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                               << 8U) 
                                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((0x40000U 
                                                                    & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[4U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((0x20000U 
                                                                       & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[4U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[4U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((0x10000U 
                                                                        & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                                                        ? 
                                                                       vlSelf->DCache__DOT__miss__DOT__storeHalf_14[4U]
                                                                        : 
                                                                       vlSelf->io_l2_rxDat_bits_data[4U])))))))))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_14 
        = (((QData)((IData)((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                       ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[1U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[1U] 
                                           >> 0x18U))
                                       : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                           << 8U) | 
                                          (vlSelf->io_l2_rxDat_bits_data[1U] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x40U 
                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                             ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[1U] 
                                                   >> 0x10U))
                                             : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x20U 
                                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                                             ? 
                                                            ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[1U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[1U] 
                                                                >> 8U))
                                                             : 
                                                            ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                                              << 0x18U) 
                                                             | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                                >> 8U)))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((0x10U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                                              ? 
                                                             vlSelf->DCache__DOT__miss__DOT__storeHalf_14[1U]
                                                              : 
                                                             vlSelf->io_l2_rxDat_bits_data[1U])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((8U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                                              ? 
                                                             ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[0U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[0U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                               << 8U) 
                                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((4U 
                                                                    & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[0U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((2U 
                                                                       & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[0U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((1U 
                                                                        & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                                                        ? 
                                                                       vlSelf->DCache__DOT__miss__DOT__storeHalf_14[0U]
                                                                        : 
                                                                       vlSelf->io_l2_rxDat_bits_data[0U])))))))))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_hi_lo_15 
        = (((QData)((IData)((0xffU & ((0x800000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                       ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[5U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[5U] 
                                           >> 0x18U))
                                       : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                           << 8U) | 
                                          (vlSelf->io_l2_rxDat_bits_data[5U] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x400000U 
                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                             ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[5U] 
                                                   >> 0x10U))
                                             : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x200000U 
                                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                                             ? 
                                                            ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[5U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[5U] 
                                                                >> 8U))
                                                             : 
                                                            ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                                              << 0x18U) 
                                                             | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                                >> 8U)))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((0x100000U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                                              ? 
                                                             vlSelf->DCache__DOT__miss__DOT__storeHalf_15[5U]
                                                              : 
                                                             vlSelf->io_l2_rxDat_bits_data[5U])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((0x80000U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                                              ? 
                                                             ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[4U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[4U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                               << 8U) 
                                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((0x40000U 
                                                                    & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[4U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((0x20000U 
                                                                       & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[4U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[4U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((0x10000U 
                                                                        & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                                                        ? 
                                                                       vlSelf->DCache__DOT__miss__DOT__storeHalf_15[4U]
                                                                        : 
                                                                       vlSelf->io_l2_rxDat_bits_data[4U])))))))))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_15 
        = (((QData)((IData)((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                       ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[1U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[1U] 
                                           >> 0x18U))
                                       : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                           << 8U) | 
                                          (vlSelf->io_l2_rxDat_bits_data[1U] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x40U 
                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                             ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[1U] 
                                                   >> 0x10U))
                                             : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x20U 
                                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                                             ? 
                                                            ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[1U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[1U] 
                                                                >> 8U))
                                                             : 
                                                            ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                                              << 0x18U) 
                                                             | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                                >> 8U)))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((0x10U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                                              ? 
                                                             vlSelf->DCache__DOT__miss__DOT__storeHalf_15[1U]
                                                              : 
                                                             vlSelf->io_l2_rxDat_bits_data[1U])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((8U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                                              ? 
                                                             ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[0U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[0U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                               << 8U) 
                                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((4U 
                                                                    & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[0U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((2U 
                                                                       & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[0U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((1U 
                                                                        & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                                                        ? 
                                                                       vlSelf->DCache__DOT__miss__DOT__storeHalf_15[0U]
                                                                        : 
                                                                       vlSelf->io_l2_rxDat_bits_data[0U])))))))))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_hi_lo_6 
        = (((QData)((IData)((0xffU & ((0x800000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                       ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[5U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[5U] 
                                           >> 0x18U))
                                       : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                           << 8U) | 
                                          (vlSelf->io_l2_rxDat_bits_data[5U] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x400000U 
                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                             ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[5U] 
                                                   >> 0x10U))
                                             : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x200000U 
                                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                                             ? 
                                                            ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[5U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[5U] 
                                                                >> 8U))
                                                             : 
                                                            ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                                              << 0x18U) 
                                                             | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                                >> 8U)))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((0x100000U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                                              ? 
                                                             vlSelf->DCache__DOT__miss__DOT__storeHalf_6[5U]
                                                              : 
                                                             vlSelf->io_l2_rxDat_bits_data[5U])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((0x80000U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                                              ? 
                                                             ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[4U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[4U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                               << 8U) 
                                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((0x40000U 
                                                                    & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[4U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((0x20000U 
                                                                       & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[4U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[4U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((0x10000U 
                                                                        & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                                                        ? 
                                                                       vlSelf->DCache__DOT__miss__DOT__storeHalf_6[4U]
                                                                        : 
                                                                       vlSelf->io_l2_rxDat_bits_data[4U])))))))))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_6 
        = (((QData)((IData)((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                       ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[1U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[1U] 
                                           >> 0x18U))
                                       : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                           << 8U) | 
                                          (vlSelf->io_l2_rxDat_bits_data[1U] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x40U 
                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                             ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[1U] 
                                                   >> 0x10U))
                                             : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x20U 
                                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                                             ? 
                                                            ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[1U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[1U] 
                                                                >> 8U))
                                                             : 
                                                            ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                                              << 0x18U) 
                                                             | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                                >> 8U)))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((0x10U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                                              ? 
                                                             vlSelf->DCache__DOT__miss__DOT__storeHalf_6[1U]
                                                              : 
                                                             vlSelf->io_l2_rxDat_bits_data[1U])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((8U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                                              ? 
                                                             ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[0U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[0U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                               << 8U) 
                                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((4U 
                                                                    & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[0U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((2U 
                                                                       & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[0U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((1U 
                                                                        & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                                                        ? 
                                                                       vlSelf->DCache__DOT__miss__DOT__storeHalf_6[0U]
                                                                        : 
                                                                       vlSelf->io_l2_rxDat_bits_data[0U])))))))))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_hi_lo_7 
        = (((QData)((IData)((0xffU & ((0x800000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                       ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[5U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[5U] 
                                           >> 0x18U))
                                       : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                           << 8U) | 
                                          (vlSelf->io_l2_rxDat_bits_data[5U] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x400000U 
                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                             ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[5U] 
                                                   >> 0x10U))
                                             : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x200000U 
                                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                                             ? 
                                                            ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[5U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[5U] 
                                                                >> 8U))
                                                             : 
                                                            ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                                              << 0x18U) 
                                                             | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                                >> 8U)))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((0x100000U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                                              ? 
                                                             vlSelf->DCache__DOT__miss__DOT__storeHalf_7[5U]
                                                              : 
                                                             vlSelf->io_l2_rxDat_bits_data[5U])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((0x80000U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                                              ? 
                                                             ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[4U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[4U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                               << 8U) 
                                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((0x40000U 
                                                                    & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[4U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((0x20000U 
                                                                       & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[4U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[4U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((0x10000U 
                                                                        & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                                                        ? 
                                                                       vlSelf->DCache__DOT__miss__DOT__storeHalf_7[4U]
                                                                        : 
                                                                       vlSelf->io_l2_rxDat_bits_data[4U])))))))))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_7 
        = (((QData)((IData)((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                       ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[1U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[1U] 
                                           >> 0x18U))
                                       : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                           << 8U) | 
                                          (vlSelf->io_l2_rxDat_bits_data[1U] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x40U 
                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                             ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[1U] 
                                                   >> 0x10U))
                                             : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x20U 
                                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                                             ? 
                                                            ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[1U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[1U] 
                                                                >> 8U))
                                                             : 
                                                            ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                                              << 0x18U) 
                                                             | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                                >> 8U)))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((0x10U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                                              ? 
                                                             vlSelf->DCache__DOT__miss__DOT__storeHalf_7[1U]
                                                              : 
                                                             vlSelf->io_l2_rxDat_bits_data[1U])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((8U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                                              ? 
                                                             ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[0U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[0U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                               << 8U) 
                                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((4U 
                                                                    & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[0U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((2U 
                                                                       & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[0U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((1U 
                                                                        & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                                                        ? 
                                                                       vlSelf->DCache__DOT__miss__DOT__storeHalf_7[0U]
                                                                        : 
                                                                       vlSelf->io_l2_rxDat_bits_data[0U])))))))))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_hi_lo_8 
        = (((QData)((IData)((0xffU & ((0x800000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                       ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[5U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[5U] 
                                           >> 0x18U))
                                       : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                           << 8U) | 
                                          (vlSelf->io_l2_rxDat_bits_data[5U] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x400000U 
                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                             ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[5U] 
                                                   >> 0x10U))
                                             : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x200000U 
                                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                                             ? 
                                                            ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[5U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[5U] 
                                                                >> 8U))
                                                             : 
                                                            ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                                              << 0x18U) 
                                                             | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                                >> 8U)))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((0x100000U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                                              ? 
                                                             vlSelf->DCache__DOT__miss__DOT__storeHalf_8[5U]
                                                              : 
                                                             vlSelf->io_l2_rxDat_bits_data[5U])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((0x80000U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                                              ? 
                                                             ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[4U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[4U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                               << 8U) 
                                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((0x40000U 
                                                                    & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[4U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((0x20000U 
                                                                       & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[4U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[4U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((0x10000U 
                                                                        & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                                                        ? 
                                                                       vlSelf->DCache__DOT__miss__DOT__storeHalf_8[4U]
                                                                        : 
                                                                       vlSelf->io_l2_rxDat_bits_data[4U])))))))))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_8 
        = (((QData)((IData)((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                       ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[1U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[1U] 
                                           >> 0x18U))
                                       : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                           << 8U) | 
                                          (vlSelf->io_l2_rxDat_bits_data[1U] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x40U 
                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                             ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[1U] 
                                                   >> 0x10U))
                                             : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x20U 
                                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                                             ? 
                                                            ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[1U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[1U] 
                                                                >> 8U))
                                                             : 
                                                            ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                                              << 0x18U) 
                                                             | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                                >> 8U)))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((0x10U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                                              ? 
                                                             vlSelf->DCache__DOT__miss__DOT__storeHalf_8[1U]
                                                              : 
                                                             vlSelf->io_l2_rxDat_bits_data[1U])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((8U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                                              ? 
                                                             ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[0U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[0U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                               << 8U) 
                                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((4U 
                                                                    & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[0U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((2U 
                                                                       & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[0U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((1U 
                                                                        & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                                                        ? 
                                                                       vlSelf->DCache__DOT__miss__DOT__storeHalf_8[0U]
                                                                        : 
                                                                       vlSelf->io_l2_rxDat_bits_data[0U])))))))))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_hi_lo_9 
        = (((QData)((IData)((0xffU & ((0x800000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                       ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[5U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[5U] 
                                           >> 0x18U))
                                       : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                           << 8U) | 
                                          (vlSelf->io_l2_rxDat_bits_data[5U] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x400000U 
                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                             ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[5U] 
                                                   >> 0x10U))
                                             : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x200000U 
                                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                                             ? 
                                                            ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[5U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[5U] 
                                                                >> 8U))
                                                             : 
                                                            ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                                              << 0x18U) 
                                                             | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                                >> 8U)))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((0x100000U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                                              ? 
                                                             vlSelf->DCache__DOT__miss__DOT__storeHalf_9[5U]
                                                              : 
                                                             vlSelf->io_l2_rxDat_bits_data[5U])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((0x80000U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                                              ? 
                                                             ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[4U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[4U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                               << 8U) 
                                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((0x40000U 
                                                                    & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[4U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((0x20000U 
                                                                       & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[4U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[4U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((0x10000U 
                                                                        & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                                                        ? 
                                                                       vlSelf->DCache__DOT__miss__DOT__storeHalf_9[4U]
                                                                        : 
                                                                       vlSelf->io_l2_rxDat_bits_data[4U])))))))))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_9 
        = (((QData)((IData)((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                       ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[1U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[1U] 
                                           >> 0x18U))
                                       : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                           << 8U) | 
                                          (vlSelf->io_l2_rxDat_bits_data[1U] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x40U 
                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                             ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[1U] 
                                                   >> 0x10U))
                                             : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x20U 
                                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                                             ? 
                                                            ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[1U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[1U] 
                                                                >> 8U))
                                                             : 
                                                            ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                                              << 0x18U) 
                                                             | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                                >> 8U)))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((0x10U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                                              ? 
                                                             vlSelf->DCache__DOT__miss__DOT__storeHalf_9[1U]
                                                              : 
                                                             vlSelf->io_l2_rxDat_bits_data[1U])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((8U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                                              ? 
                                                             ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[0U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[0U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                               << 8U) 
                                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((4U 
                                                                    & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[0U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((2U 
                                                                       & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[0U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((1U 
                                                                        & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                                                        ? 
                                                                       vlSelf->DCache__DOT__miss__DOT__storeHalf_9[0U]
                                                                        : 
                                                                       vlSelf->io_l2_rxDat_bits_data[0U])))))))))));
}
