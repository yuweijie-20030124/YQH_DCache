// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDCache.h for the primary calling header

#include "verilated.h"

#include "VDCache__Syms.h"
#include "VDCache___024root.h"

VL_INLINE_OPT void VDCache___024root___nba_sequent__TOP__5(VDCache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDCache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDCache___024root___nba_sequent__TOP__5\n"); );
    // Init
    CData/*1:0*/ DCache__DOT__meta__DOT___GEN_3111;
    DCache__DOT__meta__DOT___GEN_3111 = 0;
    CData/*1:0*/ DCache__DOT__meta__DOT___GEN_3367;
    DCache__DOT__meta__DOT___GEN_3367 = 0;
    CData/*1:0*/ DCache__DOT__meta__DOT___GEN_3623;
    DCache__DOT__meta__DOT___GEN_3623 = 0;
    CData/*1:0*/ DCache__DOT__meta__DOT___GEN_3879;
    DCache__DOT__meta__DOT___GEN_3879 = 0;
    CData/*1:0*/ DCache__DOT__meta__DOT___GEN_4147;
    DCache__DOT__meta__DOT___GEN_4147 = 0;
    CData/*1:0*/ DCache__DOT__meta__DOT___GEN_4403;
    DCache__DOT__meta__DOT___GEN_4403 = 0;
    CData/*1:0*/ DCache__DOT__meta__DOT___GEN_4659;
    DCache__DOT__meta__DOT___GEN_4659 = 0;
    CData/*1:0*/ DCache__DOT__meta__DOT___GEN_4915;
    DCache__DOT__meta__DOT___GEN_4915 = 0;
    CData/*2:0*/ DCache__DOT__pipe__DOT__plru__DOT___GEN_282;
    DCache__DOT__pipe__DOT__plru__DOT___GEN_282 = 0;
    CData/*2:0*/ DCache__DOT__pipe__DOT__plru__DOT___GEN_295;
    DCache__DOT__pipe__DOT__plru__DOT___GEN_295 = 0;
    CData/*6:0*/ DCache__DOT__miss__DOT___storeSel_T_162;
    DCache__DOT__miss__DOT___storeSel_T_162 = 0;
    CData/*1:0*/ DCache__DOT__miss__DOT___GEN_4980;
    DCache__DOT__miss__DOT___GEN_4980 = 0;
    VlWide<16>/*511:0*/ DCache__DOT__miss__DOT___GEN_4996;
    VL_ZERO_W(512, DCache__DOT__miss__DOT___GEN_4996);
    CData/*0:0*/ DCache__DOT__wb__DOT___evtWant_T_2;
    DCache__DOT__wb__DOT___evtWant_T_2 = 0;
    CData/*0:0*/ DCache__DOT__wb__DOT___evtWant_T_11;
    DCache__DOT__wb__DOT___evtWant_T_11 = 0;
    CData/*0:0*/ DCache__DOT__wb__DOT___evtWant_T_20;
    DCache__DOT__wb__DOT___evtWant_T_20 = 0;
    CData/*0:0*/ DCache__DOT__wb__DOT___evtWant_T_29;
    DCache__DOT__wb__DOT___evtWant_T_29 = 0;
    CData/*0:0*/ DCache__DOT__wb__DOT___evtWant_T_38;
    DCache__DOT__wb__DOT___evtWant_T_38 = 0;
    CData/*0:0*/ DCache__DOT__wb__DOT___evtWant_T_47;
    DCache__DOT__wb__DOT___evtWant_T_47 = 0;
    CData/*0:0*/ DCache__DOT__wb__DOT___evtWant_T_56;
    DCache__DOT__wb__DOT___evtWant_T_56 = 0;
    CData/*0:0*/ DCache__DOT__wb__DOT___evtWant_T_65;
    DCache__DOT__wb__DOT___evtWant_T_65 = 0;
    CData/*0:0*/ DCache__DOT__wb__DOT___evtWant_T_74;
    DCache__DOT__wb__DOT___evtWant_T_74 = 0;
    CData/*0:0*/ DCache__DOT__wb__DOT___evtWant_T_83;
    DCache__DOT__wb__DOT___evtWant_T_83 = 0;
    CData/*0:0*/ DCache__DOT__wb__DOT___evtWant_T_92;
    DCache__DOT__wb__DOT___evtWant_T_92 = 0;
    CData/*0:0*/ DCache__DOT__wb__DOT___evtWant_T_101;
    DCache__DOT__wb__DOT___evtWant_T_101 = 0;
    CData/*0:0*/ DCache__DOT__wb__DOT___evtWant_T_110;
    DCache__DOT__wb__DOT___evtWant_T_110 = 0;
    CData/*0:0*/ DCache__DOT__wb__DOT___evtWant_T_119;
    DCache__DOT__wb__DOT___evtWant_T_119 = 0;
    CData/*0:0*/ DCache__DOT__wb__DOT___evtWant_T_128;
    DCache__DOT__wb__DOT___evtWant_T_128 = 0;
    CData/*0:0*/ DCache__DOT__wb__DOT___evtWant_T_137;
    DCache__DOT__wb__DOT___evtWant_T_137 = 0;
    CData/*0:0*/ DCache__DOT__wb__DOT___evtWant_T_146;
    DCache__DOT__wb__DOT___evtWant_T_146 = 0;
    CData/*0:0*/ DCache__DOT__wb__DOT___evtWant_T_155;
    DCache__DOT__wb__DOT___evtWant_T_155 = 0;
    CData/*0:0*/ DCache__DOT__wb__DOT___io_block_3_T_81;
    DCache__DOT__wb__DOT___io_block_3_T_81 = 0;
    VlWide<3>/*95:0*/ __Vtemp_139;
    VlWide<4>/*127:0*/ __Vtemp_140;
    VlWide<3>/*95:0*/ __Vtemp_147;
    VlWide<4>/*127:0*/ __Vtemp_151;
    VlWide<3>/*95:0*/ __Vtemp_155;
    VlWide<4>/*127:0*/ __Vtemp_159;
    VlWide<3>/*95:0*/ __Vtemp_163;
    VlWide<4>/*127:0*/ __Vtemp_167;
    VlWide<3>/*95:0*/ __Vtemp_171;
    VlWide<4>/*127:0*/ __Vtemp_175;
    VlWide<3>/*95:0*/ __Vtemp_179;
    VlWide<4>/*127:0*/ __Vtemp_183;
    VlWide<3>/*95:0*/ __Vtemp_187;
    VlWide<4>/*127:0*/ __Vtemp_191;
    VlWide<3>/*95:0*/ __Vtemp_195;
    VlWide<4>/*127:0*/ __Vtemp_199;
    VlWide<3>/*95:0*/ __Vtemp_203;
    VlWide<4>/*127:0*/ __Vtemp_207;
    VlWide<3>/*95:0*/ __Vtemp_211;
    VlWide<4>/*127:0*/ __Vtemp_215;
    VlWide<3>/*95:0*/ __Vtemp_219;
    VlWide<4>/*127:0*/ __Vtemp_223;
    VlWide<3>/*95:0*/ __Vtemp_227;
    VlWide<4>/*127:0*/ __Vtemp_231;
    VlWide<3>/*95:0*/ __Vtemp_235;
    VlWide<4>/*127:0*/ __Vtemp_239;
    VlWide<3>/*95:0*/ __Vtemp_243;
    VlWide<4>/*127:0*/ __Vtemp_247;
    VlWide<3>/*95:0*/ __Vtemp_251;
    VlWide<4>/*127:0*/ __Vtemp_255;
    VlWide<3>/*95:0*/ __Vtemp_259;
    VlWide<4>/*127:0*/ __Vtemp_263;
    VlWide<3>/*95:0*/ __Vtemp_267;
    VlWide<4>/*127:0*/ __Vtemp_271;
    // Body
    vlSelf->DCache__DOT__miss__DOT__storeHits_83 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_80_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_3_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h9621501d__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_84 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_80_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_4_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h3a1fc80a__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_85 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_80_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_5_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h615b7484__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_86 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_80_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_6_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h92a9dda2__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_87 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_80_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_7_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hb92d46c9__0));
    vlSelf->DCache__DOT__miss__DOT__eligible_10 = ((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_10_valid) 
                                                   & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_refillDone)) 
                                                      & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_refillInflight)) 
                                                         & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_waitVictim)))));
    vlSelf->DCache__DOT__pipe__DOT___s3_alu_T_16 = 
        (((4U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd)) 
          | ((9U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd)) 
             | (IData)(vlSelf->DCache__DOT__pipe__DOT__amoalu__DOT__logic_and))) 
         | ((8U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd)) 
            | ((0xcU == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd)) 
               | ((0xdU == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd)) 
                  | ((0xeU == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd)) 
                     | (0xfU == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd)))))));
    DCache__DOT__pipe__DOT__plru__DOT___GEN_282 = (
                                                   (0x1aU 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(
                                                               (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                                >> 6U))))
                                                    ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_26)
                                                    : 
                                                   ((0x19U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                                 >> 6U))))
                                                     ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_25)
                                                     : 
                                                    ((0x18U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(
                                                                 (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                                  >> 6U))))
                                                      ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_24)
                                                      : 
                                                     ((0x17U 
                                                       == 
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                                   >> 6U))))
                                                       ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_23)
                                                       : 
                                                      ((0x16U 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                                    >> 6U))))
                                                        ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_22)
                                                        : 
                                                       ((0x15U 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                                     >> 6U))))
                                                         ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_21)
                                                         : 
                                                        ((0x14U 
                                                          == 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                                      >> 6U))))
                                                          ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_20)
                                                          : 
                                                         ((0x13U 
                                                           == 
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                                       >> 6U))))
                                                           ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_19)
                                                           : 
                                                          ((0x12U 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                                        >> 6U))))
                                                            ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_18)
                                                            : 
                                                           ((0x11U 
                                                             == 
                                                             (0xffU 
                                                              & (IData)(
                                                                        (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                                         >> 6U))))
                                                             ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_17)
                                                             : 
                                                            ((0x10U 
                                                              == 
                                                              (0xffU 
                                                               & (IData)(
                                                                         (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                                          >> 6U))))
                                                              ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_16)
                                                              : 
                                                             ((0xfU 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(
                                                                          (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                                           >> 6U))))
                                                               ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_15)
                                                               : 
                                                              ((0xeU 
                                                                == 
                                                                (0xffU 
                                                                 & (IData)(
                                                                           (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                                            >> 6U))))
                                                                ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_14)
                                                                : (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT___GEN_269))))))))))))));
    vlSelf->DCache__DOT__pipe__DOT__refillWords_7 = 
        (((QData)((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_63)) 
          << 0x38U) | (((QData)((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_62)) 
                        << 0x30U) | (((QData)((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_61)) 
                                      << 0x28U) | (
                                                   ((QData)((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_60)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_59) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_58) 
                                                                          << 0x10U) 
                                                                         | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_57) 
                                                                             << 8U) 
                                                                            | (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_56))))))))));
    vlSelf->DCache__DOT__pipe__DOT__refillWords_5 = 
        (((QData)((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_47)) 
          << 0x38U) | (((QData)((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_46)) 
                        << 0x30U) | (((QData)((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_45)) 
                                      << 0x28U) | (
                                                   ((QData)((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_44)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_43) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_42) 
                                                                          << 0x10U) 
                                                                         | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_41) 
                                                                             << 8U) 
                                                                            | (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_40))))))))));
    vlSelf->DCache__DOT__pipe__DOT__refillWords_3 = 
        (((QData)((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_31)) 
          << 0x38U) | (((QData)((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_30)) 
                        << 0x30U) | (((QData)((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_29)) 
                                      << 0x28U) | (
                                                   ((QData)((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_28)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_27) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_26) 
                                                                          << 0x10U) 
                                                                         | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_25) 
                                                                             << 8U) 
                                                                            | (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_24))))))))));
    vlSelf->DCache__DOT__pipe__DOT__refillWords_1 = 
        (((QData)((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_15)) 
          << 0x38U) | (((QData)((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_14)) 
                        << 0x30U) | (((QData)((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_13)) 
                                      << 0x28U) | (
                                                   ((QData)((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_12)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_11) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_10) 
                                                                          << 0x10U) 
                                                                         | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_9) 
                                                                             << 8U) 
                                                                            | (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_8))))))))));
    vlSelf->DCache__DOT__loads_1__DOT__s2_way_hi = 
        (((IData)(vlSelf->DCache__DOT__loads_1__DOT___s1_tag_way_T_15) 
          << 1U) | (IData)(vlSelf->DCache__DOT__loads_1__DOT___s1_tag_way_T_11));
    vlSelf->DCache__DOT__loads_1__DOT___T_14 = (7U 
                                                & ((3U 
                                                    & ((IData)(vlSelf->DCache__DOT__loads_1__DOT___s1_tag_way_T_3) 
                                                       + (IData)(vlSelf->DCache__DOT__loads_1__DOT___s1_tag_way_T_7))) 
                                                   + 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__loads_1__DOT___s1_tag_way_T_11) 
                                                       + (IData)(vlSelf->DCache__DOT__loads_1__DOT___s1_tag_way_T_15)))));
    vlSelf->DCache__DOT__loads_1__DOT__s2_way_lo = 
        (((IData)(vlSelf->DCache__DOT__loads_1__DOT___s1_tag_way_T_7) 
          << 1U) | (IData)(vlSelf->DCache__DOT__loads_1__DOT___s1_tag_way_T_3));
    vlSelf->DCache__DOT__loads_1__DOT__s1_meta_coh 
        = (((((IData)(vlSelf->DCache__DOT__loads_1__DOT___s1_tag_way_T_3)
               ? (IData)(vlSelf->DCache__DOT__meta__DOT__r_1_0_coh)
               : 0U) | ((IData)(vlSelf->DCache__DOT__loads_1__DOT___s1_tag_way_T_7)
                         ? (IData)(vlSelf->DCache__DOT__meta__DOT__r_1_1_coh)
                         : 0U)) | ((IData)(vlSelf->DCache__DOT__loads_1__DOT___s1_tag_way_T_11)
                                    ? (IData)(vlSelf->DCache__DOT__meta__DOT__r_1_2_coh)
                                    : 0U)) | ((IData)(vlSelf->DCache__DOT__loads_1__DOT___s1_tag_way_T_15)
                                               ? (IData)(vlSelf->DCache__DOT__meta__DOT__r_1_3_coh)
                                               : 0U));
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
    vlSelf->DCache__DOT__loads_0__DOT__s2_way_hi = 
        (((IData)(vlSelf->DCache__DOT__loads_0__DOT___s1_tag_way_T_15) 
          << 1U) | (IData)(vlSelf->DCache__DOT__loads_0__DOT___s1_tag_way_T_11));
    vlSelf->DCache__DOT__loads_0__DOT___T_14 = (7U 
                                                & ((3U 
                                                    & ((IData)(vlSelf->DCache__DOT__loads_0__DOT___s1_tag_way_T_3) 
                                                       + (IData)(vlSelf->DCache__DOT__loads_0__DOT___s1_tag_way_T_7))) 
                                                   + 
                                                   (3U 
                                                    & ((IData)(vlSelf->DCache__DOT__loads_0__DOT___s1_tag_way_T_11) 
                                                       + (IData)(vlSelf->DCache__DOT__loads_0__DOT___s1_tag_way_T_15)))));
    vlSelf->DCache__DOT__loads_0__DOT__s2_way_lo = 
        (((IData)(vlSelf->DCache__DOT__loads_0__DOT___s1_tag_way_T_7) 
          << 1U) | (IData)(vlSelf->DCache__DOT__loads_0__DOT___s1_tag_way_T_3));
    vlSelf->DCache__DOT__loads_0__DOT__s1_meta_coh 
        = (((((IData)(vlSelf->DCache__DOT__loads_0__DOT___s1_tag_way_T_3)
               ? (IData)(vlSelf->DCache__DOT__meta__DOT__r___05F0_coh)
               : 0U) | ((IData)(vlSelf->DCache__DOT__loads_0__DOT___s1_tag_way_T_7)
                         ? (IData)(vlSelf->DCache__DOT__meta__DOT__r___05F1_coh)
                         : 0U)) | ((IData)(vlSelf->DCache__DOT__loads_0__DOT___s1_tag_way_T_11)
                                    ? (IData)(vlSelf->DCache__DOT__meta__DOT__r___05F2_coh)
                                    : 0U)) | ((IData)(vlSelf->DCache__DOT__loads_0__DOT___s1_tag_way_T_15)
                                               ? (IData)(vlSelf->DCache__DOT__meta__DOT__r___05F3_coh)
                                               : 0U));
    vlSelf->DCache__DOT__tags_io_resp_2_3 = vlSelf->DCache__DOT__tags__DOT__arrays_2__DOT__banks_1__DOT__tagSram__DOT__mem_1
        [vlSelf->DCache__DOT__tags__DOT__arrays_2__DOT__banks_1__DOT__tagSram__DOT__mem_1_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__tags_io_resp_2_2 = vlSelf->DCache__DOT__tags__DOT__arrays_2__DOT__banks_1__DOT__tagSram__DOT__mem_0
        [vlSelf->DCache__DOT__tags__DOT__arrays_2__DOT__banks_1__DOT__tagSram__DOT__mem_1_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__tags_io_resp_2_1 = vlSelf->DCache__DOT__tags__DOT__arrays_2__DOT__banks_0__DOT__tagSram__DOT__mem_1
        [vlSelf->DCache__DOT__tags__DOT__arrays_2__DOT__banks_0__DOT__tagSram__DOT__mem_1_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__tags_io_resp_2_0 = vlSelf->DCache__DOT__tags__DOT__arrays_2__DOT__banks_0__DOT__tagSram__DOT__mem_0
        [vlSelf->DCache__DOT__tags__DOT__arrays_2__DOT__banks_0__DOT__tagSram__DOT__mem_1_MPORT_addr_pipe_0];
    vlSelf->DCache__DOT__miss__DOT___GEN_3690 = ((IData)(vlSelf->io_cmoResp_valid)
                                                  ? 
                                                 (((IData)(vlSelf->io_cmoResp_ready) 
                                                   & (IData)(vlSelf->io_cmoResp_valid))
                                                   ? 0U
                                                   : (IData)(vlSelf->DCache__DOT__miss__DOT__cmoState))
                                                  : (IData)(vlSelf->DCache__DOT__miss__DOT__cmoState));
    vlSelf->DCache__DOT__miss__DOT___T_1937 = ((IData)(vlSelf->io_cmoReq_ready) 
                                               & (IData)(vlSelf->io_cmoReq_valid));
    vlSelf->DCache__DOT__miss__DOT___rspIn_T = ((IData)(vlSelf->DCache__DOT__miss_io_rxRsp_ready) 
                                                & ((IData)(vlSelf->io_l2_rxRsp_valid) 
                                                   & (0x10U 
                                                      >= (IData)(vlSelf->io_l2_rxRsp_bits_txnID))));
    vlSelf->DCache__DOT__miss__DOT__storeHits_120 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_120_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_0_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hb05b35d9__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_121 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_120_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_1_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h64277893__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_122 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_120_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_2_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hbbb4bf77__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_123 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_120_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_3_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h8dad96d8__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_124 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_120_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_4_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h69c04ed4__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_125 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_120_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_5_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1ce64408__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_126 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_120_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_6_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_heb8455ee__0));
    vlSelf->DCache__DOT__miss__DOT__wakeVec_11 = ((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_88_T) 
                                                  & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_installed) 
                                                     & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_wakeSent)) 
                                                        & (IData)(vlSelf->DCache__DOT__miss__DOT___wakeVec_T_334))));
    vlSelf->DCache__DOT__miss__DOT__replayVec_11 = 
        ((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_88_T) 
         & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_installed)) 
            & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_replaySent)) 
               & (IData)(vlSelf->DCache__DOT__miss__DOT___wakeVec_T_334))));
    vlSelf->DCache__DOT__miss__DOT__storeHits_88 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_88_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_0_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_ha78f74c4__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_89 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_88_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_1_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hd7b80a96__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_90 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_88_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_2_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hc6615835__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_91 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_88_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_3_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h8a8d2b1c__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_92 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_88_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_4_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h08216823__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_93 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_88_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_5_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hacb0aa47__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_94 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_88_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_6_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1f391837__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_95 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_88_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_7_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_ha8ad35ef__0));
    vlSelf->DCache__DOT__miss__DOT__eligible_11 = ((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_11_valid) 
                                                   & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_refillDone)) 
                                                      & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_refillInflight)) 
                                                         & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_waitVictim)))));
    vlSelf->DCache__DOT__miss__DOT__wakeVec_12 = ((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_96_T) 
                                                  & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_installed) 
                                                     & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_wakeSent)) 
                                                        & (IData)(vlSelf->DCache__DOT__miss__DOT___wakeVec_T_362))));
    vlSelf->DCache__DOT__miss__DOT__replayVec_12 = 
        ((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_96_T) 
         & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_installed)) 
            & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_replaySent)) 
               & (IData)(vlSelf->DCache__DOT__miss__DOT___wakeVec_T_362))));
    vlSelf->DCache__DOT__miss__DOT__storeHits_96 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_96_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_0_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hf839751f__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_97 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_96_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_1_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hd21ab5c6__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_98 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_96_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_2_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h8a7fc2d8__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_99 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_96_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_3_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hedfca82f__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_100 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_96_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_4_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hca19e29c__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_101 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_96_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_5_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h7c906af7__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_102 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_96_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_6_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_ha7191196__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_103 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_96_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_7_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h48575628__0));
    vlSelf->DCache__DOT__miss__DOT__eligible_12 = ((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_12_valid) 
                                                   & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_refillDone)) 
                                                      & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_refillInflight)) 
                                                         & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_waitVictim)))));
    vlSelf->DCache__DOT__miss__DOT__wakeVec_13 = ((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_104_T) 
                                                  & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_installed) 
                                                     & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_wakeSent)) 
                                                        & (IData)(vlSelf->DCache__DOT__miss__DOT___wakeVec_T_390))));
    vlSelf->DCache__DOT__miss__DOT__replayVec_13 = 
        ((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_104_T) 
         & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_installed)) 
            & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_replaySent)) 
               & (IData)(vlSelf->DCache__DOT__miss__DOT___wakeVec_T_390))));
    vlSelf->DCache__DOT__miss__DOT__storeHits_104 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_104_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_0_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1f59e3c4__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_105 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_104_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_1_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1508cbee__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_106 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_104_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_2_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hddb728f0__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_107 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_104_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_3_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hdb95b317__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_108 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_104_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_4_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1a49c80b__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_109 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_104_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_5_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h7df3603a__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_110 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_104_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_6_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_ha5f234fa__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_111 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_104_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_7_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_he5471390__0));
    vlSelf->DCache__DOT__miss__DOT__eligible_13 = ((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_13_valid) 
                                                   & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_refillDone)) 
                                                      & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_refillInflight)) 
                                                         & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_waitVictim)))));
    vlSelf->DCache__DOT__miss__DOT__wakeVec_14 = ((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_112_T) 
                                                  & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_installed) 
                                                     & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_wakeSent)) 
                                                        & (IData)(vlSelf->DCache__DOT__miss__DOT___wakeVec_T_418))));
    vlSelf->DCache__DOT__miss__DOT__replayVec_14 = 
        ((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_112_T) 
         & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_installed)) 
            & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_replaySent)) 
               & (IData)(vlSelf->DCache__DOT__miss__DOT___wakeVec_T_418))));
    vlSelf->DCache__DOT__miss__DOT__storeHits_112 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_112_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_0_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h84122c5f__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_113 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_112_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_1_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1c22eb49__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_114 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_112_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_2_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h3a66ed9e__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_115 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_112_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_3_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h57b4a119__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_116 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_112_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_4_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hd2aa3350__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_117 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_112_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_5_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hee892809__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_118 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_112_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_6_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h28c74173__0));
    vlSelf->DCache__DOT__miss__DOT__storeHits_119 = 
        (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_112_T) 
          & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_7_valid)) 
         & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_he7650560__0));
    vlSelf->DCache__DOT__miss__DOT__txId = ((IData)(vlSelf->DCache__DOT__miss__DOT__txWant_0)
                                             ? 0U : 
                                            ((IData)(vlSelf->DCache__DOT__miss__DOT__txWant_1)
                                              ? 1U : 
                                             ((IData)(vlSelf->DCache__DOT__miss__DOT__txWant_2)
                                               ? 2U
                                               : ((IData)(vlSelf->DCache__DOT__miss__DOT__txWant_3)
                                                   ? 3U
                                                   : 
                                                  ((IData)(vlSelf->DCache__DOT__miss__DOT__txWant_4)
                                                    ? 4U
                                                    : 
                                                   ((IData)(vlSelf->DCache__DOT__miss__DOT__txWant_5)
                                                     ? 5U
                                                     : 
                                                    ((IData)(vlSelf->DCache__DOT__miss__DOT__txWant_6)
                                                      ? 6U
                                                      : 
                                                     ((IData)(vlSelf->DCache__DOT__miss__DOT__txWant_7)
                                                       ? 7U
                                                       : 
                                                      ((IData)(vlSelf->DCache__DOT__miss__DOT__txWant_8)
                                                        ? 8U
                                                        : 
                                                       ((IData)(vlSelf->DCache__DOT__miss__DOT__txWant_9)
                                                         ? 9U
                                                         : 
                                                        ((IData)(vlSelf->DCache__DOT__miss__DOT__txWant_10)
                                                          ? 0xaU
                                                          : 
                                                         ((IData)(vlSelf->DCache__DOT__miss__DOT__txWant_11)
                                                           ? 0xbU
                                                           : 
                                                          ((IData)(vlSelf->DCache__DOT__miss__DOT__txWant_12)
                                                            ? 0xcU
                                                            : 
                                                           ((IData)(vlSelf->DCache__DOT__miss__DOT__txWant_13)
                                                             ? 0xdU
                                                             : 
                                                            ((IData)(vlSelf->DCache__DOT__miss__DOT__txWant_14)
                                                              ? 0xeU
                                                              : 0xfU)))))))))))))));
    vlSelf->DCache__DOT__miss__DOT___txValid_T = ((
                                                   ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_txreqDone)) 
                                                    & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_busy)) 
                                                   << 0xfU) 
                                                  | (((IData)(vlSelf->DCache__DOT__miss__DOT__txWant_14) 
                                                      << 0xeU) 
                                                     | (((IData)(vlSelf->DCache__DOT__miss__DOT__txWant_13) 
                                                         << 0xdU) 
                                                        | (((IData)(vlSelf->DCache__DOT__miss__DOT__txWant_12) 
                                                            << 0xcU) 
                                                           | (((IData)(vlSelf->DCache__DOT__miss__DOT__txWant_11) 
                                                               << 0xbU) 
                                                              | (((IData)(vlSelf->DCache__DOT__miss__DOT__txWant_10) 
                                                                  << 0xaU) 
                                                                 | (((IData)(vlSelf->DCache__DOT__miss__DOT__txWant_9) 
                                                                     << 9U) 
                                                                    | (((IData)(vlSelf->DCache__DOT__miss__DOT__txWant_8) 
                                                                        << 8U) 
                                                                       | (((IData)(vlSelf->DCache__DOT__miss__DOT__txWant_7) 
                                                                           << 7U) 
                                                                          | (((IData)(vlSelf->DCache__DOT__miss__DOT__txWant_6) 
                                                                              << 6U) 
                                                                             | (((IData)(vlSelf->DCache__DOT__miss__DOT__txWant_5) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__txWant_4) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__txWant_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__txWant_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__txWant_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->DCache__DOT__miss__DOT__txWant_0))))))))))))))));
    vlSelf->DCache__DOT__miss__DOT__eligible_14 = ((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_14_valid) 
                                                   & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_refillDone)) 
                                                      & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_refillInflight)) 
                                                         & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_waitVictim)))));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_160 = 
        ((0U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_opcode)) 
         | (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_159));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_142 = 
        ((0U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_opcode)) 
         | (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_141));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_151 = 
        ((0U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_opcode)) 
         | (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_150));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_79 = (
                                                   (0U 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_opcode)) 
                                                   | (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_78));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_88 = (
                                                   (0U 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_opcode)) 
                                                   | (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_87));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_97 = (
                                                   (0U 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_opcode)) 
                                                   | (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_96));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_106 = 
        ((0U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_opcode)) 
         | (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_105));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_115 = 
        ((0U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_opcode)) 
         | (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_114));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_124 = 
        ((0U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_opcode)) 
         | (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_123));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_133 = 
        ((0U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_opcode)) 
         | (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_132));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_7 = ((0U 
                                                   == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_opcode)) 
                                                  | (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_6));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_16 = (
                                                   (0U 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_opcode)) 
                                                   | (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_15));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_25 = (
                                                   (0U 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_opcode)) 
                                                   | (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_24));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_34 = (
                                                   (0U 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_opcode)) 
                                                   | (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_33));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_43 = (
                                                   (0U 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_opcode)) 
                                                   | (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_42));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_52 = (
                                                   (0U 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_opcode)) 
                                                   | (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_51));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_61 = (
                                                   (0U 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_opcode)) 
                                                   | (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_60));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_70 = (
                                                   (0U 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_opcode)) 
                                                   | (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_69));
    vlSelf->DCache__DOT__miss__DOT___beatAfter_T_47 
        = (3U & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_beatValid) 
                 | ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID))));
    vlSelf->DCache__DOT__miss__DOT___dupBeat_T_15 = 
        ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_beatValid) 
         & ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID)));
    vlSelf->DCache__DOT__miss__DOT___beatAfter_T_44 
        = (3U & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_beatValid) 
                 | ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID))));
    vlSelf->DCache__DOT__miss__DOT___dupBeat_T_14 = 
        ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_beatValid) 
         & ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID)));
    vlSelf->DCache__DOT__miss__DOT___beatAfter_T_41 
        = (3U & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_beatValid) 
                 | ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID))));
    vlSelf->DCache__DOT__miss__DOT___dupBeat_T_13 = 
        ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_beatValid) 
         & ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID)));
    vlSelf->DCache__DOT__miss__DOT___beatAfter_T_38 
        = (3U & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_beatValid) 
                 | ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID))));
    vlSelf->DCache__DOT__miss__DOT___dupBeat_T_12 = 
        ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_beatValid) 
         & ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID)));
    vlSelf->DCache__DOT__miss__DOT___beatAfter_T_20 
        = (3U & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_beatValid) 
                 | ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID))));
    vlSelf->DCache__DOT__miss__DOT___dupBeat_T_6 = 
        ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_beatValid) 
         & ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID)));
    vlSelf->DCache__DOT__miss__DOT___beatAfter_T_23 
        = (3U & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_beatValid) 
                 | ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID))));
    vlSelf->DCache__DOT__miss__DOT___dupBeat_T_7 = 
        ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_beatValid) 
         & ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID)));
    vlSelf->DCache__DOT__miss__DOT___beatAfter_T_26 
        = (3U & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_beatValid) 
                 | ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID))));
    vlSelf->DCache__DOT__miss__DOT___dupBeat_T_8 = 
        ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_beatValid) 
         & ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID)));
    vlSelf->DCache__DOT__miss__DOT___beatAfter_T_29 
        = (3U & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_beatValid) 
                 | ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID))));
    vlSelf->DCache__DOT__miss__DOT___dupBeat_T_9 = 
        ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_beatValid) 
         & ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID)));
    vlSelf->DCache__DOT__miss__DOT___beatAfter_T_32 
        = (3U & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_beatValid) 
                 | ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID))));
    vlSelf->DCache__DOT__miss__DOT___dupBeat_T_10 = 
        ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_beatValid) 
         & ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID)));
    vlSelf->DCache__DOT__miss__DOT___beatAfter_T_35 
        = (3U & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_beatValid) 
                 | ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID))));
    vlSelf->DCache__DOT__miss__DOT___dupBeat_T_11 = 
        ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_beatValid) 
         & ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID)));
    vlSelf->DCache__DOT__miss__DOT___beatAfter_T_2 
        = (3U & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_beatValid) 
                 | ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID))));
    vlSelf->DCache__DOT__miss__DOT___dupBeat_T = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_beatValid) 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelf->io_l2_rxDat_bits_dataID)));
    vlSelf->DCache__DOT__miss__DOT___beatAfter_T_14 
        = (3U & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_beatValid) 
                 | ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID))));
    vlSelf->DCache__DOT__miss__DOT___dupBeat_T_4 = 
        ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_beatValid) 
         & ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID)));
    vlSelf->DCache__DOT__miss__DOT___beatAfter_T_17 
        = (3U & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_beatValid) 
                 | ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID))));
    vlSelf->DCache__DOT__miss__DOT___dupBeat_T_5 = 
        ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_beatValid) 
         & ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID)));
    vlSelf->DCache__DOT__miss__DOT___beatAfter_T_11 
        = (3U & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_beatValid) 
                 | ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID))));
    vlSelf->DCache__DOT__miss__DOT___dupBeat_T_3 = 
        ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_beatValid) 
         & ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID)));
    vlSelf->DCache__DOT__miss__DOT___beatAfter_T_8 
        = (3U & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_beatValid) 
                 | ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID))));
    vlSelf->DCache__DOT__miss__DOT___dupBeat_T_2 = 
        ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_beatValid) 
         & ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID)));
    vlSelf->DCache__DOT__miss__DOT___beatAfter_T_5 
        = (3U & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_beatValid) 
                 | ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID))));
    vlSelf->DCache__DOT__miss__DOT___dupBeat_T_1 = 
        ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_beatValid) 
         & ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID)));
    if ((0xfU == (IData)(vlSelf->io_forwardMshr_id))) {
        DCache__DOT__miss__DOT___GEN_4980 = vlSelf->DCache__DOT__miss__DOT__entries_15_beatValid;
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
    } else if ((0xeU == (IData)(vlSelf->io_forwardMshr_id))) {
        DCache__DOT__miss__DOT___GEN_4980 = vlSelf->DCache__DOT__miss__DOT__entries_14_beatValid;
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
    } else if ((0xdU == (IData)(vlSelf->io_forwardMshr_id))) {
        DCache__DOT__miss__DOT___GEN_4980 = vlSelf->DCache__DOT__miss__DOT__entries_13_beatValid;
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
    } else if ((0xcU == (IData)(vlSelf->io_forwardMshr_id))) {
        DCache__DOT__miss__DOT___GEN_4980 = vlSelf->DCache__DOT__miss__DOT__entries_12_beatValid;
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
    } else if ((0xbU == (IData)(vlSelf->io_forwardMshr_id))) {
        DCache__DOT__miss__DOT___GEN_4980 = vlSelf->DCache__DOT__miss__DOT__entries_11_beatValid;
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
    } else if ((0xaU == (IData)(vlSelf->io_forwardMshr_id))) {
        DCache__DOT__miss__DOT___GEN_4980 = vlSelf->DCache__DOT__miss__DOT__entries_10_beatValid;
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
    } else if ((9U == (IData)(vlSelf->io_forwardMshr_id))) {
        DCache__DOT__miss__DOT___GEN_4980 = vlSelf->DCache__DOT__miss__DOT__entries_9_beatValid;
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
    } else if ((8U == (IData)(vlSelf->io_forwardMshr_id))) {
        DCache__DOT__miss__DOT___GEN_4980 = vlSelf->DCache__DOT__miss__DOT__entries_8_beatValid;
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
    } else if ((7U == (IData)(vlSelf->io_forwardMshr_id))) {
        DCache__DOT__miss__DOT___GEN_4980 = vlSelf->DCache__DOT__miss__DOT__entries_7_beatValid;
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
    } else if ((6U == (IData)(vlSelf->io_forwardMshr_id))) {
        DCache__DOT__miss__DOT___GEN_4980 = vlSelf->DCache__DOT__miss__DOT__entries_6_beatValid;
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
    } else if ((5U == (IData)(vlSelf->io_forwardMshr_id))) {
        DCache__DOT__miss__DOT___GEN_4980 = vlSelf->DCache__DOT__miss__DOT__entries_5_beatValid;
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
    } else if ((4U == (IData)(vlSelf->io_forwardMshr_id))) {
        DCache__DOT__miss__DOT___GEN_4980 = vlSelf->DCache__DOT__miss__DOT__entries_4_beatValid;
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
    } else if ((3U == (IData)(vlSelf->io_forwardMshr_id))) {
        DCache__DOT__miss__DOT___GEN_4980 = vlSelf->DCache__DOT__miss__DOT__entries_3_beatValid;
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
    } else if ((2U == (IData)(vlSelf->io_forwardMshr_id))) {
        DCache__DOT__miss__DOT___GEN_4980 = vlSelf->DCache__DOT__miss__DOT__entries_2_beatValid;
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
    } else if ((1U == (IData)(vlSelf->io_forwardMshr_id))) {
        DCache__DOT__miss__DOT___GEN_4980 = vlSelf->DCache__DOT__miss__DOT__entries_1_beatValid;
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
    } else {
        DCache__DOT__miss__DOT___GEN_4980 = vlSelf->DCache__DOT__miss__DOT__entries_0_beatValid;
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
    }
    vlSelf->DCache__DOT__pipe__DOT___T_188 = ((IData)(vlSelf->DCache__DOT__pipe__DOT__s2_hold_id) 
                                              == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_id));
    vlSelf->DCache__DOT__data_io_load_1_bits_bankMask 
        = (0xffU & ((IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_is128)
                     ? ((((IData)(1U) << (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_bank)) 
                         << 1U) | ((IData)(1U) << (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_bank)))
                     : ((IData)(1U) << (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_bank))));
    vlSelf->DCache__DOT__loads_1__DOT___T_5 = (1U & 
                                               ((~ (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_valid)) 
                                                | (IData)(vlSelf->io_load_1_s1_kill)));
    vlSelf->DCache__DOT__loads_1__DOT___s1_go_T_1 = 
        ((~ (IData)(vlSelf->io_load_1_s1_kill)) & (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_valid));
    vlSelf->io_load_1_s2_bank_conflict = ((IData)(vlSelf->DCache__DOT__loads_1__DOT__s2_bank_conflict) 
                                          & (IData)(vlSelf->DCache__DOT__loads_1__DOT__s2_valid));
    vlSelf->io_load_1_resp_valid = ((~ (IData)(vlSelf->io_load_1_s2_kill)) 
                                    & (IData)(vlSelf->DCache__DOT__loads_1__DOT__s2_valid));
    vlSelf->DCache__DOT__loads_1_io_unique_occupy_valid 
        = ((IData)(vlSelf->DCache__DOT__loads_1__DOT__s2_upgrade) 
           & (IData)(vlSelf->DCache__DOT__loads_1__DOT__s2_valid));
    vlSelf->DCache__DOT__wb__DOT___entering_T_119 = 
        ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy) 
         & (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_159));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_153 = vlSelf->DCache__DOT__wb__DOT__entries_17_busy;
    vlSelf->DCache__DOT__wb__DOT___entering_T_112 = 
        ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy) 
         & (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_150));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_144 = 
        ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy) 
         & (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_dataReady));
    vlSelf->DCache__DOT__wb__DOT___entering_T_105 = 
        ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy) 
         & (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_141));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_135 = 
        ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy) 
         & (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_dataReady));
    vlSelf->DCache__DOT__wb__DOT___entering_T_84 = 
        ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy) 
         & (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_114));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_108 = 
        ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy) 
         & (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_dataReady));
    vlSelf->DCache__DOT__wb__DOT___entering_T_77 = 
        ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy) 
         & (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_105));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_99 = ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy) 
                                                   & (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_dataReady));
    vlSelf->DCache__DOT__wb__DOT___entering_T_91 = 
        ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy) 
         & (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_123));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_117 = 
        ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy) 
         & (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_dataReady));
    vlSelf->DCache__DOT__wb__DOT___entering_T_98 = 
        ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy) 
         & (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_132));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_126 = 
        ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy) 
         & (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_dataReady));
    vlSelf->DCache__DOT__wb__DOT___entering_T_63 = 
        ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy) 
         & (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_87));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_81 = ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy) 
                                                   & (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_dataReady));
    vlSelf->DCache__DOT__wb__DOT___entering_T_70 = 
        ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy) 
         & (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_96));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_90 = ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy) 
                                                   & (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_dataReady));
    vlSelf->DCache__DOT__wb__DOT___entering_T_56 = 
        ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy) 
         & (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_78));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_72 = ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy) 
                                                   & (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_dataReady));
    vlSelf->DCache__DOT__wb__DOT___entering_T_42 = 
        ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy) 
         & (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_60));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_54 = ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy) 
                                                   & (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_dataReady));
    vlSelf->DCache__DOT__wb__DOT___entering_T_35 = 
        ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy) 
         & (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_51));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_45 = ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy) 
                                                   & (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_dataReady));
    vlSelf->DCache__DOT__wb__DOT___entering_T_28 = 
        ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy) 
         & (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_42));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_36 = ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy) 
                                                   & (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_dataReady));
    vlSelf->DCache__DOT__wb__DOT___entering_T = ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy) 
                                                 & (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_6));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T = ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy) 
                                                & (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_dataReady));
    vlSelf->DCache__DOT__wb__DOT___entering_T_49 = 
        ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy) 
         & (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_69));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_63 = ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy) 
                                                   & (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_dataReady));
    vlSelf->DCache__DOT__wb__DOT___entering_T_7 = ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy) 
                                                   & (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_15));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_9 = ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy) 
                                                  & (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_dataReady));
    vlSelf->DCache__DOT__wb__DOT___entering_T_14 = 
        ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy) 
         & (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_24));
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_18 = ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy) 
                                                   & (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_dataReady));
    vlSelf->DCache__DOT__wb__DOT___entering_T_21 = 
        ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy) 
         & (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_33));
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
    vlSelf->DCache__DOT__wb__DOT___evtWant_T_27 = ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy) 
                                                   & (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_dataReady));
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
    vlSelf->DCache__DOT__pipe__DOT___refillOp_T_2 = 
        ((6U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd)) 
         | ((IData)(vlSelf->DCache__DOT__pipe__DOT___s3_cas_T_4) 
            | (IData)(vlSelf->DCache__DOT__pipe__DOT___s3_alu_T_16)));
    DCache__DOT__pipe__DOT__plru__DOT___GEN_295 = (
                                                   (0x27U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(
                                                               (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                                >> 6U))))
                                                    ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_39)
                                                    : 
                                                   ((0x26U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                                 >> 6U))))
                                                     ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_38)
                                                     : 
                                                    ((0x25U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(
                                                                 (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                                  >> 6U))))
                                                      ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_37)
                                                      : 
                                                     ((0x24U 
                                                       == 
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                                   >> 6U))))
                                                       ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_36)
                                                       : 
                                                      ((0x23U 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                                    >> 6U))))
                                                        ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_35)
                                                        : 
                                                       ((0x22U 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                                     >> 6U))))
                                                         ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_34)
                                                         : 
                                                        ((0x21U 
                                                          == 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                                      >> 6U))))
                                                          ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_33)
                                                          : 
                                                         ((0x20U 
                                                           == 
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                                       >> 6U))))
                                                           ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_32)
                                                           : 
                                                          ((0x1fU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                                        >> 6U))))
                                                            ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_31)
                                                            : 
                                                           ((0x1eU 
                                                             == 
                                                             (0xffU 
                                                              & (IData)(
                                                                        (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                                         >> 6U))))
                                                             ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_30)
                                                             : 
                                                            ((0x1dU 
                                                              == 
                                                              (0xffU 
                                                               & (IData)(
                                                                         (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                                          >> 6U))))
                                                              ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_29)
                                                              : 
                                                             ((0x1cU 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(
                                                                          (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                                           >> 6U))))
                                                               ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_28)
                                                               : 
                                                              ((0x1bU 
                                                                == 
                                                                (0xffU 
                                                                 & (IData)(
                                                                           (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                                            >> 6U))))
                                                                ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_27)
                                                                : (IData)(DCache__DOT__pipe__DOT__plru__DOT___GEN_282))))))))))))));
    vlSelf->DCache__DOT__data_io_load_0_bits_bankMask 
        = (0xffU & ((IData)(vlSelf->DCache__DOT__loads_0__DOT__s1_is128)
                     ? ((((IData)(1U) << (IData)(vlSelf->DCache__DOT__loads_0__DOT__s1_bank)) 
                         << 1U) | ((IData)(1U) << (IData)(vlSelf->DCache__DOT__loads_0__DOT__s1_bank)))
                     : ((IData)(1U) << (IData)(vlSelf->DCache__DOT__loads_0__DOT__s1_bank))));
    vlSelf->DCache__DOT__loads_0__DOT___T_5 = (1U & 
                                               ((~ (IData)(vlSelf->DCache__DOT__loads_0__DOT__s1_valid)) 
                                                | (IData)(vlSelf->io_load_0_s1_kill)));
    vlSelf->DCache__DOT__loads_0__DOT___s1_go_T_1 = 
        ((~ (IData)(vlSelf->io_load_0_s1_kill)) & (IData)(vlSelf->DCache__DOT__loads_0__DOT__s1_valid));
    vlSelf->io_load_0_s2_bank_conflict = ((IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_bank_conflict) 
                                          & (IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_valid));
    vlSelf->io_load_0_resp_valid = ((~ (IData)(vlSelf->io_load_0_s2_kill)) 
                                    & (IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_valid));
    vlSelf->DCache__DOT__loads_0_io_unique_occupy_valid 
        = ((IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_upgrade) 
           & (IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_valid));
    vlSelf->DCache__DOT__pipe__DOT__s2_write_hit = 
        ((IData)(vlSelf->DCache__DOT__pipe__DOT__s2_hit) 
         & ((2U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s2_coh)) 
            | (3U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s2_coh))));
    if (vlSelf->reset) {
        vlSelf->DCache__DOT__miss__DOT__entries_15_dbidValid = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_dbidValid = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_dbidValid = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_dbidValid = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_11_dbidValid = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_10_dbidValid = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_9_dbidValid = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_8_dbidValid = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_7_dbidValid = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_6_dbidValid = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_5_dbidValid = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_4_dbidValid = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_3_dbidValid = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_2_dbidValid = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_1_dbidValid = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_0_dbidValid = 0U;
    } else {
        if (vlSelf->DCache__DOT__miss__DOT__rxd_15) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_dbidValid 
                = (1U & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__seen_15)) 
                         | ((IData)(vlSelf->DCache__DOT__miss__DOT__rxr_15)
                             ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3435)
                             : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3427))));
        } else if (vlSelf->DCache__DOT__miss__DOT__rxr_15) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_dbidValid 
                = vlSelf->DCache__DOT__miss__DOT___GEN_3435;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_15) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_dbidValid = 0U;
        }
        if (vlSelf->DCache__DOT__miss__DOT__rxd_14) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_dbidValid 
                = (1U & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__seen_14)) 
                         | ((IData)(vlSelf->DCache__DOT__miss__DOT__rxr_14)
                             ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3236)
                             : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3228))));
        } else if (vlSelf->DCache__DOT__miss__DOT__rxr_14) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_dbidValid 
                = vlSelf->DCache__DOT__miss__DOT___GEN_3236;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_14) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_dbidValid = 0U;
        }
        if (vlSelf->DCache__DOT__miss__DOT__rxd_13) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_dbidValid 
                = (1U & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__seen_13)) 
                         | ((IData)(vlSelf->DCache__DOT__miss__DOT__rxr_13)
                             ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3037)
                             : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_3029))));
        } else if (vlSelf->DCache__DOT__miss__DOT__rxr_13) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_dbidValid 
                = vlSelf->DCache__DOT__miss__DOT___GEN_3037;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_13) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_dbidValid = 0U;
        }
        if (vlSelf->DCache__DOT__miss__DOT__rxd_12) {
            vlSelf->DCache__DOT__miss__DOT__entries_12_dbidValid 
                = (1U & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__seen_12)) 
                         | ((IData)(vlSelf->DCache__DOT__miss__DOT__rxr_12)
                             ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2838)
                             : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2830))));
        } else if (vlSelf->DCache__DOT__miss__DOT__rxr_12) {
            vlSelf->DCache__DOT__miss__DOT__entries_12_dbidValid 
                = vlSelf->DCache__DOT__miss__DOT___GEN_2838;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_12) {
            vlSelf->DCache__DOT__miss__DOT__entries_12_dbidValid = 0U;
        }
        if (vlSelf->DCache__DOT__miss__DOT__rxd_11) {
            vlSelf->DCache__DOT__miss__DOT__entries_11_dbidValid 
                = (1U & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__seen_11)) 
                         | ((IData)(vlSelf->DCache__DOT__miss__DOT__rxr_11)
                             ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2639)
                             : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2631))));
        } else if (vlSelf->DCache__DOT__miss__DOT__rxr_11) {
            vlSelf->DCache__DOT__miss__DOT__entries_11_dbidValid 
                = vlSelf->DCache__DOT__miss__DOT___GEN_2639;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_11) {
            vlSelf->DCache__DOT__miss__DOT__entries_11_dbidValid = 0U;
        }
        if (vlSelf->DCache__DOT__miss__DOT__rxd_10) {
            vlSelf->DCache__DOT__miss__DOT__entries_10_dbidValid 
                = (1U & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__seen_10)) 
                         | ((IData)(vlSelf->DCache__DOT__miss__DOT__rxr_10)
                             ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2440)
                             : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2432))));
        } else if (vlSelf->DCache__DOT__miss__DOT__rxr_10) {
            vlSelf->DCache__DOT__miss__DOT__entries_10_dbidValid 
                = vlSelf->DCache__DOT__miss__DOT___GEN_2440;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_10) {
            vlSelf->DCache__DOT__miss__DOT__entries_10_dbidValid = 0U;
        }
        if (vlSelf->DCache__DOT__miss__DOT__rxd_9) {
            vlSelf->DCache__DOT__miss__DOT__entries_9_dbidValid 
                = (1U & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__seen_9)) 
                         | ((IData)(vlSelf->DCache__DOT__miss__DOT__rxr_9)
                             ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2241)
                             : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2233))));
        } else if (vlSelf->DCache__DOT__miss__DOT__rxr_9) {
            vlSelf->DCache__DOT__miss__DOT__entries_9_dbidValid 
                = vlSelf->DCache__DOT__miss__DOT___GEN_2241;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_9) {
            vlSelf->DCache__DOT__miss__DOT__entries_9_dbidValid = 0U;
        }
        if (vlSelf->DCache__DOT__miss__DOT__rxd_8) {
            vlSelf->DCache__DOT__miss__DOT__entries_8_dbidValid 
                = (1U & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__seen_8)) 
                         | ((IData)(vlSelf->DCache__DOT__miss__DOT__rxr_8)
                             ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2042)
                             : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_2034))));
        } else if (vlSelf->DCache__DOT__miss__DOT__rxr_8) {
            vlSelf->DCache__DOT__miss__DOT__entries_8_dbidValid 
                = vlSelf->DCache__DOT__miss__DOT___GEN_2042;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_8) {
            vlSelf->DCache__DOT__miss__DOT__entries_8_dbidValid = 0U;
        }
        if (vlSelf->DCache__DOT__miss__DOT__rxd_7) {
            vlSelf->DCache__DOT__miss__DOT__entries_7_dbidValid 
                = (1U & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__seen_7)) 
                         | ((IData)(vlSelf->DCache__DOT__miss__DOT__rxr_7)
                             ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1843)
                             : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1835))));
        } else if (vlSelf->DCache__DOT__miss__DOT__rxr_7) {
            vlSelf->DCache__DOT__miss__DOT__entries_7_dbidValid 
                = vlSelf->DCache__DOT__miss__DOT___GEN_1843;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_7) {
            vlSelf->DCache__DOT__miss__DOT__entries_7_dbidValid = 0U;
        }
        if (vlSelf->DCache__DOT__miss__DOT__rxd_6) {
            vlSelf->DCache__DOT__miss__DOT__entries_6_dbidValid 
                = (1U & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__seen_6)) 
                         | ((IData)(vlSelf->DCache__DOT__miss__DOT__rxr_6)
                             ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1644)
                             : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1636))));
        } else if (vlSelf->DCache__DOT__miss__DOT__rxr_6) {
            vlSelf->DCache__DOT__miss__DOT__entries_6_dbidValid 
                = vlSelf->DCache__DOT__miss__DOT___GEN_1644;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_6) {
            vlSelf->DCache__DOT__miss__DOT__entries_6_dbidValid = 0U;
        }
        if (vlSelf->DCache__DOT__miss__DOT__rxd_5) {
            vlSelf->DCache__DOT__miss__DOT__entries_5_dbidValid 
                = (1U & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__seen_5)) 
                         | ((IData)(vlSelf->DCache__DOT__miss__DOT__rxr_5)
                             ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1445)
                             : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1437))));
        } else if (vlSelf->DCache__DOT__miss__DOT__rxr_5) {
            vlSelf->DCache__DOT__miss__DOT__entries_5_dbidValid 
                = vlSelf->DCache__DOT__miss__DOT___GEN_1445;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_5) {
            vlSelf->DCache__DOT__miss__DOT__entries_5_dbidValid = 0U;
        }
        if (vlSelf->DCache__DOT__miss__DOT__rxd_4) {
            vlSelf->DCache__DOT__miss__DOT__entries_4_dbidValid 
                = (1U & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__seen_4)) 
                         | ((IData)(vlSelf->DCache__DOT__miss__DOT__rxr_4)
                             ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1246)
                             : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1238))));
        } else if (vlSelf->DCache__DOT__miss__DOT__rxr_4) {
            vlSelf->DCache__DOT__miss__DOT__entries_4_dbidValid 
                = vlSelf->DCache__DOT__miss__DOT___GEN_1246;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_4) {
            vlSelf->DCache__DOT__miss__DOT__entries_4_dbidValid = 0U;
        }
        if (vlSelf->DCache__DOT__miss__DOT__rxd_3) {
            vlSelf->DCache__DOT__miss__DOT__entries_3_dbidValid 
                = (1U & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__seen_3)) 
                         | ((IData)(vlSelf->DCache__DOT__miss__DOT__rxr_3)
                             ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1047)
                             : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_1039))));
        } else if (vlSelf->DCache__DOT__miss__DOT__rxr_3) {
            vlSelf->DCache__DOT__miss__DOT__entries_3_dbidValid 
                = vlSelf->DCache__DOT__miss__DOT___GEN_1047;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_3) {
            vlSelf->DCache__DOT__miss__DOT__entries_3_dbidValid = 0U;
        }
        if (vlSelf->DCache__DOT__miss__DOT__rxd_2) {
            vlSelf->DCache__DOT__miss__DOT__entries_2_dbidValid 
                = (1U & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__seen_2)) 
                         | ((IData)(vlSelf->DCache__DOT__miss__DOT__rxr_2)
                             ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_848)
                             : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_840))));
        } else if (vlSelf->DCache__DOT__miss__DOT__rxr_2) {
            vlSelf->DCache__DOT__miss__DOT__entries_2_dbidValid 
                = vlSelf->DCache__DOT__miss__DOT___GEN_848;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_2) {
            vlSelf->DCache__DOT__miss__DOT__entries_2_dbidValid = 0U;
        }
        if (vlSelf->DCache__DOT__miss__DOT__rxd_1) {
            vlSelf->DCache__DOT__miss__DOT__entries_1_dbidValid 
                = (1U & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__seen_1)) 
                         | ((IData)(vlSelf->DCache__DOT__miss__DOT__rxr_1)
                             ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_649)
                             : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_641))));
        } else if (vlSelf->DCache__DOT__miss__DOT__rxr_1) {
            vlSelf->DCache__DOT__miss__DOT__entries_1_dbidValid 
                = vlSelf->DCache__DOT__miss__DOT___GEN_649;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_1) {
            vlSelf->DCache__DOT__miss__DOT__entries_1_dbidValid = 0U;
        }
        if (vlSelf->DCache__DOT__miss__DOT__rxd) {
            vlSelf->DCache__DOT__miss__DOT__entries_0_dbidValid 
                = (1U & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__seen)) 
                         | ((IData)(vlSelf->DCache__DOT__miss__DOT__rxr)
                             ? (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_450)
                             : (IData)(vlSelf->DCache__DOT__miss__DOT___GEN_442))));
        } else if (vlSelf->DCache__DOT__miss__DOT__rxr) {
            vlSelf->DCache__DOT__miss__DOT__entries_0_dbidValid 
                = vlSelf->DCache__DOT__miss__DOT___GEN_450;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc) {
            vlSelf->DCache__DOT__miss__DOT__entries_0_dbidValid = 0U;
        }
    }
    if (vlSelf->DCache__DOT__pipe__DOT___s0_fire_T) {
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[0U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[1U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[2U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[3U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[4U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[5U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[6U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[7U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[8U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[9U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[0xaU] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[0xbU] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[0xcU] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[0xdU] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[0xeU] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[0xfU] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[0U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[1U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[2U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[3U] = 0U;
    } else if (vlSelf->DCache__DOT__pipe__DOT___s0_fire_T_1) {
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[0U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[1U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[2U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[3U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[4U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[5U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[6U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[7U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[8U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[9U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[0xaU] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[0xbU] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[0xcU] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[0xdU] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[0xeU] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[0xfU] = 0U;
        if ((0xfU == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[0U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_15_amoData[0U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[1U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_15_amoData[1U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[2U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_15_amoData[2U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[3U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_15_amoData[3U];
        } else if ((0xeU == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[0U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_14_amoData[0U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[1U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_14_amoData[1U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[2U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_14_amoData[2U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[3U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_14_amoData[3U];
        } else if ((0xdU == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[0U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_13_amoData[0U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[1U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_13_amoData[1U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[2U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_13_amoData[2U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[3U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_13_amoData[3U];
        } else if ((0xcU == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[0U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_12_amoData[0U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[1U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_12_amoData[1U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[2U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_12_amoData[2U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[3U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_12_amoData[3U];
        } else if ((0xbU == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[0U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_11_amoData[0U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[1U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_11_amoData[1U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[2U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_11_amoData[2U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[3U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_11_amoData[3U];
        } else if ((0xaU == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[0U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_10_amoData[0U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[1U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_10_amoData[1U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[2U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_10_amoData[2U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[3U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_10_amoData[3U];
        } else if ((9U == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[0U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_9_amoData[0U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[1U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_9_amoData[1U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[2U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_9_amoData[2U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[3U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_9_amoData[3U];
        } else if ((8U == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[0U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_8_amoData[0U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[1U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_8_amoData[1U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[2U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_8_amoData[2U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[3U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_8_amoData[3U];
        } else if ((7U == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[0U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_7_amoData[0U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[1U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_7_amoData[1U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[2U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_7_amoData[2U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[3U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_7_amoData[3U];
        } else if ((6U == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[0U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_6_amoData[0U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[1U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_6_amoData[1U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[2U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_6_amoData[2U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[3U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_6_amoData[3U];
        } else if ((5U == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[0U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_5_amoData[0U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[1U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_5_amoData[1U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[2U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_5_amoData[2U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[3U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_5_amoData[3U];
        } else if ((4U == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[0U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_4_amoData[0U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[1U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_4_amoData[1U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[2U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_4_amoData[2U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[3U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_4_amoData[3U];
        } else if ((3U == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[0U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_3_amoData[0U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[1U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_3_amoData[1U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[2U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_3_amoData[2U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[3U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_3_amoData[3U];
        } else if ((2U == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[0U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_2_amoData[0U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[1U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_2_amoData[1U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[2U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_2_amoData[2U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[3U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_2_amoData[3U];
        } else if ((1U == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[0U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_1_amoData[0U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[1U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_1_amoData[1U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[2U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_1_amoData[2U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[3U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_1_amoData[3U];
        } else {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[0U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_0_amoData[0U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[1U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_0_amoData[1U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[2U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_0_amoData[2U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[3U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_0_amoData[3U];
        }
    } else if (vlSelf->DCache__DOT__pipe__DOT___s0_fire_T_3) {
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[0U] 
            = vlSelf->io_store_req_bits_data[0U];
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[1U] 
            = vlSelf->io_store_req_bits_data[1U];
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[2U] 
            = vlSelf->io_store_req_bits_data[2U];
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[3U] 
            = vlSelf->io_store_req_bits_data[3U];
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[4U] 
            = vlSelf->io_store_req_bits_data[4U];
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[5U] 
            = vlSelf->io_store_req_bits_data[5U];
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[6U] 
            = vlSelf->io_store_req_bits_data[6U];
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[7U] 
            = vlSelf->io_store_req_bits_data[7U];
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[8U] 
            = vlSelf->io_store_req_bits_data[8U];
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[9U] 
            = vlSelf->io_store_req_bits_data[9U];
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[0xaU] 
            = vlSelf->io_store_req_bits_data[0xaU];
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[0xbU] 
            = vlSelf->io_store_req_bits_data[0xbU];
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[0xcU] 
            = vlSelf->io_store_req_bits_data[0xcU];
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[0xdU] 
            = vlSelf->io_store_req_bits_data[0xdU];
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[0xeU] 
            = vlSelf->io_store_req_bits_data[0xeU];
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[0xfU] 
            = vlSelf->io_store_req_bits_data[0xfU];
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[0U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[1U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[2U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[3U] = 0U;
    } else if (vlSelf->DCache__DOT__pipe__DOT___s0_fire_T_5) {
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[0U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[1U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[2U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[3U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[4U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[5U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[6U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[7U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[8U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[9U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[0xaU] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[0xbU] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[0xcU] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[0xdU] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[0xeU] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeData[0xfU] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[0U] 
            = vlSelf->io_atomics_req_bits_amoData[0U];
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[1U] 
            = vlSelf->io_atomics_req_bits_amoData[1U];
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[2U] 
            = vlSelf->io_atomics_req_bits_amoData[2U];
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoData[3U] 
            = vlSelf->io_atomics_req_bits_amoData[3U];
    }
    if (vlSelf->reset) {
        vlSelf->DCache__DOT__miss__DOT__entries_15_amoData[0U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_15_amoData[1U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_15_amoData[2U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_15_amoData[3U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_amoData[0U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_amoData[1U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_amoData[2U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_amoData[3U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_amoData[0U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_amoData[1U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_amoData[2U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_amoData[3U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_amoData[0U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_amoData[1U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_amoData[2U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_amoData[3U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_11_amoData[0U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_11_amoData[1U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_11_amoData[2U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_11_amoData[3U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_10_amoData[0U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_10_amoData[1U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_10_amoData[2U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_10_amoData[3U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_9_amoData[0U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_9_amoData[1U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_9_amoData[2U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_9_amoData[3U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_8_amoData[0U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_8_amoData[1U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_8_amoData[2U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_8_amoData[3U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_7_amoData[0U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_7_amoData[1U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_7_amoData[2U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_7_amoData[3U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_6_amoData[0U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_6_amoData[1U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_6_amoData[2U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_6_amoData[3U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_5_amoData[0U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_5_amoData[1U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_5_amoData[2U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_5_amoData[3U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_4_amoData[0U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_4_amoData[1U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_4_amoData[2U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_4_amoData[3U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_3_amoData[0U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_3_amoData[1U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_3_amoData[2U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_3_amoData[3U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_2_amoData[0U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_2_amoData[1U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_2_amoData[2U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_2_amoData[3U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_1_amoData[0U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_1_amoData[1U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_1_amoData[2U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_1_amoData[3U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_0_amoData[0U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_0_amoData[1U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_0_amoData[2U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_0_amoData[3U] = 0U;
    } else {
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_15) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_amoData[0U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[0U];
            vlSelf->DCache__DOT__miss__DOT__entries_15_amoData[1U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[1U];
            vlSelf->DCache__DOT__miss__DOT__entries_15_amoData[2U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[2U];
            vlSelf->DCache__DOT__miss__DOT__entries_15_amoData[3U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[3U];
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_14) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_amoData[0U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[0U];
            vlSelf->DCache__DOT__miss__DOT__entries_14_amoData[1U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[1U];
            vlSelf->DCache__DOT__miss__DOT__entries_14_amoData[2U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[2U];
            vlSelf->DCache__DOT__miss__DOT__entries_14_amoData[3U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[3U];
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_13) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_amoData[0U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[0U];
            vlSelf->DCache__DOT__miss__DOT__entries_13_amoData[1U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[1U];
            vlSelf->DCache__DOT__miss__DOT__entries_13_amoData[2U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[2U];
            vlSelf->DCache__DOT__miss__DOT__entries_13_amoData[3U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[3U];
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_12) {
            vlSelf->DCache__DOT__miss__DOT__entries_12_amoData[0U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[0U];
            vlSelf->DCache__DOT__miss__DOT__entries_12_amoData[1U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[1U];
            vlSelf->DCache__DOT__miss__DOT__entries_12_amoData[2U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[2U];
            vlSelf->DCache__DOT__miss__DOT__entries_12_amoData[3U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[3U];
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_11) {
            vlSelf->DCache__DOT__miss__DOT__entries_11_amoData[0U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[0U];
            vlSelf->DCache__DOT__miss__DOT__entries_11_amoData[1U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[1U];
            vlSelf->DCache__DOT__miss__DOT__entries_11_amoData[2U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[2U];
            vlSelf->DCache__DOT__miss__DOT__entries_11_amoData[3U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[3U];
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_10) {
            vlSelf->DCache__DOT__miss__DOT__entries_10_amoData[0U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[0U];
            vlSelf->DCache__DOT__miss__DOT__entries_10_amoData[1U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[1U];
            vlSelf->DCache__DOT__miss__DOT__entries_10_amoData[2U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[2U];
            vlSelf->DCache__DOT__miss__DOT__entries_10_amoData[3U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[3U];
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_9) {
            vlSelf->DCache__DOT__miss__DOT__entries_9_amoData[0U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[0U];
            vlSelf->DCache__DOT__miss__DOT__entries_9_amoData[1U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[1U];
            vlSelf->DCache__DOT__miss__DOT__entries_9_amoData[2U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[2U];
            vlSelf->DCache__DOT__miss__DOT__entries_9_amoData[3U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[3U];
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_8) {
            vlSelf->DCache__DOT__miss__DOT__entries_8_amoData[0U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[0U];
            vlSelf->DCache__DOT__miss__DOT__entries_8_amoData[1U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[1U];
            vlSelf->DCache__DOT__miss__DOT__entries_8_amoData[2U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[2U];
            vlSelf->DCache__DOT__miss__DOT__entries_8_amoData[3U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[3U];
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_7) {
            vlSelf->DCache__DOT__miss__DOT__entries_7_amoData[0U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[0U];
            vlSelf->DCache__DOT__miss__DOT__entries_7_amoData[1U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[1U];
            vlSelf->DCache__DOT__miss__DOT__entries_7_amoData[2U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[2U];
            vlSelf->DCache__DOT__miss__DOT__entries_7_amoData[3U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[3U];
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_6) {
            vlSelf->DCache__DOT__miss__DOT__entries_6_amoData[0U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[0U];
            vlSelf->DCache__DOT__miss__DOT__entries_6_amoData[1U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[1U];
            vlSelf->DCache__DOT__miss__DOT__entries_6_amoData[2U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[2U];
            vlSelf->DCache__DOT__miss__DOT__entries_6_amoData[3U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[3U];
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_5) {
            vlSelf->DCache__DOT__miss__DOT__entries_5_amoData[0U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[0U];
            vlSelf->DCache__DOT__miss__DOT__entries_5_amoData[1U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[1U];
            vlSelf->DCache__DOT__miss__DOT__entries_5_amoData[2U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[2U];
            vlSelf->DCache__DOT__miss__DOT__entries_5_amoData[3U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[3U];
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_4) {
            vlSelf->DCache__DOT__miss__DOT__entries_4_amoData[0U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[0U];
            vlSelf->DCache__DOT__miss__DOT__entries_4_amoData[1U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[1U];
            vlSelf->DCache__DOT__miss__DOT__entries_4_amoData[2U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[2U];
            vlSelf->DCache__DOT__miss__DOT__entries_4_amoData[3U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[3U];
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_3) {
            vlSelf->DCache__DOT__miss__DOT__entries_3_amoData[0U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[0U];
            vlSelf->DCache__DOT__miss__DOT__entries_3_amoData[1U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[1U];
            vlSelf->DCache__DOT__miss__DOT__entries_3_amoData[2U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[2U];
            vlSelf->DCache__DOT__miss__DOT__entries_3_amoData[3U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[3U];
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_2) {
            vlSelf->DCache__DOT__miss__DOT__entries_2_amoData[0U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[0U];
            vlSelf->DCache__DOT__miss__DOT__entries_2_amoData[1U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[1U];
            vlSelf->DCache__DOT__miss__DOT__entries_2_amoData[2U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[2U];
            vlSelf->DCache__DOT__miss__DOT__entries_2_amoData[3U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[3U];
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_1) {
            vlSelf->DCache__DOT__miss__DOT__entries_1_amoData[0U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[0U];
            vlSelf->DCache__DOT__miss__DOT__entries_1_amoData[1U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[1U];
            vlSelf->DCache__DOT__miss__DOT__entries_1_amoData[2U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[2U];
            vlSelf->DCache__DOT__miss__DOT__entries_1_amoData[3U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[3U];
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc) {
            vlSelf->DCache__DOT__miss__DOT__entries_0_amoData[0U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[0U];
            vlSelf->DCache__DOT__miss__DOT__entries_0_amoData[1U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[1U];
            vlSelf->DCache__DOT__miss__DOT__entries_0_amoData[2U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[2U];
            vlSelf->DCache__DOT__miss__DOT__entries_0_amoData[3U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_data[3U];
        }
    }
    if (vlSelf->DCache__DOT__pipe__DOT___s0_fire_T) {
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[0U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[1U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[2U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[3U] = 0U;
    } else if (vlSelf->DCache__DOT__pipe__DOT___s0_fire_T_1) {
        if ((0xfU == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[0U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_15_amoCmp[0U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[1U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_15_amoCmp[1U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[2U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_15_amoCmp[2U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[3U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_15_amoCmp[3U];
        } else if ((0xeU == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[0U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_14_amoCmp[0U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[1U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_14_amoCmp[1U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[2U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_14_amoCmp[2U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[3U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_14_amoCmp[3U];
        } else if ((0xdU == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[0U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_13_amoCmp[0U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[1U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_13_amoCmp[1U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[2U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_13_amoCmp[2U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[3U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_13_amoCmp[3U];
        } else if ((0xcU == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[0U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_12_amoCmp[0U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[1U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_12_amoCmp[1U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[2U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_12_amoCmp[2U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[3U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_12_amoCmp[3U];
        } else if ((0xbU == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[0U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_11_amoCmp[0U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[1U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_11_amoCmp[1U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[2U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_11_amoCmp[2U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[3U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_11_amoCmp[3U];
        } else if ((0xaU == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[0U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_10_amoCmp[0U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[1U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_10_amoCmp[1U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[2U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_10_amoCmp[2U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[3U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_10_amoCmp[3U];
        } else if ((9U == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[0U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_9_amoCmp[0U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[1U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_9_amoCmp[1U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[2U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_9_amoCmp[2U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[3U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_9_amoCmp[3U];
        } else if ((8U == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[0U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_8_amoCmp[0U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[1U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_8_amoCmp[1U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[2U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_8_amoCmp[2U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[3U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_8_amoCmp[3U];
        } else if ((7U == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[0U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_7_amoCmp[0U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[1U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_7_amoCmp[1U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[2U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_7_amoCmp[2U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[3U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_7_amoCmp[3U];
        } else if ((6U == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[0U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_6_amoCmp[0U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[1U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_6_amoCmp[1U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[2U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_6_amoCmp[2U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[3U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_6_amoCmp[3U];
        } else if ((5U == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[0U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_5_amoCmp[0U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[1U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_5_amoCmp[1U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[2U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_5_amoCmp[2U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[3U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_5_amoCmp[3U];
        } else if ((4U == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[0U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_4_amoCmp[0U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[1U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_4_amoCmp[1U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[2U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_4_amoCmp[2U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[3U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_4_amoCmp[3U];
        } else if ((3U == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[0U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_3_amoCmp[0U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[1U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_3_amoCmp[1U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[2U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_3_amoCmp[2U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[3U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_3_amoCmp[3U];
        } else if ((2U == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[0U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_2_amoCmp[0U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[1U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_2_amoCmp[1U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[2U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_2_amoCmp[2U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[3U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_2_amoCmp[3U];
        } else if ((1U == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[0U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_1_amoCmp[0U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[1U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_1_amoCmp[1U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[2U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_1_amoCmp[2U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[3U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_1_amoCmp[3U];
        } else {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[0U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_0_amoCmp[0U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[1U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_0_amoCmp[1U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[2U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_0_amoCmp[2U];
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[3U] 
                = vlSelf->DCache__DOT__miss__DOT__entries_0_amoCmp[3U];
        }
    } else if (vlSelf->DCache__DOT__pipe__DOT___s0_fire_T_3) {
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[0U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[1U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[2U] = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[3U] = 0U;
    } else if (vlSelf->DCache__DOT__pipe__DOT___s0_fire_T_5) {
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[0U] 
            = vlSelf->io_atomics_req_bits_amoCmp[0U];
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[1U] 
            = vlSelf->io_atomics_req_bits_amoCmp[1U];
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[2U] 
            = vlSelf->io_atomics_req_bits_amoCmp[2U];
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoCmp[3U] 
            = vlSelf->io_atomics_req_bits_amoCmp[3U];
    }
    if (vlSelf->reset) {
        vlSelf->DCache__DOT__miss__DOT__entries_15_amoCmp[0U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_15_amoCmp[1U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_15_amoCmp[2U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_15_amoCmp[3U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_amoCmp[0U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_amoCmp[1U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_amoCmp[2U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_amoCmp[3U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_amoCmp[0U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_amoCmp[1U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_amoCmp[2U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_amoCmp[3U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_amoCmp[0U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_amoCmp[1U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_amoCmp[2U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_amoCmp[3U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_11_amoCmp[0U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_11_amoCmp[1U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_11_amoCmp[2U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_11_amoCmp[3U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_10_amoCmp[0U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_10_amoCmp[1U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_10_amoCmp[2U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_10_amoCmp[3U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_9_amoCmp[0U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_9_amoCmp[1U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_9_amoCmp[2U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_9_amoCmp[3U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_8_amoCmp[0U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_8_amoCmp[1U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_8_amoCmp[2U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_8_amoCmp[3U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_7_amoCmp[0U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_7_amoCmp[1U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_7_amoCmp[2U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_7_amoCmp[3U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_6_amoCmp[0U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_6_amoCmp[1U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_6_amoCmp[2U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_6_amoCmp[3U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_5_amoCmp[0U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_5_amoCmp[1U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_5_amoCmp[2U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_5_amoCmp[3U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_4_amoCmp[0U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_4_amoCmp[1U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_4_amoCmp[2U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_4_amoCmp[3U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_3_amoCmp[0U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_3_amoCmp[1U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_3_amoCmp[2U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_3_amoCmp[3U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_2_amoCmp[0U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_2_amoCmp[1U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_2_amoCmp[2U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_2_amoCmp[3U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_1_amoCmp[0U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_1_amoCmp[1U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_1_amoCmp[2U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_1_amoCmp[3U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_0_amoCmp[0U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_0_amoCmp[1U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_0_amoCmp[2U] = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_0_amoCmp[3U] = 0U;
    } else {
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_15) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_amoCmp[0U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[0U];
            vlSelf->DCache__DOT__miss__DOT__entries_15_amoCmp[1U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[1U];
            vlSelf->DCache__DOT__miss__DOT__entries_15_amoCmp[2U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[2U];
            vlSelf->DCache__DOT__miss__DOT__entries_15_amoCmp[3U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[3U];
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_14) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_amoCmp[0U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[0U];
            vlSelf->DCache__DOT__miss__DOT__entries_14_amoCmp[1U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[1U];
            vlSelf->DCache__DOT__miss__DOT__entries_14_amoCmp[2U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[2U];
            vlSelf->DCache__DOT__miss__DOT__entries_14_amoCmp[3U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[3U];
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_13) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_amoCmp[0U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[0U];
            vlSelf->DCache__DOT__miss__DOT__entries_13_amoCmp[1U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[1U];
            vlSelf->DCache__DOT__miss__DOT__entries_13_amoCmp[2U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[2U];
            vlSelf->DCache__DOT__miss__DOT__entries_13_amoCmp[3U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[3U];
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_12) {
            vlSelf->DCache__DOT__miss__DOT__entries_12_amoCmp[0U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[0U];
            vlSelf->DCache__DOT__miss__DOT__entries_12_amoCmp[1U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[1U];
            vlSelf->DCache__DOT__miss__DOT__entries_12_amoCmp[2U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[2U];
            vlSelf->DCache__DOT__miss__DOT__entries_12_amoCmp[3U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[3U];
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_11) {
            vlSelf->DCache__DOT__miss__DOT__entries_11_amoCmp[0U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[0U];
            vlSelf->DCache__DOT__miss__DOT__entries_11_amoCmp[1U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[1U];
            vlSelf->DCache__DOT__miss__DOT__entries_11_amoCmp[2U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[2U];
            vlSelf->DCache__DOT__miss__DOT__entries_11_amoCmp[3U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[3U];
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_10) {
            vlSelf->DCache__DOT__miss__DOT__entries_10_amoCmp[0U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[0U];
            vlSelf->DCache__DOT__miss__DOT__entries_10_amoCmp[1U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[1U];
            vlSelf->DCache__DOT__miss__DOT__entries_10_amoCmp[2U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[2U];
            vlSelf->DCache__DOT__miss__DOT__entries_10_amoCmp[3U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[3U];
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_9) {
            vlSelf->DCache__DOT__miss__DOT__entries_9_amoCmp[0U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[0U];
            vlSelf->DCache__DOT__miss__DOT__entries_9_amoCmp[1U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[1U];
            vlSelf->DCache__DOT__miss__DOT__entries_9_amoCmp[2U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[2U];
            vlSelf->DCache__DOT__miss__DOT__entries_9_amoCmp[3U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[3U];
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_8) {
            vlSelf->DCache__DOT__miss__DOT__entries_8_amoCmp[0U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[0U];
            vlSelf->DCache__DOT__miss__DOT__entries_8_amoCmp[1U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[1U];
            vlSelf->DCache__DOT__miss__DOT__entries_8_amoCmp[2U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[2U];
            vlSelf->DCache__DOT__miss__DOT__entries_8_amoCmp[3U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[3U];
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_7) {
            vlSelf->DCache__DOT__miss__DOT__entries_7_amoCmp[0U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[0U];
            vlSelf->DCache__DOT__miss__DOT__entries_7_amoCmp[1U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[1U];
            vlSelf->DCache__DOT__miss__DOT__entries_7_amoCmp[2U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[2U];
            vlSelf->DCache__DOT__miss__DOT__entries_7_amoCmp[3U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[3U];
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_6) {
            vlSelf->DCache__DOT__miss__DOT__entries_6_amoCmp[0U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[0U];
            vlSelf->DCache__DOT__miss__DOT__entries_6_amoCmp[1U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[1U];
            vlSelf->DCache__DOT__miss__DOT__entries_6_amoCmp[2U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[2U];
            vlSelf->DCache__DOT__miss__DOT__entries_6_amoCmp[3U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[3U];
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_5) {
            vlSelf->DCache__DOT__miss__DOT__entries_5_amoCmp[0U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[0U];
            vlSelf->DCache__DOT__miss__DOT__entries_5_amoCmp[1U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[1U];
            vlSelf->DCache__DOT__miss__DOT__entries_5_amoCmp[2U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[2U];
            vlSelf->DCache__DOT__miss__DOT__entries_5_amoCmp[3U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[3U];
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_4) {
            vlSelf->DCache__DOT__miss__DOT__entries_4_amoCmp[0U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[0U];
            vlSelf->DCache__DOT__miss__DOT__entries_4_amoCmp[1U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[1U];
            vlSelf->DCache__DOT__miss__DOT__entries_4_amoCmp[2U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[2U];
            vlSelf->DCache__DOT__miss__DOT__entries_4_amoCmp[3U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[3U];
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_3) {
            vlSelf->DCache__DOT__miss__DOT__entries_3_amoCmp[0U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[0U];
            vlSelf->DCache__DOT__miss__DOT__entries_3_amoCmp[1U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[1U];
            vlSelf->DCache__DOT__miss__DOT__entries_3_amoCmp[2U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[2U];
            vlSelf->DCache__DOT__miss__DOT__entries_3_amoCmp[3U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[3U];
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_2) {
            vlSelf->DCache__DOT__miss__DOT__entries_2_amoCmp[0U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[0U];
            vlSelf->DCache__DOT__miss__DOT__entries_2_amoCmp[1U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[1U];
            vlSelf->DCache__DOT__miss__DOT__entries_2_amoCmp[2U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[2U];
            vlSelf->DCache__DOT__miss__DOT__entries_2_amoCmp[3U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[3U];
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_1) {
            vlSelf->DCache__DOT__miss__DOT__entries_1_amoCmp[0U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[0U];
            vlSelf->DCache__DOT__miss__DOT__entries_1_amoCmp[1U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[1U];
            vlSelf->DCache__DOT__miss__DOT__entries_1_amoCmp[2U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[2U];
            vlSelf->DCache__DOT__miss__DOT__entries_1_amoCmp[3U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[3U];
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc) {
            vlSelf->DCache__DOT__miss__DOT__entries_0_amoCmp[0U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[0U];
            vlSelf->DCache__DOT__miss__DOT__entries_0_amoCmp[1U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[1U];
            vlSelf->DCache__DOT__miss__DOT__entries_0_amoCmp[2U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[2U];
            vlSelf->DCache__DOT__miss__DOT__entries_0_amoCmp[3U] 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_cmp[3U];
        }
    }
    if (vlSelf->DCache__DOT__pipe__DOT___s0_fire_T) {
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_needData = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask = 0ULL;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_id 
            = vlSelf->DCache__DOT__probe__DOT__outBits_id;
    } else if (vlSelf->DCache__DOT__pipe__DOT___s0_fire_T_1) {
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_needData = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask = 0ULL;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_id 
            = ((0xfU == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))
                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_0_id)
                : ((0xeU == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))
                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_0_id)
                    : ((0xdU == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))
                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_0_id)
                        : ((0xcU == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))
                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_0_id)
                            : ((0xbU == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))
                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_0_id)
                                : ((0xaU == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))
                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_0_id)
                                    : ((9U == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))
                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_0_id)
                                        : ((8U == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))
                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_0_id)
                                            : ((7U 
                                                == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))
                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_0_id)
                                                : (
                                                   (6U 
                                                    == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))
                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_0_id)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))
                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_0_id)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))
                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_0_id)
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))
                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_0_id)
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))
                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_0_id)
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_0_id)
                                                         : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_0_id))))))))))))))));
    } else if (vlSelf->DCache__DOT__pipe__DOT___s0_fire_T_3) {
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_needData = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask 
            = vlSelf->io_store_req_bits_mask;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_id 
            = vlSelf->io_store_req_bits_id;
    } else if (vlSelf->DCache__DOT__pipe__DOT___s0_fire_T_5) {
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_needData 
            = vlSelf->io_atomics_req_bits_needData;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask = 0ULL;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_id 
            = vlSelf->io_atomics_req_bits_id;
    }
    if (vlSelf->reset) {
        vlSelf->DCache__DOT__probe__DOT__outBits_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_15_clients_0_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_clients_0_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_clients_0_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_clients_0_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_11_clients_0_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_10_clients_0_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_9_clients_0_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_8_clients_0_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_7_clients_0_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_6_clients_0_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_5_clients_0_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_4_clients_0_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_3_clients_0_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_2_clients_0_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_1_clients_0_id = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_0_clients_0_id = 0U;
    } else {
        if (vlSelf->DCache__DOT__probe__DOT__canPick) {
            vlSelf->DCache__DOT__probe__DOT__outBits_id 
                = vlSelf->DCache__DOT__probe__DOT__pick;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_15) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_0_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_15) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_clients_0_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_14) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_0_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_14) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_clients_0_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_13) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_0_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_13) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_clients_0_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_12) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_0_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_12) {
            vlSelf->DCache__DOT__miss__DOT__entries_12_clients_0_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_11) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_11_clients_0_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_11) {
            vlSelf->DCache__DOT__miss__DOT__entries_11_clients_0_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_10) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_10_clients_0_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_10) {
            vlSelf->DCache__DOT__miss__DOT__entries_10_clients_0_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_9) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_9_clients_0_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_9) {
            vlSelf->DCache__DOT__miss__DOT__entries_9_clients_0_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_8) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_8_clients_0_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_8) {
            vlSelf->DCache__DOT__miss__DOT__entries_8_clients_0_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_7) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_7_clients_0_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_7) {
            vlSelf->DCache__DOT__miss__DOT__entries_7_clients_0_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_6) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_6_clients_0_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_6) {
            vlSelf->DCache__DOT__miss__DOT__entries_6_clients_0_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_5) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_5_clients_0_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_5) {
            vlSelf->DCache__DOT__miss__DOT__entries_5_clients_0_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_4) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_4_clients_0_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_4) {
            vlSelf->DCache__DOT__miss__DOT__entries_4_clients_0_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_3) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_3_clients_0_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_3) {
            vlSelf->DCache__DOT__miss__DOT__entries_3_clients_0_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_2) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_2_clients_0_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_2) {
            vlSelf->DCache__DOT__miss__DOT__entries_2_clients_0_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge_1) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_1_clients_0_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc_1) {
            vlSelf->DCache__DOT__miss__DOT__entries_1_clients_0_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
        }
        if ((((IData)(vlSelf->DCache__DOT__miss__DOT__doMerge) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__hasSlot)) 
             & (0U == (IData)(vlSelf->DCache__DOT__miss__DOT__mergeSlot)))) {
            vlSelf->DCache__DOT__miss__DOT__entries_0_clients_0_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
        } else if (vlSelf->DCache__DOT__miss__DOT__doAlloc) {
            vlSelf->DCache__DOT__miss__DOT__entries_0_clients_0_id 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_id;
        }
    }
    if (vlSelf->DCache__DOT__pipe__DOT___s0_fire_T) {
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoMask = 0U;
    } else if (vlSelf->DCache__DOT__pipe__DOT___s0_fire_T_1) {
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoMask 
            = ((0xfU == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))
                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_amoMask)
                : ((0xeU == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))
                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_amoMask)
                    : ((0xdU == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))
                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_amoMask)
                        : ((0xcU == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))
                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_amoMask)
                            : ((0xbU == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))
                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_amoMask)
                                : ((0xaU == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))
                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_amoMask)
                                    : ((9U == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))
                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_amoMask)
                                        : ((8U == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))
                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_amoMask)
                                            : ((7U 
                                                == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))
                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_amoMask)
                                                : (
                                                   (6U 
                                                    == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))
                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_amoMask)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))
                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_amoMask)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))
                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_amoMask)
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))
                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_amoMask)
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))
                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_amoMask)
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_amoMask)
                                                         : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_amoMask))))))))))))))));
    } else if (vlSelf->DCache__DOT__pipe__DOT___s0_fire_T_3) {
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoMask = 0U;
    } else if (vlSelf->DCache__DOT__pipe__DOT___s0_fire_T_5) {
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_amoMask 
            = vlSelf->io_atomics_req_bits_amoMask;
    }
    if (vlSelf->reset) {
        vlSelf->DCache__DOT__miss__DOT__entries_15_amoMask = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_14_amoMask = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_13_amoMask = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_12_amoMask = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_11_amoMask = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_10_amoMask = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_9_amoMask = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_8_amoMask = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_7_amoMask = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_6_amoMask = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_5_amoMask = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_4_amoMask = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_3_amoMask = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_2_amoMask = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_1_amoMask = 0U;
        vlSelf->DCache__DOT__miss__DOT__entries_0_amoMask = 0U;
    } else {
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_15) {
            vlSelf->DCache__DOT__miss__DOT__entries_15_amoMask 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_mask;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_14) {
            vlSelf->DCache__DOT__miss__DOT__entries_14_amoMask 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_mask;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_13) {
            vlSelf->DCache__DOT__miss__DOT__entries_13_amoMask 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_mask;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_12) {
            vlSelf->DCache__DOT__miss__DOT__entries_12_amoMask 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_mask;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_11) {
            vlSelf->DCache__DOT__miss__DOT__entries_11_amoMask 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_mask;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_10) {
            vlSelf->DCache__DOT__miss__DOT__entries_10_amoMask 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_mask;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_9) {
            vlSelf->DCache__DOT__miss__DOT__entries_9_amoMask 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_mask;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_8) {
            vlSelf->DCache__DOT__miss__DOT__entries_8_amoMask 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_mask;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_7) {
            vlSelf->DCache__DOT__miss__DOT__entries_7_amoMask 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_mask;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_6) {
            vlSelf->DCache__DOT__miss__DOT__entries_6_amoMask 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_mask;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_5) {
            vlSelf->DCache__DOT__miss__DOT__entries_5_amoMask 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_mask;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_4) {
            vlSelf->DCache__DOT__miss__DOT__entries_4_amoMask 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_mask;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_3) {
            vlSelf->DCache__DOT__miss__DOT__entries_3_amoMask 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_mask;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_2) {
            vlSelf->DCache__DOT__miss__DOT__entries_2_amoMask 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_mask;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc_1) {
            vlSelf->DCache__DOT__miss__DOT__entries_1_amoMask 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_mask;
        }
        if (vlSelf->DCache__DOT__miss__DOT__doAlloc) {
            vlSelf->DCache__DOT__miss__DOT__entries_0_amoMask 
                = vlSelf->DCache__DOT__miss_io_missReq_bits_amo_mask;
        }
    }
    if (vlSelf->DCache__DOT__pipe__DOT___s0_fire_T) {
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_vaddr 
            = vlSelf->DCache__DOT__probe__DOT__outBits_vaddr;
    } else if (vlSelf->DCache__DOT__pipe__DOT___s0_fire_T_1) {
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_vaddr 
            = vlSelf->DCache__DOT__pipe_io_refill_bits_vaddr;
    } else if (vlSelf->DCache__DOT__pipe__DOT___s0_fire_T_3) {
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_vaddr 
            = vlSelf->io_store_req_bits_vaddr;
    } else if (vlSelf->DCache__DOT__pipe__DOT___s0_fire_T_5) {
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_vaddr 
            = vlSelf->io_atomics_req_bits_vaddr;
    }
    if (vlSelf->reset) {
        vlSelf->DCache__DOT__probe__DOT__outBits_vaddr = 0ULL;
    } else if (vlSelf->DCache__DOT__probe__DOT__canPick) {
        vlSelf->DCache__DOT__probe__DOT__outBits_vaddr 
            = (QData)((IData)(((((0xfU == (IData)(vlSelf->DCache__DOT__probe__DOT__pick))
                                  ? (IData)(vlSelf->DCache__DOT__probe__DOT__entries_15_tagAlias)
                                  : ((0xeU == (IData)(vlSelf->DCache__DOT__probe__DOT__pick))
                                      ? (IData)(vlSelf->DCache__DOT__probe__DOT__entries_14_tagAlias)
                                      : (IData)(vlSelf->DCache__DOT__probe__DOT___GEN_157))) 
                                << 0xcU) | (0xfffU 
                                            & (IData)(
                                                      ((0xfU 
                                                        == (IData)(vlSelf->DCache__DOT__probe__DOT__pick))
                                                        ? vlSelf->DCache__DOT__probe__DOT__entries_15_addr
                                                        : 
                                                       ((0xeU 
                                                         == (IData)(vlSelf->DCache__DOT__probe__DOT__pick))
                                                         ? vlSelf->DCache__DOT__probe__DOT__entries_14_addr
                                                         : vlSelf->DCache__DOT__probe__DOT___GEN_141)))))));
    }
    if (vlSelf->io_l2_rxDat_bits_dataID) {
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
        vlSelf->DCache__DOT__miss__DOT__maskHalf_15 
            = (IData)((vlSelf->DCache__DOT__miss__DOT__entries_15_storeMask 
                       >> 0x20U));
        vlSelf->DCache__DOT__miss__DOT__maskHalf_14 
            = (IData)((vlSelf->DCache__DOT__miss__DOT__entries_14_storeMask 
                       >> 0x20U));
        vlSelf->DCache__DOT__miss__DOT__maskHalf_13 
            = (IData)((vlSelf->DCache__DOT__miss__DOT__entries_13_storeMask 
                       >> 0x20U));
        vlSelf->DCache__DOT__miss__DOT__maskHalf_12 
            = (IData)((vlSelf->DCache__DOT__miss__DOT__entries_12_storeMask 
                       >> 0x20U));
        vlSelf->DCache__DOT__miss__DOT__maskHalf_11 
            = (IData)((vlSelf->DCache__DOT__miss__DOT__entries_11_storeMask 
                       >> 0x20U));
        vlSelf->DCache__DOT__miss__DOT__maskHalf_10 
            = (IData)((vlSelf->DCache__DOT__miss__DOT__entries_10_storeMask 
                       >> 0x20U));
        vlSelf->DCache__DOT__miss__DOT__maskHalf_9 
            = (IData)((vlSelf->DCache__DOT__miss__DOT__entries_9_storeMask 
                       >> 0x20U));
        vlSelf->DCache__DOT__miss__DOT__maskHalf_8 
            = (IData)((vlSelf->DCache__DOT__miss__DOT__entries_8_storeMask 
                       >> 0x20U));
        vlSelf->DCache__DOT__miss__DOT__maskHalf_7 
            = (IData)((vlSelf->DCache__DOT__miss__DOT__entries_7_storeMask 
                       >> 0x20U));
        vlSelf->DCache__DOT__miss__DOT__maskHalf_6 
            = (IData)((vlSelf->DCache__DOT__miss__DOT__entries_6_storeMask 
                       >> 0x20U));
        vlSelf->DCache__DOT__miss__DOT__maskHalf_5 
            = (IData)((vlSelf->DCache__DOT__miss__DOT__entries_5_storeMask 
                       >> 0x20U));
        vlSelf->DCache__DOT__miss__DOT__maskHalf_4 
            = (IData)((vlSelf->DCache__DOT__miss__DOT__entries_4_storeMask 
                       >> 0x20U));
        vlSelf->DCache__DOT__miss__DOT__maskHalf_3 
            = (IData)((vlSelf->DCache__DOT__miss__DOT__entries_3_storeMask 
                       >> 0x20U));
        vlSelf->DCache__DOT__miss__DOT__maskHalf_2 
            = (IData)((vlSelf->DCache__DOT__miss__DOT__entries_2_storeMask 
                       >> 0x20U));
        vlSelf->DCache__DOT__miss__DOT__maskHalf_1 
            = (IData)((vlSelf->DCache__DOT__miss__DOT__entries_1_storeMask 
                       >> 0x20U));
        vlSelf->DCache__DOT__miss__DOT__maskHalf = (IData)(
                                                           (vlSelf->DCache__DOT__miss__DOT__entries_0_storeMask 
                                                            >> 0x20U));
    } else {
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
        vlSelf->DCache__DOT__miss__DOT__maskHalf_15 
            = (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_storeMask);
        vlSelf->DCache__DOT__miss__DOT__maskHalf_14 
            = (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_storeMask);
        vlSelf->DCache__DOT__miss__DOT__maskHalf_13 
            = (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_storeMask);
        vlSelf->DCache__DOT__miss__DOT__maskHalf_12 
            = (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_storeMask);
        vlSelf->DCache__DOT__miss__DOT__maskHalf_11 
            = (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_storeMask);
        vlSelf->DCache__DOT__miss__DOT__maskHalf_10 
            = (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_storeMask);
        vlSelf->DCache__DOT__miss__DOT__maskHalf_9 
            = (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_storeMask);
        vlSelf->DCache__DOT__miss__DOT__maskHalf_8 
            = (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_storeMask);
        vlSelf->DCache__DOT__miss__DOT__maskHalf_7 
            = (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_storeMask);
        vlSelf->DCache__DOT__miss__DOT__maskHalf_6 
            = (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_storeMask);
        vlSelf->DCache__DOT__miss__DOT__maskHalf_5 
            = (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_storeMask);
        vlSelf->DCache__DOT__miss__DOT__maskHalf_4 
            = (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_storeMask);
        vlSelf->DCache__DOT__miss__DOT__maskHalf_3 
            = (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_storeMask);
        vlSelf->DCache__DOT__miss__DOT__maskHalf_2 
            = (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_storeMask);
        vlSelf->DCache__DOT__miss__DOT__maskHalf_1 
            = (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_storeMask);
        vlSelf->DCache__DOT__miss__DOT__maskHalf = (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_storeMask);
    }
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
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h7d4aa529__0 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_busy) 
           & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_refillDone)) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_isUpgrade)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h6783de16__0 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_busy) 
           & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_refillDone)) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_isUpgrade)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h61b0276b__0 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_busy) 
           & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_refillDone)) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_isUpgrade)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h4d77fa70__0 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_busy) 
           & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_refillDone)) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_isUpgrade)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_haa49fc28__0 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_busy) 
           & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_refillDone)) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_isUpgrade)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h3b4f30a1__0 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_busy) 
           & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_refillDone)) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_isUpgrade)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h1e5176c2__0 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_busy) 
           & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_refillDone)) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_isUpgrade)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hacb11800__0 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_busy) 
           & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_refillDone)) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_isUpgrade)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h3d7e8f47__0 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_busy) 
           & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_refillDone)) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_isUpgrade)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hcbcd308f__0 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_busy) 
           & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_refillDone)) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_isUpgrade)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h43a696fc__0 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_busy) 
           & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_refillDone)) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_isUpgrade)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h4c369b54__0 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_busy) 
           & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_refillDone)) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_isUpgrade)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h6a2b22db__0 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_busy) 
           & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_refillDone)) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_isUpgrade)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h772cccf4__0 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_busy) 
           & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_refillDone)) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_isUpgrade)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hf014a9c1__0 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_busy) 
           & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_refillDone)) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_isUpgrade)));
    vlSelf->DCache__DOT__miss__DOT____VdfgTmp_hca8b2adc__0 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_busy) 
           & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_refillDone)) 
              & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_isUpgrade)));
    vlSelf->DCache__DOT__pipe__DOT__lineMatch = ((0xffffffffffc0ULL 
                                                  & vlSelf->DCache__DOT__pipe__DOT__s3_hold_addr) 
                                                 == vlSelf->DCache__DOT__pipe__DOT__lrsc_addr);
    if (vlSelf->DCache__DOT__pipe__DOT__s1_fire) {
        vlSelf->DCache__DOT__pipe__DOT__s2_hold_addr 
            = vlSelf->DCache__DOT__pipe__DOT__s1_hold_addr;
    }
    if (vlSelf->DCache__DOT__pipe__DOT___s0_fire_T) {
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_missId = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_src = 2U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_wordIdx = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_addr 
            = vlSelf->DCache__DOT__probe__DOT__outBits_addr;
    } else if (vlSelf->DCache__DOT__pipe__DOT___s0_fire_T_1) {
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_missId 
            = vlSelf->DCache__DOT__pipe_io_refill_bits_missId;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_src = 3U;
        if ((0xfU == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_wordIdx 
                = vlSelf->DCache__DOT__miss__DOT__entries_15_wordIdx;
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd 
                = vlSelf->DCache__DOT__miss__DOT__entries_15_cmd;
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_addr 
                = vlSelf->DCache__DOT__miss__DOT__entries_15_addr;
        } else if ((0xeU == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_wordIdx 
                = vlSelf->DCache__DOT__miss__DOT__entries_14_wordIdx;
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd 
                = vlSelf->DCache__DOT__miss__DOT__entries_14_cmd;
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_addr 
                = vlSelf->DCache__DOT__miss__DOT__entries_14_addr;
        } else if ((0xdU == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_wordIdx 
                = vlSelf->DCache__DOT__miss__DOT__entries_13_wordIdx;
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd 
                = vlSelf->DCache__DOT__miss__DOT__entries_13_cmd;
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_addr 
                = vlSelf->DCache__DOT__miss__DOT__entries_13_addr;
        } else if ((0xcU == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_wordIdx 
                = vlSelf->DCache__DOT__miss__DOT__entries_12_wordIdx;
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd 
                = vlSelf->DCache__DOT__miss__DOT__entries_12_cmd;
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_addr 
                = vlSelf->DCache__DOT__miss__DOT__entries_12_addr;
        } else if ((0xbU == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_wordIdx 
                = vlSelf->DCache__DOT__miss__DOT__entries_11_wordIdx;
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd 
                = vlSelf->DCache__DOT__miss__DOT__entries_11_cmd;
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_addr 
                = vlSelf->DCache__DOT__miss__DOT__entries_11_addr;
        } else if ((0xaU == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_wordIdx 
                = vlSelf->DCache__DOT__miss__DOT__entries_10_wordIdx;
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd 
                = vlSelf->DCache__DOT__miss__DOT__entries_10_cmd;
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_addr 
                = vlSelf->DCache__DOT__miss__DOT__entries_10_addr;
        } else if ((9U == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_wordIdx 
                = vlSelf->DCache__DOT__miss__DOT__entries_9_wordIdx;
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd 
                = vlSelf->DCache__DOT__miss__DOT__entries_9_cmd;
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_addr 
                = vlSelf->DCache__DOT__miss__DOT__entries_9_addr;
        } else if ((8U == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_wordIdx 
                = vlSelf->DCache__DOT__miss__DOT__entries_8_wordIdx;
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd 
                = vlSelf->DCache__DOT__miss__DOT__entries_8_cmd;
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_addr 
                = vlSelf->DCache__DOT__miss__DOT__entries_8_addr;
        } else if ((7U == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_wordIdx 
                = vlSelf->DCache__DOT__miss__DOT__entries_7_wordIdx;
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd 
                = vlSelf->DCache__DOT__miss__DOT__entries_7_cmd;
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_addr 
                = vlSelf->DCache__DOT__miss__DOT__entries_7_addr;
        } else if ((6U == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_wordIdx 
                = vlSelf->DCache__DOT__miss__DOT__entries_6_wordIdx;
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd 
                = vlSelf->DCache__DOT__miss__DOT__entries_6_cmd;
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_addr 
                = vlSelf->DCache__DOT__miss__DOT__entries_6_addr;
        } else if ((5U == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_wordIdx 
                = vlSelf->DCache__DOT__miss__DOT__entries_5_wordIdx;
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd 
                = vlSelf->DCache__DOT__miss__DOT__entries_5_cmd;
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_addr 
                = vlSelf->DCache__DOT__miss__DOT__entries_5_addr;
        } else if ((4U == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_wordIdx 
                = vlSelf->DCache__DOT__miss__DOT__entries_4_wordIdx;
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd 
                = vlSelf->DCache__DOT__miss__DOT__entries_4_cmd;
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_addr 
                = vlSelf->DCache__DOT__miss__DOT__entries_4_addr;
        } else if ((3U == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_wordIdx 
                = vlSelf->DCache__DOT__miss__DOT__entries_3_wordIdx;
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd 
                = vlSelf->DCache__DOT__miss__DOT__entries_3_cmd;
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_addr 
                = vlSelf->DCache__DOT__miss__DOT__entries_3_addr;
        } else if ((2U == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_wordIdx 
                = vlSelf->DCache__DOT__miss__DOT__entries_2_wordIdx;
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd 
                = vlSelf->DCache__DOT__miss__DOT__entries_2_cmd;
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_addr 
                = vlSelf->DCache__DOT__miss__DOT__entries_2_addr;
        } else if ((1U == (IData)(vlSelf->DCache__DOT__pipe_io_refill_bits_missId))) {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_wordIdx 
                = vlSelf->DCache__DOT__miss__DOT__entries_1_wordIdx;
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd 
                = vlSelf->DCache__DOT__miss__DOT__entries_1_cmd;
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_addr 
                = vlSelf->DCache__DOT__miss__DOT__entries_1_addr;
        } else {
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_wordIdx 
                = vlSelf->DCache__DOT__miss__DOT__entries_0_wordIdx;
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd 
                = vlSelf->DCache__DOT__miss__DOT__entries_0_cmd;
            vlSelf->DCache__DOT__pipe__DOT__s1_hold_addr 
                = vlSelf->DCache__DOT__miss__DOT__entries_0_addr;
        }
    } else if (vlSelf->DCache__DOT__pipe__DOT___s0_fire_T_3) {
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_missId = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_src = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_wordIdx = 0U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd 
            = vlSelf->io_store_req_bits_cmd;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_addr 
            = vlSelf->io_store_req_bits_addr;
    } else if (vlSelf->DCache__DOT__pipe__DOT___s0_fire_T_5) {
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_missId 
            = vlSelf->io_atomics_req_bits_missId;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_src = 1U;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_wordIdx 
            = vlSelf->io_atomics_req_bits_wordIdx;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd 
            = vlSelf->io_atomics_req_bits_cmd;
        vlSelf->DCache__DOT__pipe__DOT__s1_hold_addr 
            = vlSelf->io_atomics_req_bits_addr;
    }
    vlSelf->DCache__DOT__loads_1__DOT__s1_tag_way = 
        (((IData)(vlSelf->DCache__DOT__loads_1__DOT___s1_tag_way_T_15) 
          << 3U) | (((IData)(vlSelf->DCache__DOT__loads_1__DOT___s1_tag_way_T_11) 
                     << 2U) | (IData)(vlSelf->DCache__DOT__loads_1__DOT__s2_way_lo)));
    if ((0x27U == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                    >> 6U))))) {
        DCache__DOT__meta__DOT___GEN_3111 = vlSelf->DCache__DOT__meta__DOT__meta_39_0_coh;
        DCache__DOT__meta__DOT___GEN_3367 = vlSelf->DCache__DOT__meta__DOT__meta_39_1_coh;
        DCache__DOT__meta__DOT___GEN_3623 = vlSelf->DCache__DOT__meta__DOT__meta_39_2_coh;
        DCache__DOT__meta__DOT___GEN_3879 = vlSelf->DCache__DOT__meta__DOT__meta_39_3_coh;
    } else if ((0x26U == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                           >> 6U))))) {
        DCache__DOT__meta__DOT___GEN_3111 = vlSelf->DCache__DOT__meta__DOT__meta_38_0_coh;
        DCache__DOT__meta__DOT___GEN_3367 = vlSelf->DCache__DOT__meta__DOT__meta_38_1_coh;
        DCache__DOT__meta__DOT___GEN_3623 = vlSelf->DCache__DOT__meta__DOT__meta_38_2_coh;
        DCache__DOT__meta__DOT___GEN_3879 = vlSelf->DCache__DOT__meta__DOT__meta_38_3_coh;
    } else if ((0x25U == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                           >> 6U))))) {
        DCache__DOT__meta__DOT___GEN_3111 = vlSelf->DCache__DOT__meta__DOT__meta_37_0_coh;
        DCache__DOT__meta__DOT___GEN_3367 = vlSelf->DCache__DOT__meta__DOT__meta_37_1_coh;
        DCache__DOT__meta__DOT___GEN_3623 = vlSelf->DCache__DOT__meta__DOT__meta_37_2_coh;
        DCache__DOT__meta__DOT___GEN_3879 = vlSelf->DCache__DOT__meta__DOT__meta_37_3_coh;
    } else if ((0x24U == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                           >> 6U))))) {
        DCache__DOT__meta__DOT___GEN_3111 = vlSelf->DCache__DOT__meta__DOT__meta_36_0_coh;
        DCache__DOT__meta__DOT___GEN_3367 = vlSelf->DCache__DOT__meta__DOT__meta_36_1_coh;
        DCache__DOT__meta__DOT___GEN_3623 = vlSelf->DCache__DOT__meta__DOT__meta_36_2_coh;
        DCache__DOT__meta__DOT___GEN_3879 = vlSelf->DCache__DOT__meta__DOT__meta_36_3_coh;
    } else if ((0x23U == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                           >> 6U))))) {
        DCache__DOT__meta__DOT___GEN_3111 = vlSelf->DCache__DOT__meta__DOT__meta_35_0_coh;
        DCache__DOT__meta__DOT___GEN_3367 = vlSelf->DCache__DOT__meta__DOT__meta_35_1_coh;
        DCache__DOT__meta__DOT___GEN_3623 = vlSelf->DCache__DOT__meta__DOT__meta_35_2_coh;
        DCache__DOT__meta__DOT___GEN_3879 = vlSelf->DCache__DOT__meta__DOT__meta_35_3_coh;
    } else if ((0x22U == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                           >> 6U))))) {
        DCache__DOT__meta__DOT___GEN_3111 = vlSelf->DCache__DOT__meta__DOT__meta_34_0_coh;
        DCache__DOT__meta__DOT___GEN_3367 = vlSelf->DCache__DOT__meta__DOT__meta_34_1_coh;
        DCache__DOT__meta__DOT___GEN_3623 = vlSelf->DCache__DOT__meta__DOT__meta_34_2_coh;
        DCache__DOT__meta__DOT___GEN_3879 = vlSelf->DCache__DOT__meta__DOT__meta_34_3_coh;
    } else if ((0x21U == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                           >> 6U))))) {
        DCache__DOT__meta__DOT___GEN_3111 = vlSelf->DCache__DOT__meta__DOT__meta_33_0_coh;
        DCache__DOT__meta__DOT___GEN_3367 = vlSelf->DCache__DOT__meta__DOT__meta_33_1_coh;
        DCache__DOT__meta__DOT___GEN_3623 = vlSelf->DCache__DOT__meta__DOT__meta_33_2_coh;
        DCache__DOT__meta__DOT___GEN_3879 = vlSelf->DCache__DOT__meta__DOT__meta_33_3_coh;
    } else if ((0x20U == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                           >> 6U))))) {
        DCache__DOT__meta__DOT___GEN_3111 = vlSelf->DCache__DOT__meta__DOT__meta_32_0_coh;
        DCache__DOT__meta__DOT___GEN_3367 = vlSelf->DCache__DOT__meta__DOT__meta_32_1_coh;
        DCache__DOT__meta__DOT___GEN_3623 = vlSelf->DCache__DOT__meta__DOT__meta_32_2_coh;
        DCache__DOT__meta__DOT___GEN_3879 = vlSelf->DCache__DOT__meta__DOT__meta_32_3_coh;
    } else if ((0x1fU == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                           >> 6U))))) {
        DCache__DOT__meta__DOT___GEN_3111 = vlSelf->DCache__DOT__meta__DOT__meta_31_0_coh;
        DCache__DOT__meta__DOT___GEN_3367 = vlSelf->DCache__DOT__meta__DOT__meta_31_1_coh;
        DCache__DOT__meta__DOT___GEN_3623 = vlSelf->DCache__DOT__meta__DOT__meta_31_2_coh;
        DCache__DOT__meta__DOT___GEN_3879 = vlSelf->DCache__DOT__meta__DOT__meta_31_3_coh;
    } else if ((0x1eU == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                           >> 6U))))) {
        DCache__DOT__meta__DOT___GEN_3111 = vlSelf->DCache__DOT__meta__DOT__meta_30_0_coh;
        DCache__DOT__meta__DOT___GEN_3367 = vlSelf->DCache__DOT__meta__DOT__meta_30_1_coh;
        DCache__DOT__meta__DOT___GEN_3623 = vlSelf->DCache__DOT__meta__DOT__meta_30_2_coh;
        DCache__DOT__meta__DOT___GEN_3879 = vlSelf->DCache__DOT__meta__DOT__meta_30_3_coh;
    } else if ((0x1dU == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                           >> 6U))))) {
        DCache__DOT__meta__DOT___GEN_3111 = vlSelf->DCache__DOT__meta__DOT__meta_29_0_coh;
        DCache__DOT__meta__DOT___GEN_3367 = vlSelf->DCache__DOT__meta__DOT__meta_29_1_coh;
        DCache__DOT__meta__DOT___GEN_3623 = vlSelf->DCache__DOT__meta__DOT__meta_29_2_coh;
        DCache__DOT__meta__DOT___GEN_3879 = vlSelf->DCache__DOT__meta__DOT__meta_29_3_coh;
    } else if ((0x1cU == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                           >> 6U))))) {
        DCache__DOT__meta__DOT___GEN_3111 = vlSelf->DCache__DOT__meta__DOT__meta_28_0_coh;
        DCache__DOT__meta__DOT___GEN_3367 = vlSelf->DCache__DOT__meta__DOT__meta_28_1_coh;
        DCache__DOT__meta__DOT___GEN_3623 = vlSelf->DCache__DOT__meta__DOT__meta_28_2_coh;
        DCache__DOT__meta__DOT___GEN_3879 = vlSelf->DCache__DOT__meta__DOT__meta_28_3_coh;
    } else if ((0x1bU == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                           >> 6U))))) {
        DCache__DOT__meta__DOT___GEN_3111 = vlSelf->DCache__DOT__meta__DOT__meta_27_0_coh;
        DCache__DOT__meta__DOT___GEN_3367 = vlSelf->DCache__DOT__meta__DOT__meta_27_1_coh;
        DCache__DOT__meta__DOT___GEN_3623 = vlSelf->DCache__DOT__meta__DOT__meta_27_2_coh;
        DCache__DOT__meta__DOT___GEN_3879 = vlSelf->DCache__DOT__meta__DOT__meta_27_3_coh;
    } else {
        DCache__DOT__meta__DOT___GEN_3111 = vlSelf->DCache__DOT__meta__DOT___GEN_3098;
        DCache__DOT__meta__DOT___GEN_3367 = vlSelf->DCache__DOT__meta__DOT___GEN_3354;
        DCache__DOT__meta__DOT___GEN_3623 = vlSelf->DCache__DOT__meta__DOT___GEN_3610;
        DCache__DOT__meta__DOT___GEN_3879 = vlSelf->DCache__DOT__meta__DOT___GEN_3866;
    }
    if ((0x27U == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                    >> 6U))))) {
        DCache__DOT__meta__DOT___GEN_4147 = vlSelf->DCache__DOT__meta__DOT__meta_39_0_coh;
        DCache__DOT__meta__DOT___GEN_4403 = vlSelf->DCache__DOT__meta__DOT__meta_39_1_coh;
        DCache__DOT__meta__DOT___GEN_4659 = vlSelf->DCache__DOT__meta__DOT__meta_39_2_coh;
        DCache__DOT__meta__DOT___GEN_4915 = vlSelf->DCache__DOT__meta__DOT__meta_39_3_coh;
    } else if ((0x26U == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                           >> 6U))))) {
        DCache__DOT__meta__DOT___GEN_4147 = vlSelf->DCache__DOT__meta__DOT__meta_38_0_coh;
        DCache__DOT__meta__DOT___GEN_4403 = vlSelf->DCache__DOT__meta__DOT__meta_38_1_coh;
        DCache__DOT__meta__DOT___GEN_4659 = vlSelf->DCache__DOT__meta__DOT__meta_38_2_coh;
        DCache__DOT__meta__DOT___GEN_4915 = vlSelf->DCache__DOT__meta__DOT__meta_38_3_coh;
    } else if ((0x25U == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                           >> 6U))))) {
        DCache__DOT__meta__DOT___GEN_4147 = vlSelf->DCache__DOT__meta__DOT__meta_37_0_coh;
        DCache__DOT__meta__DOT___GEN_4403 = vlSelf->DCache__DOT__meta__DOT__meta_37_1_coh;
        DCache__DOT__meta__DOT___GEN_4659 = vlSelf->DCache__DOT__meta__DOT__meta_37_2_coh;
        DCache__DOT__meta__DOT___GEN_4915 = vlSelf->DCache__DOT__meta__DOT__meta_37_3_coh;
    } else if ((0x24U == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                           >> 6U))))) {
        DCache__DOT__meta__DOT___GEN_4147 = vlSelf->DCache__DOT__meta__DOT__meta_36_0_coh;
        DCache__DOT__meta__DOT___GEN_4403 = vlSelf->DCache__DOT__meta__DOT__meta_36_1_coh;
        DCache__DOT__meta__DOT___GEN_4659 = vlSelf->DCache__DOT__meta__DOT__meta_36_2_coh;
        DCache__DOT__meta__DOT___GEN_4915 = vlSelf->DCache__DOT__meta__DOT__meta_36_3_coh;
    } else if ((0x23U == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                           >> 6U))))) {
        DCache__DOT__meta__DOT___GEN_4147 = vlSelf->DCache__DOT__meta__DOT__meta_35_0_coh;
        DCache__DOT__meta__DOT___GEN_4403 = vlSelf->DCache__DOT__meta__DOT__meta_35_1_coh;
        DCache__DOT__meta__DOT___GEN_4659 = vlSelf->DCache__DOT__meta__DOT__meta_35_2_coh;
        DCache__DOT__meta__DOT___GEN_4915 = vlSelf->DCache__DOT__meta__DOT__meta_35_3_coh;
    } else if ((0x22U == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                           >> 6U))))) {
        DCache__DOT__meta__DOT___GEN_4147 = vlSelf->DCache__DOT__meta__DOT__meta_34_0_coh;
        DCache__DOT__meta__DOT___GEN_4403 = vlSelf->DCache__DOT__meta__DOT__meta_34_1_coh;
        DCache__DOT__meta__DOT___GEN_4659 = vlSelf->DCache__DOT__meta__DOT__meta_34_2_coh;
        DCache__DOT__meta__DOT___GEN_4915 = vlSelf->DCache__DOT__meta__DOT__meta_34_3_coh;
    } else if ((0x21U == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                           >> 6U))))) {
        DCache__DOT__meta__DOT___GEN_4147 = vlSelf->DCache__DOT__meta__DOT__meta_33_0_coh;
        DCache__DOT__meta__DOT___GEN_4403 = vlSelf->DCache__DOT__meta__DOT__meta_33_1_coh;
        DCache__DOT__meta__DOT___GEN_4659 = vlSelf->DCache__DOT__meta__DOT__meta_33_2_coh;
        DCache__DOT__meta__DOT___GEN_4915 = vlSelf->DCache__DOT__meta__DOT__meta_33_3_coh;
    } else if ((0x20U == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                           >> 6U))))) {
        DCache__DOT__meta__DOT___GEN_4147 = vlSelf->DCache__DOT__meta__DOT__meta_32_0_coh;
        DCache__DOT__meta__DOT___GEN_4403 = vlSelf->DCache__DOT__meta__DOT__meta_32_1_coh;
        DCache__DOT__meta__DOT___GEN_4659 = vlSelf->DCache__DOT__meta__DOT__meta_32_2_coh;
        DCache__DOT__meta__DOT___GEN_4915 = vlSelf->DCache__DOT__meta__DOT__meta_32_3_coh;
    } else if ((0x1fU == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                           >> 6U))))) {
        DCache__DOT__meta__DOT___GEN_4147 = vlSelf->DCache__DOT__meta__DOT__meta_31_0_coh;
        DCache__DOT__meta__DOT___GEN_4403 = vlSelf->DCache__DOT__meta__DOT__meta_31_1_coh;
        DCache__DOT__meta__DOT___GEN_4659 = vlSelf->DCache__DOT__meta__DOT__meta_31_2_coh;
        DCache__DOT__meta__DOT___GEN_4915 = vlSelf->DCache__DOT__meta__DOT__meta_31_3_coh;
    } else if ((0x1eU == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                           >> 6U))))) {
        DCache__DOT__meta__DOT___GEN_4147 = vlSelf->DCache__DOT__meta__DOT__meta_30_0_coh;
        DCache__DOT__meta__DOT___GEN_4403 = vlSelf->DCache__DOT__meta__DOT__meta_30_1_coh;
        DCache__DOT__meta__DOT___GEN_4659 = vlSelf->DCache__DOT__meta__DOT__meta_30_2_coh;
        DCache__DOT__meta__DOT___GEN_4915 = vlSelf->DCache__DOT__meta__DOT__meta_30_3_coh;
    } else if ((0x1dU == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                           >> 6U))))) {
        DCache__DOT__meta__DOT___GEN_4147 = vlSelf->DCache__DOT__meta__DOT__meta_29_0_coh;
        DCache__DOT__meta__DOT___GEN_4403 = vlSelf->DCache__DOT__meta__DOT__meta_29_1_coh;
        DCache__DOT__meta__DOT___GEN_4659 = vlSelf->DCache__DOT__meta__DOT__meta_29_2_coh;
        DCache__DOT__meta__DOT___GEN_4915 = vlSelf->DCache__DOT__meta__DOT__meta_29_3_coh;
    } else if ((0x1cU == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                           >> 6U))))) {
        DCache__DOT__meta__DOT___GEN_4147 = vlSelf->DCache__DOT__meta__DOT__meta_28_0_coh;
        DCache__DOT__meta__DOT___GEN_4403 = vlSelf->DCache__DOT__meta__DOT__meta_28_1_coh;
        DCache__DOT__meta__DOT___GEN_4659 = vlSelf->DCache__DOT__meta__DOT__meta_28_2_coh;
        DCache__DOT__meta__DOT___GEN_4915 = vlSelf->DCache__DOT__meta__DOT__meta_28_3_coh;
    } else if ((0x1bU == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                           >> 6U))))) {
        DCache__DOT__meta__DOT___GEN_4147 = vlSelf->DCache__DOT__meta__DOT__meta_27_0_coh;
        DCache__DOT__meta__DOT___GEN_4403 = vlSelf->DCache__DOT__meta__DOT__meta_27_1_coh;
        DCache__DOT__meta__DOT___GEN_4659 = vlSelf->DCache__DOT__meta__DOT__meta_27_2_coh;
        DCache__DOT__meta__DOT___GEN_4915 = vlSelf->DCache__DOT__meta__DOT__meta_27_3_coh;
    } else {
        DCache__DOT__meta__DOT___GEN_4147 = vlSelf->DCache__DOT__meta__DOT___GEN_4134;
        DCache__DOT__meta__DOT___GEN_4403 = vlSelf->DCache__DOT__meta__DOT___GEN_4390;
        DCache__DOT__meta__DOT___GEN_4659 = vlSelf->DCache__DOT__meta__DOT___GEN_4646;
        DCache__DOT__meta__DOT___GEN_4915 = vlSelf->DCache__DOT__meta__DOT___GEN_4902;
    }
    vlSelf->DCache__DOT__loads_0__DOT__s1_tag_way = 
        (((IData)(vlSelf->DCache__DOT__loads_0__DOT___s1_tag_way_T_15) 
          << 3U) | (((IData)(vlSelf->DCache__DOT__loads_0__DOT___s1_tag_way_T_11) 
                     << 2U) | (IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_way_lo)));
    vlSelf->DCache__DOT__pipe__DOT__s2_got = ((~ (IData)(vlSelf->reset)) 
                                              & ((~ (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_fire)) 
                                                 & (IData)(vlSelf->DCache__DOT__pipe__DOT___GEN_122)));
    if (vlSelf->DCache__DOT__pipe__DOT__s2_fire) {
        vlSelf->DCache__DOT__pipe__DOT__s3_hold_snpTxnId 
            = vlSelf->DCache__DOT__pipe__DOT__s2_hold_snpTxnId;
        vlSelf->DCache__DOT__pipe__DOT__s3_hold_probeOp 
            = vlSelf->DCache__DOT__pipe__DOT__s2_hold_probeOp;
        vlSelf->DCache__DOT__pipe__DOT__s3_can_install 
            = vlSelf->DCache__DOT__pipe__DOT__s2_can_install;
    }
    vlSelf->DCache__DOT__pipe__DOT__s3_valid = ((~ (IData)(vlSelf->reset)) 
                                                & (IData)(vlSelf->DCache__DOT__pipe__DOT___GEN_323));
    vlSelf->DCache__DOT__pipe__DOT__s1_valid = ((~ (IData)(vlSelf->reset)) 
                                                & (IData)(vlSelf->DCache__DOT__pipe__DOT___GEN_319));
    if (vlSelf->DCache__DOT__tags_io_read_2_valid) {
        vlSelf->DCache__DOT__pipe__DOT__s1_first = 
            (1U & (~ (IData)(vlSelf->reset)));
        if (((IData)(vlSelf->DCache__DOT__meta_io_write_valid) 
             & ((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_set) 
                == (IData)(vlSelf->DCache__DOT__tags_io_read_2_bits_idx)))) {
            vlSelf->DCache__DOT__meta__DOT__r_2_3_coh 
                = ((8U & ((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)))
                    ? (IData)(vlSelf->DCache__DOT__meta_io_write_bits_meta_coh)
                    : (IData)(vlSelf->DCache__DOT__meta__DOT___GEN_6167));
            vlSelf->DCache__DOT__meta__DOT__r_2_2_coh 
                = ((4U & ((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)))
                    ? (IData)(vlSelf->DCache__DOT__meta_io_write_bits_meta_coh)
                    : (IData)(vlSelf->DCache__DOT__meta__DOT___GEN_5911));
            vlSelf->DCache__DOT__meta__DOT__r_2_1_coh 
                = ((2U & ((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)))
                    ? (IData)(vlSelf->DCache__DOT__meta_io_write_bits_meta_coh)
                    : (IData)(vlSelf->DCache__DOT__meta__DOT___GEN_5655));
            vlSelf->DCache__DOT__meta__DOT__r_2_0_coh 
                = ((1U & ((IData)(1U) << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)))
                    ? (IData)(vlSelf->DCache__DOT__meta_io_write_bits_meta_coh)
                    : (IData)(vlSelf->DCache__DOT__meta__DOT___GEN_5399));
        } else {
            vlSelf->DCache__DOT__meta__DOT__r_2_3_coh 
                = vlSelf->DCache__DOT__meta__DOT___GEN_6167;
            vlSelf->DCache__DOT__meta__DOT__r_2_2_coh 
                = vlSelf->DCache__DOT__meta__DOT___GEN_5911;
            vlSelf->DCache__DOT__meta__DOT__r_2_1_coh 
                = vlSelf->DCache__DOT__meta__DOT___GEN_5655;
            vlSelf->DCache__DOT__meta__DOT__r_2_0_coh 
                = vlSelf->DCache__DOT__meta__DOT___GEN_5399;
        }
    } else {
        vlSelf->DCache__DOT__pipe__DOT__s1_first = 0U;
    }
    vlSelf->DCache__DOT__miss__DOT__cmoRsp = ((IData)(vlSelf->DCache__DOT__miss__DOT___rspIn_T) 
                                              & ((0x10U 
                                                  == (IData)(vlSelf->io_l2_rxRsp_bits_txnID)) 
                                                 & (4U 
                                                    == (IData)(vlSelf->io_l2_rxRsp_bits_opcode))));
    vlSelf->DCache__DOT__miss__DOT__rspIn = ((IData)(vlSelf->DCache__DOT__miss__DOT___rspIn_T) 
                                             & (0x10U 
                                                > (IData)(vlSelf->io_l2_rxRsp_bits_txnID)));
    vlSelf->io_refillWakeup_valid = (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_120_T) 
                                      & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_installed) 
                                         & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_wakeSent)) 
                                            & (IData)(vlSelf->DCache__DOT__miss__DOT___wakeVec_T_446)))) 
                                     | ((IData)(vlSelf->DCache__DOT__miss__DOT__wakeVec_14) 
                                        | ((IData)(vlSelf->DCache__DOT__miss__DOT__wakeVec_13) 
                                           | ((IData)(vlSelf->DCache__DOT__miss__DOT__wakeVec_12) 
                                              | ((IData)(vlSelf->DCache__DOT__miss__DOT__wakeVec_11) 
                                                 | ((IData)(vlSelf->DCache__DOT__miss__DOT__wakeVec_10) 
                                                    | ((IData)(vlSelf->DCache__DOT__miss__DOT__wakeVec_9) 
                                                       | ((IData)(vlSelf->DCache__DOT__miss__DOT__wakeVec_8) 
                                                          | ((IData)(vlSelf->DCache__DOT__miss__DOT__wakeVec_7) 
                                                             | ((IData)(vlSelf->DCache__DOT__miss__DOT__wakeVec_6) 
                                                                | ((IData)(vlSelf->DCache__DOT__miss__DOT__wakeVec_5) 
                                                                   | ((IData)(vlSelf->DCache__DOT__miss__DOT__wakeVec_4) 
                                                                      | ((IData)(vlSelf->DCache__DOT__miss__DOT__wakeVec_3) 
                                                                         | ((IData)(vlSelf->DCache__DOT__miss__DOT__wakeVec_2) 
                                                                            | ((IData)(vlSelf->DCache__DOT__miss__DOT__wakeVec_1) 
                                                                               | (IData)(vlSelf->DCache__DOT__miss__DOT__wakeVec_0))))))))))))))));
    vlSelf->io_refillWakeup_bits_id = ((IData)(vlSelf->DCache__DOT__miss__DOT__wakeVec_0)
                                        ? 0U : ((IData)(vlSelf->DCache__DOT__miss__DOT__wakeVec_1)
                                                 ? 1U
                                                 : 
                                                ((IData)(vlSelf->DCache__DOT__miss__DOT__wakeVec_2)
                                                  ? 2U
                                                  : 
                                                 ((IData)(vlSelf->DCache__DOT__miss__DOT__wakeVec_3)
                                                   ? 3U
                                                   : 
                                                  ((IData)(vlSelf->DCache__DOT__miss__DOT__wakeVec_4)
                                                    ? 4U
                                                    : 
                                                   ((IData)(vlSelf->DCache__DOT__miss__DOT__wakeVec_5)
                                                     ? 5U
                                                     : 
                                                    ((IData)(vlSelf->DCache__DOT__miss__DOT__wakeVec_6)
                                                      ? 6U
                                                      : 
                                                     ((IData)(vlSelf->DCache__DOT__miss__DOT__wakeVec_7)
                                                       ? 7U
                                                       : 
                                                      ((IData)(vlSelf->DCache__DOT__miss__DOT__wakeVec_8)
                                                        ? 8U
                                                        : 
                                                       ((IData)(vlSelf->DCache__DOT__miss__DOT__wakeVec_9)
                                                         ? 9U
                                                         : 
                                                        ((IData)(vlSelf->DCache__DOT__miss__DOT__wakeVec_10)
                                                          ? 0xaU
                                                          : 
                                                         ((IData)(vlSelf->DCache__DOT__miss__DOT__wakeVec_11)
                                                           ? 0xbU
                                                           : 
                                                          ((IData)(vlSelf->DCache__DOT__miss__DOT__wakeVec_12)
                                                            ? 0xcU
                                                            : 
                                                           ((IData)(vlSelf->DCache__DOT__miss__DOT__wakeVec_13)
                                                             ? 0xdU
                                                             : 
                                                            ((IData)(vlSelf->DCache__DOT__miss__DOT__wakeVec_14)
                                                              ? 0xeU
                                                              : 0xfU)))))))))))))));
    vlSelf->io_loadReplay_valid = (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_120_T) 
                                    & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_installed)) 
                                       & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_replaySent)) 
                                          & (IData)(vlSelf->DCache__DOT__miss__DOT___wakeVec_T_446)))) 
                                   | ((IData)(vlSelf->DCache__DOT__miss__DOT__replayVec_14) 
                                      | ((IData)(vlSelf->DCache__DOT__miss__DOT__replayVec_13) 
                                         | ((IData)(vlSelf->DCache__DOT__miss__DOT__replayVec_12) 
                                            | ((IData)(vlSelf->DCache__DOT__miss__DOT__replayVec_11) 
                                               | ((IData)(vlSelf->DCache__DOT__miss__DOT__replayVec_10) 
                                                  | ((IData)(vlSelf->DCache__DOT__miss__DOT__replayVec_9) 
                                                     | ((IData)(vlSelf->DCache__DOT__miss__DOT__replayVec_8) 
                                                        | ((IData)(vlSelf->DCache__DOT__miss__DOT__replayVec_7) 
                                                           | ((IData)(vlSelf->DCache__DOT__miss__DOT__replayVec_6) 
                                                              | ((IData)(vlSelf->DCache__DOT__miss__DOT__replayVec_5) 
                                                                 | ((IData)(vlSelf->DCache__DOT__miss__DOT__replayVec_4) 
                                                                    | ((IData)(vlSelf->DCache__DOT__miss__DOT__replayVec_3) 
                                                                       | ((IData)(vlSelf->DCache__DOT__miss__DOT__replayVec_2) 
                                                                          | ((IData)(vlSelf->DCache__DOT__miss__DOT__replayVec_1) 
                                                                             | (IData)(vlSelf->DCache__DOT__miss__DOT__replayVec_0))))))))))))))));
    vlSelf->io_loadReplay_bits_id = ((IData)(vlSelf->DCache__DOT__miss__DOT__replayVec_0)
                                      ? 0U : ((IData)(vlSelf->DCache__DOT__miss__DOT__replayVec_1)
                                               ? 1U
                                               : ((IData)(vlSelf->DCache__DOT__miss__DOT__replayVec_2)
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlSelf->DCache__DOT__miss__DOT__replayVec_3)
                                                    ? 3U
                                                    : 
                                                   ((IData)(vlSelf->DCache__DOT__miss__DOT__replayVec_4)
                                                     ? 4U
                                                     : 
                                                    ((IData)(vlSelf->DCache__DOT__miss__DOT__replayVec_5)
                                                      ? 5U
                                                      : 
                                                     ((IData)(vlSelf->DCache__DOT__miss__DOT__replayVec_6)
                                                       ? 6U
                                                       : 
                                                      ((IData)(vlSelf->DCache__DOT__miss__DOT__replayVec_7)
                                                        ? 7U
                                                        : 
                                                       ((IData)(vlSelf->DCache__DOT__miss__DOT__replayVec_8)
                                                         ? 8U
                                                         : 
                                                        ((IData)(vlSelf->DCache__DOT__miss__DOT__replayVec_9)
                                                          ? 9U
                                                          : 
                                                         ((IData)(vlSelf->DCache__DOT__miss__DOT__replayVec_10)
                                                           ? 0xaU
                                                           : 
                                                          ((IData)(vlSelf->DCache__DOT__miss__DOT__replayVec_11)
                                                            ? 0xbU
                                                            : 
                                                           ((IData)(vlSelf->DCache__DOT__miss__DOT__replayVec_12)
                                                             ? 0xcU
                                                             : 
                                                            ((IData)(vlSelf->DCache__DOT__miss__DOT__replayVec_13)
                                                              ? 0xdU
                                                              : 
                                                             ((IData)(vlSelf->DCache__DOT__miss__DOT__replayVec_14)
                                                               ? 0xeU
                                                               : 0xfU)))))))))))))));
    DCache__DOT__miss__DOT___storeSel_T_162 = ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_93)
                                                ? 0x5dU
                                                : ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_94)
                                                    ? 0x5eU
                                                    : 
                                                   ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_95)
                                                     ? 0x5fU
                                                     : 
                                                    ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_96)
                                                      ? 0x60U
                                                      : 
                                                     ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_97)
                                                       ? 0x61U
                                                       : 
                                                      ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_98)
                                                        ? 0x62U
                                                        : 
                                                       ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_99)
                                                         ? 0x63U
                                                         : 
                                                        ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_100)
                                                          ? 0x64U
                                                          : 
                                                         ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_101)
                                                           ? 0x65U
                                                           : 
                                                          ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_102)
                                                            ? 0x66U
                                                            : 
                                                           ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_103)
                                                             ? 0x67U
                                                             : 
                                                            ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_104)
                                                              ? 0x68U
                                                              : 
                                                             ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_105)
                                                               ? 0x69U
                                                               : 
                                                              ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_106)
                                                                ? 0x6aU
                                                                : 
                                                               ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_107)
                                                                 ? 0x6bU
                                                                 : 
                                                                ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_108)
                                                                  ? 0x6cU
                                                                  : 
                                                                 ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_109)
                                                                   ? 0x6dU
                                                                   : 
                                                                  ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_110)
                                                                    ? 0x6eU
                                                                    : 
                                                                   ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_111)
                                                                     ? 0x6fU
                                                                     : 
                                                                    ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_112)
                                                                      ? 0x70U
                                                                      : 
                                                                     ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_113)
                                                                       ? 0x71U
                                                                       : 
                                                                      ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_114)
                                                                        ? 0x72U
                                                                        : 
                                                                       ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_115)
                                                                         ? 0x73U
                                                                         : 
                                                                        ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_116)
                                                                          ? 0x74U
                                                                          : 
                                                                         ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_117)
                                                                           ? 0x75U
                                                                           : 
                                                                          ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_118)
                                                                            ? 0x76U
                                                                            : 
                                                                           ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_119)
                                                                             ? 0x77U
                                                                             : 
                                                                            ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_120)
                                                                              ? 0x78U
                                                                              : 
                                                                             ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_121)
                                                                               ? 0x79U
                                                                               : 
                                                                              ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_122)
                                                                                ? 0x7aU
                                                                                : 
                                                                               ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_123)
                                                                                 ? 0x7bU
                                                                                 : 
                                                                                ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_124)
                                                                                 ? 0x7cU
                                                                                 : 
                                                                                ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_125)
                                                                                 ? 0x7dU
                                                                                 : 
                                                                                ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_126)
                                                                                 ? 0x7eU
                                                                                 : 0x7fU))))))))))))))))))))))))))))))))));
    __Vtemp_139[0U] = (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_63) 
                        << 0x1fU) | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_62) 
                                      << 0x1eU) | (
                                                   ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_61) 
                                                    << 0x1dU) 
                                                   | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_60) 
                                                       << 0x1cU) 
                                                      | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_59) 
                                                          << 0x1bU) 
                                                         | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_58) 
                                                             << 0x1aU) 
                                                            | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_57) 
                                                                << 0x19U) 
                                                               | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_56) 
                                                                   << 0x18U) 
                                                                  | ((((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_55) 
                                                                       << 0x17U) 
                                                                      | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_54) 
                                                                          << 0x16U) 
                                                                         | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_53) 
                                                                             << 0x15U) 
                                                                            | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_52) 
                                                                                << 0x14U) 
                                                                               | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_51) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_50) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_49) 
                                                                                << 0x11U) 
                                                                                | ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_48) 
                                                                                << 0x10U)))))))) 
                                                                     | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_47) 
                                                                         << 0xfU) 
                                                                        | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_46) 
                                                                            << 0xeU) 
                                                                           | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_45) 
                                                                               << 0xdU) 
                                                                              | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_44) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_43) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_42) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_41) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_40) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_39) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_38) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_37) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_36) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_35) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_34) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_33) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_32)))))))))))))))))))))))));
    __Vtemp_139[1U] = (IData)((((QData)((IData)((((
                                                   ((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_120_T) 
                                                    & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_7_valid)) 
                                                   & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h7b655722__0)) 
                                                  << 0x1fU) 
                                                 | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_126) 
                                                     << 0x1eU) 
                                                    | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_125) 
                                                        << 0x1dU) 
                                                       | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_124) 
                                                           << 0x1cU) 
                                                          | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_123) 
                                                              << 0x1bU) 
                                                             | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_122) 
                                                                 << 0x1aU) 
                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_121) 
                                                                    << 0x19U) 
                                                                   | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_120) 
                                                                       << 0x18U) 
                                                                      | ((((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_119) 
                                                                           << 0x17U) 
                                                                          | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_118) 
                                                                              << 0x16U) 
                                                                             | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_117) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_116) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_115) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_114) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_113) 
                                                                                << 0x11U) 
                                                                                | ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_112) 
                                                                                << 0x10U)))))))) 
                                                                         | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_111) 
                                                                             << 0xfU) 
                                                                            | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_110) 
                                                                                << 0xeU) 
                                                                               | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_109) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_108) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_107) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_106) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_105) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_104) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_103) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_102) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_101) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_100) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_99) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_98) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_97) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_96))))))))))))))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_95) 
                                                              << 0x1fU) 
                                                             | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_94) 
                                                                 << 0x1eU) 
                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_93) 
                                                                    << 0x1dU) 
                                                                   | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_92) 
                                                                       << 0x1cU) 
                                                                      | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_91) 
                                                                          << 0x1bU) 
                                                                         | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_90) 
                                                                             << 0x1aU) 
                                                                            | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_89) 
                                                                                << 0x19U) 
                                                                               | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_88) 
                                                                                << 0x18U) 
                                                                                | ((((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_87) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_86) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_85) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_84) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_83) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_82) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_81) 
                                                                                << 0x11U) 
                                                                                | ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_80) 
                                                                                << 0x10U)))))))) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_79) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_78) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_77) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_76) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_75) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_74) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_73) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_72) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_71) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_70) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_69) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_68) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_67) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_66) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_65) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_64)))))))))))))))))))))))))))));
    __Vtemp_139[2U] = (IData)(((((QData)((IData)(((
                                                   (((IData)(vlSelf->DCache__DOT__miss__DOT___storeHits_120_T) 
                                                     & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_7_valid)) 
                                                    & (IData)(vlSelf->DCache__DOT__miss__DOT____VdfgTmp_h7b655722__0)) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_126) 
                                                      << 0x1eU) 
                                                     | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_125) 
                                                         << 0x1dU) 
                                                        | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_124) 
                                                            << 0x1cU) 
                                                           | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_123) 
                                                               << 0x1bU) 
                                                              | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_122) 
                                                                  << 0x1aU) 
                                                                 | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_121) 
                                                                     << 0x19U) 
                                                                    | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_120) 
                                                                        << 0x18U) 
                                                                       | ((((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_119) 
                                                                            << 0x17U) 
                                                                           | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_118) 
                                                                               << 0x16U) 
                                                                              | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_117) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_116) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_115) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_114) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_113) 
                                                                                << 0x11U) 
                                                                                | ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_112) 
                                                                                << 0x10U)))))))) 
                                                                          | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_111) 
                                                                              << 0xfU) 
                                                                             | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_110) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_109) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_108) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_107) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_106) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_105) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_104) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_103) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_102) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_101) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_100) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_99) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_98) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_97) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_96))))))))))))))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_95) 
                                                               << 0x1fU) 
                                                              | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_94) 
                                                                  << 0x1eU) 
                                                                 | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_93) 
                                                                     << 0x1dU) 
                                                                    | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_92) 
                                                                        << 0x1cU) 
                                                                       | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_91) 
                                                                           << 0x1bU) 
                                                                          | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_90) 
                                                                              << 0x1aU) 
                                                                             | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_89) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_88) 
                                                                                << 0x18U) 
                                                                                | ((((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_87) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_86) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_85) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_84) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_83) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_82) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_81) 
                                                                                << 0x11U) 
                                                                                | ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_80) 
                                                                                << 0x10U)))))))) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_79) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_78) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_77) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_76) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_75) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_74) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_73) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_72) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_71) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_70) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_69) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_68) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_67) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_66) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_65) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_64)))))))))))))))))))))))))))) 
                               >> 0x20U));
    __Vtemp_140[0U] = (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_31) 
                        << 0x1fU) | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_30) 
                                      << 0x1eU) | (
                                                   ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_29) 
                                                    << 0x1dU) 
                                                   | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_28) 
                                                       << 0x1cU) 
                                                      | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_27) 
                                                          << 0x1bU) 
                                                         | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_26) 
                                                             << 0x1aU) 
                                                            | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_25) 
                                                                << 0x19U) 
                                                               | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_24) 
                                                                   << 0x18U) 
                                                                  | ((((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_23) 
                                                                       << 0x17U) 
                                                                      | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_22) 
                                                                          << 0x16U) 
                                                                         | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_21) 
                                                                             << 0x15U) 
                                                                            | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_20) 
                                                                                << 0x14U) 
                                                                               | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_19) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_18) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_17) 
                                                                                << 0x11U) 
                                                                                | ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_16) 
                                                                                << 0x10U)))))))) 
                                                                     | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_15) 
                                                                         << 0xfU) 
                                                                        | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_14) 
                                                                            << 0xeU) 
                                                                           | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_13) 
                                                                               << 0xdU) 
                                                                              | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_12) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_11) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_10) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_9) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_8) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_7) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_6) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_5) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_4) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_0)))))))))))))))))))))))));
    vlSelf->DCache__DOT__miss__DOT___storeAny_T[0U] 
        = __Vtemp_140[0U];
    vlSelf->DCache__DOT__miss__DOT___storeAny_T[1U] 
        = __Vtemp_139[0U];
    vlSelf->DCache__DOT__miss__DOT___storeAny_T[2U] 
        = __Vtemp_139[1U];
    vlSelf->DCache__DOT__miss__DOT___storeAny_T[3U] 
        = __Vtemp_139[2U];
    if (vlSelf->DCache__DOT__miss__DOT__storeHits_0) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 0U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_1) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 1U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_2) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 2U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_3) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 3U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_4) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 4U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_5) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 5U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_6) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 6U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_7) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 7U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_8) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 0U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 1U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_9) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 1U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 1U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_10) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 2U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 1U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_11) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 3U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 1U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_12) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 4U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 1U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_13) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 5U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 1U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_14) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 6U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 1U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_15) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 7U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 1U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_16) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 0U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 2U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_17) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 1U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 2U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_18) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 2U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 2U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_19) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 3U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 2U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_20) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 4U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 2U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_21) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 5U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 2U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_22) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 6U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 2U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_23) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 7U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 2U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_24) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 0U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 3U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_25) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 1U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 3U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_26) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 2U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 3U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_27) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 3U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 3U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_28) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 4U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 3U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_29) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 5U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 3U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_30) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 6U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 3U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_31) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 7U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 3U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_32) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 0U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 4U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_33) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 1U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 4U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_34) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 2U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 4U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_35) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 3U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 4U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_36) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 4U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 4U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_37) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 5U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 4U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_38) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 6U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 4U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_39) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 7U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 4U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_40) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 0U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 5U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_41) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 1U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 5U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_42) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 2U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 5U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_43) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 3U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 5U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_44) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 4U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 5U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_45) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 5U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 5U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_46) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 6U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 5U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_47) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 7U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 5U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_48) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 0U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 6U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_49) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 1U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 6U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_50) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 2U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 6U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_51) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 3U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 6U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_52) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 4U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 6U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_53) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 5U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 6U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_54) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 6U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 6U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_55) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 7U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 6U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_56) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 0U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 7U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_57) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 1U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 7U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_58) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 2U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 7U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_59) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 3U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 7U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_60) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 4U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 7U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_61) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 5U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 7U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_62) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 6U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 7U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_63) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 7U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 7U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_64) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 0U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 8U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_65) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 1U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 8U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_66) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 2U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 8U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_67) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 3U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 8U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_68) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 4U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 8U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_69) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 5U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 8U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_70) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 6U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 8U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_71) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 7U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 8U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_72) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 0U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 9U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_73) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 1U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 9U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_74) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 2U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 9U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_75) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 3U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 9U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_76) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 4U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 9U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_77) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 5U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 9U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_78) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 6U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 9U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_79) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 7U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 9U;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_80) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 0U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xaU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_81) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 1U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xaU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_82) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 2U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xaU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_83) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 3U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xaU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_84) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 4U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xaU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_85) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 5U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xaU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_86) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 6U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xaU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_87) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 7U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xaU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_88) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 0U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xbU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_89) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 1U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xbU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_90) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 2U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xbU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_91) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 3U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xbU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_92) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 4U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xbU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_93) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 5U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xbU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_94) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 6U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xbU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_95) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 7U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xbU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_96) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 0U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xcU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_97) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 1U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xcU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_98) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 2U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xcU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_99) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 3U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xcU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_100) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 4U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xcU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_101) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 5U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xcU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_102) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 6U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xcU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_103) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 7U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xcU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_104) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 0U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xdU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_105) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 1U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xdU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_106) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 2U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xdU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_107) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 3U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xdU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_108) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 4U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xdU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_109) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 5U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xdU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_110) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 6U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xdU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_111) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 7U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xdU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_112) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 0U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xeU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_113) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 1U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xeU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_114) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 2U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xeU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_115) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 3U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xeU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_116) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 4U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xeU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_117) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 5U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xeU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_118) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 6U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xeU;
    } else if (vlSelf->DCache__DOT__miss__DOT__storeHits_119) {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 7U;
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xeU;
    } else {
        vlSelf->DCache__DOT__miss__DOT__storeSlot = 
            ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_120)
              ? 0U : ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_121)
                       ? 1U : ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_122)
                                ? 2U : ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_123)
                                         ? 3U : ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_124)
                                                  ? 4U
                                                  : 
                                                 ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_125)
                                                   ? 5U
                                                   : 
                                                  ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_126)
                                                    ? 6U
                                                    : 7U)))))));
        vlSelf->DCache__DOT__miss__DOT__storeEnt = 0xfU;
    }
    vlSelf->DCache__DOT__miss__DOT__missFlit_opcode 
        = ((0xfU == (IData)(vlSelf->DCache__DOT__miss__DOT__txId))
            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_opcode)
            : ((0xeU == (IData)(vlSelf->DCache__DOT__miss__DOT__txId))
                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_opcode)
                : ((0xdU == (IData)(vlSelf->DCache__DOT__miss__DOT__txId))
                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_opcode)
                    : ((0xcU == (IData)(vlSelf->DCache__DOT__miss__DOT__txId))
                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_opcode)
                        : ((0xbU == (IData)(vlSelf->DCache__DOT__miss__DOT__txId))
                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_opcode)
                            : ((0xaU == (IData)(vlSelf->DCache__DOT__miss__DOT__txId))
                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_opcode)
                                : ((9U == (IData)(vlSelf->DCache__DOT__miss__DOT__txId))
                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_opcode)
                                    : ((8U == (IData)(vlSelf->DCache__DOT__miss__DOT__txId))
                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_opcode)
                                        : ((7U == (IData)(vlSelf->DCache__DOT__miss__DOT__txId))
                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_opcode)
                                            : ((6U 
                                                == (IData)(vlSelf->DCache__DOT__miss__DOT__txId))
                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_opcode)
                                                : (
                                                   (5U 
                                                    == (IData)(vlSelf->DCache__DOT__miss__DOT__txId))
                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_opcode)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->DCache__DOT__miss__DOT__txId))
                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_opcode)
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->DCache__DOT__miss__DOT__txId))
                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_opcode)
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->DCache__DOT__miss__DOT__txId))
                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_opcode)
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->DCache__DOT__miss__DOT__txId))
                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_opcode)
                                                        : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_opcode))))))))))))))));
    if ((0U != (IData)(vlSelf->DCache__DOT__miss__DOT___txValid_T))) {
        vlSelf->io_l2_req_bits_txnID = vlSelf->DCache__DOT__miss__DOT__txId;
        if ((0xfU == (IData)(vlSelf->DCache__DOT__miss__DOT__txId))) {
            vlSelf->io_l2_req_bits_tagAlias = vlSelf->DCache__DOT__miss__DOT__entries_15_alias;
            vlSelf->io_l2_req_bits_expCompStash = vlSelf->DCache__DOT__miss__DOT__entries_15_stash;
        } else if ((0xeU == (IData)(vlSelf->DCache__DOT__miss__DOT__txId))) {
            vlSelf->io_l2_req_bits_tagAlias = vlSelf->DCache__DOT__miss__DOT__entries_14_alias;
            vlSelf->io_l2_req_bits_expCompStash = vlSelf->DCache__DOT__miss__DOT__entries_14_stash;
        } else if ((0xdU == (IData)(vlSelf->DCache__DOT__miss__DOT__txId))) {
            vlSelf->io_l2_req_bits_tagAlias = vlSelf->DCache__DOT__miss__DOT__entries_13_alias;
            vlSelf->io_l2_req_bits_expCompStash = vlSelf->DCache__DOT__miss__DOT__entries_13_stash;
        } else if ((0xcU == (IData)(vlSelf->DCache__DOT__miss__DOT__txId))) {
            vlSelf->io_l2_req_bits_tagAlias = vlSelf->DCache__DOT__miss__DOT__entries_12_alias;
            vlSelf->io_l2_req_bits_expCompStash = vlSelf->DCache__DOT__miss__DOT__entries_12_stash;
        } else if ((0xbU == (IData)(vlSelf->DCache__DOT__miss__DOT__txId))) {
            vlSelf->io_l2_req_bits_tagAlias = vlSelf->DCache__DOT__miss__DOT__entries_11_alias;
            vlSelf->io_l2_req_bits_expCompStash = vlSelf->DCache__DOT__miss__DOT__entries_11_stash;
        } else if ((0xaU == (IData)(vlSelf->DCache__DOT__miss__DOT__txId))) {
            vlSelf->io_l2_req_bits_tagAlias = vlSelf->DCache__DOT__miss__DOT__entries_10_alias;
            vlSelf->io_l2_req_bits_expCompStash = vlSelf->DCache__DOT__miss__DOT__entries_10_stash;
        } else if ((9U == (IData)(vlSelf->DCache__DOT__miss__DOT__txId))) {
            vlSelf->io_l2_req_bits_tagAlias = vlSelf->DCache__DOT__miss__DOT__entries_9_alias;
            vlSelf->io_l2_req_bits_expCompStash = vlSelf->DCache__DOT__miss__DOT__entries_9_stash;
        } else if ((8U == (IData)(vlSelf->DCache__DOT__miss__DOT__txId))) {
            vlSelf->io_l2_req_bits_tagAlias = vlSelf->DCache__DOT__miss__DOT__entries_8_alias;
            vlSelf->io_l2_req_bits_expCompStash = vlSelf->DCache__DOT__miss__DOT__entries_8_stash;
        } else if ((7U == (IData)(vlSelf->DCache__DOT__miss__DOT__txId))) {
            vlSelf->io_l2_req_bits_tagAlias = vlSelf->DCache__DOT__miss__DOT__entries_7_alias;
            vlSelf->io_l2_req_bits_expCompStash = vlSelf->DCache__DOT__miss__DOT__entries_7_stash;
        } else if ((6U == (IData)(vlSelf->DCache__DOT__miss__DOT__txId))) {
            vlSelf->io_l2_req_bits_tagAlias = vlSelf->DCache__DOT__miss__DOT__entries_6_alias;
            vlSelf->io_l2_req_bits_expCompStash = vlSelf->DCache__DOT__miss__DOT__entries_6_stash;
        } else if ((5U == (IData)(vlSelf->DCache__DOT__miss__DOT__txId))) {
            vlSelf->io_l2_req_bits_tagAlias = vlSelf->DCache__DOT__miss__DOT__entries_5_alias;
            vlSelf->io_l2_req_bits_expCompStash = vlSelf->DCache__DOT__miss__DOT__entries_5_stash;
        } else if ((4U == (IData)(vlSelf->DCache__DOT__miss__DOT__txId))) {
            vlSelf->io_l2_req_bits_tagAlias = vlSelf->DCache__DOT__miss__DOT__entries_4_alias;
            vlSelf->io_l2_req_bits_expCompStash = vlSelf->DCache__DOT__miss__DOT__entries_4_stash;
        } else if ((3U == (IData)(vlSelf->DCache__DOT__miss__DOT__txId))) {
            vlSelf->io_l2_req_bits_tagAlias = vlSelf->DCache__DOT__miss__DOT__entries_3_alias;
            vlSelf->io_l2_req_bits_expCompStash = vlSelf->DCache__DOT__miss__DOT__entries_3_stash;
        } else if ((2U == (IData)(vlSelf->DCache__DOT__miss__DOT__txId))) {
            vlSelf->io_l2_req_bits_tagAlias = vlSelf->DCache__DOT__miss__DOT__entries_2_alias;
            vlSelf->io_l2_req_bits_expCompStash = vlSelf->DCache__DOT__miss__DOT__entries_2_stash;
        } else if ((1U == (IData)(vlSelf->DCache__DOT__miss__DOT__txId))) {
            vlSelf->io_l2_req_bits_tagAlias = vlSelf->DCache__DOT__miss__DOT__entries_1_alias;
            vlSelf->io_l2_req_bits_expCompStash = vlSelf->DCache__DOT__miss__DOT__entries_1_stash;
        } else {
            vlSelf->io_l2_req_bits_tagAlias = vlSelf->DCache__DOT__miss__DOT__entries_0_alias;
            vlSelf->io_l2_req_bits_expCompStash = vlSelf->DCache__DOT__miss__DOT__entries_0_stash;
        }
        vlSelf->io_l2_req_bits_opcode = vlSelf->DCache__DOT__miss__DOT__missFlit_opcode;
    } else {
        vlSelf->io_l2_req_bits_txnID = 0x10U;
        vlSelf->io_l2_req_bits_tagAlias = vlSelf->DCache__DOT__miss__DOT__cmoAlias;
        vlSelf->io_l2_req_bits_opcode = vlSelf->DCache__DOT__miss__DOT__cmoOp;
        vlSelf->io_l2_req_bits_expCompStash = 0U;
    }
    vlSelf->DCache__DOT__miss__DOT___refillValid_T 
        = ((((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_15_valid) 
             & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_refillDone)) 
                & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_refillInflight)) 
                   & (~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_waitVictim))))) 
            << 0xfU) | (((IData)(vlSelf->DCache__DOT__miss__DOT__eligible_14) 
                         << 0xeU) | (((IData)(vlSelf->DCache__DOT__miss__DOT__eligible_13) 
                                      << 0xdU) | (((IData)(vlSelf->DCache__DOT__miss__DOT__eligible_12) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->DCache__DOT__miss__DOT__eligible_11) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->DCache__DOT__miss__DOT__eligible_10) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->DCache__DOT__miss__DOT__eligible_9) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->DCache__DOT__miss__DOT__eligible_8) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->DCache__DOT__miss__DOT__eligible_7) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->DCache__DOT__miss__DOT__eligible_6) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->DCache__DOT__miss__DOT__eligible_5) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->DCache__DOT__miss__DOT__eligible_4) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->DCache__DOT__miss__DOT__eligible_3) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->DCache__DOT__miss__DOT__eligible_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->DCache__DOT__miss__DOT__eligible_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->DCache__DOT__miss__DOT__eligible_0))))))))))))))));
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
    vlSelf->DCache__DOT__data__DOT___is128_T_43 = (0xfU 
                                                   & ((7U 
                                                       & ((3U 
                                                           & ((1U 
                                                               & (IData)(vlSelf->DCache__DOT__data_io_load_1_bits_bankMask)) 
                                                              + 
                                                              (1U 
                                                               & ((IData)(vlSelf->DCache__DOT__data_io_load_1_bits_bankMask) 
                                                                  >> 1U)))) 
                                                          + 
                                                          (3U 
                                                           & ((1U 
                                                               & ((IData)(vlSelf->DCache__DOT__data_io_load_1_bits_bankMask) 
                                                                  >> 2U)) 
                                                              + 
                                                              (1U 
                                                               & ((IData)(vlSelf->DCache__DOT__data_io_load_1_bits_bankMask) 
                                                                  >> 3U)))))) 
                                                      + 
                                                      (7U 
                                                       & ((3U 
                                                           & ((1U 
                                                               & ((IData)(vlSelf->DCache__DOT__data_io_load_1_bits_bankMask) 
                                                                  >> 4U)) 
                                                              + 
                                                              (1U 
                                                               & ((IData)(vlSelf->DCache__DOT__data_io_load_1_bits_bankMask) 
                                                                  >> 5U)))) 
                                                          + 
                                                          (3U 
                                                           & ((1U 
                                                               & ((IData)(vlSelf->DCache__DOT__data_io_load_1_bits_bankMask) 
                                                                  >> 6U)) 
                                                              + 
                                                              (1U 
                                                               & ((IData)(vlSelf->DCache__DOT__data_io_load_1_bits_bankMask) 
                                                                  >> 7U))))))));
    vlSelf->DCache__DOT__loads_1__DOT___io_replace_access_valid_T 
        = ((IData)(vlSelf->io_load_1_resp_ready) & (IData)(vlSelf->io_load_1_resp_valid));
    vlSelf->io_load_1_resp_bits_replacementUpdated 
        = ((IData)(vlSelf->io_load_1_resp_valid) & 
           ((~ (IData)(vlSelf->DCache__DOT__loads_1__DOT__s2_bank_conflict)) 
            & (IData)(vlSelf->DCache__DOT__loads_1__DOT__s2_hit)));
    vlSelf->DCache__DOT__loads_1_io_wbq_conflict_check_valid 
        = ((IData)(vlSelf->io_load_1_resp_valid) & 
           ((~ (IData)(vlSelf->DCache__DOT__loads_1__DOT__s2_hit)) 
            & (~ (IData)(vlSelf->DCache__DOT__loads_1__DOT__s2_bank_conflict))));
    vlSelf->DCache__DOT__loads_1_io_unique_occupy_set 
        = ((IData)(vlSelf->DCache__DOT__loads_1_io_unique_occupy_valid)
            ? (0xffU & (IData)((vlSelf->DCache__DOT__loads_1__DOT__s2_req_vaddr 
                                >> 6U))) : 0U);
    DCache__DOT__wb__DOT___evtWant_T_155 = ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_153) 
                                            & (1U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_state)));
    DCache__DOT__wb__DOT___evtWant_T_146 = ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_144) 
                                            & (1U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_state)));
    vlSelf->DCache__DOT__wb__DOT__datStart_16 = ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_144) 
                                                 & ((3U 
                                                     == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_state)) 
                                                    & ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_dataSent)) 
                                                       & (2U 
                                                          == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_beatsLeft)))));
    DCache__DOT__wb__DOT___evtWant_T_137 = ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_135) 
                                            & (1U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_state)));
    vlSelf->DCache__DOT__wb__DOT__datStart_15 = ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_135) 
                                                 & ((3U 
                                                     == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_state)) 
                                                    & ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_dataSent)) 
                                                       & (2U 
                                                          == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_beatsLeft)))));
    DCache__DOT__wb__DOT___evtWant_T_110 = ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_108) 
                                            & (1U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_state)));
    vlSelf->DCache__DOT__wb__DOT__datStart_12 = ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_108) 
                                                 & ((3U 
                                                     == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_state)) 
                                                    & ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_dataSent)) 
                                                       & (2U 
                                                          == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_beatsLeft)))));
    DCache__DOT__wb__DOT___evtWant_T_101 = ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_99) 
                                            & (1U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_state)));
    vlSelf->DCache__DOT__wb__DOT__datStart_11 = ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_99) 
                                                 & ((3U 
                                                     == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_state)) 
                                                    & ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_dataSent)) 
                                                       & (2U 
                                                          == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_beatsLeft)))));
    DCache__DOT__wb__DOT___evtWant_T_119 = ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_117) 
                                            & (1U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_state)));
    vlSelf->DCache__DOT__wb__DOT__datStart_13 = ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_117) 
                                                 & ((3U 
                                                     == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_state)) 
                                                    & ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_dataSent)) 
                                                       & (2U 
                                                          == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_beatsLeft)))));
    DCache__DOT__wb__DOT___evtWant_T_128 = ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_126) 
                                            & (1U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_state)));
    vlSelf->DCache__DOT__wb__DOT__datStart_14 = ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_126) 
                                                 & ((3U 
                                                     == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_state)) 
                                                    & ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_dataSent)) 
                                                       & (2U 
                                                          == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_beatsLeft)))));
    DCache__DOT__wb__DOT___evtWant_T_83 = ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_81) 
                                           & (1U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_state)));
    vlSelf->DCache__DOT__wb__DOT__datStart_9 = ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_81) 
                                                & ((3U 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_state)) 
                                                   & ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_dataSent)) 
                                                      & (2U 
                                                         == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_beatsLeft)))));
    DCache__DOT__wb__DOT___evtWant_T_92 = ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_90) 
                                           & (1U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_state)));
    vlSelf->DCache__DOT__wb__DOT__datStart_10 = ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_90) 
                                                 & ((3U 
                                                     == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_state)) 
                                                    & ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_dataSent)) 
                                                       & (2U 
                                                          == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_beatsLeft)))));
    DCache__DOT__wb__DOT___evtWant_T_74 = ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_72) 
                                           & (1U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_state)));
    vlSelf->DCache__DOT__wb__DOT__datStart_8 = ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_72) 
                                                & ((3U 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_state)) 
                                                   & ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_dataSent)) 
                                                      & (2U 
                                                         == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_beatsLeft)))));
    DCache__DOT__wb__DOT___evtWant_T_56 = ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_54) 
                                           & (1U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_state)));
    vlSelf->DCache__DOT__wb__DOT__datStart_6 = ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_54) 
                                                & ((3U 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_state)) 
                                                   & ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_dataSent)) 
                                                      & (2U 
                                                         == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_beatsLeft)))));
    DCache__DOT__wb__DOT___evtWant_T_47 = ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_45) 
                                           & (1U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_state)));
    vlSelf->DCache__DOT__wb__DOT__datStart_5 = ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_45) 
                                                & ((3U 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_state)) 
                                                   & ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_dataSent)) 
                                                      & (2U 
                                                         == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_beatsLeft)))));
    DCache__DOT__wb__DOT___evtWant_T_38 = ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_36) 
                                           & (1U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_state)));
    vlSelf->DCache__DOT__wb__DOT__datStart_4 = ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_36) 
                                                & ((3U 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_state)) 
                                                   & ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_dataSent)) 
                                                      & (2U 
                                                         == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_beatsLeft)))));
    DCache__DOT__wb__DOT___evtWant_T_2 = ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T) 
                                          & (1U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_state)));
    vlSelf->DCache__DOT__wb__DOT__datStart_0 = ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T) 
                                                & ((3U 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_state)) 
                                                   & ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_dataSent)) 
                                                      & (2U 
                                                         == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_beatsLeft)))));
    DCache__DOT__wb__DOT___evtWant_T_65 = ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_63) 
                                           & (1U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_state)));
    vlSelf->DCache__DOT__wb__DOT__datStart_7 = ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_63) 
                                                & ((3U 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_state)) 
                                                   & ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_dataSent)) 
                                                      & (2U 
                                                         == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_beatsLeft)))));
    DCache__DOT__wb__DOT___evtWant_T_11 = ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_9) 
                                           & (1U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_state)));
    vlSelf->DCache__DOT__wb__DOT__datStart_1 = ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_9) 
                                                & ((3U 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_state)) 
                                                   & ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_dataSent)) 
                                                      & (2U 
                                                         == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_beatsLeft)))));
    DCache__DOT__wb__DOT___evtWant_T_20 = ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_18) 
                                           & (1U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_state)));
    vlSelf->DCache__DOT__wb__DOT__datStart_2 = ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_18) 
                                                & ((3U 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_state)) 
                                                   & ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_dataSent)) 
                                                      & (2U 
                                                         == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_beatsLeft)))));
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
    DCache__DOT__wb__DOT___evtWant_T_29 = ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_27) 
                                           & (1U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_state)));
    vlSelf->DCache__DOT__wb__DOT__datStart_3 = ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_27) 
                                                & ((3U 
                                                    == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_state)) 
                                                   & ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_dataSent)) 
                                                      & (2U 
                                                         == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_beatsLeft)))));
    vlSelf->DCache__DOT__wb__DOT___io_block_1_T_88 
        = ((IData)(vlSelf->DCache__DOT__wb__DOT___io_block_1_T_81) 
           | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy) 
               & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__wb__DOT__entries_11_addr) 
                  == (0xffffffffffc0ULL & vlSelf->DCache__DOT__loads_1__DOT__s2_paddr))) 
              | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy) 
                  & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__wb__DOT__entries_12_addr) 
                     == (0xffffffffffc0ULL & vlSelf->DCache__DOT__loads_1__DOT__s2_paddr))) 
                 | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy) 
                     & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__wb__DOT__entries_13_addr) 
                        == (0xffffffffffc0ULL & vlSelf->DCache__DOT__loads_1__DOT__s2_paddr))) 
                    | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy) 
                        & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__wb__DOT__entries_14_addr) 
                           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__loads_1__DOT__s2_paddr))) 
                       | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy) 
                           & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__wb__DOT__entries_15_addr) 
                              == (0xffffffffffc0ULL 
                                  & vlSelf->DCache__DOT__loads_1__DOT__s2_paddr))) 
                          | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy) 
                              & ((0xffffffffffc0ULL 
                                  & vlSelf->DCache__DOT__wb__DOT__entries_16_addr) 
                                 == (0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__loads_1__DOT__s2_paddr))) 
                             | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy) 
                                & ((0xffffffffffc0ULL 
                                    & vlSelf->DCache__DOT__wb__DOT__entries_17_addr) 
                                   == (0xffffffffffc0ULL 
                                       & vlSelf->DCache__DOT__loads_1__DOT__s2_paddr))))))))));
    vlSelf->DCache__DOT__wb__DOT___io_block_0_T_88 
        = ((IData)(vlSelf->DCache__DOT__wb__DOT___io_block_0_T_81) 
           | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy) 
               & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__wb__DOT__entries_11_addr) 
                  == (0xffffffffffc0ULL & vlSelf->DCache__DOT__loads_0__DOT__s2_paddr))) 
              | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy) 
                  & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__wb__DOT__entries_12_addr) 
                     == (0xffffffffffc0ULL & vlSelf->DCache__DOT__loads_0__DOT__s2_paddr))) 
                 | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy) 
                     & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__wb__DOT__entries_13_addr) 
                        == (0xffffffffffc0ULL & vlSelf->DCache__DOT__loads_0__DOT__s2_paddr))) 
                    | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy) 
                        & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__wb__DOT__entries_14_addr) 
                           == (0xffffffffffc0ULL & vlSelf->DCache__DOT__loads_0__DOT__s2_paddr))) 
                       | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy) 
                           & ((0xffffffffffc0ULL & vlSelf->DCache__DOT__wb__DOT__entries_15_addr) 
                              == (0xffffffffffc0ULL 
                                  & vlSelf->DCache__DOT__loads_0__DOT__s2_paddr))) 
                          | (((IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy) 
                              & ((0xffffffffffc0ULL 
                                  & vlSelf->DCache__DOT__wb__DOT__entries_16_addr) 
                                 == (0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__loads_0__DOT__s2_paddr))) 
                             | ((IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy) 
                                & ((0xffffffffffc0ULL 
                                    & vlSelf->DCache__DOT__wb__DOT__entries_17_addr) 
                                   == (0xffffffffffc0ULL 
                                       & vlSelf->DCache__DOT__loads_0__DOT__s2_paddr))))))))));
    vlSelf->DCache__DOT__pipe__DOT__plru__DOT___GEN_308 
        = ((0x34U == (0xffU & (IData)((vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                       >> 6U)))) ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_52)
            : ((0x33U == (0xffU & (IData)((vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                           >> 6U))))
                ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_51)
                : ((0x32U == (0xffU & (IData)((vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                               >> 6U))))
                    ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_50)
                    : ((0x31U == (0xffU & (IData)((vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                   >> 6U))))
                        ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_49)
                        : ((0x30U == (0xffU & (IData)(
                                                      (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                       >> 6U))))
                            ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_48)
                            : ((0x2fU == (0xffU & (IData)(
                                                          (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                           >> 6U))))
                                ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_47)
                                : ((0x2eU == (0xffU 
                                              & (IData)(
                                                        (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                         >> 6U))))
                                    ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_46)
                                    : ((0x2dU == (0xffU 
                                                  & (IData)(
                                                            (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                             >> 6U))))
                                        ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_45)
                                        : ((0x2cU == 
                                            (0xffU 
                                             & (IData)(
                                                       (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                        >> 6U))))
                                            ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_44)
                                            : ((0x2bU 
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                            >> 6U))))
                                                ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_43)
                                                : (
                                                   (0x2aU 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(
                                                               (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                                >> 6U))))
                                                    ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_42)
                                                    : 
                                                   ((0x29U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                                 >> 6U))))
                                                     ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_41)
                                                     : 
                                                    ((0x28U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(
                                                                 (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                                  >> 6U))))
                                                      ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_40)
                                                      : (IData)(DCache__DOT__pipe__DOT__plru__DOT___GEN_295))))))))))))));
    vlSelf->DCache__DOT__data__DOT___is128_T_20 = (0xfU 
                                                   & ((7U 
                                                       & ((3U 
                                                           & ((1U 
                                                               & (IData)(vlSelf->DCache__DOT__data_io_load_0_bits_bankMask)) 
                                                              + 
                                                              (1U 
                                                               & ((IData)(vlSelf->DCache__DOT__data_io_load_0_bits_bankMask) 
                                                                  >> 1U)))) 
                                                          + 
                                                          (3U 
                                                           & ((1U 
                                                               & ((IData)(vlSelf->DCache__DOT__data_io_load_0_bits_bankMask) 
                                                                  >> 2U)) 
                                                              + 
                                                              (1U 
                                                               & ((IData)(vlSelf->DCache__DOT__data_io_load_0_bits_bankMask) 
                                                                  >> 3U)))))) 
                                                      + 
                                                      (7U 
                                                       & ((3U 
                                                           & ((1U 
                                                               & ((IData)(vlSelf->DCache__DOT__data_io_load_0_bits_bankMask) 
                                                                  >> 4U)) 
                                                              + 
                                                              (1U 
                                                               & ((IData)(vlSelf->DCache__DOT__data_io_load_0_bits_bankMask) 
                                                                  >> 5U)))) 
                                                          + 
                                                          (3U 
                                                           & ((1U 
                                                               & ((IData)(vlSelf->DCache__DOT__data_io_load_0_bits_bankMask) 
                                                                  >> 6U)) 
                                                              + 
                                                              (1U 
                                                               & ((IData)(vlSelf->DCache__DOT__data_io_load_0_bits_bankMask) 
                                                                  >> 7U))))))));
    vlSelf->DCache__DOT__loads_0__DOT___io_replace_access_valid_T 
        = ((IData)(vlSelf->io_load_0_resp_ready) & (IData)(vlSelf->io_load_0_resp_valid));
    vlSelf->io_load_0_resp_bits_replacementUpdated 
        = ((IData)(vlSelf->io_load_0_resp_valid) & 
           ((~ (IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_bank_conflict)) 
            & (IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_hit)));
    vlSelf->DCache__DOT__loads_0_io_wbq_conflict_check_valid 
        = ((IData)(vlSelf->io_load_0_resp_valid) & 
           ((~ (IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_hit)) 
            & (~ (IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_bank_conflict))));
    vlSelf->DCache__DOT__loads_0_io_unique_occupy_set 
        = ((IData)(vlSelf->DCache__DOT__loads_0_io_unique_occupy_valid)
            ? (0xffU & (IData)((vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                >> 6U))) : 0U);
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
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_hi_lo_11 
        = (((QData)((IData)((0xffU & ((0x800000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                       ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[5U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[5U] 
                                           >> 0x18U))
                                       : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                           << 8U) | 
                                          (vlSelf->io_l2_rxDat_bits_data[5U] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x400000U 
                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                             ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[5U] 
                                                   >> 0x10U))
                                             : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x200000U 
                                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                                             ? 
                                                            ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[5U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[5U] 
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
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                                              ? 
                                                             vlSelf->DCache__DOT__miss__DOT__storeHalf_11[5U]
                                                              : 
                                                             vlSelf->io_l2_rxDat_bits_data[5U])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((0x80000U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                                              ? 
                                                             ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[4U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[4U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                               << 8U) 
                                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((0x40000U 
                                                                    & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[4U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((0x20000U 
                                                                       & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[4U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[4U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((0x10000U 
                                                                        & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                                                        ? 
                                                                       vlSelf->DCache__DOT__miss__DOT__storeHalf_11[4U]
                                                                        : 
                                                                       vlSelf->io_l2_rxDat_bits_data[4U])))))))))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_11 
        = (((QData)((IData)((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                       ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[1U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[1U] 
                                           >> 0x18U))
                                       : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                           << 8U) | 
                                          (vlSelf->io_l2_rxDat_bits_data[1U] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x40U 
                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                             ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[1U] 
                                                   >> 0x10U))
                                             : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x20U 
                                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                                             ? 
                                                            ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[1U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[1U] 
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
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                                              ? 
                                                             vlSelf->DCache__DOT__miss__DOT__storeHalf_11[1U]
                                                              : 
                                                             vlSelf->io_l2_rxDat_bits_data[1U])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((8U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                                              ? 
                                                             ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[0U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[0U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                               << 8U) 
                                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((4U 
                                                                    & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[0U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((2U 
                                                                       & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[0U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((1U 
                                                                        & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                                                        ? 
                                                                       vlSelf->DCache__DOT__miss__DOT__storeHalf_11[0U]
                                                                        : 
                                                                       vlSelf->io_l2_rxDat_bits_data[0U])))))))))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_hi_lo_10 
        = (((QData)((IData)((0xffU & ((0x800000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                       ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[5U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[5U] 
                                           >> 0x18U))
                                       : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                           << 8U) | 
                                          (vlSelf->io_l2_rxDat_bits_data[5U] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x400000U 
                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                             ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[5U] 
                                                   >> 0x10U))
                                             : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x200000U 
                                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                                             ? 
                                                            ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[5U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[5U] 
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
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                                              ? 
                                                             vlSelf->DCache__DOT__miss__DOT__storeHalf_10[5U]
                                                              : 
                                                             vlSelf->io_l2_rxDat_bits_data[5U])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((0x80000U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                                              ? 
                                                             ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[4U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[4U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                               << 8U) 
                                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((0x40000U 
                                                                    & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[4U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((0x20000U 
                                                                       & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[4U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[4U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((0x10000U 
                                                                        & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                                                        ? 
                                                                       vlSelf->DCache__DOT__miss__DOT__storeHalf_10[4U]
                                                                        : 
                                                                       vlSelf->io_l2_rxDat_bits_data[4U])))))))))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_10 
        = (((QData)((IData)((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                       ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[1U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[1U] 
                                           >> 0x18U))
                                       : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                           << 8U) | 
                                          (vlSelf->io_l2_rxDat_bits_data[1U] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x40U 
                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                             ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[1U] 
                                                   >> 0x10U))
                                             : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x20U 
                                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                                             ? 
                                                            ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[1U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[1U] 
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
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                                              ? 
                                                             vlSelf->DCache__DOT__miss__DOT__storeHalf_10[1U]
                                                              : 
                                                             vlSelf->io_l2_rxDat_bits_data[1U])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((8U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                                              ? 
                                                             ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[0U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[0U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                               << 8U) 
                                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((4U 
                                                                    & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[0U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((2U 
                                                                       & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[0U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((1U 
                                                                        & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                                                        ? 
                                                                       vlSelf->DCache__DOT__miss__DOT__storeHalf_10[0U]
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
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_hi_lo_5 
        = (((QData)((IData)((0xffU & ((0x800000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                       ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[5U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[5U] 
                                           >> 0x18U))
                                       : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                           << 8U) | 
                                          (vlSelf->io_l2_rxDat_bits_data[5U] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x400000U 
                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                             ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[5U] 
                                                   >> 0x10U))
                                             : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x200000U 
                                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                                             ? 
                                                            ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[5U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[5U] 
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
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                                              ? 
                                                             vlSelf->DCache__DOT__miss__DOT__storeHalf_5[5U]
                                                              : 
                                                             vlSelf->io_l2_rxDat_bits_data[5U])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((0x80000U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                                              ? 
                                                             ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[4U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[4U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                               << 8U) 
                                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((0x40000U 
                                                                    & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[4U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((0x20000U 
                                                                       & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[4U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[4U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((0x10000U 
                                                                        & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                                                        ? 
                                                                       vlSelf->DCache__DOT__miss__DOT__storeHalf_5[4U]
                                                                        : 
                                                                       vlSelf->io_l2_rxDat_bits_data[4U])))))))))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_5 
        = (((QData)((IData)((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                       ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[1U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[1U] 
                                           >> 0x18U))
                                       : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                           << 8U) | 
                                          (vlSelf->io_l2_rxDat_bits_data[1U] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x40U 
                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                             ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[1U] 
                                                   >> 0x10U))
                                             : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x20U 
                                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                                             ? 
                                                            ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[1U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[1U] 
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
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                                              ? 
                                                             vlSelf->DCache__DOT__miss__DOT__storeHalf_5[1U]
                                                              : 
                                                             vlSelf->io_l2_rxDat_bits_data[1U])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((8U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                                              ? 
                                                             ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[0U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[0U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                               << 8U) 
                                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((4U 
                                                                    & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[0U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((2U 
                                                                       & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[0U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((1U 
                                                                        & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                                                        ? 
                                                                       vlSelf->DCache__DOT__miss__DOT__storeHalf_5[0U]
                                                                        : 
                                                                       vlSelf->io_l2_rxDat_bits_data[0U])))))))))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_hi_lo_4 
        = (((QData)((IData)((0xffU & ((0x800000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                       ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[5U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[5U] 
                                           >> 0x18U))
                                       : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                           << 8U) | 
                                          (vlSelf->io_l2_rxDat_bits_data[5U] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x400000U 
                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                             ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[5U] 
                                                   >> 0x10U))
                                             : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x200000U 
                                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                                             ? 
                                                            ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[5U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[5U] 
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
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                                              ? 
                                                             vlSelf->DCache__DOT__miss__DOT__storeHalf_4[5U]
                                                              : 
                                                             vlSelf->io_l2_rxDat_bits_data[5U])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((0x80000U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                                              ? 
                                                             ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[4U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[4U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                               << 8U) 
                                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((0x40000U 
                                                                    & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[4U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((0x20000U 
                                                                       & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[4U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[4U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((0x10000U 
                                                                        & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                                                        ? 
                                                                       vlSelf->DCache__DOT__miss__DOT__storeHalf_4[4U]
                                                                        : 
                                                                       vlSelf->io_l2_rxDat_bits_data[4U])))))))))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_4 
        = (((QData)((IData)((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                       ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[1U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[1U] 
                                           >> 0x18U))
                                       : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                           << 8U) | 
                                          (vlSelf->io_l2_rxDat_bits_data[1U] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x40U 
                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                             ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[1U] 
                                                   >> 0x10U))
                                             : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x20U 
                                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                                             ? 
                                                            ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[1U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[1U] 
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
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                                              ? 
                                                             vlSelf->DCache__DOT__miss__DOT__storeHalf_4[1U]
                                                              : 
                                                             vlSelf->io_l2_rxDat_bits_data[1U])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((8U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                                              ? 
                                                             ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[0U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[0U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                               << 8U) 
                                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((4U 
                                                                    & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[0U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((2U 
                                                                       & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[0U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((1U 
                                                                        & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                                                        ? 
                                                                       vlSelf->DCache__DOT__miss__DOT__storeHalf_4[0U]
                                                                        : 
                                                                       vlSelf->io_l2_rxDat_bits_data[0U])))))))))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_hi_lo_3 
        = (((QData)((IData)((0xffU & ((0x800000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                       ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[5U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[5U] 
                                           >> 0x18U))
                                       : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                           << 8U) | 
                                          (vlSelf->io_l2_rxDat_bits_data[5U] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x400000U 
                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                             ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[5U] 
                                                   >> 0x10U))
                                             : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x200000U 
                                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                                             ? 
                                                            ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[5U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[5U] 
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
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                                              ? 
                                                             vlSelf->DCache__DOT__miss__DOT__storeHalf_3[5U]
                                                              : 
                                                             vlSelf->io_l2_rxDat_bits_data[5U])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((0x80000U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                                              ? 
                                                             ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[4U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[4U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                               << 8U) 
                                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((0x40000U 
                                                                    & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[4U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((0x20000U 
                                                                       & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[4U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[4U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((0x10000U 
                                                                        & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                                                        ? 
                                                                       vlSelf->DCache__DOT__miss__DOT__storeHalf_3[4U]
                                                                        : 
                                                                       vlSelf->io_l2_rxDat_bits_data[4U])))))))))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_3 
        = (((QData)((IData)((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                       ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[1U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[1U] 
                                           >> 0x18U))
                                       : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                           << 8U) | 
                                          (vlSelf->io_l2_rxDat_bits_data[1U] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x40U 
                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                             ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[1U] 
                                                   >> 0x10U))
                                             : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x20U 
                                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                                             ? 
                                                            ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[1U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[1U] 
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
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                                              ? 
                                                             vlSelf->DCache__DOT__miss__DOT__storeHalf_3[1U]
                                                              : 
                                                             vlSelf->io_l2_rxDat_bits_data[1U])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((8U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                                              ? 
                                                             ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[0U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[0U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                               << 8U) 
                                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((4U 
                                                                    & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[0U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((2U 
                                                                       & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[0U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((1U 
                                                                        & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                                                        ? 
                                                                       vlSelf->DCache__DOT__miss__DOT__storeHalf_3[0U]
                                                                        : 
                                                                       vlSelf->io_l2_rxDat_bits_data[0U])))))))))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_hi_lo_2 
        = (((QData)((IData)((0xffU & ((0x800000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                       ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[5U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[5U] 
                                           >> 0x18U))
                                       : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                           << 8U) | 
                                          (vlSelf->io_l2_rxDat_bits_data[5U] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x400000U 
                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                             ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[5U] 
                                                   >> 0x10U))
                                             : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x200000U 
                                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                                             ? 
                                                            ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[5U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[5U] 
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
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                                              ? 
                                                             vlSelf->DCache__DOT__miss__DOT__storeHalf_2[5U]
                                                              : 
                                                             vlSelf->io_l2_rxDat_bits_data[5U])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((0x80000U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                                              ? 
                                                             ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[4U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[4U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                               << 8U) 
                                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((0x40000U 
                                                                    & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[4U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((0x20000U 
                                                                       & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[4U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[4U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((0x10000U 
                                                                        & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                                                        ? 
                                                                       vlSelf->DCache__DOT__miss__DOT__storeHalf_2[4U]
                                                                        : 
                                                                       vlSelf->io_l2_rxDat_bits_data[4U])))))))))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_2 
        = (((QData)((IData)((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                       ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[1U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[1U] 
                                           >> 0x18U))
                                       : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                           << 8U) | 
                                          (vlSelf->io_l2_rxDat_bits_data[1U] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x40U 
                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                             ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[1U] 
                                                   >> 0x10U))
                                             : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x20U 
                                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                                             ? 
                                                            ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[1U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[1U] 
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
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                                              ? 
                                                             vlSelf->DCache__DOT__miss__DOT__storeHalf_2[1U]
                                                              : 
                                                             vlSelf->io_l2_rxDat_bits_data[1U])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((8U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                                              ? 
                                                             ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[0U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[0U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                               << 8U) 
                                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((4U 
                                                                    & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[0U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((2U 
                                                                       & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[0U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((1U 
                                                                        & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                                                        ? 
                                                                       vlSelf->DCache__DOT__miss__DOT__storeHalf_2[0U]
                                                                        : 
                                                                       vlSelf->io_l2_rxDat_bits_data[0U])))))))))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_hi_lo_1 
        = (((QData)((IData)((0xffU & ((0x800000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                       ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[5U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[5U] 
                                           >> 0x18U))
                                       : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                           << 8U) | 
                                          (vlSelf->io_l2_rxDat_bits_data[5U] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x400000U 
                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                             ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[5U] 
                                                   >> 0x10U))
                                             : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x200000U 
                                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                                             ? 
                                                            ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[5U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[5U] 
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
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                                              ? 
                                                             vlSelf->DCache__DOT__miss__DOT__storeHalf_1[5U]
                                                              : 
                                                             vlSelf->io_l2_rxDat_bits_data[5U])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((0x80000U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                                              ? 
                                                             ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[4U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[4U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                               << 8U) 
                                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((0x40000U 
                                                                    & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[4U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((0x20000U 
                                                                       & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[4U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[4U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((0x10000U 
                                                                        & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                                                        ? 
                                                                       vlSelf->DCache__DOT__miss__DOT__storeHalf_1[4U]
                                                                        : 
                                                                       vlSelf->io_l2_rxDat_bits_data[4U])))))))))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_1 
        = (((QData)((IData)((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                       ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[1U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[1U] 
                                           >> 0x18U))
                                       : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                           << 8U) | 
                                          (vlSelf->io_l2_rxDat_bits_data[1U] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x40U 
                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                             ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[1U] 
                                                   >> 0x10U))
                                             : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x20U 
                                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                                             ? 
                                                            ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[1U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[1U] 
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
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                                              ? 
                                                             vlSelf->DCache__DOT__miss__DOT__storeHalf_1[1U]
                                                              : 
                                                             vlSelf->io_l2_rxDat_bits_data[1U])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((8U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                                              ? 
                                                             ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[0U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[0U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                               << 8U) 
                                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((4U 
                                                                    & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[0U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((2U 
                                                                       & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[0U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((1U 
                                                                        & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                                                        ? 
                                                                       vlSelf->DCache__DOT__miss__DOT__storeHalf_1[0U]
                                                                        : 
                                                                       vlSelf->io_l2_rxDat_bits_data[0U])))))))))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_hi_lo 
        = (((QData)((IData)((0xffU & ((0x800000U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                       ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[5U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__miss__DOT__storeHalf[5U] 
                                           >> 0x18U))
                                       : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                           << 8U) | 
                                          (vlSelf->io_l2_rxDat_bits_data[5U] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x400000U 
                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                             ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__miss__DOT__storeHalf[5U] 
                                                   >> 0x10U))
                                             : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x200000U 
                                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                                             ? 
                                                            ((vlSelf->DCache__DOT__miss__DOT__storeHalf[5U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf[5U] 
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
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                                              ? 
                                                             vlSelf->DCache__DOT__miss__DOT__storeHalf[5U]
                                                              : 
                                                             vlSelf->io_l2_rxDat_bits_data[5U])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((0x80000U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                                              ? 
                                                             ((vlSelf->DCache__DOT__miss__DOT__storeHalf[4U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf[4U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                               << 8U) 
                                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((0x40000U 
                                                                    & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__miss__DOT__storeHalf[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__miss__DOT__storeHalf[4U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((0x20000U 
                                                                       & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__miss__DOT__storeHalf[4U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__miss__DOT__storeHalf[4U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((0x10000U 
                                                                        & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                                                        ? 
                                                                       vlSelf->DCache__DOT__miss__DOT__storeHalf[4U]
                                                                        : 
                                                                       vlSelf->io_l2_rxDat_bits_data[4U])))))))))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo 
        = (((QData)((IData)((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                       ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[1U] 
                                           << 8U) | 
                                          (vlSelf->DCache__DOT__miss__DOT__storeHalf[1U] 
                                           >> 0x18U))
                                       : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                           << 8U) | 
                                          (vlSelf->io_l2_rxDat_bits_data[1U] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x40U 
                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                             ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->DCache__DOT__miss__DOT__storeHalf[1U] 
                                                   >> 0x10U))
                                             : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x20U 
                                                             & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                                             ? 
                                                            ((vlSelf->DCache__DOT__miss__DOT__storeHalf[1U] 
                                                              << 0x18U) 
                                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf[1U] 
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
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                                              ? 
                                                             vlSelf->DCache__DOT__miss__DOT__storeHalf[1U]
                                                              : 
                                                             vlSelf->io_l2_rxDat_bits_data[1U])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((8U 
                                                              & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                                              ? 
                                                             ((vlSelf->DCache__DOT__miss__DOT__storeHalf[0U] 
                                                               << 8U) 
                                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf[0U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                               << 8U) 
                                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((4U 
                                                                    & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                                                    ? 
                                                                   ((vlSelf->DCache__DOT__miss__DOT__storeHalf[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->DCache__DOT__miss__DOT__storeHalf[0U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((2U 
                                                                       & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                                                       ? 
                                                                      ((vlSelf->DCache__DOT__miss__DOT__storeHalf[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->DCache__DOT__miss__DOT__storeHalf[0U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((1U 
                                                                        & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                                                        ? 
                                                                       vlSelf->DCache__DOT__miss__DOT__storeHalf[0U]
                                                                        : 
                                                                       vlSelf->io_l2_rxDat_bits_data[0U])))))))))));
    vlSelf->DCache__DOT__loads_1__DOT__s1_hit = ((0U 
                                                  != (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_tag_way)) 
                                                 & ((3U 
                                                     != (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_req_cmd)) 
                                                    | ((2U 
                                                        == (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_meta_coh)) 
                                                       | (3U 
                                                          == (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_meta_coh)))));
    if ((0x34U == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                    >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3124 = vlSelf->DCache__DOT__meta__DOT__meta_52_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3380 = vlSelf->DCache__DOT__meta__DOT__meta_52_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3636 = vlSelf->DCache__DOT__meta__DOT__meta_52_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3892 = vlSelf->DCache__DOT__meta__DOT__meta_52_3_coh;
    } else if ((0x33U == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3124 = vlSelf->DCache__DOT__meta__DOT__meta_51_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3380 = vlSelf->DCache__DOT__meta__DOT__meta_51_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3636 = vlSelf->DCache__DOT__meta__DOT__meta_51_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3892 = vlSelf->DCache__DOT__meta__DOT__meta_51_3_coh;
    } else if ((0x32U == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3124 = vlSelf->DCache__DOT__meta__DOT__meta_50_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3380 = vlSelf->DCache__DOT__meta__DOT__meta_50_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3636 = vlSelf->DCache__DOT__meta__DOT__meta_50_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3892 = vlSelf->DCache__DOT__meta__DOT__meta_50_3_coh;
    } else if ((0x31U == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3124 = vlSelf->DCache__DOT__meta__DOT__meta_49_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3380 = vlSelf->DCache__DOT__meta__DOT__meta_49_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3636 = vlSelf->DCache__DOT__meta__DOT__meta_49_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3892 = vlSelf->DCache__DOT__meta__DOT__meta_49_3_coh;
    } else if ((0x30U == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3124 = vlSelf->DCache__DOT__meta__DOT__meta_48_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3380 = vlSelf->DCache__DOT__meta__DOT__meta_48_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3636 = vlSelf->DCache__DOT__meta__DOT__meta_48_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3892 = vlSelf->DCache__DOT__meta__DOT__meta_48_3_coh;
    } else if ((0x2fU == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3124 = vlSelf->DCache__DOT__meta__DOT__meta_47_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3380 = vlSelf->DCache__DOT__meta__DOT__meta_47_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3636 = vlSelf->DCache__DOT__meta__DOT__meta_47_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3892 = vlSelf->DCache__DOT__meta__DOT__meta_47_3_coh;
    } else if ((0x2eU == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3124 = vlSelf->DCache__DOT__meta__DOT__meta_46_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3380 = vlSelf->DCache__DOT__meta__DOT__meta_46_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3636 = vlSelf->DCache__DOT__meta__DOT__meta_46_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3892 = vlSelf->DCache__DOT__meta__DOT__meta_46_3_coh;
    } else if ((0x2dU == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3124 = vlSelf->DCache__DOT__meta__DOT__meta_45_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3380 = vlSelf->DCache__DOT__meta__DOT__meta_45_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3636 = vlSelf->DCache__DOT__meta__DOT__meta_45_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3892 = vlSelf->DCache__DOT__meta__DOT__meta_45_3_coh;
    } else if ((0x2cU == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3124 = vlSelf->DCache__DOT__meta__DOT__meta_44_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3380 = vlSelf->DCache__DOT__meta__DOT__meta_44_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3636 = vlSelf->DCache__DOT__meta__DOT__meta_44_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3892 = vlSelf->DCache__DOT__meta__DOT__meta_44_3_coh;
    } else if ((0x2bU == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3124 = vlSelf->DCache__DOT__meta__DOT__meta_43_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3380 = vlSelf->DCache__DOT__meta__DOT__meta_43_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3636 = vlSelf->DCache__DOT__meta__DOT__meta_43_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3892 = vlSelf->DCache__DOT__meta__DOT__meta_43_3_coh;
    } else if ((0x2aU == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3124 = vlSelf->DCache__DOT__meta__DOT__meta_42_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3380 = vlSelf->DCache__DOT__meta__DOT__meta_42_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3636 = vlSelf->DCache__DOT__meta__DOT__meta_42_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3892 = vlSelf->DCache__DOT__meta__DOT__meta_42_3_coh;
    } else if ((0x29U == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3124 = vlSelf->DCache__DOT__meta__DOT__meta_41_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3380 = vlSelf->DCache__DOT__meta__DOT__meta_41_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3636 = vlSelf->DCache__DOT__meta__DOT__meta_41_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3892 = vlSelf->DCache__DOT__meta__DOT__meta_41_3_coh;
    } else if ((0x28U == (0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_3124 = vlSelf->DCache__DOT__meta__DOT__meta_40_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3380 = vlSelf->DCache__DOT__meta__DOT__meta_40_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3636 = vlSelf->DCache__DOT__meta__DOT__meta_40_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_3892 = vlSelf->DCache__DOT__meta__DOT__meta_40_3_coh;
    } else {
        vlSelf->DCache__DOT__meta__DOT___GEN_3124 = DCache__DOT__meta__DOT___GEN_3111;
        vlSelf->DCache__DOT__meta__DOT___GEN_3380 = DCache__DOT__meta__DOT___GEN_3367;
        vlSelf->DCache__DOT__meta__DOT___GEN_3636 = DCache__DOT__meta__DOT___GEN_3623;
        vlSelf->DCache__DOT__meta__DOT___GEN_3892 = DCache__DOT__meta__DOT___GEN_3879;
    }
    if ((0x34U == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                    >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4160 = vlSelf->DCache__DOT__meta__DOT__meta_52_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4416 = vlSelf->DCache__DOT__meta__DOT__meta_52_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4672 = vlSelf->DCache__DOT__meta__DOT__meta_52_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4928 = vlSelf->DCache__DOT__meta__DOT__meta_52_3_coh;
    } else if ((0x33U == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4160 = vlSelf->DCache__DOT__meta__DOT__meta_51_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4416 = vlSelf->DCache__DOT__meta__DOT__meta_51_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4672 = vlSelf->DCache__DOT__meta__DOT__meta_51_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4928 = vlSelf->DCache__DOT__meta__DOT__meta_51_3_coh;
    } else if ((0x32U == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4160 = vlSelf->DCache__DOT__meta__DOT__meta_50_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4416 = vlSelf->DCache__DOT__meta__DOT__meta_50_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4672 = vlSelf->DCache__DOT__meta__DOT__meta_50_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4928 = vlSelf->DCache__DOT__meta__DOT__meta_50_3_coh;
    } else if ((0x31U == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4160 = vlSelf->DCache__DOT__meta__DOT__meta_49_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4416 = vlSelf->DCache__DOT__meta__DOT__meta_49_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4672 = vlSelf->DCache__DOT__meta__DOT__meta_49_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4928 = vlSelf->DCache__DOT__meta__DOT__meta_49_3_coh;
    } else if ((0x30U == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4160 = vlSelf->DCache__DOT__meta__DOT__meta_48_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4416 = vlSelf->DCache__DOT__meta__DOT__meta_48_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4672 = vlSelf->DCache__DOT__meta__DOT__meta_48_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4928 = vlSelf->DCache__DOT__meta__DOT__meta_48_3_coh;
    } else if ((0x2fU == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4160 = vlSelf->DCache__DOT__meta__DOT__meta_47_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4416 = vlSelf->DCache__DOT__meta__DOT__meta_47_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4672 = vlSelf->DCache__DOT__meta__DOT__meta_47_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4928 = vlSelf->DCache__DOT__meta__DOT__meta_47_3_coh;
    } else if ((0x2eU == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4160 = vlSelf->DCache__DOT__meta__DOT__meta_46_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4416 = vlSelf->DCache__DOT__meta__DOT__meta_46_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4672 = vlSelf->DCache__DOT__meta__DOT__meta_46_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4928 = vlSelf->DCache__DOT__meta__DOT__meta_46_3_coh;
    } else if ((0x2dU == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4160 = vlSelf->DCache__DOT__meta__DOT__meta_45_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4416 = vlSelf->DCache__DOT__meta__DOT__meta_45_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4672 = vlSelf->DCache__DOT__meta__DOT__meta_45_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4928 = vlSelf->DCache__DOT__meta__DOT__meta_45_3_coh;
    } else if ((0x2cU == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4160 = vlSelf->DCache__DOT__meta__DOT__meta_44_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4416 = vlSelf->DCache__DOT__meta__DOT__meta_44_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4672 = vlSelf->DCache__DOT__meta__DOT__meta_44_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4928 = vlSelf->DCache__DOT__meta__DOT__meta_44_3_coh;
    } else if ((0x2bU == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4160 = vlSelf->DCache__DOT__meta__DOT__meta_43_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4416 = vlSelf->DCache__DOT__meta__DOT__meta_43_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4672 = vlSelf->DCache__DOT__meta__DOT__meta_43_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4928 = vlSelf->DCache__DOT__meta__DOT__meta_43_3_coh;
    } else if ((0x2aU == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4160 = vlSelf->DCache__DOT__meta__DOT__meta_42_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4416 = vlSelf->DCache__DOT__meta__DOT__meta_42_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4672 = vlSelf->DCache__DOT__meta__DOT__meta_42_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4928 = vlSelf->DCache__DOT__meta__DOT__meta_42_3_coh;
    } else if ((0x29U == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4160 = vlSelf->DCache__DOT__meta__DOT__meta_41_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4416 = vlSelf->DCache__DOT__meta__DOT__meta_41_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4672 = vlSelf->DCache__DOT__meta__DOT__meta_41_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4928 = vlSelf->DCache__DOT__meta__DOT__meta_41_3_coh;
    } else if ((0x28U == (0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                           >> 6U))))) {
        vlSelf->DCache__DOT__meta__DOT___GEN_4160 = vlSelf->DCache__DOT__meta__DOT__meta_40_0_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4416 = vlSelf->DCache__DOT__meta__DOT__meta_40_1_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4672 = vlSelf->DCache__DOT__meta__DOT__meta_40_2_coh;
        vlSelf->DCache__DOT__meta__DOT___GEN_4928 = vlSelf->DCache__DOT__meta__DOT__meta_40_3_coh;
    } else {
        vlSelf->DCache__DOT__meta__DOT___GEN_4160 = DCache__DOT__meta__DOT___GEN_4147;
        vlSelf->DCache__DOT__meta__DOT___GEN_4416 = DCache__DOT__meta__DOT___GEN_4403;
        vlSelf->DCache__DOT__meta__DOT___GEN_4672 = DCache__DOT__meta__DOT___GEN_4659;
        vlSelf->DCache__DOT__meta__DOT___GEN_4928 = DCache__DOT__meta__DOT___GEN_4915;
    }
    vlSelf->DCache__DOT__loads_0__DOT__s1_hit = ((0U 
                                                  != (IData)(vlSelf->DCache__DOT__loads_0__DOT__s1_tag_way)) 
                                                 & ((3U 
                                                     != (IData)(vlSelf->DCache__DOT__loads_0__DOT__s1_req_cmd)) 
                                                    | ((2U 
                                                        == (IData)(vlSelf->DCache__DOT__loads_0__DOT__s1_meta_coh)) 
                                                       | (3U 
                                                          == (IData)(vlSelf->DCache__DOT__loads_0__DOT__s1_meta_coh)))));
    if (vlSelf->DCache__DOT__miss__DOT__cmoRsp) {
        vlSelf->DCache__DOT__miss__DOT___GEN_3687 = 3U;
        vlSelf->DCache__DOT__miss__DOT___GEN_3688 = 
            (0U != (IData)(vlSelf->io_l2_rxRsp_bits_respErr));
    } else {
        vlSelf->DCache__DOT__miss__DOT___GEN_3687 = vlSelf->DCache__DOT__miss__DOT__cmoState;
        vlSelf->DCache__DOT__miss__DOT___GEN_3688 = vlSelf->DCache__DOT__miss__DOT__cmoErr;
    }
    vlSelf->DCache__DOT__miss__DOT___T_57 = ((IData)(vlSelf->io_refillWakeup_ready) 
                                             & (IData)(vlSelf->io_refillWakeup_valid));
    vlSelf->io_refillWakeup_bits_alias = ((0xfU == (IData)(vlSelf->io_refillWakeup_bits_id))
                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_alias)
                                           : ((0xeU 
                                               == (IData)(vlSelf->io_refillWakeup_bits_id))
                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_alias)
                                               : ((0xdU 
                                                   == (IData)(vlSelf->io_refillWakeup_bits_id))
                                                   ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_alias)
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(vlSelf->io_refillWakeup_bits_id))
                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_alias)
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSelf->io_refillWakeup_bits_id))
                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_alias)
                                                     : 
                                                    ((0xaU 
                                                      == (IData)(vlSelf->io_refillWakeup_bits_id))
                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_alias)
                                                      : 
                                                     ((9U 
                                                       == (IData)(vlSelf->io_refillWakeup_bits_id))
                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_alias)
                                                       : 
                                                      ((8U 
                                                        == (IData)(vlSelf->io_refillWakeup_bits_id))
                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_alias)
                                                        : 
                                                       ((7U 
                                                         == (IData)(vlSelf->io_refillWakeup_bits_id))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_alias)
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelf->io_refillWakeup_bits_id))
                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_alias)
                                                          : 
                                                         ((5U 
                                                           == (IData)(vlSelf->io_refillWakeup_bits_id))
                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_alias)
                                                           : 
                                                          ((4U 
                                                            == (IData)(vlSelf->io_refillWakeup_bits_id))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_alias)
                                                            : 
                                                           ((3U 
                                                             == (IData)(vlSelf->io_refillWakeup_bits_id))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_alias)
                                                             : 
                                                            ((2U 
                                                              == (IData)(vlSelf->io_refillWakeup_bits_id))
                                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_alias)
                                                              : 
                                                             ((1U 
                                                               == (IData)(vlSelf->io_refillWakeup_bits_id))
                                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_alias)
                                                               : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_alias))))))))))))))));
    vlSelf->DCache__DOT__miss__DOT___T_60 = ((IData)(vlSelf->io_loadReplay_ready) 
                                             & (IData)(vlSelf->io_loadReplay_valid));
    vlSelf->io_loadReplay_bits_alias = ((0xfU == (IData)(vlSelf->io_loadReplay_bits_id))
                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_alias)
                                         : ((0xeU == (IData)(vlSelf->io_loadReplay_bits_id))
                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_alias)
                                             : ((0xdU 
                                                 == (IData)(vlSelf->io_loadReplay_bits_id))
                                                 ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_alias)
                                                 : 
                                                ((0xcU 
                                                  == (IData)(vlSelf->io_loadReplay_bits_id))
                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_alias)
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->io_loadReplay_bits_id))
                                                   ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_alias)
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->io_loadReplay_bits_id))
                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_alias)
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->io_loadReplay_bits_id))
                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_alias)
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->io_loadReplay_bits_id))
                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_alias)
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->io_loadReplay_bits_id))
                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_alias)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->io_loadReplay_bits_id))
                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_alias)
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->io_loadReplay_bits_id))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_alias)
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSelf->io_loadReplay_bits_id))
                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_alias)
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->io_loadReplay_bits_id))
                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_alias)
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->io_loadReplay_bits_id))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_alias)
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->io_loadReplay_bits_id))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_alias)
                                                             : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_alias))))))))))))))));
    vlSelf->DCache__DOT__miss__DOT___storeSel_T_196 
        = ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_59)
            ? 0x3bU : ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_60)
                        ? 0x3cU : ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_61)
                                    ? 0x3dU : ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_62)
                                                ? 0x3eU
                                                : ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_63)
                                                    ? 0x3fU
                                                    : 
                                                   ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_64)
                                                     ? 0x40U
                                                     : 
                                                    ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_65)
                                                      ? 0x41U
                                                      : 
                                                     ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_66)
                                                       ? 0x42U
                                                       : 
                                                      ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_67)
                                                        ? 0x43U
                                                        : 
                                                       ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_68)
                                                         ? 0x44U
                                                         : 
                                                        ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_69)
                                                          ? 0x45U
                                                          : 
                                                         ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_70)
                                                           ? 0x46U
                                                           : 
                                                          ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_71)
                                                            ? 0x47U
                                                            : 
                                                           ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_72)
                                                             ? 0x48U
                                                             : 
                                                            ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_73)
                                                              ? 0x49U
                                                              : 
                                                             ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_74)
                                                               ? 0x4aU
                                                               : 
                                                              ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_75)
                                                                ? 0x4bU
                                                                : 
                                                               ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_76)
                                                                 ? 0x4cU
                                                                 : 
                                                                ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_77)
                                                                  ? 0x4dU
                                                                  : 
                                                                 ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_78)
                                                                   ? 0x4eU
                                                                   : 
                                                                  ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_79)
                                                                    ? 0x4fU
                                                                    : 
                                                                   ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_80)
                                                                     ? 0x50U
                                                                     : 
                                                                    ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_81)
                                                                      ? 0x51U
                                                                      : 
                                                                     ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_82)
                                                                       ? 0x52U
                                                                       : 
                                                                      ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_83)
                                                                        ? 0x53U
                                                                        : 
                                                                       ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_84)
                                                                         ? 0x54U
                                                                         : 
                                                                        ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_85)
                                                                          ? 0x55U
                                                                          : 
                                                                         ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_86)
                                                                           ? 0x56U
                                                                           : 
                                                                          ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_87)
                                                                            ? 0x57U
                                                                            : 
                                                                           ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_88)
                                                                             ? 0x58U
                                                                             : 
                                                                            ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_89)
                                                                              ? 0x59U
                                                                              : 
                                                                             ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_90)
                                                                               ? 0x5aU
                                                                               : 
                                                                              ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_91)
                                                                                ? 0x5bU
                                                                                : 
                                                                               ((IData)(vlSelf->DCache__DOT__miss__DOT__storeHits_92)
                                                                                 ? 0x5cU
                                                                                 : (IData)(DCache__DOT__miss__DOT___storeSel_T_162)))))))))))))))))))))))))))))))))));
    vlSelf->DCache__DOT__miss__DOT___GEN_239 = ((0xfU 
                                                 == (IData)(vlSelf->DCache__DOT__miss__DOT__storeEnt))
                                                 ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_installed)
                                                 : 
                                                ((0xeU 
                                                  == (IData)(vlSelf->DCache__DOT__miss__DOT__storeEnt))
                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_installed)
                                                  : 
                                                 ((0xdU 
                                                   == (IData)(vlSelf->DCache__DOT__miss__DOT__storeEnt))
                                                   ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_installed)
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(vlSelf->DCache__DOT__miss__DOT__storeEnt))
                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_installed)
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSelf->DCache__DOT__miss__DOT__storeEnt))
                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_installed)
                                                     : 
                                                    ((0xaU 
                                                      == (IData)(vlSelf->DCache__DOT__miss__DOT__storeEnt))
                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_installed)
                                                      : 
                                                     ((9U 
                                                       == (IData)(vlSelf->DCache__DOT__miss__DOT__storeEnt))
                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_installed)
                                                       : 
                                                      ((8U 
                                                        == (IData)(vlSelf->DCache__DOT__miss__DOT__storeEnt))
                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_installed)
                                                        : 
                                                       ((7U 
                                                         == (IData)(vlSelf->DCache__DOT__miss__DOT__storeEnt))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_installed)
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelf->DCache__DOT__miss__DOT__storeEnt))
                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_installed)
                                                          : 
                                                         ((5U 
                                                           == (IData)(vlSelf->DCache__DOT__miss__DOT__storeEnt))
                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_installed)
                                                           : 
                                                          ((4U 
                                                            == (IData)(vlSelf->DCache__DOT__miss__DOT__storeEnt))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_installed)
                                                            : 
                                                           ((3U 
                                                             == (IData)(vlSelf->DCache__DOT__miss__DOT__storeEnt))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_installed)
                                                             : 
                                                            ((2U 
                                                              == (IData)(vlSelf->DCache__DOT__miss__DOT__storeEnt))
                                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_installed)
                                                              : 
                                                             ((1U 
                                                               == (IData)(vlSelf->DCache__DOT__miss__DOT__storeEnt))
                                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_installed)
                                                               : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_installed))))))))))))))));
    vlSelf->io_l2_req_bits_expCompData = ((0U != (IData)(vlSelf->DCache__DOT__miss__DOT___txValid_T)) 
                                          & ((4U == (IData)(vlSelf->DCache__DOT__miss__DOT__missFlit_opcode)) 
                                             | (0x10U 
                                                == (IData)(vlSelf->DCache__DOT__miss__DOT__missFlit_opcode))));
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
    vlSelf->DCache__DOT__loads_1__DOT___T_65 = ((IData)(vlSelf->io_load_1_resp_valid) 
                                                & (IData)(vlSelf->io_load_1_resp_bits_replacementUpdated));
    vlSelf->io_load_1_s2_hit = ((IData)(vlSelf->DCache__DOT__loads_1__DOT__s2_valid) 
                                & (IData)(vlSelf->io_load_1_resp_bits_replacementUpdated));
    vlSelf->DCache__DOT__loads_1_io_replace_access_valid 
        = ((IData)(vlSelf->DCache__DOT__loads_1__DOT___io_replace_access_valid_T) 
           & (IData)(vlSelf->io_load_1_resp_bits_replacementUpdated));
    vlSelf->DCache__DOT__wb__DOT__evtWant_17 = ((IData)(DCache__DOT__wb__DOT___evtWant_T_155) 
                                                & (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_160));
    vlSelf->DCache__DOT__wb__DOT__rspWant_17 = ((IData)(DCache__DOT__wb__DOT___evtWant_T_155) 
                                                & (3U 
                                                   == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_opcode)));
    vlSelf->DCache__DOT__wb__DOT__evtWant_16 = ((IData)(DCache__DOT__wb__DOT___evtWant_T_146) 
                                                & (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_151));
    vlSelf->DCache__DOT__wb__DOT__rspWant_16 = ((IData)(DCache__DOT__wb__DOT___evtWant_T_146) 
                                                & (3U 
                                                   == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_opcode)));
    vlSelf->DCache__DOT__wb__DOT__evtWant_15 = ((IData)(DCache__DOT__wb__DOT___evtWant_T_137) 
                                                & (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_142));
    vlSelf->DCache__DOT__wb__DOT__rspWant_15 = ((IData)(DCache__DOT__wb__DOT___evtWant_T_137) 
                                                & (3U 
                                                   == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_opcode)));
    vlSelf->DCache__DOT__wb__DOT__evtWant_12 = ((IData)(DCache__DOT__wb__DOT___evtWant_T_110) 
                                                & (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_115));
    vlSelf->DCache__DOT__wb__DOT__rspWant_12 = ((IData)(DCache__DOT__wb__DOT___evtWant_T_110) 
                                                & (3U 
                                                   == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_opcode)));
    vlSelf->DCache__DOT__wb__DOT__evtWant_11 = ((IData)(DCache__DOT__wb__DOT___evtWant_T_101) 
                                                & (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_106));
    vlSelf->DCache__DOT__wb__DOT__rspWant_11 = ((IData)(DCache__DOT__wb__DOT___evtWant_T_101) 
                                                & (3U 
                                                   == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_opcode)));
    vlSelf->DCache__DOT__wb__DOT__evtWant_13 = ((IData)(DCache__DOT__wb__DOT___evtWant_T_119) 
                                                & (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_124));
    vlSelf->DCache__DOT__wb__DOT__rspWant_13 = ((IData)(DCache__DOT__wb__DOT___evtWant_T_119) 
                                                & (3U 
                                                   == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_opcode)));
    vlSelf->DCache__DOT__wb__DOT__evtWant_14 = ((IData)(DCache__DOT__wb__DOT___evtWant_T_128) 
                                                & (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_133));
    vlSelf->DCache__DOT__wb__DOT__rspWant_14 = ((IData)(DCache__DOT__wb__DOT___evtWant_T_128) 
                                                & (3U 
                                                   == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_opcode)));
    vlSelf->DCache__DOT__wb__DOT__evtWant_9 = ((IData)(DCache__DOT__wb__DOT___evtWant_T_83) 
                                               & (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_88));
    vlSelf->DCache__DOT__wb__DOT__rspWant_9 = ((IData)(DCache__DOT__wb__DOT___evtWant_T_83) 
                                               & (3U 
                                                  == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_opcode)));
    vlSelf->DCache__DOT__wb__DOT__evtWant_10 = ((IData)(DCache__DOT__wb__DOT___evtWant_T_92) 
                                                & (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_97));
    vlSelf->DCache__DOT__wb__DOT__rspWant_10 = ((IData)(DCache__DOT__wb__DOT___evtWant_T_92) 
                                                & (3U 
                                                   == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_opcode)));
    vlSelf->DCache__DOT__wb__DOT__evtWant_8 = ((IData)(DCache__DOT__wb__DOT___evtWant_T_74) 
                                               & (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_79));
    vlSelf->DCache__DOT__wb__DOT__rspWant_8 = ((IData)(DCache__DOT__wb__DOT___evtWant_T_74) 
                                               & (3U 
                                                  == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_opcode)));
    vlSelf->DCache__DOT__wb__DOT__evtWant_6 = ((IData)(DCache__DOT__wb__DOT___evtWant_T_56) 
                                               & (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_61));
    vlSelf->DCache__DOT__wb__DOT__rspWant_6 = ((IData)(DCache__DOT__wb__DOT___evtWant_T_56) 
                                               & (3U 
                                                  == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_opcode)));
    vlSelf->DCache__DOT__wb__DOT__evtWant_5 = ((IData)(DCache__DOT__wb__DOT___evtWant_T_47) 
                                               & (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_52));
    vlSelf->DCache__DOT__wb__DOT__rspWant_5 = ((IData)(DCache__DOT__wb__DOT___evtWant_T_47) 
                                               & (3U 
                                                  == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_opcode)));
    vlSelf->DCache__DOT__wb__DOT__evtWant_4 = ((IData)(DCache__DOT__wb__DOT___evtWant_T_38) 
                                               & (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_43));
    vlSelf->DCache__DOT__wb__DOT__rspWant_4 = ((IData)(DCache__DOT__wb__DOT___evtWant_T_38) 
                                               & (3U 
                                                  == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_opcode)));
    vlSelf->DCache__DOT__wb__DOT__evtWant_0 = ((IData)(DCache__DOT__wb__DOT___evtWant_T_2) 
                                               & (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_7));
    vlSelf->DCache__DOT__wb__DOT__rspWant_0 = ((IData)(DCache__DOT__wb__DOT___evtWant_T_2) 
                                               & (3U 
                                                  == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_opcode)));
    vlSelf->DCache__DOT__wb__DOT__evtWant_7 = ((IData)(DCache__DOT__wb__DOT___evtWant_T_65) 
                                               & (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_70));
    vlSelf->DCache__DOT__wb__DOT__rspWant_7 = ((IData)(DCache__DOT__wb__DOT___evtWant_T_65) 
                                               & (3U 
                                                  == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_opcode)));
    vlSelf->DCache__DOT__wb__DOT__evtWant_1 = ((IData)(DCache__DOT__wb__DOT___evtWant_T_11) 
                                               & (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_16));
    vlSelf->DCache__DOT__wb__DOT__rspWant_1 = ((IData)(DCache__DOT__wb__DOT___evtWant_T_11) 
                                               & (3U 
                                                  == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_opcode)));
    vlSelf->DCache__DOT__wb__DOT__evtWant_2 = ((IData)(DCache__DOT__wb__DOT___evtWant_T_20) 
                                               & (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_25));
    vlSelf->DCache__DOT__wb__DOT__rspWant_2 = ((IData)(DCache__DOT__wb__DOT___evtWant_T_20) 
                                               & (3U 
                                                  == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_opcode)));
    vlSelf->DCache__DOT__wb__DOT__evtWant_3 = ((IData)(DCache__DOT__wb__DOT___evtWant_T_29) 
                                               & (IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_34));
    vlSelf->DCache__DOT__wb__DOT__rspWant_3 = ((IData)(DCache__DOT__wb__DOT___evtWant_T_29) 
                                               & (3U 
                                                  == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_opcode)));
    vlSelf->io_l2_txDat_valid = ((IData)(vlSelf->DCache__DOT__wb__DOT__datHeld) 
                                 | ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__datHold)) 
                                    & (((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_153) 
                                        & ((3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_state)) 
                                           & ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_dataSent)) 
                                              & (2U 
                                                 == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_beatsLeft))))) 
                                       | ((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_16) 
                                          | ((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_15) 
                                             | ((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_14) 
                                                | ((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_13) 
                                                   | ((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_12) 
                                                      | ((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_11) 
                                                         | ((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_10) 
                                                            | ((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_9) 
                                                               | ((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_8) 
                                                                  | ((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_7) 
                                                                     | ((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_6) 
                                                                        | ((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_5) 
                                                                           | ((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_4) 
                                                                              | ((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_3) 
                                                                                | ((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_2) 
                                                                                | ((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_1) 
                                                                                | (IData)(vlSelf->DCache__DOT__wb__DOT__datStart_0))))))))))))))))))));
    vlSelf->DCache__DOT__wb__DOT___datIdx_T_35 = ((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_0)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_1)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_2)
                                                     ? 2U
                                                     : 
                                                    ((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_3)
                                                      ? 3U
                                                      : 
                                                     ((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_4)
                                                       ? 4U
                                                       : 
                                                      ((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_5)
                                                        ? 5U
                                                        : 
                                                       ((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_6)
                                                         ? 6U
                                                         : 
                                                        ((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_7)
                                                          ? 7U
                                                          : 
                                                         ((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_8)
                                                           ? 8U
                                                           : 
                                                          ((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_9)
                                                            ? 9U
                                                            : 
                                                           ((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_10)
                                                             ? 0xaU
                                                             : 
                                                            ((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_11)
                                                              ? 0xbU
                                                              : 
                                                             ((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_12)
                                                               ? 0xcU
                                                               : 
                                                              ((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_13)
                                                                ? 0xdU
                                                                : 
                                                               ((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_14)
                                                                 ? 0xeU
                                                                 : 
                                                                ((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_15)
                                                                  ? 0xfU
                                                                  : 
                                                                 ((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_16)
                                                                   ? 0x10U
                                                                   : 0x11U)))))))))))))))));
    vlSelf->DCache__DOT__loads_1_io_wbq_block_miss_req 
        = ((IData)(vlSelf->DCache__DOT__loads_1_io_wbq_conflict_check_valid) 
           & (IData)(vlSelf->DCache__DOT__wb__DOT___io_block_1_T_88));
    vlSelf->DCache__DOT__pipe__DOT__plru__DOT___GEN_321 
        = ((0x41U == (0xffU & (IData)((vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                       >> 6U)))) ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_65)
            : ((0x40U == (0xffU & (IData)((vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                           >> 6U))))
                ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_64)
                : ((0x3fU == (0xffU & (IData)((vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                               >> 6U))))
                    ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_63)
                    : ((0x3eU == (0xffU & (IData)((vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                   >> 6U))))
                        ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_62)
                        : ((0x3dU == (0xffU & (IData)(
                                                      (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                       >> 6U))))
                            ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_61)
                            : ((0x3cU == (0xffU & (IData)(
                                                          (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                           >> 6U))))
                                ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_60)
                                : ((0x3bU == (0xffU 
                                              & (IData)(
                                                        (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                         >> 6U))))
                                    ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_59)
                                    : ((0x3aU == (0xffU 
                                                  & (IData)(
                                                            (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                             >> 6U))))
                                        ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_58)
                                        : ((0x39U == 
                                            (0xffU 
                                             & (IData)(
                                                       (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                        >> 6U))))
                                            ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_57)
                                            : ((0x38U 
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                            >> 6U))))
                                                ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_56)
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(
                                                               (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                                >> 6U))))
                                                    ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_55)
                                                    : 
                                                   ((0x36U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                                 >> 6U))))
                                                     ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_54)
                                                     : 
                                                    ((0x35U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(
                                                                 (vlSelf->DCache__DOT__loads_0__DOT__s2_req_vaddr 
                                                                  >> 6U))))
                                                      ? (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_53)
                                                      : (IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT___GEN_308))))))))))))));
    vlSelf->DCache__DOT__loads_0__DOT___T_65 = ((IData)(vlSelf->io_load_0_resp_valid) 
                                                & (IData)(vlSelf->io_load_0_resp_bits_replacementUpdated));
    vlSelf->io_load_0_s2_hit = ((IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_valid) 
                                & (IData)(vlSelf->io_load_0_resp_bits_replacementUpdated));
    vlSelf->DCache__DOT__loads_0_io_replace_access_valid 
        = ((IData)(vlSelf->DCache__DOT__loads_0__DOT___io_replace_access_valid_T) 
           & (IData)(vlSelf->io_load_0_resp_bits_replacementUpdated));
    vlSelf->DCache__DOT__loads_0_io_wbq_block_miss_req 
        = ((IData)(vlSelf->DCache__DOT__loads_0_io_wbq_conflict_check_valid) 
           & (IData)(vlSelf->DCache__DOT__wb__DOT___io_block_0_T_88));
    if (vlSelf->DCache__DOT__miss__DOT__entries_15_dbidValid) {
        vlSelf->DCache__DOT__miss__DOT___GEN_3430 = vlSelf->DCache__DOT__miss__DOT__entries_15_dbid;
        vlSelf->DCache__DOT__miss__DOT___GEN_3431 = vlSelf->DCache__DOT__miss__DOT__entries_15_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_3432 = vlSelf->DCache__DOT__miss__DOT__entries_15_respErr;
    } else {
        vlSelf->DCache__DOT__miss__DOT___GEN_3430 = vlSelf->io_l2_rxRsp_bits_dbID;
        vlSelf->DCache__DOT__miss__DOT___GEN_3431 = vlSelf->io_l2_rxRsp_bits_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_3432 = vlSelf->io_l2_rxRsp_bits_respErr;
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
    vlSelf->DCache__DOT__miss__DOT__ackWant_14 = ((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_14_valid) 
                                                  & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_compackDone)) 
                                                     & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_dbidValid)));
    if (vlSelf->DCache__DOT__miss__DOT__entries_13_dbidValid) {
        vlSelf->DCache__DOT__miss__DOT___GEN_3032 = vlSelf->DCache__DOT__miss__DOT__entries_13_dbid;
        vlSelf->DCache__DOT__miss__DOT___GEN_3033 = vlSelf->DCache__DOT__miss__DOT__entries_13_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_3034 = vlSelf->DCache__DOT__miss__DOT__entries_13_respErr;
    } else {
        vlSelf->DCache__DOT__miss__DOT___GEN_3032 = vlSelf->io_l2_rxRsp_bits_dbID;
        vlSelf->DCache__DOT__miss__DOT___GEN_3033 = vlSelf->io_l2_rxRsp_bits_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_3034 = vlSelf->io_l2_rxRsp_bits_respErr;
    }
    vlSelf->DCache__DOT__miss__DOT__ackWant_13 = ((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_13_valid) 
                                                  & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_compackDone)) 
                                                     & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_dbidValid)));
    if (vlSelf->DCache__DOT__miss__DOT__entries_12_dbidValid) {
        vlSelf->DCache__DOT__miss__DOT___GEN_2833 = vlSelf->DCache__DOT__miss__DOT__entries_12_dbid;
        vlSelf->DCache__DOT__miss__DOT___GEN_2834 = vlSelf->DCache__DOT__miss__DOT__entries_12_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_2835 = vlSelf->DCache__DOT__miss__DOT__entries_12_respErr;
    } else {
        vlSelf->DCache__DOT__miss__DOT___GEN_2833 = vlSelf->io_l2_rxRsp_bits_dbID;
        vlSelf->DCache__DOT__miss__DOT___GEN_2834 = vlSelf->io_l2_rxRsp_bits_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_2835 = vlSelf->io_l2_rxRsp_bits_respErr;
    }
    vlSelf->DCache__DOT__miss__DOT__ackWant_12 = ((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_12_valid) 
                                                  & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_compackDone)) 
                                                     & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_dbidValid)));
    if (vlSelf->DCache__DOT__miss__DOT__entries_11_dbidValid) {
        vlSelf->DCache__DOT__miss__DOT___GEN_2634 = vlSelf->DCache__DOT__miss__DOT__entries_11_dbid;
        vlSelf->DCache__DOT__miss__DOT___GEN_2635 = vlSelf->DCache__DOT__miss__DOT__entries_11_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_2636 = vlSelf->DCache__DOT__miss__DOT__entries_11_respErr;
    } else {
        vlSelf->DCache__DOT__miss__DOT___GEN_2634 = vlSelf->io_l2_rxRsp_bits_dbID;
        vlSelf->DCache__DOT__miss__DOT___GEN_2635 = vlSelf->io_l2_rxRsp_bits_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_2636 = vlSelf->io_l2_rxRsp_bits_respErr;
    }
    vlSelf->DCache__DOT__miss__DOT__ackWant_11 = ((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_11_valid) 
                                                  & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_compackDone)) 
                                                     & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_dbidValid)));
    if (vlSelf->DCache__DOT__miss__DOT__entries_10_dbidValid) {
        vlSelf->DCache__DOT__miss__DOT___GEN_2435 = vlSelf->DCache__DOT__miss__DOT__entries_10_dbid;
        vlSelf->DCache__DOT__miss__DOT___GEN_2436 = vlSelf->DCache__DOT__miss__DOT__entries_10_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_2437 = vlSelf->DCache__DOT__miss__DOT__entries_10_respErr;
    } else {
        vlSelf->DCache__DOT__miss__DOT___GEN_2435 = vlSelf->io_l2_rxRsp_bits_dbID;
        vlSelf->DCache__DOT__miss__DOT___GEN_2436 = vlSelf->io_l2_rxRsp_bits_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_2437 = vlSelf->io_l2_rxRsp_bits_respErr;
    }
    vlSelf->DCache__DOT__miss__DOT__ackWant_10 = ((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_10_valid) 
                                                  & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_compackDone)) 
                                                     & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_dbidValid)));
    if (vlSelf->DCache__DOT__miss__DOT__entries_9_dbidValid) {
        vlSelf->DCache__DOT__miss__DOT___GEN_2236 = vlSelf->DCache__DOT__miss__DOT__entries_9_dbid;
        vlSelf->DCache__DOT__miss__DOT___GEN_2237 = vlSelf->DCache__DOT__miss__DOT__entries_9_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_2238 = vlSelf->DCache__DOT__miss__DOT__entries_9_respErr;
    } else {
        vlSelf->DCache__DOT__miss__DOT___GEN_2236 = vlSelf->io_l2_rxRsp_bits_dbID;
        vlSelf->DCache__DOT__miss__DOT___GEN_2237 = vlSelf->io_l2_rxRsp_bits_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_2238 = vlSelf->io_l2_rxRsp_bits_respErr;
    }
    vlSelf->DCache__DOT__miss__DOT__ackWant_9 = ((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_9_valid) 
                                                 & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_compackDone)) 
                                                    & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_dbidValid)));
    if (vlSelf->DCache__DOT__miss__DOT__entries_8_dbidValid) {
        vlSelf->DCache__DOT__miss__DOT___GEN_2037 = vlSelf->DCache__DOT__miss__DOT__entries_8_dbid;
        vlSelf->DCache__DOT__miss__DOT___GEN_2038 = vlSelf->DCache__DOT__miss__DOT__entries_8_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_2039 = vlSelf->DCache__DOT__miss__DOT__entries_8_respErr;
    } else {
        vlSelf->DCache__DOT__miss__DOT___GEN_2037 = vlSelf->io_l2_rxRsp_bits_dbID;
        vlSelf->DCache__DOT__miss__DOT___GEN_2038 = vlSelf->io_l2_rxRsp_bits_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_2039 = vlSelf->io_l2_rxRsp_bits_respErr;
    }
    vlSelf->DCache__DOT__miss__DOT__ackWant_8 = ((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_8_valid) 
                                                 & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_compackDone)) 
                                                    & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_dbidValid)));
    if (vlSelf->DCache__DOT__miss__DOT__entries_7_dbidValid) {
        vlSelf->DCache__DOT__miss__DOT___GEN_1838 = vlSelf->DCache__DOT__miss__DOT__entries_7_dbid;
        vlSelf->DCache__DOT__miss__DOT___GEN_1839 = vlSelf->DCache__DOT__miss__DOT__entries_7_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_1840 = vlSelf->DCache__DOT__miss__DOT__entries_7_respErr;
    } else {
        vlSelf->DCache__DOT__miss__DOT___GEN_1838 = vlSelf->io_l2_rxRsp_bits_dbID;
        vlSelf->DCache__DOT__miss__DOT___GEN_1839 = vlSelf->io_l2_rxRsp_bits_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_1840 = vlSelf->io_l2_rxRsp_bits_respErr;
    }
    vlSelf->DCache__DOT__miss__DOT__ackWant_7 = ((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_7_valid) 
                                                 & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_compackDone)) 
                                                    & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_dbidValid)));
    if (vlSelf->DCache__DOT__miss__DOT__entries_6_dbidValid) {
        vlSelf->DCache__DOT__miss__DOT___GEN_1639 = vlSelf->DCache__DOT__miss__DOT__entries_6_dbid;
        vlSelf->DCache__DOT__miss__DOT___GEN_1640 = vlSelf->DCache__DOT__miss__DOT__entries_6_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_1641 = vlSelf->DCache__DOT__miss__DOT__entries_6_respErr;
    } else {
        vlSelf->DCache__DOT__miss__DOT___GEN_1639 = vlSelf->io_l2_rxRsp_bits_dbID;
        vlSelf->DCache__DOT__miss__DOT___GEN_1640 = vlSelf->io_l2_rxRsp_bits_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_1641 = vlSelf->io_l2_rxRsp_bits_respErr;
    }
    vlSelf->DCache__DOT__miss__DOT__ackWant_6 = ((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_6_valid) 
                                                 & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_compackDone)) 
                                                    & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_dbidValid)));
    if (vlSelf->DCache__DOT__miss__DOT__entries_5_dbidValid) {
        vlSelf->DCache__DOT__miss__DOT___GEN_1440 = vlSelf->DCache__DOT__miss__DOT__entries_5_dbid;
        vlSelf->DCache__DOT__miss__DOT___GEN_1441 = vlSelf->DCache__DOT__miss__DOT__entries_5_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_1442 = vlSelf->DCache__DOT__miss__DOT__entries_5_respErr;
    } else {
        vlSelf->DCache__DOT__miss__DOT___GEN_1440 = vlSelf->io_l2_rxRsp_bits_dbID;
        vlSelf->DCache__DOT__miss__DOT___GEN_1441 = vlSelf->io_l2_rxRsp_bits_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_1442 = vlSelf->io_l2_rxRsp_bits_respErr;
    }
    vlSelf->DCache__DOT__miss__DOT__ackWant_5 = ((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_5_valid) 
                                                 & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_compackDone)) 
                                                    & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_dbidValid)));
    if (vlSelf->DCache__DOT__miss__DOT__entries_4_dbidValid) {
        vlSelf->DCache__DOT__miss__DOT___GEN_1241 = vlSelf->DCache__DOT__miss__DOT__entries_4_dbid;
        vlSelf->DCache__DOT__miss__DOT___GEN_1242 = vlSelf->DCache__DOT__miss__DOT__entries_4_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_1243 = vlSelf->DCache__DOT__miss__DOT__entries_4_respErr;
    } else {
        vlSelf->DCache__DOT__miss__DOT___GEN_1241 = vlSelf->io_l2_rxRsp_bits_dbID;
        vlSelf->DCache__DOT__miss__DOT___GEN_1242 = vlSelf->io_l2_rxRsp_bits_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_1243 = vlSelf->io_l2_rxRsp_bits_respErr;
    }
    vlSelf->DCache__DOT__miss__DOT__ackWant_4 = ((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_4_valid) 
                                                 & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_compackDone)) 
                                                    & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_dbidValid)));
    if (vlSelf->DCache__DOT__miss__DOT__entries_3_dbidValid) {
        vlSelf->DCache__DOT__miss__DOT___GEN_1042 = vlSelf->DCache__DOT__miss__DOT__entries_3_dbid;
        vlSelf->DCache__DOT__miss__DOT___GEN_1043 = vlSelf->DCache__DOT__miss__DOT__entries_3_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_1044 = vlSelf->DCache__DOT__miss__DOT__entries_3_respErr;
    } else {
        vlSelf->DCache__DOT__miss__DOT___GEN_1042 = vlSelf->io_l2_rxRsp_bits_dbID;
        vlSelf->DCache__DOT__miss__DOT___GEN_1043 = vlSelf->io_l2_rxRsp_bits_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_1044 = vlSelf->io_l2_rxRsp_bits_respErr;
    }
    vlSelf->DCache__DOT__miss__DOT__ackWant_3 = ((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_3_valid) 
                                                 & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_compackDone)) 
                                                    & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_dbidValid)));
    if (vlSelf->DCache__DOT__miss__DOT__entries_2_dbidValid) {
        vlSelf->DCache__DOT__miss__DOT___GEN_843 = vlSelf->DCache__DOT__miss__DOT__entries_2_dbid;
        vlSelf->DCache__DOT__miss__DOT___GEN_844 = vlSelf->DCache__DOT__miss__DOT__entries_2_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_845 = vlSelf->DCache__DOT__miss__DOT__entries_2_respErr;
    } else {
        vlSelf->DCache__DOT__miss__DOT___GEN_843 = vlSelf->io_l2_rxRsp_bits_dbID;
        vlSelf->DCache__DOT__miss__DOT___GEN_844 = vlSelf->io_l2_rxRsp_bits_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_845 = vlSelf->io_l2_rxRsp_bits_respErr;
    }
    vlSelf->DCache__DOT__miss__DOT__ackWant_2 = ((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_2_valid) 
                                                 & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_compackDone)) 
                                                    & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_dbidValid)));
    if (vlSelf->DCache__DOT__miss__DOT__entries_1_dbidValid) {
        vlSelf->DCache__DOT__miss__DOT___GEN_644 = vlSelf->DCache__DOT__miss__DOT__entries_1_dbid;
        vlSelf->DCache__DOT__miss__DOT___GEN_645 = vlSelf->DCache__DOT__miss__DOT__entries_1_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_646 = vlSelf->DCache__DOT__miss__DOT__entries_1_respErr;
    } else {
        vlSelf->DCache__DOT__miss__DOT___GEN_644 = vlSelf->io_l2_rxRsp_bits_dbID;
        vlSelf->DCache__DOT__miss__DOT___GEN_645 = vlSelf->io_l2_rxRsp_bits_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_646 = vlSelf->io_l2_rxRsp_bits_respErr;
    }
    vlSelf->DCache__DOT__miss__DOT__ackWant_1 = ((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_1_valid) 
                                                 & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_compackDone)) 
                                                    & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_dbidValid)));
    if (vlSelf->DCache__DOT__miss__DOT__entries_0_dbidValid) {
        vlSelf->DCache__DOT__miss__DOT___GEN_445 = vlSelf->DCache__DOT__miss__DOT__entries_0_dbid;
        vlSelf->DCache__DOT__miss__DOT___GEN_446 = vlSelf->DCache__DOT__miss__DOT__entries_0_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_447 = vlSelf->DCache__DOT__miss__DOT__entries_0_respErr;
    } else {
        vlSelf->DCache__DOT__miss__DOT___GEN_445 = vlSelf->io_l2_rxRsp_bits_dbID;
        vlSelf->DCache__DOT__miss__DOT___GEN_446 = vlSelf->io_l2_rxRsp_bits_resp;
        vlSelf->DCache__DOT__miss__DOT___GEN_447 = vlSelf->io_l2_rxRsp_bits_respErr;
    }
    vlSelf->DCache__DOT__miss__DOT__ackWant_0 = ((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_0_valid) 
                                                 & ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_compackDone)) 
                                                    & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_dbidValid)));
    __Vtemp_147[2U] = ((((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[2U] 
                              << 8U) | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[2U] 
                                        >> 0x18U)) : 
                         ((vlSelf->io_l2_rxDat_bits_data[2U] 
                           << 8U) | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                     >> 0x18U))) << 0x18U) 
                       | ((0xff0000U & (((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[2U] 
                                              << 0x10U) 
                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[2U] 
                                                >> 0x10U))
                                          : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                              << 0x10U) 
                                             | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                >> 0x10U))) 
                                        << 0x10U)) 
                          | ((0xff00U & (((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[2U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[2U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 8U))) 
                                         << 8U)) | 
                             (0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                        ? vlSelf->DCache__DOT__miss__DOT__storeHalf_15[2U]
                                        : vlSelf->io_l2_rxDat_bits_data[2U])))));
    __Vtemp_151[3U] = ((((0x8000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[3U] 
                              << 8U) | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[3U] 
                                        >> 0x18U)) : 
                         ((vlSelf->io_l2_rxDat_bits_data[3U] 
                           << 8U) | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                     >> 0x18U))) << 0x18U) 
                       | ((0xff0000U & (((0x4000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[3U] 
                                              << 0x10U) 
                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[3U] 
                                                >> 0x10U))
                                          : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                              << 0x10U) 
                                             | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                >> 0x10U))) 
                                        << 0x10U)) 
                          | ((0xff00U & (((0x2000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[3U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[3U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 8U))) 
                                         << 8U)) | 
                             (0xffU & ((0x1000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                        ? vlSelf->DCache__DOT__miss__DOT__storeHalf_15[3U]
                                        : vlSelf->io_l2_rxDat_bits_data[3U])))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_15[0U] 
        = (IData)(vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_15);
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_15[1U] 
        = (IData)((vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_15 
                   >> 0x20U));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_15[2U] 
        = __Vtemp_147[2U];
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_15[3U] 
        = __Vtemp_151[3U];
    __Vtemp_155[2U] = ((((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[2U] 
                              << 8U) | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[2U] 
                                        >> 0x18U)) : 
                         ((vlSelf->io_l2_rxDat_bits_data[2U] 
                           << 8U) | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                     >> 0x18U))) << 0x18U) 
                       | ((0xff0000U & (((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[2U] 
                                              << 0x10U) 
                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[2U] 
                                                >> 0x10U))
                                          : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                              << 0x10U) 
                                             | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                >> 0x10U))) 
                                        << 0x10U)) 
                          | ((0xff00U & (((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[2U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[2U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 8U))) 
                                         << 8U)) | 
                             (0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                        ? vlSelf->DCache__DOT__miss__DOT__storeHalf_14[2U]
                                        : vlSelf->io_l2_rxDat_bits_data[2U])))));
    __Vtemp_159[3U] = ((((0x8000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[3U] 
                              << 8U) | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[3U] 
                                        >> 0x18U)) : 
                         ((vlSelf->io_l2_rxDat_bits_data[3U] 
                           << 8U) | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                     >> 0x18U))) << 0x18U) 
                       | ((0xff0000U & (((0x4000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[3U] 
                                              << 0x10U) 
                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[3U] 
                                                >> 0x10U))
                                          : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                              << 0x10U) 
                                             | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                >> 0x10U))) 
                                        << 0x10U)) 
                          | ((0xff00U & (((0x2000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[3U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[3U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 8U))) 
                                         << 8U)) | 
                             (0xffU & ((0x1000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                        ? vlSelf->DCache__DOT__miss__DOT__storeHalf_14[3U]
                                        : vlSelf->io_l2_rxDat_bits_data[3U])))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_14[0U] 
        = (IData)(vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_14);
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_14[1U] 
        = (IData)((vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_14 
                   >> 0x20U));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_14[2U] 
        = __Vtemp_155[2U];
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_14[3U] 
        = __Vtemp_159[3U];
    __Vtemp_163[2U] = ((((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[2U] 
                              << 8U) | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[2U] 
                                        >> 0x18U)) : 
                         ((vlSelf->io_l2_rxDat_bits_data[2U] 
                           << 8U) | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                     >> 0x18U))) << 0x18U) 
                       | ((0xff0000U & (((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[2U] 
                                              << 0x10U) 
                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[2U] 
                                                >> 0x10U))
                                          : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                              << 0x10U) 
                                             | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                >> 0x10U))) 
                                        << 0x10U)) 
                          | ((0xff00U & (((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[2U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[2U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 8U))) 
                                         << 8U)) | 
                             (0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                        ? vlSelf->DCache__DOT__miss__DOT__storeHalf_13[2U]
                                        : vlSelf->io_l2_rxDat_bits_data[2U])))));
    __Vtemp_167[3U] = ((((0x8000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[3U] 
                              << 8U) | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[3U] 
                                        >> 0x18U)) : 
                         ((vlSelf->io_l2_rxDat_bits_data[3U] 
                           << 8U) | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                     >> 0x18U))) << 0x18U) 
                       | ((0xff0000U & (((0x4000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[3U] 
                                              << 0x10U) 
                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[3U] 
                                                >> 0x10U))
                                          : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                              << 0x10U) 
                                             | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                >> 0x10U))) 
                                        << 0x10U)) 
                          | ((0xff00U & (((0x2000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[3U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[3U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 8U))) 
                                         << 8U)) | 
                             (0xffU & ((0x1000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                        ? vlSelf->DCache__DOT__miss__DOT__storeHalf_13[3U]
                                        : vlSelf->io_l2_rxDat_bits_data[3U])))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_13[0U] 
        = (IData)(vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_13);
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_13[1U] 
        = (IData)((vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_13 
                   >> 0x20U));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_13[2U] 
        = __Vtemp_163[2U];
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_13[3U] 
        = __Vtemp_167[3U];
    __Vtemp_171[2U] = ((((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[2U] 
                              << 8U) | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[2U] 
                                        >> 0x18U)) : 
                         ((vlSelf->io_l2_rxDat_bits_data[2U] 
                           << 8U) | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                     >> 0x18U))) << 0x18U) 
                       | ((0xff0000U & (((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[2U] 
                                              << 0x10U) 
                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[2U] 
                                                >> 0x10U))
                                          : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                              << 0x10U) 
                                             | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                >> 0x10U))) 
                                        << 0x10U)) 
                          | ((0xff00U & (((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[2U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[2U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 8U))) 
                                         << 8U)) | 
                             (0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                        ? vlSelf->DCache__DOT__miss__DOT__storeHalf_12[2U]
                                        : vlSelf->io_l2_rxDat_bits_data[2U])))));
    __Vtemp_175[3U] = ((((0x8000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[3U] 
                              << 8U) | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[3U] 
                                        >> 0x18U)) : 
                         ((vlSelf->io_l2_rxDat_bits_data[3U] 
                           << 8U) | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                     >> 0x18U))) << 0x18U) 
                       | ((0xff0000U & (((0x4000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[3U] 
                                              << 0x10U) 
                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[3U] 
                                                >> 0x10U))
                                          : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                              << 0x10U) 
                                             | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                >> 0x10U))) 
                                        << 0x10U)) 
                          | ((0xff00U & (((0x2000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[3U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[3U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 8U))) 
                                         << 8U)) | 
                             (0xffU & ((0x1000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                        ? vlSelf->DCache__DOT__miss__DOT__storeHalf_12[3U]
                                        : vlSelf->io_l2_rxDat_bits_data[3U])))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_12[0U] 
        = (IData)(vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_12);
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_12[1U] 
        = (IData)((vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_12 
                   >> 0x20U));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_12[2U] 
        = __Vtemp_171[2U];
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_12[3U] 
        = __Vtemp_175[3U];
    __Vtemp_179[2U] = ((((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[2U] 
                              << 8U) | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[2U] 
                                        >> 0x18U)) : 
                         ((vlSelf->io_l2_rxDat_bits_data[2U] 
                           << 8U) | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                     >> 0x18U))) << 0x18U) 
                       | ((0xff0000U & (((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[2U] 
                                              << 0x10U) 
                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[2U] 
                                                >> 0x10U))
                                          : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                              << 0x10U) 
                                             | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                >> 0x10U))) 
                                        << 0x10U)) 
                          | ((0xff00U & (((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[2U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[2U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 8U))) 
                                         << 8U)) | 
                             (0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                        ? vlSelf->DCache__DOT__miss__DOT__storeHalf_11[2U]
                                        : vlSelf->io_l2_rxDat_bits_data[2U])))));
    __Vtemp_183[3U] = ((((0x8000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[3U] 
                              << 8U) | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[3U] 
                                        >> 0x18U)) : 
                         ((vlSelf->io_l2_rxDat_bits_data[3U] 
                           << 8U) | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                     >> 0x18U))) << 0x18U) 
                       | ((0xff0000U & (((0x4000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[3U] 
                                              << 0x10U) 
                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[3U] 
                                                >> 0x10U))
                                          : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                              << 0x10U) 
                                             | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                >> 0x10U))) 
                                        << 0x10U)) 
                          | ((0xff00U & (((0x2000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[3U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[3U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 8U))) 
                                         << 8U)) | 
                             (0xffU & ((0x1000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                        ? vlSelf->DCache__DOT__miss__DOT__storeHalf_11[3U]
                                        : vlSelf->io_l2_rxDat_bits_data[3U])))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_11[0U] 
        = (IData)(vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_11);
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_11[1U] 
        = (IData)((vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_11 
                   >> 0x20U));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_11[2U] 
        = __Vtemp_179[2U];
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_11[3U] 
        = __Vtemp_183[3U];
    __Vtemp_187[2U] = ((((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[2U] 
                              << 8U) | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[2U] 
                                        >> 0x18U)) : 
                         ((vlSelf->io_l2_rxDat_bits_data[2U] 
                           << 8U) | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                     >> 0x18U))) << 0x18U) 
                       | ((0xff0000U & (((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[2U] 
                                              << 0x10U) 
                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[2U] 
                                                >> 0x10U))
                                          : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                              << 0x10U) 
                                             | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                >> 0x10U))) 
                                        << 0x10U)) 
                          | ((0xff00U & (((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[2U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[2U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 8U))) 
                                         << 8U)) | 
                             (0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                        ? vlSelf->DCache__DOT__miss__DOT__storeHalf_10[2U]
                                        : vlSelf->io_l2_rxDat_bits_data[2U])))));
    __Vtemp_191[3U] = ((((0x8000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[3U] 
                              << 8U) | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[3U] 
                                        >> 0x18U)) : 
                         ((vlSelf->io_l2_rxDat_bits_data[3U] 
                           << 8U) | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                     >> 0x18U))) << 0x18U) 
                       | ((0xff0000U & (((0x4000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[3U] 
                                              << 0x10U) 
                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[3U] 
                                                >> 0x10U))
                                          : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                              << 0x10U) 
                                             | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                >> 0x10U))) 
                                        << 0x10U)) 
                          | ((0xff00U & (((0x2000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[3U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[3U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 8U))) 
                                         << 8U)) | 
                             (0xffU & ((0x1000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                        ? vlSelf->DCache__DOT__miss__DOT__storeHalf_10[3U]
                                        : vlSelf->io_l2_rxDat_bits_data[3U])))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_10[0U] 
        = (IData)(vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_10);
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_10[1U] 
        = (IData)((vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_10 
                   >> 0x20U));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_10[2U] 
        = __Vtemp_187[2U];
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_10[3U] 
        = __Vtemp_191[3U];
    __Vtemp_195[2U] = ((((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[2U] 
                              << 8U) | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[2U] 
                                        >> 0x18U)) : 
                         ((vlSelf->io_l2_rxDat_bits_data[2U] 
                           << 8U) | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                     >> 0x18U))) << 0x18U) 
                       | ((0xff0000U & (((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[2U] 
                                              << 0x10U) 
                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[2U] 
                                                >> 0x10U))
                                          : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                              << 0x10U) 
                                             | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                >> 0x10U))) 
                                        << 0x10U)) 
                          | ((0xff00U & (((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[2U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[2U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 8U))) 
                                         << 8U)) | 
                             (0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                        ? vlSelf->DCache__DOT__miss__DOT__storeHalf_9[2U]
                                        : vlSelf->io_l2_rxDat_bits_data[2U])))));
    __Vtemp_199[3U] = ((((0x8000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[3U] 
                              << 8U) | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[3U] 
                                        >> 0x18U)) : 
                         ((vlSelf->io_l2_rxDat_bits_data[3U] 
                           << 8U) | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                     >> 0x18U))) << 0x18U) 
                       | ((0xff0000U & (((0x4000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[3U] 
                                              << 0x10U) 
                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[3U] 
                                                >> 0x10U))
                                          : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                              << 0x10U) 
                                             | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                >> 0x10U))) 
                                        << 0x10U)) 
                          | ((0xff00U & (((0x2000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[3U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[3U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 8U))) 
                                         << 8U)) | 
                             (0xffU & ((0x1000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                        ? vlSelf->DCache__DOT__miss__DOT__storeHalf_9[3U]
                                        : vlSelf->io_l2_rxDat_bits_data[3U])))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_9[0U] 
        = (IData)(vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_9);
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_9[1U] 
        = (IData)((vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_9 
                   >> 0x20U));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_9[2U] 
        = __Vtemp_195[2U];
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_9[3U] 
        = __Vtemp_199[3U];
    __Vtemp_203[2U] = ((((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[2U] 
                              << 8U) | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[2U] 
                                        >> 0x18U)) : 
                         ((vlSelf->io_l2_rxDat_bits_data[2U] 
                           << 8U) | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                     >> 0x18U))) << 0x18U) 
                       | ((0xff0000U & (((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[2U] 
                                              << 0x10U) 
                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[2U] 
                                                >> 0x10U))
                                          : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                              << 0x10U) 
                                             | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                >> 0x10U))) 
                                        << 0x10U)) 
                          | ((0xff00U & (((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[2U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[2U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 8U))) 
                                         << 8U)) | 
                             (0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                        ? vlSelf->DCache__DOT__miss__DOT__storeHalf_8[2U]
                                        : vlSelf->io_l2_rxDat_bits_data[2U])))));
    __Vtemp_207[3U] = ((((0x8000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[3U] 
                              << 8U) | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[3U] 
                                        >> 0x18U)) : 
                         ((vlSelf->io_l2_rxDat_bits_data[3U] 
                           << 8U) | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                     >> 0x18U))) << 0x18U) 
                       | ((0xff0000U & (((0x4000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[3U] 
                                              << 0x10U) 
                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[3U] 
                                                >> 0x10U))
                                          : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                              << 0x10U) 
                                             | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                >> 0x10U))) 
                                        << 0x10U)) 
                          | ((0xff00U & (((0x2000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[3U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[3U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 8U))) 
                                         << 8U)) | 
                             (0xffU & ((0x1000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                        ? vlSelf->DCache__DOT__miss__DOT__storeHalf_8[3U]
                                        : vlSelf->io_l2_rxDat_bits_data[3U])))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_8[0U] 
        = (IData)(vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_8);
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_8[1U] 
        = (IData)((vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_8 
                   >> 0x20U));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_8[2U] 
        = __Vtemp_203[2U];
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_8[3U] 
        = __Vtemp_207[3U];
    __Vtemp_211[2U] = ((((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[2U] 
                              << 8U) | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[2U] 
                                        >> 0x18U)) : 
                         ((vlSelf->io_l2_rxDat_bits_data[2U] 
                           << 8U) | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                     >> 0x18U))) << 0x18U) 
                       | ((0xff0000U & (((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[2U] 
                                              << 0x10U) 
                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[2U] 
                                                >> 0x10U))
                                          : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                              << 0x10U) 
                                             | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                >> 0x10U))) 
                                        << 0x10U)) 
                          | ((0xff00U & (((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[2U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[2U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 8U))) 
                                         << 8U)) | 
                             (0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                        ? vlSelf->DCache__DOT__miss__DOT__storeHalf_7[2U]
                                        : vlSelf->io_l2_rxDat_bits_data[2U])))));
    __Vtemp_215[3U] = ((((0x8000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[3U] 
                              << 8U) | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[3U] 
                                        >> 0x18U)) : 
                         ((vlSelf->io_l2_rxDat_bits_data[3U] 
                           << 8U) | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                     >> 0x18U))) << 0x18U) 
                       | ((0xff0000U & (((0x4000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[3U] 
                                              << 0x10U) 
                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[3U] 
                                                >> 0x10U))
                                          : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                              << 0x10U) 
                                             | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                >> 0x10U))) 
                                        << 0x10U)) 
                          | ((0xff00U & (((0x2000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[3U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[3U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 8U))) 
                                         << 8U)) | 
                             (0xffU & ((0x1000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                        ? vlSelf->DCache__DOT__miss__DOT__storeHalf_7[3U]
                                        : vlSelf->io_l2_rxDat_bits_data[3U])))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_7[0U] 
        = (IData)(vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_7);
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_7[1U] 
        = (IData)((vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_7 
                   >> 0x20U));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_7[2U] 
        = __Vtemp_211[2U];
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_7[3U] 
        = __Vtemp_215[3U];
    __Vtemp_219[2U] = ((((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[2U] 
                              << 8U) | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[2U] 
                                        >> 0x18U)) : 
                         ((vlSelf->io_l2_rxDat_bits_data[2U] 
                           << 8U) | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                     >> 0x18U))) << 0x18U) 
                       | ((0xff0000U & (((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[2U] 
                                              << 0x10U) 
                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[2U] 
                                                >> 0x10U))
                                          : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                              << 0x10U) 
                                             | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                >> 0x10U))) 
                                        << 0x10U)) 
                          | ((0xff00U & (((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[2U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[2U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 8U))) 
                                         << 8U)) | 
                             (0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                        ? vlSelf->DCache__DOT__miss__DOT__storeHalf_6[2U]
                                        : vlSelf->io_l2_rxDat_bits_data[2U])))));
    __Vtemp_223[3U] = ((((0x8000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[3U] 
                              << 8U) | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[3U] 
                                        >> 0x18U)) : 
                         ((vlSelf->io_l2_rxDat_bits_data[3U] 
                           << 8U) | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                     >> 0x18U))) << 0x18U) 
                       | ((0xff0000U & (((0x4000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[3U] 
                                              << 0x10U) 
                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[3U] 
                                                >> 0x10U))
                                          : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                              << 0x10U) 
                                             | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                >> 0x10U))) 
                                        << 0x10U)) 
                          | ((0xff00U & (((0x2000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[3U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[3U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 8U))) 
                                         << 8U)) | 
                             (0xffU & ((0x1000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                        ? vlSelf->DCache__DOT__miss__DOT__storeHalf_6[3U]
                                        : vlSelf->io_l2_rxDat_bits_data[3U])))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_6[0U] 
        = (IData)(vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_6);
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_6[1U] 
        = (IData)((vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_6 
                   >> 0x20U));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_6[2U] 
        = __Vtemp_219[2U];
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_6[3U] 
        = __Vtemp_223[3U];
    __Vtemp_227[2U] = ((((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[2U] 
                              << 8U) | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[2U] 
                                        >> 0x18U)) : 
                         ((vlSelf->io_l2_rxDat_bits_data[2U] 
                           << 8U) | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                     >> 0x18U))) << 0x18U) 
                       | ((0xff0000U & (((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[2U] 
                                              << 0x10U) 
                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[2U] 
                                                >> 0x10U))
                                          : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                              << 0x10U) 
                                             | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                >> 0x10U))) 
                                        << 0x10U)) 
                          | ((0xff00U & (((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[2U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[2U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 8U))) 
                                         << 8U)) | 
                             (0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                        ? vlSelf->DCache__DOT__miss__DOT__storeHalf_5[2U]
                                        : vlSelf->io_l2_rxDat_bits_data[2U])))));
    __Vtemp_231[3U] = ((((0x8000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[3U] 
                              << 8U) | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[3U] 
                                        >> 0x18U)) : 
                         ((vlSelf->io_l2_rxDat_bits_data[3U] 
                           << 8U) | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                     >> 0x18U))) << 0x18U) 
                       | ((0xff0000U & (((0x4000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[3U] 
                                              << 0x10U) 
                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[3U] 
                                                >> 0x10U))
                                          : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                              << 0x10U) 
                                             | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                >> 0x10U))) 
                                        << 0x10U)) 
                          | ((0xff00U & (((0x2000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[3U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[3U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 8U))) 
                                         << 8U)) | 
                             (0xffU & ((0x1000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                        ? vlSelf->DCache__DOT__miss__DOT__storeHalf_5[3U]
                                        : vlSelf->io_l2_rxDat_bits_data[3U])))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_5[0U] 
        = (IData)(vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_5);
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_5[1U] 
        = (IData)((vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_5 
                   >> 0x20U));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_5[2U] 
        = __Vtemp_227[2U];
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_5[3U] 
        = __Vtemp_231[3U];
    __Vtemp_235[2U] = ((((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[2U] 
                              << 8U) | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[2U] 
                                        >> 0x18U)) : 
                         ((vlSelf->io_l2_rxDat_bits_data[2U] 
                           << 8U) | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                     >> 0x18U))) << 0x18U) 
                       | ((0xff0000U & (((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[2U] 
                                              << 0x10U) 
                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[2U] 
                                                >> 0x10U))
                                          : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                              << 0x10U) 
                                             | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                >> 0x10U))) 
                                        << 0x10U)) 
                          | ((0xff00U & (((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[2U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[2U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 8U))) 
                                         << 8U)) | 
                             (0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                        ? vlSelf->DCache__DOT__miss__DOT__storeHalf_4[2U]
                                        : vlSelf->io_l2_rxDat_bits_data[2U])))));
    __Vtemp_239[3U] = ((((0x8000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[3U] 
                              << 8U) | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[3U] 
                                        >> 0x18U)) : 
                         ((vlSelf->io_l2_rxDat_bits_data[3U] 
                           << 8U) | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                     >> 0x18U))) << 0x18U) 
                       | ((0xff0000U & (((0x4000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[3U] 
                                              << 0x10U) 
                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[3U] 
                                                >> 0x10U))
                                          : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                              << 0x10U) 
                                             | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                >> 0x10U))) 
                                        << 0x10U)) 
                          | ((0xff00U & (((0x2000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[3U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[3U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 8U))) 
                                         << 8U)) | 
                             (0xffU & ((0x1000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                        ? vlSelf->DCache__DOT__miss__DOT__storeHalf_4[3U]
                                        : vlSelf->io_l2_rxDat_bits_data[3U])))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_4[0U] 
        = (IData)(vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_4);
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_4[1U] 
        = (IData)((vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_4 
                   >> 0x20U));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_4[2U] 
        = __Vtemp_235[2U];
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_4[3U] 
        = __Vtemp_239[3U];
    __Vtemp_243[2U] = ((((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[2U] 
                              << 8U) | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[2U] 
                                        >> 0x18U)) : 
                         ((vlSelf->io_l2_rxDat_bits_data[2U] 
                           << 8U) | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                     >> 0x18U))) << 0x18U) 
                       | ((0xff0000U & (((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[2U] 
                                              << 0x10U) 
                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[2U] 
                                                >> 0x10U))
                                          : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                              << 0x10U) 
                                             | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                >> 0x10U))) 
                                        << 0x10U)) 
                          | ((0xff00U & (((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[2U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[2U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 8U))) 
                                         << 8U)) | 
                             (0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                        ? vlSelf->DCache__DOT__miss__DOT__storeHalf_3[2U]
                                        : vlSelf->io_l2_rxDat_bits_data[2U])))));
    __Vtemp_247[3U] = ((((0x8000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[3U] 
                              << 8U) | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[3U] 
                                        >> 0x18U)) : 
                         ((vlSelf->io_l2_rxDat_bits_data[3U] 
                           << 8U) | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                     >> 0x18U))) << 0x18U) 
                       | ((0xff0000U & (((0x4000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[3U] 
                                              << 0x10U) 
                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[3U] 
                                                >> 0x10U))
                                          : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                              << 0x10U) 
                                             | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                >> 0x10U))) 
                                        << 0x10U)) 
                          | ((0xff00U & (((0x2000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[3U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[3U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 8U))) 
                                         << 8U)) | 
                             (0xffU & ((0x1000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                        ? vlSelf->DCache__DOT__miss__DOT__storeHalf_3[3U]
                                        : vlSelf->io_l2_rxDat_bits_data[3U])))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_3[0U] 
        = (IData)(vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_3);
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_3[1U] 
        = (IData)((vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_3 
                   >> 0x20U));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_3[2U] 
        = __Vtemp_243[2U];
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_3[3U] 
        = __Vtemp_247[3U];
    __Vtemp_251[2U] = ((((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[2U] 
                              << 8U) | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[2U] 
                                        >> 0x18U)) : 
                         ((vlSelf->io_l2_rxDat_bits_data[2U] 
                           << 8U) | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                     >> 0x18U))) << 0x18U) 
                       | ((0xff0000U & (((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[2U] 
                                              << 0x10U) 
                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[2U] 
                                                >> 0x10U))
                                          : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                              << 0x10U) 
                                             | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                >> 0x10U))) 
                                        << 0x10U)) 
                          | ((0xff00U & (((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[2U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[2U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 8U))) 
                                         << 8U)) | 
                             (0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                        ? vlSelf->DCache__DOT__miss__DOT__storeHalf_2[2U]
                                        : vlSelf->io_l2_rxDat_bits_data[2U])))));
    __Vtemp_255[3U] = ((((0x8000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[3U] 
                              << 8U) | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[3U] 
                                        >> 0x18U)) : 
                         ((vlSelf->io_l2_rxDat_bits_data[3U] 
                           << 8U) | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                     >> 0x18U))) << 0x18U) 
                       | ((0xff0000U & (((0x4000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[3U] 
                                              << 0x10U) 
                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[3U] 
                                                >> 0x10U))
                                          : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                              << 0x10U) 
                                             | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                >> 0x10U))) 
                                        << 0x10U)) 
                          | ((0xff00U & (((0x2000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[3U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[3U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 8U))) 
                                         << 8U)) | 
                             (0xffU & ((0x1000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                        ? vlSelf->DCache__DOT__miss__DOT__storeHalf_2[3U]
                                        : vlSelf->io_l2_rxDat_bits_data[3U])))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_2[0U] 
        = (IData)(vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_2);
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_2[1U] 
        = (IData)((vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_2 
                   >> 0x20U));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_2[2U] 
        = __Vtemp_251[2U];
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_2[3U] 
        = __Vtemp_255[3U];
    __Vtemp_259[2U] = ((((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[2U] 
                              << 8U) | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[2U] 
                                        >> 0x18U)) : 
                         ((vlSelf->io_l2_rxDat_bits_data[2U] 
                           << 8U) | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                     >> 0x18U))) << 0x18U) 
                       | ((0xff0000U & (((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[2U] 
                                              << 0x10U) 
                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[2U] 
                                                >> 0x10U))
                                          : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                              << 0x10U) 
                                             | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                >> 0x10U))) 
                                        << 0x10U)) 
                          | ((0xff00U & (((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[2U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[2U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 8U))) 
                                         << 8U)) | 
                             (0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                        ? vlSelf->DCache__DOT__miss__DOT__storeHalf_1[2U]
                                        : vlSelf->io_l2_rxDat_bits_data[2U])))));
    __Vtemp_263[3U] = ((((0x8000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[3U] 
                              << 8U) | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[3U] 
                                        >> 0x18U)) : 
                         ((vlSelf->io_l2_rxDat_bits_data[3U] 
                           << 8U) | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                     >> 0x18U))) << 0x18U) 
                       | ((0xff0000U & (((0x4000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[3U] 
                                              << 0x10U) 
                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[3U] 
                                                >> 0x10U))
                                          : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                              << 0x10U) 
                                             | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                >> 0x10U))) 
                                        << 0x10U)) 
                          | ((0xff00U & (((0x2000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[3U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[3U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 8U))) 
                                         << 8U)) | 
                             (0xffU & ((0x1000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                        ? vlSelf->DCache__DOT__miss__DOT__storeHalf_1[3U]
                                        : vlSelf->io_l2_rxDat_bits_data[3U])))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_1[0U] 
        = (IData)(vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_1);
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_1[1U] 
        = (IData)((vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo_1 
                   >> 0x20U));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_1[2U] 
        = __Vtemp_259[2U];
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_1[3U] 
        = __Vtemp_263[3U];
    __Vtemp_267[2U] = ((((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[2U] 
                              << 8U) | (vlSelf->DCache__DOT__miss__DOT__storeHalf[2U] 
                                        >> 0x18U)) : 
                         ((vlSelf->io_l2_rxDat_bits_data[2U] 
                           << 8U) | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                     >> 0x18U))) << 0x18U) 
                       | ((0xff0000U & (((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[2U] 
                                              << 0x10U) 
                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf[2U] 
                                                >> 0x10U))
                                          : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                              << 0x10U) 
                                             | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                >> 0x10U))) 
                                        << 0x10U)) 
                          | ((0xff00U & (((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[2U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf[2U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 8U))) 
                                         << 8U)) | 
                             (0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                        ? vlSelf->DCache__DOT__miss__DOT__storeHalf[2U]
                                        : vlSelf->io_l2_rxDat_bits_data[2U])))));
    __Vtemp_271[3U] = ((((0x8000U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[3U] 
                              << 8U) | (vlSelf->DCache__DOT__miss__DOT__storeHalf[3U] 
                                        >> 0x18U)) : 
                         ((vlSelf->io_l2_rxDat_bits_data[3U] 
                           << 8U) | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                     >> 0x18U))) << 0x18U) 
                       | ((0xff0000U & (((0x4000U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                          ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[3U] 
                                              << 0x10U) 
                                             | (vlSelf->DCache__DOT__miss__DOT__storeHalf[3U] 
                                                >> 0x10U))
                                          : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                              << 0x10U) 
                                             | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                >> 0x10U))) 
                                        << 0x10U)) 
                          | ((0xff00U & (((0x2000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[3U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf[3U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 8U))) 
                                         << 8U)) | 
                             (0xffU & ((0x1000U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                        ? vlSelf->DCache__DOT__miss__DOT__storeHalf[3U]
                                        : vlSelf->io_l2_rxDat_bits_data[3U])))));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo[0U] 
        = (IData)(vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo);
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo[1U] 
        = (IData)((vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo_lo 
                   >> 0x20U));
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo[2U] 
        = __Vtemp_267[2U];
    vlSelf->DCache__DOT__miss__DOT__mergedBeat_lo[3U] 
        = __Vtemp_271[3U];
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
}
