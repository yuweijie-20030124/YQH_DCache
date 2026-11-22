// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDCache.h for the primary calling header

#include "verilated.h"

#include "VDCache__Syms.h"
#include "VDCache__Syms.h"
#include "VDCache___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VDCache___024root___dump_triggers__ico(VDCache___024root* vlSelf);
#endif  // VL_DEBUG

void VDCache___024root___eval_triggers__ico(VDCache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDCache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDCache___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VDCache___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VDCache___024root___dump_triggers__act(VDCache___024root* vlSelf);
#endif  // VL_DEBUG

void VDCache___024root___eval_triggers__act(VDCache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDCache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDCache___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clock) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clock__0))));
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VDCache___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VDCache___024root___nba_sequent__TOP__0(VDCache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDCache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDCache___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->io_l2_rxRsp_valid)) 
                                  | (0x10U >= (IData)(vlSelf->io_l2_rxRsp_bits_txnID))) 
                                 | (IData)(vlSelf->DCache__DOT__rspToWb))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: RXRSP txnId is not a miss, CMO, or writeback id\n    at Dcache.scala:346 assert(!io.l2.rxRsp.valid || rspToMiss || rspToWb,\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->io_l2_rxRsp_valid)) 
                                  | (0x10U >= (IData)(vlSelf->io_l2_rxRsp_bits_txnID))) 
                                 | (IData)(vlSelf->DCache__DOT__rspToWb))))))) {
        VL_WRITEF("[%0t] %%Fatal: DCache.v:2809: Assertion failed in %NDCache\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/DCache.v", 2809, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((IData)(vlSelf->io_l2_rxDat_ready) 
                                     & (IData)(vlSelf->io_l2_rxDat_valid))) 
                                 | (0x10U > (IData)(vlSelf->io_l2_rxDat_bits_txnID)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: RXDAT txnId must be an MSHR\n    at Dcache.scala:348 assert(!io.l2.rxDat.fire || io.l2.rxDat.bits.txnID < nMissEntries.U,\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((IData)(vlSelf->io_l2_rxDat_ready) 
                                     & (IData)(vlSelf->io_l2_rxDat_valid))) 
                                 | (0x10U > (IData)(vlSelf->io_l2_rxDat_bits_txnID)))))))) {
        VL_WRITEF("[%0t] %%Fatal: DCache.v:2833: Assertion failed in %NDCache\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/DCache.v", 2833, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT___T_11) 
                                                       + (IData)(vlSelf->DCache__DOT___T_12))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TXRSP sends one response per cycle\n    at Dcache.scala:350 assert(PopCount(Seq(snpRsp.fire, ackRsp.fire)) <= 1.U,\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT___T_11) 
                                                       + (IData)(vlSelf->DCache__DOT___T_12))))))) {
        VL_WRITEF("[%0t] %%Fatal: DCache.v:2857: Assertion failed in %NDCache\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/DCache.v", 2857, "");
    }
    vlSelf->__Vdly__DCache__DOT__miss__DOT__cmoState 
        = vlSelf->DCache__DOT__miss__DOT__cmoState;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->DCache__DOT__meta_io_write_valid)) 
                                 | (1U >= (IData)(vlSelf->DCache__DOT__data__DOT___T_15)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: meta write must select at most one way\n    at MetaArray.scala:55 assert(!io.write.valid || PopCount(io.write.bits.way_en) <= 1.U,\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->DCache__DOT__meta_io_write_valid)) 
                                 | (1U >= (IData)(vlSelf->DCache__DOT__data__DOT___T_15)))))))) {
        VL_WRITEF("[%0t] %%Fatal: MetaArray.v:14555: Assertion failed in %NDCache.meta\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/MetaArray.v", 14555, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->DCache__DOT__tags_io_write_valid)) 
                                 | (1U == (IData)(vlSelf->DCache__DOT__data__DOT___T_15)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: tag write must select exactly one way\n    at TagArray.scala:92 assert(!io.write.valid || PopCount(io.write.bits.way_en) === 1.U,\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->DCache__DOT__tags_io_write_valid)) 
                                 | (1U == (IData)(vlSelf->DCache__DOT__data__DOT___T_15)))))))) {
        VL_WRITEF("[%0t] %%Fatal: TagArray.v:100: Assertion failed in %NDCache.tags.arrays_0\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/TagArray.v", 100, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->DCache__DOT__tags_io_write_valid)) 
                                 | (1U == (IData)(vlSelf->DCache__DOT__data__DOT___T_15)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: tag write must select exactly one way\n    at TagArray.scala:92 assert(!io.write.valid || PopCount(io.write.bits.way_en) === 1.U,\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->DCache__DOT__tags_io_write_valid)) 
                                 | (1U == (IData)(vlSelf->DCache__DOT__data__DOT___T_15)))))))) {
        VL_WRITEF("[%0t] %%Fatal: TagArray.v:100: Assertion failed in %NDCache.tags.arrays_1\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/TagArray.v", 100, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->DCache__DOT__tags_io_write_valid)) 
                                 | (1U == (IData)(vlSelf->DCache__DOT__data__DOT___T_15)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: tag write must select exactly one way\n    at TagArray.scala:92 assert(!io.write.valid || PopCount(io.write.bits.way_en) === 1.U,\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->DCache__DOT__tags_io_write_valid)) 
                                 | (1U == (IData)(vlSelf->DCache__DOT__data__DOT___T_15)))))))) {
        VL_WRITEF("[%0t] %%Fatal: TagArray.v:100: Assertion failed in %NDCache.tags.arrays_2\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/TagArray.v", 100, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->DCache__DOT__data_io_write_valid)) 
                                 | (1U >= (IData)(vlSelf->DCache__DOT__data__DOT___T_15)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: data write must select at most one way\n    at BankedDataArray.scala:167 assert(!io.write.valid || PopCount(io.write.bits.wayEn) <= 1.U,\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->DCache__DOT__data_io_write_valid)) 
                                 | (1U >= (IData)(vlSelf->DCache__DOT__data__DOT___T_15)))))))) {
        VL_WRITEF("[%0t] %%Fatal: BankedDataArray.v:837: Assertion failed in %NDCache.data\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/BankedDataArray.v", 837, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((IData)(vlSelf->DCache__DOT__data_io_load_0_valid) 
                                     & (1U < (IData)(vlSelf->DCache__DOT__data__DOT___is128_T_20)))) 
                                 | (7U != (7U & (IData)(
                                                        (vlSelf->DCache__DOT__loads_0__DOT__s1_req_vaddr 
                                                         >> 3U)))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 128-bit data read must not cross a cache line\n    at BankedDataArray.scala:171 assert(!is128 || loadBank0(i) =/= (DCacheBanks - 1).U,\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((IData)(vlSelf->DCache__DOT__data_io_load_0_valid) 
                                     & (1U < (IData)(vlSelf->DCache__DOT__data__DOT___is128_T_20)))) 
                                 | (7U != (7U & (IData)(
                                                        (vlSelf->DCache__DOT__loads_0__DOT__s1_req_vaddr 
                                                         >> 3U)))))))))) {
        VL_WRITEF("[%0t] %%Fatal: BankedDataArray.v:861: Assertion failed in %NDCache.data\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/BankedDataArray.v", 861, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((IData)(vlSelf->DCache__DOT__data_io_load_1_valid) 
                                     & (1U < (IData)(vlSelf->DCache__DOT__data__DOT___is128_T_43)))) 
                                 | (7U != (7U & (IData)(
                                                        (vlSelf->DCache__DOT__loads_1__DOT__s1_req_vaddr 
                                                         >> 3U)))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 128-bit data read must not cross a cache line\n    at BankedDataArray.scala:171 assert(!is128 || loadBank0(i) =/= (DCacheBanks - 1).U,\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((IData)(vlSelf->DCache__DOT__data_io_load_1_valid) 
                                     & (1U < (IData)(vlSelf->DCache__DOT__data__DOT___is128_T_43)))) 
                                 | (7U != (7U & (IData)(
                                                        (vlSelf->DCache__DOT__loads_1__DOT__s1_req_vaddr 
                                                         >> 3U)))))))))) {
        VL_WRITEF("[%0t] %%Fatal: BankedDataArray.v:885: Assertion failed in %NDCache.data\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/BankedDataArray.v", 885, "");
    }
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_15_opcode 
        = vlSelf->DCache__DOT__miss__DOT__entries_15_opcode;
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_14_opcode 
        = vlSelf->DCache__DOT__miss__DOT__entries_14_opcode;
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_13_opcode 
        = vlSelf->DCache__DOT__miss__DOT__entries_13_opcode;
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_12_opcode 
        = vlSelf->DCache__DOT__miss__DOT__entries_12_opcode;
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_4_opcode 
        = vlSelf->DCache__DOT__miss__DOT__entries_4_opcode;
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_3_opcode 
        = vlSelf->DCache__DOT__miss__DOT__entries_3_opcode;
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_11_opcode 
        = vlSelf->DCache__DOT__miss__DOT__entries_11_opcode;
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_5_opcode 
        = vlSelf->DCache__DOT__miss__DOT__entries_5_opcode;
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_2_opcode 
        = vlSelf->DCache__DOT__miss__DOT__entries_2_opcode;
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_1_opcode 
        = vlSelf->DCache__DOT__miss__DOT__entries_1_opcode;
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_6_opcode 
        = vlSelf->DCache__DOT__miss__DOT__entries_6_opcode;
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_7_opcode 
        = vlSelf->DCache__DOT__miss__DOT__entries_7_opcode;
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_8_opcode 
        = vlSelf->DCache__DOT__miss__DOT__entries_8_opcode;
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_9_opcode 
        = vlSelf->DCache__DOT__miss__DOT__entries_9_opcode;
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_10_opcode 
        = vlSelf->DCache__DOT__miss__DOT__entries_10_opcode;
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_0_opcode 
        = vlSelf->DCache__DOT__miss__DOT__entries_0_opcode;
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_15_waitVictim 
        = vlSelf->DCache__DOT__miss__DOT__entries_15_waitVictim;
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_14_waitVictim 
        = vlSelf->DCache__DOT__miss__DOT__entries_14_waitVictim;
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_13_waitVictim 
        = vlSelf->DCache__DOT__miss__DOT__entries_13_waitVictim;
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_12_waitVictim 
        = vlSelf->DCache__DOT__miss__DOT__entries_12_waitVictim;
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_5_waitVictim 
        = vlSelf->DCache__DOT__miss__DOT__entries_5_waitVictim;
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_4_waitVictim 
        = vlSelf->DCache__DOT__miss__DOT__entries_4_waitVictim;
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_3_waitVictim 
        = vlSelf->DCache__DOT__miss__DOT__entries_3_waitVictim;
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_2_waitVictim 
        = vlSelf->DCache__DOT__miss__DOT__entries_2_waitVictim;
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_1_waitVictim 
        = vlSelf->DCache__DOT__miss__DOT__entries_1_waitVictim;
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_0_waitVictim 
        = vlSelf->DCache__DOT__miss__DOT__entries_0_waitVictim;
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_6_waitVictim 
        = vlSelf->DCache__DOT__miss__DOT__entries_6_waitVictim;
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_7_waitVictim 
        = vlSelf->DCache__DOT__miss__DOT__entries_7_waitVictim;
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_8_waitVictim 
        = vlSelf->DCache__DOT__miss__DOT__entries_8_waitVictim;
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_9_waitVictim 
        = vlSelf->DCache__DOT__miss__DOT__entries_9_waitVictim;
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_10_waitVictim 
        = vlSelf->DCache__DOT__miss__DOT__entries_10_waitVictim;
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_11_waitVictim 
        = vlSelf->DCache__DOT__miss__DOT__entries_11_waitVictim;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->DCache__DOT__miss_io_missReq_valid)) 
                                 | (1U >= (0x1fU & 
                                           ((0xfU & 
                                             ((7U & 
                                               ((3U 
                                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT__matchVec_0) 
                                                    + (IData)(vlSelf->DCache__DOT__miss__DOT__matchVec_1))) 
                                                + (3U 
                                                   & ((IData)(vlSelf->DCache__DOT__miss__DOT__matchVec_2) 
                                                      + (IData)(vlSelf->DCache__DOT__miss__DOT__matchVec_3))))) 
                                              + (7U 
                                                 & ((3U 
                                                     & ((IData)(vlSelf->DCache__DOT__miss__DOT__matchVec_4) 
                                                        + (IData)(vlSelf->DCache__DOT__miss__DOT__matchVec_5))) 
                                                    + 
                                                    (3U 
                                                     & ((IData)(vlSelf->DCache__DOT__miss__DOT__matchVec_6) 
                                                        + (IData)(vlSelf->DCache__DOT__miss__DOT__matchVec_7))))))) 
                                            + (0xfU 
                                               & ((7U 
                                                   & ((3U 
                                                       & ((IData)(vlSelf->DCache__DOT__miss__DOT__matchVec_8) 
                                                          + (IData)(vlSelf->DCache__DOT__miss__DOT__matchVec_9))) 
                                                      + 
                                                      (3U 
                                                       & ((IData)(vlSelf->DCache__DOT__miss__DOT__matchVec_10) 
                                                          + (IData)(vlSelf->DCache__DOT__miss__DOT__matchVec_11))))) 
                                                  + 
                                                  (7U 
                                                   & ((3U 
                                                       & ((IData)(vlSelf->DCache__DOT__miss__DOT__matchVec_12) 
                                                          + (IData)(vlSelf->DCache__DOT__miss__DOT__matchVec_13))) 
                                                      + 
                                                      (3U 
                                                       & ((IData)(vlSelf->DCache__DOT__miss__DOT__matchVec_14) 
                                                          + (IData)(vlSelf->DCache__DOT__miss__DOT__matchVec_15)))))))))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one in-flight miss per physical line and alias\n    at MissQueue.scala:913 assert(!io.missReq.valid || PopCount(matchVec.asUInt) <= 1.U,\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->DCache__DOT__miss_io_missReq_valid)) 
                                 | (1U >= (0x1fU & 
                                           ((0xfU & 
                                             ((7U & 
                                               ((3U 
                                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT__matchVec_0) 
                                                    + (IData)(vlSelf->DCache__DOT__miss__DOT__matchVec_1))) 
                                                + (3U 
                                                   & ((IData)(vlSelf->DCache__DOT__miss__DOT__matchVec_2) 
                                                      + (IData)(vlSelf->DCache__DOT__miss__DOT__matchVec_3))))) 
                                              + (7U 
                                                 & ((3U 
                                                     & ((IData)(vlSelf->DCache__DOT__miss__DOT__matchVec_4) 
                                                        + (IData)(vlSelf->DCache__DOT__miss__DOT__matchVec_5))) 
                                                    + 
                                                    (3U 
                                                     & ((IData)(vlSelf->DCache__DOT__miss__DOT__matchVec_6) 
                                                        + (IData)(vlSelf->DCache__DOT__miss__DOT__matchVec_7))))))) 
                                            + (0xfU 
                                               & ((7U 
                                                   & ((3U 
                                                       & ((IData)(vlSelf->DCache__DOT__miss__DOT__matchVec_8) 
                                                          + (IData)(vlSelf->DCache__DOT__miss__DOT__matchVec_9))) 
                                                      + 
                                                      (3U 
                                                       & ((IData)(vlSelf->DCache__DOT__miss__DOT__matchVec_10) 
                                                          + (IData)(vlSelf->DCache__DOT__miss__DOT__matchVec_11))))) 
                                                  + 
                                                  (7U 
                                                   & ((3U 
                                                       & ((IData)(vlSelf->DCache__DOT__miss__DOT__matchVec_12) 
                                                          + (IData)(vlSelf->DCache__DOT__miss__DOT__matchVec_13))) 
                                                      + 
                                                      (3U 
                                                       & ((IData)(vlSelf->DCache__DOT__miss__DOT__matchVec_14) 
                                                          + (IData)(vlSelf->DCache__DOT__miss__DOT__matchVec_15)))))))))))))))) {
        VL_WRITEF("[%0t] %%Fatal: MissQueue.v:23368: Assertion failed in %NDCache.miss\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/MissQueue.v", 23368, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__refillSetClash)))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: two refills in MainPipe must not share a set\n    at MissQueue.scala:921 assert(!refillSetClash, \"two refills in MainPipe must not share a set\")\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__refillSetClash)))) {
        VL_WRITEF("[%0t] %%Fatal: MissQueue.v:23392: Assertion failed in %NDCache.miss\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/MissQueue.v", 23392, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__miss__DOT__allowAlloc)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_scToUnique))) 
                                 | (1U == (7U & ((3U 
                                                  & ((1U 
                                                      & (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_occupy_way)) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_occupy_way) 
                                                         >> 1U)))) 
                                                 + 
                                                 (3U 
                                                  & ((1U 
                                                      & ((IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_occupy_way) 
                                                         >> 2U)) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_occupy_way) 
                                                         >> 3U))))))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: SC to Unique must name exactly one way\n    at MissQueue.scala:922 assert(!allowAlloc || !req.scToUnique || PopCount(req.occupy_way) === 1.U,\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__miss__DOT__allowAlloc)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_scToUnique))) 
                                 | (1U == (7U & ((3U 
                                                  & ((1U 
                                                      & (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_occupy_way)) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_occupy_way) 
                                                         >> 1U)))) 
                                                 + 
                                                 (3U 
                                                  & ((1U 
                                                      & ((IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_occupy_way) 
                                                         >> 2U)) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_occupy_way) 
                                                         >> 3U))))))))))))) {
        VL_WRITEF("[%0t] %%Fatal: MissQueue.v:23416: Assertion failed in %NDCache.miss\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/MissQueue.v", 23416, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__miss__DOT___T_1937)) 
                                  | ((0xcU == (IData)(vlSelf->io_cmoReq_bits_opcode)) 
                                     | (0xdU == (IData)(vlSelf->io_cmoReq_bits_opcode)))) 
                                 | (0xeU == (IData)(vlSelf->io_cmoReq_bits_opcode)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: CMO opcode must be CleanShared, CleanInvalid or MakeInvalid\n    at MissQueue.scala:924 assert(!io.cmoReq.fire || io.cmoReq.bits.opcode === CmoOpcode.CLEAN ||\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__miss__DOT___T_1937)) 
                                  | ((0xcU == (IData)(vlSelf->io_cmoReq_bits_opcode)) 
                                     | (0xdU == (IData)(vlSelf->io_cmoReq_bits_opcode)))) 
                                 | (0xeU == (IData)(vlSelf->io_cmoReq_bits_opcode)))))))) {
        VL_WRITEF("[%0t] %%Fatal: MissQueue.v:23440: Assertion failed in %NDCache.miss\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/MissQueue.v", 23440, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->io_l2_req_valid)) 
                                  | (0U != (IData)(vlSelf->DCache__DOT__miss__DOT___txValid_T))) 
                                 | ((1U == (IData)(vlSelf->DCache__DOT__miss__DOT__cmoState)) 
                                    & ((~ (IData)((0U 
                                                   != (IData)(vlSelf->DCache__DOT__miss__DOT___txValid_T)))) 
                                       & (~ (((IData)(vlSelf->DCache__DOT__miss__DOT___cmoBlocked_T_73) 
                                              | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_busy) 
                                                  & ((0xffffffffffc0ULL 
                                                      & vlSelf->DCache__DOT__miss__DOT__entries_11_addr) 
                                                     == 
                                                     (0xffffffffffc0ULL 
                                                      & vlSelf->DCache__DOT__miss__DOT__cmoAddr))) 
                                                 | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_busy) 
                                                     & ((0xffffffffffc0ULL 
                                                         & vlSelf->DCache__DOT__miss__DOT__entries_12_addr) 
                                                        == 
                                                        (0xffffffffffc0ULL 
                                                         & vlSelf->DCache__DOT__miss__DOT__cmoAddr))) 
                                                    | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_busy) 
                                                        & ((0xffffffffffc0ULL 
                                                            & vlSelf->DCache__DOT__miss__DOT__entries_13_addr) 
                                                           == 
                                                           (0xffffffffffc0ULL 
                                                            & vlSelf->DCache__DOT__miss__DOT__cmoAddr))) 
                                                       | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_busy) 
                                                           & ((0xffffffffffc0ULL 
                                                               & vlSelf->DCache__DOT__miss__DOT__entries_14_addr) 
                                                              == 
                                                              (0xffffffffffc0ULL 
                                                               & vlSelf->DCache__DOT__miss__DOT__cmoAddr))) 
                                                          | ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_busy) 
                                                             & ((0xffffffffffc0ULL 
                                                                 & vlSelf->DCache__DOT__miss__DOT__entries_15_addr) 
                                                                == 
                                                                (0xffffffffffc0ULL 
                                                                 & vlSelf->DCache__DOT__miss__DOT__cmoAddr)))))))) 
                                             | ((1U 
                                                 == (IData)(vlSelf->DCache__DOT__miss__DOT__cmoState)) 
                                                & (IData)(vlSelf->DCache__DOT__wb__DOT___io_block_3_T_88)))))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TXREQ valid must belong to a miss or a CMO\n    at MissQueue.scala:927 assert(!io.txReq.valid || txValid || cmoSend, \"TXREQ valid must belong to a miss or a CMO\")\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->io_l2_req_valid)) 
                                  | (0U != (IData)(vlSelf->DCache__DOT__miss__DOT___txValid_T))) 
                                 | ((1U == (IData)(vlSelf->DCache__DOT__miss__DOT__cmoState)) 
                                    & ((~ (IData)((0U 
                                                   != (IData)(vlSelf->DCache__DOT__miss__DOT___txValid_T)))) 
                                       & (~ (((IData)(vlSelf->DCache__DOT__miss__DOT___cmoBlocked_T_73) 
                                              | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_busy) 
                                                  & ((0xffffffffffc0ULL 
                                                      & vlSelf->DCache__DOT__miss__DOT__entries_11_addr) 
                                                     == 
                                                     (0xffffffffffc0ULL 
                                                      & vlSelf->DCache__DOT__miss__DOT__cmoAddr))) 
                                                 | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_busy) 
                                                     & ((0xffffffffffc0ULL 
                                                         & vlSelf->DCache__DOT__miss__DOT__entries_12_addr) 
                                                        == 
                                                        (0xffffffffffc0ULL 
                                                         & vlSelf->DCache__DOT__miss__DOT__cmoAddr))) 
                                                    | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_busy) 
                                                        & ((0xffffffffffc0ULL 
                                                            & vlSelf->DCache__DOT__miss__DOT__entries_13_addr) 
                                                           == 
                                                           (0xffffffffffc0ULL 
                                                            & vlSelf->DCache__DOT__miss__DOT__cmoAddr))) 
                                                       | (((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_busy) 
                                                           & ((0xffffffffffc0ULL 
                                                               & vlSelf->DCache__DOT__miss__DOT__entries_14_addr) 
                                                              == 
                                                              (0xffffffffffc0ULL 
                                                               & vlSelf->DCache__DOT__miss__DOT__cmoAddr))) 
                                                          | ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_busy) 
                                                             & ((0xffffffffffc0ULL 
                                                                 & vlSelf->DCache__DOT__miss__DOT__entries_15_addr) 
                                                                == 
                                                                (0xffffffffffc0ULL 
                                                                 & vlSelf->DCache__DOT__miss__DOT__cmoAddr)))))))) 
                                             | ((1U 
                                                 == (IData)(vlSelf->DCache__DOT__miss__DOT__cmoState)) 
                                                & (IData)(vlSelf->DCache__DOT__wb__DOT___io_block_3_T_88)))))))))))) {
        VL_WRITEF("[%0t] %%Fatal: MissQueue.v:23464: Assertion failed in %NDCache.miss\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/MissQueue.v", 23464, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__rspDone))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback RXRSP opcode is not a completion or a DBID\n    at WriteBackQueue.scala:338 assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__rspDone))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4047: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4047, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit)) 
                     & (~ ((0U != (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_opcode)) 
                           | (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: Evict waits for Comp or CompDBIDResp\n    at WriteBackQueue.scala:342 assert(e.opcode =/= WbOpcode.Evict || isComp,\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit)) 
                     & (~ ((0U != (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_opcode)) 
                           | (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4071: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4071, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit)) 
                     & (~ ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)) 
                           | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_compGot))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback completion arrived twice\n    at WriteBackQueue.scala:344 assert(!isComp || !e.compGot, \"writeback completion arrived twice\")\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit)) 
                     & (~ ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)) 
                           | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_compGot))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4095: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4095, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit)) 
                     & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_dbidValid)) 
                            | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__isDbid))) 
                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_dbid) 
                              == (IData)(vlSelf->io_l2_rxRsp_bits_dbID))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback DBID changed\n    at WriteBackQueue.scala:345 assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit)) 
                     & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_dbidValid)) 
                            | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__isDbid))) 
                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_dbid) 
                              == (IData)(vlSelf->io_l2_rxRsp_bits_dbID))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4119: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4119, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__wb__DOT__evtFire) 
                                                       + 
                                                       (((IData)(vlSelf->DCache__DOT___T_11) 
                                                         & (0U 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))) 
                                                        + (IData)(vlSelf->DCache__DOT__wb__DOT__datFire)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one writeback entry can use only one channel\n    at WriteBackQueue.scala:348 assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__wb__DOT__evtFire) 
                                                       + 
                                                       (((IData)(vlSelf->DCache__DOT___T_11) 
                                                         & (0U 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))) 
                                                        + (IData)(vlSelf->DCache__DOT__wb__DOT__datFire)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4143: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4143, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_1) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__rspDone))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback RXRSP opcode is not a completion or a DBID\n    at WriteBackQueue.scala:338 assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_1) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__rspDone))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4167: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4167, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_1)) 
                     & (~ ((0U != (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_opcode)) 
                           | (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: Evict waits for Comp or CompDBIDResp\n    at WriteBackQueue.scala:342 assert(e.opcode =/= WbOpcode.Evict || isComp,\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_1)) 
                     & (~ ((0U != (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_opcode)) 
                           | (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4191: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4191, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_1)) 
                     & (~ ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)) 
                           | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_compGot))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback completion arrived twice\n    at WriteBackQueue.scala:344 assert(!isComp || !e.compGot, \"writeback completion arrived twice\")\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_1)) 
                     & (~ ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)) 
                           | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_compGot))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4215: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4215, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_1)) 
                     & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_dbidValid)) 
                            | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__isDbid))) 
                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_dbid) 
                              == (IData)(vlSelf->io_l2_rxRsp_bits_dbID))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback DBID changed\n    at WriteBackQueue.scala:345 assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_1)) 
                     & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_dbidValid)) 
                            | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__isDbid))) 
                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_dbid) 
                              == (IData)(vlSelf->io_l2_rxRsp_bits_dbID))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4239: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4239, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__wb__DOT__evtFire_1) 
                                                       + 
                                                       (((IData)(vlSelf->DCache__DOT___T_11) 
                                                         & (1U 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))) 
                                                        + (IData)(vlSelf->DCache__DOT__wb__DOT__datFire_1)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one writeback entry can use only one channel\n    at WriteBackQueue.scala:348 assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__wb__DOT__evtFire_1) 
                                                       + 
                                                       (((IData)(vlSelf->DCache__DOT___T_11) 
                                                         & (1U 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))) 
                                                        + (IData)(vlSelf->DCache__DOT__wb__DOT__datFire_1)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4263: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4263, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_2) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__rspDone))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback RXRSP opcode is not a completion or a DBID\n    at WriteBackQueue.scala:338 assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_2) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__rspDone))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4287: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4287, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_2)) 
                     & (~ ((0U != (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_opcode)) 
                           | (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: Evict waits for Comp or CompDBIDResp\n    at WriteBackQueue.scala:342 assert(e.opcode =/= WbOpcode.Evict || isComp,\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_2)) 
                     & (~ ((0U != (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_opcode)) 
                           | (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4311: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4311, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_2)) 
                     & (~ ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)) 
                           | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_compGot))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback completion arrived twice\n    at WriteBackQueue.scala:344 assert(!isComp || !e.compGot, \"writeback completion arrived twice\")\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_2)) 
                     & (~ ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)) 
                           | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_compGot))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4335: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4335, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_2)) 
                     & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_dbidValid)) 
                            | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__isDbid))) 
                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_dbid) 
                              == (IData)(vlSelf->io_l2_rxRsp_bits_dbID))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback DBID changed\n    at WriteBackQueue.scala:345 assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_2)) 
                     & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_dbidValid)) 
                            | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__isDbid))) 
                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_dbid) 
                              == (IData)(vlSelf->io_l2_rxRsp_bits_dbID))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4359: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4359, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__wb__DOT__evtFire_2) 
                                                       + 
                                                       (((IData)(vlSelf->DCache__DOT___T_11) 
                                                         & (2U 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))) 
                                                        + (IData)(vlSelf->DCache__DOT__wb__DOT__datFire_2)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one writeback entry can use only one channel\n    at WriteBackQueue.scala:348 assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__wb__DOT__evtFire_2) 
                                                       + 
                                                       (((IData)(vlSelf->DCache__DOT___T_11) 
                                                         & (2U 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))) 
                                                        + (IData)(vlSelf->DCache__DOT__wb__DOT__datFire_2)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4383: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4383, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_3) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__rspDone))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback RXRSP opcode is not a completion or a DBID\n    at WriteBackQueue.scala:338 assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_3) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__rspDone))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4407: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4407, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_3)) 
                     & (~ ((0U != (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_opcode)) 
                           | (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: Evict waits for Comp or CompDBIDResp\n    at WriteBackQueue.scala:342 assert(e.opcode =/= WbOpcode.Evict || isComp,\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_3)) 
                     & (~ ((0U != (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_opcode)) 
                           | (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4431: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4431, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_3)) 
                     & (~ ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)) 
                           | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_compGot))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback completion arrived twice\n    at WriteBackQueue.scala:344 assert(!isComp || !e.compGot, \"writeback completion arrived twice\")\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_3)) 
                     & (~ ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)) 
                           | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_compGot))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4455: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4455, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_3)) 
                     & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_dbidValid)) 
                            | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__isDbid))) 
                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_dbid) 
                              == (IData)(vlSelf->io_l2_rxRsp_bits_dbID))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback DBID changed\n    at WriteBackQueue.scala:345 assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_3)) 
                     & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_dbidValid)) 
                            | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__isDbid))) 
                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_dbid) 
                              == (IData)(vlSelf->io_l2_rxRsp_bits_dbID))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4479: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4479, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__wb__DOT__evtFire_3) 
                                                       + 
                                                       (((IData)(vlSelf->DCache__DOT___T_11) 
                                                         & (3U 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))) 
                                                        + (IData)(vlSelf->DCache__DOT__wb__DOT__datFire_3)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one writeback entry can use only one channel\n    at WriteBackQueue.scala:348 assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__wb__DOT__evtFire_3) 
                                                       + 
                                                       (((IData)(vlSelf->DCache__DOT___T_11) 
                                                         & (3U 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))) 
                                                        + (IData)(vlSelf->DCache__DOT__wb__DOT__datFire_3)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4503: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4503, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_4) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__rspDone))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback RXRSP opcode is not a completion or a DBID\n    at WriteBackQueue.scala:338 assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_4) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__rspDone))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4527: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4527, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_4)) 
                     & (~ ((0U != (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_opcode)) 
                           | (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: Evict waits for Comp or CompDBIDResp\n    at WriteBackQueue.scala:342 assert(e.opcode =/= WbOpcode.Evict || isComp,\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_4)) 
                     & (~ ((0U != (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_opcode)) 
                           | (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4551: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4551, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_4)) 
                     & (~ ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)) 
                           | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_compGot))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback completion arrived twice\n    at WriteBackQueue.scala:344 assert(!isComp || !e.compGot, \"writeback completion arrived twice\")\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_4)) 
                     & (~ ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)) 
                           | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_compGot))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4575: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4575, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_4)) 
                     & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_dbidValid)) 
                            | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__isDbid))) 
                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_dbid) 
                              == (IData)(vlSelf->io_l2_rxRsp_bits_dbID))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback DBID changed\n    at WriteBackQueue.scala:345 assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_4)) 
                     & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_dbidValid)) 
                            | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__isDbid))) 
                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_dbid) 
                              == (IData)(vlSelf->io_l2_rxRsp_bits_dbID))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4599: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4599, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__wb__DOT__evtFire_4) 
                                                       + 
                                                       (((IData)(vlSelf->DCache__DOT___T_11) 
                                                         & (4U 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))) 
                                                        + (IData)(vlSelf->DCache__DOT__wb__DOT__datFire_4)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one writeback entry can use only one channel\n    at WriteBackQueue.scala:348 assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__wb__DOT__evtFire_4) 
                                                       + 
                                                       (((IData)(vlSelf->DCache__DOT___T_11) 
                                                         & (4U 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))) 
                                                        + (IData)(vlSelf->DCache__DOT__wb__DOT__datFire_4)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4623: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4623, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_5) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__rspDone))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback RXRSP opcode is not a completion or a DBID\n    at WriteBackQueue.scala:338 assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_5) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__rspDone))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4647: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4647, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_5)) 
                     & (~ ((0U != (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_opcode)) 
                           | (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: Evict waits for Comp or CompDBIDResp\n    at WriteBackQueue.scala:342 assert(e.opcode =/= WbOpcode.Evict || isComp,\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_5)) 
                     & (~ ((0U != (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_opcode)) 
                           | (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4671: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4671, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_5)) 
                     & (~ ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)) 
                           | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_compGot))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback completion arrived twice\n    at WriteBackQueue.scala:344 assert(!isComp || !e.compGot, \"writeback completion arrived twice\")\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_5)) 
                     & (~ ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)) 
                           | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_compGot))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4695: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4695, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_5)) 
                     & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_dbidValid)) 
                            | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__isDbid))) 
                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_dbid) 
                              == (IData)(vlSelf->io_l2_rxRsp_bits_dbID))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback DBID changed\n    at WriteBackQueue.scala:345 assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_5)) 
                     & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_dbidValid)) 
                            | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__isDbid))) 
                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_dbid) 
                              == (IData)(vlSelf->io_l2_rxRsp_bits_dbID))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4719: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4719, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__wb__DOT__evtFire_5) 
                                                       + 
                                                       (((IData)(vlSelf->DCache__DOT___T_11) 
                                                         & (5U 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))) 
                                                        + (IData)(vlSelf->DCache__DOT__wb__DOT__datFire_5)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one writeback entry can use only one channel\n    at WriteBackQueue.scala:348 assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__wb__DOT__evtFire_5) 
                                                       + 
                                                       (((IData)(vlSelf->DCache__DOT___T_11) 
                                                         & (5U 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))) 
                                                        + (IData)(vlSelf->DCache__DOT__wb__DOT__datFire_5)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4743: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4743, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_6) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__rspDone))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback RXRSP opcode is not a completion or a DBID\n    at WriteBackQueue.scala:338 assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_6) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__rspDone))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4767: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4767, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_6)) 
                     & (~ ((0U != (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_opcode)) 
                           | (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: Evict waits for Comp or CompDBIDResp\n    at WriteBackQueue.scala:342 assert(e.opcode =/= WbOpcode.Evict || isComp,\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_6)) 
                     & (~ ((0U != (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_opcode)) 
                           | (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4791: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4791, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_6)) 
                     & (~ ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)) 
                           | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_compGot))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback completion arrived twice\n    at WriteBackQueue.scala:344 assert(!isComp || !e.compGot, \"writeback completion arrived twice\")\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_6)) 
                     & (~ ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)) 
                           | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_compGot))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4815: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4815, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_6)) 
                     & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_dbidValid)) 
                            | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__isDbid))) 
                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_dbid) 
                              == (IData)(vlSelf->io_l2_rxRsp_bits_dbID))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback DBID changed\n    at WriteBackQueue.scala:345 assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_6)) 
                     & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_dbidValid)) 
                            | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__isDbid))) 
                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_dbid) 
                              == (IData)(vlSelf->io_l2_rxRsp_bits_dbID))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4839: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4839, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__wb__DOT__evtFire_6) 
                                                       + 
                                                       (((IData)(vlSelf->DCache__DOT___T_11) 
                                                         & (6U 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))) 
                                                        + (IData)(vlSelf->DCache__DOT__wb__DOT__datFire_6)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one writeback entry can use only one channel\n    at WriteBackQueue.scala:348 assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__wb__DOT__evtFire_6) 
                                                       + 
                                                       (((IData)(vlSelf->DCache__DOT___T_11) 
                                                         & (6U 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))) 
                                                        + (IData)(vlSelf->DCache__DOT__wb__DOT__datFire_6)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4863: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4863, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_7) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__rspDone))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback RXRSP opcode is not a completion or a DBID\n    at WriteBackQueue.scala:338 assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_7) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__rspDone))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4887: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4887, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_7)) 
                     & (~ ((0U != (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_opcode)) 
                           | (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: Evict waits for Comp or CompDBIDResp\n    at WriteBackQueue.scala:342 assert(e.opcode =/= WbOpcode.Evict || isComp,\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_7)) 
                     & (~ ((0U != (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_opcode)) 
                           | (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4911: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4911, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_7)) 
                     & (~ ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)) 
                           | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_compGot))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback completion arrived twice\n    at WriteBackQueue.scala:344 assert(!isComp || !e.compGot, \"writeback completion arrived twice\")\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_7)) 
                     & (~ ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)) 
                           | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_compGot))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4935: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4935, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_7)) 
                     & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_dbidValid)) 
                            | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__isDbid))) 
                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_dbid) 
                              == (IData)(vlSelf->io_l2_rxRsp_bits_dbID))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback DBID changed\n    at WriteBackQueue.scala:345 assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_7)) 
                     & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_dbidValid)) 
                            | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__isDbid))) 
                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_dbid) 
                              == (IData)(vlSelf->io_l2_rxRsp_bits_dbID))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4959: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4959, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__wb__DOT__evtFire_7) 
                                                       + 
                                                       (((IData)(vlSelf->DCache__DOT___T_11) 
                                                         & (7U 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))) 
                                                        + (IData)(vlSelf->DCache__DOT__wb__DOT__datFire_7)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one writeback entry can use only one channel\n    at WriteBackQueue.scala:348 assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__wb__DOT__evtFire_7) 
                                                       + 
                                                       (((IData)(vlSelf->DCache__DOT___T_11) 
                                                         & (7U 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))) 
                                                        + (IData)(vlSelf->DCache__DOT__wb__DOT__datFire_7)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:4983: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 4983, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_8) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__rspDone))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback RXRSP opcode is not a completion or a DBID\n    at WriteBackQueue.scala:338 assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_8) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__rspDone))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5007: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5007, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_8)) 
                     & (~ ((0U != (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_opcode)) 
                           | (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: Evict waits for Comp or CompDBIDResp\n    at WriteBackQueue.scala:342 assert(e.opcode =/= WbOpcode.Evict || isComp,\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_8)) 
                     & (~ ((0U != (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_opcode)) 
                           | (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5031: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5031, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_8)) 
                     & (~ ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)) 
                           | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_compGot))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback completion arrived twice\n    at WriteBackQueue.scala:344 assert(!isComp || !e.compGot, \"writeback completion arrived twice\")\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_8)) 
                     & (~ ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)) 
                           | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_compGot))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5055: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5055, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_8)) 
                     & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_dbidValid)) 
                            | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__isDbid))) 
                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_dbid) 
                              == (IData)(vlSelf->io_l2_rxRsp_bits_dbID))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback DBID changed\n    at WriteBackQueue.scala:345 assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_8)) 
                     & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_dbidValid)) 
                            | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__isDbid))) 
                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_dbid) 
                              == (IData)(vlSelf->io_l2_rxRsp_bits_dbID))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5079: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5079, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__wb__DOT__evtFire_8) 
                                                       + 
                                                       (((IData)(vlSelf->DCache__DOT___T_11) 
                                                         & (8U 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))) 
                                                        + (IData)(vlSelf->DCache__DOT__wb__DOT__datFire_8)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one writeback entry can use only one channel\n    at WriteBackQueue.scala:348 assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__wb__DOT__evtFire_8) 
                                                       + 
                                                       (((IData)(vlSelf->DCache__DOT___T_11) 
                                                         & (8U 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))) 
                                                        + (IData)(vlSelf->DCache__DOT__wb__DOT__datFire_8)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5103: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5103, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_9) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__rspDone))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback RXRSP opcode is not a completion or a DBID\n    at WriteBackQueue.scala:338 assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_9) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__rspDone))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5127: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5127, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_9)) 
                     & (~ ((0U != (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_opcode)) 
                           | (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: Evict waits for Comp or CompDBIDResp\n    at WriteBackQueue.scala:342 assert(e.opcode =/= WbOpcode.Evict || isComp,\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_9)) 
                     & (~ ((0U != (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_opcode)) 
                           | (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5151: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5151, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_9)) 
                     & (~ ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)) 
                           | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_compGot))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback completion arrived twice\n    at WriteBackQueue.scala:344 assert(!isComp || !e.compGot, \"writeback completion arrived twice\")\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_9)) 
                     & (~ ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)) 
                           | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_compGot))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5175: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5175, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_9)) 
                     & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_dbidValid)) 
                            | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__isDbid))) 
                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_dbid) 
                              == (IData)(vlSelf->io_l2_rxRsp_bits_dbID))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback DBID changed\n    at WriteBackQueue.scala:345 assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_9)) 
                     & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_dbidValid)) 
                            | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__isDbid))) 
                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_dbid) 
                              == (IData)(vlSelf->io_l2_rxRsp_bits_dbID))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5199: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5199, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__wb__DOT__evtFire_9) 
                                                       + 
                                                       (((IData)(vlSelf->DCache__DOT___T_11) 
                                                         & (9U 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))) 
                                                        + (IData)(vlSelf->DCache__DOT__wb__DOT__datFire_9)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one writeback entry can use only one channel\n    at WriteBackQueue.scala:348 assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__wb__DOT__evtFire_9) 
                                                       + 
                                                       (((IData)(vlSelf->DCache__DOT___T_11) 
                                                         & (9U 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))) 
                                                        + (IData)(vlSelf->DCache__DOT__wb__DOT__datFire_9)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5223: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5223, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_10) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__rspDone))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback RXRSP opcode is not a completion or a DBID\n    at WriteBackQueue.scala:338 assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_10) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__rspDone))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5247: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5247, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_10)) 
                     & (~ ((0U != (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_opcode)) 
                           | (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: Evict waits for Comp or CompDBIDResp\n    at WriteBackQueue.scala:342 assert(e.opcode =/= WbOpcode.Evict || isComp,\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_10)) 
                     & (~ ((0U != (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_opcode)) 
                           | (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5271: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5271, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_10)) 
                     & (~ ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)) 
                           | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_compGot))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback completion arrived twice\n    at WriteBackQueue.scala:344 assert(!isComp || !e.compGot, \"writeback completion arrived twice\")\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_10)) 
                     & (~ ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)) 
                           | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_compGot))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5295: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5295, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_10)) 
                     & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_dbidValid)) 
                            | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__isDbid))) 
                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_dbid) 
                              == (IData)(vlSelf->io_l2_rxRsp_bits_dbID))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback DBID changed\n    at WriteBackQueue.scala:345 assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_10)) 
                     & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_dbidValid)) 
                            | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__isDbid))) 
                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_dbid) 
                              == (IData)(vlSelf->io_l2_rxRsp_bits_dbID))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5319: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5319, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__wb__DOT__evtFire_10) 
                                                       + 
                                                       (((IData)(vlSelf->DCache__DOT___T_11) 
                                                         & (0xaU 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))) 
                                                        + (IData)(vlSelf->DCache__DOT__wb__DOT__datFire_10)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one writeback entry can use only one channel\n    at WriteBackQueue.scala:348 assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__wb__DOT__evtFire_10) 
                                                       + 
                                                       (((IData)(vlSelf->DCache__DOT___T_11) 
                                                         & (0xaU 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))) 
                                                        + (IData)(vlSelf->DCache__DOT__wb__DOT__datFire_10)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5343: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5343, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_11) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__rspDone))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback RXRSP opcode is not a completion or a DBID\n    at WriteBackQueue.scala:338 assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_11) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__rspDone))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5367: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5367, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_11)) 
                     & (~ ((0U != (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_opcode)) 
                           | (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: Evict waits for Comp or CompDBIDResp\n    at WriteBackQueue.scala:342 assert(e.opcode =/= WbOpcode.Evict || isComp,\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_11)) 
                     & (~ ((0U != (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_opcode)) 
                           | (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5391: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5391, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_11)) 
                     & (~ ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)) 
                           | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_compGot))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback completion arrived twice\n    at WriteBackQueue.scala:344 assert(!isComp || !e.compGot, \"writeback completion arrived twice\")\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_11)) 
                     & (~ ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)) 
                           | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_compGot))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5415: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5415, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_11)) 
                     & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_dbidValid)) 
                            | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__isDbid))) 
                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_dbid) 
                              == (IData)(vlSelf->io_l2_rxRsp_bits_dbID))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback DBID changed\n    at WriteBackQueue.scala:345 assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_11)) 
                     & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_dbidValid)) 
                            | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__isDbid))) 
                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_dbid) 
                              == (IData)(vlSelf->io_l2_rxRsp_bits_dbID))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5439: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5439, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__wb__DOT__evtFire_11) 
                                                       + 
                                                       (((IData)(vlSelf->DCache__DOT___T_11) 
                                                         & (0xbU 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))) 
                                                        + (IData)(vlSelf->DCache__DOT__wb__DOT__datFire_11)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one writeback entry can use only one channel\n    at WriteBackQueue.scala:348 assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__wb__DOT__evtFire_11) 
                                                       + 
                                                       (((IData)(vlSelf->DCache__DOT___T_11) 
                                                         & (0xbU 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))) 
                                                        + (IData)(vlSelf->DCache__DOT__wb__DOT__datFire_11)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5463: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5463, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_12) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__rspDone))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback RXRSP opcode is not a completion or a DBID\n    at WriteBackQueue.scala:338 assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_12) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__rspDone))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5487: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5487, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_12)) 
                     & (~ ((0U != (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_opcode)) 
                           | (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: Evict waits for Comp or CompDBIDResp\n    at WriteBackQueue.scala:342 assert(e.opcode =/= WbOpcode.Evict || isComp,\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_12)) 
                     & (~ ((0U != (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_opcode)) 
                           | (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5511: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5511, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_12)) 
                     & (~ ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)) 
                           | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_compGot))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback completion arrived twice\n    at WriteBackQueue.scala:344 assert(!isComp || !e.compGot, \"writeback completion arrived twice\")\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_12)) 
                     & (~ ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)) 
                           | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_compGot))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5535: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5535, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_12)) 
                     & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_dbidValid)) 
                            | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__isDbid))) 
                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_dbid) 
                              == (IData)(vlSelf->io_l2_rxRsp_bits_dbID))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback DBID changed\n    at WriteBackQueue.scala:345 assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_12)) 
                     & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_dbidValid)) 
                            | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__isDbid))) 
                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_dbid) 
                              == (IData)(vlSelf->io_l2_rxRsp_bits_dbID))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5559: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5559, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__wb__DOT__evtFire_12) 
                                                       + 
                                                       (((IData)(vlSelf->DCache__DOT___T_11) 
                                                         & (0xcU 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))) 
                                                        + (IData)(vlSelf->DCache__DOT__wb__DOT__datFire_12)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one writeback entry can use only one channel\n    at WriteBackQueue.scala:348 assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__wb__DOT__evtFire_12) 
                                                       + 
                                                       (((IData)(vlSelf->DCache__DOT___T_11) 
                                                         & (0xcU 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))) 
                                                        + (IData)(vlSelf->DCache__DOT__wb__DOT__datFire_12)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5583: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5583, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_13) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__rspDone))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback RXRSP opcode is not a completion or a DBID\n    at WriteBackQueue.scala:338 assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_13) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__rspDone))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5607: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5607, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_13)) 
                     & (~ ((0U != (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_opcode)) 
                           | (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: Evict waits for Comp or CompDBIDResp\n    at WriteBackQueue.scala:342 assert(e.opcode =/= WbOpcode.Evict || isComp,\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_13)) 
                     & (~ ((0U != (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_opcode)) 
                           | (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5631: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5631, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_13)) 
                     & (~ ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)) 
                           | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_compGot))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback completion arrived twice\n    at WriteBackQueue.scala:344 assert(!isComp || !e.compGot, \"writeback completion arrived twice\")\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_13)) 
                     & (~ ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)) 
                           | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_compGot))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5655: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5655, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_13)) 
                     & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_dbidValid)) 
                            | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__isDbid))) 
                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_dbid) 
                              == (IData)(vlSelf->io_l2_rxRsp_bits_dbID))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback DBID changed\n    at WriteBackQueue.scala:345 assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_13)) 
                     & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_dbidValid)) 
                            | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__isDbid))) 
                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_dbid) 
                              == (IData)(vlSelf->io_l2_rxRsp_bits_dbID))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5679: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5679, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__wb__DOT__evtFire_13) 
                                                       + 
                                                       (((IData)(vlSelf->DCache__DOT___T_11) 
                                                         & (0xdU 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))) 
                                                        + (IData)(vlSelf->DCache__DOT__wb__DOT__datFire_13)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one writeback entry can use only one channel\n    at WriteBackQueue.scala:348 assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__wb__DOT__evtFire_13) 
                                                       + 
                                                       (((IData)(vlSelf->DCache__DOT___T_11) 
                                                         & (0xdU 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))) 
                                                        + (IData)(vlSelf->DCache__DOT__wb__DOT__datFire_13)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5703: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5703, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_14) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__rspDone))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback RXRSP opcode is not a completion or a DBID\n    at WriteBackQueue.scala:338 assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_14) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__rspDone))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5727: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5727, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_14)) 
                     & (~ ((0U != (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_opcode)) 
                           | (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: Evict waits for Comp or CompDBIDResp\n    at WriteBackQueue.scala:342 assert(e.opcode =/= WbOpcode.Evict || isComp,\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_14)) 
                     & (~ ((0U != (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_opcode)) 
                           | (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5751: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5751, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_14)) 
                     & (~ ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)) 
                           | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_compGot))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback completion arrived twice\n    at WriteBackQueue.scala:344 assert(!isComp || !e.compGot, \"writeback completion arrived twice\")\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_14)) 
                     & (~ ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)) 
                           | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_compGot))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5775: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5775, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_14)) 
                     & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_dbidValid)) 
                            | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__isDbid))) 
                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_dbid) 
                              == (IData)(vlSelf->io_l2_rxRsp_bits_dbID))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback DBID changed\n    at WriteBackQueue.scala:345 assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_14)) 
                     & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_dbidValid)) 
                            | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__isDbid))) 
                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_dbid) 
                              == (IData)(vlSelf->io_l2_rxRsp_bits_dbID))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5799: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5799, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__wb__DOT__evtFire_14) 
                                                       + 
                                                       (((IData)(vlSelf->DCache__DOT___T_11) 
                                                         & (0xeU 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))) 
                                                        + (IData)(vlSelf->DCache__DOT__wb__DOT__datFire_14)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one writeback entry can use only one channel\n    at WriteBackQueue.scala:348 assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__wb__DOT__evtFire_14) 
                                                       + 
                                                       (((IData)(vlSelf->DCache__DOT___T_11) 
                                                         & (0xeU 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))) 
                                                        + (IData)(vlSelf->DCache__DOT__wb__DOT__datFire_14)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5823: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5823, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_15) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__rspDone))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback RXRSP opcode is not a completion or a DBID\n    at WriteBackQueue.scala:338 assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_15) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__rspDone))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5847: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5847, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_15)) 
                     & (~ ((0U != (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_opcode)) 
                           | (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: Evict waits for Comp or CompDBIDResp\n    at WriteBackQueue.scala:342 assert(e.opcode =/= WbOpcode.Evict || isComp,\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_15)) 
                     & (~ ((0U != (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_opcode)) 
                           | (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5871: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5871, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_15)) 
                     & (~ ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)) 
                           | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_compGot))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback completion arrived twice\n    at WriteBackQueue.scala:344 assert(!isComp || !e.compGot, \"writeback completion arrived twice\")\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_15)) 
                     & (~ ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)) 
                           | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_compGot))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5895: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5895, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_15)) 
                     & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_dbidValid)) 
                            | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__isDbid))) 
                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_dbid) 
                              == (IData)(vlSelf->io_l2_rxRsp_bits_dbID))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback DBID changed\n    at WriteBackQueue.scala:345 assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_15)) 
                     & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_dbidValid)) 
                            | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__isDbid))) 
                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_dbid) 
                              == (IData)(vlSelf->io_l2_rxRsp_bits_dbID))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5919: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5919, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__wb__DOT__evtFire_15) 
                                                       + 
                                                       (((IData)(vlSelf->DCache__DOT___T_11) 
                                                         & (0xfU 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))) 
                                                        + (IData)(vlSelf->DCache__DOT__wb__DOT__datFire_15)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one writeback entry can use only one channel\n    at WriteBackQueue.scala:348 assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__wb__DOT__evtFire_15) 
                                                       + 
                                                       (((IData)(vlSelf->DCache__DOT___T_11) 
                                                         & (0xfU 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))) 
                                                        + (IData)(vlSelf->DCache__DOT__wb__DOT__datFire_15)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5943: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5943, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_16) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__rspDone))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback RXRSP opcode is not a completion or a DBID\n    at WriteBackQueue.scala:338 assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_16) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__rspDone))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5967: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5967, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_16)) 
                     & (~ ((0U != (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_opcode)) 
                           | (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: Evict waits for Comp or CompDBIDResp\n    at WriteBackQueue.scala:342 assert(e.opcode =/= WbOpcode.Evict || isComp,\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_16)) 
                     & (~ ((0U != (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_opcode)) 
                           | (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:5991: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 5991, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_16)) 
                     & (~ ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)) 
                           | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_compGot))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback completion arrived twice\n    at WriteBackQueue.scala:344 assert(!isComp || !e.compGot, \"writeback completion arrived twice\")\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_16)) 
                     & (~ ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)) 
                           | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_compGot))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6015: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6015, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_16)) 
                     & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_dbidValid)) 
                            | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__isDbid))) 
                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_dbid) 
                              == (IData)(vlSelf->io_l2_rxRsp_bits_dbID))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback DBID changed\n    at WriteBackQueue.scala:345 assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_16)) 
                     & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_dbidValid)) 
                            | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__isDbid))) 
                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_dbid) 
                              == (IData)(vlSelf->io_l2_rxRsp_bits_dbID))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6039: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6039, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__wb__DOT__evtFire_16) 
                                                       + 
                                                       (((IData)(vlSelf->DCache__DOT___T_11) 
                                                         & (0x10U 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))) 
                                                        + (IData)(vlSelf->DCache__DOT__wb__DOT__datFire_16)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one writeback entry can use only one channel\n    at WriteBackQueue.scala:348 assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__wb__DOT__evtFire_16) 
                                                       + 
                                                       (((IData)(vlSelf->DCache__DOT___T_11) 
                                                         & (0x10U 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))) 
                                                        + (IData)(vlSelf->DCache__DOT__wb__DOT__datFire_16)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6063: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6063, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_17) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__rspDone))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback RXRSP opcode is not a completion or a DBID\n    at WriteBackQueue.scala:338 assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_17) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__rspDone))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6087: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6087, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_17)) 
                     & (~ ((0U != (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_opcode)) 
                           | (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: Evict waits for Comp or CompDBIDResp\n    at WriteBackQueue.scala:342 assert(e.opcode =/= WbOpcode.Evict || isComp,\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_17)) 
                     & (~ ((0U != (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_opcode)) 
                           | (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6111: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6111, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_17)) 
                     & (~ ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)) 
                           | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_compGot))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback completion arrived twice\n    at WriteBackQueue.scala:344 assert(!isComp || !e.compGot, \"writeback completion arrived twice\")\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_17)) 
                     & (~ ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__isComp)) 
                           | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_compGot))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6135: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6135, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_17)) 
                     & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_dbidValid)) 
                            | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__isDbid))) 
                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_dbid) 
                              == (IData)(vlSelf->io_l2_rxRsp_bits_dbID))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback DBID changed\n    at WriteBackQueue.scala:345 assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_17)) 
                     & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_dbidValid)) 
                            | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__isDbid))) 
                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_dbid) 
                              == (IData)(vlSelf->io_l2_rxRsp_bits_dbID))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6159: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6159, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__wb__DOT__evtFire_17) 
                                                       + 
                                                       (((IData)(vlSelf->DCache__DOT___T_11) 
                                                         & (0x11U 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))) 
                                                        + (IData)(vlSelf->DCache__DOT__wb__DOT__datFire_17)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one writeback entry can use only one channel\n    at WriteBackQueue.scala:348 assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (1U 
                                                   < 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__wb__DOT__evtFire_17) 
                                                       + 
                                                       (((IData)(vlSelf->DCache__DOT___T_11) 
                                                         & (0x11U 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))) 
                                                        + (IData)(vlSelf->DCache__DOT__wb__DOT__datFire_17)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6183: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6183, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_valid)) 
                                 | (((0U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode)) 
                                     | ((2U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode)) 
                                        | (3U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode)))) 
                                    | ((4U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode)) 
                                       | (5U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode)))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: WriteEvictFull is off, opcode must be known\n    at WriteBackQueue.scala:360 assert(!io.req.valid || legalOp, \"WriteEvictFull is off, opcode must be known\")\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_valid)) 
                                 | (((0U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode)) 
                                     | ((2U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode)) 
                                        | (3U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode)))) 
                                    | ((4U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode)) 
                                       | (5U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode)))))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6207: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6207, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_valid)) 
                                 | (0U == (0x3fU & (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_addr))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback address must be line aligned\n    at WriteBackQueue.scala:361 assert(!io.req.valid || req.addr(blockOffBits - 1, 0) === 0.U, \"writeback address must be line aligned\")\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_valid)) 
                                 | (0U == (0x3fU & (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_addr))))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6231: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6231, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_valid)) 
                                  | (5U != (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode))) 
                                 | (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_passDirty))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: PassDirty request must set passDirty\n    at WriteBackQueue.scala:362 assert(!io.req.valid || req.opcode =/= WbOpcode.PassDirty || req.passDirty,\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_valid)) 
                                  | (5U != (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode))) 
                                 | (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_passDirty))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6255: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6255, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_valid)) 
                                  | ((0U != (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode)) 
                                     & (3U != (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode)))) 
                                 | (~ (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_passDirty)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: Evict and SnpResp do not carry data\n    at WriteBackQueue.scala:364 assert(!io.req.valid || (req.opcode =/= WbOpcode.Evict && req.opcode =/= WbOpcode.SnpResp) || !req.passDirty,\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_valid)) 
                                  | ((0U != (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode)) 
                                     & (3U != (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode)))) 
                                 | (~ (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_passDirty)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6279: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6279, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->DCache__DOT__pipe__DOT___wb1Fire_T)) 
                                 | (((0U == (IData)(vlSelf->DCache__DOT__wb__DOT__reqResp)) 
                                     | ((1U == (IData)(vlSelf->DCache__DOT__wb__DOT__reqResp)) 
                                        | ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__reqResp)) 
                                           | (4U == (IData)(vlSelf->DCache__DOT__wb__DOT__reqResp))))) 
                                    | ((5U == (IData)(vlSelf->DCache__DOT__wb__DOT__reqResp)) 
                                       | (6U == (IData)(vlSelf->DCache__DOT__wb__DOT__reqResp)))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: writeback response state is not a CHI resp\n    at WriteBackQueue.scala:366 assert(!io.req.fire || legalResp(reqResp), \"writeback response state is not a CHI resp\")\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->DCache__DOT__pipe__DOT___wb1Fire_T)) 
                                 | (((0U == (IData)(vlSelf->DCache__DOT__wb__DOT__reqResp)) 
                                     | ((1U == (IData)(vlSelf->DCache__DOT__wb__DOT__reqResp)) 
                                        | ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__reqResp)) 
                                           | (4U == (IData)(vlSelf->DCache__DOT__wb__DOT__reqResp))))) 
                                    | ((5U == (IData)(vlSelf->DCache__DOT__wb__DOT__reqResp)) 
                                       | (6U == (IData)(vlSelf->DCache__DOT__wb__DOT__reqResp)))))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6303: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6303, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((IData)(vlSelf->io_l2_rxRsp_valid) 
                                     & (IData)(vlSelf->DCache__DOT__rspToWb))) 
                                 | (IData)(vlSelf->DCache__DOT__rspToWb))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: RXRSP txnId is outside writeback ids 17 to 34\n    at WriteBackQueue.scala:367 assert(!io.rxRsp.valid || rspInRange, \"RXRSP txnId is outside writeback ids 17 to 34\")\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((IData)(vlSelf->io_l2_rxRsp_valid) 
                                     & (IData)(vlSelf->DCache__DOT__rspToWb))) 
                                 | (IData)(vlSelf->DCache__DOT__rspToWb))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6327: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6327, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((IData)(vlSelf->io_l2_rxRsp_valid) 
                                     & (IData)(vlSelf->DCache__DOT__rspToWb))) 
                                 | (IData)(vlSelf->DCache__DOT__wb_io_rxRsp_ready))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: RXRSP writeback id is not waiting\n    at WriteBackQueue.scala:368 assert(!io.rxRsp.valid || rspExpect, \"RXRSP writeback id is not waiting\")\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((IData)(vlSelf->io_l2_rxRsp_valid) 
                                     & (IData)(vlSelf->DCache__DOT__rspToWb))) 
                                 | (IData)(vlSelf->DCache__DOT__wb_io_rxRsp_ready))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6351: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6351, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->io_l2_evt_valid)) 
                                 | ((0x11U == (IData)(vlSelf->DCache__DOT__wb__DOT__evtIdx))
                                     ? (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_17)
                                     : ((0x10U == (IData)(vlSelf->DCache__DOT__wb__DOT__evtIdx))
                                         ? (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_16)
                                         : ((0xfU == (IData)(vlSelf->DCache__DOT__wb__DOT__evtIdx))
                                             ? (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_15)
                                             : ((0xeU 
                                                 == (IData)(vlSelf->DCache__DOT__wb__DOT__evtIdx))
                                                 ? (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_14)
                                                 : 
                                                ((0xdU 
                                                  == (IData)(vlSelf->DCache__DOT__wb__DOT__evtIdx))
                                                  ? (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_13)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->DCache__DOT__wb__DOT__evtIdx))
                                                   ? (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_12)
                                                   : 
                                                  ((0xbU 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__evtIdx))
                                                    ? (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_11)
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSelf->DCache__DOT__wb__DOT__evtIdx))
                                                     ? (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_10)
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSelf->DCache__DOT__wb__DOT__evtIdx))
                                                      ? (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_9)
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlSelf->DCache__DOT__wb__DOT__evtIdx))
                                                       ? (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_8)
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlSelf->DCache__DOT__wb__DOT__evtIdx))
                                                        ? (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_7)
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlSelf->DCache__DOT__wb__DOT__evtIdx))
                                                         ? (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_6)
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlSelf->DCache__DOT__wb__DOT__evtIdx))
                                                          ? (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_5)
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlSelf->DCache__DOT__wb__DOT__evtIdx))
                                                           ? (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_4)
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__evtIdx))
                                                            ? (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_3)
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlSelf->DCache__DOT__wb__DOT__evtIdx))
                                                             ? (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_2)
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlSelf->DCache__DOT__wb__DOT__evtIdx))
                                                              ? (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_1)
                                                              : (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_0)))))))))))))))))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TXEVT payload must stay on the selected entry\n    at WriteBackQueue.scala:369 assert(!io.txEvt.valid || evtWant(evtIdx), \"TXEVT payload must stay on the selected entry\")\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->io_l2_evt_valid)) 
                                 | ((0x11U == (IData)(vlSelf->DCache__DOT__wb__DOT__evtIdx))
                                     ? (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_17)
                                     : ((0x10U == (IData)(vlSelf->DCache__DOT__wb__DOT__evtIdx))
                                         ? (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_16)
                                         : ((0xfU == (IData)(vlSelf->DCache__DOT__wb__DOT__evtIdx))
                                             ? (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_15)
                                             : ((0xeU 
                                                 == (IData)(vlSelf->DCache__DOT__wb__DOT__evtIdx))
                                                 ? (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_14)
                                                 : 
                                                ((0xdU 
                                                  == (IData)(vlSelf->DCache__DOT__wb__DOT__evtIdx))
                                                  ? (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_13)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->DCache__DOT__wb__DOT__evtIdx))
                                                   ? (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_12)
                                                   : 
                                                  ((0xbU 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__evtIdx))
                                                    ? (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_11)
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSelf->DCache__DOT__wb__DOT__evtIdx))
                                                     ? (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_10)
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSelf->DCache__DOT__wb__DOT__evtIdx))
                                                      ? (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_9)
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlSelf->DCache__DOT__wb__DOT__evtIdx))
                                                       ? (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_8)
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlSelf->DCache__DOT__wb__DOT__evtIdx))
                                                        ? (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_7)
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlSelf->DCache__DOT__wb__DOT__evtIdx))
                                                         ? (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_6)
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlSelf->DCache__DOT__wb__DOT__evtIdx))
                                                          ? (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_5)
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlSelf->DCache__DOT__wb__DOT__evtIdx))
                                                           ? (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_4)
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__evtIdx))
                                                            ? (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_3)
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlSelf->DCache__DOT__wb__DOT__evtIdx))
                                                             ? (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_2)
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlSelf->DCache__DOT__wb__DOT__evtIdx))
                                                              ? (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_1)
                                                              : (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_0)))))))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6375: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6375, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->io_l2_txRsp_bits_opcode)) 
                                 | ((0x11U == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))
                                     ? (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_17)
                                     : ((0x10U == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))
                                         ? (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_16)
                                         : ((0xfU == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))
                                             ? (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_15)
                                             : ((0xeU 
                                                 == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))
                                                 ? (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_14)
                                                 : 
                                                ((0xdU 
                                                  == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))
                                                  ? (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_13)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))
                                                   ? (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_12)
                                                   : 
                                                  ((0xbU 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))
                                                    ? (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_11)
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))
                                                     ? (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_10)
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))
                                                      ? (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_9)
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))
                                                       ? (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_8)
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))
                                                        ? (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_7)
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))
                                                         ? (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_6)
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))
                                                          ? (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_5)
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))
                                                           ? (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_4)
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))
                                                            ? (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_3)
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))
                                                             ? (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_2)
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))
                                                              ? (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_1)
                                                              : (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_0)))))))))))))))))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TXRSP payload must stay on the selected entry\n    at WriteBackQueue.scala:370 assert(!io.txRsp.valid || rspWant(rspIdx), \"TXRSP payload must stay on the selected entry\")\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->io_l2_txRsp_bits_opcode)) 
                                 | ((0x11U == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))
                                     ? (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_17)
                                     : ((0x10U == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))
                                         ? (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_16)
                                         : ((0xfU == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))
                                             ? (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_15)
                                             : ((0xeU 
                                                 == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))
                                                 ? (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_14)
                                                 : 
                                                ((0xdU 
                                                  == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))
                                                  ? (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_13)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))
                                                   ? (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_12)
                                                   : 
                                                  ((0xbU 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))
                                                    ? (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_11)
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))
                                                     ? (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_10)
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))
                                                      ? (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_9)
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))
                                                       ? (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_8)
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))
                                                        ? (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_7)
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))
                                                         ? (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_6)
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))
                                                          ? (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_5)
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))
                                                           ? (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_4)
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))
                                                            ? (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_3)
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))
                                                             ? (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_2)
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlSelf->DCache__DOT__wb__DOT__rspIdx))
                                                              ? (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_1)
                                                              : (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_0)))))))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6399: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6399, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->io_l2_txDat_valid)) 
                                 | (3U == ((0x11U == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                            ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_state)
                                            : ((0x10U 
                                                == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_state)
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                    ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_state)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                     ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_state)
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                      ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_state)
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                       ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_state)
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                        ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_state)
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                         ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_state)
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                          ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_state)
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                           ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_state)
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                            ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_state)
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                             ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_state)
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                              ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_state)
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                               ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_state)
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                                ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_state)
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                                 ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_state)
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                                  ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_state)
                                                                  : (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_state))))))))))))))))))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TXDAT entry must be in s_dat\n    at WriteBackQueue.scala:371 assert(!io.txDat.valid || datEntry.state === WbState.dat, \"TXDAT entry must be in s_dat\")\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->io_l2_txDat_valid)) 
                                 | (3U == ((0x11U == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                            ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_state)
                                            : ((0x10U 
                                                == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_state)
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                    ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_state)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                     ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_state)
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                      ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_state)
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                       ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_state)
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                        ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_state)
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                         ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_state)
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                          ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_state)
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                           ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_state)
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                            ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_state)
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                             ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_state)
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                              ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_state)
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                               ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_state)
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                                ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_state)
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                                 ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_state)
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                                  ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_state)
                                                                  : (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_state))))))))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6423: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6423, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->io_l2_txDat_valid)) 
                                  | (1U == (IData)(vlSelf->DCache__DOT__wb__DOT___GEN_215))) 
                                 | (2U == (IData)(vlSelf->DCache__DOT__wb__DOT___GEN_215)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TXDAT beat counter must be 2 then 1\n    at WriteBackQueue.scala:372 assert(!io.txDat.valid || datEntry.beatsLeft === 1.U || datEntry.beatsLeft === 2.U,\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->io_l2_txDat_valid)) 
                                  | (1U == (IData)(vlSelf->DCache__DOT__wb__DOT___GEN_215))) 
                                 | (2U == (IData)(vlSelf->DCache__DOT__wb__DOT___GEN_215)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6447: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6447, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->io_l2_txDat_valid)) 
                                  | (4U != (IData)(vlSelf->DCache__DOT__wb__DOT___GEN_233))) 
                                 | (~ ((0x11U == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                        ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_dbidValid)
                                        : ((0x10U == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                            ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_dbidValid)
                                            : ((0xfU 
                                                == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_dbidValid)
                                                : (
                                                   (0xeU 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                    ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_dbidValid)
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                     ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_dbidValid)
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                      ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_dbidValid)
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                       ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_dbidValid)
                                                       : 
                                                      ((0xaU 
                                                        == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                        ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_dbidValid)
                                                        : 
                                                       ((9U 
                                                         == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                         ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_dbidValid)
                                                         : 
                                                        ((8U 
                                                          == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                          ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_dbidValid)
                                                          : 
                                                         ((7U 
                                                           == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                           ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_dbidValid)
                                                           : 
                                                          ((6U 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                            ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_dbidValid)
                                                            : 
                                                           ((5U 
                                                             == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                             ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_dbidValid)
                                                             : 
                                                            ((4U 
                                                              == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                              ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_dbidValid)
                                                              : 
                                                             ((3U 
                                                               == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                               ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_dbidValid)
                                                               : 
                                                              ((2U 
                                                                == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                                ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_dbidValid)
                                                                : 
                                                               ((1U 
                                                                 == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                                 ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_dbidValid)
                                                                 : (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_dbidValid))))))))))))))))))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: SnpRespData uses the snoop txnId, not a DBID\n    at WriteBackQueue.scala:374 assert(!io.txDat.valid || datEntry.opcode =/= WbOpcode.SnpRespData || !datEntry.dbidValid,\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->io_l2_txDat_valid)) 
                                  | (4U != (IData)(vlSelf->DCache__DOT__wb__DOT___GEN_233))) 
                                 | (~ ((0x11U == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                        ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_dbidValid)
                                        : ((0x10U == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                            ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_dbidValid)
                                            : ((0xfU 
                                                == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_dbidValid)
                                                : (
                                                   (0xeU 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                    ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_dbidValid)
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                     ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_dbidValid)
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                      ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_dbidValid)
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                       ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_dbidValid)
                                                       : 
                                                      ((0xaU 
                                                        == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                        ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_dbidValid)
                                                        : 
                                                       ((9U 
                                                         == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                         ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_dbidValid)
                                                         : 
                                                        ((8U 
                                                          == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                          ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_dbidValid)
                                                          : 
                                                         ((7U 
                                                           == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                           ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_dbidValid)
                                                           : 
                                                          ((6U 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                            ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_dbidValid)
                                                            : 
                                                           ((5U 
                                                             == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                             ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_dbidValid)
                                                             : 
                                                            ((4U 
                                                              == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                              ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_dbidValid)
                                                              : 
                                                             ((3U 
                                                               == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                               ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_dbidValid)
                                                               : 
                                                              ((2U 
                                                                == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                                ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_dbidValid)
                                                                : 
                                                               ((1U 
                                                                 == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                                 ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_dbidValid)
                                                                 : (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_dbidValid))))))))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6471: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6471, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->io_l2_txDat_valid)) 
                                  | (4U == (IData)(vlSelf->DCache__DOT__wb__DOT___GEN_233))) 
                                 | ((0x11U == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                     ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_dbidValid)
                                     : ((0x10U == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                         ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_dbidValid)
                                         : ((0xfU == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                             ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_dbidValid)
                                             : ((0xeU 
                                                 == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                 ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_dbidValid)
                                                 : 
                                                ((0xdU 
                                                  == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                  ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_dbidValid)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                   ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_dbidValid)
                                                   : 
                                                  ((0xbU 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                    ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_dbidValid)
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                     ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_dbidValid)
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                      ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_dbidValid)
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                       ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_dbidValid)
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                        ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_dbidValid)
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                         ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_dbidValid)
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                          ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_dbidValid)
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                           ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_dbidValid)
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                            ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_dbidValid)
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                             ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_dbidValid)
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                              ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_dbidValid)
                                                              : (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_dbidValid)))))))))))))))))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: CopyBackWrData cannot start before DBID\n    at WriteBackQueue.scala:376 assert(!io.txDat.valid || datEntry.opcode === WbOpcode.SnpRespData || datEntry.dbidValid,\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->io_l2_txDat_valid)) 
                                  | (4U == (IData)(vlSelf->DCache__DOT__wb__DOT___GEN_233))) 
                                 | ((0x11U == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                     ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_dbidValid)
                                     : ((0x10U == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                         ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_dbidValid)
                                         : ((0xfU == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                             ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_dbidValid)
                                             : ((0xeU 
                                                 == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                 ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_dbidValid)
                                                 : 
                                                ((0xdU 
                                                  == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                  ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_dbidValid)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                   ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_dbidValid)
                                                   : 
                                                  ((0xbU 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                    ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_dbidValid)
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                     ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_dbidValid)
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                      ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_dbidValid)
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                       ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_dbidValid)
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                        ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_dbidValid)
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                         ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_dbidValid)
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                          ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_dbidValid)
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                           ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_dbidValid)
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                            ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_dbidValid)
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                             ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_dbidValid)
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlSelf->DCache__DOT__wb__DOT__datIdx))
                                                              ? (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_dbidValid)
                                                              : (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_dbidValid)))))))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6495: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6495, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_1_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_1_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6519: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6519, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_2_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_2_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6543: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6543, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_3_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_3_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6567: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6567, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_4_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_4_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6591: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6591, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_5_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_5_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6615: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6615, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_6_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_6_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6639: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6639, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_7_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_7_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6663: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6663, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_8_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_8_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6687: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6687, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_9_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_9_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6711: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6711, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_10_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_10_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6735: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6735, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_11_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_11_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6759: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6759, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_12_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_12_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6783: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6783, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_13_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_13_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6807: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6807, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_14_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_14_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6831: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6831, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_15_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_15_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6855: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6855, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_16_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_16_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6879: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6879, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_17_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_0_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_17_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6903: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6903, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_1_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_2_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_1_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_2_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6927: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6927, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_1_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_3_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_1_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_3_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6951: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6951, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_1_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_4_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_1_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_4_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6975: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6975, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_1_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_5_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_1_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_5_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:6999: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 6999, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_1_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_6_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_1_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_6_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7023: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7023, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_1_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_7_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_1_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_7_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7047: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7047, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_1_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_8_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_1_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_8_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7071: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7071, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_1_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_9_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_1_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_9_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7095: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7095, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_1_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_10_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_1_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_10_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7119: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7119, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_1_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_11_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_1_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_11_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7143: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7143, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_1_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_12_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_1_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_12_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7167: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7167, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_1_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_13_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_1_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_13_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7191: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7191, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_1_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_14_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_1_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_14_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7215: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7215, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_1_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_15_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_1_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_15_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7239: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7239, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_1_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_16_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_1_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_16_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7263: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7263, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_1_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_17_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_1_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_17_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7287: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7287, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_2_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_3_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_2_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_3_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7311: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7311, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_2_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_4_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_2_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_4_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7335: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7335, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_2_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_5_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_2_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_5_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7359: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7359, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_2_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_6_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_2_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_6_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7383: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7383, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_2_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_7_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_2_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_7_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7407: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7407, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_2_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_8_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_2_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_8_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7431: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7431, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_2_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_9_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_2_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_9_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7455: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7455, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_2_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_10_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_2_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_10_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7479: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7479, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_2_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_11_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_2_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_11_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7503: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7503, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_2_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_12_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_2_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_12_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7527: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7527, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_2_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_13_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_2_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_13_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7551: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7551, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_2_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_14_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_2_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_14_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7575: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7575, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_2_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_15_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_2_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_15_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7599: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7599, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_2_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_16_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_2_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_16_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7623: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7623, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_2_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_17_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_2_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_17_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7647: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7647, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_3_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_4_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_3_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_4_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7671: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7671, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_3_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_5_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_3_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_5_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7695: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7695, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_3_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_6_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_3_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_6_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7719: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7719, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_3_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_7_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_3_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_7_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7743: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7743, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_3_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_8_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_3_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_8_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7767: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7767, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_3_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_9_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_3_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_9_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7791: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7791, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_3_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_10_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_3_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_10_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7815: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7815, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_3_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_11_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_3_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_11_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7839: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7839, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_3_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_12_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_3_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_12_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7863: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7863, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_3_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_13_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_3_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_13_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7887: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7887, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_3_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_14_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_3_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_14_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7911: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7911, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_3_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_15_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_3_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_15_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7935: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7935, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_3_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_16_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_3_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_16_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7959: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7959, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_3_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_17_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_3_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_17_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:7983: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 7983, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_4_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_5_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_4_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_5_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8007: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8007, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_4_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_6_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_4_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_6_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8031: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8031, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_4_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_7_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_4_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_7_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8055: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8055, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_4_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_8_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_4_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_8_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8079: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8079, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_4_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_9_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_4_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_9_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8103: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8103, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_4_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_10_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_4_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_10_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8127: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8127, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_4_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_11_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_4_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_11_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8151: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8151, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_4_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_12_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_4_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_12_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8175: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8175, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_4_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_13_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_4_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_13_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8199: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8199, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_4_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_14_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_4_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_14_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8223: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8223, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_4_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_15_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_4_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_15_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8247: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8247, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_4_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_16_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_4_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_16_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8271: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8271, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_4_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_17_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_4_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_17_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8295: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8295, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_5_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_6_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_5_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_6_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8319: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8319, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_5_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_7_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_5_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_7_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8343: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8343, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_5_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_8_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_5_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_8_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8367: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8367, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_5_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_9_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_5_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_9_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8391: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8391, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_5_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_10_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_5_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_10_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8415: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8415, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_5_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_11_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_5_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_11_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8439: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8439, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_5_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_12_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_5_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_12_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8463: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8463, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_5_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_13_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_5_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_13_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8487: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8487, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_5_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_14_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_5_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_14_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8511: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8511, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_5_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_15_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_5_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_15_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8535: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8535, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_5_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_16_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_5_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_16_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8559: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8559, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_5_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_17_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_5_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_17_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8583: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8583, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_6_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_7_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_6_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_7_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8607: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8607, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_6_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_8_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_6_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_8_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8631: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8631, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_6_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_9_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_6_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_9_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8655: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8655, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_6_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_10_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_6_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_10_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8679: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8679, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_6_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_11_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_6_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_11_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8703: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8703, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_6_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_12_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_6_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_12_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8727: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8727, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_6_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_13_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_6_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_13_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8751: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8751, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_6_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_14_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_6_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_14_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8775: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8775, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_6_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_15_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_6_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_15_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8799: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8799, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_6_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_16_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_6_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_16_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8823: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8823, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_6_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_17_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_6_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_17_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8847: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8847, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_7_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_8_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_7_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_8_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8871: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8871, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_7_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_9_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_7_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_9_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8895: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8895, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_7_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_10_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_7_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_10_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8919: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8919, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_7_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_11_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_7_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_11_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8943: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8943, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_7_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_12_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_7_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_12_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8967: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8967, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_7_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_13_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_7_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_13_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:8991: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 8991, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_7_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_14_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_7_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_14_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9015: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9015, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_7_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_15_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_7_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_15_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9039: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9039, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_7_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_16_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_7_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_16_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9063: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9063, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_7_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_17_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_7_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_17_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9087: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9087, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_8_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_9_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_8_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_9_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9111: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9111, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_8_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_10_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_8_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_10_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9135: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9135, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_8_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_11_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_8_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_11_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9159: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9159, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_8_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_12_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_8_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_12_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9183: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9183, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_8_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_13_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_8_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_13_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9207: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9207, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_8_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_14_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_8_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_14_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9231: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9231, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_8_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_15_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_8_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_15_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9255: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9255, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_8_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_16_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_8_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_16_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9279: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9279, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_8_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_17_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_8_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_17_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9303: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9303, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_9_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_10_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_9_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_10_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9327: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9327, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_9_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_11_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_9_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_11_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9351: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9351, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_9_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_12_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_9_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_12_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9375: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9375, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_9_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_13_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_9_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_13_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9399: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9399, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_9_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_14_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_9_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_14_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9423: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9423, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_9_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_15_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_9_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_15_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9447: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9447, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_9_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_16_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_9_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_16_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9471: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9471, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_9_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_17_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_9_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_17_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9495: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9495, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_10_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_11_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_10_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_11_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9519: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9519, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_10_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_12_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_10_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_12_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9543: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9543, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_10_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_13_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_10_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_13_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9567: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9567, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_10_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_14_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_10_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_14_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9591: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9591, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_10_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_15_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_10_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_15_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9615: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9615, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_10_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_16_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_10_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_16_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9639: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9639, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_10_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_17_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_10_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_17_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9663: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9663, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_11_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_12_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_11_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_12_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9687: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9687, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_11_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_13_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_11_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_13_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9711: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9711, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_11_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_14_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_11_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_14_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9735: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9735, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_11_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_15_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_11_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_15_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9759: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9759, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_11_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_16_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_11_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_16_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9783: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9783, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_11_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_17_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_11_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_17_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9807: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9807, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_12_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_13_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_12_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_13_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9831: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9831, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_12_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_14_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_12_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_14_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9855: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9855, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_12_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_15_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_12_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_15_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9879: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9879, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_12_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_16_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_12_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_16_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9903: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9903, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_12_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_17_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_12_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_17_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9927: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9927, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_13_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_14_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_13_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_14_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9951: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9951, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_13_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_15_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_13_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_15_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9975: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9975, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_13_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_16_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_13_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_16_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:9999: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 9999, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_13_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_17_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_13_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_17_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:10023: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 10023, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_14_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_15_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_14_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_15_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:10047: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 10047, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_14_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_16_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_14_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_16_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:10071: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 10071, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_14_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_17_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_14_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_17_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:10095: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 10095, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_15_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_16_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_15_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_16_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:10119: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 10119, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_15_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_17_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_15_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_17_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:10143: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 10143, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_16_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_17_addr)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy))) 
                                 | ((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__wb__DOT__entries_16_addr) 
                                    != (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__wb__DOT__entries_17_addr)))))))) {
        VL_WRITEF("[%0t] %%Fatal: WriteBackQueue.v:10167: Assertion failed in %NDCache.wb\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/WriteBackQueue.v", 10167, "");
    }
    vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_7__DOT__mem_3__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_6__DOT__mem_3__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_5__DOT__mem_3__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_4__DOT__mem_3__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_3__DOT__mem_3__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_2__DOT__mem_3__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_1__DOT__mem_3__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_0__DOT__mem_3__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_7__DOT__mem_2__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_6__DOT__mem_2__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_5__DOT__mem_2__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_4__DOT__mem_2__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_3__DOT__mem_2__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_2__DOT__mem_2__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_1__DOT__mem_2__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_0__DOT__mem_2__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_7__DOT__mem_1__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_7__DOT__mem_0__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_6__DOT__mem_1__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_6__DOT__mem_0__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_5__DOT__mem_1__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_5__DOT__mem_0__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_4__DOT__mem_1__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_4__DOT__mem_0__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_3__DOT__mem_1__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_3__DOT__mem_0__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_2__DOT__mem_1__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_2__DOT__mem_0__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_1__DOT__mem_1__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_1__DOT__mem_0__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_0__DOT__mem_1__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_0__DOT__mem_0__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__tags__DOT__arrays_1__DOT__banks_0__DOT__tagSram__DOT__mem_1__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__tags__DOT__arrays_1__DOT__banks_0__DOT__tagSram__DOT__mem_0__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__tags__DOT__arrays_1__DOT__banks_1__DOT__tagSram__DOT__mem_1__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__tags__DOT__arrays_1__DOT__banks_1__DOT__tagSram__DOT__mem_0__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__tags__DOT__arrays_0__DOT__banks_0__DOT__tagSram__DOT__mem_1__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__tags__DOT__arrays_0__DOT__banks_0__DOT__tagSram__DOT__mem_0__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__tags__DOT__arrays_0__DOT__banks_1__DOT__tagSram__DOT__mem_1__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__tags__DOT__arrays_0__DOT__banks_1__DOT__tagSram__DOT__mem_0__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__tags__DOT__arrays_2__DOT__banks_0__DOT__tagSram__DOT__mem_1__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__tags__DOT__arrays_2__DOT__banks_0__DOT__tagSram__DOT__mem_0__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__tags__DOT__arrays_2__DOT__banks_1__DOT__tagSram__DOT__mem_1__v0 = 0U;
    vlSelf->__Vdlyvset__DCache__DOT__tags__DOT__arrays_2__DOT__banks_1__DOT__tagSram__DOT__mem_0__v0 = 0U;
}

VL_INLINE_OPT void VDCache___024root___nba_sequent__TOP__1(VDCache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDCache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDCache___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_15_waitVictim 
        = ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_waitVictim) 
                                           & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_15))) 
                                          & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_15)))
                                          ? ((0xfU 
                                              != (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_waitCnt)) 
                                             & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3493))
                                          : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3493)));
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_14_waitVictim 
        = ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_waitVictim) 
                                           & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_14))) 
                                          & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_14)))
                                          ? ((0xfU 
                                              != (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_waitCnt)) 
                                             & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3294))
                                          : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3294)));
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_13_waitVictim 
        = ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_waitVictim) 
                                           & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_13))) 
                                          & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_13)))
                                          ? ((0xfU 
                                              != (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_waitCnt)) 
                                             & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3095))
                                          : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3095)));
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_12_waitVictim 
        = ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_waitVictim) 
                                           & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_12))) 
                                          & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_12)))
                                          ? ((0xfU 
                                              != (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_waitCnt)) 
                                             & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2896))
                                          : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2896)));
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_5_waitVictim 
        = ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_waitVictim) 
                                           & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_5))) 
                                          & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_5)))
                                          ? ((0xfU 
                                              != (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_waitCnt)) 
                                             & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1503))
                                          : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1503)));
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_4_waitVictim 
        = ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_waitVictim) 
                                           & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_4))) 
                                          & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_4)))
                                          ? ((0xfU 
                                              != (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_waitCnt)) 
                                             & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1304))
                                          : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1304)));
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_3_waitVictim 
        = ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_waitVictim) 
                                           & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_3))) 
                                          & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_3)))
                                          ? ((0xfU 
                                              != (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_waitCnt)) 
                                             & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1105))
                                          : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1105)));
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_2_waitVictim 
        = ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_waitVictim) 
                                           & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_2))) 
                                          & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_2)))
                                          ? ((0xfU 
                                              != (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_waitCnt)) 
                                             & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_906))
                                          : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_906)));
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_1_waitVictim 
        = ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_waitVictim) 
                                           & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_1))) 
                                          & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_1)))
                                          ? ((0xfU 
                                              != (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_waitCnt)) 
                                             & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_707))
                                          : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_707)));
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_0_waitVictim 
        = ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_waitVictim) 
                                           & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3))) 
                                          & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc)))
                                          ? ((0xfU 
                                              != (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_waitCnt)) 
                                             & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_508))
                                          : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_508)));
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_6_waitVictim 
        = ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_waitVictim) 
                                           & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_6))) 
                                          & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_6)))
                                          ? ((0xfU 
                                              != (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_waitCnt)) 
                                             & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1702))
                                          : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1702)));
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_7_waitVictim 
        = ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_waitVictim) 
                                           & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_7))) 
                                          & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_7)))
                                          ? ((0xfU 
                                              != (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_waitCnt)) 
                                             & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1901))
                                          : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1901)));
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_8_waitVictim 
        = ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_waitVictim) 
                                           & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_8))) 
                                          & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_8)))
                                          ? ((0xfU 
                                              != (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_waitCnt)) 
                                             & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2100))
                                          : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2100)));
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_9_waitVictim 
        = ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_waitVictim) 
                                           & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_9))) 
                                          & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_9)))
                                          ? ((0xfU 
                                              != (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_waitCnt)) 
                                             & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2299))
                                          : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2299)));
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_10_waitVictim 
        = ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_waitVictim) 
                                           & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_10))) 
                                          & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_10)))
                                          ? ((0xfU 
                                              != (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_waitCnt)) 
                                             & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2498))
                                          : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2498)));
    vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_11_waitVictim 
        = ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_waitVictim) 
                                           & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_11))) 
                                          & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_11)))
                                          ? ((0xfU 
                                              != (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_waitCnt)) 
                                             & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2697))
                                          : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2697)));
    if (((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_7_io_w_en) 
         & (((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)) 
            >> 3U))) {
        vlSelf->__Vdlyvval__DCache__DOT__data__DOT__dataBank_7__DOT__mem_3__v0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_7_io_w_data_0;
        vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_7__DOT__mem_3__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__data__DOT__dataBank_7__DOT__mem_3__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
    }
    if (((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_6_io_w_en) 
         & (((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)) 
            >> 3U))) {
        vlSelf->__Vdlyvval__DCache__DOT__data__DOT__dataBank_6__DOT__mem_3__v0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_6_io_w_data_0;
        vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_6__DOT__mem_3__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__data__DOT__dataBank_6__DOT__mem_3__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
    }
    if (((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_5_io_w_en) 
         & (((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)) 
            >> 3U))) {
        vlSelf->__Vdlyvval__DCache__DOT__data__DOT__dataBank_5__DOT__mem_3__v0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_5_io_w_data_0;
        vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_5__DOT__mem_3__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__data__DOT__dataBank_5__DOT__mem_3__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
    }
    if (((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_4_io_w_en) 
         & (((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)) 
            >> 3U))) {
        vlSelf->__Vdlyvval__DCache__DOT__data__DOT__dataBank_4__DOT__mem_3__v0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_4_io_w_data_0;
        vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_4__DOT__mem_3__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__data__DOT__dataBank_4__DOT__mem_3__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
    }
    if (((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_3_io_w_en) 
         & (((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)) 
            >> 3U))) {
        vlSelf->__Vdlyvval__DCache__DOT__data__DOT__dataBank_3__DOT__mem_3__v0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_3_io_w_data_0;
        vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_3__DOT__mem_3__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__data__DOT__dataBank_3__DOT__mem_3__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
    }
    if (((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_2_io_w_en) 
         & (((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)) 
            >> 3U))) {
        vlSelf->__Vdlyvval__DCache__DOT__data__DOT__dataBank_2__DOT__mem_3__v0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_2_io_w_data_0;
        vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_2__DOT__mem_3__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__data__DOT__dataBank_2__DOT__mem_3__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
    }
    if (((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_1_io_w_en) 
         & (((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)) 
            >> 3U))) {
        vlSelf->__Vdlyvval__DCache__DOT__data__DOT__dataBank_1__DOT__mem_3__v0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_1_io_w_data_0;
        vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_1__DOT__mem_3__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__data__DOT__dataBank_1__DOT__mem_3__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
    }
    if (((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_0_io_w_en) 
         & (((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)) 
            >> 3U))) {
        vlSelf->__Vdlyvval__DCache__DOT__data__DOT__dataBank_0__DOT__mem_3__v0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_0_io_w_data_0;
        vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_0__DOT__mem_3__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__data__DOT__dataBank_0__DOT__mem_3__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
    }
    if ((3U & ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_7_io_w_en) 
               & (((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)) 
                  >> 2U)))) {
        vlSelf->__Vdlyvval__DCache__DOT__data__DOT__dataBank_7__DOT__mem_2__v0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_7_io_w_data_0;
        vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_7__DOT__mem_2__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__data__DOT__dataBank_7__DOT__mem_2__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
    }
    if ((3U & ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_6_io_w_en) 
               & (((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)) 
                  >> 2U)))) {
        vlSelf->__Vdlyvval__DCache__DOT__data__DOT__dataBank_6__DOT__mem_2__v0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_6_io_w_data_0;
        vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_6__DOT__mem_2__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__data__DOT__dataBank_6__DOT__mem_2__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
    }
    if ((3U & ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_5_io_w_en) 
               & (((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)) 
                  >> 2U)))) {
        vlSelf->__Vdlyvval__DCache__DOT__data__DOT__dataBank_5__DOT__mem_2__v0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_5_io_w_data_0;
        vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_5__DOT__mem_2__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__data__DOT__dataBank_5__DOT__mem_2__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
    }
    if ((3U & ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_4_io_w_en) 
               & (((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)) 
                  >> 2U)))) {
        vlSelf->__Vdlyvval__DCache__DOT__data__DOT__dataBank_4__DOT__mem_2__v0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_4_io_w_data_0;
        vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_4__DOT__mem_2__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__data__DOT__dataBank_4__DOT__mem_2__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
    }
    if ((3U & ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_3_io_w_en) 
               & (((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)) 
                  >> 2U)))) {
        vlSelf->__Vdlyvval__DCache__DOT__data__DOT__dataBank_3__DOT__mem_2__v0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_3_io_w_data_0;
        vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_3__DOT__mem_2__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__data__DOT__dataBank_3__DOT__mem_2__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
    }
    if ((3U & ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_2_io_w_en) 
               & (((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)) 
                  >> 2U)))) {
        vlSelf->__Vdlyvval__DCache__DOT__data__DOT__dataBank_2__DOT__mem_2__v0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_2_io_w_data_0;
        vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_2__DOT__mem_2__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__data__DOT__dataBank_2__DOT__mem_2__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
    }
    if ((3U & ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_1_io_w_en) 
               & (((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)) 
                  >> 2U)))) {
        vlSelf->__Vdlyvval__DCache__DOT__data__DOT__dataBank_1__DOT__mem_2__v0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_1_io_w_data_0;
        vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_1__DOT__mem_2__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__data__DOT__dataBank_1__DOT__mem_2__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
    }
    if ((3U & ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_0_io_w_en) 
               & (((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)) 
                  >> 2U)))) {
        vlSelf->__Vdlyvval__DCache__DOT__data__DOT__dataBank_0__DOT__mem_2__v0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_0_io_w_data_0;
        vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_0__DOT__mem_2__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__data__DOT__dataBank_0__DOT__mem_2__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
    }
    if ((7U & ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_7_io_w_en) 
               & (((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)) 
                  >> 1U)))) {
        vlSelf->__Vdlyvval__DCache__DOT__data__DOT__dataBank_7__DOT__mem_1__v0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_7_io_w_data_0;
        vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_7__DOT__mem_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__data__DOT__dataBank_7__DOT__mem_1__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
    }
    if (((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_7_io_w_en) 
         & ((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)))) {
        vlSelf->__Vdlyvval__DCache__DOT__data__DOT__dataBank_7__DOT__mem_0__v0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_7_io_w_data_0;
        vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_7__DOT__mem_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__data__DOT__dataBank_7__DOT__mem_0__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
    }
    if ((7U & ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_6_io_w_en) 
               & (((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)) 
                  >> 1U)))) {
        vlSelf->__Vdlyvval__DCache__DOT__data__DOT__dataBank_6__DOT__mem_1__v0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_6_io_w_data_0;
        vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_6__DOT__mem_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__data__DOT__dataBank_6__DOT__mem_1__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
    }
    if (((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_6_io_w_en) 
         & ((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)))) {
        vlSelf->__Vdlyvval__DCache__DOT__data__DOT__dataBank_6__DOT__mem_0__v0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_6_io_w_data_0;
        vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_6__DOT__mem_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__data__DOT__dataBank_6__DOT__mem_0__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
    }
    if ((7U & ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_5_io_w_en) 
               & (((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)) 
                  >> 1U)))) {
        vlSelf->__Vdlyvval__DCache__DOT__data__DOT__dataBank_5__DOT__mem_1__v0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_5_io_w_data_0;
        vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_5__DOT__mem_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__data__DOT__dataBank_5__DOT__mem_1__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
    }
    if (((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_5_io_w_en) 
         & ((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)))) {
        vlSelf->__Vdlyvval__DCache__DOT__data__DOT__dataBank_5__DOT__mem_0__v0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_5_io_w_data_0;
        vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_5__DOT__mem_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__data__DOT__dataBank_5__DOT__mem_0__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
    }
    if ((7U & ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_4_io_w_en) 
               & (((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)) 
                  >> 1U)))) {
        vlSelf->__Vdlyvval__DCache__DOT__data__DOT__dataBank_4__DOT__mem_1__v0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_4_io_w_data_0;
        vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_4__DOT__mem_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__data__DOT__dataBank_4__DOT__mem_1__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
    }
    if (((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_4_io_w_en) 
         & ((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)))) {
        vlSelf->__Vdlyvval__DCache__DOT__data__DOT__dataBank_4__DOT__mem_0__v0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_4_io_w_data_0;
        vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_4__DOT__mem_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__data__DOT__dataBank_4__DOT__mem_0__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
    }
    if ((7U & ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_3_io_w_en) 
               & (((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)) 
                  >> 1U)))) {
        vlSelf->__Vdlyvval__DCache__DOT__data__DOT__dataBank_3__DOT__mem_1__v0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_3_io_w_data_0;
        vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_3__DOT__mem_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__data__DOT__dataBank_3__DOT__mem_1__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
    }
    if (((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_3_io_w_en) 
         & ((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)))) {
        vlSelf->__Vdlyvval__DCache__DOT__data__DOT__dataBank_3__DOT__mem_0__v0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_3_io_w_data_0;
        vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_3__DOT__mem_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__data__DOT__dataBank_3__DOT__mem_0__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
    }
    if ((7U & ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_2_io_w_en) 
               & (((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)) 
                  >> 1U)))) {
        vlSelf->__Vdlyvval__DCache__DOT__data__DOT__dataBank_2__DOT__mem_1__v0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_2_io_w_data_0;
        vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_2__DOT__mem_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__data__DOT__dataBank_2__DOT__mem_1__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
    }
    if (((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_2_io_w_en) 
         & ((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)))) {
        vlSelf->__Vdlyvval__DCache__DOT__data__DOT__dataBank_2__DOT__mem_0__v0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_2_io_w_data_0;
        vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_2__DOT__mem_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__data__DOT__dataBank_2__DOT__mem_0__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
    }
    if ((7U & ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_1_io_w_en) 
               & (((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)) 
                  >> 1U)))) {
        vlSelf->__Vdlyvval__DCache__DOT__data__DOT__dataBank_1__DOT__mem_1__v0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_1_io_w_data_0;
        vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_1__DOT__mem_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__data__DOT__dataBank_1__DOT__mem_1__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
    }
    if (((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_1_io_w_en) 
         & ((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)))) {
        vlSelf->__Vdlyvval__DCache__DOT__data__DOT__dataBank_1__DOT__mem_0__v0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_1_io_w_data_0;
        vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_1__DOT__mem_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__data__DOT__dataBank_1__DOT__mem_0__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
    }
    if ((7U & ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_0_io_w_en) 
               & (((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)) 
                  >> 1U)))) {
        vlSelf->__Vdlyvval__DCache__DOT__data__DOT__dataBank_0__DOT__mem_1__v0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_0_io_w_data_0;
        vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_0__DOT__mem_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__data__DOT__dataBank_0__DOT__mem_1__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
    }
    if (((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_0_io_w_en) 
         & ((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)))) {
        vlSelf->__Vdlyvval__DCache__DOT__data__DOT__dataBank_0__DOT__mem_0__v0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_0_io_w_data_0;
        vlSelf->__Vdlyvset__DCache__DOT__data__DOT__dataBank_0__DOT__mem_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__data__DOT__dataBank_0__DOT__mem_0__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
    }
    if ((7U & ((IData)(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_0__DOT__tagSram__DOT__mem_0_MPORT_1_en) 
               & (((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)) 
                  >> 1U)))) {
        vlSelf->__Vdlyvval__DCache__DOT__tags__DOT__arrays_1__DOT__banks_0__DOT__tagSram__DOT__mem_1__v0 
            = (0xfffffffffULL & (vlSelf->DCache__DOT__pipe__DOT__s3_hold_addr 
                                 >> 0xcU));
        vlSelf->__Vdlyvset__DCache__DOT__tags__DOT__arrays_1__DOT__banks_0__DOT__tagSram__DOT__mem_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__tags__DOT__arrays_1__DOT__banks_0__DOT__tagSram__DOT__mem_1__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
        vlSelf->__Vdlyvval__DCache__DOT__tags__DOT__arrays_0__DOT__banks_0__DOT__tagSram__DOT__mem_1__v0 
            = (0xfffffffffULL & (vlSelf->DCache__DOT__pipe__DOT__s3_hold_addr 
                                 >> 0xcU));
        vlSelf->__Vdlyvset__DCache__DOT__tags__DOT__arrays_0__DOT__banks_0__DOT__tagSram__DOT__mem_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__tags__DOT__arrays_0__DOT__banks_0__DOT__tagSram__DOT__mem_1__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
        vlSelf->__Vdlyvval__DCache__DOT__tags__DOT__arrays_2__DOT__banks_0__DOT__tagSram__DOT__mem_1__v0 
            = (0xfffffffffULL & (vlSelf->DCache__DOT__pipe__DOT__s3_hold_addr 
                                 >> 0xcU));
        vlSelf->__Vdlyvset__DCache__DOT__tags__DOT__arrays_2__DOT__banks_0__DOT__tagSram__DOT__mem_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__tags__DOT__arrays_2__DOT__banks_0__DOT__tagSram__DOT__mem_1__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
    }
    if (((IData)(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_0__DOT__tagSram__DOT__mem_0_MPORT_1_en) 
         & ((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)))) {
        vlSelf->__Vdlyvval__DCache__DOT__tags__DOT__arrays_1__DOT__banks_0__DOT__tagSram__DOT__mem_0__v0 
            = (0xfffffffffULL & (vlSelf->DCache__DOT__pipe__DOT__s3_hold_addr 
                                 >> 0xcU));
        vlSelf->__Vdlyvset__DCache__DOT__tags__DOT__arrays_1__DOT__banks_0__DOT__tagSram__DOT__mem_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__tags__DOT__arrays_1__DOT__banks_0__DOT__tagSram__DOT__mem_0__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
        vlSelf->__Vdlyvval__DCache__DOT__tags__DOT__arrays_0__DOT__banks_0__DOT__tagSram__DOT__mem_0__v0 
            = (0xfffffffffULL & (vlSelf->DCache__DOT__pipe__DOT__s3_hold_addr 
                                 >> 0xcU));
        vlSelf->__Vdlyvset__DCache__DOT__tags__DOT__arrays_0__DOT__banks_0__DOT__tagSram__DOT__mem_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__tags__DOT__arrays_0__DOT__banks_0__DOT__tagSram__DOT__mem_0__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
        vlSelf->__Vdlyvval__DCache__DOT__tags__DOT__arrays_2__DOT__banks_0__DOT__tagSram__DOT__mem_0__v0 
            = (0xfffffffffULL & (vlSelf->DCache__DOT__pipe__DOT__s3_hold_addr 
                                 >> 0xcU));
        vlSelf->__Vdlyvset__DCache__DOT__tags__DOT__arrays_2__DOT__banks_0__DOT__tagSram__DOT__mem_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__tags__DOT__arrays_2__DOT__banks_0__DOT__tagSram__DOT__mem_0__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
    }
    if (((IData)(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_1__DOT__tagSram__DOT__mem_0_MPORT_1_en) 
         & (((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)) 
            >> 3U))) {
        vlSelf->__Vdlyvval__DCache__DOT__tags__DOT__arrays_1__DOT__banks_1__DOT__tagSram__DOT__mem_1__v0 
            = (0xfffffffffULL & (vlSelf->DCache__DOT__pipe__DOT__s3_hold_addr 
                                 >> 0xcU));
        vlSelf->__Vdlyvset__DCache__DOT__tags__DOT__arrays_1__DOT__banks_1__DOT__tagSram__DOT__mem_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__tags__DOT__arrays_1__DOT__banks_1__DOT__tagSram__DOT__mem_1__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
        vlSelf->__Vdlyvval__DCache__DOT__tags__DOT__arrays_0__DOT__banks_1__DOT__tagSram__DOT__mem_1__v0 
            = (0xfffffffffULL & (vlSelf->DCache__DOT__pipe__DOT__s3_hold_addr 
                                 >> 0xcU));
        vlSelf->__Vdlyvset__DCache__DOT__tags__DOT__arrays_0__DOT__banks_1__DOT__tagSram__DOT__mem_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__tags__DOT__arrays_0__DOT__banks_1__DOT__tagSram__DOT__mem_1__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
        vlSelf->__Vdlyvval__DCache__DOT__tags__DOT__arrays_2__DOT__banks_1__DOT__tagSram__DOT__mem_1__v0 
            = (0xfffffffffULL & (vlSelf->DCache__DOT__pipe__DOT__s3_hold_addr 
                                 >> 0xcU));
        vlSelf->__Vdlyvset__DCache__DOT__tags__DOT__arrays_2__DOT__banks_1__DOT__tagSram__DOT__mem_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__tags__DOT__arrays_2__DOT__banks_1__DOT__tagSram__DOT__mem_1__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
    }
    if ((3U & ((IData)(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_1__DOT__tagSram__DOT__mem_0_MPORT_1_en) 
               & (((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)) 
                  >> 2U)))) {
        vlSelf->__Vdlyvval__DCache__DOT__tags__DOT__arrays_1__DOT__banks_1__DOT__tagSram__DOT__mem_0__v0 
            = (0xfffffffffULL & (vlSelf->DCache__DOT__pipe__DOT__s3_hold_addr 
                                 >> 0xcU));
        vlSelf->__Vdlyvset__DCache__DOT__tags__DOT__arrays_1__DOT__banks_1__DOT__tagSram__DOT__mem_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__tags__DOT__arrays_1__DOT__banks_1__DOT__tagSram__DOT__mem_0__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
        vlSelf->__Vdlyvval__DCache__DOT__tags__DOT__arrays_0__DOT__banks_1__DOT__tagSram__DOT__mem_0__v0 
            = (0xfffffffffULL & (vlSelf->DCache__DOT__pipe__DOT__s3_hold_addr 
                                 >> 0xcU));
        vlSelf->__Vdlyvset__DCache__DOT__tags__DOT__arrays_0__DOT__banks_1__DOT__tagSram__DOT__mem_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__tags__DOT__arrays_0__DOT__banks_1__DOT__tagSram__DOT__mem_0__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
        vlSelf->__Vdlyvval__DCache__DOT__tags__DOT__arrays_2__DOT__banks_1__DOT__tagSram__DOT__mem_0__v0 
            = (0xfffffffffULL & (vlSelf->DCache__DOT__pipe__DOT__s3_hold_addr 
                                 >> 0xcU));
        vlSelf->__Vdlyvset__DCache__DOT__tags__DOT__arrays_2__DOT__banks_1__DOT__tagSram__DOT__mem_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__DCache__DOT__tags__DOT__arrays_2__DOT__banks_1__DOT__tagSram__DOT__mem_0__v0 
            = vlSelf->DCache__DOT__pipe__DOT__s3_hold_set;
    }
    vlSelf->DCache__DOT__tags__DOT__arrays_2__DOT__banks_0__DOT__tagSram__DOT__mem_1_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__tags__DOT__arrays_2__DOT__banks_0__DOT__tagSram_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_0__DOT__tagSram__DOT__mem_0_MPORT_1_en)));
    vlSelf->DCache__DOT__tags__DOT__arrays_2__DOT__banks_0__DOT__tagSram__DOT__mem_0_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__tags__DOT__arrays_2__DOT__banks_0__DOT__tagSram_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_0__DOT__tagSram__DOT__mem_0_MPORT_1_en)));
    vlSelf->DCache__DOT__tags__DOT__arrays_1__DOT__banks_0__DOT__tagSram__DOT__mem_1_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__tags__DOT__arrays_1__DOT__banks_0__DOT__tagSram_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_0__DOT__tagSram__DOT__mem_0_MPORT_1_en)));
    vlSelf->DCache__DOT__tags__DOT__arrays_1__DOT__banks_0__DOT__tagSram__DOT__mem_0_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__tags__DOT__arrays_1__DOT__banks_0__DOT__tagSram_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_0__DOT__tagSram__DOT__mem_0_MPORT_1_en)));
    vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_0__DOT__tagSram__DOT__mem_1_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_0__DOT__tagSram_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_0__DOT__tagSram__DOT__mem_0_MPORT_1_en)));
    vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_0__DOT__tagSram__DOT__mem_0_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_0__DOT__tagSram_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_0__DOT__tagSram__DOT__mem_0_MPORT_1_en)));
    vlSelf->DCache__DOT__data__DOT__dataBank_7__DOT__mem_0_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_7_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_7_io_w_en)));
    vlSelf->DCache__DOT__data__DOT__dataBank_7__DOT__mem_3_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_7_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_7_io_w_en)));
    vlSelf->DCache__DOT__data__DOT__dataBank_7__DOT__mem_1_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_7_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_7_io_w_en)));
    vlSelf->DCache__DOT__data__DOT__dataBank_7__DOT__mem_2_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_7_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_7_io_w_en)));
    vlSelf->DCache__DOT__data__DOT__dataBank_6__DOT__mem_0_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_6_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_6_io_w_en)));
    vlSelf->DCache__DOT__data__DOT__dataBank_6__DOT__mem_3_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_6_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_6_io_w_en)));
    vlSelf->DCache__DOT__data__DOT__dataBank_6__DOT__mem_1_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_6_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_6_io_w_en)));
    vlSelf->DCache__DOT__data__DOT__dataBank_6__DOT__mem_2_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_6_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_6_io_w_en)));
    vlSelf->DCache__DOT__data__DOT__dataBank_5__DOT__mem_0_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_5_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_5_io_w_en)));
    vlSelf->DCache__DOT__data__DOT__dataBank_5__DOT__mem_3_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_5_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_5_io_w_en)));
    vlSelf->DCache__DOT__data__DOT__dataBank_5__DOT__mem_1_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_5_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_5_io_w_en)));
    vlSelf->DCache__DOT__data__DOT__dataBank_5__DOT__mem_2_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_5_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_5_io_w_en)));
    vlSelf->DCache__DOT__data__DOT__dataBank_4__DOT__mem_0_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_4_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_4_io_w_en)));
    vlSelf->DCache__DOT__data__DOT__dataBank_4__DOT__mem_3_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_4_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_4_io_w_en)));
    vlSelf->DCache__DOT__data__DOT__dataBank_4__DOT__mem_1_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_4_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_4_io_w_en)));
    vlSelf->DCache__DOT__data__DOT__dataBank_4__DOT__mem_2_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_4_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_4_io_w_en)));
    vlSelf->DCache__DOT__data__DOT__dataBank_3__DOT__mem_0_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_3_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_3_io_w_en)));
    vlSelf->DCache__DOT__data__DOT__dataBank_3__DOT__mem_3_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_3_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_3_io_w_en)));
    vlSelf->DCache__DOT__data__DOT__dataBank_3__DOT__mem_1_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_3_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_3_io_w_en)));
    vlSelf->DCache__DOT__data__DOT__dataBank_3__DOT__mem_2_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_3_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_3_io_w_en)));
    vlSelf->DCache__DOT__data__DOT__dataBank_2__DOT__mem_0_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_2_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_2_io_w_en)));
    vlSelf->DCache__DOT__data__DOT__dataBank_2__DOT__mem_3_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_2_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_2_io_w_en)));
    vlSelf->DCache__DOT__data__DOT__dataBank_2__DOT__mem_1_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_2_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_2_io_w_en)));
    vlSelf->DCache__DOT__data__DOT__dataBank_2__DOT__mem_2_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_2_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_2_io_w_en)));
    vlSelf->DCache__DOT__data__DOT__dataBank_1__DOT__mem_0_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_1_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_1_io_w_en)));
    vlSelf->DCache__DOT__data__DOT__dataBank_1__DOT__mem_3_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_1_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_1_io_w_en)));
    vlSelf->DCache__DOT__data__DOT__dataBank_1__DOT__mem_1_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_1_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_1_io_w_en)));
    vlSelf->DCache__DOT__data__DOT__dataBank_1__DOT__mem_2_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_1_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_1_io_w_en)));
    vlSelf->DCache__DOT__data__DOT__dataBank_0__DOT__mem_0_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_0_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_0_io_w_en)));
    vlSelf->DCache__DOT__data__DOT__dataBank_0__DOT__mem_3_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_0_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_0_io_w_en)));
    vlSelf->DCache__DOT__data__DOT__dataBank_0__DOT__mem_1_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_0_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_0_io_w_en)));
    vlSelf->DCache__DOT__data__DOT__dataBank_0__DOT__mem_2_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_0_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_0_io_w_en)));
    vlSelf->DCache__DOT__tags__DOT__arrays_2__DOT__banks_1__DOT__tagSram__DOT__mem_1_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__tags__DOT__arrays_2__DOT__banks_1__DOT__tagSram_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_1__DOT__tagSram__DOT__mem_0_MPORT_1_en)));
    vlSelf->DCache__DOT__tags__DOT__arrays_2__DOT__banks_1__DOT__tagSram__DOT__mem_0_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__tags__DOT__arrays_2__DOT__banks_1__DOT__tagSram_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_1__DOT__tagSram__DOT__mem_0_MPORT_1_en)));
    vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_1__DOT__tagSram__DOT__mem_1_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_1__DOT__tagSram_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_1__DOT__tagSram__DOT__mem_0_MPORT_1_en)));
    vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_1__DOT__tagSram__DOT__mem_0_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_1__DOT__tagSram_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_1__DOT__tagSram__DOT__mem_0_MPORT_1_en)));
    vlSelf->DCache__DOT__tags__DOT__arrays_1__DOT__banks_1__DOT__tagSram__DOT__mem_1_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__tags__DOT__arrays_1__DOT__banks_1__DOT__tagSram_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_1__DOT__tagSram__DOT__mem_0_MPORT_1_en)));
    vlSelf->DCache__DOT__tags__DOT__arrays_1__DOT__banks_1__DOT__tagSram__DOT__mem_0_MPORT_en_pipe_0 
        = ((IData)(vlSelf->DCache__DOT__tags__DOT__arrays_1__DOT__banks_1__DOT__tagSram_io_r_en) 
           & (~ (IData)(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_1__DOT__tagSram__DOT__mem_0_MPORT_1_en)));
    if (vlSelf->DCache__DOT__loads_0__DOT__s1_go) {
        vlSelf->DCache__DOT__loads_0__DOT__s2_req_isFirstIssue 
            = vlSelf->DCache__DOT__loads_0__DOT__s1_req_isFirstIssue;
        vlSelf->DCache__DOT__loads_0__DOT__s2_req_id 
            = vlSelf->DCache__DOT__loads_0__DOT__s1_req_id;
        vlSelf->DCache__DOT__loads_0__DOT__s2_tag_hit 
            = (0U != (IData)(vlSelf->DCache__DOT__loads_0__DOT__s1_tag_way));
        vlSelf->DCache__DOT__loads_0__DOT__s2_way_en 
            = vlSelf->DCache__DOT__loads_0__DOT__s1_tag_way;
        vlSelf->DCache__DOT__loads_0__DOT__s2_way = 
            (((IData)((0U != (IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_way_hi))) 
              << 1U) | (1U & (((IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_way_hi) 
                               | (IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_way_lo)) 
                              >> 1U)));
    }
    if (vlSelf->DCache__DOT__data__DOT___loadThis_1_T_4) {
        vlSelf->DCache__DOT__data__DOT__is128_1 = (1U 
                                                   < (IData)(vlSelf->DCache__DOT__data__DOT___is128_T_43));
        vlSelf->DCache__DOT__data__DOT__bank0_1 = (7U 
                                                   & (IData)(
                                                             (vlSelf->DCache__DOT__loads_1__DOT__s1_req_vaddr 
                                                              >> 3U)));
    }
    if (((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_7_io_r_en) 
         & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_7_io_w_en)))) {
        vlSelf->DCache__DOT__data__DOT__dataBank_7__DOT__mem_3_MPORT_addr_pipe_0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_7_io_r_addr;
        vlSelf->DCache__DOT__data__DOT__dataBank_7__DOT__mem_2_MPORT_addr_pipe_0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_7_io_r_addr;
        vlSelf->DCache__DOT__data__DOT__dataBank_7__DOT__mem_0_MPORT_addr_pipe_0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_7_io_r_addr;
        vlSelf->DCache__DOT__data__DOT__dataBank_7__DOT__mem_1_MPORT_addr_pipe_0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_7_io_r_addr;
    }
    if (((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_6_io_r_en) 
         & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_6_io_w_en)))) {
        vlSelf->DCache__DOT__data__DOT__dataBank_6__DOT__mem_3_MPORT_addr_pipe_0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_6_io_r_addr;
        vlSelf->DCache__DOT__data__DOT__dataBank_6__DOT__mem_2_MPORT_addr_pipe_0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_6_io_r_addr;
        vlSelf->DCache__DOT__data__DOT__dataBank_6__DOT__mem_0_MPORT_addr_pipe_0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_6_io_r_addr;
        vlSelf->DCache__DOT__data__DOT__dataBank_6__DOT__mem_1_MPORT_addr_pipe_0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_6_io_r_addr;
    }
    if (((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_5_io_r_en) 
         & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_5_io_w_en)))) {
        vlSelf->DCache__DOT__data__DOT__dataBank_5__DOT__mem_3_MPORT_addr_pipe_0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_5_io_r_addr;
        vlSelf->DCache__DOT__data__DOT__dataBank_5__DOT__mem_2_MPORT_addr_pipe_0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_5_io_r_addr;
        vlSelf->DCache__DOT__data__DOT__dataBank_5__DOT__mem_0_MPORT_addr_pipe_0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_5_io_r_addr;
        vlSelf->DCache__DOT__data__DOT__dataBank_5__DOT__mem_1_MPORT_addr_pipe_0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_5_io_r_addr;
    }
    if (((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_4_io_r_en) 
         & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_4_io_w_en)))) {
        vlSelf->DCache__DOT__data__DOT__dataBank_4__DOT__mem_3_MPORT_addr_pipe_0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_4_io_r_addr;
        vlSelf->DCache__DOT__data__DOT__dataBank_4__DOT__mem_2_MPORT_addr_pipe_0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_4_io_r_addr;
        vlSelf->DCache__DOT__data__DOT__dataBank_4__DOT__mem_0_MPORT_addr_pipe_0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_4_io_r_addr;
        vlSelf->DCache__DOT__data__DOT__dataBank_4__DOT__mem_1_MPORT_addr_pipe_0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_4_io_r_addr;
    }
    if (((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_3_io_r_en) 
         & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_3_io_w_en)))) {
        vlSelf->DCache__DOT__data__DOT__dataBank_3__DOT__mem_3_MPORT_addr_pipe_0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_3_io_r_addr;
        vlSelf->DCache__DOT__data__DOT__dataBank_3__DOT__mem_2_MPORT_addr_pipe_0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_3_io_r_addr;
        vlSelf->DCache__DOT__data__DOT__dataBank_3__DOT__mem_0_MPORT_addr_pipe_0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_3_io_r_addr;
        vlSelf->DCache__DOT__data__DOT__dataBank_3__DOT__mem_1_MPORT_addr_pipe_0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_3_io_r_addr;
    }
    if (((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_2_io_r_en) 
         & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_2_io_w_en)))) {
        vlSelf->DCache__DOT__data__DOT__dataBank_2__DOT__mem_3_MPORT_addr_pipe_0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_2_io_r_addr;
        vlSelf->DCache__DOT__data__DOT__dataBank_2__DOT__mem_2_MPORT_addr_pipe_0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_2_io_r_addr;
        vlSelf->DCache__DOT__data__DOT__dataBank_2__DOT__mem_0_MPORT_addr_pipe_0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_2_io_r_addr;
        vlSelf->DCache__DOT__data__DOT__dataBank_2__DOT__mem_1_MPORT_addr_pipe_0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_2_io_r_addr;
    }
    if (((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_1_io_r_en) 
         & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_1_io_w_en)))) {
        vlSelf->DCache__DOT__data__DOT__dataBank_1__DOT__mem_3_MPORT_addr_pipe_0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_1_io_r_addr;
        vlSelf->DCache__DOT__data__DOT__dataBank_1__DOT__mem_2_MPORT_addr_pipe_0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_1_io_r_addr;
        vlSelf->DCache__DOT__data__DOT__dataBank_1__DOT__mem_0_MPORT_addr_pipe_0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_1_io_r_addr;
        vlSelf->DCache__DOT__data__DOT__dataBank_1__DOT__mem_1_MPORT_addr_pipe_0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_1_io_r_addr;
    }
    if (((IData)(vlSelf->DCache__DOT__data__DOT__dataBank_0_io_r_en) 
         & (~ (IData)(vlSelf->DCache__DOT__data__DOT__dataBank_0_io_w_en)))) {
        vlSelf->DCache__DOT__data__DOT__dataBank_0__DOT__mem_3_MPORT_addr_pipe_0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_0_io_r_addr;
        vlSelf->DCache__DOT__data__DOT__dataBank_0__DOT__mem_2_MPORT_addr_pipe_0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_0_io_r_addr;
        vlSelf->DCache__DOT__data__DOT__dataBank_0__DOT__mem_0_MPORT_addr_pipe_0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_0_io_r_addr;
        vlSelf->DCache__DOT__data__DOT__dataBank_0__DOT__mem_1_MPORT_addr_pipe_0 
            = vlSelf->DCache__DOT__data__DOT__dataBank_0_io_r_addr;
    }
    if (vlSelf->DCache__DOT__data__DOT___loadThis_0_T_4) {
        vlSelf->DCache__DOT__data__DOT__is128 = (1U 
                                                 < (IData)(vlSelf->DCache__DOT__data__DOT___is128_T_20));
        vlSelf->DCache__DOT__data__DOT__bank0 = (7U 
                                                 & (IData)(
                                                           (vlSelf->DCache__DOT__loads_0__DOT__s1_req_vaddr 
                                                            >> 3U)));
    }
    if (vlSelf->DCache__DOT__loads_1__DOT__s0_fire) {
        vlSelf->DCache__DOT__loads_1__DOT__s1_req_lqIdx_value 
            = vlSelf->io_load_1_req_bits_lqIdx_value;
        vlSelf->DCache__DOT__loads_1__DOT__s1_req_lqIdx_flag 
            = vlSelf->io_load_1_req_bits_lqIdx_flag;
    }
    if (vlSelf->DCache__DOT__loads_0__DOT__s0_fire) {
        vlSelf->DCache__DOT__loads_0__DOT__s1_req_lqIdx_value 
            = vlSelf->io_load_0_req_bits_lqIdx_value;
        vlSelf->DCache__DOT__loads_0__DOT__s1_req_lqIdx_flag 
            = vlSelf->io_load_0_req_bits_lqIdx_flag;
    }
    if (((IData)(vlSelf->DCache__DOT__tags__DOT__arrays_1__DOT__banks_1__DOT__tagSram_io_r_en) 
         & (~ (IData)(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_1__DOT__tagSram__DOT__mem_0_MPORT_1_en)))) {
        vlSelf->DCache__DOT__tags__DOT__arrays_1__DOT__banks_1__DOT__tagSram__DOT__mem_1_MPORT_addr_pipe_0 
            = (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                >> 6U)));
        vlSelf->DCache__DOT__tags__DOT__arrays_1__DOT__banks_1__DOT__tagSram__DOT__mem_0_MPORT_addr_pipe_0 
            = (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                >> 6U)));
    }
    vlSelf->DCache__DOT__miss__DOT__entries_15_snoopDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__snoopDoneNext_15));
    vlSelf->DCache__DOT__miss__DOT__entries_14_snoopDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__snoopDoneNext_14));
    vlSelf->DCache__DOT__miss__DOT__entries_13_snoopDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__snoopDoneNext_13));
    vlSelf->DCache__DOT__miss__DOT__entries_12_snoopDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__snoopDoneNext_12));
    vlSelf->DCache__DOT__miss__DOT__entries_5_snoopDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__snoopDoneNext_5));
    vlSelf->DCache__DOT__miss__DOT__entries_4_snoopDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__snoopDoneNext_4));
    vlSelf->DCache__DOT__miss__DOT__entries_3_snoopDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__snoopDoneNext_3));
    vlSelf->DCache__DOT__miss__DOT__entries_1_snoopDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__snoopDoneNext_1));
    vlSelf->DCache__DOT__miss__DOT__entries_2_snoopDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__snoopDoneNext_2));
    vlSelf->DCache__DOT__miss__DOT__entries_0_snoopDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__snoopDoneNext));
    vlSelf->DCache__DOT__miss__DOT__entries_6_snoopDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__snoopDoneNext_6));
    vlSelf->DCache__DOT__miss__DOT__entries_7_snoopDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__snoopDoneNext_7));
    vlSelf->DCache__DOT__miss__DOT__entries_8_snoopDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__snoopDoneNext_8));
    vlSelf->DCache__DOT__miss__DOT__entries_9_snoopDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__snoopDoneNext_9));
    vlSelf->DCache__DOT__miss__DOT__entries_10_snoopDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__snoopDoneNext_10));
    vlSelf->DCache__DOT__miss__DOT__entries_11_snoopDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__snoopDoneNext_11));
    vlSelf->DCache__DOT__miss__DOT__entries_10_traceTag 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->DCache__DOT__miss__DOT__rxd_10)
                                          ? ((IData)(vlSelf->DCache__DOT__miss__DOT__seen_10)
                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2445)
                                              : (IData)(vlSelf->io_l2_rxDat_bits_traceTag))
                                          : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2445)));
    vlSelf->DCache__DOT__miss__DOT__entries_15_traceTag 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->DCache__DOT__miss__DOT__rxd_15)
                                          ? ((IData)(vlSelf->DCache__DOT__miss__DOT__seen_15)
                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3440)
                                              : (IData)(vlSelf->io_l2_rxDat_bits_traceTag))
                                          : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3440)));
    vlSelf->DCache__DOT__miss__DOT__entries_9_traceTag 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->DCache__DOT__miss__DOT__rxd_9)
                                          ? ((IData)(vlSelf->DCache__DOT__miss__DOT__seen_9)
                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2246)
                                              : (IData)(vlSelf->io_l2_rxDat_bits_traceTag))
                                          : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2246)));
    vlSelf->DCache__DOT__miss__DOT__entries_14_traceTag 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->DCache__DOT__miss__DOT__rxd_14)
                                          ? ((IData)(vlSelf->DCache__DOT__miss__DOT__seen_14)
                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3241)
                                              : (IData)(vlSelf->io_l2_rxDat_bits_traceTag))
                                          : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3241)));
    vlSelf->DCache__DOT__miss__DOT__entries_8_traceTag 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->DCache__DOT__miss__DOT__rxd_8)
                                          ? ((IData)(vlSelf->DCache__DOT__miss__DOT__seen_8)
                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2047)
                                              : (IData)(vlSelf->io_l2_rxDat_bits_traceTag))
                                          : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2047)));
    vlSelf->DCache__DOT__miss__DOT__entries_0_traceTag 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->DCache__DOT__miss__DOT__rxd)
                                          ? ((IData)(vlSelf->DCache__DOT__miss__DOT__seen)
                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_455)
                                              : (IData)(vlSelf->io_l2_rxDat_bits_traceTag))
                                          : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_455)));
    vlSelf->DCache__DOT__miss__DOT__entries_11_traceTag 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->DCache__DOT__miss__DOT__rxd_11)
                                          ? ((IData)(vlSelf->DCache__DOT__miss__DOT__seen_11)
                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2644)
                                              : (IData)(vlSelf->io_l2_rxDat_bits_traceTag))
                                          : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2644)));
    vlSelf->DCache__DOT__miss__DOT__entries_12_traceTag 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->DCache__DOT__miss__DOT__rxd_12)
                                          ? ((IData)(vlSelf->DCache__DOT__miss__DOT__seen_12)
                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2843)
                                              : (IData)(vlSelf->io_l2_rxDat_bits_traceTag))
                                          : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2843)));
    vlSelf->DCache__DOT__miss__DOT__entries_2_traceTag 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->DCache__DOT__miss__DOT__rxd_2)
                                          ? ((IData)(vlSelf->DCache__DOT__miss__DOT__seen_2)
                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_853)
                                              : (IData)(vlSelf->io_l2_rxDat_bits_traceTag))
                                          : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_853)));
    vlSelf->DCache__DOT__miss__DOT__entries_5_traceTag 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->DCache__DOT__miss__DOT__rxd_5)
                                          ? ((IData)(vlSelf->DCache__DOT__miss__DOT__seen_5)
                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1450)
                                              : (IData)(vlSelf->io_l2_rxDat_bits_traceTag))
                                          : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1450)));
    vlSelf->DCache__DOT__miss__DOT__entries_3_traceTag 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->DCache__DOT__miss__DOT__rxd_3)
                                          ? ((IData)(vlSelf->DCache__DOT__miss__DOT__seen_3)
                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1052)
                                              : (IData)(vlSelf->io_l2_rxDat_bits_traceTag))
                                          : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1052)));
    vlSelf->DCache__DOT__miss__DOT__entries_6_traceTag 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->DCache__DOT__miss__DOT__rxd_6)
                                          ? ((IData)(vlSelf->DCache__DOT__miss__DOT__seen_6)
                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1649)
                                              : (IData)(vlSelf->io_l2_rxDat_bits_traceTag))
                                          : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1649)));
    vlSelf->DCache__DOT__miss__DOT__entries_13_traceTag 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->DCache__DOT__miss__DOT__rxd_13)
                                          ? ((IData)(vlSelf->DCache__DOT__miss__DOT__seen_13)
                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3042)
                                              : (IData)(vlSelf->io_l2_rxDat_bits_traceTag))
                                          : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3042)));
    vlSelf->DCache__DOT__miss__DOT__entries_4_traceTag 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->DCache__DOT__miss__DOT__rxd_4)
                                          ? ((IData)(vlSelf->DCache__DOT__miss__DOT__seen_4)
                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1251)
                                              : (IData)(vlSelf->io_l2_rxDat_bits_traceTag))
                                          : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1251)));
    vlSelf->DCache__DOT__miss__DOT__entries_7_traceTag 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->DCache__DOT__miss__DOT__rxd_7)
                                          ? ((IData)(vlSelf->DCache__DOT__miss__DOT__seen_7)
                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1848)
                                              : (IData)(vlSelf->io_l2_rxDat_bits_traceTag))
                                          : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1848)));
    vlSelf->DCache__DOT__miss__DOT__entries_1_traceTag 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->DCache__DOT__miss__DOT__rxd_1)
                                          ? ((IData)(vlSelf->DCache__DOT__miss__DOT__seen_1)
                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_654)
                                              : (IData)(vlSelf->io_l2_rxDat_bits_traceTag))
                                          : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_654)));
    vlSelf->DCache__DOT__miss__DOT__entries_15_replaySent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__replayNext_15));
    vlSelf->DCache__DOT__miss__DOT__entries_15_wakeSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__wakeNext_15));
    vlSelf->DCache__DOT__miss__DOT__entries_15_compackDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__compackNext_15));
    vlSelf->DCache__DOT__miss__DOT__entries_14_replaySent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__replayNext_14));
    vlSelf->DCache__DOT__miss__DOT__entries_13_replaySent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__replayNext_13));
    vlSelf->DCache__DOT__miss__DOT__entries_12_replaySent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__replayNext_12));
    vlSelf->DCache__DOT__miss__DOT__entries_9_wakeSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__wakeNext_9));
    vlSelf->DCache__DOT__miss__DOT__entries_14_wakeSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__wakeNext_14));
    vlSelf->DCache__DOT__miss__DOT__entries_8_wakeSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__wakeNext_8));
    vlSelf->DCache__DOT__miss__DOT__entries_13_wakeSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__wakeNext_13));
    vlSelf->DCache__DOT__miss__DOT__entries_3_wakeSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__wakeNext_3));
    vlSelf->DCache__DOT__miss__DOT__entries_5_replaySent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__replayNext_5));
    vlSelf->DCache__DOT__miss__DOT__entries_4_wakeSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__wakeNext_4));
    vlSelf->DCache__DOT__miss__DOT__entries_10_wakeSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__wakeNext_10));
    vlSelf->DCache__DOT__miss__DOT__entries_6_wakeSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__wakeNext_6));
    vlSelf->DCache__DOT__miss__DOT__entries_5_wakeSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__wakeNext_5));
    vlSelf->DCache__DOT__miss__DOT__entries_3_replaySent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__replayNext_3));
    vlSelf->DCache__DOT__miss__DOT__entries_4_replaySent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__replayNext_4));
    vlSelf->DCache__DOT__miss__DOT__entries_12_wakeSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__wakeNext_12));
    vlSelf->DCache__DOT__miss__DOT__entries_2_wakeSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__wakeNext_2));
    vlSelf->DCache__DOT__miss__DOT__entries_2_replaySent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__replayNext_2));
    vlSelf->DCache__DOT__miss__DOT__entries_7_wakeSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__wakeNext_7));
    vlSelf->DCache__DOT__miss__DOT__entries_0_replaySent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__replayNext));
    vlSelf->DCache__DOT__miss__DOT__entries_6_replaySent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__replayNext_6));
    vlSelf->DCache__DOT__miss__DOT__entries_11_wakeSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__wakeNext_11));
    vlSelf->DCache__DOT__miss__DOT__entries_1_wakeSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__wakeNext_1));
    vlSelf->DCache__DOT__miss__DOT__entries_7_replaySent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__replayNext_7));
    vlSelf->DCache__DOT__miss__DOT__entries_8_replaySent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__replayNext_8));
    vlSelf->DCache__DOT__miss__DOT__entries_9_replaySent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__replayNext_9));
    vlSelf->DCache__DOT__miss__DOT__entries_10_replaySent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__replayNext_10));
    vlSelf->DCache__DOT__miss__DOT__entries_0_wakeSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__wakeNext));
    vlSelf->DCache__DOT__miss__DOT__entries_11_replaySent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__replayNext_11));
    vlSelf->DCache__DOT__miss__DOT__entries_1_replaySent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__replayNext_1));
    vlSelf->DCache__DOT__miss__DOT__entries_14_compackDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__compackNext_14));
    vlSelf->DCache__DOT__miss__DOT__entries_13_compackDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__compackNext_13));
    vlSelf->DCache__DOT__miss__DOT__entries_12_compackDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__compackNext_12));
    vlSelf->DCache__DOT__miss__DOT__entries_4_compackDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__compackNext_4));
    vlSelf->DCache__DOT__miss__DOT__entries_3_compackDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__compackNext_3));
    vlSelf->DCache__DOT__miss__DOT__entries_5_compackDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__compackNext_5));
    vlSelf->DCache__DOT__miss__DOT__entries_2_compackDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__compackNext_2));
    vlSelf->DCache__DOT__miss__DOT__entries_0_compackDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__compackNext));
    vlSelf->DCache__DOT__miss__DOT__entries_6_compackDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__compackNext_6));
    vlSelf->DCache__DOT__miss__DOT__entries_1_compackDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__compackNext_1));
    vlSelf->DCache__DOT__miss__DOT__entries_7_compackDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__compackNext_7));
    vlSelf->DCache__DOT__miss__DOT__entries_8_compackDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__compackNext_8));
    vlSelf->DCache__DOT__miss__DOT__entries_9_compackDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__compackNext_9));
    vlSelf->DCache__DOT__miss__DOT__entries_10_compackDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__compackNext_10));
    vlSelf->DCache__DOT__miss__DOT__entries_11_compackDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__compackNext_11));
    vlSelf->DCache__DOT__wb__DOT__entries_17_dataSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__dataSentNext_17));
    vlSelf->DCache__DOT__miss__DOT__entries_15_clients_7_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h146f6354__0) 
                                          & (7U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hfc9b4929__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3608))));
    vlSelf->DCache__DOT__wb__DOT__entries_16_dataSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__dataSentNext_16));
    vlSelf->DCache__DOT__wb__DOT__entries_6_dataSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__dataSentNext_6));
    vlSelf->DCache__DOT__wb__DOT__entries_1_dataSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__dataSentNext_1));
    vlSelf->DCache__DOT__wb__DOT__entries_2_dataSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__dataSentNext_2));
    vlSelf->DCache__DOT__wb__DOT__entries_5_dataSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__dataSentNext_5));
    vlSelf->DCache__DOT__wb__DOT__entries_4_dataSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__dataSentNext_4));
    vlSelf->DCache__DOT__wb__DOT__entries_3_dataSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__dataSentNext_3));
    vlSelf->DCache__DOT__wb__DOT__entries_7_dataSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__dataSentNext_7));
    vlSelf->DCache__DOT__wb__DOT__entries_8_dataSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__dataSentNext_8));
    vlSelf->DCache__DOT__wb__DOT__entries_9_dataSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__dataSentNext_9));
    vlSelf->DCache__DOT__wb__DOT__entries_10_dataSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__dataSentNext_10));
    vlSelf->DCache__DOT__wb__DOT__entries_11_dataSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__dataSentNext_11));
    vlSelf->DCache__DOT__wb__DOT__entries_0_dataSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__dataSentNext));
    vlSelf->DCache__DOT__wb__DOT__entries_12_dataSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__dataSentNext_12));
    vlSelf->DCache__DOT__wb__DOT__entries_13_dataSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__dataSentNext_13));
    vlSelf->DCache__DOT__wb__DOT__entries_14_dataSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__dataSentNext_14));
    vlSelf->DCache__DOT__wb__DOT__entries_15_dataSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__dataSentNext_15));
    if (((IData)(vlSelf->DCache__DOT__tags__DOT__arrays_1__DOT__banks_0__DOT__tagSram_io_r_en) 
         & (~ (IData)(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_0__DOT__tagSram__DOT__mem_0_MPORT_1_en)))) {
        vlSelf->DCache__DOT__tags__DOT__arrays_1__DOT__banks_0__DOT__tagSram__DOT__mem_0_MPORT_addr_pipe_0 
            = (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                >> 6U)));
    }
    vlSelf->DCache__DOT__miss__DOT__entries_15_clients_6_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h146f6354__0) 
                                          & (6U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hf639fed8__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3596))));
    vlSelf->DCache__DOT__miss__DOT__entries_15_clients_5_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h146f6354__0) 
                                          & (5U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h3b924bcf__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3584))));
    vlSelf->DCache__DOT__miss__DOT__entries_15_clients_3_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h146f6354__0) 
                                          & (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hf3c118e5__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3560))));
    vlSelf->DCache__DOT__miss__DOT__entries_15_clients_1_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h146f6354__0) 
                                          & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hf5e72c32__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3536))));
    vlSelf->DCache__DOT__miss__DOT__entries_15_clients_4_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h146f6354__0) 
                                          & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h3b6e9e2f__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3572))));
    vlSelf->DCache__DOT__miss__DOT__entries_15_clients_0_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h146f6354__0) 
                                          & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hf5e31387__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3524))));
    vlSelf->DCache__DOT__miss__DOT__entries_15_clients_2_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h146f6354__0) 
                                          & (2U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hf5eb32fd__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3548))));
    if (((IData)(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_0__DOT__tagSram_io_r_en) 
         & (~ (IData)(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_0__DOT__tagSram__DOT__mem_0_MPORT_1_en)))) {
        vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_0__DOT__tagSram__DOT__mem_1_MPORT_addr_pipe_0 
            = (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                >> 6U)));
    }
    if (((IData)(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_1__DOT__tagSram_io_r_en) 
         & (~ (IData)(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_1__DOT__tagSram__DOT__mem_0_MPORT_1_en)))) {
        vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_1__DOT__tagSram__DOT__mem_1_MPORT_addr_pipe_0 
            = (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                >> 6U)));
    }
    vlSelf->DCache__DOT__wb__DOT__entries_16_dataReady 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__busyNext_16));
    vlSelf->DCache__DOT__wb__DOT__entries_0_dataReady 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__busyNext));
    vlSelf->DCache__DOT__wb__DOT__entries_5_dataReady 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__busyNext_5));
    vlSelf->DCache__DOT__wb__DOT__entries_4_dataReady 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__busyNext_4));
    vlSelf->DCache__DOT__wb__DOT__entries_6_dataReady 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__busyNext_6));
    vlSelf->DCache__DOT__wb__DOT__entries_2_dataReady 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__busyNext_2));
    vlSelf->DCache__DOT__wb__DOT__entries_1_dataReady 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__busyNext_1));
    vlSelf->DCache__DOT__wb__DOT__entries_3_dataReady 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__busyNext_3));
    vlSelf->DCache__DOT__wb__DOT__entries_7_dataReady 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__busyNext_7));
    vlSelf->DCache__DOT__wb__DOT__entries_8_dataReady 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__busyNext_8));
    vlSelf->DCache__DOT__wb__DOT__entries_9_dataReady 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__busyNext_9));
    vlSelf->DCache__DOT__wb__DOT__entries_10_dataReady 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__busyNext_10));
    vlSelf->DCache__DOT__wb__DOT__entries_11_dataReady 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__busyNext_11));
    vlSelf->DCache__DOT__wb__DOT__entries_12_dataReady 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__busyNext_12));
    vlSelf->DCache__DOT__wb__DOT__entries_13_dataReady 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__busyNext_13));
    vlSelf->DCache__DOT__wb__DOT__entries_14_dataReady 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__busyNext_14));
    vlSelf->DCache__DOT__wb__DOT__entries_15_dataReady 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__wb__DOT__busyNext_15));
    vlSelf->DCache__DOT__wb__DOT__datHold = ((~ (IData)(vlSelf->reset)) 
                                             & ((~ 
                                                 ((IData)(vlSelf->DCache__DOT__wb__DOT___T_2) 
                                                  & (1U 
                                                     == (IData)(vlSelf->DCache__DOT__wb__DOT___GEN_215)))) 
                                                & (IData)(vlSelf->DCache__DOT__wb__DOT___GEN_368)));
    vlSelf->DCache__DOT__miss__DOT__entries_3_clients_0_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1753f479__0) 
                                          & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h831d776e__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1136))));
    vlSelf->DCache__DOT__miss__DOT__entries_0_clients_4_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1722d750__0) 
                                          & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h5a922a2e__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_587))));
    vlSelf->DCache__DOT__miss__DOT__entries_0_clients_3_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1722d750__0) 
                                          & (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1374afe8__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_575))));
    vlSelf->DCache__DOT__miss__DOT__entries_2_clients_4_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1714979d__0) 
                                          & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hff4e746b__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_985))));
    vlSelf->DCache__DOT__miss__DOT__entries_0_clients_5_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1722d750__0) 
                                          & (5U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h5a87dc0e__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_599))));
    vlSelf->DCache__DOT__miss__DOT__entries_2_clients_7_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1714979d__0) 
                                          & (7U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h2455296d__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1021))));
    vlSelf->DCache__DOT__miss__DOT__entries_2_clients_0_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1714979d__0) 
                                          & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h2dcd87f3__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_937))));
    vlSelf->DCache__DOT__miss__DOT__entries_0_clients_6_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1722d750__0) 
                                          & (6U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h093b091d__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_611))));
    vlSelf->DCache__DOT__miss__DOT__entries_0_clients_2_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1722d750__0) 
                                          & (2U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h096e55f0__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_563))));
    vlSelf->DCache__DOT__miss__DOT__entries_0_clients_7_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1722d750__0) 
                                          & (7U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h139edf2c__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_623))));
    vlSelf->DCache__DOT__miss__DOT__entries_2_clients_5_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1714979d__0) 
                                          & (5U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hff5a2e4b__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_997))));
    vlSelf->DCache__DOT__miss__DOT__entries_2_clients_6_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1714979d__0) 
                                          & (6U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h2db754be__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1009))));
    vlSelf->DCache__DOT__miss__DOT__entries_1_clients_2_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14b269b5__0) 
                                          & (2U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hecdc3629__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_762))));
    vlSelf->DCache__DOT__miss__DOT__entries_1_clients_3_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14b269b5__0) 
                                          & (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hd2c66031__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_774))));
    vlSelf->DCache__DOT__miss__DOT__entries_1_clients_4_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14b269b5__0) 
                                          & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1959e57f__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_786))));
    vlSelf->DCache__DOT__miss__DOT__entries_1_clients_5_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14b269b5__0) 
                                          & (5U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1975af1f__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_798))));
    vlSelf->DCache__DOT__miss__DOT__entries_1_clients_6_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14b269b5__0) 
                                          & (6U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hec010202__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_810))));
    vlSelf->DCache__DOT__miss__DOT__entries_1_clients_7_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14b269b5__0) 
                                          & (7U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hd26cb07d__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_822))));
    vlSelf->DCache__DOT__miss__DOT__entries_2_clients_1_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1714979d__0) 
                                          & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h2dc98648__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_949))));
    vlSelf->DCache__DOT__miss__DOT__entries_2_clients_2_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1714979d__0) 
                                          & (2U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h2dc5a099__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_961))));
    vlSelf->DCache__DOT__miss__DOT__entries_2_clients_3_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1714979d__0) 
                                          & (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h27effa91__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_973))));
    vlSelf->DCache__DOT__miss__DOT__entries_0_clients_0_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1722d750__0) 
                                          & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h0916b4d6__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_539))));
    vlSelf->DCache__DOT__miss__DOT__entries_0_clients_1_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1722d750__0) 
                                          & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h091ab403__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_551))));
    vlSelf->DCache__DOT__miss__DOT__entries_1_clients_0_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14b269b5__0) 
                                          & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hece456d7__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_738))));
    vlSelf->DCache__DOT__miss__DOT__entries_1_clients_1_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14b269b5__0) 
                                          & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hece05718__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_750))));
    vlSelf->DCache__DOT__miss__DOT__entries_5_clients_2_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h176774c3__0) 
                                          & (2U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h5dc88639__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1558))));
    vlSelf->DCache__DOT__miss__DOT__entries_4_clients_2_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h175e7662__0) 
                                          & (2U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hb6e6927e__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1359))));
    vlSelf->DCache__DOT__miss__DOT__entries_4_clients_1_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h175e7662__0) 
                                          & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hb6fa734f__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1347))));
    vlSelf->DCache__DOT__miss__DOT__entries_3_clients_3_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1753f479__0) 
                                          & (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h993f6288__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1172))));
    vlSelf->DCache__DOT__miss__DOT__entries_3_clients_2_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1753f479__0) 
                                          & (2U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h83151480__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1160))));
    vlSelf->DCache__DOT__miss__DOT__entries_3_clients_1_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1753f479__0) 
                                          & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h830177b1__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1148))));
    vlSelf->DCache__DOT__miss__DOT__entries_7_clients_2_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14c6a820__0) 
                                          & (2U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hfd9583e2__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1956))));
    vlSelf->DCache__DOT__miss__DOT__entries_5_clients_0_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h176774c3__0) 
                                          & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h5dc0f95f__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1534))));
    vlSelf->DCache__DOT__miss__DOT__entries_5_clients_3_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h176774c3__0) 
                                          & (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h53e2ec31__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1570))));
    vlSelf->DCache__DOT__miss__DOT__entries_6_clients_3_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14fa7e0e__0) 
                                          & (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hfc86e71b__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1769))));
    vlSelf->DCache__DOT__miss__DOT__entries_6_clients_2_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14fa7e0e__0) 
                                          & (2U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_he69b1913__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1757))));
    vlSelf->DCache__DOT__miss__DOT__entries_4_clients_4_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h175e7662__0) 
                                          & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h8062c52c__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1383))));
    vlSelf->DCache__DOT__miss__DOT__entries_4_clients_3_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h175e7662__0) 
                                          & (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h48804876__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1371))));
    vlSelf->DCache__DOT__miss__DOT__entries_6_clients_4_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14fa7e0e__0) 
                                          & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hb5276ae5__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1781))));
    vlSelf->DCache__DOT__miss__DOT__entries_5_clients_1_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h176774c3__0) 
                                          & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h5ddcf90a__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1546))));
    vlSelf->DCache__DOT__miss__DOT__entries_5_clients_6_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h176774c3__0) 
                                          & (6U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h5dba4a24__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1606))));
    vlSelf->DCache__DOT__miss__DOT__entries_6_clients_6_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14fa7e0e__0) 
                                          & (6U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_he6ce4528__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1805))));
    vlSelf->DCache__DOT__miss__DOT__entries_6_clients_1_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14fa7e0e__0) 
                                          & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_he6acf8c2__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1745))));
    vlSelf->DCache__DOT__miss__DOT__entries_5_clients_4_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h176774c3__0) 
                                          & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h6b436af7__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1582))));
    vlSelf->DCache__DOT__miss__DOT__entries_4_clients_6_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h175e7662__0) 
                                          & (6U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hb6d9a661__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1407))));
    vlSelf->DCache__DOT__miss__DOT__entries_4_clients_7_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h175e7662__0) 
                                          & (7U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h49761832__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1419))));
    vlSelf->DCache__DOT__miss__DOT__entries_6_clients_0_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14fa7e0e__0) 
                                          & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_he6a0f87d__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1733))));
    vlSelf->DCache__DOT__miss__DOT__entries_4_clients_5_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h175e7662__0) 
                                          & (5U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h804d1b4c__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1395))));
    vlSelf->DCache__DOT__miss__DOT__entries_3_clients_4_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1753f479__0) 
                                          & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hd699e1d6__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1184))));
    vlSelf->DCache__DOT__miss__DOT__entries_7_clients_0_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14c6a820__0) 
                                          & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hfd9c62c8__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1932))));
    vlSelf->DCache__DOT__miss__DOT__entries_3_clients_5_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1753f479__0) 
                                          & (5U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hd68d9fb6__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1196))));
    vlSelf->DCache__DOT__miss__DOT__entries_7_clients_1_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14c6a820__0) 
                                          & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hfd806215__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1944))));
    vlSelf->DCache__DOT__miss__DOT__entries_3_clients_6_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1753f479__0) 
                                          & (6U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h83e6c09b__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1208))));
    vlSelf->DCache__DOT__miss__DOT__entries_3_clients_7_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1753f479__0) 
                                          & (7U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h998492d4__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1220))));
    vlSelf->DCache__DOT__miss__DOT__entries_4_clients_0_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h175e7662__0) 
                                          & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hb6fe7394__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1335))));
    vlSelf->DCache__DOT__miss__DOT__entries_5_clients_5_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h176774c3__0) 
                                          & (5U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h6b2f1117__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1594))));
    vlSelf->DCache__DOT__miss__DOT__entries_5_clients_7_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h176774c3__0) 
                                          & (7U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h52581ff5__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1618))));
    vlSelf->DCache__DOT__miss__DOT__entries_6_clients_5_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14fa7e0e__0) 
                                          & (5U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hb53390c5__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1793))));
    vlSelf->DCache__DOT__miss__DOT__entries_6_clients_7_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14fa7e0e__0) 
                                          & (7U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hfc2897e7__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1817))));
    vlSelf->DCache__DOT__miss__DOT__entries_10_clients_0_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14ebc3d4__0) 
                                          & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h5c7649fe__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2529))));
    vlSelf->DCache__DOT__miss__DOT__entries_9_clients_4_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1448f19d__0) 
                                          & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hd095bfa2__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2378))));
    vlSelf->DCache__DOT__miss__DOT__entries_9_clients_3_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1448f19d__0) 
                                          & (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h183332d8__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2366))));
    vlSelf->DCache__DOT__miss__DOT__entries_9_clients_2_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1448f19d__0) 
                                          & (2U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h0619e8d0__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2354))));
    vlSelf->DCache__DOT__miss__DOT__entries_9_clients_1_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1448f19d__0) 
                                          & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h066dc987__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2342))));
    vlSelf->DCache__DOT__miss__DOT__entries_9_clients_0_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1448f19d__0) 
                                          & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h0611c93a__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2330))));
    vlSelf->DCache__DOT__miss__DOT__entries_8_clients_6_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h17006928__0) 
                                          & (6U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hb24616ae__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2203))));
    vlSelf->DCache__DOT__miss__DOT__entries_8_clients_4_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h17006928__0) 
                                          & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h473ee9db__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2179))));
    vlSelf->DCache__DOT__miss__DOT__entries_8_clients_3_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h17006928__0) 
                                          & (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h889f7481__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2167))));
    vlSelf->DCache__DOT__miss__DOT__entries_8_clients_2_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h17006928__0) 
                                          & (2U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hb2b55a89__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2155))));
    vlSelf->DCache__DOT__miss__DOT__entries_8_clients_1_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h17006928__0) 
                                          & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hb2a17bb8__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2143))));
    vlSelf->DCache__DOT__miss__DOT__entries_8_clients_0_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h17006928__0) 
                                          & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hb2bd7b63__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2131))));
    vlSelf->DCache__DOT__miss__DOT__entries_7_clients_6_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14c6a820__0) 
                                          & (6U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hfde6b7ff__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2004))));
    vlSelf->DCache__DOT__miss__DOT__entries_7_clients_4_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14c6a820__0) 
                                          & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_haf19d030__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1980))));
    vlSelf->DCache__DOT__miss__DOT__entries_7_clients_3_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14c6a820__0) 
                                          & (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_he7be55ea__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1968))));
    vlSelf->DCache__DOT__miss__DOT__entries_10_clients_7_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14ebc3d4__0) 
                                          & (7U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h67ceec58__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2613))));
    vlSelf->DCache__DOT__miss__DOT__entries_10_clients_4_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14ebc3d4__0) 
                                          & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_haef23b56__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2577))));
    vlSelf->DCache__DOT__miss__DOT__entries_10_clients_1_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14ebc3d4__0) 
                                          & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h5c4a49b5__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2541))));
    vlSelf->DCache__DOT__miss__DOT__entries_10_clients_3_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14ebc3d4__0) 
                                          & (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h6610bc9c__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2565))));
    vlSelf->DCache__DOT__miss__DOT__entries_9_clients_6_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1448f19d__0) 
                                          & (6U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h064a9ced__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2402))));
    vlSelf->DCache__DOT__miss__DOT__entries_10_clients_2_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14ebc3d4__0) 
                                          & (2U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h5c7e66e4__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2553))));
    vlSelf->DCache__DOT__miss__DOT__entries_11_clients_0_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14bec87a__0) 
                                          & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1407ce0b__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2728))));
    vlSelf->DCache__DOT__miss__DOT__entries_11_clients_1_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14bec87a__0) 
                                          & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1403ce56__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2740))));
    vlSelf->DCache__DOT__miss__DOT__entries_11_clients_2_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14bec87a__0) 
                                          & (2U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h17ffaf21__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2752))));
    vlSelf->DCache__DOT__miss__DOT__entries_11_clients_3_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14bec87a__0) 
                                          & (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h11d9c129__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2764))));
    vlSelf->DCache__DOT__miss__DOT__entries_11_clients_4_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14bec87a__0) 
                                          & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h597b5c73__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2776))));
    vlSelf->DCache__DOT__miss__DOT__entries_10_clients_6_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14ebc3d4__0) 
                                          & (6U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h5dab1a8b__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2601))));
    vlSelf->DCache__DOT__miss__DOT__entries_7_clients_5_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14c6a820__0) 
                                          & (5U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_haf0d0a10__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1992))));
    vlSelf->DCache__DOT__miss__DOT__entries_7_clients_7_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14c6a820__0) 
                                          & (7U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_he404052e__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2016))));
    vlSelf->DCache__DOT__miss__DOT__entries_8_clients_5_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h17006928__0) 
                                          & (5U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h40d2a3bb__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2191))));
    vlSelf->DCache__DOT__miss__DOT__entries_8_clients_7_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h17006928__0) 
                                          & (7U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h8825a4dd__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2215))));
    vlSelf->DCache__DOT__miss__DOT__entries_9_clients_5_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1448f19d__0) 
                                          & (5U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hd0fe6182__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2390))));
    vlSelf->DCache__DOT__miss__DOT__entries_9_clients_7_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1448f19d__0) 
                                          & (7U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h19e9629c__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2414))));
    vlSelf->DCache__DOT__miss__DOT__entries_10_clients_5_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14ebc3d4__0) 
                                          & (5U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_haec7f1b6__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2589))));
    vlSelf->DCache__DOT__miss__DOT__entries_14_clients_7_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14628b41__0) 
                                          & (7U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h13328eaa__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3409))));
    vlSelf->DCache__DOT__miss__DOT__entries_14_clients_6_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14628b41__0) 
                                          & (6U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1550505d__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3397))));
    vlSelf->DCache__DOT__miss__DOT__entries_14_clients_5_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14628b41__0) 
                                          & (5U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hd83b8d48__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3385))));
    vlSelf->DCache__DOT__miss__DOT__entries_14_clients_3_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14628b41__0) 
                                          & (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h10e8fe6e__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3361))));
    vlSelf->DCache__DOT__miss__DOT__entries_14_clients_1_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14628b41__0) 
                                          & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h2a8ee5b7__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3337))));
    vlSelf->DCache__DOT__miss__DOT__entries_13_clients_7_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14c4bb23__0) 
                                          & (7U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hce88924f__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3210))));
    vlSelf->DCache__DOT__miss__DOT__entries_13_clients_6_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14c4bb23__0) 
                                          & (6U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hf12a241e__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3198))));
    vlSelf->DCache__DOT__miss__DOT__entries_13_clients_5_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14c4bb23__0) 
                                          & (5U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h87878f31__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3186))));
    vlSelf->DCache__DOT__miss__DOT__entries_13_clients_3_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14c4bb23__0) 
                                          & (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hcf52c20b__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3162))));
    vlSelf->DCache__DOT__miss__DOT__entries_13_clients_1_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14c4bb23__0) 
                                          & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hf174f734__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3138))));
    vlSelf->DCache__DOT__miss__DOT__entries_12_clients_7_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14bdf04a__0) 
                                          & (7U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_ha8c8b60f__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3011))));
    vlSelf->DCache__DOT__miss__DOT__entries_12_clients_6_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14bdf04a__0) 
                                          & (6U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_ha276e3fe__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2999))));
    vlSelf->DCache__DOT__miss__DOT__entries_12_clients_5_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14bdf04a__0) 
                                          & (5U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hf7c348ed__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2987))));
    vlSelf->DCache__DOT__miss__DOT__entries_12_clients_3_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14bdf04a__0) 
                                          & (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hafbe05cb__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2963))));
    vlSelf->DCache__DOT__miss__DOT__entries_12_clients_1_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14bdf04a__0) 
                                          & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_ha25410e0__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2939))));
    vlSelf->DCache__DOT__miss__DOT__entries_14_clients_2_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14628b41__0) 
                                          & (2U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h2a830466__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3349))));
    vlSelf->DCache__DOT__miss__DOT__entries_14_clients_0_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14628b41__0) 
                                          & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h2a8ae500__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3325))));
    vlSelf->DCache__DOT__miss__DOT__entries_13_clients_2_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14c4bb23__0) 
                                          & (2U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hf17f1803__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3150))));
    vlSelf->DCache__DOT__miss__DOT__entries_13_clients_0_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14c4bb23__0) 
                                          & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hf170f8e9__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3126))));
    vlSelf->DCache__DOT__miss__DOT__entries_11_clients_7_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14bec87a__0) 
                                          & (7U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1e80116d__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2812))));
    vlSelf->DCache__DOT__miss__DOT__entries_14_clients_4_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14628b41__0) 
                                          & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hd80773a8__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3373))));
    vlSelf->DCache__DOT__miss__DOT__entries_13_clients_4_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14c4bb23__0) 
                                          & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h87f34551__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3174))));
    vlSelf->DCache__DOT__miss__DOT__entries_12_clients_2_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14bdf04a__0) 
                                          & (2U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_ha2583fd3__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2951))));
    vlSelf->DCache__DOT__miss__DOT__entries_12_clients_0_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14bdf04a__0) 
                                          & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_ha25010b5__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2927))));
    vlSelf->DCache__DOT__miss__DOT__entries_12_clients_4_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14bdf04a__0) 
                                          & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hf7df830d__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2975))));
    vlSelf->DCache__DOT__miss__DOT__entries_11_clients_6_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14bec87a__0) 
                                          & (6U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1422633c__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2800))));
    vlSelf->DCache__DOT__miss__DOT__entries_11_clients_5_sent 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h14bec87a__0) 
                                          & (5U == (IData)(vlSelf->DCache__DOT__miss__DOT__storeSlot))) 
                                         | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h59971653__0)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2788))));
    vlSelf->DCache__DOT__probe__DOT__pause = ((~ (IData)(vlSelf->reset)) 
                                              & (IData)(vlSelf->DCache__DOT__pipe_io_update_resv_set));
    vlSelf->DCache__DOT__pipe__DOT__sent_4 = ((~ (IData)(vlSelf->reset)) 
                                              & ((~ (IData)(vlSelf->DCache__DOT__pipe__DOT__s2_fire)) 
                                                 & (IData)(vlSelf->DCache__DOT__pipe__DOT___GEN_227)));
    vlSelf->DCache__DOT__pipe__DOT__sent_5 = ((~ (IData)(vlSelf->reset)) 
                                              & ((~ (IData)(vlSelf->DCache__DOT__pipe__DOT__s2_fire)) 
                                                 & (IData)(vlSelf->DCache__DOT__pipe__DOT___GEN_228)));
    vlSelf->DCache__DOT__pipe__DOT__sent_6 = ((~ (IData)(vlSelf->reset)) 
                                              & ((~ (IData)(vlSelf->DCache__DOT__pipe__DOT__s2_fire)) 
                                                 & (IData)(vlSelf->DCache__DOT__pipe__DOT___GEN_229)));
    vlSelf->DCache__DOT__pipe__DOT__sent_8 = ((~ (IData)(vlSelf->reset)) 
                                              & ((~ (IData)(vlSelf->DCache__DOT__pipe__DOT__s2_fire)) 
                                                 & (IData)(vlSelf->DCache__DOT__pipe__DOT___GEN_230)));
    vlSelf->DCache__DOT__miss__DOT__entries_10_refillSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__refillSentNext_10));
    vlSelf->DCache__DOT__miss__DOT__entries_15_refillSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__refillSentNext_15));
    vlSelf->DCache__DOT__miss__DOT__entries_9_refillSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__refillSentNext_9));
    vlSelf->DCache__DOT__miss__DOT__entries_14_refillSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__refillSentNext_14));
    vlSelf->DCache__DOT__miss__DOT__entries_8_refillSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__refillSentNext_8));
    vlSelf->DCache__DOT__miss__DOT__entries_13_refillSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__refillSentNext_13));
    vlSelf->DCache__DOT__miss__DOT__entries_5_refillSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__refillSentNext_5));
    vlSelf->DCache__DOT__miss__DOT__entries_7_refillSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__refillSentNext_7));
    vlSelf->DCache__DOT__miss__DOT__entries_3_refillSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__refillSentNext_3));
    vlSelf->DCache__DOT__miss__DOT__entries_0_refillSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__refillSentNext));
    vlSelf->DCache__DOT__miss__DOT__entries_6_refillSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__refillSentNext_6));
    vlSelf->DCache__DOT__miss__DOT__entries_12_refillSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__refillSentNext_12));
    vlSelf->DCache__DOT__miss__DOT__entries_4_refillSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__refillSentNext_4));
    vlSelf->DCache__DOT__miss__DOT__entries_2_refillSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__refillSentNext_2));
    vlSelf->DCache__DOT__miss__DOT__entries_11_refillSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__refillSentNext_11));
    vlSelf->DCache__DOT__miss__DOT__entries_1_refillSent 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__refillSentNext_1));
    vlSelf->DCache__DOT__miss__DOT__entries_15_txreqDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__txreqNext_15));
    vlSelf->DCache__DOT__miss__DOT__entries_15_clients_7_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_15)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3609)));
    vlSelf->DCache__DOT__miss__DOT__entries_15_clients_6_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_15)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3597)));
    vlSelf->DCache__DOT__miss__DOT__entries_15_clients_3_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_15)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3561)));
    vlSelf->DCache__DOT__miss__DOT__entries_15_clients_2_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_15)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3549)));
    vlSelf->DCache__DOT__miss__DOT__entries_15_clients_1_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_15)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3537)));
    vlSelf->DCache__DOT__miss__DOT__entries_15_clients_0_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_15)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3525)));
    vlSelf->DCache__DOT__miss__DOT__entries_15_clients_5_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_15)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3585)));
    vlSelf->DCache__DOT__miss__DOT__entries_15_clients_4_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_15)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3573)));
    vlSelf->DCache__DOT__miss__DOT__entries_2_clients_7_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_2)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1022)));
    vlSelf->DCache__DOT__miss__DOT__entries_0_clients_7_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_624)));
    vlSelf->DCache__DOT__miss__DOT__entries_1_clients_7_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_1)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_823)));
    vlSelf->DCache__DOT__miss__DOT__entries_3_clients_7_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_3)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1221)));
    vlSelf->DCache__DOT__miss__DOT__entries_4_clients_7_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_4)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1420)));
    vlSelf->DCache__DOT__miss__DOT__entries_5_clients_7_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_5)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1619)));
    vlSelf->DCache__DOT__miss__DOT__entries_6_clients_7_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_6)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1818)));
    vlSelf->DCache__DOT__miss__DOT__entries_10_clients_7_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_10)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2614)));
    vlSelf->DCache__DOT__miss__DOT__entries_7_clients_7_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_7)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2017)));
    vlSelf->DCache__DOT__miss__DOT__entries_8_clients_7_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_8)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2216)));
    vlSelf->DCache__DOT__miss__DOT__entries_9_clients_7_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_9)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2415)));
    vlSelf->DCache__DOT__miss__DOT__entries_14_clients_7_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_14)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3410)));
    vlSelf->DCache__DOT__miss__DOT__entries_13_clients_7_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_13)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3211)));
    vlSelf->DCache__DOT__miss__DOT__entries_12_clients_7_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_12)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3012)));
    vlSelf->DCache__DOT__miss__DOT__entries_11_clients_7_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_11)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2813)));
    vlSelf->DCache__DOT__miss__DOT__entries_0_clients_3_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_576)));
    vlSelf->DCache__DOT__miss__DOT__entries_0_clients_5_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_600)));
    vlSelf->DCache__DOT__miss__DOT__entries_2_clients_6_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_2)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1010)));
    vlSelf->DCache__DOT__miss__DOT__entries_2_clients_5_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_2)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_998)));
    vlSelf->DCache__DOT__miss__DOT__entries_0_clients_6_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_612)));
    vlSelf->DCache__DOT__miss__DOT__entries_1_clients_5_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_1)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_799)));
    vlSelf->DCache__DOT__miss__DOT__entries_3_clients_0_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_3)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1137)));
    vlSelf->DCache__DOT__miss__DOT__entries_1_clients_6_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_1)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_811)));
    vlSelf->DCache__DOT__miss__DOT__entries_1_clients_3_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_1)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_775)));
    vlSelf->DCache__DOT__miss__DOT__entries_2_clients_4_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_2)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_986)));
    vlSelf->DCache__DOT__miss__DOT__entries_0_clients_4_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_588)));
    vlSelf->DCache__DOT__miss__DOT__entries_2_clients_1_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_2)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_950)));
    vlSelf->DCache__DOT__miss__DOT__entries_1_clients_4_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_1)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_787)));
    vlSelf->DCache__DOT__miss__DOT__entries_2_clients_2_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_2)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_962)));
    vlSelf->DCache__DOT__miss__DOT__entries_0_clients_1_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_552)));
    vlSelf->DCache__DOT__miss__DOT__entries_0_clients_2_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_564)));
    vlSelf->DCache__DOT__miss__DOT__entries_1_clients_0_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_1)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_739)));
    vlSelf->DCache__DOT__miss__DOT__entries_1_clients_1_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_1)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_751)));
    vlSelf->DCache__DOT__miss__DOT__entries_2_clients_3_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_2)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_974)));
    vlSelf->DCache__DOT__miss__DOT__entries_1_clients_2_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_1)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_763)));
    vlSelf->DCache__DOT__miss__DOT__entries_2_clients_0_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_2)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_938)));
    vlSelf->DCache__DOT__miss__DOT__entries_0_clients_0_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_540)));
    vlSelf->DCache__DOT__miss__DOT__entries_4_clients_6_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_4)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1408)));
    vlSelf->DCache__DOT__miss__DOT__entries_4_clients_5_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_4)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1396)));
    vlSelf->DCache__DOT__miss__DOT__entries_4_clients_4_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_4)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1384)));
    vlSelf->DCache__DOT__miss__DOT__entries_3_clients_6_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_3)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1209)));
    vlSelf->DCache__DOT__miss__DOT__entries_3_clients_5_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_3)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1197)));
    vlSelf->DCache__DOT__miss__DOT__entries_3_clients_4_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_3)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1185)));
    vlSelf->DCache__DOT__miss__DOT__entries_5_clients_3_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_5)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1571)));
    vlSelf->DCache__DOT__miss__DOT__entries_5_clients_2_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_5)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1559)));
    vlSelf->DCache__DOT__miss__DOT__entries_5_clients_1_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_5)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1547)));
    vlSelf->DCache__DOT__miss__DOT__entries_3_clients_1_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_3)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1149)));
    vlSelf->DCache__DOT__miss__DOT__entries_5_clients_0_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_5)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1535)));
    vlSelf->DCache__DOT__miss__DOT__entries_3_clients_2_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_3)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1161)));
    vlSelf->DCache__DOT__miss__DOT__entries_4_clients_0_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_4)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1336)));
    vlSelf->DCache__DOT__miss__DOT__entries_4_clients_2_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_4)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1360)));
    vlSelf->DCache__DOT__miss__DOT__entries_7_clients_0_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_7)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1933)));
    vlSelf->DCache__DOT__miss__DOT__entries_3_clients_3_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_3)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1173)));
    vlSelf->DCache__DOT__miss__DOT__entries_6_clients_0_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_6)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1734)));
    vlSelf->DCache__DOT__miss__DOT__entries_4_clients_1_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_4)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1348)));
    vlSelf->DCache__DOT__miss__DOT__entries_4_clients_3_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_4)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1372)));
    vlSelf->DCache__DOT__miss__DOT__entries_5_clients_4_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_5)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1583)));
    vlSelf->DCache__DOT__miss__DOT__entries_5_clients_5_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_5)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1595)));
    vlSelf->DCache__DOT__miss__DOT__entries_5_clients_6_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_5)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1607)));
    vlSelf->DCache__DOT__miss__DOT__entries_6_clients_1_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_6)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1746)));
    vlSelf->DCache__DOT__miss__DOT__entries_6_clients_2_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_6)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1758)));
    vlSelf->DCache__DOT__miss__DOT__entries_6_clients_3_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_6)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1770)));
    vlSelf->DCache__DOT__miss__DOT__entries_6_clients_4_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_6)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1782)));
    vlSelf->DCache__DOT__miss__DOT__entries_6_clients_5_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_6)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1794)));
    vlSelf->DCache__DOT__miss__DOT__entries_6_clients_6_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_6)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1806)));
    vlSelf->DCache__DOT__miss__DOT__entries_7_clients_1_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_7)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1945)));
    vlSelf->DCache__DOT__miss__DOT__entries_7_clients_2_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_7)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1957)));
    vlSelf->DCache__DOT__miss__DOT__entries_10_clients_0_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_10)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2530)));
    vlSelf->DCache__DOT__miss__DOT__entries_8_clients_0_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_8)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2132)));
    vlSelf->DCache__DOT__miss__DOT__entries_10_clients_6_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_10)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2602)));
    vlSelf->DCache__DOT__miss__DOT__entries_9_clients_0_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_9)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2331)));
    vlSelf->DCache__DOT__miss__DOT__entries_10_clients_1_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_10)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2542)));
    vlSelf->DCache__DOT__miss__DOT__entries_10_clients_2_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_10)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2554)));
    vlSelf->DCache__DOT__miss__DOT__entries_10_clients_3_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_10)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2566)));
    vlSelf->DCache__DOT__miss__DOT__entries_11_clients_1_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_11)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2741)));
    vlSelf->DCache__DOT__miss__DOT__entries_11_clients_2_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_11)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2753)));
    vlSelf->DCache__DOT__miss__DOT__entries_11_clients_3_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_11)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2765)));
    vlSelf->DCache__DOT__miss__DOT__entries_11_clients_0_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_11)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2729)));
    vlSelf->DCache__DOT__miss__DOT__entries_7_clients_3_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_7)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1969)));
    vlSelf->DCache__DOT__miss__DOT__entries_7_clients_4_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_7)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1981)));
    vlSelf->DCache__DOT__miss__DOT__entries_7_clients_5_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_7)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1993)));
    vlSelf->DCache__DOT__miss__DOT__entries_7_clients_6_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_7)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2005)));
    vlSelf->DCache__DOT__miss__DOT__entries_8_clients_1_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_8)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2144)));
    vlSelf->DCache__DOT__miss__DOT__entries_8_clients_2_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_8)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2156)));
    vlSelf->DCache__DOT__miss__DOT__entries_8_clients_3_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_8)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2168)));
    vlSelf->DCache__DOT__miss__DOT__entries_8_clients_4_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_8)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2180)));
    vlSelf->DCache__DOT__miss__DOT__entries_8_clients_5_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_8)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2192)));
    vlSelf->DCache__DOT__miss__DOT__entries_8_clients_6_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_8)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2204)));
    vlSelf->DCache__DOT__miss__DOT__entries_9_clients_1_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_9)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2343)));
    vlSelf->DCache__DOT__miss__DOT__entries_9_clients_2_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_9)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2355)));
    vlSelf->DCache__DOT__miss__DOT__entries_9_clients_3_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_9)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2367)));
    vlSelf->DCache__DOT__miss__DOT__entries_9_clients_4_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_9)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2379)));
    vlSelf->DCache__DOT__miss__DOT__entries_9_clients_5_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_9)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2391)));
    vlSelf->DCache__DOT__miss__DOT__entries_9_clients_6_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_9)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2403)));
    vlSelf->DCache__DOT__miss__DOT__entries_10_clients_4_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_10)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2578)));
    vlSelf->DCache__DOT__miss__DOT__entries_10_clients_5_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_10)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2590)));
    vlSelf->DCache__DOT__miss__DOT__entries_11_clients_4_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_11)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2777)));
    vlSelf->DCache__DOT__miss__DOT__entries_14_clients_6_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_14)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3398)));
    vlSelf->DCache__DOT__miss__DOT__entries_14_clients_3_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_14)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3362)));
    vlSelf->DCache__DOT__miss__DOT__entries_14_clients_2_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_14)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3350)));
    vlSelf->DCache__DOT__miss__DOT__entries_14_clients_1_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_14)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3338)));
    vlSelf->DCache__DOT__miss__DOT__entries_14_clients_0_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_14)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3326)));
    vlSelf->DCache__DOT__miss__DOT__entries_13_clients_6_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_13)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3199)));
    vlSelf->DCache__DOT__miss__DOT__entries_13_clients_3_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_13)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3163)));
    vlSelf->DCache__DOT__miss__DOT__entries_13_clients_2_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_13)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3151)));
    vlSelf->DCache__DOT__miss__DOT__entries_13_clients_1_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_13)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3139)));
    vlSelf->DCache__DOT__miss__DOT__entries_13_clients_0_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_13)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3127)));
    vlSelf->DCache__DOT__miss__DOT__entries_12_clients_6_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_12)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3000)));
    vlSelf->DCache__DOT__miss__DOT__entries_12_clients_3_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_12)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2964)));
    vlSelf->DCache__DOT__miss__DOT__entries_12_clients_2_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_12)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2952)));
    vlSelf->DCache__DOT__miss__DOT__entries_12_clients_1_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_12)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2940)));
    vlSelf->DCache__DOT__miss__DOT__entries_12_clients_0_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_12)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2928)));
    vlSelf->DCache__DOT__miss__DOT__entries_14_clients_4_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_14)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3374)));
    vlSelf->DCache__DOT__miss__DOT__entries_13_clients_4_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_13)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3175)));
    vlSelf->DCache__DOT__miss__DOT__entries_11_clients_6_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_11)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2801)));
    vlSelf->DCache__DOT__miss__DOT__entries_13_clients_5_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_13)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3187)));
    vlSelf->DCache__DOT__miss__DOT__entries_14_clients_5_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_14)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3386)));
    vlSelf->DCache__DOT__miss__DOT__entries_12_clients_4_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_12)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2976)));
    vlSelf->DCache__DOT__miss__DOT__entries_12_clients_5_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_12)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2988)));
    vlSelf->DCache__DOT__miss__DOT__entries_11_clients_5_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__canFree_11)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2789)));
    vlSelf->DCache__DOT__miss__DOT__entries_15_dataDone 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT__rxr_15) 
                                          & (0x12U 
                                             == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_opcode))) 
                                         | (((IData)(vlSelf->DCache__DOT__miss__DOT__rxd_15) 
                                             & (3U 
                                                == 
                                                ((IData)(vlSelf->DCache__DOT__miss__DOT___step1_T_76)
                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT___beatAfter_T_47)
                                                  : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_beatValid)))) 
                                            | (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3460))));
    vlSelf->DCache__DOT__miss__DOT__entries_4_txreqDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__txreqNext_4));
    vlSelf->DCache__DOT__miss__DOT__entries_14_txreqDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__txreqNext_14));
    vlSelf->DCache__DOT__miss__DOT__entries_3_txreqDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__txreqNext_3));
    vlSelf->DCache__DOT__miss__DOT__entries_10_txreqDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__txreqNext_10));
    vlSelf->DCache__DOT__miss__DOT__entries_13_txreqDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__txreqNext_13));
    vlSelf->DCache__DOT__miss__DOT__entries_5_txreqDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__txreqNext_5));
    vlSelf->DCache__DOT__miss__DOT__entries_8_txreqDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__txreqNext_8));
    vlSelf->DCache__DOT__miss__DOT__entries_9_txreqDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__txreqNext_9));
    vlSelf->DCache__DOT__miss__DOT__entries_0_txreqDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__txreqNext));
    vlSelf->DCache__DOT__miss__DOT__entries_2_txreqDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__txreqNext_2));
    vlSelf->DCache__DOT__miss__DOT__entries_7_txreqDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__txreqNext_7));
    vlSelf->DCache__DOT__miss__DOT__entries_6_txreqDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__txreqNext_6));
    vlSelf->DCache__DOT__miss__DOT__entries_12_txreqDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__txreqNext_12));
    vlSelf->DCache__DOT__miss__DOT__entries_11_txreqDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__txreqNext_11));
    vlSelf->DCache__DOT__miss__DOT__entries_1_txreqDone 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->DCache__DOT__miss__DOT__txreqNext_1));
    vlSelf->DCache__DOT__pipe__DOT__sent_1 = ((~ (IData)(vlSelf->reset)) 
                                              & ((~ (IData)(vlSelf->DCache__DOT__pipe__DOT__s2_fire)) 
                                                 & (IData)(vlSelf->DCache__DOT__pipe__DOT___GEN_223)));
    vlSelf->DCache__DOT__pipe__DOT__sent_0 = ((~ (IData)(vlSelf->reset)) 
                                              & ((~ (IData)(vlSelf->DCache__DOT__pipe__DOT__s2_fire)) 
                                                 & (IData)(vlSelf->DCache__DOT__pipe__DOT___GEN_222)));
    vlSelf->DCache__DOT__pipe__DOT__sent_2 = ((~ (IData)(vlSelf->reset)) 
                                              & ((~ (IData)(vlSelf->DCache__DOT__pipe__DOT__s2_fire)) 
                                                 & (IData)(vlSelf->DCache__DOT__pipe__DOT___GEN_224)));
    vlSelf->DCache__DOT__miss__DOT__entries_15_refillInflight 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_15)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3478)));
    vlSelf->DCache__DOT__miss__DOT__entries_14_dataDone 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT__rxr_14) 
                                          & (0x12U 
                                             == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_opcode))) 
                                         | (((IData)(vlSelf->DCache__DOT__miss__DOT__rxd_14) 
                                             & (3U 
                                                == 
                                                ((IData)(vlSelf->DCache__DOT__miss__DOT___step1_T_71)
                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT___beatAfter_T_44)
                                                  : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_beatValid)))) 
                                            | (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3261))));
    vlSelf->DCache__DOT__miss__DOT__entries_13_dataDone 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT__rxr_13) 
                                          & (0x12U 
                                             == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_opcode))) 
                                         | (((IData)(vlSelf->DCache__DOT__miss__DOT__rxd_13) 
                                             & (3U 
                                                == 
                                                ((IData)(vlSelf->DCache__DOT__miss__DOT___step1_T_66)
                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT___beatAfter_T_41)
                                                  : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_beatValid)))) 
                                            | (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3062))));
    vlSelf->DCache__DOT__miss__DOT__entries_12_dataDone 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT__rxr_12) 
                                          & (0x12U 
                                             == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_opcode))) 
                                         | (((IData)(vlSelf->DCache__DOT__miss__DOT__rxd_12) 
                                             & (3U 
                                                == 
                                                ((IData)(vlSelf->DCache__DOT__miss__DOT___step1_T_61)
                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT___beatAfter_T_38)
                                                  : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_beatValid)))) 
                                            | (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2863))));
    vlSelf->DCache__DOT__miss__DOT__entries_6_dataDone 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT__rxr_6) 
                                          & (0x12U 
                                             == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_opcode))) 
                                         | (((IData)(vlSelf->DCache__DOT__miss__DOT__rxd_6) 
                                             & (3U 
                                                == 
                                                ((IData)(vlSelf->DCache__DOT__miss__DOT___step1_T_31)
                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT___beatAfter_T_20)
                                                  : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_beatValid)))) 
                                            | (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1669))));
    vlSelf->DCache__DOT__miss__DOT__entries_7_dataDone 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT__rxr_7) 
                                          & (0x12U 
                                             == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_opcode))) 
                                         | (((IData)(vlSelf->DCache__DOT__miss__DOT__rxd_7) 
                                             & (3U 
                                                == 
                                                ((IData)(vlSelf->DCache__DOT__miss__DOT___step1_T_36)
                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT___beatAfter_T_23)
                                                  : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_beatValid)))) 
                                            | (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1868))));
    vlSelf->DCache__DOT__miss__DOT__entries_8_dataDone 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT__rxr_8) 
                                          & (0x12U 
                                             == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_opcode))) 
                                         | (((IData)(vlSelf->DCache__DOT__miss__DOT__rxd_8) 
                                             & (3U 
                                                == 
                                                ((IData)(vlSelf->DCache__DOT__miss__DOT___step1_T_41)
                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT___beatAfter_T_26)
                                                  : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_beatValid)))) 
                                            | (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2067))));
    vlSelf->DCache__DOT__miss__DOT__entries_9_dataDone 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT__rxr_9) 
                                          & (0x12U 
                                             == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_opcode))) 
                                         | (((IData)(vlSelf->DCache__DOT__miss__DOT__rxd_9) 
                                             & (3U 
                                                == 
                                                ((IData)(vlSelf->DCache__DOT__miss__DOT___step1_T_46)
                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT___beatAfter_T_29)
                                                  : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_beatValid)))) 
                                            | (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2266))));
    vlSelf->DCache__DOT__miss__DOT__entries_10_dataDone 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT__rxr_10) 
                                          & (0x12U 
                                             == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_opcode))) 
                                         | (((IData)(vlSelf->DCache__DOT__miss__DOT__rxd_10) 
                                             & (3U 
                                                == 
                                                ((IData)(vlSelf->DCache__DOT__miss__DOT___step1_T_51)
                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT___beatAfter_T_32)
                                                  : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_beatValid)))) 
                                            | (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2465))));
    vlSelf->DCache__DOT__miss__DOT__entries_11_dataDone 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT__rxr_11) 
                                          & (0x12U 
                                             == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_opcode))) 
                                         | (((IData)(vlSelf->DCache__DOT__miss__DOT__rxd_11) 
                                             & (3U 
                                                == 
                                                ((IData)(vlSelf->DCache__DOT__miss__DOT___step1_T_56)
                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT___beatAfter_T_35)
                                                  : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_beatValid)))) 
                                            | (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2664))));
    vlSelf->DCache__DOT__miss__DOT__entries_0_dataDone 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT__rxr) 
                                          & (0x12U 
                                             == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_opcode))) 
                                         | (((IData)(vlSelf->DCache__DOT__miss__DOT__rxd) 
                                             & (3U 
                                                == 
                                                ((IData)(vlSelf->DCache__DOT__miss__DOT___step1_T_1)
                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT___beatAfter_T_2)
                                                  : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_beatValid)))) 
                                            | (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_475))));
    vlSelf->DCache__DOT__miss__DOT__entries_4_dataDone 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT__rxr_4) 
                                          & (0x12U 
                                             == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_opcode))) 
                                         | (((IData)(vlSelf->DCache__DOT__miss__DOT__rxd_4) 
                                             & (3U 
                                                == 
                                                ((IData)(vlSelf->DCache__DOT__miss__DOT___step1_T_21)
                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT___beatAfter_T_14)
                                                  : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_beatValid)))) 
                                            | (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1271))));
    vlSelf->DCache__DOT__miss__DOT__entries_5_dataDone 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT__rxr_5) 
                                          & (0x12U 
                                             == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_opcode))) 
                                         | (((IData)(vlSelf->DCache__DOT__miss__DOT__rxd_5) 
                                             & (3U 
                                                == 
                                                ((IData)(vlSelf->DCache__DOT__miss__DOT___step1_T_26)
                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT___beatAfter_T_17)
                                                  : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_beatValid)))) 
                                            | (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1470))));
    vlSelf->DCache__DOT__miss__DOT__entries_3_dataDone 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT__rxr_3) 
                                          & (0x12U 
                                             == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_opcode))) 
                                         | (((IData)(vlSelf->DCache__DOT__miss__DOT__rxd_3) 
                                             & (3U 
                                                == 
                                                ((IData)(vlSelf->DCache__DOT__miss__DOT___step1_T_16)
                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT___beatAfter_T_11)
                                                  : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_beatValid)))) 
                                            | (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1072))));
    vlSelf->DCache__DOT__miss__DOT__entries_2_dataDone 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT__rxr_2) 
                                          & (0x12U 
                                             == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_opcode))) 
                                         | (((IData)(vlSelf->DCache__DOT__miss__DOT__rxd_2) 
                                             & (3U 
                                                == 
                                                ((IData)(vlSelf->DCache__DOT__miss__DOT___step1_T_11)
                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT___beatAfter_T_8)
                                                  : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_beatValid)))) 
                                            | (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_873))));
    vlSelf->DCache__DOT__miss__DOT__entries_1_dataDone 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->DCache__DOT__miss__DOT__rxr_1) 
                                          & (0x12U 
                                             == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_opcode))) 
                                         | (((IData)(vlSelf->DCache__DOT__miss__DOT__rxd_1) 
                                             & (3U 
                                                == 
                                                ((IData)(vlSelf->DCache__DOT__miss__DOT___step1_T_6)
                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT___beatAfter_T_5)
                                                  : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_beatValid)))) 
                                            | (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_674))));
    vlSelf->DCache__DOT__miss__DOT__entries_0_refillInflight 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_493)));
    vlSelf->DCache__DOT__miss__DOT__entries_1_refillInflight 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_1)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_692)));
    vlSelf->DCache__DOT__miss__DOT__entries_3_refillInflight 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_3)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1090)));
    vlSelf->DCache__DOT__miss__DOT__entries_2_refillInflight 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_2)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_891)));
    vlSelf->DCache__DOT__miss__DOT__entries_14_refillInflight 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_14)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3279)));
    vlSelf->DCache__DOT__miss__DOT__entries_13_refillInflight 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_13)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3080)));
    vlSelf->DCache__DOT__miss__DOT__entries_12_refillInflight 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_12)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2881)));
    vlSelf->DCache__DOT__miss__DOT__entries_4_refillInflight 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_4)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1289)));
    vlSelf->DCache__DOT__miss__DOT__entries_5_refillInflight 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_5)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1488)));
    vlSelf->DCache__DOT__miss__DOT__entries_6_refillInflight 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_6)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1687)));
    vlSelf->DCache__DOT__miss__DOT__entries_7_refillInflight 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_7)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1886)));
    vlSelf->DCache__DOT__miss__DOT__entries_8_refillInflight 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_8)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2085)));
    vlSelf->DCache__DOT__miss__DOT__entries_9_refillInflight 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_9)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2284)));
    vlSelf->DCache__DOT__miss__DOT__entries_10_refillInflight 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_10)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2483)));
    vlSelf->DCache__DOT__miss__DOT__entries_11_refillInflight 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_11)) 
                                         & (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2682)));
    vlSelf->DCache__DOT__pipe__DOT__sent_7 = ((~ (IData)(vlSelf->reset)) 
                                              & ((~ (IData)(vlSelf->DCache__DOT__pipe__DOT__s2_fire)) 
                                                 & (IData)(vlSelf->DCache__DOT__pipe__DOT___GEN_226)));
    if (vlSelf->DCache__DOT__loads_1__DOT__s1_go) {
        vlSelf->DCache__DOT__loads_1__DOT__s2_req_isFirstIssue 
            = vlSelf->DCache__DOT__loads_1__DOT__s1_req_isFirstIssue;
        vlSelf->DCache__DOT__loads_1__DOT__s2_req_id 
            = vlSelf->DCache__DOT__loads_1__DOT__s1_req_id;
        vlSelf->DCache__DOT__loads_1__DOT__s2_tag_hit 
            = (0U != (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_tag_way));
        vlSelf->DCache__DOT__loads_1__DOT__s2_way_en 
            = vlSelf->DCache__DOT__loads_1__DOT__s1_tag_way;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_15_opcode = 0U;
        vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_14_opcode = 0U;
        vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_13_opcode = 0U;
        vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_12_opcode = 0U;
        vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_4_opcode = 0U;
        vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_3_opcode = 0U;
        vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_11_opcode = 0U;
        vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_5_opcode = 0U;
        vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_2_opcode = 0U;
        vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_1_opcode = 0U;
        vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_6_opcode = 0U;
        vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_7_opcode = 0U;
        vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_8_opcode = 0U;
        vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_9_opcode = 0U;
        vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_10_opcode = 0U;
        vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_0_opcode = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_15_waitCnt = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_waitCnt = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_waitCnt = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_waitCnt = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_5_waitCnt = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_4_waitCnt = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_3_waitCnt = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_2_waitCnt = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_1_waitCnt = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_0_waitCnt = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_6_waitCnt = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_7_waitCnt = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_8_waitCnt = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_9_waitCnt = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_10_waitCnt = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_11_waitCnt = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_7_data[0U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_7_data[1U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_7_data[2U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_7_data[3U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_7_data[4U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_7_data[5U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_7_data[6U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_7_data[7U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_7_data[8U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_7_data[9U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_7_data[0xaU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_7_data[0xbU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_7_data[0xcU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_7_data[0xdU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_7_data[0xeU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_7_data[0xfU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_1_data[0U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_1_data[1U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_1_data[2U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_1_data[3U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_1_data[4U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_1_data[5U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_1_data[6U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_1_data[7U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_1_data[8U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_1_data[9U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_1_data[0xaU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_1_data[0xbU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_1_data[0xcU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_1_data[0xdU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_1_data[0xeU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_1_data[0xfU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_6_data[0U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_6_data[1U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_6_data[2U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_6_data[3U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_6_data[4U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_6_data[5U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_6_data[6U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_6_data[7U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_6_data[8U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_6_data[9U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_6_data[0xaU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_6_data[0xbU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_6_data[0xcU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_6_data[0xdU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_6_data[0xeU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_6_data[0xfU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_17_data[0U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_17_data[1U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_17_data[2U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_17_data[3U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_17_data[4U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_17_data[5U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_17_data[6U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_17_data[7U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_17_data[8U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_17_data[9U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_17_data[0xaU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_17_data[0xbU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_17_data[0xcU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_17_data[0xdU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_17_data[0xeU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_17_data[0xfU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_16_data[0U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_16_data[1U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_16_data[2U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_16_data[3U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_16_data[4U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_16_data[5U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_16_data[6U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_16_data[7U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_16_data[8U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_16_data[9U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_16_data[0xaU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_16_data[0xbU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_16_data[0xcU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_16_data[0xdU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_16_data[0xeU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_16_data[0xfU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_5_data[0U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_5_data[1U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_5_data[2U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_5_data[3U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_5_data[4U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_5_data[5U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_5_data[6U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_5_data[7U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_5_data[8U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_5_data[9U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_5_data[0xaU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_5_data[0xbU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_5_data[0xcU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_5_data[0xdU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_5_data[0xeU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_5_data[0xfU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_12_data[0U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_12_data[1U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_12_data[2U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_12_data[3U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_12_data[4U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_12_data[5U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_12_data[6U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_12_data[7U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_12_data[8U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_12_data[9U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_12_data[0xaU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_12_data[0xbU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_12_data[0xcU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_12_data[0xdU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_12_data[0xeU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_12_data[0xfU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_15_data[0U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_15_data[1U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_15_data[2U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_15_data[3U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_15_data[4U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_15_data[5U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_15_data[6U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_15_data[7U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_15_data[8U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_15_data[9U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_15_data[0xaU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_15_data[0xbU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_15_data[0xcU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_15_data[0xdU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_15_data[0xeU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_15_data[0xfU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_13_data[0U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_13_data[1U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_13_data[2U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_13_data[3U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_13_data[4U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_13_data[5U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_13_data[6U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_13_data[7U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_13_data[8U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_13_data[9U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_13_data[0xaU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_13_data[0xbU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_13_data[0xcU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_13_data[0xdU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_13_data[0xeU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_13_data[0xfU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_14_data[0U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_14_data[1U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_14_data[2U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_14_data[3U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_14_data[4U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_14_data[5U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_14_data[6U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_14_data[7U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_14_data[8U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_14_data[9U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_14_data[0xaU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_14_data[0xbU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_14_data[0xcU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_14_data[0xdU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_14_data[0xeU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_14_data[0xfU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_11_data[0U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_11_data[1U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_11_data[2U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_11_data[3U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_11_data[4U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_11_data[5U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_11_data[6U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_11_data[7U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_11_data[8U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_11_data[9U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_11_data[0xaU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_11_data[0xbU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_11_data[0xcU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_11_data[0xdU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_11_data[0xeU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_11_data[0xfU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_2_data[0U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_2_data[1U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_2_data[2U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_2_data[3U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_2_data[4U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_2_data[5U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_2_data[6U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_2_data[7U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_2_data[8U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_2_data[9U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_2_data[0xaU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_2_data[0xbU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_2_data[0xcU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_2_data[0xdU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_2_data[0xeU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_2_data[0xfU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_8_data[0U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_8_data[1U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_8_data[2U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_8_data[3U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_8_data[4U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_8_data[5U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_8_data[6U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_8_data[7U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_8_data[8U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_8_data[9U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_8_data[0xaU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_8_data[0xbU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_8_data[0xcU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_8_data[0xdU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_8_data[0xeU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_8_data[0xfU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_3_data[0U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_3_data[1U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_3_data[2U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_3_data[3U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_3_data[4U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_3_data[5U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_3_data[6U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_3_data[7U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_3_data[8U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_3_data[9U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_3_data[0xaU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_3_data[0xbU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_3_data[0xcU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_3_data[0xdU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_3_data[0xeU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_3_data[0xfU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_9_data[0U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_9_data[1U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_9_data[2U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_9_data[3U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_9_data[4U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_9_data[5U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_9_data[6U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_9_data[7U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_9_data[8U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_9_data[9U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_9_data[0xaU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_9_data[0xbU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_9_data[0xcU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_9_data[0xdU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_9_data[0xeU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_9_data[0xfU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_4_data[0U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_4_data[1U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_4_data[2U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_4_data[3U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_4_data[4U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_4_data[5U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_4_data[6U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_4_data[7U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_4_data[8U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_4_data[9U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_4_data[0xaU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_4_data[0xbU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_4_data[0xcU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_4_data[0xdU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_4_data[0xeU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_4_data[0xfU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_10_data[0U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_10_data[1U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_10_data[2U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_10_data[3U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_10_data[4U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_10_data[5U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_10_data[6U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_10_data[7U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_10_data[8U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_10_data[9U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_10_data[0xaU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_10_data[0xbU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_10_data[0xcU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_10_data[0xdU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_10_data[0xeU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_10_data[0xfU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_0_data[0U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_0_data[1U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_0_data[2U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_0_data[3U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_0_data[4U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_0_data[5U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_0_data[6U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_0_data[7U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_0_data[8U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_0_data[9U] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_0_data[0xaU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_0_data[0xbU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_0_data[0xcU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_0_data[0xdU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_0_data[0xeU] = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_0_data[0xfU] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_15_compId = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_compId = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_compId = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_compId = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_5_compId = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_1_compId = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_4_compId = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_2_compId = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_0_compId = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_10_compId = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_3_compId = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_11_compId = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_6_compId = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_7_compId = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_8_compId = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_9_compId = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_17_snpTxnId = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_16_snpTxnId = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_0_snpTxnId = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_10_snpTxnId = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_9_snpTxnId = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_12_snpTxnId = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_6_snpTxnId = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_11_snpTxnId = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_8_snpTxnId = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_7_snpTxnId = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_5_snpTxnId = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_13_snpTxnId = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_14_snpTxnId = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_15_snpTxnId = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_1_snpTxnId = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_2_snpTxnId = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_3_snpTxnId = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_4_snpTxnId = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_15_respErr = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_respErr = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_respErr = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_respErr = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_5_respErr = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_3_respErr = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_4_respErr = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_1_respErr = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_10_respErr = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_11_respErr = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_2_respErr = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_0_respErr = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_6_respErr = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_7_respErr = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_8_respErr = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_9_respErr = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_15_resp = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_resp = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_5_resp = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_3_resp = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_2_resp = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_1_resp = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_0_resp = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_10_resp = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_resp = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_resp = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_4_resp = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_6_resp = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_7_resp = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_8_resp = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_9_resp = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_11_resp = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_15_dbid = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_dbid = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_dbid = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_dbid = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_4_dbid = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_3_dbid = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_5_dbid = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_0_dbid = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_11_dbid = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_2_dbid = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_6_dbid = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_1_dbid = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_7_dbid = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_8_dbid = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_9_dbid = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_10_dbid = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_15_installed = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_5_installed = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_4_installed = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_installed = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_8_installed = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_3_installed = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_installed = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_10_installed = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_installed = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_9_installed = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_2_installed = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_1_installed = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_6_installed = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_7_installed = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_0_installed = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_11_installed = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_17_compSrc = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_17_traceTag = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_16_compSrc = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_16_traceTag = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_15_compSrc = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_15_traceTag = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_6_compSrc = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_6_traceTag = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_14_compSrc = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_14_traceTag = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_3_compSrc = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_3_traceTag = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_5_compSrc = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_5_traceTag = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_12_compSrc = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_12_traceTag = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_1_compSrc = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_1_traceTag = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_4_compSrc = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_4_traceTag = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_2_compSrc = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_2_traceTag = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_13_compSrc = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_13_traceTag = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_0_compSrc = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_0_traceTag = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_7_compSrc = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_7_traceTag = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_8_compSrc = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_8_traceTag = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_9_compSrc = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_9_traceTag = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_10_compSrc = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_10_traceTag = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_11_compSrc = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_11_traceTag = 0U;
        vlSelf->DCache__DOT__wb__DOT__evtHoldIdx = 0U;
        vlSelf->DCache__DOT__wb__DOT__datHoldIdx = 0U;
        vlSelf->DCache__DOT__wb__DOT__rspHoldIdx = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_15_stash = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_stash = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_0_stash = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_3_stash = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_stash = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_5_stash = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_stash = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_4_stash = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_2_stash = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_6_stash = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_7_stash = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_8_stash = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_9_stash = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_10_stash = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_11_stash = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_1_stash = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_15_clients_6_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_15_clients_5_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_15_clients_4_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_15_clients_7_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_15_clients_3_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_15_clients_1_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_15_clients_2_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_clients_6_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_clients_5_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_clients_4_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_clients_6_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_clients_5_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_clients_7_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_clients_7_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_clients_1_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_clients_2_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_clients_3_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_clients_4_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_clients_6_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_clients_5_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_clients_4_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_clients_3_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_clients_1_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_clients_2_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_clients_2_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_clients_1_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_clients_3_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_clients_7_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_11_clients_4_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_10_clients_7_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_11_clients_7_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_10_clients_5_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_10_clients_6_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_11_clients_1_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_11_clients_2_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_11_clients_3_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_11_clients_5_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_11_clients_6_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_10_clients_4_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_9_clients_3_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_9_clients_7_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_9_clients_1_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_9_clients_2_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_9_clients_4_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_9_clients_5_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_9_clients_6_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_10_clients_1_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_10_clients_2_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_10_clients_3_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_7_clients_7_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_8_clients_7_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_7_clients_5_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_7_clients_6_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_8_clients_1_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_8_clients_2_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_8_clients_3_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_8_clients_4_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_8_clients_5_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_8_clients_6_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_6_clients_7_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_6_clients_1_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_6_clients_2_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_6_clients_3_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_6_clients_4_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_6_clients_5_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_6_clients_6_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_7_clients_1_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_7_clients_2_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_7_clients_3_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_7_clients_4_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_5_clients_1_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_4_clients_7_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_4_clients_5_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_5_clients_2_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_5_clients_7_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_5_clients_3_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_4_clients_6_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_5_clients_4_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_5_clients_5_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_5_clients_6_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_4_clients_3_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_4_clients_2_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_3_clients_7_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_3_clients_6_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_3_clients_5_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_3_clients_4_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_3_clients_3_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_3_clients_2_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_3_clients_1_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_4_clients_4_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_4_clients_1_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_2_clients_7_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_2_clients_6_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_2_clients_5_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_1_clients_5_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_1_clients_6_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_1_clients_7_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_2_clients_1_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_2_clients_2_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_2_clients_3_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_2_clients_4_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_0_clients_1_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_0_clients_5_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_0_clients_4_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_1_clients_1_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_1_clients_3_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_1_clients_4_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_0_clients_6_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_0_clients_7_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_0_clients_2_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_0_clients_3_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_1_clients_2_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_15_clients_7_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_15_clients_6_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_15_clients_3_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_15_clients_1_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_15_clients_0_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_15_clients_4_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_15_clients_5_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_15_clients_2_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_2_clients_7_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_2_clients_6_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_2_clients_5_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_0_clients_2_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_0_clients_3_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_1_clients_1_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_3_clients_0_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_0_clients_4_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_0_clients_1_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_2_clients_3_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_2_clients_2_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_0_clients_5_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_2_clients_0_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_2_clients_1_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_1_clients_0_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_1_clients_2_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_1_clients_3_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_1_clients_4_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_1_clients_5_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_1_clients_6_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_1_clients_7_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_2_clients_4_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_0_clients_0_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_0_clients_6_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_0_clients_7_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_5_clients_3_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_5_clients_2_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_5_clients_1_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_4_clients_7_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_4_clients_6_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_4_clients_3_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_4_clients_1_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_3_clients_7_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_3_clients_6_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_3_clients_5_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_3_clients_4_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_3_clients_3_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_3_clients_2_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_3_clients_1_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_5_clients_0_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_4_clients_2_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_6_clients_6_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_4_clients_5_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_4_clients_4_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_4_clients_0_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_5_clients_6_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_5_clients_4_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_5_clients_5_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_5_clients_7_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_6_clients_0_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_6_clients_1_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_6_clients_2_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_6_clients_3_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_6_clients_4_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_6_clients_5_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_6_clients_7_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_7_clients_0_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_7_clients_1_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_7_clients_2_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_7_clients_6_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_9_clients_6_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_9_clients_5_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_9_clients_7_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_10_clients_6_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_10_clients_5_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_10_clients_4_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_8_clients_6_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_11_clients_4_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_7_clients_3_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_7_clients_4_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_7_clients_5_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_7_clients_7_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_8_clients_0_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_8_clients_1_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_8_clients_2_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_8_clients_3_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_8_clients_4_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_8_clients_5_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_8_clients_7_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_9_clients_0_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_9_clients_1_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_9_clients_2_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_9_clients_3_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_9_clients_4_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_10_clients_0_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_10_clients_1_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_10_clients_2_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_10_clients_3_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_10_clients_7_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_11_clients_0_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_11_clients_1_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_11_clients_2_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_11_clients_3_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_clients_6_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_clients_3_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_clients_1_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_clients_6_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_clients_3_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_clients_1_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_clients_6_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_clients_3_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_clients_1_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_clients_5_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_clients_4_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_clients_5_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_clients_4_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_clients_7_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_clients_0_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_clients_2_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_clients_0_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_clients_4_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_clients_5_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_11_clients_6_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_clients_7_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_clients_2_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_clients_0_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_clients_2_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_11_clients_5_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_clients_7_source = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_11_clients_7_source = 0U;
        vlSelf->DCache__DOT__pipe__DOT__skipVictim = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_17_resp = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_16_resp = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_12_resp = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_11_resp = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_10_resp = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_15_resp = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_9_resp = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_4_resp = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_1_resp = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_0_resp = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_5_resp = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_8_resp = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_14_resp = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_7_resp = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_2_resp = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_3_resp = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_13_resp = 0U;
        vlSelf->DCache__DOT__wb__DOT__entries_6_resp = 0U;
        vlSelf->DCache__DOT__pipe__DOT__lrsc_count = 0U;
    } else {
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_15) 
              & ((1U == (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_source)) 
                 | (IData)(vlSelf->DCache__DOT__miss__DOT__isPfw))) 
             & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_opcode)))) {
            vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_15_opcode = 0x10U;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_15) {
            vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_15_opcode 
                = (((1U == (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_source)) 
                    & (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_full_overwrite))
                    ? 0x12U : (IData)(vlSelf->DCache__DOT__miss__DOT___allocOp_T_7));
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_14) 
              & ((1U == (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_source)) 
                 | (IData)(vlSelf->DCache__DOT__miss__DOT__isPfw))) 
             & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_opcode)))) {
            vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_14_opcode = 0x10U;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_14) {
            vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_14_opcode 
                = (((1U == (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_source)) 
                    & (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_full_overwrite))
                    ? 0x12U : (IData)(vlSelf->DCache__DOT__miss__DOT___allocOp_T_7));
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_13) 
              & ((1U == (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_source)) 
                 | (IData)(vlSelf->DCache__DOT__miss__DOT__isPfw))) 
             & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_opcode)))) {
            vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_13_opcode = 0x10U;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_13) {
            vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_13_opcode 
                = (((1U == (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_source)) 
                    & (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_full_overwrite))
                    ? 0x12U : (IData)(vlSelf->DCache__DOT__miss__DOT___allocOp_T_7));
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_12) 
              & ((1U == (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_source)) 
                 | (IData)(vlSelf->DCache__DOT__miss__DOT__isPfw))) 
             & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_opcode)))) {
            vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_12_opcode = 0x10U;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_12) {
            vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_12_opcode 
                = (((1U == (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_source)) 
                    & (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_full_overwrite))
                    ? 0x12U : (IData)(vlSelf->DCache__DOT__miss__DOT___allocOp_T_7));
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_4) 
              & ((1U == (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_source)) 
                 | (IData)(vlSelf->DCache__DOT__miss__DOT__isPfw))) 
             & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_opcode)))) {
            vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_4_opcode = 0x10U;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_4) {
            vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_4_opcode 
                = (((1U == (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_source)) 
                    & (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_full_overwrite))
                    ? 0x12U : (IData)(vlSelf->DCache__DOT__miss__DOT___allocOp_T_7));
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_3) 
              & ((1U == (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_source)) 
                 | (IData)(vlSelf->DCache__DOT__miss__DOT__isPfw))) 
             & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_opcode)))) {
            vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_3_opcode = 0x10U;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_3) {
            vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_3_opcode 
                = (((1U == (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_source)) 
                    & (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_full_overwrite))
                    ? 0x12U : (IData)(vlSelf->DCache__DOT__miss__DOT___allocOp_T_7));
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_11) 
              & ((1U == (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_source)) 
                 | (IData)(vlSelf->DCache__DOT__miss__DOT__isPfw))) 
             & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_opcode)))) {
            vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_11_opcode = 0x10U;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_11) {
            vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_11_opcode 
                = (((1U == (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_source)) 
                    & (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_full_overwrite))
                    ? 0x12U : (IData)(vlSelf->DCache__DOT__miss__DOT___allocOp_T_7));
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_5) 
              & ((1U == (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_source)) 
                 | (IData)(vlSelf->DCache__DOT__miss__DOT__isPfw))) 
             & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_opcode)))) {
            vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_5_opcode = 0x10U;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_5) {
            vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_5_opcode 
                = (((1U == (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_source)) 
                    & (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_full_overwrite))
                    ? 0x12U : (IData)(vlSelf->DCache__DOT__miss__DOT___allocOp_T_7));
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_2) 
              & ((1U == (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_source)) 
                 | (IData)(vlSelf->DCache__DOT__miss__DOT__isPfw))) 
             & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_opcode)))) {
            vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_2_opcode = 0x10U;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_2) {
            vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_2_opcode 
                = (((1U == (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_source)) 
                    & (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_full_overwrite))
                    ? 0x12U : (IData)(vlSelf->DCache__DOT__miss__DOT___allocOp_T_7));
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_1) 
              & ((1U == (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_source)) 
                 | (IData)(vlSelf->DCache__DOT__miss__DOT__isPfw))) 
             & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_opcode)))) {
            vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_1_opcode = 0x10U;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_1) {
            vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_1_opcode 
                = (((1U == (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_source)) 
                    & (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_full_overwrite))
                    ? 0x12U : (IData)(vlSelf->DCache__DOT__miss__DOT___allocOp_T_7));
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_6) 
              & ((1U == (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_source)) 
                 | (IData)(vlSelf->DCache__DOT__miss__DOT__isPfw))) 
             & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_opcode)))) {
            vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_6_opcode = 0x10U;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_6) {
            vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_6_opcode 
                = (((1U == (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_source)) 
                    & (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_full_overwrite))
                    ? 0x12U : (IData)(vlSelf->DCache__DOT__miss__DOT___allocOp_T_7));
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_7) 
              & ((1U == (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_source)) 
                 | (IData)(vlSelf->DCache__DOT__miss__DOT__isPfw))) 
             & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_opcode)))) {
            vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_7_opcode = 0x10U;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_7) {
            vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_7_opcode 
                = (((1U == (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_source)) 
                    & (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_full_overwrite))
                    ? 0x12U : (IData)(vlSelf->DCache__DOT__miss__DOT___allocOp_T_7));
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_8) 
              & ((1U == (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_source)) 
                 | (IData)(vlSelf->DCache__DOT__miss__DOT__isPfw))) 
             & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_opcode)))) {
            vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_8_opcode = 0x10U;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_8) {
            vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_8_opcode 
                = (((1U == (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_source)) 
                    & (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_full_overwrite))
                    ? 0x12U : (IData)(vlSelf->DCache__DOT__miss__DOT___allocOp_T_7));
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_9) 
              & ((1U == (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_source)) 
                 | (IData)(vlSelf->DCache__DOT__miss__DOT__isPfw))) 
             & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_opcode)))) {
            vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_9_opcode = 0x10U;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_9) {
            vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_9_opcode 
                = (((1U == (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_source)) 
                    & (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_full_overwrite))
                    ? 0x12U : (IData)(vlSelf->DCache__DOT__miss__DOT___allocOp_T_7));
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_10) 
              & ((1U == (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_source)) 
                 | (IData)(vlSelf->DCache__DOT__miss__DOT__isPfw))) 
             & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_opcode)))) {
            vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_10_opcode = 0x10U;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_10) {
            vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_10_opcode 
                = (((1U == (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_source)) 
                    & (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_full_overwrite))
                    ? 0x12U : (IData)(vlSelf->DCache__DOT__miss__DOT___allocOp_T_7));
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge) 
              & ((1U == (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_source)) 
                 | (IData)(vlSelf->DCache__DOT__miss__DOT__isPfw))) 
             & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_opcode)))) {
            vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_0_opcode = 0x10U;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc) {
            vlSelf->__Vdly__DCache__DOT__miss__DOT__entries_0_opcode 
                = (((1U == (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_source)) 
                    & (IData)(vlSelf->DCache__DOT__miss_io_missReq_bits_full_overwrite))
                    ? 0x12U : (IData)(vlSelf->DCache__DOT__miss__DOT___allocOp_T_7));
        }
        vlSelf->DCache__DOT__miss__DOT__entries_15_waitCnt 
            = ((((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_waitVictim) 
                 & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_15))) 
                & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_15)))
                ? ((0xfU == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_waitCnt))
                    ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3494)
                    : (IData)(vlSelf->DCache__DOT__miss__DOT___cntNext_T_31))
                : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3494));
        vlSelf->DCache__DOT__miss__DOT__entries_14_waitCnt 
            = ((((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_waitVictim) 
                 & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_14))) 
                & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_14)))
                ? ((0xfU == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_waitCnt))
                    ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3295)
                    : (IData)(vlSelf->DCache__DOT__miss__DOT___cntNext_T_29))
                : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3295));
        vlSelf->DCache__DOT__miss__DOT__entries_13_waitCnt 
            = ((((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_waitVictim) 
                 & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_13))) 
                & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_13)))
                ? ((0xfU == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_waitCnt))
                    ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3096)
                    : (IData)(vlSelf->DCache__DOT__miss__DOT___cntNext_T_27))
                : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3096));
        vlSelf->DCache__DOT__miss__DOT__entries_12_waitCnt 
            = ((((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_waitVictim) 
                 & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_12))) 
                & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_12)))
                ? ((0xfU == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_waitCnt))
                    ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2897)
                    : (IData)(vlSelf->DCache__DOT__miss__DOT___cntNext_T_25))
                : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2897));
        vlSelf->DCache__DOT__miss__DOT__entries_5_waitCnt 
            = ((((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_waitVictim) 
                 & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_5))) 
                & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_5)))
                ? ((0xfU == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_waitCnt))
                    ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1504)
                    : (IData)(vlSelf->DCache__DOT__miss__DOT___cntNext_T_11))
                : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1504));
        vlSelf->DCache__DOT__miss__DOT__entries_4_waitCnt 
            = ((((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_waitVictim) 
                 & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_4))) 
                & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_4)))
                ? ((0xfU == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_waitCnt))
                    ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1305)
                    : (IData)(vlSelf->DCache__DOT__miss__DOT___cntNext_T_9))
                : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1305));
        vlSelf->DCache__DOT__miss__DOT__entries_3_waitCnt 
            = ((((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_waitVictim) 
                 & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_3))) 
                & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_3)))
                ? ((0xfU == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_waitCnt))
                    ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1106)
                    : (IData)(vlSelf->DCache__DOT__miss__DOT___cntNext_T_7))
                : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1106));
        vlSelf->DCache__DOT__miss__DOT__entries_2_waitCnt 
            = ((((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_waitVictim) 
                 & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_2))) 
                & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_2)))
                ? ((0xfU == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_waitCnt))
                    ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_907)
                    : (IData)(vlSelf->DCache__DOT__miss__DOT___cntNext_T_5))
                : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_907));
        vlSelf->DCache__DOT__miss__DOT__entries_1_waitCnt 
            = ((((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_waitVictim) 
                 & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_1))) 
                & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_1)))
                ? ((0xfU == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_waitCnt))
                    ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_708)
                    : (IData)(vlSelf->DCache__DOT__miss__DOT___cntNext_T_3))
                : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_708));
        vlSelf->DCache__DOT__miss__DOT__entries_0_waitCnt 
            = ((((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_waitVictim) 
                 & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3))) 
                & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc)))
                ? ((0xfU == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_waitCnt))
                    ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_509)
                    : (IData)(vlSelf->DCache__DOT__miss__DOT___cntNext_T_1))
                : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_509));
        vlSelf->DCache__DOT__miss__DOT__entries_6_waitCnt 
            = ((((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_waitVictim) 
                 & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_6))) 
                & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_6)))
                ? ((0xfU == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_waitCnt))
                    ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1703)
                    : (IData)(vlSelf->DCache__DOT__miss__DOT___cntNext_T_13))
                : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1703));
        vlSelf->DCache__DOT__miss__DOT__entries_7_waitCnt 
            = ((((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_waitVictim) 
                 & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_7))) 
                & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_7)))
                ? ((0xfU == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_waitCnt))
                    ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1902)
                    : (IData)(vlSelf->DCache__DOT__miss__DOT___cntNext_T_15))
                : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1902));
        vlSelf->DCache__DOT__miss__DOT__entries_8_waitCnt 
            = ((((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_waitVictim) 
                 & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_8))) 
                & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_8)))
                ? ((0xfU == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_waitCnt))
                    ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2101)
                    : (IData)(vlSelf->DCache__DOT__miss__DOT___cntNext_T_17))
                : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2101));
        vlSelf->DCache__DOT__miss__DOT__entries_9_waitCnt 
            = ((((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_waitVictim) 
                 & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_9))) 
                & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_9)))
                ? ((0xfU == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_waitCnt))
                    ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2300)
                    : (IData)(vlSelf->DCache__DOT__miss__DOT___cntNext_T_19))
                : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2300));
        vlSelf->DCache__DOT__miss__DOT__entries_10_waitCnt 
            = ((((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_waitVictim) 
                 & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_10))) 
                & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_10)))
                ? ((0xfU == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_waitCnt))
                    ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2499)
                    : (IData)(vlSelf->DCache__DOT__miss__DOT___cntNext_T_21))
                : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2499));
        vlSelf->DCache__DOT__miss__DOT__entries_11_waitCnt 
            = ((((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_waitVictim) 
                 & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doS3_11))) 
                & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_11)))
                ? ((0xfU == (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_waitCnt))
                    ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2698)
                    : (IData)(vlSelf->DCache__DOT__miss__DOT___cntNext_T_23))
                : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2698));
        if (vlSelf->DCache__DOT__wb__DOT__doAlloc_7) {
            vlSelf->DCache__DOT__wb__DOT__entries_7_data[0U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0U];
            vlSelf->DCache__DOT__wb__DOT__entries_7_data[1U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[1U];
            vlSelf->DCache__DOT__wb__DOT__entries_7_data[2U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[2U];
            vlSelf->DCache__DOT__wb__DOT__entries_7_data[3U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[3U];
            vlSelf->DCache__DOT__wb__DOT__entries_7_data[4U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[4U];
            vlSelf->DCache__DOT__wb__DOT__entries_7_data[5U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[5U];
            vlSelf->DCache__DOT__wb__DOT__entries_7_data[6U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[6U];
            vlSelf->DCache__DOT__wb__DOT__entries_7_data[7U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[7U];
            vlSelf->DCache__DOT__wb__DOT__entries_7_data[8U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[8U];
            vlSelf->DCache__DOT__wb__DOT__entries_7_data[9U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[9U];
            vlSelf->DCache__DOT__wb__DOT__entries_7_data[0xaU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xaU];
            vlSelf->DCache__DOT__wb__DOT__entries_7_data[0xbU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xbU];
            vlSelf->DCache__DOT__wb__DOT__entries_7_data[0xcU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xcU];
            vlSelf->DCache__DOT__wb__DOT__entries_7_data[0xdU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xdU];
            vlSelf->DCache__DOT__wb__DOT__entries_7_data[0xeU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xeU];
            vlSelf->DCache__DOT__wb__DOT__entries_7_data[0xfU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xfU];
            vlSelf->DCache__DOT__wb__DOT__entries_7_snpTxnId 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_snpTxnId;
            vlSelf->DCache__DOT__wb__DOT__entries_7_resp 
                = ((5U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode))
                    ? 5U : ((IData)(vlSelf->DCache__DOT__wb__DOT___reqResp_T_5)
                             ? 0U : (IData)(vlSelf->DCache__DOT__wb__DOT___reqResp_T_7)));
        }
        if (vlSelf->DCache__DOT__wb__DOT__doAlloc_1) {
            vlSelf->DCache__DOT__wb__DOT__entries_1_data[0U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0U];
            vlSelf->DCache__DOT__wb__DOT__entries_1_data[1U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[1U];
            vlSelf->DCache__DOT__wb__DOT__entries_1_data[2U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[2U];
            vlSelf->DCache__DOT__wb__DOT__entries_1_data[3U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[3U];
            vlSelf->DCache__DOT__wb__DOT__entries_1_data[4U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[4U];
            vlSelf->DCache__DOT__wb__DOT__entries_1_data[5U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[5U];
            vlSelf->DCache__DOT__wb__DOT__entries_1_data[6U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[6U];
            vlSelf->DCache__DOT__wb__DOT__entries_1_data[7U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[7U];
            vlSelf->DCache__DOT__wb__DOT__entries_1_data[8U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[8U];
            vlSelf->DCache__DOT__wb__DOT__entries_1_data[9U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[9U];
            vlSelf->DCache__DOT__wb__DOT__entries_1_data[0xaU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xaU];
            vlSelf->DCache__DOT__wb__DOT__entries_1_data[0xbU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xbU];
            vlSelf->DCache__DOT__wb__DOT__entries_1_data[0xcU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xcU];
            vlSelf->DCache__DOT__wb__DOT__entries_1_data[0xdU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xdU];
            vlSelf->DCache__DOT__wb__DOT__entries_1_data[0xeU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xeU];
            vlSelf->DCache__DOT__wb__DOT__entries_1_data[0xfU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xfU];
            vlSelf->DCache__DOT__wb__DOT__entries_1_snpTxnId 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_snpTxnId;
            vlSelf->DCache__DOT__wb__DOT__entries_1_resp 
                = ((5U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode))
                    ? 5U : ((IData)(vlSelf->DCache__DOT__wb__DOT___reqResp_T_5)
                             ? 0U : (IData)(vlSelf->DCache__DOT__wb__DOT___reqResp_T_7)));
        }
        if (vlSelf->DCache__DOT__wb__DOT__doAlloc_6) {
            vlSelf->DCache__DOT__wb__DOT__entries_6_data[0U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0U];
            vlSelf->DCache__DOT__wb__DOT__entries_6_data[1U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[1U];
            vlSelf->DCache__DOT__wb__DOT__entries_6_data[2U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[2U];
            vlSelf->DCache__DOT__wb__DOT__entries_6_data[3U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[3U];
            vlSelf->DCache__DOT__wb__DOT__entries_6_data[4U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[4U];
            vlSelf->DCache__DOT__wb__DOT__entries_6_data[5U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[5U];
            vlSelf->DCache__DOT__wb__DOT__entries_6_data[6U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[6U];
            vlSelf->DCache__DOT__wb__DOT__entries_6_data[7U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[7U];
            vlSelf->DCache__DOT__wb__DOT__entries_6_data[8U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[8U];
            vlSelf->DCache__DOT__wb__DOT__entries_6_data[9U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[9U];
            vlSelf->DCache__DOT__wb__DOT__entries_6_data[0xaU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xaU];
            vlSelf->DCache__DOT__wb__DOT__entries_6_data[0xbU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xbU];
            vlSelf->DCache__DOT__wb__DOT__entries_6_data[0xcU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xcU];
            vlSelf->DCache__DOT__wb__DOT__entries_6_data[0xdU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xdU];
            vlSelf->DCache__DOT__wb__DOT__entries_6_data[0xeU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xeU];
            vlSelf->DCache__DOT__wb__DOT__entries_6_data[0xfU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xfU];
            vlSelf->DCache__DOT__wb__DOT__entries_6_snpTxnId 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_snpTxnId;
            vlSelf->DCache__DOT__wb__DOT__entries_6_resp 
                = ((5U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode))
                    ? 5U : ((IData)(vlSelf->DCache__DOT__wb__DOT___reqResp_T_5)
                             ? 0U : (IData)(vlSelf->DCache__DOT__wb__DOT___reqResp_T_7)));
        }
        if (vlSelf->DCache__DOT__wb__DOT__doAlloc_17) {
            vlSelf->DCache__DOT__wb__DOT__entries_17_data[0U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0U];
            vlSelf->DCache__DOT__wb__DOT__entries_17_data[1U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[1U];
            vlSelf->DCache__DOT__wb__DOT__entries_17_data[2U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[2U];
            vlSelf->DCache__DOT__wb__DOT__entries_17_data[3U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[3U];
            vlSelf->DCache__DOT__wb__DOT__entries_17_data[4U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[4U];
            vlSelf->DCache__DOT__wb__DOT__entries_17_data[5U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[5U];
            vlSelf->DCache__DOT__wb__DOT__entries_17_data[6U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[6U];
            vlSelf->DCache__DOT__wb__DOT__entries_17_data[7U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[7U];
            vlSelf->DCache__DOT__wb__DOT__entries_17_data[8U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[8U];
            vlSelf->DCache__DOT__wb__DOT__entries_17_data[9U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[9U];
            vlSelf->DCache__DOT__wb__DOT__entries_17_data[0xaU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xaU];
            vlSelf->DCache__DOT__wb__DOT__entries_17_data[0xbU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xbU];
            vlSelf->DCache__DOT__wb__DOT__entries_17_data[0xcU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xcU];
            vlSelf->DCache__DOT__wb__DOT__entries_17_data[0xdU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xdU];
            vlSelf->DCache__DOT__wb__DOT__entries_17_data[0xeU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xeU];
            vlSelf->DCache__DOT__wb__DOT__entries_17_data[0xfU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xfU];
            vlSelf->DCache__DOT__wb__DOT__entries_17_snpTxnId 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_snpTxnId;
            vlSelf->DCache__DOT__wb__DOT__entries_17_resp 
                = ((5U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode))
                    ? 5U : ((IData)(vlSelf->DCache__DOT__wb__DOT___reqResp_T_5)
                             ? 0U : (IData)(vlSelf->DCache__DOT__wb__DOT___reqResp_T_7)));
        }
        if (vlSelf->DCache__DOT__wb__DOT__doAlloc_16) {
            vlSelf->DCache__DOT__wb__DOT__entries_16_data[0U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0U];
            vlSelf->DCache__DOT__wb__DOT__entries_16_data[1U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[1U];
            vlSelf->DCache__DOT__wb__DOT__entries_16_data[2U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[2U];
            vlSelf->DCache__DOT__wb__DOT__entries_16_data[3U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[3U];
            vlSelf->DCache__DOT__wb__DOT__entries_16_data[4U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[4U];
            vlSelf->DCache__DOT__wb__DOT__entries_16_data[5U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[5U];
            vlSelf->DCache__DOT__wb__DOT__entries_16_data[6U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[6U];
            vlSelf->DCache__DOT__wb__DOT__entries_16_data[7U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[7U];
            vlSelf->DCache__DOT__wb__DOT__entries_16_data[8U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[8U];
            vlSelf->DCache__DOT__wb__DOT__entries_16_data[9U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[9U];
            vlSelf->DCache__DOT__wb__DOT__entries_16_data[0xaU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xaU];
            vlSelf->DCache__DOT__wb__DOT__entries_16_data[0xbU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xbU];
            vlSelf->DCache__DOT__wb__DOT__entries_16_data[0xcU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xcU];
            vlSelf->DCache__DOT__wb__DOT__entries_16_data[0xdU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xdU];
            vlSelf->DCache__DOT__wb__DOT__entries_16_data[0xeU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xeU];
            vlSelf->DCache__DOT__wb__DOT__entries_16_data[0xfU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xfU];
            vlSelf->DCache__DOT__wb__DOT__entries_16_snpTxnId 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_snpTxnId;
            vlSelf->DCache__DOT__wb__DOT__entries_16_resp 
                = ((5U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode))
                    ? 5U : ((IData)(vlSelf->DCache__DOT__wb__DOT___reqResp_T_5)
                             ? 0U : (IData)(vlSelf->DCache__DOT__wb__DOT___reqResp_T_7)));
        }
        if (vlSelf->DCache__DOT__wb__DOT__doAlloc_5) {
            vlSelf->DCache__DOT__wb__DOT__entries_5_data[0U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0U];
            vlSelf->DCache__DOT__wb__DOT__entries_5_data[1U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[1U];
            vlSelf->DCache__DOT__wb__DOT__entries_5_data[2U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[2U];
            vlSelf->DCache__DOT__wb__DOT__entries_5_data[3U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[3U];
            vlSelf->DCache__DOT__wb__DOT__entries_5_data[4U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[4U];
            vlSelf->DCache__DOT__wb__DOT__entries_5_data[5U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[5U];
            vlSelf->DCache__DOT__wb__DOT__entries_5_data[6U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[6U];
            vlSelf->DCache__DOT__wb__DOT__entries_5_data[7U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[7U];
            vlSelf->DCache__DOT__wb__DOT__entries_5_data[8U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[8U];
            vlSelf->DCache__DOT__wb__DOT__entries_5_data[9U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[9U];
            vlSelf->DCache__DOT__wb__DOT__entries_5_data[0xaU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xaU];
            vlSelf->DCache__DOT__wb__DOT__entries_5_data[0xbU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xbU];
            vlSelf->DCache__DOT__wb__DOT__entries_5_data[0xcU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xcU];
            vlSelf->DCache__DOT__wb__DOT__entries_5_data[0xdU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xdU];
            vlSelf->DCache__DOT__wb__DOT__entries_5_data[0xeU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xeU];
            vlSelf->DCache__DOT__wb__DOT__entries_5_data[0xfU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xfU];
            vlSelf->DCache__DOT__wb__DOT__entries_5_snpTxnId 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_snpTxnId;
            vlSelf->DCache__DOT__wb__DOT__entries_5_resp 
                = ((5U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode))
                    ? 5U : ((IData)(vlSelf->DCache__DOT__wb__DOT___reqResp_T_5)
                             ? 0U : (IData)(vlSelf->DCache__DOT__wb__DOT___reqResp_T_7)));
        }
        if (vlSelf->DCache__DOT__wb__DOT__doAlloc_12) {
            vlSelf->DCache__DOT__wb__DOT__entries_12_data[0U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0U];
            vlSelf->DCache__DOT__wb__DOT__entries_12_data[1U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[1U];
            vlSelf->DCache__DOT__wb__DOT__entries_12_data[2U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[2U];
            vlSelf->DCache__DOT__wb__DOT__entries_12_data[3U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[3U];
            vlSelf->DCache__DOT__wb__DOT__entries_12_data[4U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[4U];
            vlSelf->DCache__DOT__wb__DOT__entries_12_data[5U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[5U];
            vlSelf->DCache__DOT__wb__DOT__entries_12_data[6U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[6U];
            vlSelf->DCache__DOT__wb__DOT__entries_12_data[7U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[7U];
            vlSelf->DCache__DOT__wb__DOT__entries_12_data[8U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[8U];
            vlSelf->DCache__DOT__wb__DOT__entries_12_data[9U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[9U];
            vlSelf->DCache__DOT__wb__DOT__entries_12_data[0xaU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xaU];
            vlSelf->DCache__DOT__wb__DOT__entries_12_data[0xbU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xbU];
            vlSelf->DCache__DOT__wb__DOT__entries_12_data[0xcU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xcU];
            vlSelf->DCache__DOT__wb__DOT__entries_12_data[0xdU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xdU];
            vlSelf->DCache__DOT__wb__DOT__entries_12_data[0xeU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xeU];
            vlSelf->DCache__DOT__wb__DOT__entries_12_data[0xfU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xfU];
            vlSelf->DCache__DOT__wb__DOT__entries_12_snpTxnId 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_snpTxnId;
            vlSelf->DCache__DOT__wb__DOT__entries_12_resp 
                = ((5U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode))
                    ? 5U : ((IData)(vlSelf->DCache__DOT__wb__DOT___reqResp_T_5)
                             ? 0U : (IData)(vlSelf->DCache__DOT__wb__DOT___reqResp_T_7)));
        }
        if (vlSelf->DCache__DOT__wb__DOT__doAlloc_15) {
            vlSelf->DCache__DOT__wb__DOT__entries_15_data[0U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0U];
            vlSelf->DCache__DOT__wb__DOT__entries_15_data[1U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[1U];
            vlSelf->DCache__DOT__wb__DOT__entries_15_data[2U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[2U];
            vlSelf->DCache__DOT__wb__DOT__entries_15_data[3U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[3U];
            vlSelf->DCache__DOT__wb__DOT__entries_15_data[4U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[4U];
            vlSelf->DCache__DOT__wb__DOT__entries_15_data[5U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[5U];
            vlSelf->DCache__DOT__wb__DOT__entries_15_data[6U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[6U];
            vlSelf->DCache__DOT__wb__DOT__entries_15_data[7U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[7U];
            vlSelf->DCache__DOT__wb__DOT__entries_15_data[8U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[8U];
            vlSelf->DCache__DOT__wb__DOT__entries_15_data[9U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[9U];
            vlSelf->DCache__DOT__wb__DOT__entries_15_data[0xaU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xaU];
            vlSelf->DCache__DOT__wb__DOT__entries_15_data[0xbU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xbU];
            vlSelf->DCache__DOT__wb__DOT__entries_15_data[0xcU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xcU];
            vlSelf->DCache__DOT__wb__DOT__entries_15_data[0xdU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xdU];
            vlSelf->DCache__DOT__wb__DOT__entries_15_data[0xeU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xeU];
            vlSelf->DCache__DOT__wb__DOT__entries_15_data[0xfU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xfU];
            vlSelf->DCache__DOT__wb__DOT__entries_15_snpTxnId 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_snpTxnId;
            vlSelf->DCache__DOT__wb__DOT__entries_15_resp 
                = ((5U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode))
                    ? 5U : ((IData)(vlSelf->DCache__DOT__wb__DOT___reqResp_T_5)
                             ? 0U : (IData)(vlSelf->DCache__DOT__wb__DOT___reqResp_T_7)));
        }
        if (vlSelf->DCache__DOT__wb__DOT__doAlloc_13) {
            vlSelf->DCache__DOT__wb__DOT__entries_13_data[0U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0U];
            vlSelf->DCache__DOT__wb__DOT__entries_13_data[1U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[1U];
            vlSelf->DCache__DOT__wb__DOT__entries_13_data[2U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[2U];
            vlSelf->DCache__DOT__wb__DOT__entries_13_data[3U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[3U];
            vlSelf->DCache__DOT__wb__DOT__entries_13_data[4U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[4U];
            vlSelf->DCache__DOT__wb__DOT__entries_13_data[5U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[5U];
            vlSelf->DCache__DOT__wb__DOT__entries_13_data[6U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[6U];
            vlSelf->DCache__DOT__wb__DOT__entries_13_data[7U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[7U];
            vlSelf->DCache__DOT__wb__DOT__entries_13_data[8U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[8U];
            vlSelf->DCache__DOT__wb__DOT__entries_13_data[9U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[9U];
            vlSelf->DCache__DOT__wb__DOT__entries_13_data[0xaU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xaU];
            vlSelf->DCache__DOT__wb__DOT__entries_13_data[0xbU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xbU];
            vlSelf->DCache__DOT__wb__DOT__entries_13_data[0xcU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xcU];
            vlSelf->DCache__DOT__wb__DOT__entries_13_data[0xdU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xdU];
            vlSelf->DCache__DOT__wb__DOT__entries_13_data[0xeU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xeU];
            vlSelf->DCache__DOT__wb__DOT__entries_13_data[0xfU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xfU];
            vlSelf->DCache__DOT__wb__DOT__entries_13_snpTxnId 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_snpTxnId;
            vlSelf->DCache__DOT__wb__DOT__entries_13_resp 
                = ((5U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode))
                    ? 5U : ((IData)(vlSelf->DCache__DOT__wb__DOT___reqResp_T_5)
                             ? 0U : (IData)(vlSelf->DCache__DOT__wb__DOT___reqResp_T_7)));
        }
        if (vlSelf->DCache__DOT__wb__DOT__doAlloc_14) {
            vlSelf->DCache__DOT__wb__DOT__entries_14_data[0U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0U];
            vlSelf->DCache__DOT__wb__DOT__entries_14_data[1U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[1U];
            vlSelf->DCache__DOT__wb__DOT__entries_14_data[2U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[2U];
            vlSelf->DCache__DOT__wb__DOT__entries_14_data[3U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[3U];
            vlSelf->DCache__DOT__wb__DOT__entries_14_data[4U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[4U];
            vlSelf->DCache__DOT__wb__DOT__entries_14_data[5U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[5U];
            vlSelf->DCache__DOT__wb__DOT__entries_14_data[6U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[6U];
            vlSelf->DCache__DOT__wb__DOT__entries_14_data[7U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[7U];
            vlSelf->DCache__DOT__wb__DOT__entries_14_data[8U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[8U];
            vlSelf->DCache__DOT__wb__DOT__entries_14_data[9U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[9U];
            vlSelf->DCache__DOT__wb__DOT__entries_14_data[0xaU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xaU];
            vlSelf->DCache__DOT__wb__DOT__entries_14_data[0xbU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xbU];
            vlSelf->DCache__DOT__wb__DOT__entries_14_data[0xcU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xcU];
            vlSelf->DCache__DOT__wb__DOT__entries_14_data[0xdU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xdU];
            vlSelf->DCache__DOT__wb__DOT__entries_14_data[0xeU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xeU];
            vlSelf->DCache__DOT__wb__DOT__entries_14_data[0xfU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xfU];
            vlSelf->DCache__DOT__wb__DOT__entries_14_snpTxnId 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_snpTxnId;
            vlSelf->DCache__DOT__wb__DOT__entries_14_resp 
                = ((5U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode))
                    ? 5U : ((IData)(vlSelf->DCache__DOT__wb__DOT___reqResp_T_5)
                             ? 0U : (IData)(vlSelf->DCache__DOT__wb__DOT___reqResp_T_7)));
        }
        if (vlSelf->DCache__DOT__wb__DOT__doAlloc_11) {
            vlSelf->DCache__DOT__wb__DOT__entries_11_data[0U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0U];
            vlSelf->DCache__DOT__wb__DOT__entries_11_data[1U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[1U];
            vlSelf->DCache__DOT__wb__DOT__entries_11_data[2U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[2U];
            vlSelf->DCache__DOT__wb__DOT__entries_11_data[3U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[3U];
            vlSelf->DCache__DOT__wb__DOT__entries_11_data[4U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[4U];
            vlSelf->DCache__DOT__wb__DOT__entries_11_data[5U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[5U];
            vlSelf->DCache__DOT__wb__DOT__entries_11_data[6U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[6U];
            vlSelf->DCache__DOT__wb__DOT__entries_11_data[7U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[7U];
            vlSelf->DCache__DOT__wb__DOT__entries_11_data[8U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[8U];
            vlSelf->DCache__DOT__wb__DOT__entries_11_data[9U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[9U];
            vlSelf->DCache__DOT__wb__DOT__entries_11_data[0xaU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xaU];
            vlSelf->DCache__DOT__wb__DOT__entries_11_data[0xbU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xbU];
            vlSelf->DCache__DOT__wb__DOT__entries_11_data[0xcU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xcU];
            vlSelf->DCache__DOT__wb__DOT__entries_11_data[0xdU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xdU];
            vlSelf->DCache__DOT__wb__DOT__entries_11_data[0xeU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xeU];
            vlSelf->DCache__DOT__wb__DOT__entries_11_data[0xfU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xfU];
            vlSelf->DCache__DOT__wb__DOT__entries_11_snpTxnId 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_snpTxnId;
            vlSelf->DCache__DOT__wb__DOT__entries_11_resp 
                = ((5U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode))
                    ? 5U : ((IData)(vlSelf->DCache__DOT__wb__DOT___reqResp_T_5)
                             ? 0U : (IData)(vlSelf->DCache__DOT__wb__DOT___reqResp_T_7)));
        }
        if (vlSelf->DCache__DOT__wb__DOT__doAlloc_2) {
            vlSelf->DCache__DOT__wb__DOT__entries_2_data[0U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0U];
            vlSelf->DCache__DOT__wb__DOT__entries_2_data[1U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[1U];
            vlSelf->DCache__DOT__wb__DOT__entries_2_data[2U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[2U];
            vlSelf->DCache__DOT__wb__DOT__entries_2_data[3U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[3U];
            vlSelf->DCache__DOT__wb__DOT__entries_2_data[4U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[4U];
            vlSelf->DCache__DOT__wb__DOT__entries_2_data[5U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[5U];
            vlSelf->DCache__DOT__wb__DOT__entries_2_data[6U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[6U];
            vlSelf->DCache__DOT__wb__DOT__entries_2_data[7U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[7U];
            vlSelf->DCache__DOT__wb__DOT__entries_2_data[8U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[8U];
            vlSelf->DCache__DOT__wb__DOT__entries_2_data[9U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[9U];
            vlSelf->DCache__DOT__wb__DOT__entries_2_data[0xaU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xaU];
            vlSelf->DCache__DOT__wb__DOT__entries_2_data[0xbU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xbU];
            vlSelf->DCache__DOT__wb__DOT__entries_2_data[0xcU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xcU];
            vlSelf->DCache__DOT__wb__DOT__entries_2_data[0xdU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xdU];
            vlSelf->DCache__DOT__wb__DOT__entries_2_data[0xeU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xeU];
            vlSelf->DCache__DOT__wb__DOT__entries_2_data[0xfU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xfU];
            vlSelf->DCache__DOT__wb__DOT__entries_2_snpTxnId 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_snpTxnId;
            vlSelf->DCache__DOT__wb__DOT__entries_2_resp 
                = ((5U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode))
                    ? 5U : ((IData)(vlSelf->DCache__DOT__wb__DOT___reqResp_T_5)
                             ? 0U : (IData)(vlSelf->DCache__DOT__wb__DOT___reqResp_T_7)));
        }
        if (vlSelf->DCache__DOT__wb__DOT__doAlloc_8) {
            vlSelf->DCache__DOT__wb__DOT__entries_8_data[0U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0U];
            vlSelf->DCache__DOT__wb__DOT__entries_8_data[1U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[1U];
            vlSelf->DCache__DOT__wb__DOT__entries_8_data[2U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[2U];
            vlSelf->DCache__DOT__wb__DOT__entries_8_data[3U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[3U];
            vlSelf->DCache__DOT__wb__DOT__entries_8_data[4U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[4U];
            vlSelf->DCache__DOT__wb__DOT__entries_8_data[5U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[5U];
            vlSelf->DCache__DOT__wb__DOT__entries_8_data[6U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[6U];
            vlSelf->DCache__DOT__wb__DOT__entries_8_data[7U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[7U];
            vlSelf->DCache__DOT__wb__DOT__entries_8_data[8U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[8U];
            vlSelf->DCache__DOT__wb__DOT__entries_8_data[9U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[9U];
            vlSelf->DCache__DOT__wb__DOT__entries_8_data[0xaU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xaU];
            vlSelf->DCache__DOT__wb__DOT__entries_8_data[0xbU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xbU];
            vlSelf->DCache__DOT__wb__DOT__entries_8_data[0xcU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xcU];
            vlSelf->DCache__DOT__wb__DOT__entries_8_data[0xdU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xdU];
            vlSelf->DCache__DOT__wb__DOT__entries_8_data[0xeU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xeU];
            vlSelf->DCache__DOT__wb__DOT__entries_8_data[0xfU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xfU];
            vlSelf->DCache__DOT__wb__DOT__entries_8_snpTxnId 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_snpTxnId;
            vlSelf->DCache__DOT__wb__DOT__entries_8_resp 
                = ((5U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode))
                    ? 5U : ((IData)(vlSelf->DCache__DOT__wb__DOT___reqResp_T_5)
                             ? 0U : (IData)(vlSelf->DCache__DOT__wb__DOT___reqResp_T_7)));
        }
        if (vlSelf->DCache__DOT__wb__DOT__doAlloc_3) {
            vlSelf->DCache__DOT__wb__DOT__entries_3_data[0U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0U];
            vlSelf->DCache__DOT__wb__DOT__entries_3_data[1U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[1U];
            vlSelf->DCache__DOT__wb__DOT__entries_3_data[2U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[2U];
            vlSelf->DCache__DOT__wb__DOT__entries_3_data[3U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[3U];
            vlSelf->DCache__DOT__wb__DOT__entries_3_data[4U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[4U];
            vlSelf->DCache__DOT__wb__DOT__entries_3_data[5U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[5U];
            vlSelf->DCache__DOT__wb__DOT__entries_3_data[6U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[6U];
            vlSelf->DCache__DOT__wb__DOT__entries_3_data[7U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[7U];
            vlSelf->DCache__DOT__wb__DOT__entries_3_data[8U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[8U];
            vlSelf->DCache__DOT__wb__DOT__entries_3_data[9U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[9U];
            vlSelf->DCache__DOT__wb__DOT__entries_3_data[0xaU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xaU];
            vlSelf->DCache__DOT__wb__DOT__entries_3_data[0xbU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xbU];
            vlSelf->DCache__DOT__wb__DOT__entries_3_data[0xcU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xcU];
            vlSelf->DCache__DOT__wb__DOT__entries_3_data[0xdU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xdU];
            vlSelf->DCache__DOT__wb__DOT__entries_3_data[0xeU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xeU];
            vlSelf->DCache__DOT__wb__DOT__entries_3_data[0xfU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xfU];
            vlSelf->DCache__DOT__wb__DOT__entries_3_snpTxnId 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_snpTxnId;
            vlSelf->DCache__DOT__wb__DOT__entries_3_resp 
                = ((5U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode))
                    ? 5U : ((IData)(vlSelf->DCache__DOT__wb__DOT___reqResp_T_5)
                             ? 0U : (IData)(vlSelf->DCache__DOT__wb__DOT___reqResp_T_7)));
        }
        if (vlSelf->DCache__DOT__wb__DOT__doAlloc_9) {
            vlSelf->DCache__DOT__wb__DOT__entries_9_data[0U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0U];
            vlSelf->DCache__DOT__wb__DOT__entries_9_data[1U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[1U];
            vlSelf->DCache__DOT__wb__DOT__entries_9_data[2U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[2U];
            vlSelf->DCache__DOT__wb__DOT__entries_9_data[3U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[3U];
            vlSelf->DCache__DOT__wb__DOT__entries_9_data[4U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[4U];
            vlSelf->DCache__DOT__wb__DOT__entries_9_data[5U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[5U];
            vlSelf->DCache__DOT__wb__DOT__entries_9_data[6U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[6U];
            vlSelf->DCache__DOT__wb__DOT__entries_9_data[7U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[7U];
            vlSelf->DCache__DOT__wb__DOT__entries_9_data[8U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[8U];
            vlSelf->DCache__DOT__wb__DOT__entries_9_data[9U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[9U];
            vlSelf->DCache__DOT__wb__DOT__entries_9_data[0xaU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xaU];
            vlSelf->DCache__DOT__wb__DOT__entries_9_data[0xbU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xbU];
            vlSelf->DCache__DOT__wb__DOT__entries_9_data[0xcU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xcU];
            vlSelf->DCache__DOT__wb__DOT__entries_9_data[0xdU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xdU];
            vlSelf->DCache__DOT__wb__DOT__entries_9_data[0xeU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xeU];
            vlSelf->DCache__DOT__wb__DOT__entries_9_data[0xfU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xfU];
            vlSelf->DCache__DOT__wb__DOT__entries_9_snpTxnId 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_snpTxnId;
            vlSelf->DCache__DOT__wb__DOT__entries_9_resp 
                = ((5U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode))
                    ? 5U : ((IData)(vlSelf->DCache__DOT__wb__DOT___reqResp_T_5)
                             ? 0U : (IData)(vlSelf->DCache__DOT__wb__DOT___reqResp_T_7)));
        }
        if (vlSelf->DCache__DOT__wb__DOT__doAlloc_4) {
            vlSelf->DCache__DOT__wb__DOT__entries_4_data[0U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0U];
            vlSelf->DCache__DOT__wb__DOT__entries_4_data[1U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[1U];
            vlSelf->DCache__DOT__wb__DOT__entries_4_data[2U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[2U];
            vlSelf->DCache__DOT__wb__DOT__entries_4_data[3U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[3U];
            vlSelf->DCache__DOT__wb__DOT__entries_4_data[4U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[4U];
            vlSelf->DCache__DOT__wb__DOT__entries_4_data[5U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[5U];
            vlSelf->DCache__DOT__wb__DOT__entries_4_data[6U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[6U];
            vlSelf->DCache__DOT__wb__DOT__entries_4_data[7U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[7U];
            vlSelf->DCache__DOT__wb__DOT__entries_4_data[8U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[8U];
            vlSelf->DCache__DOT__wb__DOT__entries_4_data[9U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[9U];
            vlSelf->DCache__DOT__wb__DOT__entries_4_data[0xaU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xaU];
            vlSelf->DCache__DOT__wb__DOT__entries_4_data[0xbU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xbU];
            vlSelf->DCache__DOT__wb__DOT__entries_4_data[0xcU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xcU];
            vlSelf->DCache__DOT__wb__DOT__entries_4_data[0xdU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xdU];
            vlSelf->DCache__DOT__wb__DOT__entries_4_data[0xeU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xeU];
            vlSelf->DCache__DOT__wb__DOT__entries_4_data[0xfU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xfU];
            vlSelf->DCache__DOT__wb__DOT__entries_4_snpTxnId 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_snpTxnId;
            vlSelf->DCache__DOT__wb__DOT__entries_4_resp 
                = ((5U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode))
                    ? 5U : ((IData)(vlSelf->DCache__DOT__wb__DOT___reqResp_T_5)
                             ? 0U : (IData)(vlSelf->DCache__DOT__wb__DOT___reqResp_T_7)));
        }
        if (vlSelf->DCache__DOT__wb__DOT__doAlloc_10) {
            vlSelf->DCache__DOT__wb__DOT__entries_10_data[0U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0U];
            vlSelf->DCache__DOT__wb__DOT__entries_10_data[1U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[1U];
            vlSelf->DCache__DOT__wb__DOT__entries_10_data[2U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[2U];
            vlSelf->DCache__DOT__wb__DOT__entries_10_data[3U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[3U];
            vlSelf->DCache__DOT__wb__DOT__entries_10_data[4U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[4U];
            vlSelf->DCache__DOT__wb__DOT__entries_10_data[5U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[5U];
            vlSelf->DCache__DOT__wb__DOT__entries_10_data[6U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[6U];
            vlSelf->DCache__DOT__wb__DOT__entries_10_data[7U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[7U];
            vlSelf->DCache__DOT__wb__DOT__entries_10_data[8U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[8U];
            vlSelf->DCache__DOT__wb__DOT__entries_10_data[9U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[9U];
            vlSelf->DCache__DOT__wb__DOT__entries_10_data[0xaU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xaU];
            vlSelf->DCache__DOT__wb__DOT__entries_10_data[0xbU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xbU];
            vlSelf->DCache__DOT__wb__DOT__entries_10_data[0xcU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xcU];
            vlSelf->DCache__DOT__wb__DOT__entries_10_data[0xdU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xdU];
            vlSelf->DCache__DOT__wb__DOT__entries_10_data[0xeU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xeU];
            vlSelf->DCache__DOT__wb__DOT__entries_10_data[0xfU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xfU];
            vlSelf->DCache__DOT__wb__DOT__entries_10_snpTxnId 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_snpTxnId;
            vlSelf->DCache__DOT__wb__DOT__entries_10_resp 
                = ((5U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode))
                    ? 5U : ((IData)(vlSelf->DCache__DOT__wb__DOT___reqResp_T_5)
                             ? 0U : (IData)(vlSelf->DCache__DOT__wb__DOT___reqResp_T_7)));
        }
        if (vlSelf->DCache__DOT__wb__DOT__doAlloc) {
            vlSelf->DCache__DOT__wb__DOT__entries_0_data[0U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0U];
            vlSelf->DCache__DOT__wb__DOT__entries_0_data[1U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[1U];
            vlSelf->DCache__DOT__wb__DOT__entries_0_data[2U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[2U];
            vlSelf->DCache__DOT__wb__DOT__entries_0_data[3U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[3U];
            vlSelf->DCache__DOT__wb__DOT__entries_0_data[4U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[4U];
            vlSelf->DCache__DOT__wb__DOT__entries_0_data[5U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[5U];
            vlSelf->DCache__DOT__wb__DOT__entries_0_data[6U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[6U];
            vlSelf->DCache__DOT__wb__DOT__entries_0_data[7U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[7U];
            vlSelf->DCache__DOT__wb__DOT__entries_0_data[8U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[8U];
            vlSelf->DCache__DOT__wb__DOT__entries_0_data[9U] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[9U];
            vlSelf->DCache__DOT__wb__DOT__entries_0_data[0xaU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xaU];
            vlSelf->DCache__DOT__wb__DOT__entries_0_data[0xbU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xbU];
            vlSelf->DCache__DOT__wb__DOT__entries_0_data[0xcU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xcU];
            vlSelf->DCache__DOT__wb__DOT__entries_0_data[0xdU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xdU];
            vlSelf->DCache__DOT__wb__DOT__entries_0_data[0xeU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xeU];
            vlSelf->DCache__DOT__wb__DOT__entries_0_data[0xfU] 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_data[0xfU];
            vlSelf->DCache__DOT__wb__DOT__entries_0_snpTxnId 
                = vlSelf->DCache__DOT__pipe_io_wbReq_bits_snpTxnId;
            vlSelf->DCache__DOT__wb__DOT__entries_0_resp 
                = ((5U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode))
                    ? 5U : ((IData)(vlSelf->DCache__DOT__wb__DOT___reqResp_T_5)
                             ? 0U : (IData)(vlSelf->DCache__DOT__wb__DOT___reqResp_T_7)));
        }
        if (vlSelf->DCache__DOT__miss__DOT__rxd_15) {
            if (vlSelf->DCache__DOT__miss__DOT__seen_15) {
                vlSelf->DCache__DOT__miss__DOT__entries_15_compId 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_3441;
                vlSelf->DCache__DOT__miss__DOT__entries_15_respErr 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_3439;
                vlSelf->DCache__DOT__miss__DOT__entries_15_resp 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_3438;
                vlSelf->DCache__DOT__miss__DOT__entries_15_dbid 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_3437;
            } else {
                vlSelf->DCache__DOT__miss__DOT__entries_15_compId 
                    = vlSelf->io_l2_rxDat_bits_srcID;
                vlSelf->DCache__DOT__miss__DOT__entries_15_respErr 
                    = vlSelf->io_l2_rxDat_bits_respErr;
                vlSelf->DCache__DOT__miss__DOT__entries_15_resp 
                    = vlSelf->io_l2_rxDat_bits_resp;
                vlSelf->DCache__DOT__miss__DOT__entries_15_dbid 
                    = vlSelf->io_l2_rxDat_bits_dbID;
            }
        } else {
            vlSelf->DCache__DOT__miss__DOT__entries_15_compId 
                = vlSelf->DCache__DOT__miss__DOT___GEN_3441;
            vlSelf->DCache__DOT__miss__DOT__entries_15_respErr 
                = vlSelf->DCache__DOT__miss__DOT___GEN_3439;
            vlSelf->DCache__DOT__miss__DOT__entries_15_resp 
                = vlSelf->DCache__DOT__miss__DOT___GEN_3438;
            vlSelf->DCache__DOT__miss__DOT__entries_15_dbid 
                = vlSelf->DCache__DOT__miss__DOT___GEN_3437;
        }
        if (vlSelf->DCache__DOT__miss__DOT__rxd_14) {
            if (vlSelf->DCache__DOT__miss__DOT__seen_14) {
                vlSelf->DCache__DOT__miss__DOT__entries_14_compId 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_3242;
                vlSelf->DCache__DOT__miss__DOT__entries_14_respErr 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_3240;
                vlSelf->DCache__DOT__miss__DOT__entries_14_resp 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_3239;
                vlSelf->DCache__DOT__miss__DOT__entries_14_dbid 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_3238;
            } else {
                vlSelf->DCache__DOT__miss__DOT__entries_14_compId 
                    = vlSelf->io_l2_rxDat_bits_srcID;
                vlSelf->DCache__DOT__miss__DOT__entries_14_respErr 
                    = vlSelf->io_l2_rxDat_bits_respErr;
                vlSelf->DCache__DOT__miss__DOT__entries_14_resp 
                    = vlSelf->io_l2_rxDat_bits_resp;
                vlSelf->DCache__DOT__miss__DOT__entries_14_dbid 
                    = vlSelf->io_l2_rxDat_bits_dbID;
            }
        } else {
            vlSelf->DCache__DOT__miss__DOT__entries_14_compId 
                = vlSelf->DCache__DOT__miss__DOT___GEN_3242;
            vlSelf->DCache__DOT__miss__DOT__entries_14_respErr 
                = vlSelf->DCache__DOT__miss__DOT___GEN_3240;
            vlSelf->DCache__DOT__miss__DOT__entries_14_resp 
                = vlSelf->DCache__DOT__miss__DOT___GEN_3239;
            vlSelf->DCache__DOT__miss__DOT__entries_14_dbid 
                = vlSelf->DCache__DOT__miss__DOT___GEN_3238;
        }
        if (vlSelf->DCache__DOT__miss__DOT__rxd_13) {
            if (vlSelf->DCache__DOT__miss__DOT__seen_13) {
                vlSelf->DCache__DOT__miss__DOT__entries_13_compId 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_3043;
                vlSelf->DCache__DOT__miss__DOT__entries_13_respErr 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_3041;
                vlSelf->DCache__DOT__miss__DOT__entries_13_resp 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_3040;
                vlSelf->DCache__DOT__miss__DOT__entries_13_dbid 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_3039;
            } else {
                vlSelf->DCache__DOT__miss__DOT__entries_13_compId 
                    = vlSelf->io_l2_rxDat_bits_srcID;
                vlSelf->DCache__DOT__miss__DOT__entries_13_respErr 
                    = vlSelf->io_l2_rxDat_bits_respErr;
                vlSelf->DCache__DOT__miss__DOT__entries_13_resp 
                    = vlSelf->io_l2_rxDat_bits_resp;
                vlSelf->DCache__DOT__miss__DOT__entries_13_dbid 
                    = vlSelf->io_l2_rxDat_bits_dbID;
            }
        } else {
            vlSelf->DCache__DOT__miss__DOT__entries_13_compId 
                = vlSelf->DCache__DOT__miss__DOT___GEN_3043;
            vlSelf->DCache__DOT__miss__DOT__entries_13_respErr 
                = vlSelf->DCache__DOT__miss__DOT___GEN_3041;
            vlSelf->DCache__DOT__miss__DOT__entries_13_resp 
                = vlSelf->DCache__DOT__miss__DOT___GEN_3040;
            vlSelf->DCache__DOT__miss__DOT__entries_13_dbid 
                = vlSelf->DCache__DOT__miss__DOT___GEN_3039;
        }
        if (vlSelf->DCache__DOT__miss__DOT__rxd_12) {
            if (vlSelf->DCache__DOT__miss__DOT__seen_12) {
                vlSelf->DCache__DOT__miss__DOT__entries_12_compId 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_2844;
                vlSelf->DCache__DOT__miss__DOT__entries_12_respErr 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_2842;
                vlSelf->DCache__DOT__miss__DOT__entries_12_resp 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_2841;
                vlSelf->DCache__DOT__miss__DOT__entries_12_dbid 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_2840;
            } else {
                vlSelf->DCache__DOT__miss__DOT__entries_12_compId 
                    = vlSelf->io_l2_rxDat_bits_srcID;
                vlSelf->DCache__DOT__miss__DOT__entries_12_respErr 
                    = vlSelf->io_l2_rxDat_bits_respErr;
                vlSelf->DCache__DOT__miss__DOT__entries_12_resp 
                    = vlSelf->io_l2_rxDat_bits_resp;
                vlSelf->DCache__DOT__miss__DOT__entries_12_dbid 
                    = vlSelf->io_l2_rxDat_bits_dbID;
            }
        } else {
            vlSelf->DCache__DOT__miss__DOT__entries_12_compId 
                = vlSelf->DCache__DOT__miss__DOT___GEN_2844;
            vlSelf->DCache__DOT__miss__DOT__entries_12_respErr 
                = vlSelf->DCache__DOT__miss__DOT___GEN_2842;
            vlSelf->DCache__DOT__miss__DOT__entries_12_resp 
                = vlSelf->DCache__DOT__miss__DOT___GEN_2841;
            vlSelf->DCache__DOT__miss__DOT__entries_12_dbid 
                = vlSelf->DCache__DOT__miss__DOT___GEN_2840;
        }
        if (vlSelf->DCache__DOT__miss__DOT__rxd_5) {
            if (vlSelf->DCache__DOT__miss__DOT__seen_5) {
                vlSelf->DCache__DOT__miss__DOT__entries_5_compId 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_1451;
                vlSelf->DCache__DOT__miss__DOT__entries_5_respErr 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_1449;
                vlSelf->DCache__DOT__miss__DOT__entries_5_resp 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_1448;
                vlSelf->DCache__DOT__miss__DOT__entries_5_dbid 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_1447;
            } else {
                vlSelf->DCache__DOT__miss__DOT__entries_5_compId 
                    = vlSelf->io_l2_rxDat_bits_srcID;
                vlSelf->DCache__DOT__miss__DOT__entries_5_respErr 
                    = vlSelf->io_l2_rxDat_bits_respErr;
                vlSelf->DCache__DOT__miss__DOT__entries_5_resp 
                    = vlSelf->io_l2_rxDat_bits_resp;
                vlSelf->DCache__DOT__miss__DOT__entries_5_dbid 
                    = vlSelf->io_l2_rxDat_bits_dbID;
            }
        } else {
            vlSelf->DCache__DOT__miss__DOT__entries_5_compId 
                = vlSelf->DCache__DOT__miss__DOT___GEN_1451;
            vlSelf->DCache__DOT__miss__DOT__entries_5_respErr 
                = vlSelf->DCache__DOT__miss__DOT___GEN_1449;
            vlSelf->DCache__DOT__miss__DOT__entries_5_resp 
                = vlSelf->DCache__DOT__miss__DOT___GEN_1448;
            vlSelf->DCache__DOT__miss__DOT__entries_5_dbid 
                = vlSelf->DCache__DOT__miss__DOT___GEN_1447;
        }
        if (vlSelf->DCache__DOT__miss__DOT__rxd_1) {
            if (vlSelf->DCache__DOT__miss__DOT__seen_1) {
                vlSelf->DCache__DOT__miss__DOT__entries_1_compId 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_655;
                vlSelf->DCache__DOT__miss__DOT__entries_1_respErr 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_653;
                vlSelf->DCache__DOT__miss__DOT__entries_1_resp 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_652;
                vlSelf->DCache__DOT__miss__DOT__entries_1_dbid 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_651;
            } else {
                vlSelf->DCache__DOT__miss__DOT__entries_1_compId 
                    = vlSelf->io_l2_rxDat_bits_srcID;
                vlSelf->DCache__DOT__miss__DOT__entries_1_respErr 
                    = vlSelf->io_l2_rxDat_bits_respErr;
                vlSelf->DCache__DOT__miss__DOT__entries_1_resp 
                    = vlSelf->io_l2_rxDat_bits_resp;
                vlSelf->DCache__DOT__miss__DOT__entries_1_dbid 
                    = vlSelf->io_l2_rxDat_bits_dbID;
            }
        } else {
            vlSelf->DCache__DOT__miss__DOT__entries_1_compId 
                = vlSelf->DCache__DOT__miss__DOT___GEN_655;
            vlSelf->DCache__DOT__miss__DOT__entries_1_respErr 
                = vlSelf->DCache__DOT__miss__DOT___GEN_653;
            vlSelf->DCache__DOT__miss__DOT__entries_1_resp 
                = vlSelf->DCache__DOT__miss__DOT___GEN_652;
            vlSelf->DCache__DOT__miss__DOT__entries_1_dbid 
                = vlSelf->DCache__DOT__miss__DOT___GEN_651;
        }
        if (vlSelf->DCache__DOT__miss__DOT__rxd_4) {
            if (vlSelf->DCache__DOT__miss__DOT__seen_4) {
                vlSelf->DCache__DOT__miss__DOT__entries_4_compId 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_1252;
                vlSelf->DCache__DOT__miss__DOT__entries_4_respErr 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_1250;
                vlSelf->DCache__DOT__miss__DOT__entries_4_resp 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_1249;
                vlSelf->DCache__DOT__miss__DOT__entries_4_dbid 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_1248;
            } else {
                vlSelf->DCache__DOT__miss__DOT__entries_4_compId 
                    = vlSelf->io_l2_rxDat_bits_srcID;
                vlSelf->DCache__DOT__miss__DOT__entries_4_respErr 
                    = vlSelf->io_l2_rxDat_bits_respErr;
                vlSelf->DCache__DOT__miss__DOT__entries_4_resp 
                    = vlSelf->io_l2_rxDat_bits_resp;
                vlSelf->DCache__DOT__miss__DOT__entries_4_dbid 
                    = vlSelf->io_l2_rxDat_bits_dbID;
            }
        } else {
            vlSelf->DCache__DOT__miss__DOT__entries_4_compId 
                = vlSelf->DCache__DOT__miss__DOT___GEN_1252;
            vlSelf->DCache__DOT__miss__DOT__entries_4_respErr 
                = vlSelf->DCache__DOT__miss__DOT___GEN_1250;
            vlSelf->DCache__DOT__miss__DOT__entries_4_resp 
                = vlSelf->DCache__DOT__miss__DOT___GEN_1249;
            vlSelf->DCache__DOT__miss__DOT__entries_4_dbid 
                = vlSelf->DCache__DOT__miss__DOT___GEN_1248;
        }
        if (vlSelf->DCache__DOT__miss__DOT__rxd_2) {
            if (vlSelf->DCache__DOT__miss__DOT__seen_2) {
                vlSelf->DCache__DOT__miss__DOT__entries_2_compId 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_854;
                vlSelf->DCache__DOT__miss__DOT__entries_2_respErr 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_852;
                vlSelf->DCache__DOT__miss__DOT__entries_2_resp 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_851;
                vlSelf->DCache__DOT__miss__DOT__entries_2_dbid 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_850;
            } else {
                vlSelf->DCache__DOT__miss__DOT__entries_2_compId 
                    = vlSelf->io_l2_rxDat_bits_srcID;
                vlSelf->DCache__DOT__miss__DOT__entries_2_respErr 
                    = vlSelf->io_l2_rxDat_bits_respErr;
                vlSelf->DCache__DOT__miss__DOT__entries_2_resp 
                    = vlSelf->io_l2_rxDat_bits_resp;
                vlSelf->DCache__DOT__miss__DOT__entries_2_dbid 
                    = vlSelf->io_l2_rxDat_bits_dbID;
            }
        } else {
            vlSelf->DCache__DOT__miss__DOT__entries_2_compId 
                = vlSelf->DCache__DOT__miss__DOT___GEN_854;
            vlSelf->DCache__DOT__miss__DOT__entries_2_respErr 
                = vlSelf->DCache__DOT__miss__DOT___GEN_852;
            vlSelf->DCache__DOT__miss__DOT__entries_2_resp 
                = vlSelf->DCache__DOT__miss__DOT___GEN_851;
            vlSelf->DCache__DOT__miss__DOT__entries_2_dbid 
                = vlSelf->DCache__DOT__miss__DOT___GEN_850;
        }
        if (vlSelf->DCache__DOT__miss__DOT__rxd) {
            if (vlSelf->DCache__DOT__miss__DOT__seen) {
                vlSelf->DCache__DOT__miss__DOT__entries_0_compId 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_456;
                vlSelf->DCache__DOT__miss__DOT__entries_0_respErr 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_454;
                vlSelf->DCache__DOT__miss__DOT__entries_0_resp 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_453;
                vlSelf->DCache__DOT__miss__DOT__entries_0_dbid 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_452;
            } else {
                vlSelf->DCache__DOT__miss__DOT__entries_0_compId 
                    = vlSelf->io_l2_rxDat_bits_srcID;
                vlSelf->DCache__DOT__miss__DOT__entries_0_respErr 
                    = vlSelf->io_l2_rxDat_bits_respErr;
                vlSelf->DCache__DOT__miss__DOT__entries_0_resp 
                    = vlSelf->io_l2_rxDat_bits_resp;
                vlSelf->DCache__DOT__miss__DOT__entries_0_dbid 
                    = vlSelf->io_l2_rxDat_bits_dbID;
            }
        } else {
            vlSelf->DCache__DOT__miss__DOT__entries_0_compId 
                = vlSelf->DCache__DOT__miss__DOT___GEN_456;
            vlSelf->DCache__DOT__miss__DOT__entries_0_respErr 
                = vlSelf->DCache__DOT__miss__DOT___GEN_454;
            vlSelf->DCache__DOT__miss__DOT__entries_0_resp 
                = vlSelf->DCache__DOT__miss__DOT___GEN_453;
            vlSelf->DCache__DOT__miss__DOT__entries_0_dbid 
                = vlSelf->DCache__DOT__miss__DOT___GEN_452;
        }
        if (vlSelf->DCache__DOT__miss__DOT__rxd_10) {
            if (vlSelf->DCache__DOT__miss__DOT__seen_10) {
                vlSelf->DCache__DOT__miss__DOT__entries_10_compId 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_2446;
                vlSelf->DCache__DOT__miss__DOT__entries_10_respErr 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_2444;
                vlSelf->DCache__DOT__miss__DOT__entries_10_resp 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_2443;
                vlSelf->DCache__DOT__miss__DOT__entries_10_dbid 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_2442;
            } else {
                vlSelf->DCache__DOT__miss__DOT__entries_10_compId 
                    = vlSelf->io_l2_rxDat_bits_srcID;
                vlSelf->DCache__DOT__miss__DOT__entries_10_respErr 
                    = vlSelf->io_l2_rxDat_bits_respErr;
                vlSelf->DCache__DOT__miss__DOT__entries_10_resp 
                    = vlSelf->io_l2_rxDat_bits_resp;
                vlSelf->DCache__DOT__miss__DOT__entries_10_dbid 
                    = vlSelf->io_l2_rxDat_bits_dbID;
            }
        } else {
            vlSelf->DCache__DOT__miss__DOT__entries_10_compId 
                = vlSelf->DCache__DOT__miss__DOT___GEN_2446;
            vlSelf->DCache__DOT__miss__DOT__entries_10_respErr 
                = vlSelf->DCache__DOT__miss__DOT___GEN_2444;
            vlSelf->DCache__DOT__miss__DOT__entries_10_resp 
                = vlSelf->DCache__DOT__miss__DOT___GEN_2443;
            vlSelf->DCache__DOT__miss__DOT__entries_10_dbid 
                = vlSelf->DCache__DOT__miss__DOT___GEN_2442;
        }
        if (vlSelf->DCache__DOT__miss__DOT__rxd_3) {
            if (vlSelf->DCache__DOT__miss__DOT__seen_3) {
                vlSelf->DCache__DOT__miss__DOT__entries_3_compId 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_1053;
                vlSelf->DCache__DOT__miss__DOT__entries_3_respErr 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_1051;
                vlSelf->DCache__DOT__miss__DOT__entries_3_resp 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_1050;
                vlSelf->DCache__DOT__miss__DOT__entries_3_dbid 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_1049;
            } else {
                vlSelf->DCache__DOT__miss__DOT__entries_3_compId 
                    = vlSelf->io_l2_rxDat_bits_srcID;
                vlSelf->DCache__DOT__miss__DOT__entries_3_respErr 
                    = vlSelf->io_l2_rxDat_bits_respErr;
                vlSelf->DCache__DOT__miss__DOT__entries_3_resp 
                    = vlSelf->io_l2_rxDat_bits_resp;
                vlSelf->DCache__DOT__miss__DOT__entries_3_dbid 
                    = vlSelf->io_l2_rxDat_bits_dbID;
            }
        } else {
            vlSelf->DCache__DOT__miss__DOT__entries_3_compId 
                = vlSelf->DCache__DOT__miss__DOT___GEN_1053;
            vlSelf->DCache__DOT__miss__DOT__entries_3_respErr 
                = vlSelf->DCache__DOT__miss__DOT___GEN_1051;
            vlSelf->DCache__DOT__miss__DOT__entries_3_resp 
                = vlSelf->DCache__DOT__miss__DOT___GEN_1050;
            vlSelf->DCache__DOT__miss__DOT__entries_3_dbid 
                = vlSelf->DCache__DOT__miss__DOT___GEN_1049;
        }
        if (vlSelf->DCache__DOT__miss__DOT__rxd_11) {
            if (vlSelf->DCache__DOT__miss__DOT__seen_11) {
                vlSelf->DCache__DOT__miss__DOT__entries_11_compId 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_2645;
                vlSelf->DCache__DOT__miss__DOT__entries_11_respErr 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_2643;
                vlSelf->DCache__DOT__miss__DOT__entries_11_resp 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_2642;
                vlSelf->DCache__DOT__miss__DOT__entries_11_dbid 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_2641;
            } else {
                vlSelf->DCache__DOT__miss__DOT__entries_11_compId 
                    = vlSelf->io_l2_rxDat_bits_srcID;
                vlSelf->DCache__DOT__miss__DOT__entries_11_respErr 
                    = vlSelf->io_l2_rxDat_bits_respErr;
                vlSelf->DCache__DOT__miss__DOT__entries_11_resp 
                    = vlSelf->io_l2_rxDat_bits_resp;
                vlSelf->DCache__DOT__miss__DOT__entries_11_dbid 
                    = vlSelf->io_l2_rxDat_bits_dbID;
            }
        } else {
            vlSelf->DCache__DOT__miss__DOT__entries_11_compId 
                = vlSelf->DCache__DOT__miss__DOT___GEN_2645;
            vlSelf->DCache__DOT__miss__DOT__entries_11_respErr 
                = vlSelf->DCache__DOT__miss__DOT___GEN_2643;
            vlSelf->DCache__DOT__miss__DOT__entries_11_resp 
                = vlSelf->DCache__DOT__miss__DOT___GEN_2642;
            vlSelf->DCache__DOT__miss__DOT__entries_11_dbid 
                = vlSelf->DCache__DOT__miss__DOT___GEN_2641;
        }
        if (vlSelf->DCache__DOT__miss__DOT__rxd_6) {
            if (vlSelf->DCache__DOT__miss__DOT__seen_6) {
                vlSelf->DCache__DOT__miss__DOT__entries_6_compId 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_1650;
                vlSelf->DCache__DOT__miss__DOT__entries_6_respErr 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_1648;
                vlSelf->DCache__DOT__miss__DOT__entries_6_resp 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_1647;
                vlSelf->DCache__DOT__miss__DOT__entries_6_dbid 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_1646;
            } else {
                vlSelf->DCache__DOT__miss__DOT__entries_6_compId 
                    = vlSelf->io_l2_rxDat_bits_srcID;
                vlSelf->DCache__DOT__miss__DOT__entries_6_respErr 
                    = vlSelf->io_l2_rxDat_bits_respErr;
                vlSelf->DCache__DOT__miss__DOT__entries_6_resp 
                    = vlSelf->io_l2_rxDat_bits_resp;
                vlSelf->DCache__DOT__miss__DOT__entries_6_dbid 
                    = vlSelf->io_l2_rxDat_bits_dbID;
            }
        } else {
            vlSelf->DCache__DOT__miss__DOT__entries_6_compId 
                = vlSelf->DCache__DOT__miss__DOT___GEN_1650;
            vlSelf->DCache__DOT__miss__DOT__entries_6_respErr 
                = vlSelf->DCache__DOT__miss__DOT___GEN_1648;
            vlSelf->DCache__DOT__miss__DOT__entries_6_resp 
                = vlSelf->DCache__DOT__miss__DOT___GEN_1647;
            vlSelf->DCache__DOT__miss__DOT__entries_6_dbid 
                = vlSelf->DCache__DOT__miss__DOT___GEN_1646;
        }
        if (vlSelf->DCache__DOT__miss__DOT__rxd_7) {
            if (vlSelf->DCache__DOT__miss__DOT__seen_7) {
                vlSelf->DCache__DOT__miss__DOT__entries_7_compId 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_1849;
                vlSelf->DCache__DOT__miss__DOT__entries_7_respErr 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_1847;
                vlSelf->DCache__DOT__miss__DOT__entries_7_resp 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_1846;
                vlSelf->DCache__DOT__miss__DOT__entries_7_dbid 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_1845;
            } else {
                vlSelf->DCache__DOT__miss__DOT__entries_7_compId 
                    = vlSelf->io_l2_rxDat_bits_srcID;
                vlSelf->DCache__DOT__miss__DOT__entries_7_respErr 
                    = vlSelf->io_l2_rxDat_bits_respErr;
                vlSelf->DCache__DOT__miss__DOT__entries_7_resp 
                    = vlSelf->io_l2_rxDat_bits_resp;
                vlSelf->DCache__DOT__miss__DOT__entries_7_dbid 
                    = vlSelf->io_l2_rxDat_bits_dbID;
            }
        } else {
            vlSelf->DCache__DOT__miss__DOT__entries_7_compId 
                = vlSelf->DCache__DOT__miss__DOT___GEN_1849;
            vlSelf->DCache__DOT__miss__DOT__entries_7_respErr 
                = vlSelf->DCache__DOT__miss__DOT___GEN_1847;
            vlSelf->DCache__DOT__miss__DOT__entries_7_resp 
                = vlSelf->DCache__DOT__miss__DOT___GEN_1846;
            vlSelf->DCache__DOT__miss__DOT__entries_7_dbid 
                = vlSelf->DCache__DOT__miss__DOT___GEN_1845;
        }
        if (vlSelf->DCache__DOT__miss__DOT__rxd_8) {
            if (vlSelf->DCache__DOT__miss__DOT__seen_8) {
                vlSelf->DCache__DOT__miss__DOT__entries_8_compId 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_2048;
                vlSelf->DCache__DOT__miss__DOT__entries_8_respErr 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_2046;
                vlSelf->DCache__DOT__miss__DOT__entries_8_resp 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_2045;
                vlSelf->DCache__DOT__miss__DOT__entries_8_dbid 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_2044;
            } else {
                vlSelf->DCache__DOT__miss__DOT__entries_8_compId 
                    = vlSelf->io_l2_rxDat_bits_srcID;
                vlSelf->DCache__DOT__miss__DOT__entries_8_respErr 
                    = vlSelf->io_l2_rxDat_bits_respErr;
                vlSelf->DCache__DOT__miss__DOT__entries_8_resp 
                    = vlSelf->io_l2_rxDat_bits_resp;
                vlSelf->DCache__DOT__miss__DOT__entries_8_dbid 
                    = vlSelf->io_l2_rxDat_bits_dbID;
            }
        } else {
            vlSelf->DCache__DOT__miss__DOT__entries_8_compId 
                = vlSelf->DCache__DOT__miss__DOT___GEN_2048;
            vlSelf->DCache__DOT__miss__DOT__entries_8_respErr 
                = vlSelf->DCache__DOT__miss__DOT___GEN_2046;
            vlSelf->DCache__DOT__miss__DOT__entries_8_resp 
                = vlSelf->DCache__DOT__miss__DOT___GEN_2045;
            vlSelf->DCache__DOT__miss__DOT__entries_8_dbid 
                = vlSelf->DCache__DOT__miss__DOT___GEN_2044;
        }
        if (vlSelf->DCache__DOT__miss__DOT__rxd_9) {
            if (vlSelf->DCache__DOT__miss__DOT__seen_9) {
                vlSelf->DCache__DOT__miss__DOT__entries_9_compId 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_2247;
                vlSelf->DCache__DOT__miss__DOT__entries_9_respErr 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_2245;
                vlSelf->DCache__DOT__miss__DOT__entries_9_resp 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_2244;
                vlSelf->DCache__DOT__miss__DOT__entries_9_dbid 
                    = vlSelf->DCache__DOT__miss__DOT___GEN_2243;
            } else {
                vlSelf->DCache__DOT__miss__DOT__entries_9_compId 
                    = vlSelf->io_l2_rxDat_bits_srcID;
                vlSelf->DCache__DOT__miss__DOT__entries_9_respErr 
                    = vlSelf->io_l2_rxDat_bits_respErr;
                vlSelf->DCache__DOT__miss__DOT__entries_9_resp 
                    = vlSelf->io_l2_rxDat_bits_resp;
                vlSelf->DCache__DOT__miss__DOT__entries_9_dbid 
                    = vlSelf->io_l2_rxDat_bits_dbID;
            }
        } else {
            vlSelf->DCache__DOT__miss__DOT__entries_9_compId 
                = vlSelf->DCache__DOT__miss__DOT___GEN_2247;
            vlSelf->DCache__DOT__miss__DOT__entries_9_respErr 
                = vlSelf->DCache__DOT__miss__DOT___GEN_2245;
            vlSelf->DCache__DOT__miss__DOT__entries_9_resp 
                = vlSelf->DCache__DOT__miss__DOT___GEN_2244;
            vlSelf->DCache__DOT__miss__DOT__entries_9_dbid 
                = vlSelf->DCache__DOT__miss__DOT___GEN_2243;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doS3_15) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_installed 
                = vlSelf->DCache__DOT__pipe_io_mainpipeInfo_installed;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_15) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_installed = 0U;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doS3_5) {
            vlSelf->DCache__DOT__miss__DOT__entries_5_installed 
                = vlSelf->DCache__DOT__pipe_io_mainpipeInfo_installed;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_5) {
            vlSelf->DCache__DOT__miss__DOT__entries_5_installed = 0U;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doS3_4) {
            vlSelf->DCache__DOT__miss__DOT__entries_4_installed 
                = vlSelf->DCache__DOT__pipe_io_mainpipeInfo_installed;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_4) {
            vlSelf->DCache__DOT__miss__DOT__entries_4_installed = 0U;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doS3_14) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_installed 
                = vlSelf->DCache__DOT__pipe_io_mainpipeInfo_installed;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_14) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_installed = 0U;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doS3_8) {
            vlSelf->DCache__DOT__miss__DOT__entries_8_installed 
                = vlSelf->DCache__DOT__pipe_io_mainpipeInfo_installed;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_8) {
            vlSelf->DCache__DOT__miss__DOT__entries_8_installed = 0U;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doS3_3) {
            vlSelf->DCache__DOT__miss__DOT__entries_3_installed 
                = vlSelf->DCache__DOT__pipe_io_mainpipeInfo_installed;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_3) {
            vlSelf->DCache__DOT__miss__DOT__entries_3_installed = 0U;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doS3_13) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_installed 
                = vlSelf->DCache__DOT__pipe_io_mainpipeInfo_installed;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_13) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_installed = 0U;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doS3_10) {
            vlSelf->DCache__DOT__miss__DOT__entries_10_installed 
                = vlSelf->DCache__DOT__pipe_io_mainpipeInfo_installed;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_10) {
            vlSelf->DCache__DOT__miss__DOT__entries_10_installed = 0U;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doS3_12) {
            vlSelf->DCache__DOT__miss__DOT__entries_12_installed 
                = vlSelf->DCache__DOT__pipe_io_mainpipeInfo_installed;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_12) {
            vlSelf->DCache__DOT__miss__DOT__entries_12_installed = 0U;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doS3_9) {
            vlSelf->DCache__DOT__miss__DOT__entries_9_installed 
                = vlSelf->DCache__DOT__pipe_io_mainpipeInfo_installed;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_9) {
            vlSelf->DCache__DOT__miss__DOT__entries_9_installed = 0U;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doS3_2) {
            vlSelf->DCache__DOT__miss__DOT__entries_2_installed 
                = vlSelf->DCache__DOT__pipe_io_mainpipeInfo_installed;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_2) {
            vlSelf->DCache__DOT__miss__DOT__entries_2_installed = 0U;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doS3_1) {
            vlSelf->DCache__DOT__miss__DOT__entries_1_installed 
                = vlSelf->DCache__DOT__pipe_io_mainpipeInfo_installed;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_1) {
            vlSelf->DCache__DOT__miss__DOT__entries_1_installed = 0U;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doS3_6) {
            vlSelf->DCache__DOT__miss__DOT__entries_6_installed 
                = vlSelf->DCache__DOT__pipe_io_mainpipeInfo_installed;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_6) {
            vlSelf->DCache__DOT__miss__DOT__entries_6_installed = 0U;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doS3_7) {
            vlSelf->DCache__DOT__miss__DOT__entries_7_installed 
                = vlSelf->DCache__DOT__pipe_io_mainpipeInfo_installed;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_7) {
            vlSelf->DCache__DOT__miss__DOT__entries_7_installed = 0U;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doS3) {
            vlSelf->DCache__DOT__miss__DOT__entries_0_installed 
                = vlSelf->DCache__DOT__pipe_io_mainpipeInfo_installed;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc) {
            vlSelf->DCache__DOT__miss__DOT__entries_0_installed = 0U;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doS3_11) {
            vlSelf->DCache__DOT__miss__DOT__entries_11_installed 
                = vlSelf->DCache__DOT__pipe_io_mainpipeInfo_installed;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_11) {
            vlSelf->DCache__DOT__miss__DOT__entries_11_installed = 0U;
        }
        if (((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_17) 
             & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_rspSeen)))) {
            vlSelf->DCache__DOT__wb__DOT__entries_17_compSrc 
                = vlSelf->io_l2_rxRsp_bits_srcID;
            vlSelf->DCache__DOT__wb__DOT__entries_17_traceTag 
                = vlSelf->io_l2_rxRsp_bits_traceTag;
        } else if (vlSelf->DCache__DOT__wb__DOT__doAlloc_17) {
            vlSelf->DCache__DOT__wb__DOT__entries_17_compSrc = 0U;
            vlSelf->DCache__DOT__wb__DOT__entries_17_traceTag = 0U;
        }
        if (((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_16) 
             & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_rspSeen)))) {
            vlSelf->DCache__DOT__wb__DOT__entries_16_compSrc 
                = vlSelf->io_l2_rxRsp_bits_srcID;
            vlSelf->DCache__DOT__wb__DOT__entries_16_traceTag 
                = vlSelf->io_l2_rxRsp_bits_traceTag;
        } else if (vlSelf->DCache__DOT__wb__DOT__doAlloc_16) {
            vlSelf->DCache__DOT__wb__DOT__entries_16_compSrc = 0U;
            vlSelf->DCache__DOT__wb__DOT__entries_16_traceTag = 0U;
        }
        if (((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_15) 
             & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_rspSeen)))) {
            vlSelf->DCache__DOT__wb__DOT__entries_15_compSrc 
                = vlSelf->io_l2_rxRsp_bits_srcID;
            vlSelf->DCache__DOT__wb__DOT__entries_15_traceTag 
                = vlSelf->io_l2_rxRsp_bits_traceTag;
        } else if (vlSelf->DCache__DOT__wb__DOT__doAlloc_15) {
            vlSelf->DCache__DOT__wb__DOT__entries_15_compSrc = 0U;
            vlSelf->DCache__DOT__wb__DOT__entries_15_traceTag = 0U;
        }
        if (((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_6) 
             & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_rspSeen)))) {
            vlSelf->DCache__DOT__wb__DOT__entries_6_compSrc 
                = vlSelf->io_l2_rxRsp_bits_srcID;
            vlSelf->DCache__DOT__wb__DOT__entries_6_traceTag 
                = vlSelf->io_l2_rxRsp_bits_traceTag;
        } else if (vlSelf->DCache__DOT__wb__DOT__doAlloc_6) {
            vlSelf->DCache__DOT__wb__DOT__entries_6_compSrc = 0U;
            vlSelf->DCache__DOT__wb__DOT__entries_6_traceTag = 0U;
        }
        if (((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_14) 
             & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_rspSeen)))) {
            vlSelf->DCache__DOT__wb__DOT__entries_14_compSrc 
                = vlSelf->io_l2_rxRsp_bits_srcID;
            vlSelf->DCache__DOT__wb__DOT__entries_14_traceTag 
                = vlSelf->io_l2_rxRsp_bits_traceTag;
        } else if (vlSelf->DCache__DOT__wb__DOT__doAlloc_14) {
            vlSelf->DCache__DOT__wb__DOT__entries_14_compSrc = 0U;
            vlSelf->DCache__DOT__wb__DOT__entries_14_traceTag = 0U;
        }
        if (((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_3) 
             & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_rspSeen)))) {
            vlSelf->DCache__DOT__wb__DOT__entries_3_compSrc 
                = vlSelf->io_l2_rxRsp_bits_srcID;
            vlSelf->DCache__DOT__wb__DOT__entries_3_traceTag 
                = vlSelf->io_l2_rxRsp_bits_traceTag;
        } else if (vlSelf->DCache__DOT__wb__DOT__doAlloc_3) {
            vlSelf->DCache__DOT__wb__DOT__entries_3_compSrc = 0U;
            vlSelf->DCache__DOT__wb__DOT__entries_3_traceTag = 0U;
        }
        if (((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_5) 
             & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_rspSeen)))) {
            vlSelf->DCache__DOT__wb__DOT__entries_5_compSrc 
                = vlSelf->io_l2_rxRsp_bits_srcID;
            vlSelf->DCache__DOT__wb__DOT__entries_5_traceTag 
                = vlSelf->io_l2_rxRsp_bits_traceTag;
        } else if (vlSelf->DCache__DOT__wb__DOT__doAlloc_5) {
            vlSelf->DCache__DOT__wb__DOT__entries_5_compSrc = 0U;
            vlSelf->DCache__DOT__wb__DOT__entries_5_traceTag = 0U;
        }
        if (((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_12) 
             & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_rspSeen)))) {
            vlSelf->DCache__DOT__wb__DOT__entries_12_compSrc 
                = vlSelf->io_l2_rxRsp_bits_srcID;
            vlSelf->DCache__DOT__wb__DOT__entries_12_traceTag 
                = vlSelf->io_l2_rxRsp_bits_traceTag;
        } else if (vlSelf->DCache__DOT__wb__DOT__doAlloc_12) {
            vlSelf->DCache__DOT__wb__DOT__entries_12_compSrc = 0U;
            vlSelf->DCache__DOT__wb__DOT__entries_12_traceTag = 0U;
        }
        if (((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_1) 
             & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_rspSeen)))) {
            vlSelf->DCache__DOT__wb__DOT__entries_1_compSrc 
                = vlSelf->io_l2_rxRsp_bits_srcID;
            vlSelf->DCache__DOT__wb__DOT__entries_1_traceTag 
                = vlSelf->io_l2_rxRsp_bits_traceTag;
        } else if (vlSelf->DCache__DOT__wb__DOT__doAlloc_1) {
            vlSelf->DCache__DOT__wb__DOT__entries_1_compSrc = 0U;
            vlSelf->DCache__DOT__wb__DOT__entries_1_traceTag = 0U;
        }
        if (((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_4) 
             & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_rspSeen)))) {
            vlSelf->DCache__DOT__wb__DOT__entries_4_compSrc 
                = vlSelf->io_l2_rxRsp_bits_srcID;
            vlSelf->DCache__DOT__wb__DOT__entries_4_traceTag 
                = vlSelf->io_l2_rxRsp_bits_traceTag;
        } else if (vlSelf->DCache__DOT__wb__DOT__doAlloc_4) {
            vlSelf->DCache__DOT__wb__DOT__entries_4_compSrc = 0U;
            vlSelf->DCache__DOT__wb__DOT__entries_4_traceTag = 0U;
        }
        if (((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_2) 
             & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_rspSeen)))) {
            vlSelf->DCache__DOT__wb__DOT__entries_2_compSrc 
                = vlSelf->io_l2_rxRsp_bits_srcID;
            vlSelf->DCache__DOT__wb__DOT__entries_2_traceTag 
                = vlSelf->io_l2_rxRsp_bits_traceTag;
        } else if (vlSelf->DCache__DOT__wb__DOT__doAlloc_2) {
            vlSelf->DCache__DOT__wb__DOT__entries_2_compSrc = 0U;
            vlSelf->DCache__DOT__wb__DOT__entries_2_traceTag = 0U;
        }
        if (((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_13) 
             & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_rspSeen)))) {
            vlSelf->DCache__DOT__wb__DOT__entries_13_compSrc 
                = vlSelf->io_l2_rxRsp_bits_srcID;
            vlSelf->DCache__DOT__wb__DOT__entries_13_traceTag 
                = vlSelf->io_l2_rxRsp_bits_traceTag;
        } else if (vlSelf->DCache__DOT__wb__DOT__doAlloc_13) {
            vlSelf->DCache__DOT__wb__DOT__entries_13_compSrc = 0U;
            vlSelf->DCache__DOT__wb__DOT__entries_13_traceTag = 0U;
        }
        if (((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit) 
             & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_rspSeen)))) {
            vlSelf->DCache__DOT__wb__DOT__entries_0_compSrc 
                = vlSelf->io_l2_rxRsp_bits_srcID;
            vlSelf->DCache__DOT__wb__DOT__entries_0_traceTag 
                = vlSelf->io_l2_rxRsp_bits_traceTag;
        } else if (vlSelf->DCache__DOT__wb__DOT__doAlloc) {
            vlSelf->DCache__DOT__wb__DOT__entries_0_compSrc = 0U;
            vlSelf->DCache__DOT__wb__DOT__entries_0_traceTag = 0U;
        }
        if (((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_7) 
             & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_rspSeen)))) {
            vlSelf->DCache__DOT__wb__DOT__entries_7_compSrc 
                = vlSelf->io_l2_rxRsp_bits_srcID;
            vlSelf->DCache__DOT__wb__DOT__entries_7_traceTag 
                = vlSelf->io_l2_rxRsp_bits_traceTag;
        } else if (vlSelf->DCache__DOT__wb__DOT__doAlloc_7) {
            vlSelf->DCache__DOT__wb__DOT__entries_7_compSrc = 0U;
            vlSelf->DCache__DOT__wb__DOT__entries_7_traceTag = 0U;
        }
        if (((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_8) 
             & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_rspSeen)))) {
            vlSelf->DCache__DOT__wb__DOT__entries_8_compSrc 
                = vlSelf->io_l2_rxRsp_bits_srcID;
            vlSelf->DCache__DOT__wb__DOT__entries_8_traceTag 
                = vlSelf->io_l2_rxRsp_bits_traceTag;
        } else if (vlSelf->DCache__DOT__wb__DOT__doAlloc_8) {
            vlSelf->DCache__DOT__wb__DOT__entries_8_compSrc = 0U;
            vlSelf->DCache__DOT__wb__DOT__entries_8_traceTag = 0U;
        }
        if (((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_9) 
             & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_rspSeen)))) {
            vlSelf->DCache__DOT__wb__DOT__entries_9_compSrc 
                = vlSelf->io_l2_rxRsp_bits_srcID;
            vlSelf->DCache__DOT__wb__DOT__entries_9_traceTag 
                = vlSelf->io_l2_rxRsp_bits_traceTag;
        } else if (vlSelf->DCache__DOT__wb__DOT__doAlloc_9) {
            vlSelf->DCache__DOT__wb__DOT__entries_9_compSrc = 0U;
            vlSelf->DCache__DOT__wb__DOT__entries_9_traceTag = 0U;
        }
        if (((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_10) 
             & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_rspSeen)))) {
            vlSelf->DCache__DOT__wb__DOT__entries_10_compSrc 
                = vlSelf->io_l2_rxRsp_bits_srcID;
            vlSelf->DCache__DOT__wb__DOT__entries_10_traceTag 
                = vlSelf->io_l2_rxRsp_bits_traceTag;
        } else if (vlSelf->DCache__DOT__wb__DOT__doAlloc_10) {
            vlSelf->DCache__DOT__wb__DOT__entries_10_compSrc = 0U;
            vlSelf->DCache__DOT__wb__DOT__entries_10_traceTag = 0U;
        }
        if (((IData)(vlSelf->DCache__DOT__wb__DOT__rspHit_11) 
             & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_rspSeen)))) {
            vlSelf->DCache__DOT__wb__DOT__entries_11_compSrc 
                = vlSelf->io_l2_rxRsp_bits_srcID;
            vlSelf->DCache__DOT__wb__DOT__entries_11_traceTag 
                = vlSelf->io_l2_rxRsp_bits_traceTag;
        } else if (vlSelf->DCache__DOT__wb__DOT__doAlloc_11) {
            vlSelf->DCache__DOT__wb__DOT__entries_11_compSrc = 0U;
            vlSelf->DCache__DOT__wb__DOT__entries_11_traceTag = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT___T)))) {
            if (vlSelf->io_l2_evt_valid) {
                if ((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__evtHold)))) {
                    vlSelf->DCache__DOT__wb__DOT__evtHoldIdx 
                        = vlSelf->DCache__DOT__wb__DOT___evtIdx_T_35;
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->DCache__DOT__wb__DOT___T_2) 
                      & (1U == (IData)(vlSelf->DCache__DOT__wb__DOT___GEN_215)))))) {
            if (vlSelf->io_l2_txDat_valid) {
                if ((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__datHeld)))) {
                    vlSelf->DCache__DOT__wb__DOT__datHoldIdx 
                        = vlSelf->DCache__DOT__wb__DOT___datIdx_T_35;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelf->DCache__DOT___T_11)))) {
            if (vlSelf->io_l2_txRsp_bits_opcode) {
                if ((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__rspHold)))) {
                    vlSelf->DCache__DOT__wb__DOT__rspHoldIdx 
                        = vlSelf->DCache__DOT__wb__DOT___rspIdx_T_35;
                }
            }
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_15) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_stash 
                = vlSelf->DCache__DOT__miss__DOT__isPrefetchReq;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_14) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_stash 
                = vlSelf->DCache__DOT__miss__DOT__isPrefetchReq;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc) {
            vlSelf->DCache__DOT__miss__DOT__entries_0_stash 
                = vlSelf->DCache__DOT__miss__DOT__isPrefetchReq;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_3) {
            vlSelf->DCache__DOT__miss__DOT__entries_3_stash 
                = vlSelf->DCache__DOT__miss__DOT__isPrefetchReq;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_12) {
            vlSelf->DCache__DOT__miss__DOT__entries_12_stash 
                = vlSelf->DCache__DOT__miss__DOT__isPrefetchReq;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_5) {
            vlSelf->DCache__DOT__miss__DOT__entries_5_stash 
                = vlSelf->DCache__DOT__miss__DOT__isPrefetchReq;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_13) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_stash 
                = vlSelf->DCache__DOT__miss__DOT__isPrefetchReq;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_4) {
            vlSelf->DCache__DOT__miss__DOT__entries_4_stash 
                = vlSelf->DCache__DOT__miss__DOT__isPrefetchReq;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_2) {
            vlSelf->DCache__DOT__miss__DOT__entries_2_stash 
                = vlSelf->DCache__DOT__miss__DOT__isPrefetchReq;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_6) {
            vlSelf->DCache__DOT__miss__DOT__entries_6_stash 
                = vlSelf->DCache__DOT__miss__DOT__isPrefetchReq;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_7) {
            vlSelf->DCache__DOT__miss__DOT__entries_7_stash 
                = vlSelf->DCache__DOT__miss__DOT__isPrefetchReq;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_8) {
            vlSelf->DCache__DOT__miss__DOT__entries_8_stash 
                = vlSelf->DCache__DOT__miss__DOT__isPrefetchReq;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_9) {
            vlSelf->DCache__DOT__miss__DOT__entries_9_stash 
                = vlSelf->DCache__DOT__miss__DOT__isPrefetchReq;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_10) {
            vlSelf->DCache__DOT__miss__DOT__entries_10_stash 
                = vlSelf->DCache__DOT__miss__DOT__isPrefetchReq;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_11) {
            vlSelf->DCache__DOT__miss__DOT__entries_11_stash 
                = vlSelf->DCache__DOT__miss__DOT__isPrefetchReq;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_1) {
            vlSelf->DCache__DOT__miss__DOT__entries_1_stash 
                = vlSelf->DCache__DOT__miss__DOT__isPrefetchReq;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_15) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (6U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_6_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_6_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_15) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_6_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_6_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_15) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (5U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_5_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_5_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_15) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_5_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_5_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_15) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_4_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_4_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_15) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_4_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_4_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_15) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (7U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_7_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_7_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_15) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_7_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_7_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_15) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_3_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_3_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_15) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_3_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_3_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_15) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_1_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_1_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_15) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_1_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_1_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_15) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (2U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_2_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_2_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_15) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_2_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_2_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_14) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (6U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_6_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_6_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_14) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_6_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_6_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_14) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (5U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_5_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_5_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_14) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_5_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_5_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_14) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_4_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_4_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_14) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_4_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_4_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_13) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (6U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_6_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_6_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_13) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_6_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_6_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_13) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (5U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_5_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_5_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_13) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_5_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_5_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_14) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (7U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_7_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_7_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_14) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_7_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_7_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_13) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (7U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_7_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_7_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_13) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_7_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_7_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_14) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_1_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_1_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_14) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_1_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_1_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_14) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (2U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_2_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_2_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_14) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_2_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_2_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_14) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_3_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_3_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_14) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_3_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_3_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_13) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_4_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_4_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_13) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_4_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_4_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_12) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (6U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_6_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_6_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_12) {
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_6_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_6_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_12) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (5U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_5_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_5_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_12) {
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_5_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_5_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_12) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_4_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_4_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_12) {
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_4_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_4_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_13) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_3_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_3_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_13) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_3_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_3_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_13) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_1_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_1_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_13) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_1_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_1_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_12) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (2U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_2_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_2_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_12) {
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_2_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_2_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_13) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (2U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_2_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_2_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_13) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_2_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_2_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_12) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_1_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_1_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_12) {
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_1_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_1_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_12) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_3_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_3_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_12) {
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_3_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_3_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_12) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (7U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_7_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_7_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_12) {
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_7_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_7_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_11) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_11_clients_4_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_11_clients_4_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_11) {
            vlSelf->DCache__DOT__miss__DOT__entries_11_clients_4_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_11_clients_4_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_10) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (7U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_10_clients_7_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_10_clients_7_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_10) {
            vlSelf->DCache__DOT__miss__DOT__entries_10_clients_7_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_10_clients_7_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_11) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (7U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_11_clients_7_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_11_clients_7_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_11) {
            vlSelf->DCache__DOT__miss__DOT__entries_11_clients_7_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_11_clients_7_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_10) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (5U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_10_clients_5_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_10_clients_5_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_10) {
            vlSelf->DCache__DOT__miss__DOT__entries_10_clients_5_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_10_clients_5_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_10) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (6U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_10_clients_6_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_10_clients_6_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_10) {
            vlSelf->DCache__DOT__miss__DOT__entries_10_clients_6_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_10_clients_6_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_11) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_11_clients_1_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_11_clients_1_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_11) {
            vlSelf->DCache__DOT__miss__DOT__entries_11_clients_1_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_11_clients_1_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_11) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (2U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_11_clients_2_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_11_clients_2_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_11) {
            vlSelf->DCache__DOT__miss__DOT__entries_11_clients_2_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_11_clients_2_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_11) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_11_clients_3_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_11_clients_3_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_11) {
            vlSelf->DCache__DOT__miss__DOT__entries_11_clients_3_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_11_clients_3_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_11) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (5U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_11_clients_5_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_11_clients_5_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_11) {
            vlSelf->DCache__DOT__miss__DOT__entries_11_clients_5_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_11_clients_5_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_11) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (6U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_11_clients_6_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_11_clients_6_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_11) {
            vlSelf->DCache__DOT__miss__DOT__entries_11_clients_6_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_11_clients_6_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_10) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_10_clients_4_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_10_clients_4_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_10) {
            vlSelf->DCache__DOT__miss__DOT__entries_10_clients_4_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_10_clients_4_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_9) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_9_clients_3_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_9_clients_3_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_9) {
            vlSelf->DCache__DOT__miss__DOT__entries_9_clients_3_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_9_clients_3_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_9) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (7U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_9_clients_7_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_9_clients_7_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_9) {
            vlSelf->DCache__DOT__miss__DOT__entries_9_clients_7_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_9_clients_7_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_9) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_9_clients_1_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_9_clients_1_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_9) {
            vlSelf->DCache__DOT__miss__DOT__entries_9_clients_1_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_9_clients_1_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_9) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (2U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_9_clients_2_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_9_clients_2_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_9) {
            vlSelf->DCache__DOT__miss__DOT__entries_9_clients_2_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_9_clients_2_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_9) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_9_clients_4_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_9_clients_4_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_9) {
            vlSelf->DCache__DOT__miss__DOT__entries_9_clients_4_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_9_clients_4_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_9) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (5U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_9_clients_5_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_9_clients_5_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_9) {
            vlSelf->DCache__DOT__miss__DOT__entries_9_clients_5_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_9_clients_5_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_9) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (6U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_9_clients_6_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_9_clients_6_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_9) {
            vlSelf->DCache__DOT__miss__DOT__entries_9_clients_6_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_9_clients_6_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_10) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_10_clients_1_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_10_clients_1_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_10) {
            vlSelf->DCache__DOT__miss__DOT__entries_10_clients_1_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_10_clients_1_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_10) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (2U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_10_clients_2_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_10_clients_2_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_10) {
            vlSelf->DCache__DOT__miss__DOT__entries_10_clients_2_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_10_clients_2_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_10) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_10_clients_3_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_10_clients_3_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_10) {
            vlSelf->DCache__DOT__miss__DOT__entries_10_clients_3_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_10_clients_3_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_7) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (7U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_7_clients_7_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_7_clients_7_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_7) {
            vlSelf->DCache__DOT__miss__DOT__entries_7_clients_7_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_7_clients_7_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_8) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (7U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_8_clients_7_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_8_clients_7_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_8) {
            vlSelf->DCache__DOT__miss__DOT__entries_8_clients_7_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_8_clients_7_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_7) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (5U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_7_clients_5_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_7_clients_5_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_7) {
            vlSelf->DCache__DOT__miss__DOT__entries_7_clients_5_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_7_clients_5_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_7) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (6U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_7_clients_6_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_7_clients_6_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_7) {
            vlSelf->DCache__DOT__miss__DOT__entries_7_clients_6_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_7_clients_6_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_8) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_8_clients_1_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_8_clients_1_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_8) {
            vlSelf->DCache__DOT__miss__DOT__entries_8_clients_1_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_8_clients_1_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_8) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (2U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_8_clients_2_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_8_clients_2_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_8) {
            vlSelf->DCache__DOT__miss__DOT__entries_8_clients_2_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_8_clients_2_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_8) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_8_clients_3_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_8_clients_3_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_8) {
            vlSelf->DCache__DOT__miss__DOT__entries_8_clients_3_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_8_clients_3_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_8) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_8_clients_4_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_8_clients_4_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_8) {
            vlSelf->DCache__DOT__miss__DOT__entries_8_clients_4_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_8_clients_4_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_8) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (5U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_8_clients_5_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_8_clients_5_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_8) {
            vlSelf->DCache__DOT__miss__DOT__entries_8_clients_5_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_8_clients_5_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_8) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (6U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_8_clients_6_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_8_clients_6_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_8) {
            vlSelf->DCache__DOT__miss__DOT__entries_8_clients_6_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_8_clients_6_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_6) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (7U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_6_clients_7_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_6_clients_7_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_6) {
            vlSelf->DCache__DOT__miss__DOT__entries_6_clients_7_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_6_clients_7_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_6) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_6_clients_1_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_6_clients_1_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_6) {
            vlSelf->DCache__DOT__miss__DOT__entries_6_clients_1_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_6_clients_1_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_6) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (2U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_6_clients_2_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_6_clients_2_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_6) {
            vlSelf->DCache__DOT__miss__DOT__entries_6_clients_2_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_6_clients_2_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_6) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_6_clients_3_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_6_clients_3_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_6) {
            vlSelf->DCache__DOT__miss__DOT__entries_6_clients_3_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_6_clients_3_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_6) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_6_clients_4_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_6_clients_4_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_6) {
            vlSelf->DCache__DOT__miss__DOT__entries_6_clients_4_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_6_clients_4_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_6) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (5U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_6_clients_5_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_6_clients_5_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_6) {
            vlSelf->DCache__DOT__miss__DOT__entries_6_clients_5_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_6_clients_5_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_6) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (6U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_6_clients_6_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_6_clients_6_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_6) {
            vlSelf->DCache__DOT__miss__DOT__entries_6_clients_6_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_6_clients_6_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_7) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_7_clients_1_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_7_clients_1_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_7) {
            vlSelf->DCache__DOT__miss__DOT__entries_7_clients_1_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_7_clients_1_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_7) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (2U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_7_clients_2_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_7_clients_2_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_7) {
            vlSelf->DCache__DOT__miss__DOT__entries_7_clients_2_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_7_clients_2_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_7) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_7_clients_3_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_7_clients_3_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_7) {
            vlSelf->DCache__DOT__miss__DOT__entries_7_clients_3_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_7_clients_3_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_7) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_7_clients_4_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_7_clients_4_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_7) {
            vlSelf->DCache__DOT__miss__DOT__entries_7_clients_4_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_7_clients_4_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_5) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_5_clients_1_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_5_clients_1_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_5) {
            vlSelf->DCache__DOT__miss__DOT__entries_5_clients_1_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_5_clients_1_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_4) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (7U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_4_clients_7_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_4_clients_7_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_4) {
            vlSelf->DCache__DOT__miss__DOT__entries_4_clients_7_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_4_clients_7_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_4) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (5U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_4_clients_5_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_4_clients_5_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_4) {
            vlSelf->DCache__DOT__miss__DOT__entries_4_clients_5_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_4_clients_5_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_5) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (2U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_5_clients_2_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_5_clients_2_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_5) {
            vlSelf->DCache__DOT__miss__DOT__entries_5_clients_2_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_5_clients_2_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_5) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (7U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_5_clients_7_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_5_clients_7_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_5) {
            vlSelf->DCache__DOT__miss__DOT__entries_5_clients_7_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_5_clients_7_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_5) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_5_clients_3_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_5_clients_3_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_5) {
            vlSelf->DCache__DOT__miss__DOT__entries_5_clients_3_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_5_clients_3_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_4) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (6U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_4_clients_6_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_4_clients_6_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_4) {
            vlSelf->DCache__DOT__miss__DOT__entries_4_clients_6_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_4_clients_6_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_5) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_5_clients_4_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_5_clients_4_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_5) {
            vlSelf->DCache__DOT__miss__DOT__entries_5_clients_4_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_5_clients_4_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_5) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (5U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_5_clients_5_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_5_clients_5_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_5) {
            vlSelf->DCache__DOT__miss__DOT__entries_5_clients_5_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_5_clients_5_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_5) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (6U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_5_clients_6_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_5_clients_6_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_5) {
            vlSelf->DCache__DOT__miss__DOT__entries_5_clients_6_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_5_clients_6_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_4) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_4_clients_3_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_4_clients_3_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_4) {
            vlSelf->DCache__DOT__miss__DOT__entries_4_clients_3_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_4_clients_3_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_4) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (2U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_4_clients_2_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_4_clients_2_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_4) {
            vlSelf->DCache__DOT__miss__DOT__entries_4_clients_2_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_4_clients_2_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_3) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (7U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_3_clients_7_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_3_clients_7_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_3) {
            vlSelf->DCache__DOT__miss__DOT__entries_3_clients_7_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_3_clients_7_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_3) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (6U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_3_clients_6_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_3_clients_6_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_3) {
            vlSelf->DCache__DOT__miss__DOT__entries_3_clients_6_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_3_clients_6_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_3) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (5U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_3_clients_5_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_3_clients_5_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_3) {
            vlSelf->DCache__DOT__miss__DOT__entries_3_clients_5_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_3_clients_5_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_3) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_3_clients_4_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_3_clients_4_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_3) {
            vlSelf->DCache__DOT__miss__DOT__entries_3_clients_4_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_3_clients_4_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_3) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_3_clients_3_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_3_clients_3_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_3) {
            vlSelf->DCache__DOT__miss__DOT__entries_3_clients_3_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_3_clients_3_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_3) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (2U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_3_clients_2_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_3_clients_2_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_3) {
            vlSelf->DCache__DOT__miss__DOT__entries_3_clients_2_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_3_clients_2_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_3) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_3_clients_1_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_3_clients_1_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_3) {
            vlSelf->DCache__DOT__miss__DOT__entries_3_clients_1_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_3_clients_1_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_4) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_4_clients_4_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_4_clients_4_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_4) {
            vlSelf->DCache__DOT__miss__DOT__entries_4_clients_4_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_4_clients_4_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_4) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_4_clients_1_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_4_clients_1_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_4) {
            vlSelf->DCache__DOT__miss__DOT__entries_4_clients_1_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_4_clients_1_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_2) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (7U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_2_clients_7_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_2_clients_7_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_2) {
            vlSelf->DCache__DOT__miss__DOT__entries_2_clients_7_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_2_clients_7_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_2) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (6U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_2_clients_6_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_2_clients_6_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_2) {
            vlSelf->DCache__DOT__miss__DOT__entries_2_clients_6_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_2_clients_6_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_2) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (5U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_2_clients_5_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_2_clients_5_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_2) {
            vlSelf->DCache__DOT__miss__DOT__entries_2_clients_5_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_2_clients_5_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_1) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (5U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_1_clients_5_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_1_clients_5_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_1) {
            vlSelf->DCache__DOT__miss__DOT__entries_1_clients_5_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_1_clients_5_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_1) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (6U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_1_clients_6_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_1_clients_6_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_1) {
            vlSelf->DCache__DOT__miss__DOT__entries_1_clients_6_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_1_clients_6_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_1) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (7U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_1_clients_7_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_1_clients_7_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_1) {
            vlSelf->DCache__DOT__miss__DOT__entries_1_clients_7_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_1_clients_7_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_2) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_2_clients_1_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_2_clients_1_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_2) {
            vlSelf->DCache__DOT__miss__DOT__entries_2_clients_1_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_2_clients_1_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_2) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (2U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_2_clients_2_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_2_clients_2_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_2) {
            vlSelf->DCache__DOT__miss__DOT__entries_2_clients_2_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_2_clients_2_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_2) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_2_clients_3_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_2_clients_3_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_2) {
            vlSelf->DCache__DOT__miss__DOT__entries_2_clients_3_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_2_clients_3_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_2) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_2_clients_4_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_2_clients_4_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_2) {
            vlSelf->DCache__DOT__miss__DOT__entries_2_clients_4_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_2_clients_4_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_0_clients_1_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_0_clients_1_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc) {
            vlSelf->DCache__DOT__miss__DOT__entries_0_clients_1_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_0_clients_1_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (5U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_0_clients_5_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_0_clients_5_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc) {
            vlSelf->DCache__DOT__miss__DOT__entries_0_clients_5_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_0_clients_5_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_0_clients_4_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_0_clients_4_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc) {
            vlSelf->DCache__DOT__miss__DOT__entries_0_clients_4_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_0_clients_4_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_1) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_1_clients_1_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_1_clients_1_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_1) {
            vlSelf->DCache__DOT__miss__DOT__entries_1_clients_1_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_1_clients_1_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_1) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_1_clients_3_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_1_clients_3_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_1) {
            vlSelf->DCache__DOT__miss__DOT__entries_1_clients_3_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_1_clients_3_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_1) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_1_clients_4_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_1_clients_4_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_1) {
            vlSelf->DCache__DOT__miss__DOT__entries_1_clients_4_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_1_clients_4_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (6U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_0_clients_6_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_0_clients_6_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc) {
            vlSelf->DCache__DOT__miss__DOT__entries_0_clients_6_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_0_clients_6_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (7U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_0_clients_7_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_0_clients_7_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc) {
            vlSelf->DCache__DOT__miss__DOT__entries_0_clients_7_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_0_clients_7_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (2U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_0_clients_2_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_0_clients_2_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc) {
            vlSelf->DCache__DOT__miss__DOT__entries_0_clients_2_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_0_clients_2_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_0_clients_3_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_0_clients_3_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc) {
            vlSelf->DCache__DOT__miss__DOT__entries_0_clients_3_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_0_clients_3_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_1) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (2U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_1_clients_2_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_1_clients_2_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_1) {
            vlSelf->DCache__DOT__miss__DOT__entries_1_clients_2_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
            vlSelf->DCache__DOT__miss__DOT__entries_1_clients_2_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_15) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_0_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_15) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_0_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_3) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_3_clients_0_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_3) {
            vlSelf->DCache__DOT__miss__DOT__entries_3_clients_0_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_2) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_2_clients_0_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_2) {
            vlSelf->DCache__DOT__miss__DOT__entries_2_clients_0_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_1) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_1_clients_0_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_1) {
            vlSelf->DCache__DOT__miss__DOT__entries_1_clients_0_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_0_clients_0_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc) {
            vlSelf->DCache__DOT__miss__DOT__entries_0_clients_0_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_5) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_5_clients_0_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_5) {
            vlSelf->DCache__DOT__miss__DOT__entries_5_clients_0_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_4) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_4_clients_0_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_4) {
            vlSelf->DCache__DOT__miss__DOT__entries_4_clients_0_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_6) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_6_clients_0_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_6) {
            vlSelf->DCache__DOT__miss__DOT__entries_6_clients_0_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_7) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_7_clients_0_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_7) {
            vlSelf->DCache__DOT__miss__DOT__entries_7_clients_0_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_8) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_8_clients_0_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_8) {
            vlSelf->DCache__DOT__miss__DOT__entries_8_clients_0_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_9) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_9_clients_0_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_9) {
            vlSelf->DCache__DOT__miss__DOT__entries_9_clients_0_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_10) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_10_clients_0_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_10) {
            vlSelf->DCache__DOT__miss__DOT__entries_10_clients_0_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_11) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_11_clients_0_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_11) {
            vlSelf->DCache__DOT__miss__DOT__entries_11_clients_0_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_12) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_0_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_12) {
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_0_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_13) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_0_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_13) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_0_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_14) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_0_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_14) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_0_source 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_source;
        }
        if (vlSelf->DCache__DOT__tags_io_read_2_valid) {
            vlSelf->DCache__DOT__pipe__DOT__skipVictim = 0U;
        } else if (vlSelf->DCache__DOT__pipe__DOT__blocked) {
            vlSelf->DCache__DOT__pipe__DOT__skipVictim 
                = vlSelf->DCache__DOT__pipe__DOT___skipVictim_T_2;
        }
        if (vlSelf->DCache__DOT__pipe__DOT__clearing) {
            vlSelf->DCache__DOT__pipe__DOT__lrsc_count = 0U;
        } else if (vlSelf->DCache__DOT__pipe_io_update_resv_set) {
            vlSelf->DCache__DOT__pipe__DOT__lrsc_count = 0x3fU;
        } else if (vlSelf->DCache__DOT__pipe__DOT___probeClears_T_2) {
            vlSelf->DCache__DOT__pipe__DOT__lrsc_count 
                = vlSelf->DCache__DOT__pipe__DOT___lrsc_count_T_1;
        }
    }
    if (vlSelf->DCache__DOT__loads_1__DOT__s1_go) {
        vlSelf->DCache__DOT__loads_1__DOT__s2_way = 
            (((IData)((0U != (IData)(vlSelf->DCache__DOT__loads_1__DOT__s2_way_hi))) 
              << 1U) | (1U & (((IData)(vlSelf->DCache__DOT__loads_1__DOT__s2_way_hi) 
                               | (IData)(vlSelf->DCache__DOT__loads_1__DOT__s2_way_lo)) 
                              >> 1U)));
        vlSelf->DCache__DOT__loads_1__DOT__s2_bank_conflict 
            = vlSelf->DCache__DOT__loads_1__DOT__s1_bank_conflict;
        vlSelf->DCache__DOT__loads_1__DOT__s2_upgrade 
            = ((0U != (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_tag_way)) 
               & ((~ (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_hit)) 
                  & (3U == (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_req_cmd))));
    }
    if (vlSelf->DCache__DOT__pipe__DOT__s2_fire) {
        vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0U] 
            = vlSelf->DCache__DOT__pipe__DOT__s2_hold_storeData[0U];
        vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[1U] 
            = vlSelf->DCache__DOT__pipe__DOT__s2_hold_storeData[1U];
        vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[2U] 
            = vlSelf->DCache__DOT__pipe__DOT__s2_hold_storeData[2U];
        vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[3U] 
            = vlSelf->DCache__DOT__pipe__DOT__s2_hold_storeData[3U];
        vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[4U] 
            = vlSelf->DCache__DOT__pipe__DOT__s2_hold_storeData[4U];
        vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[5U] 
            = vlSelf->DCache__DOT__pipe__DOT__s2_hold_storeData[5U];
        vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[6U] 
            = vlSelf->DCache__DOT__pipe__DOT__s2_hold_storeData[6U];
        vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[7U] 
            = vlSelf->DCache__DOT__pipe__DOT__s2_hold_storeData[7U];
        vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[8U] 
            = vlSelf->DCache__DOT__pipe__DOT__s2_hold_storeData[8U];
        vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[9U] 
            = vlSelf->DCache__DOT__pipe__DOT__s2_hold_storeData[9U];
        vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xaU] 
            = vlSelf->DCache__DOT__pipe__DOT__s2_hold_storeData[0xaU];
        vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xbU] 
            = vlSelf->DCache__DOT__pipe__DOT__s2_hold_storeData[0xbU];
        vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xcU] 
            = vlSelf->DCache__DOT__pipe__DOT__s2_hold_storeData[0xcU];
        vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xdU] 
            = vlSelf->DCache__DOT__pipe__DOT__s2_hold_storeData[0xdU];
        vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xeU] 
            = vlSelf->DCache__DOT__pipe__DOT__s2_hold_storeData[0xeU];
        vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xfU] 
            = vlSelf->DCache__DOT__pipe__DOT__s2_hold_storeData[0xfU];
        vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[0U] 
            = vlSelf->DCache__DOT__pipe__DOT__s2_hold_amoData[0U];
        vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[1U] 
            = vlSelf->DCache__DOT__pipe__DOT__s2_hold_amoData[1U];
        vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[2U] 
            = vlSelf->DCache__DOT__pipe__DOT__s2_hold_amoData[2U];
        vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[3U] 
            = vlSelf->DCache__DOT__pipe__DOT__s2_hold_amoData[3U];
        vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoCmp[0U] 
            = vlSelf->DCache__DOT__pipe__DOT__s2_hold_amoCmp[0U];
        vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoCmp[1U] 
            = vlSelf->DCache__DOT__pipe__DOT__s2_hold_amoCmp[1U];
        vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoCmp[2U] 
            = vlSelf->DCache__DOT__pipe__DOT__s2_hold_amoCmp[2U];
        vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoCmp[3U] 
            = vlSelf->DCache__DOT__pipe__DOT__s2_hold_amoCmp[3U];
        vlSelf->DCache__DOT__pipe__DOT__s3_replace_dirty 
            = vlSelf->DCache__DOT__pipe__DOT__s2_replace_dirty;
        vlSelf->DCache__DOT__pipe__DOT__s3_hold_needData 
            = vlSelf->DCache__DOT__pipe__DOT__s2_hold_needData;
        vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
            = vlSelf->DCache__DOT__pipe__DOT__s2_hold_storeMask;
        vlSelf->DCache__DOT__pipe__DOT__s3_hold_id 
            = vlSelf->DCache__DOT__pipe__DOT__s2_hold_id;
        vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask 
            = vlSelf->DCache__DOT__pipe__DOT__s2_hold_amoMask;
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_valid)) 
                                  | (IData)(vlSelf->io_load_1_s1_kill)) 
                                 | (1U >= (IData)(vlSelf->DCache__DOT__loads_1__DOT___T_14)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: tag should match at most one way\n    at LoadPipe.scala:121 assert(!s1_valid || s1_kill || PopCount(s1_tag_way) <= 1.U,\n");
    }
    if (vlSelf->DCache__DOT__loads_1__DOT__s1_go) {
        vlSelf->DCache__DOT__loads_1__DOT__s2_req_cmd 
            = vlSelf->DCache__DOT__loads_1__DOT__s1_req_cmd;
        vlSelf->DCache__DOT__loads_1__DOT__s2_is128 
            = vlSelf->DCache__DOT__loads_1__DOT__s1_is128;
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_valid)) 
                                  | (IData)(vlSelf->io_load_1_s1_kill)) 
                                 | (1U >= (IData)(vlSelf->DCache__DOT__loads_1__DOT___T_14)))))))) {
        VL_WRITEF("[%0t] %%Fatal: LoadPipe.v:351: Assertion failed in %NDCache.loads_1\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/LoadPipe.v", 351, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((IData)(vlSelf->DCache__DOT__loads_1__DOT___T_5) 
                                 | (vlSelf->io_load_1_s1_paddr_dup_lsu 
                                    == vlSelf->io_load_1_s1_paddr_dup_dcache))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: duplicated physical addresses disagree\n    at LoadPipe.scala:123 assert(!s1_valid || s1_kill || io.lsu.s1_paddr_dup_lsu === io.lsu.s1_paddr_dup_dcache,\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((IData)(vlSelf->DCache__DOT__loads_1__DOT___T_5) 
                                 | (vlSelf->io_load_1_s1_paddr_dup_lsu 
                                    == vlSelf->io_load_1_s1_paddr_dup_dcache))))))) {
        VL_WRITEF("[%0t] %%Fatal: LoadPipe.v:375: Assertion failed in %NDCache.loads_1\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/LoadPipe.v", 375, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((((IData)(vlSelf->DCache__DOT__loads_1__DOT___T_5) 
                                   | (0U == (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_req_cmd))) 
                                  | (2U == (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_req_cmd))) 
                                 | (3U == (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_req_cmd)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: LoadPipe only accepts load and software prefetch\n    at LoadPipe.scala:125 assert(!s1_valid || s1_kill || s1_req.cmd === M_XRD || s1_req.cmd === M_PFR || s1_req.cmd === M_PFW,\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((((IData)(vlSelf->DCache__DOT__loads_1__DOT___T_5) 
                                   | (0U == (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_req_cmd))) 
                                  | (2U == (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_req_cmd))) 
                                 | (3U == (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_req_cmd)))))))) {
        VL_WRITEF("[%0t] %%Fatal: LoadPipe.v:399: Assertion failed in %NDCache.loads_1\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/LoadPipe.v", 399, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_valid)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_is128))) 
                                 | (7U != (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_bank)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 128-bit load must not cross a cache line\n    at LoadPipe.scala:127 assert(!s1_valid || !s1_is128 || s1_bank =/= (DCacheBanks - 1).U,\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_valid)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_is128))) 
                                 | (7U != (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_bank)))))))) {
        VL_WRITEF("[%0t] %%Fatal: LoadPipe.v:423: Assertion failed in %NDCache.loads_1\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/LoadPipe.v", 423, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->DCache__DOT__data_io_load_1_valid)) 
                                 | ((IData)(vlSelf->DCache__DOT__data__DOT__conflict_1) 
                                    == (1U & (~ (IData)(vlSelf->DCache__DOT__data_io_load_1_ready)))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: data conflict must be reported as not ready\n    at LoadPipe.scala:129 assert(!io.banked_data_read.valid || io.bank_conflict === !io.banked_data_read.ready,\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->DCache__DOT__data_io_load_1_valid)) 
                                 | ((IData)(vlSelf->DCache__DOT__data__DOT__conflict_1) 
                                    == (1U & (~ (IData)(vlSelf->DCache__DOT__data_io_load_1_ready)))))))))) {
        VL_WRITEF("[%0t] %%Fatal: LoadPipe.v:447: Assertion failed in %NDCache.loads_1\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/LoadPipe.v", 447, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->io_load_1_resp_valid) 
                                                   & (~ (IData)(vlSelf->io_load_1_resp_ready)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: lsu should be ready in s2\n    at LoadPipe.scala:223 assert(!(io.lsu.resp.valid && !io.lsu.resp.ready), \"lsu should be ready in s2\")\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->io_load_1_resp_valid) 
                                                   & (~ (IData)(vlSelf->io_load_1_resp_ready)))))) {
        VL_WRITEF("[%0t] %%Fatal: LoadPipe.v:471: Assertion failed in %NDCache.loads_1\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/LoadPipe.v", 471, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_ready)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: load pipeline should never be blocked\n    at LoadPipe.scala:224 assert(s1_ready && s2_ready, \"load pipeline should never be blocked\")\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_ready)))))) {
        VL_WRITEF("[%0t] %%Fatal: LoadPipe.v:495: Assertion failed in %NDCache.loads_1\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/LoadPipe.v", 495, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   ((IData)(vlSelf->io_load_1_resp_valid) 
                                                    & (IData)(vlSelf->io_load_1_resp_bits_replacementUpdated)) 
                                                   & (IData)(vlSelf->io_load_1_resp_bits_replay))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: hit and replay are mutually exclusive\n    at LoadPipe.scala:226 assert(!(io.lsu.resp.valid && resp_hit && resp_replay), \"hit and replay are mutually exclusive\")\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   ((IData)(vlSelf->io_load_1_resp_valid) 
                                                    & (IData)(vlSelf->io_load_1_resp_bits_replacementUpdated)) 
                                                   & (IData)(vlSelf->io_load_1_resp_bits_replay))))) {
        VL_WRITEF("[%0t] %%Fatal: LoadPipe.v:519: Assertion failed in %NDCache.loads_1\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/LoadPipe.v", 519, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->DCache__DOT__loads_1__DOT___T_65) 
                                                   & (IData)(vlSelf->io_load_1_resp_bits_miss))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: hit and accept are mutually exclusive\n    at LoadPipe.scala:227 assert(!(io.lsu.resp.valid && resp_hit && resp_handled), \"hit and accept are mutually exclusive\")\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->DCache__DOT__loads_1__DOT___T_65) 
                                                   & (IData)(vlSelf->io_load_1_resp_bits_miss))))) {
        VL_WRITEF("[%0t] %%Fatal: LoadPipe.v:543: Assertion failed in %NDCache.loads_1\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/LoadPipe.v", 543, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   ((IData)(vlSelf->io_load_1_resp_valid) 
                                                    & (IData)(vlSelf->io_load_1_resp_bits_replay)) 
                                                   & (IData)(vlSelf->io_load_1_resp_bits_miss))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: replay and accept are mutually exclusive\n    at LoadPipe.scala:228 assert(!(io.lsu.resp.valid && resp_replay && resp_handled), \"replay and accept are mutually exclusive\")\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   ((IData)(vlSelf->io_load_1_resp_valid) 
                                                    & (IData)(vlSelf->io_load_1_resp_bits_replay)) 
                                                   & (IData)(vlSelf->io_load_1_resp_bits_miss))))) {
        VL_WRITEF("[%0t] %%Fatal: LoadPipe.v:567: Assertion failed in %NDCache.loads_1\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/LoadPipe.v", 567, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__loads_1__DOT__s2_valid)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__loads_1__DOT__s2_need_data))) 
                                 | (IData)(vlSelf->DCache__DOT__loads_1__DOT__s2_hit))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: data is read only for a hitting load\n    at LoadPipe.scala:229 assert(!s2_valid || !s2_need_data || s2_hit, \"data is read only for a hitting load\")\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->DCache__DOT__loads_1__DOT__s2_valid)) 
                                  | (~ (IData)(vlSelf->DCache__DOT__loads_1__DOT__s2_need_data))) 
                                 | (IData)(vlSelf->DCache__DOT__loads_1__DOT__s2_hit))))))) {
        VL_WRITEF("[%0t] %%Fatal: LoadPipe.v:591: Assertion failed in %NDCache.loads_1\n",
                  64,VL_TIME_UNITED_Q(1),-6,vlSymsp->name());
        VL_STOP_MT("regress_build/verilog/LoadPipe.v", 591, "");
    }
    if (vlSelf->reset) {
        vlSelf->DCache__DOT__miss__DOT__entries_15_vaddr = 0ULL;
        vlSelf->DCache__DOT__miss__DOT__entries_14_vaddr = 0ULL;
        vlSelf->DCache__DOT__miss__DOT__entries_13_vaddr = 0ULL;
        vlSelf->DCache__DOT__miss__DOT__entries_4_vaddr = 0ULL;
        vlSelf->DCache__DOT__miss__DOT__entries_3_vaddr = 0ULL;
        vlSelf->DCache__DOT__miss__DOT__entries_1_vaddr = 0ULL;
        vlSelf->DCache__DOT__miss__DOT__entries_0_vaddr = 0ULL;
        vlSelf->DCache__DOT__miss__DOT__entries_2_vaddr = 0ULL;
        vlSelf->DCache__DOT__miss__DOT__entries_5_vaddr = 0ULL;
        vlSelf->DCache__DOT__miss__DOT__entries_11_vaddr = 0ULL;
        vlSelf->DCache__DOT__miss__DOT__entries_12_vaddr = 0ULL;
        vlSelf->DCache__DOT__miss__DOT__entries_6_vaddr = 0ULL;
        vlSelf->DCache__DOT__miss__DOT__entries_7_vaddr = 0ULL;
        vlSelf->DCache__DOT__miss__DOT__entries_8_vaddr = 0ULL;
        vlSelf->DCache__DOT__miss__DOT__entries_9_vaddr = 0ULL;
        vlSelf->DCache__DOT__miss__DOT__entries_10_vaddr = 0ULL;
        vlSelf->DCache__DOT__miss__DOT__entries_15_clients_6_half = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_15_clients_5_half = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_15_clients_4_half = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_15_clients_3_half = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_15_clients_2_half = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_15_clients_1_half = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_clients_6_half = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_clients_5_half = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_clients_4_half = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_clients_3_half = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_clients_2_half = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_clients_1_half = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_clients_6_half = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_clients_5_half = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_clients_4_half = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_clients_3_half = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_clients_2_half = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_clients_1_half = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_clients_6_half = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_clients_5_half = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_clients_4_half = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_clients_3_half = 0U;
    } else {
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_15) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_vaddr 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_14) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_vaddr 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_13) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_vaddr 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_4) {
            vlSelf->DCache__DOT__miss__DOT__entries_4_vaddr 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_3) {
            vlSelf->DCache__DOT__miss__DOT__entries_3_vaddr 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_1) {
            vlSelf->DCache__DOT__miss__DOT__entries_1_vaddr 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc) {
            vlSelf->DCache__DOT__miss__DOT__entries_0_vaddr 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_2) {
            vlSelf->DCache__DOT__miss__DOT__entries_2_vaddr 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_5) {
            vlSelf->DCache__DOT__miss__DOT__entries_5_vaddr 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_11) {
            vlSelf->DCache__DOT__miss__DOT__entries_11_vaddr 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_12) {
            vlSelf->DCache__DOT__miss__DOT__entries_12_vaddr 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_6) {
            vlSelf->DCache__DOT__miss__DOT__entries_6_vaddr 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_7) {
            vlSelf->DCache__DOT__miss__DOT__entries_7_vaddr 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_8) {
            vlSelf->DCache__DOT__miss__DOT__entries_8_vaddr 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_9) {
            vlSelf->DCache__DOT__miss__DOT__entries_9_vaddr 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_10) {
            vlSelf->DCache__DOT__miss__DOT__entries_10_vaddr 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_15) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (6U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_6_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_15) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_6_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_15) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (5U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_5_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_15) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_5_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_15) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_4_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_15) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_4_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_15) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_3_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_15) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_3_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_15) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (2U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_2_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_15) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_2_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_15) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_1_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_15) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_1_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_14) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (6U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_6_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_14) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_6_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_14) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (5U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_5_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_14) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_5_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_14) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_4_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_14) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_4_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_14) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_3_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_14) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_3_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_14) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (2U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_2_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_14) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_2_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_14) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_1_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_14) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_1_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_13) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (6U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_6_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_13) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_6_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_13) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (5U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_5_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_13) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_5_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_13) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_4_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_13) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_4_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_13) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_3_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_13) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_3_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_13) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (2U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_2_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_13) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_2_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_13) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (1U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_1_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_13) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_1_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_12) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (6U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_6_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_12) {
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_6_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_12) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (5U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_5_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_12) {
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_5_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_12) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (4U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_4_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_12) {
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_4_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_12) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (3U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_3_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_12) {
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_3_half 
                = (1U & (IData)((vlSelf->DCache__DOT__miss_io_missReq_bits_vaddr 
                                 >> 5U)));
        }
    }
    if (vlSelf->DCache__DOT__pipe__DOT__s2_fire) {
        vlSelf->DCache__DOT__pipe__DOT__s3_replace 
            = vlSelf->DCache__DOT__pipe__DOT__s2_replace;
    }
    vlSelf->DCache__DOT__pipe__DOT__sent_3 = ((~ (IData)(vlSelf->reset)) 
                                              & ((~ (IData)(vlSelf->DCache__DOT__pipe__DOT__s2_fire)) 
                                                 & (IData)(vlSelf->DCache__DOT__pipe__DOT___GEN_225)));
}
