// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDCache.h for the primary calling header

#include "verilated.h"

#include "VDCache__Syms.h"
#include "VDCache___024root.h"

void VDCache___024root___nba_sequent__TOP__0(VDCache___024root* vlSelf);
void VDCache___024root___nba_sequent__TOP__1(VDCache___024root* vlSelf);
void VDCache___024root___nba_sequent__TOP__2(VDCache___024root* vlSelf);
void VDCache___024root___nba_sequent__TOP__3(VDCache___024root* vlSelf);
void VDCache___024root___nba_sequent__TOP__4(VDCache___024root* vlSelf);
void VDCache___024root___nba_sequent__TOP__5(VDCache___024root* vlSelf);
void VDCache___024root___nba_sequent__TOP__6(VDCache___024root* vlSelf);
void VDCache___024root___nba_sequent__TOP__7(VDCache___024root* vlSelf);
void VDCache___024root___nba_sequent__TOP__8(VDCache___024root* vlSelf);
void VDCache___024root___nba_sequent__TOP__9(VDCache___024root* vlSelf);
void VDCache___024root___nba_sequent__TOP__10(VDCache___024root* vlSelf);
void VDCache___024root___nba_sequent__TOP__11(VDCache___024root* vlSelf);

void VDCache___024root___eval_nba(VDCache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDCache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDCache___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VDCache___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        VDCache___024root___nba_sequent__TOP__1(vlSelf);
        VDCache___024root___nba_sequent__TOP__2(vlSelf);
        VDCache___024root___nba_sequent__TOP__3(vlSelf);
        VDCache___024root___nba_sequent__TOP__4(vlSelf);
        VDCache___024root___nba_sequent__TOP__5(vlSelf);
        VDCache___024root___nba_sequent__TOP__6(vlSelf);
        VDCache___024root___nba_sequent__TOP__7(vlSelf);
        VDCache___024root___nba_sequent__TOP__8(vlSelf);
        VDCache___024root___nba_sequent__TOP__9(vlSelf);
        VDCache___024root___nba_sequent__TOP__10(vlSelf);
        VDCache___024root___nba_sequent__TOP__11(vlSelf);
    }
}

void VDCache___024root___eval_triggers__ico(VDCache___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VDCache___024root___dump_triggers__ico(VDCache___024root* vlSelf);
#endif  // VL_DEBUG
void VDCache___024root___eval_ico(VDCache___024root* vlSelf);
void VDCache___024root___eval_triggers__act(VDCache___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VDCache___024root___dump_triggers__act(VDCache___024root* vlSelf);
#endif  // VL_DEBUG
void VDCache___024root___eval_act(VDCache___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VDCache___024root___dump_triggers__nba(VDCache___024root* vlSelf);
#endif  // VL_DEBUG

void VDCache___024root___eval(VDCache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDCache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDCache___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VDCache___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VDCache___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("regress_build/verilog/DCache.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VDCache___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VDCache___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VDCache___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("regress_build/verilog/DCache.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                VDCache___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VDCache___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("regress_build/verilog/DCache.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VDCache___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VDCache___024root___eval_debug_assertions(VDCache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDCache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDCache___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_load_0_req_valid & 0xfeU))) {
        Verilated::overWidthError("io_load_0_req_valid");}
    if (VL_UNLIKELY((vlSelf->io_load_0_req_bits_cmd 
                     & 0xe0U))) {
        Verilated::overWidthError("io_load_0_req_bits_cmd");}
    if (VL_UNLIKELY((vlSelf->io_load_0_req_bits_vaddr 
                     & 0ULL))) {
        Verilated::overWidthError("io_load_0_req_bits_vaddr");}
    if (VL_UNLIKELY((vlSelf->io_load_0_req_bits_vaddr_dup 
                     & 0ULL))) {
        Verilated::overWidthError("io_load_0_req_bits_vaddr_dup");}
    if (VL_UNLIKELY((vlSelf->io_load_0_req_bits_id 
                     & 0xc0U))) {
        Verilated::overWidthError("io_load_0_req_bits_id");}
    if (VL_UNLIKELY((vlSelf->io_load_0_req_bits_instrtype 
                     & 0xf0U))) {
        Verilated::overWidthError("io_load_0_req_bits_instrtype");}
    if (VL_UNLIKELY((vlSelf->io_load_0_req_bits_isFirstIssue 
                     & 0xfeU))) {
        Verilated::overWidthError("io_load_0_req_bits_isFirstIssue");}
    if (VL_UNLIKELY((vlSelf->io_load_0_req_bits_replayCarry_real_way_en 
                     & 0xf0U))) {
        Verilated::overWidthError("io_load_0_req_bits_replayCarry_real_way_en");}
    if (VL_UNLIKELY((vlSelf->io_load_0_req_bits_replayCarry_valid 
                     & 0xfeU))) {
        Verilated::overWidthError("io_load_0_req_bits_replayCarry_valid");}
    if (VL_UNLIKELY((vlSelf->io_load_0_req_bits_lqIdx_flag 
                     & 0xfeU))) {
        Verilated::overWidthError("io_load_0_req_bits_lqIdx_flag");}
    if (VL_UNLIKELY((vlSelf->io_load_0_req_bits_lqIdx_value 
                     & 0xf0U))) {
        Verilated::overWidthError("io_load_0_req_bits_lqIdx_value");}
    if (VL_UNLIKELY((vlSelf->io_load_0_resp_ready & 0xfeU))) {
        Verilated::overWidthError("io_load_0_resp_ready");}
    if (VL_UNLIKELY((vlSelf->io_load_0_s1_kill_data_read 
                     & 0xfeU))) {
        Verilated::overWidthError("io_load_0_s1_kill_data_read");}
    if (VL_UNLIKELY((vlSelf->io_load_0_s1_kill & 0xfeU))) {
        Verilated::overWidthError("io_load_0_s1_kill");}
    if (VL_UNLIKELY((vlSelf->io_load_0_s2_kill & 0xfeU))) {
        Verilated::overWidthError("io_load_0_s2_kill");}
    if (VL_UNLIKELY((vlSelf->io_load_0_s0_pc & 0ULL))) {
        Verilated::overWidthError("io_load_0_s0_pc");}
    if (VL_UNLIKELY((vlSelf->io_load_0_s1_pc & 0ULL))) {
        Verilated::overWidthError("io_load_0_s1_pc");}
    if (VL_UNLIKELY((vlSelf->io_load_0_s2_pc & 0ULL))) {
        Verilated::overWidthError("io_load_0_s2_pc");}
    if (VL_UNLIKELY((vlSelf->io_load_0_replacementUpdated 
                     & 0xfeU))) {
        Verilated::overWidthError("io_load_0_replacementUpdated");}
    if (VL_UNLIKELY((vlSelf->io_load_0_is128Req & 0xfeU))) {
        Verilated::overWidthError("io_load_0_is128Req");}
    if (VL_UNLIKELY((vlSelf->io_load_0_s1_paddr_dup_lsu 
                     & 0ULL))) {
        Verilated::overWidthError("io_load_0_s1_paddr_dup_lsu");}
    if (VL_UNLIKELY((vlSelf->io_load_0_s1_paddr_dup_dcache 
                     & 0ULL))) {
        Verilated::overWidthError("io_load_0_s1_paddr_dup_dcache");}
    if (VL_UNLIKELY((vlSelf->io_load_1_req_valid & 0xfeU))) {
        Verilated::overWidthError("io_load_1_req_valid");}
    if (VL_UNLIKELY((vlSelf->io_load_1_req_bits_cmd 
                     & 0xe0U))) {
        Verilated::overWidthError("io_load_1_req_bits_cmd");}
    if (VL_UNLIKELY((vlSelf->io_load_1_req_bits_vaddr 
                     & 0ULL))) {
        Verilated::overWidthError("io_load_1_req_bits_vaddr");}
    if (VL_UNLIKELY((vlSelf->io_load_1_req_bits_vaddr_dup 
                     & 0ULL))) {
        Verilated::overWidthError("io_load_1_req_bits_vaddr_dup");}
    if (VL_UNLIKELY((vlSelf->io_load_1_req_bits_id 
                     & 0xc0U))) {
        Verilated::overWidthError("io_load_1_req_bits_id");}
    if (VL_UNLIKELY((vlSelf->io_load_1_req_bits_instrtype 
                     & 0xf0U))) {
        Verilated::overWidthError("io_load_1_req_bits_instrtype");}
    if (VL_UNLIKELY((vlSelf->io_load_1_req_bits_isFirstIssue 
                     & 0xfeU))) {
        Verilated::overWidthError("io_load_1_req_bits_isFirstIssue");}
    if (VL_UNLIKELY((vlSelf->io_load_1_req_bits_replayCarry_real_way_en 
                     & 0xf0U))) {
        Verilated::overWidthError("io_load_1_req_bits_replayCarry_real_way_en");}
    if (VL_UNLIKELY((vlSelf->io_load_1_req_bits_replayCarry_valid 
                     & 0xfeU))) {
        Verilated::overWidthError("io_load_1_req_bits_replayCarry_valid");}
    if (VL_UNLIKELY((vlSelf->io_load_1_req_bits_lqIdx_flag 
                     & 0xfeU))) {
        Verilated::overWidthError("io_load_1_req_bits_lqIdx_flag");}
    if (VL_UNLIKELY((vlSelf->io_load_1_req_bits_lqIdx_value 
                     & 0xf0U))) {
        Verilated::overWidthError("io_load_1_req_bits_lqIdx_value");}
    if (VL_UNLIKELY((vlSelf->io_load_1_resp_ready & 0xfeU))) {
        Verilated::overWidthError("io_load_1_resp_ready");}
    if (VL_UNLIKELY((vlSelf->io_load_1_s1_kill_data_read 
                     & 0xfeU))) {
        Verilated::overWidthError("io_load_1_s1_kill_data_read");}
    if (VL_UNLIKELY((vlSelf->io_load_1_s1_kill & 0xfeU))) {
        Verilated::overWidthError("io_load_1_s1_kill");}
    if (VL_UNLIKELY((vlSelf->io_load_1_s2_kill & 0xfeU))) {
        Verilated::overWidthError("io_load_1_s2_kill");}
    if (VL_UNLIKELY((vlSelf->io_load_1_s0_pc & 0ULL))) {
        Verilated::overWidthError("io_load_1_s0_pc");}
    if (VL_UNLIKELY((vlSelf->io_load_1_s1_pc & 0ULL))) {
        Verilated::overWidthError("io_load_1_s1_pc");}
    if (VL_UNLIKELY((vlSelf->io_load_1_s2_pc & 0ULL))) {
        Verilated::overWidthError("io_load_1_s2_pc");}
    if (VL_UNLIKELY((vlSelf->io_load_1_replacementUpdated 
                     & 0xfeU))) {
        Verilated::overWidthError("io_load_1_replacementUpdated");}
    if (VL_UNLIKELY((vlSelf->io_load_1_is128Req & 0xfeU))) {
        Verilated::overWidthError("io_load_1_is128Req");}
    if (VL_UNLIKELY((vlSelf->io_load_1_s1_paddr_dup_lsu 
                     & 0ULL))) {
        Verilated::overWidthError("io_load_1_s1_paddr_dup_lsu");}
    if (VL_UNLIKELY((vlSelf->io_load_1_s1_paddr_dup_dcache 
                     & 0ULL))) {
        Verilated::overWidthError("io_load_1_s1_paddr_dup_dcache");}
    if (VL_UNLIKELY((vlSelf->io_store_req_valid & 0xfeU))) {
        Verilated::overWidthError("io_store_req_valid");}
    if (VL_UNLIKELY((vlSelf->io_store_req_bits_cmd 
                     & 0xe0U))) {
        Verilated::overWidthError("io_store_req_bits_cmd");}
    if (VL_UNLIKELY((vlSelf->io_store_req_bits_vaddr 
                     & 0ULL))) {
        Verilated::overWidthError("io_store_req_bits_vaddr");}
    if (VL_UNLIKELY((vlSelf->io_store_req_bits_addr 
                     & 0ULL))) {
        Verilated::overWidthError("io_store_req_bits_addr");}
    if (VL_UNLIKELY((vlSelf->io_store_req_bits_id & 0xc0U))) {
        Verilated::overWidthError("io_store_req_bits_id");}
    if (VL_UNLIKELY((vlSelf->io_store_main_pipe_hit_resp_ready 
                     & 0xfeU))) {
        Verilated::overWidthError("io_store_main_pipe_hit_resp_ready");}
    if (VL_UNLIKELY((vlSelf->io_store_refill_hit_resp_ready 
                     & 0xfeU))) {
        Verilated::overWidthError("io_store_refill_hit_resp_ready");}
    if (VL_UNLIKELY((vlSelf->io_store_replay_resp_ready 
                     & 0xfeU))) {
        Verilated::overWidthError("io_store_replay_resp_ready");}
    if (VL_UNLIKELY((vlSelf->io_atomics_req_valid & 0xfeU))) {
        Verilated::overWidthError("io_atomics_req_valid");}
    if (VL_UNLIKELY((vlSelf->io_atomics_req_bits_cmd 
                     & 0xe0U))) {
        Verilated::overWidthError("io_atomics_req_bits_cmd");}
    if (VL_UNLIKELY((vlSelf->io_atomics_req_bits_vaddr 
                     & 0ULL))) {
        Verilated::overWidthError("io_atomics_req_bits_vaddr");}
    if (VL_UNLIKELY((vlSelf->io_atomics_req_bits_addr 
                     & 0ULL))) {
        Verilated::overWidthError("io_atomics_req_bits_addr");}
    if (VL_UNLIKELY((vlSelf->io_atomics_req_bits_tagAlias 
                     & 0xfcU))) {
        Verilated::overWidthError("io_atomics_req_bits_tagAlias");}
    if (VL_UNLIKELY((vlSelf->io_atomics_req_bits_id 
                     & 0xc0U))) {
        Verilated::overWidthError("io_atomics_req_bits_id");}
    if (VL_UNLIKELY((vlSelf->io_atomics_req_bits_missId 
                     & 0xf0U))) {
        Verilated::overWidthError("io_atomics_req_bits_missId");}
    if (VL_UNLIKELY((vlSelf->io_atomics_req_bits_pc 
                     & 0ULL))) {
        Verilated::overWidthError("io_atomics_req_bits_pc");}
    if (VL_UNLIKELY((vlSelf->io_atomics_req_bits_wordIdx 
                     & 0xf8U))) {
        Verilated::overWidthError("io_atomics_req_bits_wordIdx");}
    if (VL_UNLIKELY((vlSelf->io_atomics_req_bits_probeOp 
                     & 0xfcU))) {
        Verilated::overWidthError("io_atomics_req_bits_probeOp");}
    if (VL_UNLIKELY((vlSelf->io_atomics_req_bits_needData 
                     & 0xfeU))) {
        Verilated::overWidthError("io_atomics_req_bits_needData");}
    if (VL_UNLIKELY((vlSelf->io_atomics_req_bits_replaceWay 
                     & 0xf0U))) {
        Verilated::overWidthError("io_atomics_req_bits_replaceWay");}
    if (VL_UNLIKELY((vlSelf->io_atomics_resp_ready 
                     & 0xfeU))) {
        Verilated::overWidthError("io_atomics_resp_ready");}
    if (VL_UNLIKELY((vlSelf->io_atomics_replay_ready 
                     & 0xfeU))) {
        Verilated::overWidthError("io_atomics_replay_ready");}
    if (VL_UNLIKELY((vlSelf->io_cmoReq_valid & 0xfeU))) {
        Verilated::overWidthError("io_cmoReq_valid");}
    if (VL_UNLIKELY((vlSelf->io_cmoReq_bits_id & 0xc0U))) {
        Verilated::overWidthError("io_cmoReq_bits_id");}
    if (VL_UNLIKELY((vlSelf->io_cmoReq_bits_opcode 
                     & 0xc0U))) {
        Verilated::overWidthError("io_cmoReq_bits_opcode");}
    if (VL_UNLIKELY((vlSelf->io_cmoReq_bits_addr & 0ULL))) {
        Verilated::overWidthError("io_cmoReq_bits_addr");}
    if (VL_UNLIKELY((vlSelf->io_cmoReq_bits_alias & 0xfcU))) {
        Verilated::overWidthError("io_cmoReq_bits_alias");}
    if (VL_UNLIKELY((vlSelf->io_cmoResp_ready & 0xfeU))) {
        Verilated::overWidthError("io_cmoResp_ready");}
    if (VL_UNLIKELY((vlSelf->io_wfi_req & 0xfeU))) {
        Verilated::overWidthError("io_wfi_req");}
    if (VL_UNLIKELY((vlSelf->io_l2_req_ready & 0xfeU))) {
        Verilated::overWidthError("io_l2_req_ready");}
    if (VL_UNLIKELY((vlSelf->io_l2_evt_ready & 0xfeU))) {
        Verilated::overWidthError("io_l2_evt_ready");}
    if (VL_UNLIKELY((vlSelf->io_l2_txRsp_ready & 0xfeU))) {
        Verilated::overWidthError("io_l2_txRsp_ready");}
    if (VL_UNLIKELY((vlSelf->io_l2_txDat_ready & 0xfeU))) {
        Verilated::overWidthError("io_l2_txDat_ready");}
    if (VL_UNLIKELY((vlSelf->io_l2_rxRsp_valid & 0xfeU))) {
        Verilated::overWidthError("io_l2_rxRsp_valid");}
    if (VL_UNLIKELY((vlSelf->io_l2_rxRsp_bits_srcID 
                     & 0x80U))) {
        Verilated::overWidthError("io_l2_rxRsp_bits_srcID");}
    if (VL_UNLIKELY((vlSelf->io_l2_rxRsp_bits_tgtID 
                     & 0x80U))) {
        Verilated::overWidthError("io_l2_rxRsp_bits_tgtID");}
    if (VL_UNLIKELY((vlSelf->io_l2_rxRsp_bits_opcode 
                     & 0xf8U))) {
        Verilated::overWidthError("io_l2_rxRsp_bits_opcode");}
    if (VL_UNLIKELY((vlSelf->io_l2_rxRsp_bits_respErr 
                     & 0xfcU))) {
        Verilated::overWidthError("io_l2_rxRsp_bits_respErr");}
    if (VL_UNLIKELY((vlSelf->io_l2_rxRsp_bits_resp 
                     & 0xf8U))) {
        Verilated::overWidthError("io_l2_rxRsp_bits_resp");}
    if (VL_UNLIKELY((vlSelf->io_l2_rxRsp_bits_cBusy 
                     & 0xf8U))) {
        Verilated::overWidthError("io_l2_rxRsp_bits_cBusy");}
    if (VL_UNLIKELY((vlSelf->io_l2_rxRsp_bits_traceTag 
                     & 0xfeU))) {
        Verilated::overWidthError("io_l2_rxRsp_bits_traceTag");}
    if (VL_UNLIKELY((vlSelf->io_l2_rxDat_valid & 0xfeU))) {
        Verilated::overWidthError("io_l2_rxDat_valid");}
    if (VL_UNLIKELY((vlSelf->io_l2_rxDat_bits_srcID 
                     & 0x80U))) {
        Verilated::overWidthError("io_l2_rxDat_bits_srcID");}
    if (VL_UNLIKELY((vlSelf->io_l2_rxDat_bits_tgtID 
                     & 0x80U))) {
        Verilated::overWidthError("io_l2_rxDat_bits_tgtID");}
    if (VL_UNLIKELY((vlSelf->io_l2_rxDat_bits_opcode 
                     & 0xfeU))) {
        Verilated::overWidthError("io_l2_rxDat_bits_opcode");}
    if (VL_UNLIKELY((vlSelf->io_l2_rxDat_bits_respErr 
                     & 0xfcU))) {
        Verilated::overWidthError("io_l2_rxDat_bits_respErr");}
    if (VL_UNLIKELY((vlSelf->io_l2_rxDat_bits_resp 
                     & 0xf8U))) {
        Verilated::overWidthError("io_l2_rxDat_bits_resp");}
    if (VL_UNLIKELY((vlSelf->io_l2_rxDat_bits_dataSource 
                     & 0xe0U))) {
        Verilated::overWidthError("io_l2_rxDat_bits_dataSource");}
    if (VL_UNLIKELY((vlSelf->io_l2_rxDat_bits_cBusy 
                     & 0xf8U))) {
        Verilated::overWidthError("io_l2_rxDat_bits_cBusy");}
    if (VL_UNLIKELY((vlSelf->io_l2_rxDat_bits_dataID 
                     & 0xfeU))) {
        Verilated::overWidthError("io_l2_rxDat_bits_dataID");}
    if (VL_UNLIKELY((vlSelf->io_l2_rxDat_bits_traceTag 
                     & 0xfeU))) {
        Verilated::overWidthError("io_l2_rxDat_bits_traceTag");}
    if (VL_UNLIKELY((vlSelf->io_l2_rxSnp_valid & 0xfeU))) {
        Verilated::overWidthError("io_l2_rxSnp_valid");}
    if (VL_UNLIKELY((vlSelf->io_l2_rxSnp_bits_srcID 
                     & 0x80U))) {
        Verilated::overWidthError("io_l2_rxSnp_bits_srcID");}
    if (VL_UNLIKELY((vlSelf->io_l2_rxSnp_bits_tgtID 
                     & 0x80U))) {
        Verilated::overWidthError("io_l2_rxSnp_bits_tgtID");}
    if (VL_UNLIKELY((vlSelf->io_l2_rxSnp_bits_opcode 
                     & 0xfcU))) {
        Verilated::overWidthError("io_l2_rxSnp_bits_opcode");}
    if (VL_UNLIKELY((vlSelf->io_l2_rxSnp_bits_addr 
                     & 0ULL))) {
        Verilated::overWidthError("io_l2_rxSnp_bits_addr");}
    if (VL_UNLIKELY((vlSelf->io_l2_rxSnp_bits_tagAlias 
                     & 0xfcU))) {
        Verilated::overWidthError("io_l2_rxSnp_bits_tagAlias");}
    if (VL_UNLIKELY((vlSelf->io_l2_rxSnp_bits_ns & 0xfeU))) {
        Verilated::overWidthError("io_l2_rxSnp_bits_ns");}
    if (VL_UNLIKELY((vlSelf->io_l2_rxSnp_bits_traceTag 
                     & 0xfeU))) {
        Verilated::overWidthError("io_l2_rxSnp_bits_traceTag");}
    if (VL_UNLIKELY((vlSelf->io_forwardMshr_id & 0xf0U))) {
        Verilated::overWidthError("io_forwardMshr_id");}
    if (VL_UNLIKELY((vlSelf->io_forwardMshr_half & 0xfeU))) {
        Verilated::overWidthError("io_forwardMshr_half");}
    if (VL_UNLIKELY((vlSelf->io_refillWakeup_ready 
                     & 0xfeU))) {
        Verilated::overWidthError("io_refillWakeup_ready");}
    if (VL_UNLIKELY((vlSelf->io_loadReplay_ready & 0xfeU))) {
        Verilated::overWidthError("io_loadReplay_ready");}
}
#endif  // VL_DEBUG
