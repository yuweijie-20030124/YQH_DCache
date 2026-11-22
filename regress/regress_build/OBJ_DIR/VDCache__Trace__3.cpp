// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDCache__Syms.h"


void VDCache___024root__trace_chg_sub_3(VDCache___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VDCache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDCache___024root__trace_chg_sub_3\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 9924);
    VlWide<4>/*127:0*/ __Vtemp_8;
    VlWide<8>/*255:0*/ __Vtemp_25;
    VlWide<16>/*511:0*/ __Vtemp_60;
    VlWide<4>/*127:0*/ __Vtemp_61;
    VlWide<8>/*255:0*/ __Vtemp_73;
    VlWide<8>/*255:0*/ __Vtemp_74;
    VlWide<8>/*255:0*/ __Vtemp_77;
    VlWide<8>/*255:0*/ __Vtemp_82;
    VlWide<8>/*255:0*/ __Vtemp_85;
    VlWide<8>/*255:0*/ __Vtemp_90;
    VlWide<8>/*255:0*/ __Vtemp_93;
    VlWide<8>/*255:0*/ __Vtemp_98;
    VlWide<8>/*255:0*/ __Vtemp_101;
    VlWide<8>/*255:0*/ __Vtemp_106;
    VlWide<8>/*255:0*/ __Vtemp_109;
    VlWide<8>/*255:0*/ __Vtemp_114;
    VlWide<8>/*255:0*/ __Vtemp_117;
    VlWide<8>/*255:0*/ __Vtemp_122;
    VlWide<8>/*255:0*/ __Vtemp_125;
    VlWide<8>/*255:0*/ __Vtemp_130;
    VlWide<8>/*255:0*/ __Vtemp_133;
    VlWide<8>/*255:0*/ __Vtemp_138;
    VlWide<8>/*255:0*/ __Vtemp_141;
    VlWide<8>/*255:0*/ __Vtemp_146;
    VlWide<8>/*255:0*/ __Vtemp_149;
    VlWide<8>/*255:0*/ __Vtemp_154;
    VlWide<8>/*255:0*/ __Vtemp_157;
    VlWide<8>/*255:0*/ __Vtemp_162;
    VlWide<8>/*255:0*/ __Vtemp_165;
    VlWide<8>/*255:0*/ __Vtemp_170;
    VlWide<8>/*255:0*/ __Vtemp_173;
    VlWide<8>/*255:0*/ __Vtemp_178;
    VlWide<8>/*255:0*/ __Vtemp_181;
    VlWide<8>/*255:0*/ __Vtemp_186;
    VlWide<8>/*255:0*/ __Vtemp_189;
    VlWide<8>/*255:0*/ __Vtemp_194;
    VlWide<8>/*255:0*/ __Vtemp_197;
    VlWide<8>/*255:0*/ __Vtemp_202;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+0,((0xffU & ((1U & (IData)(
                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                                        >> 4U)))
                                          ? vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[1U]
                                          : vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[1U]))),8);
        bufp->chgCData(oldp+1,((0xffU & ((1U & (IData)(
                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                                        >> 3U)))
                                          ? ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0U] 
                                              << 8U) 
                                             | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0U] 
                                                >> 0x18U))
                                          : ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0U] 
                                              << 8U) 
                                             | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0U] 
                                                >> 0x18U))))),8);
        bufp->chgCData(oldp+2,((0xffU & ((1U & (IData)(
                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                                        >> 2U)))
                                          ? ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0U] 
                                              << 0x10U) 
                                             | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0U] 
                                                >> 0x10U))
                                          : ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0U] 
                                              << 0x10U) 
                                             | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0U] 
                                                >> 0x10U))))),8);
        bufp->chgCData(oldp+3,((0xffU & ((1U & (IData)(
                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                                        >> 1U)))
                                          ? ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0U] 
                                              << 0x18U) 
                                             | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0U] 
                                                >> 8U))
                                          : ((vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0U] 
                                              << 0x18U) 
                                             | (vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0U] 
                                                >> 8U))))),8);
        bufp->chgCData(oldp+4,((0xffU & ((1U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask))
                                          ? vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0U]
                                          : vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0U]))),8);
        bufp->chgQData(oldp+5,(vlSelf->DCache__DOT__pipe__DOT__refillLine_lo_lo_lo),64);
        __Vtemp_8[0U] = (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_lo_lo_lo);
        __Vtemp_8[1U] = (IData)((vlSelf->DCache__DOT__pipe__DOT__refillLine_lo_lo_lo 
                                 >> 0x20U));
        __Vtemp_8[2U] = (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_11) 
                          << 0x18U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_10) 
                                        << 0x10U) | 
                                       (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_9) 
                                         << 8U) | (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_8))));
        __Vtemp_8[3U] = (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_15) 
                          << 0x18U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_14) 
                                        << 0x10U) | 
                                       (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_13) 
                                         << 8U) | (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_12))));
        bufp->chgWData(oldp+7,(__Vtemp_8),128);
        __Vtemp_25[0U] = (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_lo_lo_lo);
        __Vtemp_25[1U] = (IData)((vlSelf->DCache__DOT__pipe__DOT__refillLine_lo_lo_lo 
                                  >> 0x20U));
        __Vtemp_25[2U] = (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_11) 
                           << 0x18U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_10) 
                                         << 0x10U) 
                                        | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_9) 
                                            << 8U) 
                                           | (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_8))));
        __Vtemp_25[3U] = (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_15) 
                           << 0x18U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_14) 
                                         << 0x10U) 
                                        | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_13) 
                                            << 8U) 
                                           | (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_12))));
        __Vtemp_25[4U] = (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_lo_hi_lo);
        __Vtemp_25[5U] = (IData)((vlSelf->DCache__DOT__pipe__DOT__refillLine_lo_hi_lo 
                                  >> 0x20U));
        __Vtemp_25[6U] = (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_27) 
                           << 0x18U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_26) 
                                         << 0x10U) 
                                        | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_25) 
                                            << 8U) 
                                           | (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_24))));
        __Vtemp_25[7U] = (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_31) 
                           << 0x18U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_30) 
                                         << 0x10U) 
                                        | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_29) 
                                            << 8U) 
                                           | (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_28))));
        bufp->chgWData(oldp+11,(__Vtemp_25),256);
        __Vtemp_60[0U] = (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_lo_lo_lo);
        __Vtemp_60[1U] = (IData)((vlSelf->DCache__DOT__pipe__DOT__refillLine_lo_lo_lo 
                                  >> 0x20U));
        __Vtemp_60[2U] = (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_11) 
                           << 0x18U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_10) 
                                         << 0x10U) 
                                        | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_9) 
                                            << 8U) 
                                           | (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_8))));
        __Vtemp_60[3U] = (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_15) 
                           << 0x18U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_14) 
                                         << 0x10U) 
                                        | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_13) 
                                            << 8U) 
                                           | (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_12))));
        __Vtemp_60[4U] = (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_lo_hi_lo);
        __Vtemp_60[5U] = (IData)((vlSelf->DCache__DOT__pipe__DOT__refillLine_lo_hi_lo 
                                  >> 0x20U));
        __Vtemp_60[6U] = (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_27) 
                           << 0x18U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_26) 
                                         << 0x10U) 
                                        | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_25) 
                                            << 8U) 
                                           | (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_24))));
        __Vtemp_60[7U] = (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_31) 
                           << 0x18U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_30) 
                                         << 0x10U) 
                                        | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_29) 
                                            << 8U) 
                                           | (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_28))));
        __Vtemp_60[8U] = (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_hi_lo_lo);
        __Vtemp_60[9U] = (IData)((vlSelf->DCache__DOT__pipe__DOT__refillLine_hi_lo_lo 
                                  >> 0x20U));
        __Vtemp_60[0xaU] = (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_43) 
                             << 0x18U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_42) 
                                           << 0x10U) 
                                          | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_41) 
                                              << 8U) 
                                             | (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_40))));
        __Vtemp_60[0xbU] = (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_47) 
                             << 0x18U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_46) 
                                           << 0x10U) 
                                          | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_45) 
                                              << 8U) 
                                             | (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_44))));
        __Vtemp_60[0xcU] = (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_hi_hi_lo);
        __Vtemp_60[0xdU] = (IData)((vlSelf->DCache__DOT__pipe__DOT__refillLine_hi_hi_lo 
                                    >> 0x20U));
        __Vtemp_60[0xeU] = (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_59) 
                             << 0x18U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_58) 
                                           << 0x10U) 
                                          | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_57) 
                                              << 8U) 
                                             | (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_56))));
        __Vtemp_60[0xfU] = (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_63) 
                             << 0x18U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_62) 
                                           << 0x10U) 
                                          | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_61) 
                                              << 8U) 
                                             | (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_60))));
        bufp->chgWData(oldp+19,(__Vtemp_60),512);
        bufp->chgQData(oldp+35,(vlSelf->DCache__DOT__pipe__DOT__refillWords_7),64);
        bufp->chgQData(oldp+37,(vlSelf->DCache__DOT__pipe__DOT__refillWords_5),64);
        bufp->chgQData(oldp+39,(vlSelf->DCache__DOT__pipe__DOT__refillWords_3),64);
        bufp->chgQData(oldp+41,(vlSelf->DCache__DOT__pipe__DOT__refillWords_1),64);
        bufp->chgQData(oldp+43,(vlSelf->DCache__DOT__pipe__DOT__s3_word_7),64);
        bufp->chgQData(oldp+45,(vlSelf->DCache__DOT__pipe__DOT__s3_word_6),64);
        bufp->chgQData(oldp+47,(vlSelf->DCache__DOT__pipe__DOT__s3_word_5),64);
        bufp->chgQData(oldp+49,(vlSelf->DCache__DOT__pipe__DOT__s3_word_4),64);
        bufp->chgQData(oldp+51,(vlSelf->DCache__DOT__pipe__DOT__s3_word_3),64);
        bufp->chgQData(oldp+53,(vlSelf->DCache__DOT__pipe__DOT__s3_word_2),64);
        bufp->chgQData(oldp+55,(vlSelf->DCache__DOT__pipe__DOT__s3_word_1),64);
        bufp->chgQData(oldp+57,(vlSelf->DCache__DOT__pipe__DOT__s3_word_0),64);
        bufp->chgQData(oldp+59,(vlSelf->DCache__DOT__pipe__DOT__old1),64);
        __Vtemp_61[0U] = (IData)(vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs);
        __Vtemp_61[1U] = (IData)((vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs 
                                  >> 0x20U));
        __Vtemp_61[2U] = (IData)(vlSelf->DCache__DOT__pipe__DOT__old1);
        __Vtemp_61[3U] = (IData)((vlSelf->DCache__DOT__pipe__DOT__old1 
                                  >> 0x20U));
        bufp->chgWData(oldp+61,(__Vtemp_61),128);
        bufp->chgQData(oldp+65,(vlSelf->DCache__DOT__pipe__DOT__amoalu__DOT__wmask),64);
        bufp->chgBit(oldp+67,((0U != ((((((IData)(vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs) 
                                          ^ vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoCmp[0U]) 
                                         & (IData)(vlSelf->DCache__DOT__pipe__DOT__amoalu__DOT__wmask)) 
                                        | (((IData)(
                                                    (vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs 
                                                     >> 0x20U)) 
                                            ^ vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoCmp[1U]) 
                                           & (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__amoalu__DOT__wmask 
                                                      >> 0x20U)))) 
                                       | (((IData)(vlSelf->DCache__DOT__pipe__DOT__old1) 
                                           ^ vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoCmp[2U]) 
                                          & ((((0x800U 
                                                & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                                ? 0xffU
                                                : 0U) 
                                              << 0x18U) 
                                             | ((((0x400U 
                                                   & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                                   ? 0xffU
                                                   : 0U) 
                                                 << 0x10U) 
                                                | ((((0x200U 
                                                      & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                                      ? 0xffU
                                                      : 0U) 
                                                    << 8U) 
                                                   | ((0x100U 
                                                       & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                                       ? 0xffU
                                                       : 0U)))))) 
                                      | (((IData)((vlSelf->DCache__DOT__pipe__DOT__old1 
                                                   >> 0x20U)) 
                                          ^ vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoCmp[3U]) 
                                         & ((((0x8000U 
                                               & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                               ? 0xffU
                                               : 0U) 
                                             << 0x18U) 
                                            | ((((0x4000U 
                                                  & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                                  ? 0xffU
                                                  : 0U) 
                                                << 0x10U) 
                                               | ((((0x2000U 
                                                     & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                                     ? 0xffU
                                                     : 0U) 
                                                   << 8U) 
                                                  | ((0x1000U 
                                                      & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                                      ? 0xffU
                                                      : 0U)))))))));
        bufp->chgBit(oldp+68,(vlSelf->DCache__DOT__pipe__DOT__casFail));
        bufp->chgBit(oldp+69,(vlSelf->DCache__DOT__pipe__DOT__s3_sc));
        bufp->chgBit(oldp+70,(((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hit) 
                               & ((2U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_coh)) 
                                  | (3U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_coh))))));
        bufp->chgBit(oldp+71,(vlSelf->DCache__DOT__pipe__DOT__lineMatch));
        bufp->chgCData(oldp+72,(vlSelf->DCache__DOT__pipe__DOT__lrsc_count),6);
        bufp->chgBit(oldp+73,(vlSelf->DCache__DOT__pipe__DOT__scOk));
        bufp->chgBit(oldp+74,(vlSelf->DCache__DOT__pipe__DOT__twoBanks3));
        bufp->chgCData(oldp+75,((0xffU & (((IData)(1U) 
                                           << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)) 
                                          | ((IData)(vlSelf->DCache__DOT__pipe__DOT__twoBanks3)
                                              ? ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx))))
                                              : 0U)))),8);
        bufp->chgCData(oldp+76,(vlSelf->DCache__DOT__pipe__DOT__atomicBanks),8);
        bufp->chgBit(oldp+77,(vlSelf->DCache__DOT__pipe__DOT__doAtomicData));
        bufp->chgBit(oldp+78,(((IData)(vlSelf->DCache__DOT__pipe__DOT__doAtomicData) 
                               & (3U != (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_coh)))));
        bufp->chgBit(oldp+79,(vlSelf->DCache__DOT__pipe__DOT__doMeta));
        bufp->chgBit(oldp+80,(vlSelf->DCache__DOT__pipe__DOT__sent_1));
        bufp->chgBit(oldp+81,(vlSelf->DCache__DOT__pipe__DOT__doData));
        bufp->chgBit(oldp+82,(vlSelf->DCache__DOT__pipe__DOT__sent_2));
        bufp->chgBit(oldp+83,(vlSelf->DCache__DOT__pipe__DOT__s3_replace));
        bufp->chgBit(oldp+84,(vlSelf->DCache__DOT__pipe__DOT__victimWb));
        bufp->chgBit(oldp+85,(vlSelf->DCache__DOT__pipe__DOT__s3_refill_passDirty));
        bufp->chgBit(oldp+86,(((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_refill_passDirty) 
                               | (0U != vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask))));
        bufp->chgBit(oldp+87,(vlSelf->DCache__DOT__pipe__DOT__sharedDirty));
        bufp->chgBit(oldp+88,(vlSelf->DCache__DOT__pipe__DOT__refillWb));
        bufp->chgBit(oldp+89,(vlSelf->DCache__DOT__pipe__DOT__doWb1));
        bufp->chgBit(oldp+90,(vlSelf->DCache__DOT__pipe__DOT__sent_3));
        bufp->chgBit(oldp+91,(vlSelf->DCache__DOT__pipe__DOT__wb1Fire));
        bufp->chgBit(oldp+92,(vlSelf->DCache__DOT__pipe__DOT__doWb2));
        bufp->chgBit(oldp+93,(vlSelf->DCache__DOT__pipe__DOT__sent_7));
        bufp->chgBit(oldp+94,(vlSelf->DCache__DOT__pipe__DOT__wb2Fire));
        bufp->chgBit(oldp+95,(vlSelf->DCache__DOT__pipe__DOT__sent_4));
        bufp->chgBit(oldp+96,(vlSelf->DCache__DOT__pipe__DOT__doAtomicResp));
        bufp->chgBit(oldp+97,(vlSelf->DCache__DOT__pipe__DOT__sent_5));
        bufp->chgBit(oldp+98,(vlSelf->DCache__DOT__pipe__DOT__sent_6));
        bufp->chgBit(oldp+99,(((IData)(vlSelf->DCache__DOT__pipe_io_pendingSnoop_valid) 
                               & (IData)(vlSelf->DCache__DOT__pipe__DOT___refillOp_T_2))));
        bufp->chgBit(oldp+100,(((~ (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_refill_retUnique)) 
                                & (IData)(vlSelf->DCache__DOT__pipe__DOT__doInstall))));
        bufp->chgBit(oldp+101,(vlSelf->DCache__DOT__pipe__DOT__doS3Replay));
        bufp->chgBit(oldp+102,(vlSelf->DCache__DOT__pipe__DOT__sent_8));
        bufp->chgBit(oldp+103,(vlSelf->DCache__DOT__pipe__DOT__writesDone));
        bufp->chgBit(oldp+104,(vlSelf->DCache__DOT__pipe__DOT__s3Replay));
        bufp->chgBit(oldp+105,(vlSelf->DCache__DOT__pipe__DOT__upgradeFail));
        bufp->chgBit(oldp+106,(vlSelf->DCache__DOT__pipe__DOT__isRefill1));
        bufp->chgBit(oldp+107,(vlSelf->DCache__DOT__pipe__DOT__s1_first));
        bufp->chgQData(oldp+108,(vlSelf->DCache__DOT__pipe__DOT__s1_tag_3),36);
        bufp->chgQData(oldp+110,(vlSelf->DCache__DOT__pipe__DOT__tagNow_3),36);
        bufp->chgCData(oldp+112,(vlSelf->DCache__DOT__pipe__DOT__s1_meta_3_coh),2);
        bufp->chgCData(oldp+113,(vlSelf->DCache__DOT__pipe__DOT__metaNow_3_coh),2);
        bufp->chgQData(oldp+114,(vlSelf->DCache__DOT__pipe__DOT__s1_tag_2),36);
        bufp->chgQData(oldp+116,(vlSelf->DCache__DOT__pipe__DOT__tagNow_2),36);
        bufp->chgCData(oldp+118,(vlSelf->DCache__DOT__pipe__DOT__s1_meta_2_coh),2);
        bufp->chgCData(oldp+119,(vlSelf->DCache__DOT__pipe__DOT__metaNow_2_coh),2);
        bufp->chgQData(oldp+120,(vlSelf->DCache__DOT__pipe__DOT__s1_tag_1),36);
        bufp->chgQData(oldp+122,(vlSelf->DCache__DOT__pipe__DOT__tagNow_1),36);
        bufp->chgCData(oldp+124,(vlSelf->DCache__DOT__pipe__DOT__s1_meta_1_coh),2);
        bufp->chgCData(oldp+125,(vlSelf->DCache__DOT__pipe__DOT__metaNow_1_coh),2);
        bufp->chgQData(oldp+126,(vlSelf->DCache__DOT__pipe__DOT__s1_tag_0),36);
        bufp->chgQData(oldp+128,(vlSelf->DCache__DOT__pipe__DOT__tagNow_0),36);
        bufp->chgCData(oldp+130,(vlSelf->DCache__DOT__pipe__DOT__s1_meta_0_coh),2);
        bufp->chgCData(oldp+131,(vlSelf->DCache__DOT__pipe__DOT__metaNow_0_coh),2);
        bufp->chgCData(oldp+132,(vlSelf->DCache__DOT__pipe__DOT__hitOh),4);
        bufp->chgBit(oldp+133,((0U != (IData)(vlSelf->DCache__DOT__pipe__DOT__hitOh))));
        bufp->chgBit(oldp+134,((0U != (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_replaceWay))));
        bufp->chgCData(oldp+135,(vlSelf->DCache__DOT__pipe__DOT__emptyOh),4);
        bufp->chgCData(oldp+136,(((0U != (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_replaceWay))
                                   ? (3U & ((IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_replaceWay) 
                                            >> 2U))
                                   : 0U)),2);
        bufp->chgCData(oldp+137,(((0U != (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_replaceWay))
                                   ? (3U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_replaceWay))
                                   : 1U)),2);
        bufp->chgCData(oldp+138,(vlSelf->DCache__DOT__pipe__DOT__specWay),2);
        bufp->chgBit(oldp+139,((0xfU & ((0U != (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_replaceWay)) 
                                        & ((IData)(vlSelf->DCache__DOT__pipe__DOT__emptyOh) 
                                           >> (IData)(vlSelf->DCache__DOT__pipe__DOT__specWay))))));
        bufp->chgBit(oldp+140,(vlSelf->DCache__DOT__pipe__DOT__useSpecified));
        bufp->chgBit(oldp+141,(vlSelf->DCache__DOT__pipe__DOT__useEmpty));
        bufp->chgBit(oldp+142,(vlSelf->DCache__DOT__pipe__DOT__needSearch));
        bufp->chgBit(oldp+143,(vlSelf->DCache__DOT__pipe__DOT__occupyStall));
        bufp->chgBit(oldp+144,(vlSelf->DCache__DOT__pipe__DOT__blocked));
        bufp->chgBit(oldp+145,(vlSelf->DCache__DOT__pipe__DOT__s1_pick_stall));
        bufp->chgBit(oldp+146,(vlSelf->DCache__DOT__pipe__DOT__isStore1));
        bufp->chgCData(oldp+147,(vlSelf->DCache__DOT__pipe__DOT__hitMeta_coh),2);
        bufp->chgBit(oldp+148,(vlSelf->DCache__DOT__pipe__DOT__hitWrite));
        bufp->chgBit(oldp+149,(((IData)(vlSelf->DCache__DOT__pipe__DOT__isStore1) 
                                & (0xffffffffffffffffULL 
                                   == vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask))));
        bufp->chgCData(oldp+150,((0xffU & (IData)((vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask 
                                                   >> 0x38U)))),8);
        bufp->chgCData(oldp+151,((0xffU & (IData)((vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask 
                                                   >> 0x30U)))),8);
        bufp->chgCData(oldp+152,((0xffU & (IData)((vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask 
                                                   >> 0x28U)))),8);
        bufp->chgCData(oldp+153,((0xffU & (IData)((vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask 
                                                   >> 0x20U)))),8);
        bufp->chgCData(oldp+154,((0xffU & (IData)((vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask 
                                                   >> 0x18U)))),8);
        bufp->chgCData(oldp+155,((0xffU & (IData)((vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask 
                                                   >> 0x10U)))),8);
        bufp->chgCData(oldp+156,((0xffU & (IData)((vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask 
                                                   >> 8U)))),8);
        bufp->chgCData(oldp+157,((0xffU & (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask))),8);
        bufp->chgBit(oldp+158,(((IData)(vlSelf->DCache__DOT__pipe__DOT__isStore1) 
                                & ((IData)(vlSelf->DCache__DOT__pipe__DOT__hitWrite) 
                                   & ((~ ((IData)(vlSelf->DCache__DOT__pipe__DOT__isStore1) 
                                          & (0xffffffffffffffffULL 
                                             == vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask))) 
                                      & (0U != (IData)(vlSelf->DCache__DOT__pipe__DOT___storeNeed1_T_35)))))));
        bufp->chgBit(oldp+159,(vlSelf->DCache__DOT__pipe__DOT__isProbe1));
        bufp->chgBit(oldp+160,(((IData)(vlSelf->DCache__DOT__pipe__DOT__isProbe1) 
                                & ((0U != (IData)(vlSelf->DCache__DOT__pipe__DOT__hitOh)) 
                                   & ((3U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_probeOp))
                                       ? (3U == (IData)(vlSelf->DCache__DOT__pipe__DOT__hitMeta_coh))
                                       : ((2U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_probeOp))
                                           ? (3U == (IData)(vlSelf->DCache__DOT__pipe__DOT__hitMeta_coh))
                                           : ((1U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_probeOp)) 
                                              & ((3U 
                                                  == (IData)(vlSelf->DCache__DOT__pipe__DOT__hitMeta_coh)) 
                                                 | (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_needData)))))))));
        bufp->chgBit(oldp+161,(vlSelf->DCache__DOT__pipe__DOT__isAtomic1));
        bufp->chgBit(oldp+162,(((IData)(vlSelf->DCache__DOT__pipe__DOT__isAtomic1) 
                                & (6U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd)))));
        bufp->chgBit(oldp+163,(((IData)(vlSelf->DCache__DOT__pipe__DOT__isAtomic1) 
                                & (7U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd)))));
        bufp->chgBit(oldp+164,(((IData)(vlSelf->DCache__DOT__pipe__DOT__isAtomic1) 
                                & ((0x1aU == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd)) 
                                   | ((0x1bU == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd)) 
                                      | (0x18U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd)))))));
        bufp->chgBit(oldp+165,(((IData)(vlSelf->DCache__DOT__pipe__DOT__isAtomic1) 
                                & (((4U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd)) 
                                    | ((9U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd)) 
                                       | ((0xaU == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd)) 
                                          | (0xbU == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd))))) 
                                   | ((8U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd)) 
                                      | ((0xcU == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd)) 
                                         | ((0xdU == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd)) 
                                            | ((0xeU 
                                                == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd)) 
                                               | (0xfU 
                                                  == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd))))))))));
        bufp->chgBit(oldp+166,(((IData)(vlSelf->DCache__DOT__pipe__DOT__hitWrite) 
                                & ((IData)(vlSelf->DCache__DOT__pipe__DOT__isAtomic1) 
                                   & ((6U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd)) 
                                      | ((7U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd)) 
                                         | (((0x1aU 
                                              == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd)) 
                                             | ((0x1bU 
                                                 == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd)) 
                                                | (0x18U 
                                                   == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd)))) 
                                            | (((4U 
                                                 == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd)) 
                                                | ((9U 
                                                    == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd)) 
                                                   | ((0xaU 
                                                       == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd)) 
                                                      | (0xbU 
                                                         == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd))))) 
                                               | ((8U 
                                                   == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd)) 
                                                  | ((0xcU 
                                                      == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd)) 
                                                     | ((0xdU 
                                                         == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd)) 
                                                        | ((0xeU 
                                                            == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd)) 
                                                           | (0xfU 
                                                              == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd))))))))))))));
        bufp->chgCData(oldp+167,(((IData)(vlSelf->DCache__DOT__pipe__DOT___occupyMask_T_2)
                                   ? (IData)(vlSelf->DCache__DOT__pipe_io_occupyWay)
                                   : 0U)),4);
        bufp->chgCData(oldp+168,(vlSelf->DCache__DOT__pipe__DOT__skipVictim),4);
        bufp->chgCData(oldp+169,(vlSelf->DCache__DOT__pipe__DOT__eligible),4);
        bufp->chgBit(oldp+170,((0U != (IData)(vlSelf->DCache__DOT__pipe__DOT__eligible))));
        bufp->chgBit(oldp+171,(vlSelf->DCache__DOT__pipe__DOT__replacing));
        bufp->chgBit(oldp+172,(vlSelf->DCache__DOT__pipe__DOT__willReplace));
        bufp->chgCData(oldp+173,(vlSelf->DCache__DOT__pipe__DOT__hitWay_hi),2);
        bufp->chgCData(oldp+174,(vlSelf->DCache__DOT__pipe__DOT__hitWay_lo),2);
        bufp->chgCData(oldp+175,(vlSelf->DCache__DOT__pipe__DOT__hitWay),2);
        bufp->chgCData(oldp+176,(vlSelf->DCache__DOT__pipe__DOT__emptyWay),2);
        bufp->chgBit(oldp+177,((0xfU & ((0U != (IData)(vlSelf->DCache__DOT__pipe__DOT__eligible)) 
                                        & ((IData)(vlSelf->DCache__DOT__pipe__DOT__eligible) 
                                           >> (IData)(vlSelf->DCache__DOT__pipe__DOT__plru_io_victim))))));
        bufp->chgCData(oldp+178,(vlSelf->DCache__DOT__pipe__DOT__victimWay),2);
        bufp->chgCData(oldp+179,(vlSelf->DCache__DOT__pipe__DOT__chosenWay1),2);
        bufp->chgBit(oldp+180,(vlSelf->DCache__DOT__pipe__DOT__victimNeedData));
        bufp->chgBit(oldp+181,(vlSelf->DCache__DOT__pipe__DOT__s1_need_data));
        bufp->chgBit(oldp+182,((1U & ((~ (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_need_data)) 
                                      | (0U == (IData)(vlSelf->DCache__DOT__data__DOT___io_line_ready_T))))));
        bufp->chgCData(oldp+183,(vlSelf->DCache__DOT__pipe__DOT__s2_way),2);
        bufp->chgQData(oldp+184,(vlSelf->DCache__DOT__pipe__DOT__victimPaddr_hi),42);
        bufp->chgQData(oldp+186,(((vlSelf->DCache__DOT__pipe__DOT___GEN_83 
                                   << 0xcU) | (QData)((IData)(
                                                              (0xfc0U 
                                                               & ((IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_set) 
                                                                  << 6U)))))),48);
        bufp->chgBit(oldp+188,((1U & ((~ (IData)(vlSelf->DCache__DOT__pipe__DOT__isRefill1)) 
                                      | ((0U != (IData)(vlSelf->DCache__DOT__pipe__DOT__hitOh)) 
                                         | ((IData)(vlSelf->DCache__DOT__pipe__DOT__useSpecified) 
                                            | ((IData)(vlSelf->DCache__DOT__pipe__DOT__useEmpty) 
                                               | (IData)(vlSelf->DCache__DOT__pipe__DOT__willReplace))))))));
        bufp->chgBit(oldp+189,(vlSelf->DCache__DOT__pipe__DOT__twoBanks1));
        bufp->chgCData(oldp+190,((7U & ((IData)(1U) 
                                        + (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_wordIdx)))),3);
        bufp->chgCData(oldp+191,((0xffU & (((IData)(1U) 
                                            << (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_wordIdx)) 
                                           | ((IData)(vlSelf->DCache__DOT__pipe__DOT__twoBanks1)
                                               ? ((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_wordIdx))))
                                               : 0U)))),8);
        bufp->chgQData(oldp+192,(((0x3ffffffff00ULL 
                                   & (vlSelf->DCache__DOT__pipe__DOT__s1_hold_addr 
                                      >> 6U)) | (QData)((IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_set)))),42);
        bufp->chgBit(oldp+194,(vlSelf->DCache__DOT__pipe__DOT__s2_can_install));
        bufp->chgBit(oldp+195,(vlSelf->DCache__DOT__pipe__DOT__s2_replace));
        bufp->chgBit(oldp+196,(vlSelf->DCache__DOT__pipe__DOT__s2_replace_dirty));
        bufp->chgQData(oldp+197,(vlSelf->DCache__DOT__pipe__DOT__s2_replace_addr),48);
        bufp->chgQData(oldp+199,(vlSelf->DCache__DOT__pipe__DOT__s2_line_0_0),64);
        bufp->chgQData(oldp+201,(vlSelf->DCache__DOT__pipe__DOT__s2_line_0_1),64);
        bufp->chgQData(oldp+203,(vlSelf->DCache__DOT__pipe__DOT__s2_line_0_2),64);
        bufp->chgQData(oldp+205,(vlSelf->DCache__DOT__pipe__DOT__s2_line_0_3),64);
        bufp->chgQData(oldp+207,(vlSelf->DCache__DOT__pipe__DOT__s2_line_1_0),64);
        bufp->chgQData(oldp+209,(vlSelf->DCache__DOT__pipe__DOT__s2_line_1_1),64);
        bufp->chgQData(oldp+211,(vlSelf->DCache__DOT__pipe__DOT__s2_line_1_2),64);
        bufp->chgQData(oldp+213,(vlSelf->DCache__DOT__pipe__DOT__s2_line_1_3),64);
        bufp->chgQData(oldp+215,(vlSelf->DCache__DOT__pipe__DOT__s2_line_2_0),64);
        bufp->chgQData(oldp+217,(vlSelf->DCache__DOT__pipe__DOT__s2_line_2_1),64);
        bufp->chgQData(oldp+219,(vlSelf->DCache__DOT__pipe__DOT__s2_line_2_2),64);
        bufp->chgQData(oldp+221,(vlSelf->DCache__DOT__pipe__DOT__s2_line_2_3),64);
        bufp->chgQData(oldp+223,(vlSelf->DCache__DOT__pipe__DOT__s2_line_3_0),64);
        bufp->chgQData(oldp+225,(vlSelf->DCache__DOT__pipe__DOT__s2_line_3_1),64);
        bufp->chgQData(oldp+227,(vlSelf->DCache__DOT__pipe__DOT__s2_line_3_2),64);
        bufp->chgQData(oldp+229,(vlSelf->DCache__DOT__pipe__DOT__s2_line_3_3),64);
        bufp->chgQData(oldp+231,(vlSelf->DCache__DOT__pipe__DOT__s2_line_4_0),64);
        bufp->chgQData(oldp+233,(vlSelf->DCache__DOT__pipe__DOT__s2_line_4_1),64);
        bufp->chgQData(oldp+235,(vlSelf->DCache__DOT__pipe__DOT__s2_line_4_2),64);
        bufp->chgQData(oldp+237,(vlSelf->DCache__DOT__pipe__DOT__s2_line_4_3),64);
        bufp->chgQData(oldp+239,(vlSelf->DCache__DOT__pipe__DOT__s2_line_5_0),64);
        bufp->chgQData(oldp+241,(vlSelf->DCache__DOT__pipe__DOT__s2_line_5_1),64);
        bufp->chgQData(oldp+243,(vlSelf->DCache__DOT__pipe__DOT__s2_line_5_2),64);
        bufp->chgQData(oldp+245,(vlSelf->DCache__DOT__pipe__DOT__s2_line_5_3),64);
        bufp->chgQData(oldp+247,(vlSelf->DCache__DOT__pipe__DOT__s2_line_6_0),64);
        bufp->chgQData(oldp+249,(vlSelf->DCache__DOT__pipe__DOT__s2_line_6_1),64);
        bufp->chgQData(oldp+251,(vlSelf->DCache__DOT__pipe__DOT__s2_line_6_2),64);
        bufp->chgQData(oldp+253,(vlSelf->DCache__DOT__pipe__DOT__s2_line_6_3),64);
        bufp->chgQData(oldp+255,(vlSelf->DCache__DOT__pipe__DOT__s2_line_7_0),64);
        bufp->chgQData(oldp+257,(vlSelf->DCache__DOT__pipe__DOT__s2_line_7_1),64);
        bufp->chgQData(oldp+259,(vlSelf->DCache__DOT__pipe__DOT__s2_line_7_2),64);
        bufp->chgQData(oldp+261,(vlSelf->DCache__DOT__pipe__DOT__s2_line_7_3),64);
        bufp->chgQData(oldp+263,(((IData)(vlSelf->DCache__DOT__data__DOT__io_lineResp_valid_REG)
                                   ? vlSelf->DCache__DOT__data__DOT__dataBank_0_io_r_data_0
                                   : vlSelf->DCache__DOT__pipe__DOT__s2_line_0_0)),64);
        bufp->chgQData(oldp+265,(((IData)(vlSelf->DCache__DOT__data__DOT__io_lineResp_valid_REG)
                                   ? vlSelf->DCache__DOT__data__DOT__dataBank_0_io_r_data_1
                                   : vlSelf->DCache__DOT__pipe__DOT__s2_line_0_1)),64);
        bufp->chgQData(oldp+267,(((IData)(vlSelf->DCache__DOT__data__DOT__io_lineResp_valid_REG)
                                   ? vlSelf->DCache__DOT__data__DOT__dataBank_1_io_r_data_0
                                   : vlSelf->DCache__DOT__pipe__DOT__s2_line_1_0)),64);
        bufp->chgQData(oldp+269,(((IData)(vlSelf->DCache__DOT__data__DOT__io_lineResp_valid_REG)
                                   ? vlSelf->DCache__DOT__data__DOT__dataBank_1_io_r_data_1
                                   : vlSelf->DCache__DOT__pipe__DOT__s2_line_1_1)),64);
        bufp->chgQData(oldp+271,(((IData)(vlSelf->DCache__DOT__data__DOT__io_lineResp_valid_REG)
                                   ? vlSelf->DCache__DOT__data__DOT__dataBank_2_io_r_data_0
                                   : vlSelf->DCache__DOT__pipe__DOT__s2_line_2_0)),64);
        bufp->chgQData(oldp+273,(((IData)(vlSelf->DCache__DOT__data__DOT__io_lineResp_valid_REG)
                                   ? vlSelf->DCache__DOT__data__DOT__dataBank_2_io_r_data_1
                                   : vlSelf->DCache__DOT__pipe__DOT__s2_line_2_1)),64);
        bufp->chgQData(oldp+275,(((IData)(vlSelf->DCache__DOT__data__DOT__io_lineResp_valid_REG)
                                   ? vlSelf->DCache__DOT__data__DOT__dataBank_3_io_r_data_0
                                   : vlSelf->DCache__DOT__pipe__DOT__s2_line_3_0)),64);
        bufp->chgQData(oldp+277,(((IData)(vlSelf->DCache__DOT__data__DOT__io_lineResp_valid_REG)
                                   ? vlSelf->DCache__DOT__data__DOT__dataBank_3_io_r_data_1
                                   : vlSelf->DCache__DOT__pipe__DOT__s2_line_3_1)),64);
        bufp->chgQData(oldp+279,(((IData)(vlSelf->DCache__DOT__data__DOT__io_lineResp_valid_REG)
                                   ? vlSelf->DCache__DOT__data__DOT__dataBank_4_io_r_data_0
                                   : vlSelf->DCache__DOT__pipe__DOT__s2_line_4_0)),64);
        bufp->chgQData(oldp+281,(((IData)(vlSelf->DCache__DOT__data__DOT__io_lineResp_valid_REG)
                                   ? vlSelf->DCache__DOT__data__DOT__dataBank_4_io_r_data_1
                                   : vlSelf->DCache__DOT__pipe__DOT__s2_line_4_1)),64);
        bufp->chgQData(oldp+283,(((IData)(vlSelf->DCache__DOT__data__DOT__io_lineResp_valid_REG)
                                   ? vlSelf->DCache__DOT__data__DOT__dataBank_5_io_r_data_0
                                   : vlSelf->DCache__DOT__pipe__DOT__s2_line_5_0)),64);
        bufp->chgQData(oldp+285,(((IData)(vlSelf->DCache__DOT__data__DOT__io_lineResp_valid_REG)
                                   ? vlSelf->DCache__DOT__data__DOT__dataBank_5_io_r_data_1
                                   : vlSelf->DCache__DOT__pipe__DOT__s2_line_5_1)),64);
        bufp->chgQData(oldp+287,(((IData)(vlSelf->DCache__DOT__data__DOT__io_lineResp_valid_REG)
                                   ? vlSelf->DCache__DOT__data__DOT__dataBank_6_io_r_data_0
                                   : vlSelf->DCache__DOT__pipe__DOT__s2_line_6_0)),64);
        bufp->chgQData(oldp+289,(((IData)(vlSelf->DCache__DOT__data__DOT__io_lineResp_valid_REG)
                                   ? vlSelf->DCache__DOT__data__DOT__dataBank_6_io_r_data_1
                                   : vlSelf->DCache__DOT__pipe__DOT__s2_line_6_1)),64);
        bufp->chgQData(oldp+291,(((IData)(vlSelf->DCache__DOT__data__DOT__io_lineResp_valid_REG)
                                   ? vlSelf->DCache__DOT__data__DOT__dataBank_7_io_r_data_0
                                   : vlSelf->DCache__DOT__pipe__DOT__s2_line_7_0)),64);
        bufp->chgQData(oldp+293,(((IData)(vlSelf->DCache__DOT__data__DOT__io_lineResp_valid_REG)
                                   ? vlSelf->DCache__DOT__data__DOT__dataBank_7_io_r_data_1
                                   : vlSelf->DCache__DOT__pipe__DOT__s2_line_7_1)),64);
        bufp->chgBit(oldp+295,(vlSelf->DCache__DOT__pipe__DOT__s3_replace_dirty));
        bufp->chgQData(oldp+296,(vlSelf->DCache__DOT__pipe__DOT__s3_replace_addr),48);
        bufp->chgBit(oldp+298,(((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_atomic) 
                                & (6U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd)))));
        bufp->chgBit(oldp+299,(vlSelf->DCache__DOT__pipe__DOT__probeNeedWb));
        bufp->chgCData(oldp+300,(((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_refill_retUnique)
                                   ? ((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_refill_passDirty)
                                       ? 3U : 2U) : 1U)),2);
        bufp->chgCData(oldp+301,(vlSelf->DCache__DOT__pipe__DOT__refillCoh),2);
        bufp->chgBit(oldp+302,(vlSelf->DCache__DOT__pipe__DOT__refillMutate));
        bufp->chgBit(oldp+303,(((IData)(vlSelf->DCache__DOT__pipe__DOT__doInstall) 
                                & (0U != vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask))));
        bufp->chgCData(oldp+304,(vlSelf->DCache__DOT__pipe__DOT__installCoh),2);
        bufp->chgQData(oldp+305,((((QData)((IData)(
                                                   vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0U])))),64);
        bufp->chgBit(oldp+307,((0xffU == (0xffU & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask)))));
        bufp->chgCData(oldp+308,((0xffU & ((1U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask))
                                            ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0U]
                                            : (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_word_0)))),8);
        bufp->chgCData(oldp+309,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 1U)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0U] 
                                                << 0x18U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0U] 
                                                  >> 8U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_0 
                                                       >> 8U))))),8);
        bufp->chgCData(oldp+310,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 2U)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0U] 
                                                << 0x10U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0U] 
                                                  >> 0x10U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_0 
                                                       >> 0x10U))))),8);
        bufp->chgCData(oldp+311,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 3U)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0U] 
                                                << 8U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0U] 
                                                  >> 0x18U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_0 
                                                       >> 0x18U))))),8);
        bufp->chgCData(oldp+312,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 4U)))
                                            ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[1U]
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_0 
                                                       >> 0x20U))))),8);
        bufp->chgCData(oldp+313,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 5U)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[1U] 
                                                << 0x18U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[1U] 
                                                  >> 8U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_0 
                                                       >> 0x28U))))),8);
        bufp->chgCData(oldp+314,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 6U)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[1U] 
                                                << 0x10U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[1U] 
                                                  >> 0x10U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_0 
                                                       >> 0x30U))))),8);
        bufp->chgCData(oldp+315,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 7U)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[1U] 
                                                << 8U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[1U] 
                                                  >> 0x18U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_0 
                                                       >> 0x38U))))),8);
        bufp->chgQData(oldp+316,(((0xffU == (0xffU 
                                             & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask)))
                                   ? (((QData)((IData)(
                                                       vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0U])))
                                   : vlSelf->DCache__DOT__pipe__DOT___storeWords_0_T_1)),64);
        bufp->chgQData(oldp+318,((((QData)((IData)(
                                                   vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[2U])))),64);
        bufp->chgBit(oldp+320,((0xffU == (0xffU & (IData)(
                                                          (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                           >> 8U))))));
        bufp->chgCData(oldp+321,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 8U)))
                                            ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[2U]
                                            : (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_word_1)))),8);
        bufp->chgCData(oldp+322,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 9U)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[2U] 
                                                << 0x18U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[2U] 
                                                  >> 8U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_1 
                                                       >> 8U))))),8);
        bufp->chgCData(oldp+323,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0xaU)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[2U] 
                                                << 0x10U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[2U] 
                                                  >> 0x10U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_1 
                                                       >> 0x10U))))),8);
        bufp->chgCData(oldp+324,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0xbU)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[2U] 
                                                << 8U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[2U] 
                                                  >> 0x18U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_1 
                                                       >> 0x18U))))),8);
        bufp->chgCData(oldp+325,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0xcU)))
                                            ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[3U]
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_1 
                                                       >> 0x20U))))),8);
        bufp->chgCData(oldp+326,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0xdU)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[3U] 
                                                << 0x18U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[3U] 
                                                  >> 8U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_1 
                                                       >> 0x28U))))),8);
        bufp->chgCData(oldp+327,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0xeU)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[3U] 
                                                << 0x10U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[3U] 
                                                  >> 0x10U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_1 
                                                       >> 0x30U))))),8);
        bufp->chgCData(oldp+328,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0xfU)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[3U] 
                                                << 8U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[3U] 
                                                  >> 0x18U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_1 
                                                       >> 0x38U))))),8);
        bufp->chgQData(oldp+329,(((0xffU == (0xffU 
                                             & (IData)(
                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                        >> 8U))))
                                   ? (((QData)((IData)(
                                                       vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[2U])))
                                   : vlSelf->DCache__DOT__pipe__DOT___storeWords_1_T_1)),64);
        bufp->chgQData(oldp+331,((((QData)((IData)(
                                                   vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[5U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[4U])))),64);
        bufp->chgBit(oldp+333,((0xffU == (0xffU & (IData)(
                                                          (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                           >> 0x10U))))));
        bufp->chgCData(oldp+334,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x10U)))
                                            ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[4U]
                                            : (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_word_2)))),8);
        bufp->chgCData(oldp+335,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x11U)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[4U] 
                                                << 0x18U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[4U] 
                                                  >> 8U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_2 
                                                       >> 8U))))),8);
        bufp->chgCData(oldp+336,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x12U)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[4U] 
                                                << 0x10U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[4U] 
                                                  >> 0x10U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_2 
                                                       >> 0x10U))))),8);
        bufp->chgCData(oldp+337,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x13U)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[4U] 
                                                << 8U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[4U] 
                                                  >> 0x18U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_2 
                                                       >> 0x18U))))),8);
        bufp->chgCData(oldp+338,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x14U)))
                                            ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[5U]
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_2 
                                                       >> 0x20U))))),8);
        bufp->chgCData(oldp+339,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x15U)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[5U] 
                                                << 0x18U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[5U] 
                                                  >> 8U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_2 
                                                       >> 0x28U))))),8);
        bufp->chgCData(oldp+340,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x16U)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[5U] 
                                                << 0x10U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[5U] 
                                                  >> 0x10U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_2 
                                                       >> 0x30U))))),8);
        bufp->chgCData(oldp+341,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x17U)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[5U] 
                                                << 8U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[5U] 
                                                  >> 0x18U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_2 
                                                       >> 0x38U))))),8);
        bufp->chgQData(oldp+342,(((0xffU == (0xffU 
                                             & (IData)(
                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                        >> 0x10U))))
                                   ? (((QData)((IData)(
                                                       vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[5U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[4U])))
                                   : vlSelf->DCache__DOT__pipe__DOT___storeWords_2_T_1)),64);
        bufp->chgQData(oldp+344,((((QData)((IData)(
                                                   vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[7U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[6U])))),64);
        bufp->chgBit(oldp+346,((0xffU == (0xffU & (IData)(
                                                          (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                           >> 0x18U))))));
        bufp->chgCData(oldp+347,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x18U)))
                                            ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[6U]
                                            : (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_word_3)))),8);
        bufp->chgCData(oldp+348,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x19U)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[6U] 
                                                << 0x18U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[6U] 
                                                  >> 8U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_3 
                                                       >> 8U))))),8);
        bufp->chgCData(oldp+349,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x1aU)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[6U] 
                                                << 0x10U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[6U] 
                                                  >> 0x10U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_3 
                                                       >> 0x10U))))),8);
        bufp->chgCData(oldp+350,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x1bU)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[6U] 
                                                << 8U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[6U] 
                                                  >> 0x18U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_3 
                                                       >> 0x18U))))),8);
        bufp->chgCData(oldp+351,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x1cU)))
                                            ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[7U]
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_3 
                                                       >> 0x20U))))),8);
        bufp->chgCData(oldp+352,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x1dU)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[7U] 
                                                << 0x18U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[7U] 
                                                  >> 8U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_3 
                                                       >> 0x28U))))),8);
        bufp->chgCData(oldp+353,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x1eU)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[7U] 
                                                << 0x10U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[7U] 
                                                  >> 0x10U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_3 
                                                       >> 0x30U))))),8);
        bufp->chgCData(oldp+354,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x1fU)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[7U] 
                                                << 8U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[7U] 
                                                  >> 0x18U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_3 
                                                       >> 0x38U))))),8);
        bufp->chgQData(oldp+355,(((0xffU == (0xffU 
                                             & (IData)(
                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                        >> 0x18U))))
                                   ? (((QData)((IData)(
                                                       vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[7U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[6U])))
                                   : vlSelf->DCache__DOT__pipe__DOT___storeWords_3_T_1)),64);
        bufp->chgQData(oldp+357,((((QData)((IData)(
                                                   vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[9U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[8U])))),64);
        bufp->chgBit(oldp+359,((0xffU == (0xffU & (IData)(
                                                          (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                           >> 0x20U))))));
        bufp->chgCData(oldp+360,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x20U)))
                                            ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[8U]
                                            : (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_word_4)))),8);
        bufp->chgCData(oldp+361,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x21U)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[8U] 
                                                << 0x18U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[8U] 
                                                  >> 8U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_4 
                                                       >> 8U))))),8);
        bufp->chgCData(oldp+362,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x22U)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[8U] 
                                                << 0x10U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[8U] 
                                                  >> 0x10U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_4 
                                                       >> 0x10U))))),8);
        bufp->chgCData(oldp+363,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x23U)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[8U] 
                                                << 8U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[8U] 
                                                  >> 0x18U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_4 
                                                       >> 0x18U))))),8);
        bufp->chgCData(oldp+364,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x24U)))
                                            ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[9U]
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_4 
                                                       >> 0x20U))))),8);
        bufp->chgCData(oldp+365,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x25U)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[9U] 
                                                << 0x18U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[9U] 
                                                  >> 8U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_4 
                                                       >> 0x28U))))),8);
        bufp->chgCData(oldp+366,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x26U)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[9U] 
                                                << 0x10U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[9U] 
                                                  >> 0x10U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_4 
                                                       >> 0x30U))))),8);
        bufp->chgCData(oldp+367,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x27U)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[9U] 
                                                << 8U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[9U] 
                                                  >> 0x18U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_4 
                                                       >> 0x38U))))),8);
        bufp->chgQData(oldp+368,(((0xffU == (0xffU 
                                             & (IData)(
                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                        >> 0x20U))))
                                   ? (((QData)((IData)(
                                                       vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[9U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[8U])))
                                   : vlSelf->DCache__DOT__pipe__DOT___storeWords_4_T_1)),64);
        bufp->chgQData(oldp+370,((((QData)((IData)(
                                                   vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xbU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xaU])))),64);
        bufp->chgBit(oldp+372,((0xffU == (0xffU & (IData)(
                                                          (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                           >> 0x28U))))));
        bufp->chgCData(oldp+373,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x28U)))
                                            ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xaU]
                                            : (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_word_5)))),8);
        bufp->chgCData(oldp+374,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x29U)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xaU] 
                                                << 0x18U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xaU] 
                                                  >> 8U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_5 
                                                       >> 8U))))),8);
        bufp->chgCData(oldp+375,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x2aU)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xaU] 
                                                << 0x10U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xaU] 
                                                  >> 0x10U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_5 
                                                       >> 0x10U))))),8);
        bufp->chgCData(oldp+376,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x2bU)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xaU] 
                                                << 8U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xaU] 
                                                  >> 0x18U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_5 
                                                       >> 0x18U))))),8);
        bufp->chgCData(oldp+377,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x2cU)))
                                            ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xbU]
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_5 
                                                       >> 0x20U))))),8);
        bufp->chgCData(oldp+378,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x2dU)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xbU] 
                                                << 0x18U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xbU] 
                                                  >> 8U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_5 
                                                       >> 0x28U))))),8);
        bufp->chgCData(oldp+379,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x2eU)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xbU] 
                                                << 0x10U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xbU] 
                                                  >> 0x10U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_5 
                                                       >> 0x30U))))),8);
        bufp->chgCData(oldp+380,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x2fU)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xbU] 
                                                << 8U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xbU] 
                                                  >> 0x18U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_5 
                                                       >> 0x38U))))),8);
        bufp->chgQData(oldp+381,(((0xffU == (0xffU 
                                             & (IData)(
                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                        >> 0x28U))))
                                   ? (((QData)((IData)(
                                                       vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xbU])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xaU])))
                                   : vlSelf->DCache__DOT__pipe__DOT___storeWords_5_T_1)),64);
        bufp->chgQData(oldp+383,((((QData)((IData)(
                                                   vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xdU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xcU])))),64);
        bufp->chgBit(oldp+385,((0xffU == (0xffU & (IData)(
                                                          (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                           >> 0x30U))))));
        bufp->chgCData(oldp+386,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x30U)))
                                            ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xcU]
                                            : (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_word_6)))),8);
        bufp->chgCData(oldp+387,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x31U)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xcU] 
                                                << 0x18U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xcU] 
                                                  >> 8U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_6 
                                                       >> 8U))))),8);
        bufp->chgCData(oldp+388,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x32U)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xcU] 
                                                << 0x10U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xcU] 
                                                  >> 0x10U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_6 
                                                       >> 0x10U))))),8);
        bufp->chgCData(oldp+389,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x33U)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xcU] 
                                                << 8U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xcU] 
                                                  >> 0x18U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_6 
                                                       >> 0x18U))))),8);
        bufp->chgCData(oldp+390,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x34U)))
                                            ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xdU]
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_6 
                                                       >> 0x20U))))),8);
        bufp->chgCData(oldp+391,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x35U)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xdU] 
                                                << 0x18U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xdU] 
                                                  >> 8U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_6 
                                                       >> 0x28U))))),8);
        bufp->chgCData(oldp+392,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x36U)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xdU] 
                                                << 0x10U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xdU] 
                                                  >> 0x10U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_6 
                                                       >> 0x30U))))),8);
        bufp->chgCData(oldp+393,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x37U)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xdU] 
                                                << 8U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xdU] 
                                                  >> 0x18U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_6 
                                                       >> 0x38U))))),8);
        bufp->chgQData(oldp+394,(((0xffU == (0xffU 
                                             & (IData)(
                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                        >> 0x30U))))
                                   ? (((QData)((IData)(
                                                       vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xdU])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xcU])))
                                   : vlSelf->DCache__DOT__pipe__DOT___storeWords_6_T_1)),64);
        bufp->chgQData(oldp+396,((((QData)((IData)(
                                                   vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xfU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xeU])))),64);
        bufp->chgBit(oldp+398,((0xffU == (0xffU & (IData)(
                                                          (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                           >> 0x38U))))));
        bufp->chgCData(oldp+399,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x38U)))
                                            ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xeU]
                                            : (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_word_7)))),8);
        bufp->chgCData(oldp+400,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x39U)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xeU] 
                                                << 0x18U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xeU] 
                                                  >> 8U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_7 
                                                       >> 8U))))),8);
        bufp->chgCData(oldp+401,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x3aU)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xeU] 
                                                << 0x10U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xeU] 
                                                  >> 0x10U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_7 
                                                       >> 0x10U))))),8);
        bufp->chgCData(oldp+402,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x3bU)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xeU] 
                                                << 8U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xeU] 
                                                  >> 0x18U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_7 
                                                       >> 0x18U))))),8);
        bufp->chgCData(oldp+403,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x3cU)))
                                            ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xfU]
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_7 
                                                       >> 0x20U))))),8);
        bufp->chgCData(oldp+404,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x3dU)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xfU] 
                                                << 0x18U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xfU] 
                                                  >> 8U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_7 
                                                       >> 0x28U))))),8);
        bufp->chgCData(oldp+405,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x3eU)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xfU] 
                                                << 0x10U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xfU] 
                                                  >> 0x10U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_7 
                                                       >> 0x30U))))),8);
        bufp->chgCData(oldp+406,((0xffU & ((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x3fU)))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xfU] 
                                                << 8U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xfU] 
                                                  >> 0x18U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__s3_word_7 
                                                       >> 0x38U))))),8);
        bufp->chgQData(oldp+407,(((0xffU == (0xffU 
                                             & (IData)(
                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                        >> 0x38U))))
                                   ? (((QData)((IData)(
                                                       vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xfU])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xeU])))
                                   : vlSelf->DCache__DOT__pipe__DOT___storeWords_7_T_1)),64);
        bufp->chgCData(oldp+409,((0xffU & ((1U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                            ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[0U]
                                            : (IData)(vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs)))),8);
        bufp->chgCData(oldp+410,((0xffU & ((2U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[0U] 
                                                << 0x18U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[0U] 
                                                  >> 8U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs 
                                                       >> 8U))))),8);
        bufp->chgCData(oldp+411,((0xffU & ((4U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[0U] 
                                                << 0x10U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[0U] 
                                                  >> 0x10U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs 
                                                       >> 0x10U))))),8);
        bufp->chgCData(oldp+412,((0xffU & ((8U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[0U] 
                                                << 8U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[0U] 
                                                  >> 0x18U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs 
                                                       >> 0x18U))))),8);
        bufp->chgCData(oldp+413,((0xffU & ((0x10U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                            ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[1U]
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs 
                                                       >> 0x20U))))),8);
        bufp->chgCData(oldp+414,((0xffU & ((0x20U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[1U] 
                                                << 0x18U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[1U] 
                                                  >> 8U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs 
                                                       >> 0x28U))))),8);
        bufp->chgCData(oldp+415,((0xffU & ((0x40U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[1U] 
                                                << 0x10U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[1U] 
                                                  >> 0x10U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs 
                                                       >> 0x30U))))),8);
        bufp->chgCData(oldp+416,((0xffU & ((0x80U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[1U] 
                                                << 8U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[1U] 
                                                  >> 0x18U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs 
                                                       >> 0x38U))))),8);
        bufp->chgQData(oldp+417,(vlSelf->DCache__DOT__pipe__DOT__atomicLow),64);
        bufp->chgCData(oldp+419,((0xffU & ((0x100U 
                                            & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                            ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[2U]
                                            : (IData)(vlSelf->DCache__DOT__pipe__DOT__old1)))),8);
        bufp->chgCData(oldp+420,((0xffU & ((0x200U 
                                            & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[2U] 
                                                << 0x18U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[2U] 
                                                  >> 8U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__old1 
                                                       >> 8U))))),8);
        bufp->chgCData(oldp+421,((0xffU & ((0x400U 
                                            & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[2U] 
                                                << 0x10U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[2U] 
                                                  >> 0x10U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__old1 
                                                       >> 0x10U))))),8);
        bufp->chgCData(oldp+422,((0xffU & ((0x800U 
                                            & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[2U] 
                                                << 8U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[2U] 
                                                  >> 0x18U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__old1 
                                                       >> 0x18U))))),8);
        bufp->chgCData(oldp+423,((0xffU & ((0x1000U 
                                            & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                            ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[3U]
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__old1 
                                                       >> 0x20U))))),8);
        bufp->chgCData(oldp+424,((0xffU & ((0x2000U 
                                            & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[3U] 
                                                << 0x18U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[3U] 
                                                  >> 8U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__old1 
                                                       >> 0x28U))))),8);
        bufp->chgCData(oldp+425,((0xffU & ((0x4000U 
                                            & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[3U] 
                                                << 0x10U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[3U] 
                                                  >> 0x10U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__old1 
                                                       >> 0x30U))))),8);
        bufp->chgCData(oldp+426,((0xffU & ((0x8000U 
                                            & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                            ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[3U] 
                                                << 8U) 
                                               | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[3U] 
                                                  >> 0x18U))
                                            : (IData)(
                                                      (vlSelf->DCache__DOT__pipe__DOT__old1 
                                                       >> 0x38U))))),8);
        bufp->chgQData(oldp+427,(vlSelf->DCache__DOT__pipe__DOT__atomicHigh),64);
        bufp->chgBit(oldp+429,((0U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx))));
        bufp->chgBit(oldp+430,((0U == (7U & ((IData)(1U) 
                                             + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx))))));
        bufp->chgBit(oldp+431,(((0U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)) 
                                | ((0U == (7U & ((IData)(1U) 
                                                 + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)))) 
                                   & (IData)(vlSelf->DCache__DOT__pipe__DOT__twoBanks3)))));
        bufp->chgQData(oldp+432,(((IData)(vlSelf->DCache__DOT__pipe_io_pendingSnoop_valid)
                                   ? vlSelf->DCache__DOT__pipe__DOT__refillLine_lo_lo_lo
                                   : vlSelf->DCache__DOT__pipe__DOT__s3_word_0)),64);
        bufp->chgBit(oldp+434,(vlSelf->DCache__DOT__pipe__DOT__atomicWords_useAlu));
        bufp->chgBit(oldp+435,((((0U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)) 
                                 | ((0U == (7U & ((IData)(1U) 
                                                  + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)))) 
                                    & (IData)(vlSelf->DCache__DOT__pipe__DOT__twoBanks3))) 
                                & ((~ (IData)(vlSelf->DCache__DOT__pipe__DOT__atomicWords_useAlu)) 
                                   & (IData)(vlSelf->DCache__DOT__pipe__DOT___atomicWords_useMerge_T_6)))));
        bufp->chgQData(oldp+436,(vlSelf->DCache__DOT__pipe__DOT__atomicWords_0),64);
        bufp->chgBit(oldp+438,((1U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx))));
        bufp->chgBit(oldp+439,((1U == (7U & ((IData)(1U) 
                                             + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx))))));
        bufp->chgBit(oldp+440,(((1U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)) 
                                | ((1U == (7U & ((IData)(1U) 
                                                 + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)))) 
                                   & (IData)(vlSelf->DCache__DOT__pipe__DOT__twoBanks3)))));
        bufp->chgQData(oldp+441,(((IData)(vlSelf->DCache__DOT__pipe_io_pendingSnoop_valid)
                                   ? vlSelf->DCache__DOT__pipe__DOT__refillWords_1
                                   : vlSelf->DCache__DOT__pipe__DOT__s3_word_1)),64);
        bufp->chgBit(oldp+443,(vlSelf->DCache__DOT__pipe__DOT__atomicWords_useAlu_1));
        bufp->chgBit(oldp+444,((((1U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)) 
                                 | ((1U == (7U & ((IData)(1U) 
                                                  + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)))) 
                                    & (IData)(vlSelf->DCache__DOT__pipe__DOT__twoBanks3))) 
                                & ((~ (IData)(vlSelf->DCache__DOT__pipe__DOT__atomicWords_useAlu_1)) 
                                   & (IData)(vlSelf->DCache__DOT__pipe__DOT___atomicWords_useMerge_T_6)))));
        bufp->chgQData(oldp+445,(vlSelf->DCache__DOT__pipe__DOT__atomicWords_1),64);
        bufp->chgBit(oldp+447,((2U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx))));
        bufp->chgBit(oldp+448,((2U == (7U & ((IData)(1U) 
                                             + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx))))));
        bufp->chgBit(oldp+449,(((2U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)) 
                                | ((2U == (7U & ((IData)(1U) 
                                                 + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)))) 
                                   & (IData)(vlSelf->DCache__DOT__pipe__DOT__twoBanks3)))));
        bufp->chgQData(oldp+450,(((IData)(vlSelf->DCache__DOT__pipe_io_pendingSnoop_valid)
                                   ? vlSelf->DCache__DOT__pipe__DOT__refillLine_lo_hi_lo
                                   : vlSelf->DCache__DOT__pipe__DOT__s3_word_2)),64);
        bufp->chgBit(oldp+452,(vlSelf->DCache__DOT__pipe__DOT__atomicWords_useAlu_2));
        bufp->chgBit(oldp+453,((((2U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)) 
                                 | ((2U == (7U & ((IData)(1U) 
                                                  + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)))) 
                                    & (IData)(vlSelf->DCache__DOT__pipe__DOT__twoBanks3))) 
                                & ((~ (IData)(vlSelf->DCache__DOT__pipe__DOT__atomicWords_useAlu_2)) 
                                   & (IData)(vlSelf->DCache__DOT__pipe__DOT___atomicWords_useMerge_T_6)))));
        bufp->chgQData(oldp+454,(vlSelf->DCache__DOT__pipe__DOT__atomicWords_2),64);
        bufp->chgBit(oldp+456,((3U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx))));
        bufp->chgBit(oldp+457,((3U == (7U & ((IData)(1U) 
                                             + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx))))));
        bufp->chgBit(oldp+458,(((3U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)) 
                                | ((3U == (7U & ((IData)(1U) 
                                                 + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)))) 
                                   & (IData)(vlSelf->DCache__DOT__pipe__DOT__twoBanks3)))));
        bufp->chgQData(oldp+459,(((IData)(vlSelf->DCache__DOT__pipe_io_pendingSnoop_valid)
                                   ? vlSelf->DCache__DOT__pipe__DOT__refillWords_3
                                   : vlSelf->DCache__DOT__pipe__DOT__s3_word_3)),64);
        bufp->chgBit(oldp+461,(vlSelf->DCache__DOT__pipe__DOT__atomicWords_useAlu_3));
        bufp->chgBit(oldp+462,((((3U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)) 
                                 | ((3U == (7U & ((IData)(1U) 
                                                  + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)))) 
                                    & (IData)(vlSelf->DCache__DOT__pipe__DOT__twoBanks3))) 
                                & ((~ (IData)(vlSelf->DCache__DOT__pipe__DOT__atomicWords_useAlu_3)) 
                                   & (IData)(vlSelf->DCache__DOT__pipe__DOT___atomicWords_useMerge_T_6)))));
        bufp->chgQData(oldp+463,(vlSelf->DCache__DOT__pipe__DOT__atomicWords_3),64);
        bufp->chgBit(oldp+465,((4U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx))));
        bufp->chgBit(oldp+466,((4U == (7U & ((IData)(1U) 
                                             + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx))))));
        bufp->chgBit(oldp+467,(((4U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)) 
                                | ((4U == (7U & ((IData)(1U) 
                                                 + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)))) 
                                   & (IData)(vlSelf->DCache__DOT__pipe__DOT__twoBanks3)))));
        bufp->chgQData(oldp+468,(((IData)(vlSelf->DCache__DOT__pipe_io_pendingSnoop_valid)
                                   ? vlSelf->DCache__DOT__pipe__DOT__refillLine_hi_lo_lo
                                   : vlSelf->DCache__DOT__pipe__DOT__s3_word_4)),64);
        bufp->chgBit(oldp+470,(vlSelf->DCache__DOT__pipe__DOT__atomicWords_useAlu_4));
        bufp->chgBit(oldp+471,((((4U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)) 
                                 | ((4U == (7U & ((IData)(1U) 
                                                  + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)))) 
                                    & (IData)(vlSelf->DCache__DOT__pipe__DOT__twoBanks3))) 
                                & ((~ (IData)(vlSelf->DCache__DOT__pipe__DOT__atomicWords_useAlu_4)) 
                                   & (IData)(vlSelf->DCache__DOT__pipe__DOT___atomicWords_useMerge_T_6)))));
        bufp->chgQData(oldp+472,(vlSelf->DCache__DOT__pipe__DOT__atomicWords_4),64);
        bufp->chgBit(oldp+474,((5U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx))));
        bufp->chgBit(oldp+475,((5U == (7U & ((IData)(1U) 
                                             + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx))))));
        bufp->chgBit(oldp+476,(((5U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)) 
                                | ((5U == (7U & ((IData)(1U) 
                                                 + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)))) 
                                   & (IData)(vlSelf->DCache__DOT__pipe__DOT__twoBanks3)))));
        bufp->chgQData(oldp+477,(((IData)(vlSelf->DCache__DOT__pipe_io_pendingSnoop_valid)
                                   ? vlSelf->DCache__DOT__pipe__DOT__refillWords_5
                                   : vlSelf->DCache__DOT__pipe__DOT__s3_word_5)),64);
        bufp->chgBit(oldp+479,(vlSelf->DCache__DOT__pipe__DOT__atomicWords_useAlu_5));
        bufp->chgBit(oldp+480,((((5U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)) 
                                 | ((5U == (7U & ((IData)(1U) 
                                                  + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)))) 
                                    & (IData)(vlSelf->DCache__DOT__pipe__DOT__twoBanks3))) 
                                & ((~ (IData)(vlSelf->DCache__DOT__pipe__DOT__atomicWords_useAlu_5)) 
                                   & (IData)(vlSelf->DCache__DOT__pipe__DOT___atomicWords_useMerge_T_6)))));
        bufp->chgQData(oldp+481,(vlSelf->DCache__DOT__pipe__DOT__atomicWords_5),64);
        bufp->chgBit(oldp+483,((6U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx))));
        bufp->chgBit(oldp+484,((6U == (7U & ((IData)(1U) 
                                             + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx))))));
        bufp->chgBit(oldp+485,(((6U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)) 
                                | ((6U == (7U & ((IData)(1U) 
                                                 + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)))) 
                                   & (IData)(vlSelf->DCache__DOT__pipe__DOT__twoBanks3)))));
        bufp->chgQData(oldp+486,(((IData)(vlSelf->DCache__DOT__pipe_io_pendingSnoop_valid)
                                   ? vlSelf->DCache__DOT__pipe__DOT__refillLine_hi_hi_lo
                                   : vlSelf->DCache__DOT__pipe__DOT__s3_word_6)),64);
        bufp->chgBit(oldp+488,(vlSelf->DCache__DOT__pipe__DOT__atomicWords_useAlu_6));
        bufp->chgBit(oldp+489,((((6U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)) 
                                 | ((6U == (7U & ((IData)(1U) 
                                                  + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)))) 
                                    & (IData)(vlSelf->DCache__DOT__pipe__DOT__twoBanks3))) 
                                & ((~ (IData)(vlSelf->DCache__DOT__pipe__DOT__atomicWords_useAlu_6)) 
                                   & (IData)(vlSelf->DCache__DOT__pipe__DOT___atomicWords_useMerge_T_6)))));
        bufp->chgQData(oldp+490,(vlSelf->DCache__DOT__pipe__DOT__atomicWords_6),64);
        bufp->chgBit(oldp+492,((7U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx))));
        bufp->chgBit(oldp+493,((7U == (7U & ((IData)(1U) 
                                             + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx))))));
        bufp->chgBit(oldp+494,(((7U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)) 
                                | ((7U == (7U & ((IData)(1U) 
                                                 + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)))) 
                                   & (IData)(vlSelf->DCache__DOT__pipe__DOT__twoBanks3)))));
        bufp->chgQData(oldp+495,(((IData)(vlSelf->DCache__DOT__pipe_io_pendingSnoop_valid)
                                   ? vlSelf->DCache__DOT__pipe__DOT__refillWords_7
                                   : vlSelf->DCache__DOT__pipe__DOT__s3_word_7)),64);
        bufp->chgBit(oldp+497,(vlSelf->DCache__DOT__pipe__DOT__atomicWords_useAlu_7));
        bufp->chgBit(oldp+498,((((7U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)) 
                                 | ((7U == (7U & ((IData)(1U) 
                                                  + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)))) 
                                    & (IData)(vlSelf->DCache__DOT__pipe__DOT__twoBanks3))) 
                                & ((~ (IData)(vlSelf->DCache__DOT__pipe__DOT__atomicWords_useAlu_7)) 
                                   & (IData)(vlSelf->DCache__DOT__pipe__DOT___atomicWords_useMerge_T_6)))));
        bufp->chgQData(oldp+499,(vlSelf->DCache__DOT__pipe__DOT__atomicWords_7),64);
        bufp->chgBit(oldp+501,(vlSelf->DCache__DOT__pipe__DOT__keepShared));
        bufp->chgBit(oldp+502,(vlSelf->DCache__DOT__pipe__DOT__wbClear));
        bufp->chgQData(oldp+503,(((0x3ffffffff00ULL 
                                   & (vlSelf->DCache__DOT__pipe__DOT__s3_hold_addr 
                                      >> 6U)) | (QData)((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_set)))),42);
        bufp->chgBit(oldp+505,(((IData)(vlSelf->DCache__DOT__pipe__DOT__sent_3) 
                                & (IData)(vlSelf->DCache__DOT__pipe__DOT__doWb2))));
        bufp->chgBit(oldp+506,(vlSelf->DCache__DOT__pipe__DOT__wbIsVictim));
        bufp->chgCData(oldp+507,(((IData)(vlSelf->DCache__DOT__pipe__DOT__probeNeedWb)
                                   ? 4U : 3U)),3);
        bufp->chgCData(oldp+508,(((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_replace_dirty)
                                   ? 2U : 0U)),3);
        bufp->chgCData(oldp+509,(((IData)(vlSelf->DCache__DOT__pipe__DOT__keepShared)
                                   ? 5U : 2U)),3);
        bufp->chgBit(oldp+510,((0U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_probeOp))));
        bufp->chgBit(oldp+511,(((0xdU == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd)) 
                                | (0xfU == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd)))));
        bufp->chgBit(oldp+512,(((0xcU == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd)) 
                                | (0xeU == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd)))));
        bufp->chgBit(oldp+513,((8U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd))));
        bufp->chgBit(oldp+514,(vlSelf->DCache__DOT__pipe__DOT__amoalu__DOT__logic_and));
        bufp->chgBit(oldp+515,(vlSelf->DCache__DOT__pipe__DOT__amoalu__DOT__logic_xor));
        bufp->chgQData(oldp+516,((~ (QData)((IData)(
                                                    ((~ 
                                                      ((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask) 
                                                       >> 3U)) 
                                                     << 0x1fU))))),64);
        bufp->chgQData(oldp+518,((((~ (QData)((IData)(
                                                      ((~ 
                                                        ((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask) 
                                                         >> 3U)) 
                                                       << 0x1fU)))) 
                                   & vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs) 
                                  + ((~ (QData)((IData)(
                                                        ((~ 
                                                          ((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask) 
                                                           >> 3U)) 
                                                         << 0x1fU)))) 
                                     & (((QData)((IData)(
                                                         vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[0U])))))),64);
        bufp->chgBit(oldp+520,((0U == (2U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd)))));
        bufp->chgBit(oldp+521,((1U & ((0x10U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                       ? (((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs 
                                                          >> 0x3fU))) 
                                           == (vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[1U] 
                                               >> 0x1fU))
                                           ? (((IData)(
                                                       (vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs 
                                                        >> 0x20U)) 
                                               < vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[1U]) 
                                              | (((IData)(
                                                          (vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs 
                                                           >> 0x20U)) 
                                                  == 
                                                  vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[1U]) 
                                                 & (IData)(vlSelf->DCache__DOT__pipe__DOT__amoalu__DOT___less_T_12)))
                                           : ((0U == 
                                               (2U 
                                                & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd)))
                                               ? (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs 
                                                          >> 0x3fU))
                                               : (vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[1U] 
                                                  >> 0x1fU)))
                                       : (((1U & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs 
                                                          >> 0x1fU))) 
                                           == (vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[0U] 
                                               >> 0x1fU))
                                           ? (IData)(vlSelf->DCache__DOT__pipe__DOT__amoalu__DOT___less_T_12)
                                           : ((0U == 
                                               (2U 
                                                & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd)))
                                               ? (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs 
                                                          >> 0x1fU))
                                               : (vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[0U] 
                                                  >> 0x1fU)))))));
        bufp->chgQData(oldp+522,((((1U & ((0x10U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                           ? (((1U 
                                                & (IData)(
                                                          (vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs 
                                                           >> 0x3fU))) 
                                               == (
                                                   vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[1U] 
                                                   >> 0x1fU))
                                               ? (((IData)(
                                                           (vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs 
                                                            >> 0x20U)) 
                                                   < 
                                                   vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[1U]) 
                                                  | (((IData)(
                                                              (vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs 
                                                               >> 0x20U)) 
                                                      == 
                                                      vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[1U]) 
                                                     & (IData)(vlSelf->DCache__DOT__pipe__DOT__amoalu__DOT___less_T_12)))
                                               : ((0U 
                                                   == 
                                                   (2U 
                                                    & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd)))
                                                   ? (IData)(
                                                             (vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs 
                                                              >> 0x3fU))
                                                   : 
                                                  (vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[1U] 
                                                   >> 0x1fU)))
                                           : (((1U 
                                                & (IData)(
                                                          (vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs 
                                                           >> 0x1fU))) 
                                               == (
                                                   vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[0U] 
                                                   >> 0x1fU))
                                               ? (IData)(vlSelf->DCache__DOT__pipe__DOT__amoalu__DOT___less_T_12)
                                               : ((0U 
                                                   == 
                                                   (2U 
                                                    & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd)))
                                                   ? (IData)(
                                                             (vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs 
                                                              >> 0x1fU))
                                                   : 
                                                  (vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[0U] 
                                                   >> 0x1fU)))))
                                    ? ((0xcU == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd)) 
                                       | (0xeU == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd)))
                                    : ((0xdU == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd)) 
                                       | (0xfU == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd))))
                                   ? vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs
                                   : (((QData)((IData)(
                                                       vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[0U]))))),64);
        bufp->chgQData(oldp+524,((((IData)(vlSelf->DCache__DOT__pipe__DOT__amoalu__DOT__logic_and)
                                    ? (vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs 
                                       & (((QData)((IData)(
                                                           vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[0U]))))
                                    : 0ULL) | ((IData)(vlSelf->DCache__DOT__pipe__DOT__amoalu__DOT__logic_xor)
                                                ? (vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs 
                                                   ^ 
                                                   (((QData)((IData)(
                                                                     vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[0U]))))
                                                : 0ULL))),64);
        bufp->chgQData(oldp+526,(((8U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd))
                                   ? (((~ (QData)((IData)(
                                                          ((~ 
                                                            ((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask) 
                                                             >> 3U)) 
                                                           << 0x1fU)))) 
                                       & vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs) 
                                      + ((~ (QData)((IData)(
                                                            ((~ 
                                                              ((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask) 
                                                               >> 3U)) 
                                                             << 0x1fU)))) 
                                         & (((QData)((IData)(
                                                             vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[0U])))))
                                   : vlSelf->DCache__DOT__pipe__DOT__amoalu__DOT___out_T_1)),64);
        bufp->chgCData(oldp+528,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_0),3);
        bufp->chgCData(oldp+529,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_1),3);
        bufp->chgCData(oldp+530,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_2),3);
        bufp->chgCData(oldp+531,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_3),3);
        bufp->chgCData(oldp+532,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_4),3);
        bufp->chgCData(oldp+533,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_5),3);
        bufp->chgCData(oldp+534,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_6),3);
        bufp->chgCData(oldp+535,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_7),3);
        bufp->chgCData(oldp+536,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_8),3);
        bufp->chgCData(oldp+537,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_9),3);
        bufp->chgCData(oldp+538,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_10),3);
        bufp->chgCData(oldp+539,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_11),3);
        bufp->chgCData(oldp+540,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_12),3);
        bufp->chgCData(oldp+541,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_13),3);
        bufp->chgCData(oldp+542,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_14),3);
        bufp->chgCData(oldp+543,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_15),3);
        bufp->chgCData(oldp+544,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_16),3);
        bufp->chgCData(oldp+545,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_17),3);
        bufp->chgCData(oldp+546,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_18),3);
        bufp->chgCData(oldp+547,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_19),3);
        bufp->chgCData(oldp+548,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_20),3);
        bufp->chgCData(oldp+549,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_21),3);
        bufp->chgCData(oldp+550,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_22),3);
        bufp->chgCData(oldp+551,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_23),3);
        bufp->chgCData(oldp+552,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_24),3);
        bufp->chgCData(oldp+553,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_25),3);
        bufp->chgCData(oldp+554,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_26),3);
        bufp->chgCData(oldp+555,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_27),3);
        bufp->chgCData(oldp+556,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_28),3);
        bufp->chgCData(oldp+557,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_29),3);
        bufp->chgCData(oldp+558,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_30),3);
        bufp->chgCData(oldp+559,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_31),3);
        bufp->chgCData(oldp+560,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_32),3);
        bufp->chgCData(oldp+561,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_33),3);
        bufp->chgCData(oldp+562,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_34),3);
        bufp->chgCData(oldp+563,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_35),3);
        bufp->chgCData(oldp+564,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_36),3);
        bufp->chgCData(oldp+565,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_37),3);
        bufp->chgCData(oldp+566,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_38),3);
        bufp->chgCData(oldp+567,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_39),3);
        bufp->chgCData(oldp+568,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_40),3);
        bufp->chgCData(oldp+569,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_41),3);
        bufp->chgCData(oldp+570,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_42),3);
        bufp->chgCData(oldp+571,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_43),3);
        bufp->chgCData(oldp+572,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_44),3);
        bufp->chgCData(oldp+573,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_45),3);
        bufp->chgCData(oldp+574,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_46),3);
        bufp->chgCData(oldp+575,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_47),3);
        bufp->chgCData(oldp+576,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_48),3);
        bufp->chgCData(oldp+577,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_49),3);
        bufp->chgCData(oldp+578,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_50),3);
        bufp->chgCData(oldp+579,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_51),3);
        bufp->chgCData(oldp+580,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_52),3);
        bufp->chgCData(oldp+581,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_53),3);
        bufp->chgCData(oldp+582,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_54),3);
        bufp->chgCData(oldp+583,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_55),3);
        bufp->chgCData(oldp+584,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_56),3);
        bufp->chgCData(oldp+585,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_57),3);
        bufp->chgCData(oldp+586,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_58),3);
        bufp->chgCData(oldp+587,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_59),3);
        bufp->chgCData(oldp+588,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_60),3);
        bufp->chgCData(oldp+589,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_61),3);
        bufp->chgCData(oldp+590,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_62),3);
        bufp->chgCData(oldp+591,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_63),3);
        bufp->chgCData(oldp+592,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_64),3);
        bufp->chgCData(oldp+593,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_65),3);
        bufp->chgCData(oldp+594,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_66),3);
        bufp->chgCData(oldp+595,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_67),3);
        bufp->chgCData(oldp+596,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_68),3);
        bufp->chgCData(oldp+597,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_69),3);
        bufp->chgCData(oldp+598,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_70),3);
        bufp->chgCData(oldp+599,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_71),3);
        bufp->chgCData(oldp+600,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_72),3);
        bufp->chgCData(oldp+601,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_73),3);
        bufp->chgCData(oldp+602,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_74),3);
        bufp->chgCData(oldp+603,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_75),3);
        bufp->chgCData(oldp+604,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_76),3);
        bufp->chgCData(oldp+605,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_77),3);
        bufp->chgCData(oldp+606,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_78),3);
        bufp->chgCData(oldp+607,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_79),3);
        bufp->chgCData(oldp+608,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_80),3);
        bufp->chgCData(oldp+609,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_81),3);
        bufp->chgCData(oldp+610,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_82),3);
        bufp->chgCData(oldp+611,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_83),3);
        bufp->chgCData(oldp+612,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_84),3);
        bufp->chgCData(oldp+613,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_85),3);
        bufp->chgCData(oldp+614,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_86),3);
        bufp->chgCData(oldp+615,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_87),3);
        bufp->chgCData(oldp+616,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_88),3);
        bufp->chgCData(oldp+617,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_89),3);
        bufp->chgCData(oldp+618,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_90),3);
        bufp->chgCData(oldp+619,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_91),3);
        bufp->chgCData(oldp+620,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_92),3);
        bufp->chgCData(oldp+621,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_93),3);
        bufp->chgCData(oldp+622,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_94),3);
        bufp->chgCData(oldp+623,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_95),3);
        bufp->chgCData(oldp+624,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_96),3);
        bufp->chgCData(oldp+625,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_97),3);
        bufp->chgCData(oldp+626,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_98),3);
        bufp->chgCData(oldp+627,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_99),3);
        bufp->chgCData(oldp+628,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_100),3);
        bufp->chgCData(oldp+629,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_101),3);
        bufp->chgCData(oldp+630,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_102),3);
        bufp->chgCData(oldp+631,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_103),3);
        bufp->chgCData(oldp+632,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_104),3);
        bufp->chgCData(oldp+633,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_105),3);
        bufp->chgCData(oldp+634,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_106),3);
        bufp->chgCData(oldp+635,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_107),3);
        bufp->chgCData(oldp+636,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_108),3);
        bufp->chgCData(oldp+637,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_109),3);
        bufp->chgCData(oldp+638,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_110),3);
        bufp->chgCData(oldp+639,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_111),3);
        bufp->chgCData(oldp+640,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_112),3);
        bufp->chgCData(oldp+641,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_113),3);
        bufp->chgCData(oldp+642,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_114),3);
        bufp->chgCData(oldp+643,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_115),3);
        bufp->chgCData(oldp+644,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_116),3);
        bufp->chgCData(oldp+645,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_117),3);
        bufp->chgCData(oldp+646,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_118),3);
        bufp->chgCData(oldp+647,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_119),3);
        bufp->chgCData(oldp+648,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_120),3);
        bufp->chgCData(oldp+649,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_121),3);
        bufp->chgCData(oldp+650,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_122),3);
        bufp->chgCData(oldp+651,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_123),3);
        bufp->chgCData(oldp+652,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_124),3);
        bufp->chgCData(oldp+653,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_125),3);
        bufp->chgCData(oldp+654,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_126),3);
        bufp->chgCData(oldp+655,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_127),3);
        bufp->chgCData(oldp+656,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_128),3);
        bufp->chgCData(oldp+657,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_129),3);
        bufp->chgCData(oldp+658,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_130),3);
        bufp->chgCData(oldp+659,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_131),3);
        bufp->chgCData(oldp+660,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_132),3);
        bufp->chgCData(oldp+661,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_133),3);
        bufp->chgCData(oldp+662,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_134),3);
        bufp->chgCData(oldp+663,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_135),3);
        bufp->chgCData(oldp+664,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_136),3);
        bufp->chgCData(oldp+665,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_137),3);
        bufp->chgCData(oldp+666,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_138),3);
        bufp->chgCData(oldp+667,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_139),3);
        bufp->chgCData(oldp+668,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_140),3);
        bufp->chgCData(oldp+669,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_141),3);
        bufp->chgCData(oldp+670,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_142),3);
        bufp->chgCData(oldp+671,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_143),3);
        bufp->chgCData(oldp+672,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_144),3);
        bufp->chgCData(oldp+673,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_145),3);
        bufp->chgCData(oldp+674,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_146),3);
        bufp->chgCData(oldp+675,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_147),3);
        bufp->chgCData(oldp+676,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_148),3);
        bufp->chgCData(oldp+677,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_149),3);
        bufp->chgCData(oldp+678,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_150),3);
        bufp->chgCData(oldp+679,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_151),3);
        bufp->chgCData(oldp+680,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_152),3);
        bufp->chgCData(oldp+681,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_153),3);
        bufp->chgCData(oldp+682,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_154),3);
        bufp->chgCData(oldp+683,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_155),3);
        bufp->chgCData(oldp+684,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_156),3);
        bufp->chgCData(oldp+685,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_157),3);
        bufp->chgCData(oldp+686,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_158),3);
        bufp->chgCData(oldp+687,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_159),3);
        bufp->chgCData(oldp+688,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_160),3);
        bufp->chgCData(oldp+689,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_161),3);
        bufp->chgCData(oldp+690,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_162),3);
        bufp->chgCData(oldp+691,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_163),3);
        bufp->chgCData(oldp+692,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_164),3);
        bufp->chgCData(oldp+693,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_165),3);
        bufp->chgCData(oldp+694,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_166),3);
        bufp->chgCData(oldp+695,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_167),3);
        bufp->chgCData(oldp+696,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_168),3);
        bufp->chgCData(oldp+697,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_169),3);
        bufp->chgCData(oldp+698,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_170),3);
        bufp->chgCData(oldp+699,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_171),3);
        bufp->chgCData(oldp+700,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_172),3);
        bufp->chgCData(oldp+701,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_173),3);
        bufp->chgCData(oldp+702,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_174),3);
        bufp->chgCData(oldp+703,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_175),3);
        bufp->chgCData(oldp+704,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_176),3);
        bufp->chgCData(oldp+705,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_177),3);
        bufp->chgCData(oldp+706,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_178),3);
        bufp->chgCData(oldp+707,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_179),3);
        bufp->chgCData(oldp+708,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_180),3);
        bufp->chgCData(oldp+709,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_181),3);
        bufp->chgCData(oldp+710,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_182),3);
        bufp->chgCData(oldp+711,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_183),3);
        bufp->chgCData(oldp+712,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_184),3);
        bufp->chgCData(oldp+713,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_185),3);
        bufp->chgCData(oldp+714,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_186),3);
        bufp->chgCData(oldp+715,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_187),3);
        bufp->chgCData(oldp+716,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_188),3);
        bufp->chgCData(oldp+717,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_189),3);
        bufp->chgCData(oldp+718,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_190),3);
        bufp->chgCData(oldp+719,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_191),3);
        bufp->chgCData(oldp+720,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_192),3);
        bufp->chgCData(oldp+721,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_193),3);
        bufp->chgCData(oldp+722,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_194),3);
        bufp->chgCData(oldp+723,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_195),3);
        bufp->chgCData(oldp+724,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_196),3);
        bufp->chgCData(oldp+725,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_197),3);
        bufp->chgCData(oldp+726,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_198),3);
        bufp->chgCData(oldp+727,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_199),3);
        bufp->chgCData(oldp+728,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_200),3);
        bufp->chgCData(oldp+729,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_201),3);
        bufp->chgCData(oldp+730,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_202),3);
        bufp->chgCData(oldp+731,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_203),3);
        bufp->chgCData(oldp+732,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_204),3);
        bufp->chgCData(oldp+733,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_205),3);
        bufp->chgCData(oldp+734,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_206),3);
        bufp->chgCData(oldp+735,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_207),3);
        bufp->chgCData(oldp+736,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_208),3);
        bufp->chgCData(oldp+737,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_209),3);
        bufp->chgCData(oldp+738,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_210),3);
        bufp->chgCData(oldp+739,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_211),3);
        bufp->chgCData(oldp+740,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_212),3);
        bufp->chgCData(oldp+741,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_213),3);
        bufp->chgCData(oldp+742,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_214),3);
        bufp->chgCData(oldp+743,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_215),3);
        bufp->chgCData(oldp+744,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_216),3);
        bufp->chgCData(oldp+745,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_217),3);
        bufp->chgCData(oldp+746,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_218),3);
        bufp->chgCData(oldp+747,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_219),3);
        bufp->chgCData(oldp+748,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_220),3);
        bufp->chgCData(oldp+749,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_221),3);
        bufp->chgCData(oldp+750,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_222),3);
        bufp->chgCData(oldp+751,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_223),3);
        bufp->chgCData(oldp+752,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_224),3);
        bufp->chgCData(oldp+753,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_225),3);
        bufp->chgCData(oldp+754,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_226),3);
        bufp->chgCData(oldp+755,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_227),3);
        bufp->chgCData(oldp+756,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_228),3);
        bufp->chgCData(oldp+757,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_229),3);
        bufp->chgCData(oldp+758,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_230),3);
        bufp->chgCData(oldp+759,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_231),3);
        bufp->chgCData(oldp+760,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_232),3);
        bufp->chgCData(oldp+761,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_233),3);
        bufp->chgCData(oldp+762,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_234),3);
        bufp->chgCData(oldp+763,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_235),3);
        bufp->chgCData(oldp+764,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_236),3);
        bufp->chgCData(oldp+765,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_237),3);
        bufp->chgCData(oldp+766,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_238),3);
        bufp->chgCData(oldp+767,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_239),3);
        bufp->chgCData(oldp+768,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_240),3);
        bufp->chgCData(oldp+769,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_241),3);
        bufp->chgCData(oldp+770,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_242),3);
        bufp->chgCData(oldp+771,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_243),3);
        bufp->chgCData(oldp+772,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_244),3);
        bufp->chgCData(oldp+773,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_245),3);
        bufp->chgCData(oldp+774,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_246),3);
        bufp->chgCData(oldp+775,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_247),3);
        bufp->chgCData(oldp+776,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_248),3);
        bufp->chgCData(oldp+777,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_249),3);
        bufp->chgCData(oldp+778,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_250),3);
        bufp->chgCData(oldp+779,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_251),3);
        bufp->chgCData(oldp+780,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_252),3);
        bufp->chgCData(oldp+781,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_253),3);
        bufp->chgCData(oldp+782,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_254),3);
        bufp->chgCData(oldp+783,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_255),3);
        bufp->chgBit(oldp+784,((1U & (~ ((IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_way) 
                                         >> 1U)))));
        bufp->chgBit(oldp+785,((1U & (~ (IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_way)))));
        bufp->chgBit(oldp+786,((1U & ((2U & (IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_way))
                                       ? ((IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT___GEN_511) 
                                          >> 1U) : 
                                      (~ (IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_way))))));
        bufp->chgBit(oldp+787,((1U & ((2U & (IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_way))
                                       ? (~ (IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_way))
                                       : ((IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT___GEN_511) 
                                          >> 2U)))));
        bufp->chgBit(oldp+788,((1U & (~ ((IData)(vlSelf->DCache__DOT__loads_1__DOT__s2_way) 
                                         >> 1U)))));
        bufp->chgBit(oldp+789,((1U & (~ (IData)(vlSelf->DCache__DOT__loads_1__DOT__s2_way)))));
        bufp->chgBit(oldp+790,((1U & (~ ((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way) 
                                         >> 1U)))));
        bufp->chgBit(oldp+791,((1U & (~ (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)))));
        bufp->chgCData(oldp+792,(vlSelf->DCache__DOT__probe__DOT__entries_0_state),2);
        bufp->chgCData(oldp+793,(vlSelf->DCache__DOT__probe__DOT__entries_0_opcode),2);
        bufp->chgCData(oldp+794,(vlSelf->DCache__DOT__probe__DOT__entries_0_snpTxnId),8);
        bufp->chgCData(oldp+795,(vlSelf->DCache__DOT__probe__DOT__entries_1_state),2);
        bufp->chgCData(oldp+796,(vlSelf->DCache__DOT__probe__DOT__entries_1_opcode),2);
        bufp->chgCData(oldp+797,(vlSelf->DCache__DOT__probe__DOT__entries_1_snpTxnId),8);
        bufp->chgCData(oldp+798,(vlSelf->DCache__DOT__probe__DOT__entries_2_state),2);
        bufp->chgCData(oldp+799,(vlSelf->DCache__DOT__probe__DOT__entries_2_opcode),2);
        bufp->chgCData(oldp+800,(vlSelf->DCache__DOT__probe__DOT__entries_2_snpTxnId),8);
        bufp->chgCData(oldp+801,(vlSelf->DCache__DOT__probe__DOT__entries_3_state),2);
        bufp->chgCData(oldp+802,(vlSelf->DCache__DOT__probe__DOT__entries_3_opcode),2);
        bufp->chgCData(oldp+803,(vlSelf->DCache__DOT__probe__DOT__entries_3_snpTxnId),8);
        bufp->chgCData(oldp+804,(vlSelf->DCache__DOT__probe__DOT__entries_4_state),2);
        bufp->chgCData(oldp+805,(vlSelf->DCache__DOT__probe__DOT__entries_4_opcode),2);
        bufp->chgCData(oldp+806,(vlSelf->DCache__DOT__probe__DOT__entries_4_snpTxnId),8);
        bufp->chgCData(oldp+807,(vlSelf->DCache__DOT__probe__DOT__entries_5_state),2);
        bufp->chgCData(oldp+808,(vlSelf->DCache__DOT__probe__DOT__entries_5_opcode),2);
        bufp->chgCData(oldp+809,(vlSelf->DCache__DOT__probe__DOT__entries_5_snpTxnId),8);
        bufp->chgCData(oldp+810,(vlSelf->DCache__DOT__probe__DOT__entries_6_state),2);
        bufp->chgCData(oldp+811,(vlSelf->DCache__DOT__probe__DOT__entries_6_opcode),2);
        bufp->chgCData(oldp+812,(vlSelf->DCache__DOT__probe__DOT__entries_6_snpTxnId),8);
        bufp->chgCData(oldp+813,(vlSelf->DCache__DOT__probe__DOT__entries_7_state),2);
        bufp->chgCData(oldp+814,(vlSelf->DCache__DOT__probe__DOT__entries_7_opcode),2);
        bufp->chgCData(oldp+815,(vlSelf->DCache__DOT__probe__DOT__entries_7_snpTxnId),8);
        bufp->chgCData(oldp+816,(vlSelf->DCache__DOT__probe__DOT__entries_8_state),2);
        bufp->chgCData(oldp+817,(vlSelf->DCache__DOT__probe__DOT__entries_8_opcode),2);
        bufp->chgCData(oldp+818,(vlSelf->DCache__DOT__probe__DOT__entries_8_snpTxnId),8);
        bufp->chgCData(oldp+819,(vlSelf->DCache__DOT__probe__DOT__entries_9_state),2);
        bufp->chgCData(oldp+820,(vlSelf->DCache__DOT__probe__DOT__entries_9_opcode),2);
        bufp->chgCData(oldp+821,(vlSelf->DCache__DOT__probe__DOT__entries_9_snpTxnId),8);
        bufp->chgCData(oldp+822,(vlSelf->DCache__DOT__probe__DOT__entries_10_state),2);
        bufp->chgCData(oldp+823,(vlSelf->DCache__DOT__probe__DOT__entries_10_opcode),2);
        bufp->chgCData(oldp+824,(vlSelf->DCache__DOT__probe__DOT__entries_10_snpTxnId),8);
        bufp->chgCData(oldp+825,(vlSelf->DCache__DOT__probe__DOT__entries_11_state),2);
        bufp->chgCData(oldp+826,(vlSelf->DCache__DOT__probe__DOT__entries_11_opcode),2);
        bufp->chgCData(oldp+827,(vlSelf->DCache__DOT__probe__DOT__entries_11_snpTxnId),8);
        bufp->chgCData(oldp+828,(vlSelf->DCache__DOT__probe__DOT__entries_12_state),2);
        bufp->chgCData(oldp+829,(vlSelf->DCache__DOT__probe__DOT__entries_12_opcode),2);
        bufp->chgCData(oldp+830,(vlSelf->DCache__DOT__probe__DOT__entries_12_snpTxnId),8);
        bufp->chgCData(oldp+831,(vlSelf->DCache__DOT__probe__DOT__entries_13_state),2);
        bufp->chgCData(oldp+832,(vlSelf->DCache__DOT__probe__DOT__entries_13_opcode),2);
        bufp->chgCData(oldp+833,(vlSelf->DCache__DOT__probe__DOT__entries_13_snpTxnId),8);
        bufp->chgCData(oldp+834,(vlSelf->DCache__DOT__probe__DOT__entries_14_state),2);
        bufp->chgCData(oldp+835,(vlSelf->DCache__DOT__probe__DOT__entries_14_opcode),2);
        bufp->chgCData(oldp+836,(vlSelf->DCache__DOT__probe__DOT__entries_14_snpTxnId),8);
        bufp->chgCData(oldp+837,(vlSelf->DCache__DOT__probe__DOT__entries_15_state),2);
        bufp->chgCData(oldp+838,(vlSelf->DCache__DOT__probe__DOT__entries_15_opcode),2);
        bufp->chgCData(oldp+839,(vlSelf->DCache__DOT__probe__DOT__entries_15_snpTxnId),8);
        bufp->chgBit(oldp+840,(vlSelf->DCache__DOT__probe__DOT__outValid));
        bufp->chgCData(oldp+841,(vlSelf->DCache__DOT__probe__DOT__outIdx),4);
        bufp->chgBit(oldp+842,(vlSelf->DCache__DOT__probe__DOT__pause));
        bufp->chgQData(oldp+843,((0xffffffffffc0ULL 
                                  & vlSelf->DCache__DOT__pipe__DOT__lrsc_addr)),48);
        bufp->chgBit(oldp+845,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__outBits_probeOp))));
        bufp->chgBit(oldp+846,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_0_valid) 
                                & (((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__miss__DOT__entries_0_addr) 
                                    == (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__probe__DOT__outBits_addr)) 
                                   & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__outBits_tagAlias))))));
        bufp->chgBit(oldp+847,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_1_valid) 
                                & (((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__miss__DOT__entries_1_addr) 
                                    == (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__probe__DOT__outBits_addr)) 
                                   & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__outBits_tagAlias))))));
        bufp->chgBit(oldp+848,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_2_valid) 
                                & (((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__miss__DOT__entries_2_addr) 
                                    == (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__probe__DOT__outBits_addr)) 
                                   & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__outBits_tagAlias))))));
        bufp->chgBit(oldp+849,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_3_valid) 
                                & (((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__miss__DOT__entries_3_addr) 
                                    == (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__probe__DOT__outBits_addr)) 
                                   & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__outBits_tagAlias))))));
        bufp->chgBit(oldp+850,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_4_valid) 
                                & (((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__miss__DOT__entries_4_addr) 
                                    == (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__probe__DOT__outBits_addr)) 
                                   & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__outBits_tagAlias))))));
        bufp->chgBit(oldp+851,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_5_valid) 
                                & (((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__miss__DOT__entries_5_addr) 
                                    == (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__probe__DOT__outBits_addr)) 
                                   & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__outBits_tagAlias))))));
        bufp->chgBit(oldp+852,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_6_valid) 
                                & (((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__miss__DOT__entries_6_addr) 
                                    == (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__probe__DOT__outBits_addr)) 
                                   & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__outBits_tagAlias))))));
        bufp->chgBit(oldp+853,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_7_valid) 
                                & (((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__miss__DOT__entries_7_addr) 
                                    == (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__probe__DOT__outBits_addr)) 
                                   & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__outBits_tagAlias))))));
        bufp->chgBit(oldp+854,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_8_valid) 
                                & (((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__miss__DOT__entries_8_addr) 
                                    == (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__probe__DOT__outBits_addr)) 
                                   & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__outBits_tagAlias))))));
        bufp->chgBit(oldp+855,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_9_valid) 
                                & (((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__miss__DOT__entries_9_addr) 
                                    == (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__probe__DOT__outBits_addr)) 
                                   & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__outBits_tagAlias))))));
        bufp->chgBit(oldp+856,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_10_valid) 
                                & (((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__miss__DOT__entries_10_addr) 
                                    == (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__probe__DOT__outBits_addr)) 
                                   & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__outBits_tagAlias))))));
        bufp->chgBit(oldp+857,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_11_valid) 
                                & (((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__miss__DOT__entries_11_addr) 
                                    == (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__probe__DOT__outBits_addr)) 
                                   & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__outBits_tagAlias))))));
        bufp->chgBit(oldp+858,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_12_valid) 
                                & (((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__miss__DOT__entries_12_addr) 
                                    == (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__probe__DOT__outBits_addr)) 
                                   & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__outBits_tagAlias))))));
        bufp->chgBit(oldp+859,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_13_valid) 
                                & (((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__miss__DOT__entries_13_addr) 
                                    == (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__probe__DOT__outBits_addr)) 
                                   & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__outBits_tagAlias))))));
        bufp->chgBit(oldp+860,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_14_valid) 
                                & (((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__miss__DOT__entries_14_addr) 
                                    == (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__probe__DOT__outBits_addr)) 
                                   & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__outBits_tagAlias))))));
        bufp->chgBit(oldp+861,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_15_valid) 
                                & (((0xffffffffffc0ULL 
                                     & vlSelf->DCache__DOT__miss__DOT__entries_15_addr) 
                                    == (0xffffffffffc0ULL 
                                        & vlSelf->DCache__DOT__probe__DOT__outBits_addr)) 
                                   & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_alias) 
                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__outBits_tagAlias))))));
        bufp->chgBit(oldp+862,(((IData)(vlSelf->DCache__DOT__probe__DOT__outValid) 
                                & (IData)(vlSelf->DCache__DOT__probe__DOT___missNow_T_16))));
        bufp->chgBit(oldp+863,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_0_opcode))));
        bufp->chgBit(oldp+864,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_0_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_7) 
                                   & (IData)(vlSelf->__VdfgTmp_hb99d0ec6__0)))));
        bufp->chgBit(oldp+865,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_1_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_197) 
                                   & (IData)(vlSelf->__VdfgTmp_h13fd2bb4__0)))));
        bufp->chgBit(oldp+866,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_2_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_387) 
                                   & (IData)(vlSelf->__VdfgTmp_h38e53a06__0)))));
        bufp->chgBit(oldp+867,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_3_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_577) 
                                   & (IData)(vlSelf->__VdfgTmp_h8fc573e6__0)))));
        bufp->chgBit(oldp+868,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_4_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_767) 
                                   & (IData)(vlSelf->__VdfgTmp_h8bb336e8__0)))));
        bufp->chgBit(oldp+869,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_5_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_957) 
                                   & (IData)(vlSelf->__VdfgTmp_h18b77a5a__0)))));
        bufp->chgBit(oldp+870,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_6_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1147) 
                                   & (IData)(vlSelf->__VdfgTmp_h74df05db__0)))));
        bufp->chgBit(oldp+871,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_7_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1337) 
                                   & (IData)(vlSelf->__VdfgTmp_h1ef9bd33__0)))));
        bufp->chgBit(oldp+872,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_8_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1527) 
                                   & (IData)(vlSelf->__VdfgTmp_ha62206e2__0)))));
        bufp->chgBit(oldp+873,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_9_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1717) 
                                   & (IData)(vlSelf->__VdfgTmp_hf322ffde__0)))));
        bufp->chgBit(oldp+874,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_10_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1907) 
                                   & (IData)(vlSelf->__VdfgTmp_hc1ed2b8a__0)))));
        bufp->chgBit(oldp+875,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_11_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2097) 
                                   & (IData)(vlSelf->__VdfgTmp_h2fd58e13__0)))));
        bufp->chgBit(oldp+876,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_12_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2287) 
                                   & (IData)(vlSelf->__VdfgTmp_hb3409e01__0)))));
        bufp->chgBit(oldp+877,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_13_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2477) 
                                   & (IData)(vlSelf->__VdfgTmp_h8667ba33__0)))));
        bufp->chgBit(oldp+878,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_14_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2667) 
                                   & (IData)(vlSelf->__VdfgTmp_h74927c72__0)))));
        bufp->chgBit(oldp+879,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_15_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2857) 
                                   & (IData)(vlSelf->__VdfgTmp_h245dabaa__0)))));
        bufp->chgBit(oldp+880,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_1_opcode))));
        bufp->chgBit(oldp+881,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_0_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_18) 
                                   & (IData)(vlSelf->__VdfgTmp_h6c4dda41__0)))));
        bufp->chgBit(oldp+882,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_1_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_208) 
                                   & (IData)(vlSelf->__VdfgTmp_hb8cd8733__0)))));
        bufp->chgBit(oldp+883,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_2_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_398) 
                                   & (IData)(vlSelf->__VdfgTmp_h84368685__0)))));
        bufp->chgBit(oldp+884,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_3_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_588) 
                                   & (IData)(vlSelf->__VdfgTmp_hfb15a767__0)))));
        bufp->chgBit(oldp+885,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_4_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_778) 
                                   & (IData)(vlSelf->__VdfgTmp_h2482e269__0)))));
        bufp->chgBit(oldp+886,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_5_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_968) 
                                   & (IData)(vlSelf->__VdfgTmp_hac6706c5__0)))));
        bufp->chgBit(oldp+887,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_6_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1158) 
                                   & (IData)(vlSelf->__VdfgTmp_hc1afa95a__0)))));
        bufp->chgBit(oldp+888,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_7_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1348) 
                                   & (IData)(vlSelf->__VdfgTmp_hca2901b2__0)))));
        bufp->chgBit(oldp+889,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_8_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1538) 
                                   & (IData)(vlSelf->__VdfgTmp_hdaf3b363__0)))));
        bufp->chgBit(oldp+890,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_9_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1728) 
                                   & (IData)(vlSelf->__VdfgTmp_hac732a5f__0)))));
        bufp->chgBit(oldp+891,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_10_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1918) 
                                   & (IData)(vlSelf->__VdfgTmp_h16bcc60b__0)))));
        bufp->chgBit(oldp+892,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_11_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2108) 
                                   & (IData)(vlSelf->__VdfgTmp_h52e53d9c__0)))));
        bufp->chgBit(oldp+893,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_12_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2298) 
                                   & (IData)(vlSelf->__VdfgTmp_h5c70c28e__0)))));
        bufp->chgBit(oldp+894,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_13_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2488) 
                                   & (IData)(vlSelf->__VdfgTmp_h2b170ebc__0)))));
        bufp->chgBit(oldp+895,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_14_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2678) 
                                   & (IData)(vlSelf->__VdfgTmp_ha1c220f1__0)))));
        bufp->chgBit(oldp+896,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_15_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2868) 
                                   & (IData)(vlSelf->__VdfgTmp_h736e7f2b__0)))));
        bufp->chgBit(oldp+897,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_2_opcode))));
        bufp->chgBit(oldp+898,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_0_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_29) 
                                   & (IData)(vlSelf->__VdfgTmp_h0f914751__0)))));
        bufp->chgBit(oldp+899,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_1_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_219) 
                                   & (IData)(vlSelf->__VdfgTmp_h9df17243__0)))));
        bufp->chgBit(oldp+900,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_2_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_409) 
                                   & (IData)(vlSelf->__VdfgTmp_haae173b5__0)))));
        bufp->chgBit(oldp+901,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_3_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_599) 
                                   & (IData)(vlSelf->__VdfgTmp_h1dc93a77__0)))));
        bufp->chgBit(oldp+902,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_4_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_789) 
                                   & (IData)(vlSelf->__VdfgTmp_h19af6979__0)))));
        bufp->chgBit(oldp+903,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_5_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_979) 
                                   & (IData)(vlSelf->__VdfgTmp_h8abbb3b5__0)))));
        bufp->chgBit(oldp+904,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_6_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1169) 
                                   & (IData)(vlSelf->__VdfgTmp_he2dadeaa__0)))));
        bufp->chgBit(oldp+905,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_7_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1359) 
                                   & (IData)(vlSelf->__VdfgTmp_he8c474a2__0)))));
        bufp->chgBit(oldp+906,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_8_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1549) 
                                   & (IData)(vlSelf->__VdfgTmp_h37de3e73__0)))));
        bufp->chgBit(oldp+907,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_9_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1739) 
                                   & (IData)(vlSelf->__VdfgTmp_h4126a76f__0)))));
        bufp->chgBit(oldp+908,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_10_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1929) 
                                   & (IData)(vlSelf->__VdfgTmp_h33e9731b__0)))));
        bufp->chgBit(oldp+909,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_11_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2119) 
                                   & (IData)(vlSelf->__VdfgTmp_hb1c9c68c__0)))));
        bufp->chgBit(oldp+910,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_12_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2309) 
                                   & (IData)(vlSelf->__VdfgTmp_h414449be__0)))));
        bufp->chgBit(oldp+911,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_13_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2499) 
                                   & (IData)(vlSelf->__VdfgTmp_h146873ac__0)))));
        bufp->chgBit(oldp+912,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_14_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2689) 
                                   & (IData)(vlSelf->__VdfgTmp_h82aeb7c1__0)))));
        bufp->chgBit(oldp+913,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_15_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2879) 
                                   & (IData)(vlSelf->__VdfgTmp_h5651f43b__0)))));
        bufp->chgBit(oldp+914,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_3_opcode))));
        bufp->chgBit(oldp+915,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_0_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_40) 
                                   & (IData)(vlSelf->__VdfgTmp_hcda7edad__0)))));
        bufp->chgBit(oldp+916,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_1_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_230) 
                                   & (IData)(vlSelf->__VdfgTmp_hdfe3971f__0)))));
        bufp->chgBit(oldp+917,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_2_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_420) 
                                   & (IData)(vlSelf->__VdfgTmp_he4d09561__0)))));
        bufp->chgBit(oldp+918,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_3_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_610) 
                                   & (IData)(vlSelf->__VdfgTmp_h5c3f949b__0)))));
        bufp->chgBit(oldp+919,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_4_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_800) 
                                   & (IData)(vlSelf->__VdfgTmp_h4798938d__0)))));
        bufp->chgBit(oldp+920,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_5_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_990) 
                                   & (IData)(vlSelf->__VdfgTmp_hcc8916e1__0)))));
        bufp->chgBit(oldp+921,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_6_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1180) 
                                   & (IData)(vlSelf->__VdfgTmp_ha0b5b97e__0)))));
        bufp->chgBit(oldp+922,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_7_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1370) 
                                   & (IData)(vlSelf->__VdfgTmp_haad31196__0)))));
        bufp->chgBit(oldp+923,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_8_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1560) 
                                   & (IData)(vlSelf->__VdfgTmp_h75c9a347__0)))));
        bufp->chgBit(oldp+924,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_9_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1750) 
                                   & (IData)(vlSelf->__VdfgTmp_h0f151a33__0)))));
        bufp->chgBit(oldp+925,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_10_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1940) 
                                   & (IData)(vlSelf->__VdfgTmp_h75c6d62f__0)))));
        bufp->chgBit(oldp+926,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_11_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2130) 
                                   & (IData)(vlSelf->__VdfgTmp_hf3ff2df8__0)))));
        bufp->chgBit(oldp+927,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_12_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2320) 
                                   & (IData)(vlSelf->__VdfgTmp_hff56f36a__0)))));
        bufp->chgBit(oldp+928,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_13_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2510) 
                                   & (IData)(vlSelf->__VdfgTmp_h4a791e98__0)))));
        bufp->chgBit(oldp+929,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_14_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2700) 
                                   & (IData)(vlSelf->__VdfgTmp_hc0bc10ed__0)))));
        bufp->chgBit(oldp+930,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_15_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2890) 
                                   & (IData)(vlSelf->__VdfgTmp_h90404f4f__0)))));
        bufp->chgBit(oldp+931,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_4_opcode))));
        bufp->chgBit(oldp+932,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_0_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_51) 
                                   & (IData)(vlSelf->__VdfgTmp_h7d103831__0)))));
        bufp->chgBit(oldp+933,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_1_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_241) 
                                   & (IData)(vlSelf->__VdfgTmp_h4e70e1a3__0)))));
        bufp->chgBit(oldp+934,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_2_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_431) 
                                   & (IData)(vlSelf->__VdfgTmp_h7b61e015__0)))));
        bufp->chgBit(oldp+935,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_3_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_621) 
                                   & (IData)(vlSelf->__VdfgTmp_hcc4e4917__0)))));
        bufp->chgBit(oldp+936,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_4_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_811) 
                                   & (IData)(vlSelf->__VdfgTmp_h362ffc19__0)))));
        bufp->chgBit(oldp+937,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_5_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1001) 
                                   & (IData)(vlSelf->__VdfgTmp_h5b3a2455__0)))));
        bufp->chgBit(oldp+938,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_6_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1191) 
                                   & (IData)(vlSelf->__VdfgTmp_h305a4bca__0)))));
        bufp->chgBit(oldp+939,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_7_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1381) 
                                   & (IData)(vlSelf->__VdfgTmp_hd944e302__0)))));
        bufp->chgBit(oldp+940,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_8_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1571) 
                                   & (IData)(vlSelf->__VdfgTmp_he5594cd3__0)))));
        bufp->chgBit(oldp+941,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_9_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1761) 
                                   & (IData)(vlSelf->__VdfgTmp_hbea635cf__0)))));
        bufp->chgBit(oldp+942,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_10_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1951) 
                                   & (IData)(vlSelf->__VdfgTmp_h0469e5bb__0)))));
        bufp->chgBit(oldp+943,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_11_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2141) 
                                   & (IData)(vlSelf->__VdfgTmp_h6048586c__0)))));
        bufp->chgBit(oldp+944,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_12_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2331) 
                                   & (IData)(vlSelf->__VdfgTmp_h6fc7a41e__0)))));
        bufp->chgBit(oldp+945,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_13_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2521) 
                                   & (IData)(vlSelf->__VdfgTmp_h3ae8e00c__0)))));
        bufp->chgBit(oldp+946,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_14_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2711) 
                                   & (IData)(vlSelf->__VdfgTmp_hb02f4261__0)))));
        bufp->chgBit(oldp+947,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_15_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2901) 
                                   & (IData)(vlSelf->__VdfgTmp_h61d161db__0)))));
        bufp->chgBit(oldp+948,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_5_opcode))));
        bufp->chgBit(oldp+949,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_0_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_62) 
                                   & (IData)(vlSelf->__VdfgTmp_h105d4c66__0)))));
        bufp->chgBit(oldp+950,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_1_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_252) 
                                   & (IData)(vlSelf->__VdfgTmp_ha4bd7554__0)))));
        bufp->chgBit(oldp+951,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_2_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_442) 
                                   & (IData)(vlSelf->__VdfgTmp_h902574a6__0)))));
        bufp->chgBit(oldp+952,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_3_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_632) 
                                   & (IData)(vlSelf->__VdfgTmp_h17053546__0)))));
        bufp->chgBit(oldp+953,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_4_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_822) 
                                   & (IData)(vlSelf->__VdfgTmp_h10f37048__0)))));
        bufp->chgBit(oldp+954,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_5_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1012) 
                                   & (IData)(vlSelf->__VdfgTmp_hb077b8ba__0)))));
        bufp->chgBit(oldp+955,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_6_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1202) 
                                   & (IData)(vlSelf->__VdfgTmp_hdd9ec7bb__0)))));
        bufp->chgBit(oldp+956,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_7_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1392) 
                                   & (IData)(vlSelf->__VdfgTmp_he6387f53__0)))));
        bufp->chgBit(oldp+957,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_8_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1582) 
                                   & (IData)(vlSelf->__VdfgTmp_hcee2c102__0)))));
        bufp->chgBit(oldp+958,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_9_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1772) 
                                   & (IData)(vlSelf->__VdfgTmp_h5862b87e__0)))));
        bufp->chgBit(oldp+959,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_10_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1962) 
                                   & (IData)(vlSelf->__VdfgTmp_h2aad69ea__0)))));
        bufp->chgBit(oldp+960,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_11_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2152) 
                                   & (IData)(vlSelf->__VdfgTmp_h4695cfb3__0)))));
        bufp->chgBit(oldp+961,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_12_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2342) 
                                   & (IData)(vlSelf->__VdfgTmp_h480050a1__0)))));
        bufp->chgBit(oldp+962,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_13_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2532) 
                                   & (IData)(vlSelf->__VdfgTmp_h1f247c53__0)))));
        bufp->chgBit(oldp+963,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_14_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2722) 
                                   & (IData)(vlSelf->__VdfgTmp_h8dd2bed2__0)))));
        bufp->chgBit(oldp+964,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_15_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2912) 
                                   & (IData)(vlSelf->__VdfgTmp_h4c9ded0a__0)))));
        bufp->chgBit(oldp+965,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_6_opcode))));
        bufp->chgBit(oldp+966,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_0_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_73) 
                                   & (IData)(vlSelf->__VdfgTmp_hcf3953e8__0)))));
        bufp->chgBit(oldp+967,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_1_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_263) 
                                   & (IData)(vlSelf->__VdfgTmp_hdc590eda__0)))));
        bufp->chgBit(oldp+968,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_2_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_453) 
                                   & (IData)(vlSelf->__VdfgTmp_he9591f5c__0)))));
        bufp->chgBit(oldp+969,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_3_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_643) 
                                   & (IData)(vlSelf->__VdfgTmp_h5ea12edc__0)))));
        bufp->chgBit(oldp+970,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_4_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_833) 
                                   & (IData)(vlSelf->__VdfgTmp_h581715d6__0)))));
        bufp->chgBit(oldp+971,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_5_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1023) 
                                   & (IData)(vlSelf->__VdfgTmp_hc9139f2c__0)))));
        bufp->chgBit(oldp+972,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_6_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1213) 
                                   & (IData)(vlSelf->__VdfgTmp_ha2332305__0)))));
        bufp->chgBit(oldp+973,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_7_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1403) 
                                   & (IData)(vlSelf->__VdfgTmp_haf5d9bc9__0)))));
        bufp->chgBit(oldp+974,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_8_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1593) 
                                   & (IData)(vlSelf->__VdfgTmp_h7746258c__0)))));
        bufp->chgBit(oldp+975,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_9_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1783) 
                                   & (IData)(vlSelf->__VdfgTmp_h008e9cf4__0)))));
        bufp->chgBit(oldp+976,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_10_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1973) 
                                   & (IData)(vlSelf->__VdfgTmp_h72414c74__0)))));
        bufp->chgBit(oldp+977,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_11_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2163) 
                                   & (IData)(vlSelf->__VdfgTmp_hfe71b325__0)))));
        bufp->chgBit(oldp+978,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_12_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2353) 
                                   & (IData)(vlSelf->__VdfgTmp_h01dc7d57__0)))));
        bufp->chgBit(oldp+979,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_13_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2543) 
                                   & (IData)(vlSelf->__VdfgTmp_h548398c5__0)))));
        bufp->chgBit(oldp+980,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_14_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2733) 
                                   & (IData)(vlSelf->__VdfgTmp_hc2369aa8__0)))));
        bufp->chgBit(oldp+981,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_15_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2923) 
                                   & (IData)(vlSelf->__VdfgTmp_h97f9c894__0)))));
        bufp->chgBit(oldp+982,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_7_opcode))));
        bufp->chgBit(oldp+983,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_0_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_84) 
                                   & (IData)(vlSelf->__VdfgTmp_hf833fb5c__0)))));
        bufp->chgBit(oldp+984,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_1_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_274) 
                                   & (IData)(vlSelf->__VdfgTmp_hd35fa64e__0)))));
        bufp->chgBit(oldp+985,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_2_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_464) 
                                   & (IData)(vlSelf->__VdfgTmp_hf844a7b0__0)))));
        bufp->chgBit(oldp+986,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_3_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_654) 
                                   & (IData)(vlSelf->__VdfgTmp_h4fab8648__0)))));
        bufp->chgBit(oldp+987,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_4_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_844) 
                                   & (IData)(vlSelf->__VdfgTmp_h4b0cbd42__0)))));
        bufp->chgBit(oldp+988,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_5_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1034) 
                                   & (IData)(vlSelf->__VdfgTmp_hd816e7b0__0)))));
        bufp->chgBit(oldp+989,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_6_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1224) 
                                   & (IData)(vlSelf->__VdfgTmp_hb5398ab1__0)))));
        bufp->chgBit(oldp+990,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_7_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1414) 
                                   & (IData)(vlSelf->__VdfgTmp_h5ea720a5__0)))));
        bufp->chgBit(oldp+991,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_8_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1604) 
                                   & (IData)(vlSelf->__VdfgTmp_h667d9278__0)))));
        bufp->chgBit(oldp+992,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_9_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1794) 
                                   & (IData)(vlSelf->__VdfgTmp_h33810b60__0)))));
        bufp->chgBit(oldp+993,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_10_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1984) 
                                   & (IData)(vlSelf->__VdfgTmp_h814aa4e0__0)))));
        bufp->chgBit(oldp+994,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_11_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2174) 
                                   & (IData)(vlSelf->__VdfgTmp_hef6b1a89__0)))));
        bufp->chgBit(oldp+995,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_12_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2364) 
                                   & (IData)(vlSelf->__VdfgTmp_hf0e2e5bb__0)))));
        bufp->chgBit(oldp+996,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_13_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2554) 
                                   & (IData)(vlSelf->__VdfgTmp_h47852fa9__0)))));
        bufp->chgBit(oldp+997,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_14_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2744) 
                                   & (IData)(vlSelf->__VdfgTmp_h353003dc__0)))));
        bufp->chgBit(oldp+998,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_15_valid) 
                                & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2934) 
                                   & (IData)(vlSelf->__VdfgTmp_he4fc2000__0)))));
        bufp->chgBit(oldp+999,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_8_opcode))));
        bufp->chgBit(oldp+1000,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_0_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_95) 
                                    & (IData)(vlSelf->__VdfgTmp_he79eaa22__0)))));
        bufp->chgBit(oldp+1001,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_1_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_285) 
                                    & (IData)(vlSelf->__VdfgTmp_h35fb5790__0)))));
        bufp->chgBit(oldp+1002,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_2_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_475) 
                                    & (IData)(vlSelf->__VdfgTmp_h02e756e2__0)))));
        bufp->chgBit(oldp+1003,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_3_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_665) 
                                    & (IData)(vlSelf->__VdfgTmp_h65c4d71a__0)))));
        bufp->chgBit(oldp+1004,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_4_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_855) 
                                    & (IData)(vlSelf->__VdfgTmp_ha1b1520c__0)))));
        bufp->chgBit(oldp+1005,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_5_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1045) 
                                    & (IData)(vlSelf->__VdfgTmp_h22b1d666__0)))));
        bufp->chgBit(oldp+1006,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_6_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1235) 
                                    & (IData)(vlSelf->__VdfgTmp_h4adcf9ff__0)))));
        bufp->chgBit(oldp+1007,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_7_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1425) 
                                    & (IData)(vlSelf->__VdfgTmp_h70fa5117__0)))));
        bufp->chgBit(oldp+1008,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_8_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1615) 
                                    & (IData)(vlSelf->__VdfgTmp_h5c20e2c6__0)))));
        bufp->chgBit(oldp+1009,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_9_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1805) 
                                    & (IData)(vlSelf->__VdfgTmp_h292c5bb2__0)))));
        bufp->chgBit(oldp+1010,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_10_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1995) 
                                    & (IData)(vlSelf->__VdfgTmp_h9bef97ae__0)))));
        bufp->chgBit(oldp+1011,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_11_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2185) 
                                    & (IData)(vlSelf->__VdfgTmp_hc9d7ea7f__0)))));
        bufp->chgBit(oldp+1012,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_12_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2375) 
                                    & (IData)(vlSelf->__VdfgTmp_hd6be32ed__0)))));
        bufp->chgBit(oldp+1013,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_13_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2565) 
                                    & (IData)(vlSelf->__VdfgTmp_hac665e1f__0)))));
        bufp->chgBit(oldp+1014,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_14_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2755) 
                                    & (IData)(vlSelf->__VdfgTmp_h1a94d06e__0)))));
        bufp->chgBit(oldp+1015,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_15_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2945) 
                                    & (IData)(vlSelf->__VdfgTmp_hfe5f0fce__0)))));
        bufp->chgBit(oldp+1016,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_9_opcode))));
        bufp->chgBit(oldp+1017,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_0_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_106) 
                                    & (IData)(vlSelf->__VdfgTmp_hd3ac9510__0)))));
        bufp->chgBit(oldp+1018,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_1_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_296) 
                                    & (IData)(vlSelf->__VdfgTmp_he9ed4c82__0)))));
        bufp->chgBit(oldp+1019,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_2_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_486) 
                                    & (IData)(vlSelf->__VdfgTmp_hd6d55df4__0)))));
        bufp->chgBit(oldp+1020,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_3_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_676) 
                                    & (IData)(vlSelf->__VdfgTmp_h2a3aec34__0)))));
        bufp->chgBit(oldp+1021,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_4_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_866) 
                                    & (IData)(vlSelf->__VdfgTmp_h55a35b3e__0)))));
        bufp->chgBit(oldp+1022,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_5_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1056) 
                                    & (IData)(vlSelf->__VdfgTmp_hfe87c174__0)))));
        bufp->chgBit(oldp+1023,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_6_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1246) 
                                    & (IData)(vlSelf->__VdfgTmp_h9ecee0ed__0)))));
        bufp->chgBit(oldp+1024,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_7_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1436) 
                                    & (IData)(vlSelf->__VdfgTmp_ha4c84661__0)))));
        bufp->chgBit(oldp+1025,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_8_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1626) 
                                    & (IData)(vlSelf->__VdfgTmp_h0bd2e834__0)))));
        bufp->chgBit(oldp+1026,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_9_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1816) 
                                    & (IData)(vlSelf->__VdfgTmp_h1d1252ac__0)))));
        bufp->chgBit(oldp+1027,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_10_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2006) 
                                    & (IData)(vlSelf->__VdfgTmp_h67dd8edc__0)))));
        bufp->chgBit(oldp+1028,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_11_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2196) 
                                    & (IData)(vlSelf->__VdfgTmp_h85c5f54d__0)))));
        bufp->chgBit(oldp+1029,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_12_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2386) 
                                    & (IData)(vlSelf->__VdfgTmp_h0d503bff__0)))));
        bufp->chgBit(oldp+1030,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_13_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2576) 
                                    & (IData)(vlSelf->__VdfgTmp_h5874456d__0)))));
        bufp->chgBit(oldp+1031,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_14_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2766) 
                                    & (IData)(vlSelf->__VdfgTmp_hcea2d900__0)))));
        bufp->chgBit(oldp+1032,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_15_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2956) 
                                    & (IData)(vlSelf->__VdfgTmp_h824d06fc__0)))));
        bufp->chgBit(oldp+1033,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_10_opcode))));
        bufp->chgBit(oldp+1034,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_0_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_117) 
                                    & (IData)(vlSelf->__VdfgTmp_h122838eb__0)))));
        bufp->chgBit(oldp+1035,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_1_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_307) 
                                    & (IData)(vlSelf->__VdfgTmp_ha968e1d9__0)))));
        bufp->chgBit(oldp+1036,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_2_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_497) 
                                    & (IData)(vlSelf->__VdfgTmp_h9669e05b__0)))));
        bufp->chgBit(oldp+1037,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_3_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_687) 
                                    & (IData)(vlSelf->__VdfgTmp_he9b649dd__0)))));
        bufp->chgBit(oldp+1038,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_4_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_877) 
                                    & (IData)(vlSelf->__VdfgTmp_h1527fcd7__0)))));
        bufp->chgBit(oldp+1039,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_5_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1067) 
                                    & (IData)(vlSelf->__VdfgTmp_hbe02242f__0)))));
        bufp->chgBit(oldp+1040,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_6_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1257) 
                                    & (IData)(vlSelf->__VdfgTmp_hdf424c04__0)))));
        bufp->chgBit(oldp+1041,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_7_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1447) 
                                    & (IData)(vlSelf->__VdfgTmp_he44ce2c8__0)))));
        bufp->chgBit(oldp+1042,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_8_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1637) 
                                    & (IData)(vlSelf->__VdfgTmp_hc8514c8d__0)))));
        bufp->chgBit(oldp+1043,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_9_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1827) 
                                    & (IData)(vlSelf->__VdfgTmp_h5d9e35f5__0)))));
        bufp->chgBit(oldp+1044,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_10_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2017) 
                                    & (IData)(vlSelf->__VdfgTmp_h2751e575__0)))));
        bufp->chgBit(oldp+1045,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_11_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2207) 
                                    & (IData)(vlSelf->__VdfgTmp_h45405826__0)))));
        bufp->chgBit(oldp+1046,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_12_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2397) 
                                    & (IData)(vlSelf->__VdfgTmp_h4acfa454__0)))));
        bufp->chgBit(oldp+1047,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_13_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2587) 
                                    & (IData)(vlSelf->__VdfgTmp_h19f0e1c6__0)))));
        bufp->chgBit(oldp+1048,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_14_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2777) 
                                    & (IData)(vlSelf->__VdfgTmp_h8f2745a7__0)))));
        bufp->chgBit(oldp+1049,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_15_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2967) 
                                    & (IData)(vlSelf->__VdfgTmp_h42c96195__0)))));
        bufp->chgBit(oldp+1050,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_11_opcode))));
        bufp->chgBit(oldp+1051,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_0_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_128) 
                                    & (IData)(vlSelf->__VdfgTmp_h941b3b68__0)))));
        bufp->chgBit(oldp+1052,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_1_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_318) 
                                    & (IData)(vlSelf->__VdfgTmp_h2087e65a__0)))));
        bufp->chgBit(oldp+1053,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_2_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_508) 
                                    & (IData)(vlSelf->__VdfgTmp_h2c7ce7dc__0)))));
        bufp->chgBit(oldp+1054,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_3_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_698) 
                                    & (IData)(vlSelf->__VdfgTmp_h9343465c__0)))));
        bufp->chgBit(oldp+1055,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_4_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_888) 
                                    & (IData)(vlSelf->__VdfgTmp_h9f34fd56__0)))));
        bufp->chgBit(oldp+1056,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_5_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1078) 
                                    & (IData)(vlSelf->__VdfgTmp_h342d27ac__0)))));
        bufp->chgBit(oldp+1057,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_6_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1268) 
                                    & (IData)(vlSelf->__VdfgTmp_h59514a85__0)))));
        bufp->chgBit(oldp+1058,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_7_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1458) 
                                    & (IData)(vlSelf->__VdfgTmp_h627fe049__0)))));
        bufp->chgBit(oldp+1059,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_8_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1648) 
                                    & (IData)(vlSelf->__VdfgTmp_hb2a4520c__0)))));
        bufp->chgBit(oldp+1060,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_9_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1838) 
                                    & (IData)(vlSelf->__VdfgTmp_hc7a8cb74__0)))));
        bufp->chgBit(oldp+1061,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_10_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2028) 
                                    & (IData)(vlSelf->__VdfgTmp_had62e4f4__0)))));
        bufp->chgBit(oldp+1062,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_11_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2218) 
                                    & (IData)(vlSelf->__VdfgTmp_h3b535aa5__0)))));
        bufp->chgBit(oldp+1063,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_12_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2408) 
                                    & (IData)(vlSelf->__VdfgTmp_hc43aa5d7__0)))));
        bufp->chgBit(oldp+1064,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_13_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2598) 
                                    & (IData)(vlSelf->__VdfgTmp_h93ddef45__0)))));
        bufp->chgBit(oldp+1065,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_14_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2788) 
                                    & (IData)(vlSelf->__VdfgTmp_h09184328__0)))));
        bufp->chgBit(oldp+1066,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_15_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2978) 
                                    & (IData)(vlSelf->__VdfgTmp_hc8a46014__0)))));
        bufp->chgBit(oldp+1067,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_12_opcode))));
        bufp->chgBit(oldp+1068,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_0_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_139) 
                                    & (IData)(vlSelf->__VdfgTmp_h1c5681ea__0)))));
        bufp->chgBit(oldp+1069,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_1_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_329) 
                                    & (IData)(vlSelf->__VdfgTmp_ha8b2b8d8__0)))));
        bufp->chgBit(oldp+1070,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_2_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_519) 
                                    & (IData)(vlSelf->__VdfgTmp_h942f495a__0)))));
        bufp->chgBit(oldp+1071,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_3_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_709) 
                                    & (IData)(vlSelf->__VdfgTmp_heb0ce0d2__0)))));
        bufp->chgBit(oldp+1072,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_4_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_899) 
                                    & (IData)(vlSelf->__VdfgTmp_h14e9a7d4__0)))));
        bufp->chgBit(oldp+1073,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_5_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1089) 
                                    & (IData)(vlSelf->__VdfgTmp_hbc79cd2e__0)))));
        bufp->chgBit(oldp+1074,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_6_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1279) 
                                    & (IData)(vlSelf->__VdfgTmp_hd1849507__0)))));
        bufp->chgBit(oldp+1075,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_7_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1469) 
                                    & (IData)(vlSelf->__VdfgTmp_hfa024dcf__0)))));
        bufp->chgBit(oldp+1076,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_8_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1659) 
                                    & (IData)(vlSelf->__VdfgTmp_hca98f78e__0)))));
        bufp->chgBit(oldp+1077,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_9_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1849) 
                                    & (IData)(vlSelf->__VdfgTmp_h5c646e0a__0)))));
        bufp->chgBit(oldp+1078,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_10_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2039) 
                                    & (IData)(vlSelf->__VdfgTmp_h2697ba76__0)))));
        bufp->chgBit(oldp+1079,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_11_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2229) 
                                    & (IData)(vlSelf->__VdfgTmp_h428e0127__0)))));
        bufp->chgBit(oldp+1080,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_12_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2419) 
                                    & (IData)(vlSelf->__VdfgTmp_h4c060f55__0)))));
        bufp->chgBit(oldp+1081,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_13_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2609) 
                                    & (IData)(vlSelf->__VdfgTmp_h1b2e4ac7__0)))));
        bufp->chgBit(oldp+1082,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_14_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2799) 
                                    & (IData)(vlSelf->__VdfgTmp_h91ececa6__0)))));
        bufp->chgBit(oldp+1083,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_15_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2989) 
                                    & (IData)(vlSelf->__VdfgTmp_h40973a96__0)))));
        bufp->chgBit(oldp+1084,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_13_opcode))));
        bufp->chgBit(oldp+1085,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_0_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_150) 
                                    & (IData)(vlSelf->__VdfgTmp_hb9c3e853__0)))));
        bufp->chgBit(oldp+1086,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_1_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_340) 
                                    & (IData)(vlSelf->__VdfgTmp_h134f9141__0)))));
        bufp->chgBit(oldp+1087,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_2_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_530) 
                                    & (IData)(vlSelf->__VdfgTmp_h38b490b3__0)))));
        bufp->chgBit(oldp+1088,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_3_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_720) 
                                    & (IData)(vlSelf->__VdfgTmp_h8f9b9975__0)))));
        bufp->chgBit(oldp+1089,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_4_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_910) 
                                    & (IData)(vlSelf->__VdfgTmp_h8b7c8c7f__0)))));
        bufp->chgBit(oldp+1090,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_5_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1100) 
                                    & (IData)(vlSelf->__VdfgTmp_h18e514b7__0)))));
        bufp->chgBit(oldp+1091,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_6_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1290) 
                                    & (IData)(vlSelf->__VdfgTmp_h7529bbac__0)))));
        bufp->chgBit(oldp+1092,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_7_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1480) 
                                    & (IData)(vlSelf->__VdfgTmp_h1eb713a0__0)))));
        bufp->chgBit(oldp+1093,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_8_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1670) 
                                    & (IData)(vlSelf->__VdfgTmp_ha66d9d75__0)))));
        bufp->chgBit(oldp+1094,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_9_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1860) 
                                    & (IData)(vlSelf->__VdfgTmp_hf3f1046d__0)))));
        bufp->chgBit(oldp+1095,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_10_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2050) 
                                    & (IData)(vlSelf->__VdfgTmp_hc13ad41d__0)))));
        bufp->chgBit(oldp+1096,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_11_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2240) 
                                    & (IData)(vlSelf->__VdfgTmp_h2f1b2b8e__0)))));
        bufp->chgBit(oldp+1097,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_12_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2430) 
                                    & (IData)(vlSelf->__VdfgTmp_hb0f2f4bc__0)))));
        bufp->chgBit(oldp+1098,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_13_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2620) 
                                    & (IData)(vlSelf->__VdfgTmp_h879510ae__0)))));
        bufp->chgBit(oldp+1099,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_14_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2810) 
                                    & (IData)(vlSelf->__VdfgTmp_h754012df__0)))));
        bufp->chgBit(oldp+1100,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_15_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_3000) 
                                    & (IData)(vlSelf->__VdfgTmp_h24ec513d__0)))));
        bufp->chgBit(oldp+1101,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_14_opcode))));
        bufp->chgBit(oldp+1102,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_0_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_161) 
                                    & (IData)(vlSelf->__VdfgTmp_h87720796__0)))));
        bufp->chgBit(oldp+1103,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_1_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_351) 
                                    & (IData)(vlSelf->__VdfgTmp_h159e3d04__0)))));
        bufp->chgBit(oldp+1104,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_2_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_541) 
                                    & (IData)(vlSelf->__VdfgTmp_h21023376__0)))));
        bufp->chgBit(oldp+1105,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_3_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_731) 
                                    & (IData)(vlSelf->__VdfgTmp_h86687ab6__0)))));
        bufp->chgBit(oldp+1106,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_4_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_921) 
                                    & (IData)(vlSelf->__VdfgTmp_h81ce29b8__0)))));
        bufp->chgBit(oldp+1107,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_5_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1111) 
                                    & (IData)(vlSelf->__VdfgTmp_h0154730a__0)))));
        bufp->chgBit(oldp+1108,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_6_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1301) 
                                    & (IData)(vlSelf->__VdfgTmp_h6a781f6b__0)))));
        bufp->chgBit(oldp+1109,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_7_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1491) 
                                    & (IData)(vlSelf->__VdfgTmp_h1766b7e3__0)))));
        bufp->chgBit(oldp+1110,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_8_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1681) 
                                    & (IData)(vlSelf->__VdfgTmp_hbfbf79b2__0)))));
        bufp->chgBit(oldp+1111,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_9_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1871) 
                                    & (IData)(vlSelf->__VdfgTmp_hc947e02e__0)))));
        bufp->chgBit(oldp+1112,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_10_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2061) 
                                    & (IData)(vlSelf->__VdfgTmp_hbb88305a__0)))));
        bufp->chgBit(oldp+1113,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_11_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2251) 
                                    & (IData)(vlSelf->__VdfgTmp_h29aa87c3__0)))));
        bufp->chgBit(oldp+1114,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_12_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2441) 
                                    & (IData)(vlSelf->__VdfgTmp_hb9258971__0)))));
        bufp->chgBit(oldp+1115,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_13_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2631) 
                                    & (IData)(vlSelf->__VdfgTmp_h8ccab4e3__0)))));
        bufp->chgBit(oldp+1116,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_14_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2821) 
                                    & (IData)(vlSelf->__VdfgTmp_h7af17682__0)))));
        bufp->chgBit(oldp+1117,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_15_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_3011) 
                                    & (IData)(vlSelf->__VdfgTmp_hdfb2b57a__0)))));
        bufp->chgBit(oldp+1118,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_15_opcode))));
        bufp->chgBit(oldp+1119,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_0_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_172) 
                                    & (IData)(vlSelf->__VdfgTmp_h19245a98__0)))));
        bufp->chgBit(oldp+1120,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_1_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_362) 
                                    & (IData)(vlSelf->__VdfgTmp_hb264060a__0)))));
        bufp->chgBit(oldp+1121,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_2_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_552) 
                                    & (IData)(vlSelf->__VdfgTmp_h9f5c066c__0)))));
        bufp->chgBit(oldp+1122,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_3_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_742) 
                                    & (IData)(vlSelf->__VdfgTmp_he0a2278c__0)))));
        bufp->chgBit(oldp+1123,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_4_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_932) 
                                    & (IData)(vlSelf->__VdfgTmp_h2a146286__0)))));
        bufp->chgBit(oldp+1124,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_5_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1122) 
                                    & (IData)(vlSelf->__VdfgTmp_ha70e87fc__0)))));
        bufp->chgBit(oldp+1125,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_6_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1312) 
                                    & (IData)(vlSelf->__VdfgTmp_hd4362a75__0)))));
        bufp->chgBit(oldp+1126,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_7_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1502) 
                                    & (IData)(vlSelf->__VdfgTmp_hfd508099__0)))));
        bufp->chgBit(oldp+1127,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_8_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1692) 
                                    & (IData)(vlSelf->__VdfgTmp_hc14532bc__0)))));
        bufp->chgBit(oldp+1128,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_9_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1882) 
                                    & (IData)(vlSelf->__VdfgTmp_h5289ab24__0)))));
        bufp->chgBit(oldp+1129,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_10_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2072) 
                                    & (IData)(vlSelf->__VdfgTmp_h20424724__0)))));
        bufp->chgBit(oldp+1130,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_11_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2262) 
                                    & (IData)(vlSelf->__VdfgTmp_h4c7cbaf5__0)))));
        bufp->chgBit(oldp+1131,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_12_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2452) 
                                    & (IData)(vlSelf->__VdfgTmp_h53db4267__0)))));
        bufp->chgBit(oldp+1132,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_13_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2642) 
                                    & (IData)(vlSelf->__VdfgTmp_h26fc8f95__0)))));
        bufp->chgBit(oldp+1133,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_14_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2832) 
                                    & (IData)(vlSelf->__VdfgTmp_h943ba398__0)))));
        bufp->chgBit(oldp+1134,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_15_valid) 
                                 & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_3022) 
                                    & (IData)(vlSelf->__VdfgTmp_h45c4c044__0)))));
        bufp->chgBit(oldp+1135,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_0_state))));
        bufp->chgBit(oldp+1136,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_1_state))));
        bufp->chgBit(oldp+1137,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_2_state))));
        bufp->chgBit(oldp+1138,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_3_state))));
        bufp->chgBit(oldp+1139,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_4_state))));
        bufp->chgBit(oldp+1140,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_5_state))));
        bufp->chgBit(oldp+1141,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_6_state))));
        bufp->chgBit(oldp+1142,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_7_state))));
        bufp->chgBit(oldp+1143,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_8_state))));
        bufp->chgBit(oldp+1144,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_9_state))));
        bufp->chgBit(oldp+1145,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_10_state))));
        bufp->chgBit(oldp+1146,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_11_state))));
        bufp->chgBit(oldp+1147,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_12_state))));
        bufp->chgBit(oldp+1148,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_13_state))));
        bufp->chgBit(oldp+1149,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_14_state))));
        bufp->chgBit(oldp+1150,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_15_state))));
        bufp->chgCData(oldp+1151,((((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_7_state)) 
                                    << 7U) | (((0U 
                                                == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_6_state)) 
                                               << 6U) 
                                              | (((0U 
                                                   == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_5_state)) 
                                                  << 5U) 
                                                 | (((0U 
                                                      == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_4_state)) 
                                                     << 4U) 
                                                    | (((0U 
                                                         == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_3_state)) 
                                                        << 3U) 
                                                       | (((0U 
                                                            == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_2_state)) 
                                                           << 2U) 
                                                          | (((0U 
                                                               == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_1_state)) 
                                                              << 1U) 
                                                             | (0U 
                                                                == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_0_state)))))))))),8);
        bufp->chgCData(oldp+1152,(vlSelf->DCache__DOT__probe__DOT__allocId),4);
        bufp->chgBit(oldp+1153,(((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_0_state)) 
                                 | ((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_1_state)) 
                                    | ((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_2_state)) 
                                       | ((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_3_state)) 
                                          | ((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_4_state)) 
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
                                                                              | (IData)(vlSelf->DCache__DOT__probe__DOT__outValid)))))))))))))))))));
        bufp->chgBit(oldp+1154,(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_0__DOT__tagSram__DOT__mem_0_MPORT_1_en));
        bufp->chgCData(oldp+1155,((3U & ((IData)(1U) 
                                         << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)))),2);
        bufp->chgBit(oldp+1156,(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_1__DOT__tagSram__DOT__mem_0_MPORT_1_en));
        bufp->chgCData(oldp+1157,((3U & (((IData)(1U) 
                                          << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)) 
                                         >> 2U))),2);
        bufp->chgBit(oldp+1158,(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_0__DOT__tagSram__DOT__mem_0_MPORT_en_pipe_0));
        bufp->chgCData(oldp+1159,(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_0__DOT__tagSram__DOT__mem_1_MPORT_addr_pipe_0),8);
        bufp->chgBit(oldp+1160,(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_0__DOT__tagSram__DOT__mem_1_MPORT_en_pipe_0));
        bufp->chgBit(oldp+1161,(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_1__DOT__tagSram__DOT__mem_0_MPORT_en_pipe_0));
        bufp->chgCData(oldp+1162,(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_1__DOT__tagSram__DOT__mem_1_MPORT_addr_pipe_0),8);
        bufp->chgBit(oldp+1163,(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_1__DOT__tagSram__DOT__mem_1_MPORT_en_pipe_0));
        bufp->chgBit(oldp+1164,(vlSelf->DCache__DOT__tags__DOT__arrays_1__DOT__banks_0__DOT__tagSram__DOT__mem_0_MPORT_en_pipe_0));
        bufp->chgCData(oldp+1165,(vlSelf->DCache__DOT__tags__DOT__arrays_1__DOT__banks_0__DOT__tagSram__DOT__mem_0_MPORT_addr_pipe_0),8);
        bufp->chgBit(oldp+1166,(vlSelf->DCache__DOT__tags__DOT__arrays_1__DOT__banks_0__DOT__tagSram__DOT__mem_1_MPORT_en_pipe_0));
        bufp->chgBit(oldp+1167,(vlSelf->DCache__DOT__tags__DOT__arrays_1__DOT__banks_1__DOT__tagSram__DOT__mem_0_MPORT_en_pipe_0));
        bufp->chgCData(oldp+1168,(vlSelf->DCache__DOT__tags__DOT__arrays_1__DOT__banks_1__DOT__tagSram__DOT__mem_0_MPORT_addr_pipe_0),8);
        bufp->chgBit(oldp+1169,(vlSelf->DCache__DOT__tags__DOT__arrays_1__DOT__banks_1__DOT__tagSram__DOT__mem_1_MPORT_en_pipe_0));
        bufp->chgCData(oldp+1170,(vlSelf->DCache__DOT__tags__DOT__arrays_1__DOT__banks_1__DOT__tagSram__DOT__mem_1_MPORT_addr_pipe_0),8);
        bufp->chgBit(oldp+1171,(vlSelf->DCache__DOT__tags__DOT__arrays_2__DOT__banks_0__DOT__tagSram__DOT__mem_0_MPORT_en_pipe_0));
        bufp->chgCData(oldp+1172,(vlSelf->DCache__DOT__tags__DOT__arrays_2__DOT__banks_0__DOT__tagSram__DOT__mem_1_MPORT_addr_pipe_0),8);
        bufp->chgBit(oldp+1173,(vlSelf->DCache__DOT__tags__DOT__arrays_2__DOT__banks_0__DOT__tagSram__DOT__mem_1_MPORT_en_pipe_0));
        bufp->chgBit(oldp+1174,(vlSelf->DCache__DOT__tags__DOT__arrays_2__DOT__banks_1__DOT__tagSram__DOT__mem_0_MPORT_en_pipe_0));
        bufp->chgCData(oldp+1175,(vlSelf->DCache__DOT__tags__DOT__arrays_2__DOT__banks_1__DOT__tagSram__DOT__mem_1_MPORT_addr_pipe_0),8);
        bufp->chgBit(oldp+1176,(vlSelf->DCache__DOT__tags__DOT__arrays_2__DOT__banks_1__DOT__tagSram__DOT__mem_1_MPORT_en_pipe_0));
        bufp->chgBit(oldp+1177,(vlSelf->DCache__DOT__wb__DOT__entries_0_busy));
        bufp->chgCData(oldp+1178,(vlSelf->DCache__DOT__wb__DOT__entries_0_opcode),3);
        bufp->chgCData(oldp+1179,(vlSelf->DCache__DOT__wb__DOT__entries_0_resp),3);
        bufp->chgCData(oldp+1180,(vlSelf->DCache__DOT__wb__DOT__entries_0_snpTxnId),8);
        bufp->chgQData(oldp+1181,(vlSelf->DCache__DOT__wb__DOT__entries_0_addr),48);
        bufp->chgWData(oldp+1183,(vlSelf->DCache__DOT__wb__DOT__entries_0_data),512);
        bufp->chgBit(oldp+1199,(vlSelf->DCache__DOT__wb__DOT__entries_0_dataReady));
        bufp->chgCData(oldp+1200,(vlSelf->DCache__DOT__wb__DOT__entries_0_dbid),8);
        bufp->chgBit(oldp+1201,(vlSelf->DCache__DOT__wb__DOT__entries_0_dbidValid));
        bufp->chgBit(oldp+1202,(vlSelf->DCache__DOT__wb__DOT__entries_0_compGot));
        bufp->chgBit(oldp+1203,(vlSelf->DCache__DOT__wb__DOT__entries_0_dataSent));
        bufp->chgBit(oldp+1204,(vlSelf->DCache__DOT__wb__DOT__entries_0_rspSeen));
        bufp->chgCData(oldp+1205,(vlSelf->DCache__DOT__wb__DOT__entries_0_compSrc),7);
        bufp->chgBit(oldp+1206,(vlSelf->DCache__DOT__wb__DOT__entries_0_traceTag));
        bufp->chgCData(oldp+1207,(vlSelf->DCache__DOT__wb__DOT__entries_0_state),2);
        bufp->chgCData(oldp+1208,(vlSelf->DCache__DOT__wb__DOT__entries_0_beatsLeft),2);
        bufp->chgBit(oldp+1209,(vlSelf->DCache__DOT__wb__DOT__entries_1_busy));
        bufp->chgCData(oldp+1210,(vlSelf->DCache__DOT__wb__DOT__entries_1_opcode),3);
        bufp->chgCData(oldp+1211,(vlSelf->DCache__DOT__wb__DOT__entries_1_resp),3);
        bufp->chgCData(oldp+1212,(vlSelf->DCache__DOT__wb__DOT__entries_1_snpTxnId),8);
        bufp->chgQData(oldp+1213,(vlSelf->DCache__DOT__wb__DOT__entries_1_addr),48);
        bufp->chgWData(oldp+1215,(vlSelf->DCache__DOT__wb__DOT__entries_1_data),512);
        bufp->chgBit(oldp+1231,(vlSelf->DCache__DOT__wb__DOT__entries_1_dataReady));
        bufp->chgCData(oldp+1232,(vlSelf->DCache__DOT__wb__DOT__entries_1_dbid),8);
        bufp->chgBit(oldp+1233,(vlSelf->DCache__DOT__wb__DOT__entries_1_dbidValid));
        bufp->chgBit(oldp+1234,(vlSelf->DCache__DOT__wb__DOT__entries_1_compGot));
        bufp->chgBit(oldp+1235,(vlSelf->DCache__DOT__wb__DOT__entries_1_dataSent));
        bufp->chgBit(oldp+1236,(vlSelf->DCache__DOT__wb__DOT__entries_1_rspSeen));
        bufp->chgCData(oldp+1237,(vlSelf->DCache__DOT__wb__DOT__entries_1_compSrc),7);
        bufp->chgBit(oldp+1238,(vlSelf->DCache__DOT__wb__DOT__entries_1_traceTag));
        bufp->chgCData(oldp+1239,(vlSelf->DCache__DOT__wb__DOT__entries_1_state),2);
        bufp->chgCData(oldp+1240,(vlSelf->DCache__DOT__wb__DOT__entries_1_beatsLeft),2);
        bufp->chgBit(oldp+1241,(vlSelf->DCache__DOT__wb__DOT__entries_2_busy));
        bufp->chgCData(oldp+1242,(vlSelf->DCache__DOT__wb__DOT__entries_2_opcode),3);
        bufp->chgCData(oldp+1243,(vlSelf->DCache__DOT__wb__DOT__entries_2_resp),3);
        bufp->chgCData(oldp+1244,(vlSelf->DCache__DOT__wb__DOT__entries_2_snpTxnId),8);
        bufp->chgQData(oldp+1245,(vlSelf->DCache__DOT__wb__DOT__entries_2_addr),48);
        bufp->chgWData(oldp+1247,(vlSelf->DCache__DOT__wb__DOT__entries_2_data),512);
        bufp->chgBit(oldp+1263,(vlSelf->DCache__DOT__wb__DOT__entries_2_dataReady));
        bufp->chgCData(oldp+1264,(vlSelf->DCache__DOT__wb__DOT__entries_2_dbid),8);
        bufp->chgBit(oldp+1265,(vlSelf->DCache__DOT__wb__DOT__entries_2_dbidValid));
        bufp->chgBit(oldp+1266,(vlSelf->DCache__DOT__wb__DOT__entries_2_compGot));
        bufp->chgBit(oldp+1267,(vlSelf->DCache__DOT__wb__DOT__entries_2_dataSent));
        bufp->chgBit(oldp+1268,(vlSelf->DCache__DOT__wb__DOT__entries_2_rspSeen));
        bufp->chgCData(oldp+1269,(vlSelf->DCache__DOT__wb__DOT__entries_2_compSrc),7);
        bufp->chgBit(oldp+1270,(vlSelf->DCache__DOT__wb__DOT__entries_2_traceTag));
        bufp->chgCData(oldp+1271,(vlSelf->DCache__DOT__wb__DOT__entries_2_state),2);
        bufp->chgCData(oldp+1272,(vlSelf->DCache__DOT__wb__DOT__entries_2_beatsLeft),2);
        bufp->chgBit(oldp+1273,(vlSelf->DCache__DOT__wb__DOT__entries_3_busy));
        bufp->chgCData(oldp+1274,(vlSelf->DCache__DOT__wb__DOT__entries_3_opcode),3);
        bufp->chgCData(oldp+1275,(vlSelf->DCache__DOT__wb__DOT__entries_3_resp),3);
        bufp->chgCData(oldp+1276,(vlSelf->DCache__DOT__wb__DOT__entries_3_snpTxnId),8);
        bufp->chgQData(oldp+1277,(vlSelf->DCache__DOT__wb__DOT__entries_3_addr),48);
        bufp->chgWData(oldp+1279,(vlSelf->DCache__DOT__wb__DOT__entries_3_data),512);
        bufp->chgBit(oldp+1295,(vlSelf->DCache__DOT__wb__DOT__entries_3_dataReady));
        bufp->chgCData(oldp+1296,(vlSelf->DCache__DOT__wb__DOT__entries_3_dbid),8);
        bufp->chgBit(oldp+1297,(vlSelf->DCache__DOT__wb__DOT__entries_3_dbidValid));
        bufp->chgBit(oldp+1298,(vlSelf->DCache__DOT__wb__DOT__entries_3_compGot));
        bufp->chgBit(oldp+1299,(vlSelf->DCache__DOT__wb__DOT__entries_3_dataSent));
        bufp->chgBit(oldp+1300,(vlSelf->DCache__DOT__wb__DOT__entries_3_rspSeen));
        bufp->chgCData(oldp+1301,(vlSelf->DCache__DOT__wb__DOT__entries_3_compSrc),7);
        bufp->chgBit(oldp+1302,(vlSelf->DCache__DOT__wb__DOT__entries_3_traceTag));
        bufp->chgCData(oldp+1303,(vlSelf->DCache__DOT__wb__DOT__entries_3_state),2);
        bufp->chgCData(oldp+1304,(vlSelf->DCache__DOT__wb__DOT__entries_3_beatsLeft),2);
        bufp->chgBit(oldp+1305,(vlSelf->DCache__DOT__wb__DOT__entries_4_busy));
        bufp->chgCData(oldp+1306,(vlSelf->DCache__DOT__wb__DOT__entries_4_opcode),3);
        bufp->chgCData(oldp+1307,(vlSelf->DCache__DOT__wb__DOT__entries_4_resp),3);
        bufp->chgCData(oldp+1308,(vlSelf->DCache__DOT__wb__DOT__entries_4_snpTxnId),8);
        bufp->chgQData(oldp+1309,(vlSelf->DCache__DOT__wb__DOT__entries_4_addr),48);
        bufp->chgWData(oldp+1311,(vlSelf->DCache__DOT__wb__DOT__entries_4_data),512);
        bufp->chgBit(oldp+1327,(vlSelf->DCache__DOT__wb__DOT__entries_4_dataReady));
        bufp->chgCData(oldp+1328,(vlSelf->DCache__DOT__wb__DOT__entries_4_dbid),8);
        bufp->chgBit(oldp+1329,(vlSelf->DCache__DOT__wb__DOT__entries_4_dbidValid));
        bufp->chgBit(oldp+1330,(vlSelf->DCache__DOT__wb__DOT__entries_4_compGot));
        bufp->chgBit(oldp+1331,(vlSelf->DCache__DOT__wb__DOT__entries_4_dataSent));
        bufp->chgBit(oldp+1332,(vlSelf->DCache__DOT__wb__DOT__entries_4_rspSeen));
        bufp->chgCData(oldp+1333,(vlSelf->DCache__DOT__wb__DOT__entries_4_compSrc),7);
        bufp->chgBit(oldp+1334,(vlSelf->DCache__DOT__wb__DOT__entries_4_traceTag));
        bufp->chgCData(oldp+1335,(vlSelf->DCache__DOT__wb__DOT__entries_4_state),2);
        bufp->chgCData(oldp+1336,(vlSelf->DCache__DOT__wb__DOT__entries_4_beatsLeft),2);
        bufp->chgBit(oldp+1337,(vlSelf->DCache__DOT__wb__DOT__entries_5_busy));
        bufp->chgCData(oldp+1338,(vlSelf->DCache__DOT__wb__DOT__entries_5_opcode),3);
        bufp->chgCData(oldp+1339,(vlSelf->DCache__DOT__wb__DOT__entries_5_resp),3);
        bufp->chgCData(oldp+1340,(vlSelf->DCache__DOT__wb__DOT__entries_5_snpTxnId),8);
        bufp->chgQData(oldp+1341,(vlSelf->DCache__DOT__wb__DOT__entries_5_addr),48);
        bufp->chgWData(oldp+1343,(vlSelf->DCache__DOT__wb__DOT__entries_5_data),512);
        bufp->chgBit(oldp+1359,(vlSelf->DCache__DOT__wb__DOT__entries_5_dataReady));
        bufp->chgCData(oldp+1360,(vlSelf->DCache__DOT__wb__DOT__entries_5_dbid),8);
        bufp->chgBit(oldp+1361,(vlSelf->DCache__DOT__wb__DOT__entries_5_dbidValid));
        bufp->chgBit(oldp+1362,(vlSelf->DCache__DOT__wb__DOT__entries_5_compGot));
        bufp->chgBit(oldp+1363,(vlSelf->DCache__DOT__wb__DOT__entries_5_dataSent));
        bufp->chgBit(oldp+1364,(vlSelf->DCache__DOT__wb__DOT__entries_5_rspSeen));
        bufp->chgCData(oldp+1365,(vlSelf->DCache__DOT__wb__DOT__entries_5_compSrc),7);
        bufp->chgBit(oldp+1366,(vlSelf->DCache__DOT__wb__DOT__entries_5_traceTag));
        bufp->chgCData(oldp+1367,(vlSelf->DCache__DOT__wb__DOT__entries_5_state),2);
        bufp->chgCData(oldp+1368,(vlSelf->DCache__DOT__wb__DOT__entries_5_beatsLeft),2);
        bufp->chgBit(oldp+1369,(vlSelf->DCache__DOT__wb__DOT__entries_6_busy));
        bufp->chgCData(oldp+1370,(vlSelf->DCache__DOT__wb__DOT__entries_6_opcode),3);
        bufp->chgCData(oldp+1371,(vlSelf->DCache__DOT__wb__DOT__entries_6_resp),3);
        bufp->chgCData(oldp+1372,(vlSelf->DCache__DOT__wb__DOT__entries_6_snpTxnId),8);
        bufp->chgQData(oldp+1373,(vlSelf->DCache__DOT__wb__DOT__entries_6_addr),48);
        bufp->chgWData(oldp+1375,(vlSelf->DCache__DOT__wb__DOT__entries_6_data),512);
        bufp->chgBit(oldp+1391,(vlSelf->DCache__DOT__wb__DOT__entries_6_dataReady));
        bufp->chgCData(oldp+1392,(vlSelf->DCache__DOT__wb__DOT__entries_6_dbid),8);
        bufp->chgBit(oldp+1393,(vlSelf->DCache__DOT__wb__DOT__entries_6_dbidValid));
        bufp->chgBit(oldp+1394,(vlSelf->DCache__DOT__wb__DOT__entries_6_compGot));
        bufp->chgBit(oldp+1395,(vlSelf->DCache__DOT__wb__DOT__entries_6_dataSent));
        bufp->chgBit(oldp+1396,(vlSelf->DCache__DOT__wb__DOT__entries_6_rspSeen));
        bufp->chgCData(oldp+1397,(vlSelf->DCache__DOT__wb__DOT__entries_6_compSrc),7);
        bufp->chgBit(oldp+1398,(vlSelf->DCache__DOT__wb__DOT__entries_6_traceTag));
        bufp->chgCData(oldp+1399,(vlSelf->DCache__DOT__wb__DOT__entries_6_state),2);
        bufp->chgCData(oldp+1400,(vlSelf->DCache__DOT__wb__DOT__entries_6_beatsLeft),2);
        bufp->chgBit(oldp+1401,(vlSelf->DCache__DOT__wb__DOT__entries_7_busy));
        bufp->chgCData(oldp+1402,(vlSelf->DCache__DOT__wb__DOT__entries_7_opcode),3);
        bufp->chgCData(oldp+1403,(vlSelf->DCache__DOT__wb__DOT__entries_7_resp),3);
        bufp->chgCData(oldp+1404,(vlSelf->DCache__DOT__wb__DOT__entries_7_snpTxnId),8);
        bufp->chgQData(oldp+1405,(vlSelf->DCache__DOT__wb__DOT__entries_7_addr),48);
        bufp->chgWData(oldp+1407,(vlSelf->DCache__DOT__wb__DOT__entries_7_data),512);
        bufp->chgBit(oldp+1423,(vlSelf->DCache__DOT__wb__DOT__entries_7_dataReady));
        bufp->chgCData(oldp+1424,(vlSelf->DCache__DOT__wb__DOT__entries_7_dbid),8);
        bufp->chgBit(oldp+1425,(vlSelf->DCache__DOT__wb__DOT__entries_7_dbidValid));
        bufp->chgBit(oldp+1426,(vlSelf->DCache__DOT__wb__DOT__entries_7_compGot));
        bufp->chgBit(oldp+1427,(vlSelf->DCache__DOT__wb__DOT__entries_7_dataSent));
        bufp->chgBit(oldp+1428,(vlSelf->DCache__DOT__wb__DOT__entries_7_rspSeen));
        bufp->chgCData(oldp+1429,(vlSelf->DCache__DOT__wb__DOT__entries_7_compSrc),7);
        bufp->chgBit(oldp+1430,(vlSelf->DCache__DOT__wb__DOT__entries_7_traceTag));
        bufp->chgCData(oldp+1431,(vlSelf->DCache__DOT__wb__DOT__entries_7_state),2);
        bufp->chgCData(oldp+1432,(vlSelf->DCache__DOT__wb__DOT__entries_7_beatsLeft),2);
        bufp->chgBit(oldp+1433,(vlSelf->DCache__DOT__wb__DOT__entries_8_busy));
        bufp->chgCData(oldp+1434,(vlSelf->DCache__DOT__wb__DOT__entries_8_opcode),3);
        bufp->chgCData(oldp+1435,(vlSelf->DCache__DOT__wb__DOT__entries_8_resp),3);
        bufp->chgCData(oldp+1436,(vlSelf->DCache__DOT__wb__DOT__entries_8_snpTxnId),8);
        bufp->chgQData(oldp+1437,(vlSelf->DCache__DOT__wb__DOT__entries_8_addr),48);
        bufp->chgWData(oldp+1439,(vlSelf->DCache__DOT__wb__DOT__entries_8_data),512);
        bufp->chgBit(oldp+1455,(vlSelf->DCache__DOT__wb__DOT__entries_8_dataReady));
        bufp->chgCData(oldp+1456,(vlSelf->DCache__DOT__wb__DOT__entries_8_dbid),8);
        bufp->chgBit(oldp+1457,(vlSelf->DCache__DOT__wb__DOT__entries_8_dbidValid));
        bufp->chgBit(oldp+1458,(vlSelf->DCache__DOT__wb__DOT__entries_8_compGot));
        bufp->chgBit(oldp+1459,(vlSelf->DCache__DOT__wb__DOT__entries_8_dataSent));
        bufp->chgBit(oldp+1460,(vlSelf->DCache__DOT__wb__DOT__entries_8_rspSeen));
        bufp->chgCData(oldp+1461,(vlSelf->DCache__DOT__wb__DOT__entries_8_compSrc),7);
        bufp->chgBit(oldp+1462,(vlSelf->DCache__DOT__wb__DOT__entries_8_traceTag));
        bufp->chgCData(oldp+1463,(vlSelf->DCache__DOT__wb__DOT__entries_8_state),2);
        bufp->chgCData(oldp+1464,(vlSelf->DCache__DOT__wb__DOT__entries_8_beatsLeft),2);
        bufp->chgBit(oldp+1465,(vlSelf->DCache__DOT__wb__DOT__entries_9_busy));
        bufp->chgCData(oldp+1466,(vlSelf->DCache__DOT__wb__DOT__entries_9_opcode),3);
        bufp->chgCData(oldp+1467,(vlSelf->DCache__DOT__wb__DOT__entries_9_resp),3);
        bufp->chgCData(oldp+1468,(vlSelf->DCache__DOT__wb__DOT__entries_9_snpTxnId),8);
        bufp->chgQData(oldp+1469,(vlSelf->DCache__DOT__wb__DOT__entries_9_addr),48);
        bufp->chgWData(oldp+1471,(vlSelf->DCache__DOT__wb__DOT__entries_9_data),512);
        bufp->chgBit(oldp+1487,(vlSelf->DCache__DOT__wb__DOT__entries_9_dataReady));
        bufp->chgCData(oldp+1488,(vlSelf->DCache__DOT__wb__DOT__entries_9_dbid),8);
        bufp->chgBit(oldp+1489,(vlSelf->DCache__DOT__wb__DOT__entries_9_dbidValid));
        bufp->chgBit(oldp+1490,(vlSelf->DCache__DOT__wb__DOT__entries_9_compGot));
        bufp->chgBit(oldp+1491,(vlSelf->DCache__DOT__wb__DOT__entries_9_dataSent));
        bufp->chgBit(oldp+1492,(vlSelf->DCache__DOT__wb__DOT__entries_9_rspSeen));
        bufp->chgCData(oldp+1493,(vlSelf->DCache__DOT__wb__DOT__entries_9_compSrc),7);
        bufp->chgBit(oldp+1494,(vlSelf->DCache__DOT__wb__DOT__entries_9_traceTag));
        bufp->chgCData(oldp+1495,(vlSelf->DCache__DOT__wb__DOT__entries_9_state),2);
        bufp->chgCData(oldp+1496,(vlSelf->DCache__DOT__wb__DOT__entries_9_beatsLeft),2);
        bufp->chgBit(oldp+1497,(vlSelf->DCache__DOT__wb__DOT__entries_10_busy));
        bufp->chgCData(oldp+1498,(vlSelf->DCache__DOT__wb__DOT__entries_10_opcode),3);
        bufp->chgCData(oldp+1499,(vlSelf->DCache__DOT__wb__DOT__entries_10_resp),3);
        bufp->chgCData(oldp+1500,(vlSelf->DCache__DOT__wb__DOT__entries_10_snpTxnId),8);
        bufp->chgQData(oldp+1501,(vlSelf->DCache__DOT__wb__DOT__entries_10_addr),48);
        bufp->chgWData(oldp+1503,(vlSelf->DCache__DOT__wb__DOT__entries_10_data),512);
        bufp->chgBit(oldp+1519,(vlSelf->DCache__DOT__wb__DOT__entries_10_dataReady));
        bufp->chgCData(oldp+1520,(vlSelf->DCache__DOT__wb__DOT__entries_10_dbid),8);
        bufp->chgBit(oldp+1521,(vlSelf->DCache__DOT__wb__DOT__entries_10_dbidValid));
        bufp->chgBit(oldp+1522,(vlSelf->DCache__DOT__wb__DOT__entries_10_compGot));
        bufp->chgBit(oldp+1523,(vlSelf->DCache__DOT__wb__DOT__entries_10_dataSent));
        bufp->chgBit(oldp+1524,(vlSelf->DCache__DOT__wb__DOT__entries_10_rspSeen));
        bufp->chgCData(oldp+1525,(vlSelf->DCache__DOT__wb__DOT__entries_10_compSrc),7);
        bufp->chgBit(oldp+1526,(vlSelf->DCache__DOT__wb__DOT__entries_10_traceTag));
        bufp->chgCData(oldp+1527,(vlSelf->DCache__DOT__wb__DOT__entries_10_state),2);
        bufp->chgCData(oldp+1528,(vlSelf->DCache__DOT__wb__DOT__entries_10_beatsLeft),2);
        bufp->chgBit(oldp+1529,(vlSelf->DCache__DOT__wb__DOT__entries_11_busy));
        bufp->chgCData(oldp+1530,(vlSelf->DCache__DOT__wb__DOT__entries_11_opcode),3);
        bufp->chgCData(oldp+1531,(vlSelf->DCache__DOT__wb__DOT__entries_11_resp),3);
        bufp->chgCData(oldp+1532,(vlSelf->DCache__DOT__wb__DOT__entries_11_snpTxnId),8);
        bufp->chgQData(oldp+1533,(vlSelf->DCache__DOT__wb__DOT__entries_11_addr),48);
        bufp->chgWData(oldp+1535,(vlSelf->DCache__DOT__wb__DOT__entries_11_data),512);
        bufp->chgBit(oldp+1551,(vlSelf->DCache__DOT__wb__DOT__entries_11_dataReady));
        bufp->chgCData(oldp+1552,(vlSelf->DCache__DOT__wb__DOT__entries_11_dbid),8);
        bufp->chgBit(oldp+1553,(vlSelf->DCache__DOT__wb__DOT__entries_11_dbidValid));
        bufp->chgBit(oldp+1554,(vlSelf->DCache__DOT__wb__DOT__entries_11_compGot));
        bufp->chgBit(oldp+1555,(vlSelf->DCache__DOT__wb__DOT__entries_11_dataSent));
        bufp->chgBit(oldp+1556,(vlSelf->DCache__DOT__wb__DOT__entries_11_rspSeen));
        bufp->chgCData(oldp+1557,(vlSelf->DCache__DOT__wb__DOT__entries_11_compSrc),7);
        bufp->chgBit(oldp+1558,(vlSelf->DCache__DOT__wb__DOT__entries_11_traceTag));
        bufp->chgCData(oldp+1559,(vlSelf->DCache__DOT__wb__DOT__entries_11_state),2);
        bufp->chgCData(oldp+1560,(vlSelf->DCache__DOT__wb__DOT__entries_11_beatsLeft),2);
        bufp->chgBit(oldp+1561,(vlSelf->DCache__DOT__wb__DOT__entries_12_busy));
        bufp->chgCData(oldp+1562,(vlSelf->DCache__DOT__wb__DOT__entries_12_opcode),3);
        bufp->chgCData(oldp+1563,(vlSelf->DCache__DOT__wb__DOT__entries_12_resp),3);
        bufp->chgCData(oldp+1564,(vlSelf->DCache__DOT__wb__DOT__entries_12_snpTxnId),8);
        bufp->chgQData(oldp+1565,(vlSelf->DCache__DOT__wb__DOT__entries_12_addr),48);
        bufp->chgWData(oldp+1567,(vlSelf->DCache__DOT__wb__DOT__entries_12_data),512);
        bufp->chgBit(oldp+1583,(vlSelf->DCache__DOT__wb__DOT__entries_12_dataReady));
        bufp->chgCData(oldp+1584,(vlSelf->DCache__DOT__wb__DOT__entries_12_dbid),8);
        bufp->chgBit(oldp+1585,(vlSelf->DCache__DOT__wb__DOT__entries_12_dbidValid));
        bufp->chgBit(oldp+1586,(vlSelf->DCache__DOT__wb__DOT__entries_12_compGot));
        bufp->chgBit(oldp+1587,(vlSelf->DCache__DOT__wb__DOT__entries_12_dataSent));
        bufp->chgBit(oldp+1588,(vlSelf->DCache__DOT__wb__DOT__entries_12_rspSeen));
        bufp->chgCData(oldp+1589,(vlSelf->DCache__DOT__wb__DOT__entries_12_compSrc),7);
        bufp->chgBit(oldp+1590,(vlSelf->DCache__DOT__wb__DOT__entries_12_traceTag));
        bufp->chgCData(oldp+1591,(vlSelf->DCache__DOT__wb__DOT__entries_12_state),2);
        bufp->chgCData(oldp+1592,(vlSelf->DCache__DOT__wb__DOT__entries_12_beatsLeft),2);
        bufp->chgBit(oldp+1593,(vlSelf->DCache__DOT__wb__DOT__entries_13_busy));
        bufp->chgCData(oldp+1594,(vlSelf->DCache__DOT__wb__DOT__entries_13_opcode),3);
        bufp->chgCData(oldp+1595,(vlSelf->DCache__DOT__wb__DOT__entries_13_resp),3);
        bufp->chgCData(oldp+1596,(vlSelf->DCache__DOT__wb__DOT__entries_13_snpTxnId),8);
        bufp->chgQData(oldp+1597,(vlSelf->DCache__DOT__wb__DOT__entries_13_addr),48);
        bufp->chgWData(oldp+1599,(vlSelf->DCache__DOT__wb__DOT__entries_13_data),512);
        bufp->chgBit(oldp+1615,(vlSelf->DCache__DOT__wb__DOT__entries_13_dataReady));
        bufp->chgCData(oldp+1616,(vlSelf->DCache__DOT__wb__DOT__entries_13_dbid),8);
        bufp->chgBit(oldp+1617,(vlSelf->DCache__DOT__wb__DOT__entries_13_dbidValid));
        bufp->chgBit(oldp+1618,(vlSelf->DCache__DOT__wb__DOT__entries_13_compGot));
        bufp->chgBit(oldp+1619,(vlSelf->DCache__DOT__wb__DOT__entries_13_dataSent));
        bufp->chgBit(oldp+1620,(vlSelf->DCache__DOT__wb__DOT__entries_13_rspSeen));
        bufp->chgCData(oldp+1621,(vlSelf->DCache__DOT__wb__DOT__entries_13_compSrc),7);
        bufp->chgBit(oldp+1622,(vlSelf->DCache__DOT__wb__DOT__entries_13_traceTag));
        bufp->chgCData(oldp+1623,(vlSelf->DCache__DOT__wb__DOT__entries_13_state),2);
        bufp->chgCData(oldp+1624,(vlSelf->DCache__DOT__wb__DOT__entries_13_beatsLeft),2);
        bufp->chgBit(oldp+1625,(vlSelf->DCache__DOT__wb__DOT__entries_14_busy));
        bufp->chgCData(oldp+1626,(vlSelf->DCache__DOT__wb__DOT__entries_14_opcode),3);
        bufp->chgCData(oldp+1627,(vlSelf->DCache__DOT__wb__DOT__entries_14_resp),3);
        bufp->chgCData(oldp+1628,(vlSelf->DCache__DOT__wb__DOT__entries_14_snpTxnId),8);
        bufp->chgQData(oldp+1629,(vlSelf->DCache__DOT__wb__DOT__entries_14_addr),48);
        bufp->chgWData(oldp+1631,(vlSelf->DCache__DOT__wb__DOT__entries_14_data),512);
        bufp->chgBit(oldp+1647,(vlSelf->DCache__DOT__wb__DOT__entries_14_dataReady));
        bufp->chgCData(oldp+1648,(vlSelf->DCache__DOT__wb__DOT__entries_14_dbid),8);
        bufp->chgBit(oldp+1649,(vlSelf->DCache__DOT__wb__DOT__entries_14_dbidValid));
        bufp->chgBit(oldp+1650,(vlSelf->DCache__DOT__wb__DOT__entries_14_compGot));
        bufp->chgBit(oldp+1651,(vlSelf->DCache__DOT__wb__DOT__entries_14_dataSent));
        bufp->chgBit(oldp+1652,(vlSelf->DCache__DOT__wb__DOT__entries_14_rspSeen));
        bufp->chgCData(oldp+1653,(vlSelf->DCache__DOT__wb__DOT__entries_14_compSrc),7);
        bufp->chgBit(oldp+1654,(vlSelf->DCache__DOT__wb__DOT__entries_14_traceTag));
        bufp->chgCData(oldp+1655,(vlSelf->DCache__DOT__wb__DOT__entries_14_state),2);
        bufp->chgCData(oldp+1656,(vlSelf->DCache__DOT__wb__DOT__entries_14_beatsLeft),2);
        bufp->chgBit(oldp+1657,(vlSelf->DCache__DOT__wb__DOT__entries_15_busy));
        bufp->chgCData(oldp+1658,(vlSelf->DCache__DOT__wb__DOT__entries_15_opcode),3);
        bufp->chgCData(oldp+1659,(vlSelf->DCache__DOT__wb__DOT__entries_15_resp),3);
        bufp->chgCData(oldp+1660,(vlSelf->DCache__DOT__wb__DOT__entries_15_snpTxnId),8);
        bufp->chgQData(oldp+1661,(vlSelf->DCache__DOT__wb__DOT__entries_15_addr),48);
        bufp->chgWData(oldp+1663,(vlSelf->DCache__DOT__wb__DOT__entries_15_data),512);
        bufp->chgBit(oldp+1679,(vlSelf->DCache__DOT__wb__DOT__entries_15_dataReady));
        bufp->chgCData(oldp+1680,(vlSelf->DCache__DOT__wb__DOT__entries_15_dbid),8);
        bufp->chgBit(oldp+1681,(vlSelf->DCache__DOT__wb__DOT__entries_15_dbidValid));
        bufp->chgBit(oldp+1682,(vlSelf->DCache__DOT__wb__DOT__entries_15_compGot));
        bufp->chgBit(oldp+1683,(vlSelf->DCache__DOT__wb__DOT__entries_15_dataSent));
        bufp->chgBit(oldp+1684,(vlSelf->DCache__DOT__wb__DOT__entries_15_rspSeen));
        bufp->chgCData(oldp+1685,(vlSelf->DCache__DOT__wb__DOT__entries_15_compSrc),7);
        bufp->chgBit(oldp+1686,(vlSelf->DCache__DOT__wb__DOT__entries_15_traceTag));
        bufp->chgCData(oldp+1687,(vlSelf->DCache__DOT__wb__DOT__entries_15_state),2);
        bufp->chgCData(oldp+1688,(vlSelf->DCache__DOT__wb__DOT__entries_15_beatsLeft),2);
        bufp->chgBit(oldp+1689,(vlSelf->DCache__DOT__wb__DOT__entries_16_busy));
        bufp->chgCData(oldp+1690,(vlSelf->DCache__DOT__wb__DOT__entries_16_opcode),3);
        bufp->chgCData(oldp+1691,(vlSelf->DCache__DOT__wb__DOT__entries_16_resp),3);
        bufp->chgCData(oldp+1692,(vlSelf->DCache__DOT__wb__DOT__entries_16_snpTxnId),8);
        bufp->chgQData(oldp+1693,(vlSelf->DCache__DOT__wb__DOT__entries_16_addr),48);
        bufp->chgWData(oldp+1695,(vlSelf->DCache__DOT__wb__DOT__entries_16_data),512);
        bufp->chgBit(oldp+1711,(vlSelf->DCache__DOT__wb__DOT__entries_16_dataReady));
        bufp->chgCData(oldp+1712,(vlSelf->DCache__DOT__wb__DOT__entries_16_dbid),8);
        bufp->chgBit(oldp+1713,(vlSelf->DCache__DOT__wb__DOT__entries_16_dbidValid));
        bufp->chgBit(oldp+1714,(vlSelf->DCache__DOT__wb__DOT__entries_16_compGot));
        bufp->chgBit(oldp+1715,(vlSelf->DCache__DOT__wb__DOT__entries_16_dataSent));
        bufp->chgBit(oldp+1716,(vlSelf->DCache__DOT__wb__DOT__entries_16_rspSeen));
        bufp->chgCData(oldp+1717,(vlSelf->DCache__DOT__wb__DOT__entries_16_compSrc),7);
        bufp->chgBit(oldp+1718,(vlSelf->DCache__DOT__wb__DOT__entries_16_traceTag));
        bufp->chgCData(oldp+1719,(vlSelf->DCache__DOT__wb__DOT__entries_16_state),2);
        bufp->chgCData(oldp+1720,(vlSelf->DCache__DOT__wb__DOT__entries_16_beatsLeft),2);
        bufp->chgBit(oldp+1721,(vlSelf->DCache__DOT__wb__DOT__entries_17_busy));
        bufp->chgCData(oldp+1722,(vlSelf->DCache__DOT__wb__DOT__entries_17_opcode),3);
        bufp->chgCData(oldp+1723,(vlSelf->DCache__DOT__wb__DOT__entries_17_resp),3);
        bufp->chgCData(oldp+1724,(vlSelf->DCache__DOT__wb__DOT__entries_17_snpTxnId),8);
        bufp->chgQData(oldp+1725,(vlSelf->DCache__DOT__wb__DOT__entries_17_addr),48);
        bufp->chgWData(oldp+1727,(vlSelf->DCache__DOT__wb__DOT__entries_17_data),512);
        bufp->chgCData(oldp+1743,(vlSelf->DCache__DOT__wb__DOT__entries_17_dbid),8);
        bufp->chgBit(oldp+1744,(vlSelf->DCache__DOT__wb__DOT__entries_17_dbidValid));
        bufp->chgBit(oldp+1745,(vlSelf->DCache__DOT__wb__DOT__entries_17_compGot));
        bufp->chgBit(oldp+1746,(vlSelf->DCache__DOT__wb__DOT__entries_17_dataSent));
        bufp->chgBit(oldp+1747,(vlSelf->DCache__DOT__wb__DOT__entries_17_rspSeen));
        bufp->chgCData(oldp+1748,(vlSelf->DCache__DOT__wb__DOT__entries_17_compSrc),7);
        bufp->chgBit(oldp+1749,(vlSelf->DCache__DOT__wb__DOT__entries_17_traceTag));
        bufp->chgCData(oldp+1750,(vlSelf->DCache__DOT__wb__DOT__entries_17_state),2);
        bufp->chgCData(oldp+1751,(vlSelf->DCache__DOT__wb__DOT__entries_17_beatsLeft),2);
        bufp->chgQData(oldp+1752,((0xffffffffffc0ULL 
                                   & vlSelf->DCache__DOT__pipe_io_wbReq_bits_addr)),48);
        bufp->chgBit(oldp+1754,((((0U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode)) 
                                  | ((2U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode)) 
                                     | (3U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode)))) 
                                 | ((4U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode)) 
                                    | (5U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode))))));
        bufp->chgBit(oldp+1755,(vlSelf->DCache__DOT__wb__DOT__conflict));
        bufp->chgBit(oldp+1756,((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)))));
        bufp->chgBit(oldp+1757,((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)))));
        bufp->chgBit(oldp+1758,((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy)))));
        bufp->chgBit(oldp+1759,((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy)))));
        bufp->chgBit(oldp+1760,((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy)))));
        bufp->chgBit(oldp+1761,((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy)))));
        bufp->chgBit(oldp+1762,((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy)))));
        bufp->chgBit(oldp+1763,((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy)))));
        bufp->chgBit(oldp+1764,((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy)))));
        bufp->chgBit(oldp+1765,((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy)))));
        bufp->chgBit(oldp+1766,((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy)))));
        bufp->chgBit(oldp+1767,((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy)))));
        bufp->chgBit(oldp+1768,((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy)))));
        bufp->chgBit(oldp+1769,((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy)))));
        bufp->chgBit(oldp+1770,((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy)))));
        bufp->chgBit(oldp+1771,((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy)))));
        bufp->chgBit(oldp+1772,((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy)))));
        bufp->chgBit(oldp+1773,((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy)))));
        bufp->chgSData(oldp+1774,(((0x100U & ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy)) 
                                              << 8U)) 
                                   | ((0x80U & ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy)) 
                                                << 7U)) 
                                      | ((0x40U & (
                                                   (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy)) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy)) 
                                                << 5U)) 
                                            | ((0x10U 
                                                & ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy)) 
                                                   << 4U)) 
                                               | ((8U 
                                                   & ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy)) 
                                                      << 3U)) 
                                                  | ((4U 
                                                      & ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy)) 
                                                         << 2U)) 
                                                     | ((2U 
                                                         & ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)))))))))))),9);
        bufp->chgBit(oldp+1775,((1U & ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy)) 
                                       | ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy)) 
                                          | ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy)) 
                                             | ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy)) 
                                                | ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy)) 
                                                   | ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy)) 
                                                      | ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy)) 
                                                         | ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy)) 
                                                            | ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy)) 
                                                               | ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy)) 
                                                                  | ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy)) 
                                                                     | ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy)) 
                                                                        | ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy)) 
                                                                           | ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy)) 
                                                                              | ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy)) 
                                                                                | ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy)) 
                                                                                | ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)) 
                                                                                | (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy))))))))))))))))))))));
        bufp->chgCData(oldp+1776,(vlSelf->DCache__DOT__wb__DOT__allocId),5);
        bufp->chgCData(oldp+1777,(vlSelf->DCache__DOT__wb__DOT__reqResp),3);
        bufp->chgBit(oldp+1778,(vlSelf->DCache__DOT__wb__DOT__evtHold));
        bufp->chgCData(oldp+1779,(vlSelf->DCache__DOT__wb__DOT__evtHoldIdx),5);
        bufp->chgBit(oldp+1780,(vlSelf->DCache__DOT__wb__DOT__rspHold));
        bufp->chgCData(oldp+1781,(vlSelf->DCache__DOT__wb__DOT__rspHoldIdx),5);
        bufp->chgBit(oldp+1782,(vlSelf->DCache__DOT__wb__DOT__datHold));
        bufp->chgCData(oldp+1783,(vlSelf->DCache__DOT__wb__DOT__datHoldIdx),5);
        bufp->chgBit(oldp+1784,(vlSelf->DCache__DOT__wb__DOT__evtWant_0));
        bufp->chgBit(oldp+1785,(vlSelf->DCache__DOT__wb__DOT__evtWant_1));
        bufp->chgBit(oldp+1786,(vlSelf->DCache__DOT__wb__DOT__evtWant_2));
        bufp->chgBit(oldp+1787,(vlSelf->DCache__DOT__wb__DOT__evtWant_3));
        bufp->chgBit(oldp+1788,(vlSelf->DCache__DOT__wb__DOT__evtWant_4));
        bufp->chgBit(oldp+1789,(vlSelf->DCache__DOT__wb__DOT__evtWant_5));
        bufp->chgBit(oldp+1790,(vlSelf->DCache__DOT__wb__DOT__evtWant_6));
        bufp->chgBit(oldp+1791,(vlSelf->DCache__DOT__wb__DOT__evtWant_7));
        bufp->chgBit(oldp+1792,(vlSelf->DCache__DOT__wb__DOT__evtWant_8));
        bufp->chgBit(oldp+1793,(vlSelf->DCache__DOT__wb__DOT__evtWant_9));
        bufp->chgBit(oldp+1794,(vlSelf->DCache__DOT__wb__DOT__evtWant_10));
        bufp->chgBit(oldp+1795,(vlSelf->DCache__DOT__wb__DOT__evtWant_11));
        bufp->chgBit(oldp+1796,(vlSelf->DCache__DOT__wb__DOT__evtWant_12));
        bufp->chgBit(oldp+1797,(vlSelf->DCache__DOT__wb__DOT__evtWant_13));
        bufp->chgBit(oldp+1798,(vlSelf->DCache__DOT__wb__DOT__evtWant_14));
        bufp->chgBit(oldp+1799,(vlSelf->DCache__DOT__wb__DOT__evtWant_15));
        bufp->chgBit(oldp+1800,(vlSelf->DCache__DOT__wb__DOT__evtWant_16));
        bufp->chgBit(oldp+1801,(vlSelf->DCache__DOT__wb__DOT__evtWant_17));
        bufp->chgBit(oldp+1802,(vlSelf->DCache__DOT__wb__DOT__rspWant_0));
        bufp->chgBit(oldp+1803,(vlSelf->DCache__DOT__wb__DOT__rspWant_1));
        bufp->chgBit(oldp+1804,(vlSelf->DCache__DOT__wb__DOT__rspWant_2));
        bufp->chgBit(oldp+1805,(vlSelf->DCache__DOT__wb__DOT__rspWant_3));
        bufp->chgBit(oldp+1806,(vlSelf->DCache__DOT__wb__DOT__rspWant_4));
        bufp->chgBit(oldp+1807,(vlSelf->DCache__DOT__wb__DOT__rspWant_5));
        bufp->chgBit(oldp+1808,(vlSelf->DCache__DOT__wb__DOT__rspWant_6));
        bufp->chgBit(oldp+1809,(vlSelf->DCache__DOT__wb__DOT__rspWant_7));
        bufp->chgBit(oldp+1810,(vlSelf->DCache__DOT__wb__DOT__rspWant_8));
        bufp->chgBit(oldp+1811,(vlSelf->DCache__DOT__wb__DOT__rspWant_9));
        bufp->chgBit(oldp+1812,(vlSelf->DCache__DOT__wb__DOT__rspWant_10));
        bufp->chgBit(oldp+1813,(vlSelf->DCache__DOT__wb__DOT__rspWant_11));
        bufp->chgBit(oldp+1814,(vlSelf->DCache__DOT__wb__DOT__rspWant_12));
        bufp->chgBit(oldp+1815,(vlSelf->DCache__DOT__wb__DOT__rspWant_13));
        bufp->chgBit(oldp+1816,(vlSelf->DCache__DOT__wb__DOT__rspWant_14));
        bufp->chgBit(oldp+1817,(vlSelf->DCache__DOT__wb__DOT__rspWant_15));
        bufp->chgBit(oldp+1818,(vlSelf->DCache__DOT__wb__DOT__rspWant_16));
        bufp->chgBit(oldp+1819,(vlSelf->DCache__DOT__wb__DOT__rspWant_17));
        bufp->chgBit(oldp+1820,(vlSelf->DCache__DOT__wb__DOT__datStart_0));
        bufp->chgBit(oldp+1821,(vlSelf->DCache__DOT__wb__DOT__datStart_1));
        bufp->chgBit(oldp+1822,(vlSelf->DCache__DOT__wb__DOT__datStart_2));
        bufp->chgBit(oldp+1823,(vlSelf->DCache__DOT__wb__DOT__datStart_3));
        bufp->chgBit(oldp+1824,(vlSelf->DCache__DOT__wb__DOT__datStart_4));
        bufp->chgBit(oldp+1825,(vlSelf->DCache__DOT__wb__DOT__datStart_5));
        bufp->chgBit(oldp+1826,(vlSelf->DCache__DOT__wb__DOT__datStart_6));
        bufp->chgBit(oldp+1827,(vlSelf->DCache__DOT__wb__DOT__datStart_7));
        bufp->chgBit(oldp+1828,(vlSelf->DCache__DOT__wb__DOT__datStart_8));
        bufp->chgBit(oldp+1829,(vlSelf->DCache__DOT__wb__DOT__datStart_9));
        bufp->chgBit(oldp+1830,(vlSelf->DCache__DOT__wb__DOT__datStart_10));
        bufp->chgBit(oldp+1831,(vlSelf->DCache__DOT__wb__DOT__datStart_11));
        bufp->chgBit(oldp+1832,(vlSelf->DCache__DOT__wb__DOT__datStart_12));
        bufp->chgBit(oldp+1833,(vlSelf->DCache__DOT__wb__DOT__datStart_13));
        bufp->chgBit(oldp+1834,(vlSelf->DCache__DOT__wb__DOT__datStart_14));
        bufp->chgBit(oldp+1835,(vlSelf->DCache__DOT__wb__DOT__datStart_15));
        bufp->chgBit(oldp+1836,(vlSelf->DCache__DOT__wb__DOT__datStart_16));
        bufp->chgBit(oldp+1837,(((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_153) 
                                 & ((3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_state)) 
                                    & ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_dataSent)) 
                                       & (2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_beatsLeft)))))));
        bufp->chgBit(oldp+1838,(vlSelf->DCache__DOT__wb__DOT__datHeld));
        bufp->chgSData(oldp+1839,((((IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_8) 
                                    << 8U) | (((IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_7) 
                                               << 7U) 
                                              | (((IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_6) 
                                                  << 6U) 
                                                 | (((IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_5) 
                                                     << 5U) 
                                                    | (((IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_4) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_3) 
                                                           << 3U) 
                                                          | (((IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_2) 
                                                              << 2U) 
                                                             | (((IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_1) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_0)))))))))),9);
        bufp->chgCData(oldp+1840,(vlSelf->DCache__DOT__wb__DOT__evtIdx),5);
        bufp->chgSData(oldp+1841,((((IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_8) 
                                    << 8U) | (((IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_7) 
                                               << 7U) 
                                              | (((IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_6) 
                                                  << 6U) 
                                                 | (((IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_5) 
                                                     << 5U) 
                                                    | (((IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_4) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_3) 
                                                           << 3U) 
                                                          | (((IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_2) 
                                                              << 2U) 
                                                             | (((IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_1) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_0)))))))))),9);
        bufp->chgCData(oldp+1842,(vlSelf->DCache__DOT__wb__DOT__rspIdx),5);
        bufp->chgSData(oldp+1843,((((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_8) 
                                    << 8U) | (((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_7) 
                                               << 7U) 
                                              | (((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_6) 
                                                  << 6U) 
                                                 | (((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_5) 
                                                     << 5U) 
                                                    | (((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_4) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_3) 
                                                           << 3U) 
                                                          | (((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_2) 
                                                              << 2U) 
                                                             | (((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_1) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->DCache__DOT__wb__DOT__datStart_0)))))))))),9);
        bufp->chgCData(oldp+1844,(vlSelf->DCache__DOT__wb__DOT__datIdx),5);
        __Vtemp_73[0U] = vlSelf->DCache__DOT__wb__DOT___GEN_197[0U];
        __Vtemp_73[1U] = vlSelf->DCache__DOT__wb__DOT___GEN_197[1U];
        __Vtemp_73[2U] = vlSelf->DCache__DOT__wb__DOT___GEN_197[2U];
        __Vtemp_73[3U] = vlSelf->DCache__DOT__wb__DOT___GEN_197[3U];
        __Vtemp_73[4U] = vlSelf->DCache__DOT__wb__DOT___GEN_197[4U];
        __Vtemp_73[5U] = vlSelf->DCache__DOT__wb__DOT___GEN_197[5U];
        __Vtemp_73[6U] = vlSelf->DCache__DOT__wb__DOT___GEN_197[6U];
        __Vtemp_73[7U] = vlSelf->DCache__DOT__wb__DOT___GEN_197[7U];
        bufp->chgWData(oldp+1845,(__Vtemp_73),256);
        __Vtemp_74[0U] = vlSelf->DCache__DOT__wb__DOT___GEN_197[8U];
        __Vtemp_74[1U] = vlSelf->DCache__DOT__wb__DOT___GEN_197[9U];
        __Vtemp_74[2U] = vlSelf->DCache__DOT__wb__DOT___GEN_197[0xaU];
        __Vtemp_74[3U] = vlSelf->DCache__DOT__wb__DOT___GEN_197[0xbU];
        __Vtemp_74[4U] = vlSelf->DCache__DOT__wb__DOT___GEN_197[0xcU];
        __Vtemp_74[5U] = vlSelf->DCache__DOT__wb__DOT___GEN_197[0xdU];
        __Vtemp_74[6U] = vlSelf->DCache__DOT__wb__DOT___GEN_197[0xeU];
        __Vtemp_74[7U] = vlSelf->DCache__DOT__wb__DOT___GEN_197[0xfU];
        bufp->chgWData(oldp+1853,(__Vtemp_74),256);
        bufp->chgBit(oldp+1861,((2U == (IData)(vlSelf->DCache__DOT__wb__DOT___GEN_215))));
        bufp->chgBit(oldp+1862,(((IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy) 
                                 & ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_7) 
                                    & ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_state)) 
                                       | (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_state)))))));
        bufp->chgBit(oldp+1863,(((IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy) 
                                 & ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_16) 
                                    & ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_state)) 
                                       | (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_state)))))));
        bufp->chgBit(oldp+1864,(((IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy) 
                                 & ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_25) 
                                    & ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_state)) 
                                       | (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_state)))))));
        bufp->chgBit(oldp+1865,(((IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy) 
                                 & ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_34) 
                                    & ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_state)) 
                                       | (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_state)))))));
        bufp->chgBit(oldp+1866,(((IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy) 
                                 & ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_43) 
                                    & ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_state)) 
                                       | (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_state)))))));
        bufp->chgBit(oldp+1867,(((IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy) 
                                 & ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_52) 
                                    & ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_state)) 
                                       | (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_state)))))));
        bufp->chgBit(oldp+1868,(((IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy) 
                                 & ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_61) 
                                    & ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_state)) 
                                       | (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_state)))))));
        bufp->chgBit(oldp+1869,(((IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy) 
                                 & ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_70) 
                                    & ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_state)) 
                                       | (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_state)))))));
        bufp->chgBit(oldp+1870,(((IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy) 
                                 & ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_79) 
                                    & ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_state)) 
                                       | (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_state)))))));
        bufp->chgBit(oldp+1871,(((IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy) 
                                 & ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_88) 
                                    & ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_state)) 
                                       | (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_state)))))));
        bufp->chgBit(oldp+1872,(((IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy) 
                                 & ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_97) 
                                    & ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_state)) 
                                       | (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_state)))))));
        bufp->chgBit(oldp+1873,(((IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy) 
                                 & ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_106) 
                                    & ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_state)) 
                                       | (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_state)))))));
        bufp->chgBit(oldp+1874,(((IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy) 
                                 & ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_115) 
                                    & ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_state)) 
                                       | (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_state)))))));
        bufp->chgBit(oldp+1875,(((IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy) 
                                 & ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_124) 
                                    & ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_state)) 
                                       | (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_state)))))));
        bufp->chgBit(oldp+1876,(((IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy) 
                                 & ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_133) 
                                    & ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_state)) 
                                       | (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_state)))))));
        bufp->chgBit(oldp+1877,(((IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy) 
                                 & ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_142) 
                                    & ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_state)) 
                                       | (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_state)))))));
        bufp->chgBit(oldp+1878,(((IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy) 
                                 & ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_151) 
                                    & ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_state)) 
                                       | (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_state)))))));
        bufp->chgBit(oldp+1879,(((IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy) 
                                 & ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_160) 
                                    & ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_state)) 
                                       | (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_state)))))));
        bufp->chgBit(oldp+1880,(vlSelf->DCache__DOT__wb__DOT__doAlloc));
        bufp->chgBit(oldp+1881,(vlSelf->DCache__DOT__wb__DOT__doAlloc_1));
        bufp->chgBit(oldp+1882,(vlSelf->DCache__DOT__wb__DOT__doAlloc_2));
        bufp->chgBit(oldp+1883,(vlSelf->DCache__DOT__wb__DOT__doAlloc_3));
        bufp->chgBit(oldp+1884,(vlSelf->DCache__DOT__wb__DOT__doAlloc_4));
        bufp->chgBit(oldp+1885,(vlSelf->DCache__DOT__wb__DOT__doAlloc_5));
        bufp->chgBit(oldp+1886,(vlSelf->DCache__DOT__wb__DOT__doAlloc_6));
        bufp->chgBit(oldp+1887,(vlSelf->DCache__DOT__wb__DOT__doAlloc_7));
        bufp->chgBit(oldp+1888,(vlSelf->DCache__DOT__wb__DOT__doAlloc_8));
        bufp->chgBit(oldp+1889,(vlSelf->DCache__DOT__wb__DOT__doAlloc_9));
        bufp->chgBit(oldp+1890,(vlSelf->DCache__DOT__wb__DOT__doAlloc_10));
        bufp->chgBit(oldp+1891,(vlSelf->DCache__DOT__wb__DOT__doAlloc_11));
        bufp->chgBit(oldp+1892,(vlSelf->DCache__DOT__wb__DOT__doAlloc_12));
        bufp->chgBit(oldp+1893,(vlSelf->DCache__DOT__wb__DOT__doAlloc_13));
        bufp->chgBit(oldp+1894,(vlSelf->DCache__DOT__wb__DOT__doAlloc_14));
        bufp->chgBit(oldp+1895,(vlSelf->DCache__DOT__wb__DOT__doAlloc_15));
        bufp->chgBit(oldp+1896,(vlSelf->DCache__DOT__wb__DOT__doAlloc_16));
        bufp->chgBit(oldp+1897,(vlSelf->DCache__DOT__wb__DOT__doAlloc_17));
    }
    bufp->chgBit(oldp+1898,(vlSelf->clock));
    bufp->chgBit(oldp+1899,(vlSelf->reset));
    bufp->chgBit(oldp+1900,(vlSelf->io_load_0_req_ready));
    bufp->chgBit(oldp+1901,(vlSelf->io_load_0_req_valid));
    bufp->chgCData(oldp+1902,(vlSelf->io_load_0_req_bits_cmd),5);
    bufp->chgQData(oldp+1903,(vlSelf->io_load_0_req_bits_vaddr),48);
    bufp->chgQData(oldp+1905,(vlSelf->io_load_0_req_bits_vaddr_dup),48);
    bufp->chgWData(oldp+1907,(vlSelf->io_load_0_req_bits_data),128);
    bufp->chgSData(oldp+1911,(vlSelf->io_load_0_req_bits_mask),16);
    bufp->chgCData(oldp+1912,(vlSelf->io_load_0_req_bits_id),6);
    bufp->chgCData(oldp+1913,(vlSelf->io_load_0_req_bits_instrtype),4);
    bufp->chgBit(oldp+1914,(vlSelf->io_load_0_req_bits_isFirstIssue));
    bufp->chgCData(oldp+1915,(vlSelf->io_load_0_req_bits_replayCarry_real_way_en),4);
    bufp->chgBit(oldp+1916,(vlSelf->io_load_0_req_bits_replayCarry_valid));
    bufp->chgBit(oldp+1917,(vlSelf->io_load_0_req_bits_lqIdx_flag));
    bufp->chgCData(oldp+1918,(vlSelf->io_load_0_req_bits_lqIdx_value),4);
    bufp->chgBit(oldp+1919,(vlSelf->io_load_0_resp_ready));
    bufp->chgBit(oldp+1920,(vlSelf->io_load_0_resp_valid));
    bufp->chgWData(oldp+1921,(vlSelf->io_load_0_resp_bits_data),128);
    bufp->chgCData(oldp+1925,(vlSelf->io_load_0_resp_bits_id),6);
    bufp->chgBit(oldp+1926,(vlSelf->io_load_0_resp_bits_miss));
    bufp->chgBit(oldp+1927,(vlSelf->io_load_0_resp_bits_replay));
    bufp->chgCData(oldp+1928,(vlSelf->io_load_0_resp_bits_replayCarry_real_way_en),4);
    bufp->chgBit(oldp+1929,(vlSelf->io_load_0_resp_bits_replayCarry_valid));
    bufp->chgCData(oldp+1930,(vlSelf->io_load_0_resp_bits_mshr_id),4);
    bufp->chgBit(oldp+1931,(vlSelf->io_load_0_resp_bits_handled));
    bufp->chgBit(oldp+1932,(vlSelf->io_load_0_resp_bits_real_miss));
    bufp->chgBit(oldp+1933,(vlSelf->io_load_0_resp_bits_replacementUpdated));
    bufp->chgBit(oldp+1934,(vlSelf->io_load_0_s1_kill_data_read));
    bufp->chgBit(oldp+1935,(vlSelf->io_load_0_s1_kill));
    bufp->chgBit(oldp+1936,(vlSelf->io_load_0_s2_kill));
    bufp->chgQData(oldp+1937,(vlSelf->io_load_0_s0_pc),48);
    bufp->chgQData(oldp+1939,(vlSelf->io_load_0_s1_pc),48);
    bufp->chgQData(oldp+1941,(vlSelf->io_load_0_s2_pc),48);
    bufp->chgBit(oldp+1943,(vlSelf->io_load_0_replacementUpdated));
    bufp->chgBit(oldp+1944,(vlSelf->io_load_0_is128Req));
    bufp->chgQData(oldp+1945,(vlSelf->io_load_0_s1_paddr_dup_lsu),48);
    bufp->chgQData(oldp+1947,(vlSelf->io_load_0_s1_paddr_dup_dcache),48);
    bufp->chgBit(oldp+1949,(vlSelf->io_load_0_s1_disable_fast_wakeup));
    bufp->chgBit(oldp+1950,(vlSelf->io_load_0_s2_hit));
    bufp->chgBit(oldp+1951,(vlSelf->io_load_0_s2_first_hit));
    bufp->chgBit(oldp+1952,(vlSelf->io_load_0_s2_bank_conflict));
    bufp->chgBit(oldp+1953,(vlSelf->io_load_0_s2_wpu_pred_fail));
    bufp->chgBit(oldp+1954,(vlSelf->io_load_0_s2_mq_nack));
    bufp->chgBit(oldp+1955,(vlSelf->io_load_1_req_ready));
    bufp->chgBit(oldp+1956,(vlSelf->io_load_1_req_valid));
    bufp->chgCData(oldp+1957,(vlSelf->io_load_1_req_bits_cmd),5);
    bufp->chgQData(oldp+1958,(vlSelf->io_load_1_req_bits_vaddr),48);
    bufp->chgQData(oldp+1960,(vlSelf->io_load_1_req_bits_vaddr_dup),48);
    bufp->chgWData(oldp+1962,(vlSelf->io_load_1_req_bits_data),128);
    bufp->chgSData(oldp+1966,(vlSelf->io_load_1_req_bits_mask),16);
    bufp->chgCData(oldp+1967,(vlSelf->io_load_1_req_bits_id),6);
    bufp->chgCData(oldp+1968,(vlSelf->io_load_1_req_bits_instrtype),4);
    bufp->chgBit(oldp+1969,(vlSelf->io_load_1_req_bits_isFirstIssue));
    bufp->chgCData(oldp+1970,(vlSelf->io_load_1_req_bits_replayCarry_real_way_en),4);
    bufp->chgBit(oldp+1971,(vlSelf->io_load_1_req_bits_replayCarry_valid));
    bufp->chgBit(oldp+1972,(vlSelf->io_load_1_req_bits_lqIdx_flag));
    bufp->chgCData(oldp+1973,(vlSelf->io_load_1_req_bits_lqIdx_value),4);
    bufp->chgBit(oldp+1974,(vlSelf->io_load_1_resp_ready));
    bufp->chgBit(oldp+1975,(vlSelf->io_load_1_resp_valid));
    bufp->chgWData(oldp+1976,(vlSelf->io_load_1_resp_bits_data),128);
    bufp->chgCData(oldp+1980,(vlSelf->io_load_1_resp_bits_id),6);
    bufp->chgBit(oldp+1981,(vlSelf->io_load_1_resp_bits_miss));
    bufp->chgBit(oldp+1982,(vlSelf->io_load_1_resp_bits_replay));
    bufp->chgCData(oldp+1983,(vlSelf->io_load_1_resp_bits_replayCarry_real_way_en),4);
    bufp->chgBit(oldp+1984,(vlSelf->io_load_1_resp_bits_replayCarry_valid));
    bufp->chgCData(oldp+1985,(vlSelf->io_load_1_resp_bits_mshr_id),4);
    bufp->chgBit(oldp+1986,(vlSelf->io_load_1_resp_bits_handled));
    bufp->chgBit(oldp+1987,(vlSelf->io_load_1_resp_bits_real_miss));
    bufp->chgBit(oldp+1988,(vlSelf->io_load_1_resp_bits_replacementUpdated));
    bufp->chgBit(oldp+1989,(vlSelf->io_load_1_s1_kill_data_read));
    bufp->chgBit(oldp+1990,(vlSelf->io_load_1_s1_kill));
    bufp->chgBit(oldp+1991,(vlSelf->io_load_1_s2_kill));
    bufp->chgQData(oldp+1992,(vlSelf->io_load_1_s0_pc),48);
    bufp->chgQData(oldp+1994,(vlSelf->io_load_1_s1_pc),48);
    bufp->chgQData(oldp+1996,(vlSelf->io_load_1_s2_pc),48);
    bufp->chgBit(oldp+1998,(vlSelf->io_load_1_replacementUpdated));
    bufp->chgBit(oldp+1999,(vlSelf->io_load_1_is128Req));
    bufp->chgQData(oldp+2000,(vlSelf->io_load_1_s1_paddr_dup_lsu),48);
    bufp->chgQData(oldp+2002,(vlSelf->io_load_1_s1_paddr_dup_dcache),48);
    bufp->chgBit(oldp+2004,(vlSelf->io_load_1_s1_disable_fast_wakeup));
    bufp->chgBit(oldp+2005,(vlSelf->io_load_1_s2_hit));
    bufp->chgBit(oldp+2006,(vlSelf->io_load_1_s2_first_hit));
    bufp->chgBit(oldp+2007,(vlSelf->io_load_1_s2_bank_conflict));
    bufp->chgBit(oldp+2008,(vlSelf->io_load_1_s2_wpu_pred_fail));
    bufp->chgBit(oldp+2009,(vlSelf->io_load_1_s2_mq_nack));
    bufp->chgBit(oldp+2010,(vlSelf->io_store_req_ready));
    bufp->chgBit(oldp+2011,(vlSelf->io_store_req_valid));
    bufp->chgCData(oldp+2012,(vlSelf->io_store_req_bits_cmd),5);
    bufp->chgQData(oldp+2013,(vlSelf->io_store_req_bits_vaddr),48);
    bufp->chgQData(oldp+2015,(vlSelf->io_store_req_bits_addr),48);
    bufp->chgWData(oldp+2017,(vlSelf->io_store_req_bits_data),512);
    bufp->chgQData(oldp+2033,(vlSelf->io_store_req_bits_mask),64);
    bufp->chgCData(oldp+2035,(vlSelf->io_store_req_bits_id),6);
    bufp->chgBit(oldp+2036,(vlSelf->io_store_main_pipe_hit_resp_ready));
    bufp->chgBit(oldp+2037,(vlSelf->io_store_main_pipe_hit_resp_valid));
    bufp->chgBit(oldp+2038,(vlSelf->io_store_main_pipe_hit_resp_bits_miss));
    bufp->chgBit(oldp+2039,(vlSelf->io_store_main_pipe_hit_resp_bits_replay));
    bufp->chgCData(oldp+2040,(vlSelf->io_store_main_pipe_hit_resp_bits_id),6);
    bufp->chgBit(oldp+2041,(vlSelf->io_store_refill_hit_resp_ready));
    bufp->chgBit(oldp+2042,(vlSelf->io_store_refill_hit_resp_valid));
    bufp->chgBit(oldp+2043,(vlSelf->io_store_refill_hit_resp_bits_miss));
    bufp->chgBit(oldp+2044,(vlSelf->io_store_refill_hit_resp_bits_replay));
    bufp->chgCData(oldp+2045,(vlSelf->io_store_refill_hit_resp_bits_id),6);
    bufp->chgBit(oldp+2046,(vlSelf->io_store_replay_resp_ready));
    bufp->chgBit(oldp+2047,(vlSelf->io_store_replay_resp_valid));
    bufp->chgBit(oldp+2048,(vlSelf->io_store_replay_resp_bits_miss));
    bufp->chgBit(oldp+2049,(vlSelf->io_store_replay_resp_bits_replay));
    bufp->chgCData(oldp+2050,(vlSelf->io_store_replay_resp_bits_id),6);
    bufp->chgBit(oldp+2051,(vlSelf->io_atomics_req_ready));
    bufp->chgBit(oldp+2052,(vlSelf->io_atomics_req_valid));
    bufp->chgCData(oldp+2053,(vlSelf->io_atomics_req_bits_cmd),5);
    bufp->chgQData(oldp+2054,(vlSelf->io_atomics_req_bits_vaddr),48);
    bufp->chgQData(oldp+2056,(vlSelf->io_atomics_req_bits_addr),48);
    bufp->chgCData(oldp+2058,(vlSelf->io_atomics_req_bits_tagAlias),2);
    bufp->chgCData(oldp+2059,(vlSelf->io_atomics_req_bits_id),6);
    bufp->chgCData(oldp+2060,(vlSelf->io_atomics_req_bits_missId),4);
    bufp->chgQData(oldp+2061,(vlSelf->io_atomics_req_bits_pc),48);
    bufp->chgCData(oldp+2063,(vlSelf->io_atomics_req_bits_wordIdx),3);
    bufp->chgWData(oldp+2064,(vlSelf->io_atomics_req_bits_amoData),128);
    bufp->chgSData(oldp+2068,(vlSelf->io_atomics_req_bits_amoMask),16);
    bufp->chgWData(oldp+2069,(vlSelf->io_atomics_req_bits_amoCmp),128);
    bufp->chgCData(oldp+2073,(vlSelf->io_atomics_req_bits_probeOp),2);
    bufp->chgBit(oldp+2074,(vlSelf->io_atomics_req_bits_needData));
    bufp->chgCData(oldp+2075,(vlSelf->io_atomics_req_bits_snpTxnId),8);
    bufp->chgCData(oldp+2076,(vlSelf->io_atomics_req_bits_replaceWay),4);
    bufp->chgBit(oldp+2077,(vlSelf->io_atomics_resp_ready));
    bufp->chgBit(oldp+2078,(vlSelf->io_atomics_resp_valid));
    bufp->chgCData(oldp+2079,(vlSelf->io_atomics_resp_bits_id),6);
    bufp->chgCData(oldp+2080,(vlSelf->io_atomics_resp_bits_cmd),5);
    bufp->chgWData(oldp+2081,(vlSelf->io_atomics_resp_bits_data),128);
    bufp->chgBit(oldp+2085,(vlSelf->io_atomics_resp_bits_success));
    bufp->chgBit(oldp+2086,(vlSelf->io_atomics_replay_ready));
    bufp->chgBit(oldp+2087,(vlSelf->io_atomics_replay_valid));
    bufp->chgBit(oldp+2088,(vlSelf->io_atomics_replay_bits_miss));
    bufp->chgBit(oldp+2089,(vlSelf->io_atomics_replay_bits_replay));
    bufp->chgCData(oldp+2090,(vlSelf->io_atomics_replay_bits_id),6);
    bufp->chgBit(oldp+2091,(vlSelf->io_cmoReq_ready));
    bufp->chgBit(oldp+2092,(vlSelf->io_cmoReq_valid));
    bufp->chgCData(oldp+2093,(vlSelf->io_cmoReq_bits_id),6);
    bufp->chgCData(oldp+2094,(vlSelf->io_cmoReq_bits_opcode),6);
    bufp->chgQData(oldp+2095,(vlSelf->io_cmoReq_bits_addr),48);
    bufp->chgCData(oldp+2097,(vlSelf->io_cmoReq_bits_alias),2);
    bufp->chgBit(oldp+2098,(vlSelf->io_cmoResp_ready));
    bufp->chgBit(oldp+2099,(vlSelf->io_cmoResp_valid));
    bufp->chgCData(oldp+2100,(vlSelf->io_cmoResp_bits_id),6);
    bufp->chgBit(oldp+2101,(vlSelf->io_cmoResp_bits_done));
    bufp->chgBit(oldp+2102,(vlSelf->io_cmoResp_bits_error));
    bufp->chgBit(oldp+2103,(vlSelf->io_wfi_req));
    bufp->chgBit(oldp+2104,(vlSelf->io_wfi_safe));
    bufp->chgBit(oldp+2105,(vlSelf->io_l2_req_ready));
    bufp->chgBit(oldp+2106,(vlSelf->io_l2_req_valid));
    bufp->chgCData(oldp+2107,(vlSelf->io_l2_req_bits_txnID),8);
    bufp->chgCData(oldp+2108,(vlSelf->io_l2_req_bits_srcID),7);
    bufp->chgCData(oldp+2109,(vlSelf->io_l2_req_bits_tgtID),7);
    bufp->chgCData(oldp+2110,(vlSelf->io_l2_req_bits_opcode),6);
    bufp->chgCData(oldp+2111,(vlSelf->io_l2_req_bits_size),3);
    bufp->chgQData(oldp+2112,(vlSelf->io_l2_req_bits_addr),48);
    bufp->chgCData(oldp+2114,(vlSelf->io_l2_req_bits_tagAlias),2);
    bufp->chgBit(oldp+2115,(vlSelf->io_l2_req_bits_ns));
    bufp->chgCData(oldp+2116,(vlSelf->io_l2_req_bits_order),2);
    bufp->chgCData(oldp+2117,(vlSelf->io_l2_req_bits_memAttr),4);
    bufp->chgBit(oldp+2118,(vlSelf->io_l2_req_bits_excl));
    bufp->chgBit(oldp+2119,(vlSelf->io_l2_req_bits_expCompData));
    bufp->chgBit(oldp+2120,(vlSelf->io_l2_req_bits_expCompStash));
    bufp->chgBit(oldp+2121,(vlSelf->io_l2_req_bits_wayValid));
    bufp->chgCData(oldp+2122,(vlSelf->io_l2_req_bits_way),2);
    bufp->chgBit(oldp+2123,(vlSelf->io_l2_req_bits_traceTag));
    bufp->chgBit(oldp+2124,(vlSelf->io_l2_evt_ready));
    bufp->chgBit(oldp+2125,(vlSelf->io_l2_evt_valid));
    bufp->chgCData(oldp+2126,(vlSelf->io_l2_evt_bits_txnID),8);
    bufp->chgCData(oldp+2127,(vlSelf->io_l2_evt_bits_srcID),7);
    bufp->chgCData(oldp+2128,(vlSelf->io_l2_evt_bits_tgtID),7);
    bufp->chgBit(oldp+2129,(vlSelf->io_l2_evt_bits_opcode));
    bufp->chgQData(oldp+2130,(vlSelf->io_l2_evt_bits_addr),48);
    bufp->chgBit(oldp+2132,(vlSelf->io_l2_evt_bits_ns));
    bufp->chgBit(oldp+2133,(vlSelf->io_l2_evt_bits_memAttr));
    bufp->chgBit(oldp+2134,(vlSelf->io_l2_evt_bits_wayValid));
    bufp->chgCData(oldp+2135,(vlSelf->io_l2_evt_bits_way),2);
    bufp->chgBit(oldp+2136,(vlSelf->io_l2_evt_bits_traceTag));
    bufp->chgBit(oldp+2137,(vlSelf->io_l2_txRsp_ready));
    bufp->chgBit(oldp+2138,(vlSelf->io_l2_txRsp_valid));
    bufp->chgCData(oldp+2139,(vlSelf->io_l2_txRsp_bits_txnID),8);
    bufp->chgCData(oldp+2140,(vlSelf->io_l2_txRsp_bits_srcID),7);
    bufp->chgCData(oldp+2141,(vlSelf->io_l2_txRsp_bits_tgtID),7);
    bufp->chgBit(oldp+2142,(vlSelf->io_l2_txRsp_bits_opcode));
    bufp->chgCData(oldp+2143,(vlSelf->io_l2_txRsp_bits_respErr),2);
    bufp->chgCData(oldp+2144,(vlSelf->io_l2_txRsp_bits_resp),3);
    bufp->chgBit(oldp+2145,(vlSelf->io_l2_txRsp_bits_traceTag));
    bufp->chgBit(oldp+2146,(vlSelf->io_l2_txDat_ready));
    bufp->chgBit(oldp+2147,(vlSelf->io_l2_txDat_valid));
    bufp->chgCData(oldp+2148,(vlSelf->io_l2_txDat_bits_txnID),8);
    bufp->chgCData(oldp+2149,(vlSelf->io_l2_txDat_bits_srcID),7);
    bufp->chgCData(oldp+2150,(vlSelf->io_l2_txDat_bits_tgtID),7);
    bufp->chgCData(oldp+2151,(vlSelf->io_l2_txDat_bits_opcode),2);
    bufp->chgCData(oldp+2152,(vlSelf->io_l2_txDat_bits_respErr),2);
    bufp->chgCData(oldp+2153,(vlSelf->io_l2_txDat_bits_resp),3);
    bufp->chgBit(oldp+2154,(vlSelf->io_l2_txDat_bits_dataID));
    bufp->chgWData(oldp+2155,(vlSelf->io_l2_txDat_bits_data),256);
    bufp->chgIData(oldp+2163,(vlSelf->io_l2_txDat_bits_byteEnable),32);
    bufp->chgBit(oldp+2164,(vlSelf->io_l2_txDat_bits_traceTag));
    bufp->chgBit(oldp+2165,(vlSelf->io_l2_rxRsp_ready));
    bufp->chgBit(oldp+2166,(vlSelf->io_l2_rxRsp_valid));
    bufp->chgCData(oldp+2167,(vlSelf->io_l2_rxRsp_bits_txnID),8);
    bufp->chgCData(oldp+2168,(vlSelf->io_l2_rxRsp_bits_srcID),7);
    bufp->chgCData(oldp+2169,(vlSelf->io_l2_rxRsp_bits_tgtID),7);
    bufp->chgCData(oldp+2170,(vlSelf->io_l2_rxRsp_bits_opcode),3);
    bufp->chgCData(oldp+2171,(vlSelf->io_l2_rxRsp_bits_dbID),8);
    bufp->chgCData(oldp+2172,(vlSelf->io_l2_rxRsp_bits_respErr),2);
    bufp->chgCData(oldp+2173,(vlSelf->io_l2_rxRsp_bits_resp),3);
    bufp->chgCData(oldp+2174,(vlSelf->io_l2_rxRsp_bits_cBusy),3);
    bufp->chgBit(oldp+2175,(vlSelf->io_l2_rxRsp_bits_traceTag));
    bufp->chgBit(oldp+2176,(vlSelf->io_l2_rxDat_ready));
    bufp->chgBit(oldp+2177,(vlSelf->io_l2_rxDat_valid));
    bufp->chgCData(oldp+2178,(vlSelf->io_l2_rxDat_bits_txnID),8);
    bufp->chgCData(oldp+2179,(vlSelf->io_l2_rxDat_bits_srcID),7);
    bufp->chgCData(oldp+2180,(vlSelf->io_l2_rxDat_bits_tgtID),7);
    bufp->chgBit(oldp+2181,(vlSelf->io_l2_rxDat_bits_opcode));
    bufp->chgCData(oldp+2182,(vlSelf->io_l2_rxDat_bits_dbID),8);
    bufp->chgCData(oldp+2183,(vlSelf->io_l2_rxDat_bits_respErr),2);
    bufp->chgCData(oldp+2184,(vlSelf->io_l2_rxDat_bits_resp),3);
    bufp->chgCData(oldp+2185,(vlSelf->io_l2_rxDat_bits_dataSource),5);
    bufp->chgCData(oldp+2186,(vlSelf->io_l2_rxDat_bits_cBusy),3);
    bufp->chgBit(oldp+2187,(vlSelf->io_l2_rxDat_bits_dataID));
    bufp->chgWData(oldp+2188,(vlSelf->io_l2_rxDat_bits_data),256);
    bufp->chgBit(oldp+2196,(vlSelf->io_l2_rxDat_bits_traceTag));
    bufp->chgBit(oldp+2197,(vlSelf->io_l2_rxSnp_ready));
    bufp->chgBit(oldp+2198,(vlSelf->io_l2_rxSnp_valid));
    bufp->chgCData(oldp+2199,(vlSelf->io_l2_rxSnp_bits_txnID),8);
    bufp->chgCData(oldp+2200,(vlSelf->io_l2_rxSnp_bits_srcID),7);
    bufp->chgCData(oldp+2201,(vlSelf->io_l2_rxSnp_bits_tgtID),7);
    bufp->chgCData(oldp+2202,(vlSelf->io_l2_rxSnp_bits_opcode),2);
    bufp->chgQData(oldp+2203,(vlSelf->io_l2_rxSnp_bits_addr),45);
    bufp->chgCData(oldp+2205,(vlSelf->io_l2_rxSnp_bits_tagAlias),2);
    bufp->chgBit(oldp+2206,(vlSelf->io_l2_rxSnp_bits_ns));
    bufp->chgBit(oldp+2207,(vlSelf->io_l2_rxSnp_bits_traceTag));
    bufp->chgBit(oldp+2208,(vlSelf->io_forwardChi_valid));
    bufp->chgCData(oldp+2209,(vlSelf->io_forwardChi_bits_id),4);
    bufp->chgBit(oldp+2210,(vlSelf->io_forwardChi_bits_half));
    bufp->chgWData(oldp+2211,(vlSelf->io_forwardChi_bits_data),256);
    bufp->chgCData(oldp+2219,(vlSelf->io_forwardMshr_id),4);
    bufp->chgBit(oldp+2220,(vlSelf->io_forwardMshr_half));
    bufp->chgBit(oldp+2221,(vlSelf->io_forwardMshr_data_valid));
    bufp->chgWData(oldp+2222,(vlSelf->io_forwardMshr_data_bits),256);
    bufp->chgBit(oldp+2230,(vlSelf->io_refillWakeup_ready));
    bufp->chgBit(oldp+2231,(vlSelf->io_refillWakeup_valid));
    bufp->chgCData(oldp+2232,(vlSelf->io_refillWakeup_bits_id),4);
    bufp->chgQData(oldp+2233,(vlSelf->io_refillWakeup_bits_addr),48);
    bufp->chgCData(oldp+2235,(vlSelf->io_refillWakeup_bits_alias),2);
    bufp->chgBit(oldp+2236,(vlSelf->io_loadReplay_ready));
    bufp->chgBit(oldp+2237,(vlSelf->io_loadReplay_valid));
    bufp->chgCData(oldp+2238,(vlSelf->io_loadReplay_bits_id),4);
    bufp->chgQData(oldp+2239,(vlSelf->io_loadReplay_bits_addr),48);
    bufp->chgCData(oldp+2241,(vlSelf->io_loadReplay_bits_alias),2);
    bufp->chgBit(oldp+2242,(((IData)(vlSelf->io_load_0_req_valid) 
                             & (IData)(vlSelf->DCache__DOT__loads_0__DOT__s1_ready))));
    bufp->chgCData(oldp+2243,((0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                                >> 6U)))),8);
    bufp->chgBit(oldp+2244,(((IData)(vlSelf->io_load_1_req_valid) 
                             & (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_ready))));
    bufp->chgCData(oldp+2245,((0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                                >> 6U)))),8);
    bufp->chgBit(oldp+2246,(((~ ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_busy) 
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
                             & (IData)(vlSelf->io_cmoReq_ready))));
    bufp->chgBit(oldp+2247,(((IData)(vlSelf->io_l2_rxRsp_valid) 
                             & (0x10U >= (IData)(vlSelf->io_l2_rxRsp_bits_txnID)))));
    bufp->chgBit(oldp+2248,(((~ (IData)(vlSelf->io_l2_txRsp_bits_opcode)) 
                             & (IData)(vlSelf->io_l2_txRsp_ready))));
    bufp->chgBit(oldp+2249,(((IData)(vlSelf->io_store_replay_resp_bits_miss) 
                             & (IData)(vlSelf->io_store_replay_resp_ready))));
    bufp->chgBit(oldp+2250,(((IData)(vlSelf->io_l2_rxRsp_valid) 
                             & (IData)(vlSelf->DCache__DOT__rspToWb))));
    bufp->chgBit(oldp+2251,((0x10U >= (IData)(vlSelf->io_l2_rxRsp_bits_txnID))));
    bufp->chgBit(oldp+2252,(((IData)(vlSelf->DCache__DOT__loads_0__DOT__s1_valid) 
                             & (IData)(vlSelf->io_load_0_s1_kill))));
    bufp->chgCData(oldp+2253,((7U & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                             >> 3U)))),3);
    bufp->chgBit(oldp+2254,(((IData)(vlSelf->io_load_0_s2_kill) 
                             | (IData)(vlSelf->DCache__DOT__loads_0__DOT___io_replace_access_valid_T))));
    bufp->chgBit(oldp+2255,(((IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_valid) 
                             & (IData)(vlSelf->io_load_1_s1_kill))));
    bufp->chgCData(oldp+2256,((7U & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                             >> 3U)))),3);
    bufp->chgBit(oldp+2257,(((IData)(vlSelf->io_load_1_s2_kill) 
                             | (IData)(vlSelf->DCache__DOT__loads_1__DOT___io_replace_access_valid_T))));
    bufp->chgCData(oldp+2258,((0xfU & (IData)(vlSelf->io_l2_rxDat_bits_txnID))),4);
    bufp->chgCData(oldp+2259,((0xfU & (IData)(vlSelf->io_l2_rxRsp_bits_txnID))),4);
    bufp->chgCData(oldp+2260,((3U & ((IData)(1U) << (IData)(vlSelf->io_l2_rxDat_bits_dataID)))),2);
    if (vlSelf->io_l2_rxDat_bits_dataID) {
        __Vtemp_77[0U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[8U];
        __Vtemp_77[1U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[9U];
        __Vtemp_77[2U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[0xaU];
        __Vtemp_77[3U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[0xbU];
        __Vtemp_77[4U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[0xcU];
        __Vtemp_77[5U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[0xdU];
        __Vtemp_77[6U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[0xeU];
        __Vtemp_77[7U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[0xfU];
    } else {
        __Vtemp_77[0U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[0U];
        __Vtemp_77[1U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[1U];
        __Vtemp_77[2U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[2U];
        __Vtemp_77[3U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[3U];
        __Vtemp_77[4U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[4U];
        __Vtemp_77[5U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[5U];
        __Vtemp_77[6U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[6U];
        __Vtemp_77[7U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[7U];
    }
    bufp->chgWData(oldp+2261,(__Vtemp_77),256);
    bufp->chgCData(oldp+2269,((0xffU & ((1U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf[0U]
                                         : vlSelf->io_l2_rxDat_bits_data[0U]))),8);
    bufp->chgCData(oldp+2270,((0xffU & ((2U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[0U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf[0U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2271,((0xffU & ((4U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[0U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf[0U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2272,((0xffU & ((8U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[0U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf[0U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2273,((0xffU & ((0x10U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf[1U]
                                         : vlSelf->io_l2_rxDat_bits_data[1U]))),8);
    bufp->chgCData(oldp+2274,((0xffU & ((0x20U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[1U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf[1U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2275,((0xffU & ((0x40U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[1U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf[1U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2276,((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[1U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf[1U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2277,((0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf[2U]
                                         : vlSelf->io_l2_rxDat_bits_data[2U]))),8);
    bufp->chgCData(oldp+2278,((0xffU & ((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[2U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf[2U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2279,((0xffU & ((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[2U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf[2U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2280,((0xffU & ((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[2U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf[2U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2281,((0xffU & ((0x1000U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf[3U]
                                         : vlSelf->io_l2_rxDat_bits_data[3U]))),8);
    bufp->chgCData(oldp+2282,((0xffU & ((0x2000U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[3U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf[3U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2283,((0xffU & ((0x4000U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[3U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf[3U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2284,((0xffU & ((0x8000U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[3U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf[3U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2285,((0xffU & ((0x10000U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf[4U]
                                         : vlSelf->io_l2_rxDat_bits_data[4U]))),8);
    bufp->chgCData(oldp+2286,((0xffU & ((0x20000U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[4U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf[4U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2287,((0xffU & ((0x40000U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[4U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf[4U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2288,((0xffU & ((0x80000U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[4U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf[4U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2289,((0xffU & ((0x100000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf[5U]
                                         : vlSelf->io_l2_rxDat_bits_data[5U]))),8);
    bufp->chgCData(oldp+2290,((0xffU & ((0x200000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[5U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf[5U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2291,((0xffU & ((0x400000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[5U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf[5U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2292,((0xffU & ((0x800000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[5U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf[5U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2293,((0xffU & ((0x1000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf[6U]
                                         : vlSelf->io_l2_rxDat_bits_data[6U]))),8);
    bufp->chgCData(oldp+2294,((0xffU & ((0x2000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[6U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf[6U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2295,((0xffU & ((0x4000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[6U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf[6U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2296,((0xffU & ((0x8000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[6U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf[6U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2297,((0xffU & ((0x10000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf[7U]
                                         : vlSelf->io_l2_rxDat_bits_data[7U]))),8);
    bufp->chgCData(oldp+2298,((0xffU & ((0x20000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[7U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf[7U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2299,((0xffU & ((0x40000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[7U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf[7U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2300,((0xffU & ((vlSelf->DCache__DOT__miss__DOT__maskHalf 
                                         >> 0x1fU) ? 
                                        ((vlSelf->DCache__DOT__miss__DOT__storeHalf[7U] 
                                          << 8U) | 
                                         (vlSelf->DCache__DOT__miss__DOT__storeHalf[7U] 
                                          >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 0x18U))))),8);
    if ((0U != (IData)(vlSelf->DCache__DOT__miss__DOT___dupBeat_T))) {
        if (vlSelf->io_l2_rxDat_bits_dataID) {
            __Vtemp_82[0U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[8U];
            __Vtemp_82[1U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[9U];
            __Vtemp_82[2U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[0xaU];
            __Vtemp_82[3U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[0xbU];
            __Vtemp_82[4U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[0xcU];
            __Vtemp_82[5U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[0xdU];
            __Vtemp_82[6U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[0xeU];
            __Vtemp_82[7U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[0xfU];
        } else {
            __Vtemp_82[0U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[0U];
            __Vtemp_82[1U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[1U];
            __Vtemp_82[2U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[2U];
            __Vtemp_82[3U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[3U];
            __Vtemp_82[4U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[4U];
            __Vtemp_82[5U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[5U];
            __Vtemp_82[6U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[6U];
            __Vtemp_82[7U] = vlSelf->DCache__DOT__miss__DOT__entries_0_data[7U];
        }
    } else {
        __Vtemp_82[0U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat[0U];
        __Vtemp_82[1U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat[1U];
        __Vtemp_82[2U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat[2U];
        __Vtemp_82[3U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat[3U];
        __Vtemp_82[4U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat[4U];
        __Vtemp_82[5U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat[5U];
        __Vtemp_82[6U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat[6U];
        __Vtemp_82[7U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat[7U];
    }
    bufp->chgWData(oldp+2301,(__Vtemp_82),256);
    bufp->chgBit(oldp+2309,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_57) 
                              & (0U == (IData)(vlSelf->io_refillWakeup_bits_id))) 
                             | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc)) 
                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_wakeSent)))));
    bufp->chgBit(oldp+2310,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_60) 
                              & (0U == (IData)(vlSelf->io_loadReplay_bits_id))) 
                             | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc)) 
                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_replaySent)))));
    if (vlSelf->io_l2_rxDat_bits_dataID) {
        __Vtemp_85[0U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[8U];
        __Vtemp_85[1U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[9U];
        __Vtemp_85[2U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[0xaU];
        __Vtemp_85[3U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[0xbU];
        __Vtemp_85[4U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[0xcU];
        __Vtemp_85[5U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[0xdU];
        __Vtemp_85[6U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[0xeU];
        __Vtemp_85[7U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[0xfU];
    } else {
        __Vtemp_85[0U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[0U];
        __Vtemp_85[1U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[1U];
        __Vtemp_85[2U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[2U];
        __Vtemp_85[3U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[3U];
        __Vtemp_85[4U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[4U];
        __Vtemp_85[5U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[5U];
        __Vtemp_85[6U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[6U];
        __Vtemp_85[7U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[7U];
    }
    bufp->chgWData(oldp+2311,(__Vtemp_85),256);
    bufp->chgCData(oldp+2319,((0xffU & ((1U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_1[0U]
                                         : vlSelf->io_l2_rxDat_bits_data[0U]))),8);
    bufp->chgCData(oldp+2320,((0xffU & ((2U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[0U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[0U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2321,((0xffU & ((4U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[0U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[0U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2322,((0xffU & ((8U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[0U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[0U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2323,((0xffU & ((0x10U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_1[1U]
                                         : vlSelf->io_l2_rxDat_bits_data[1U]))),8);
    bufp->chgCData(oldp+2324,((0xffU & ((0x20U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[1U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[1U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2325,((0xffU & ((0x40U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[1U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[1U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2326,((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[1U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[1U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2327,((0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_1[2U]
                                         : vlSelf->io_l2_rxDat_bits_data[2U]))),8);
    bufp->chgCData(oldp+2328,((0xffU & ((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[2U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[2U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2329,((0xffU & ((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[2U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[2U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2330,((0xffU & ((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[2U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[2U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2331,((0xffU & ((0x1000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_1[3U]
                                         : vlSelf->io_l2_rxDat_bits_data[3U]))),8);
    bufp->chgCData(oldp+2332,((0xffU & ((0x2000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[3U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[3U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2333,((0xffU & ((0x4000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[3U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[3U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2334,((0xffU & ((0x8000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[3U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[3U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2335,((0xffU & ((0x10000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_1[4U]
                                         : vlSelf->io_l2_rxDat_bits_data[4U]))),8);
    bufp->chgCData(oldp+2336,((0xffU & ((0x20000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[4U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[4U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2337,((0xffU & ((0x40000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[4U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[4U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2338,((0xffU & ((0x80000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[4U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[4U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2339,((0xffU & ((0x100000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_1[5U]
                                         : vlSelf->io_l2_rxDat_bits_data[5U]))),8);
    bufp->chgCData(oldp+2340,((0xffU & ((0x200000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[5U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[5U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2341,((0xffU & ((0x400000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[5U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[5U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2342,((0xffU & ((0x800000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[5U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[5U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2343,((0xffU & ((0x1000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_1[6U]
                                         : vlSelf->io_l2_rxDat_bits_data[6U]))),8);
    bufp->chgCData(oldp+2344,((0xffU & ((0x2000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[6U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[6U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2345,((0xffU & ((0x4000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[6U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[6U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2346,((0xffU & ((0x8000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[6U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[6U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2347,((0xffU & ((0x10000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_1[7U]
                                         : vlSelf->io_l2_rxDat_bits_data[7U]))),8);
    bufp->chgCData(oldp+2348,((0xffU & ((0x20000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[7U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[7U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2349,((0xffU & ((0x40000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[7U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[7U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2350,((0xffU & ((vlSelf->DCache__DOT__miss__DOT__maskHalf_1 
                                         >> 0x1fU) ? 
                                        ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[7U] 
                                          << 8U) | 
                                         (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[7U] 
                                          >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 0x18U))))),8);
    if ((0U != (IData)(vlSelf->DCache__DOT__miss__DOT___dupBeat_T_1))) {
        if (vlSelf->io_l2_rxDat_bits_dataID) {
            __Vtemp_90[0U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[8U];
            __Vtemp_90[1U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[9U];
            __Vtemp_90[2U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[0xaU];
            __Vtemp_90[3U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[0xbU];
            __Vtemp_90[4U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[0xcU];
            __Vtemp_90[5U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[0xdU];
            __Vtemp_90[6U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[0xeU];
            __Vtemp_90[7U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[0xfU];
        } else {
            __Vtemp_90[0U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[0U];
            __Vtemp_90[1U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[1U];
            __Vtemp_90[2U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[2U];
            __Vtemp_90[3U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[3U];
            __Vtemp_90[4U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[4U];
            __Vtemp_90[5U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[5U];
            __Vtemp_90[6U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[6U];
            __Vtemp_90[7U] = vlSelf->DCache__DOT__miss__DOT__entries_1_data[7U];
        }
    } else {
        __Vtemp_90[0U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_1[0U];
        __Vtemp_90[1U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_1[1U];
        __Vtemp_90[2U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_1[2U];
        __Vtemp_90[3U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_1[3U];
        __Vtemp_90[4U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_1[4U];
        __Vtemp_90[5U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_1[5U];
        __Vtemp_90[6U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_1[6U];
        __Vtemp_90[7U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_1[7U];
    }
    bufp->chgWData(oldp+2351,(__Vtemp_90),256);
    bufp->chgBit(oldp+2359,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_57) 
                              & (1U == (IData)(vlSelf->io_refillWakeup_bits_id))) 
                             | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_1)) 
                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_wakeSent)))));
    bufp->chgBit(oldp+2360,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_60) 
                              & (1U == (IData)(vlSelf->io_loadReplay_bits_id))) 
                             | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_1)) 
                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_replaySent)))));
    if (vlSelf->io_l2_rxDat_bits_dataID) {
        __Vtemp_93[0U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[8U];
        __Vtemp_93[1U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[9U];
        __Vtemp_93[2U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[0xaU];
        __Vtemp_93[3U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[0xbU];
        __Vtemp_93[4U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[0xcU];
        __Vtemp_93[5U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[0xdU];
        __Vtemp_93[6U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[0xeU];
        __Vtemp_93[7U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[0xfU];
    } else {
        __Vtemp_93[0U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[0U];
        __Vtemp_93[1U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[1U];
        __Vtemp_93[2U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[2U];
        __Vtemp_93[3U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[3U];
        __Vtemp_93[4U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[4U];
        __Vtemp_93[5U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[5U];
        __Vtemp_93[6U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[6U];
        __Vtemp_93[7U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[7U];
    }
    bufp->chgWData(oldp+2361,(__Vtemp_93),256);
    bufp->chgCData(oldp+2369,((0xffU & ((1U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_2[0U]
                                         : vlSelf->io_l2_rxDat_bits_data[0U]))),8);
    bufp->chgCData(oldp+2370,((0xffU & ((2U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[0U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[0U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2371,((0xffU & ((4U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[0U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[0U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2372,((0xffU & ((8U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[0U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[0U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2373,((0xffU & ((0x10U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_2[1U]
                                         : vlSelf->io_l2_rxDat_bits_data[1U]))),8);
    bufp->chgCData(oldp+2374,((0xffU & ((0x20U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[1U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[1U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2375,((0xffU & ((0x40U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[1U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[1U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2376,((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[1U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[1U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2377,((0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_2[2U]
                                         : vlSelf->io_l2_rxDat_bits_data[2U]))),8);
    bufp->chgCData(oldp+2378,((0xffU & ((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[2U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[2U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2379,((0xffU & ((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[2U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[2U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2380,((0xffU & ((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[2U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[2U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2381,((0xffU & ((0x1000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_2[3U]
                                         : vlSelf->io_l2_rxDat_bits_data[3U]))),8);
    bufp->chgCData(oldp+2382,((0xffU & ((0x2000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[3U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[3U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2383,((0xffU & ((0x4000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[3U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[3U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2384,((0xffU & ((0x8000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[3U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[3U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2385,((0xffU & ((0x10000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_2[4U]
                                         : vlSelf->io_l2_rxDat_bits_data[4U]))),8);
    bufp->chgCData(oldp+2386,((0xffU & ((0x20000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[4U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[4U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2387,((0xffU & ((0x40000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[4U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[4U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2388,((0xffU & ((0x80000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[4U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[4U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2389,((0xffU & ((0x100000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_2[5U]
                                         : vlSelf->io_l2_rxDat_bits_data[5U]))),8);
    bufp->chgCData(oldp+2390,((0xffU & ((0x200000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[5U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[5U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2391,((0xffU & ((0x400000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[5U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[5U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2392,((0xffU & ((0x800000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[5U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[5U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2393,((0xffU & ((0x1000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_2[6U]
                                         : vlSelf->io_l2_rxDat_bits_data[6U]))),8);
    bufp->chgCData(oldp+2394,((0xffU & ((0x2000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[6U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[6U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2395,((0xffU & ((0x4000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[6U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[6U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2396,((0xffU & ((0x8000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[6U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[6U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2397,((0xffU & ((0x10000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_2[7U]
                                         : vlSelf->io_l2_rxDat_bits_data[7U]))),8);
    bufp->chgCData(oldp+2398,((0xffU & ((0x20000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[7U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[7U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2399,((0xffU & ((0x40000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[7U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[7U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2400,((0xffU & ((vlSelf->DCache__DOT__miss__DOT__maskHalf_2 
                                         >> 0x1fU) ? 
                                        ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[7U] 
                                          << 8U) | 
                                         (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[7U] 
                                          >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 0x18U))))),8);
    if ((0U != (IData)(vlSelf->DCache__DOT__miss__DOT___dupBeat_T_2))) {
        if (vlSelf->io_l2_rxDat_bits_dataID) {
            __Vtemp_98[0U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[8U];
            __Vtemp_98[1U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[9U];
            __Vtemp_98[2U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[0xaU];
            __Vtemp_98[3U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[0xbU];
            __Vtemp_98[4U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[0xcU];
            __Vtemp_98[5U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[0xdU];
            __Vtemp_98[6U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[0xeU];
            __Vtemp_98[7U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[0xfU];
        } else {
            __Vtemp_98[0U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[0U];
            __Vtemp_98[1U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[1U];
            __Vtemp_98[2U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[2U];
            __Vtemp_98[3U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[3U];
            __Vtemp_98[4U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[4U];
            __Vtemp_98[5U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[5U];
            __Vtemp_98[6U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[6U];
            __Vtemp_98[7U] = vlSelf->DCache__DOT__miss__DOT__entries_2_data[7U];
        }
    } else {
        __Vtemp_98[0U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_2[0U];
        __Vtemp_98[1U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_2[1U];
        __Vtemp_98[2U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_2[2U];
        __Vtemp_98[3U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_2[3U];
        __Vtemp_98[4U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_2[4U];
        __Vtemp_98[5U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_2[5U];
        __Vtemp_98[6U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_2[6U];
        __Vtemp_98[7U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_2[7U];
    }
    bufp->chgWData(oldp+2401,(__Vtemp_98),256);
    bufp->chgBit(oldp+2409,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_57) 
                              & (2U == (IData)(vlSelf->io_refillWakeup_bits_id))) 
                             | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_2)) 
                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_wakeSent)))));
    bufp->chgBit(oldp+2410,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_60) 
                              & (2U == (IData)(vlSelf->io_loadReplay_bits_id))) 
                             | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_2)) 
                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_replaySent)))));
    if (vlSelf->io_l2_rxDat_bits_dataID) {
        __Vtemp_101[0U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[8U];
        __Vtemp_101[1U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[9U];
        __Vtemp_101[2U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[0xaU];
        __Vtemp_101[3U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[0xbU];
        __Vtemp_101[4U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[0xcU];
        __Vtemp_101[5U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[0xdU];
        __Vtemp_101[6U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[0xeU];
        __Vtemp_101[7U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[0xfU];
    } else {
        __Vtemp_101[0U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[0U];
        __Vtemp_101[1U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[1U];
        __Vtemp_101[2U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[2U];
        __Vtemp_101[3U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[3U];
        __Vtemp_101[4U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[4U];
        __Vtemp_101[5U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[5U];
        __Vtemp_101[6U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[6U];
        __Vtemp_101[7U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[7U];
    }
    bufp->chgWData(oldp+2411,(__Vtemp_101),256);
    bufp->chgCData(oldp+2419,((0xffU & ((1U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_3[0U]
                                         : vlSelf->io_l2_rxDat_bits_data[0U]))),8);
    bufp->chgCData(oldp+2420,((0xffU & ((2U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[0U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[0U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2421,((0xffU & ((4U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[0U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[0U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2422,((0xffU & ((8U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[0U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[0U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2423,((0xffU & ((0x10U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_3[1U]
                                         : vlSelf->io_l2_rxDat_bits_data[1U]))),8);
    bufp->chgCData(oldp+2424,((0xffU & ((0x20U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[1U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[1U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2425,((0xffU & ((0x40U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[1U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[1U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2426,((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[1U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[1U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2427,((0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_3[2U]
                                         : vlSelf->io_l2_rxDat_bits_data[2U]))),8);
    bufp->chgCData(oldp+2428,((0xffU & ((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[2U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[2U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2429,((0xffU & ((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[2U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[2U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2430,((0xffU & ((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[2U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[2U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2431,((0xffU & ((0x1000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_3[3U]
                                         : vlSelf->io_l2_rxDat_bits_data[3U]))),8);
    bufp->chgCData(oldp+2432,((0xffU & ((0x2000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[3U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[3U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2433,((0xffU & ((0x4000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[3U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[3U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2434,((0xffU & ((0x8000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[3U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[3U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2435,((0xffU & ((0x10000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_3[4U]
                                         : vlSelf->io_l2_rxDat_bits_data[4U]))),8);
    bufp->chgCData(oldp+2436,((0xffU & ((0x20000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[4U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[4U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2437,((0xffU & ((0x40000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[4U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[4U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2438,((0xffU & ((0x80000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[4U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[4U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2439,((0xffU & ((0x100000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_3[5U]
                                         : vlSelf->io_l2_rxDat_bits_data[5U]))),8);
    bufp->chgCData(oldp+2440,((0xffU & ((0x200000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[5U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[5U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2441,((0xffU & ((0x400000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[5U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[5U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2442,((0xffU & ((0x800000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[5U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[5U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2443,((0xffU & ((0x1000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_3[6U]
                                         : vlSelf->io_l2_rxDat_bits_data[6U]))),8);
    bufp->chgCData(oldp+2444,((0xffU & ((0x2000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[6U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[6U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2445,((0xffU & ((0x4000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[6U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[6U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2446,((0xffU & ((0x8000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[6U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[6U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2447,((0xffU & ((0x10000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_3[7U]
                                         : vlSelf->io_l2_rxDat_bits_data[7U]))),8);
    bufp->chgCData(oldp+2448,((0xffU & ((0x20000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[7U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[7U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2449,((0xffU & ((0x40000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[7U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[7U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2450,((0xffU & ((vlSelf->DCache__DOT__miss__DOT__maskHalf_3 
                                         >> 0x1fU) ? 
                                        ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[7U] 
                                          << 8U) | 
                                         (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[7U] 
                                          >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 0x18U))))),8);
    if ((0U != (IData)(vlSelf->DCache__DOT__miss__DOT___dupBeat_T_3))) {
        if (vlSelf->io_l2_rxDat_bits_dataID) {
            __Vtemp_106[0U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[8U];
            __Vtemp_106[1U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[9U];
            __Vtemp_106[2U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[0xaU];
            __Vtemp_106[3U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[0xbU];
            __Vtemp_106[4U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[0xcU];
            __Vtemp_106[5U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[0xdU];
            __Vtemp_106[6U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[0xeU];
            __Vtemp_106[7U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[0xfU];
        } else {
            __Vtemp_106[0U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[0U];
            __Vtemp_106[1U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[1U];
            __Vtemp_106[2U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[2U];
            __Vtemp_106[3U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[3U];
            __Vtemp_106[4U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[4U];
            __Vtemp_106[5U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[5U];
            __Vtemp_106[6U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[6U];
            __Vtemp_106[7U] = vlSelf->DCache__DOT__miss__DOT__entries_3_data[7U];
        }
    } else {
        __Vtemp_106[0U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_3[0U];
        __Vtemp_106[1U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_3[1U];
        __Vtemp_106[2U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_3[2U];
        __Vtemp_106[3U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_3[3U];
        __Vtemp_106[4U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_3[4U];
        __Vtemp_106[5U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_3[5U];
        __Vtemp_106[6U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_3[6U];
        __Vtemp_106[7U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_3[7U];
    }
    bufp->chgWData(oldp+2451,(__Vtemp_106),256);
    bufp->chgBit(oldp+2459,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_57) 
                              & (3U == (IData)(vlSelf->io_refillWakeup_bits_id))) 
                             | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_3)) 
                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_wakeSent)))));
    bufp->chgBit(oldp+2460,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_60) 
                              & (3U == (IData)(vlSelf->io_loadReplay_bits_id))) 
                             | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_3)) 
                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_replaySent)))));
    if (vlSelf->io_l2_rxDat_bits_dataID) {
        __Vtemp_109[0U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[8U];
        __Vtemp_109[1U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[9U];
        __Vtemp_109[2U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[0xaU];
        __Vtemp_109[3U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[0xbU];
        __Vtemp_109[4U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[0xcU];
        __Vtemp_109[5U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[0xdU];
        __Vtemp_109[6U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[0xeU];
        __Vtemp_109[7U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[0xfU];
    } else {
        __Vtemp_109[0U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[0U];
        __Vtemp_109[1U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[1U];
        __Vtemp_109[2U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[2U];
        __Vtemp_109[3U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[3U];
        __Vtemp_109[4U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[4U];
        __Vtemp_109[5U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[5U];
        __Vtemp_109[6U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[6U];
        __Vtemp_109[7U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[7U];
    }
    bufp->chgWData(oldp+2461,(__Vtemp_109),256);
    bufp->chgCData(oldp+2469,((0xffU & ((1U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_4[0U]
                                         : vlSelf->io_l2_rxDat_bits_data[0U]))),8);
    bufp->chgCData(oldp+2470,((0xffU & ((2U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[0U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[0U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2471,((0xffU & ((4U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[0U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[0U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2472,((0xffU & ((8U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[0U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[0U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2473,((0xffU & ((0x10U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_4[1U]
                                         : vlSelf->io_l2_rxDat_bits_data[1U]))),8);
    bufp->chgCData(oldp+2474,((0xffU & ((0x20U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[1U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[1U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2475,((0xffU & ((0x40U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[1U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[1U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2476,((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[1U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[1U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2477,((0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_4[2U]
                                         : vlSelf->io_l2_rxDat_bits_data[2U]))),8);
    bufp->chgCData(oldp+2478,((0xffU & ((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[2U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[2U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2479,((0xffU & ((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[2U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[2U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2480,((0xffU & ((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[2U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[2U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2481,((0xffU & ((0x1000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_4[3U]
                                         : vlSelf->io_l2_rxDat_bits_data[3U]))),8);
    bufp->chgCData(oldp+2482,((0xffU & ((0x2000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[3U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[3U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2483,((0xffU & ((0x4000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[3U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[3U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2484,((0xffU & ((0x8000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[3U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[3U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2485,((0xffU & ((0x10000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_4[4U]
                                         : vlSelf->io_l2_rxDat_bits_data[4U]))),8);
    bufp->chgCData(oldp+2486,((0xffU & ((0x20000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[4U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[4U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2487,((0xffU & ((0x40000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[4U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[4U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2488,((0xffU & ((0x80000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[4U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[4U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2489,((0xffU & ((0x100000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_4[5U]
                                         : vlSelf->io_l2_rxDat_bits_data[5U]))),8);
    bufp->chgCData(oldp+2490,((0xffU & ((0x200000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[5U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[5U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2491,((0xffU & ((0x400000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[5U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[5U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2492,((0xffU & ((0x800000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[5U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[5U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2493,((0xffU & ((0x1000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_4[6U]
                                         : vlSelf->io_l2_rxDat_bits_data[6U]))),8);
    bufp->chgCData(oldp+2494,((0xffU & ((0x2000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[6U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[6U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2495,((0xffU & ((0x4000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[6U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[6U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2496,((0xffU & ((0x8000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[6U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[6U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2497,((0xffU & ((0x10000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_4[7U]
                                         : vlSelf->io_l2_rxDat_bits_data[7U]))),8);
    bufp->chgCData(oldp+2498,((0xffU & ((0x20000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[7U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[7U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2499,((0xffU & ((0x40000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[7U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[7U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2500,((0xffU & ((vlSelf->DCache__DOT__miss__DOT__maskHalf_4 
                                         >> 0x1fU) ? 
                                        ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[7U] 
                                          << 8U) | 
                                         (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[7U] 
                                          >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 0x18U))))),8);
    if ((0U != (IData)(vlSelf->DCache__DOT__miss__DOT___dupBeat_T_4))) {
        if (vlSelf->io_l2_rxDat_bits_dataID) {
            __Vtemp_114[0U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[8U];
            __Vtemp_114[1U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[9U];
            __Vtemp_114[2U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[0xaU];
            __Vtemp_114[3U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[0xbU];
            __Vtemp_114[4U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[0xcU];
            __Vtemp_114[5U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[0xdU];
            __Vtemp_114[6U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[0xeU];
            __Vtemp_114[7U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[0xfU];
        } else {
            __Vtemp_114[0U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[0U];
            __Vtemp_114[1U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[1U];
            __Vtemp_114[2U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[2U];
            __Vtemp_114[3U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[3U];
            __Vtemp_114[4U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[4U];
            __Vtemp_114[5U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[5U];
            __Vtemp_114[6U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[6U];
            __Vtemp_114[7U] = vlSelf->DCache__DOT__miss__DOT__entries_4_data[7U];
        }
    } else {
        __Vtemp_114[0U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_4[0U];
        __Vtemp_114[1U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_4[1U];
        __Vtemp_114[2U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_4[2U];
        __Vtemp_114[3U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_4[3U];
        __Vtemp_114[4U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_4[4U];
        __Vtemp_114[5U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_4[5U];
        __Vtemp_114[6U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_4[6U];
        __Vtemp_114[7U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_4[7U];
    }
    bufp->chgWData(oldp+2501,(__Vtemp_114),256);
    bufp->chgBit(oldp+2509,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_57) 
                              & (4U == (IData)(vlSelf->io_refillWakeup_bits_id))) 
                             | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_4)) 
                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_wakeSent)))));
    bufp->chgBit(oldp+2510,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_60) 
                              & (4U == (IData)(vlSelf->io_loadReplay_bits_id))) 
                             | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_4)) 
                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_replaySent)))));
    if (vlSelf->io_l2_rxDat_bits_dataID) {
        __Vtemp_117[0U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[8U];
        __Vtemp_117[1U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[9U];
        __Vtemp_117[2U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[0xaU];
        __Vtemp_117[3U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[0xbU];
        __Vtemp_117[4U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[0xcU];
        __Vtemp_117[5U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[0xdU];
        __Vtemp_117[6U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[0xeU];
        __Vtemp_117[7U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[0xfU];
    } else {
        __Vtemp_117[0U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[0U];
        __Vtemp_117[1U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[1U];
        __Vtemp_117[2U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[2U];
        __Vtemp_117[3U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[3U];
        __Vtemp_117[4U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[4U];
        __Vtemp_117[5U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[5U];
        __Vtemp_117[6U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[6U];
        __Vtemp_117[7U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[7U];
    }
    bufp->chgWData(oldp+2511,(__Vtemp_117),256);
    bufp->chgCData(oldp+2519,((0xffU & ((1U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_5[0U]
                                         : vlSelf->io_l2_rxDat_bits_data[0U]))),8);
    bufp->chgCData(oldp+2520,((0xffU & ((2U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[0U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[0U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2521,((0xffU & ((4U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[0U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[0U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2522,((0xffU & ((8U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[0U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[0U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2523,((0xffU & ((0x10U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_5[1U]
                                         : vlSelf->io_l2_rxDat_bits_data[1U]))),8);
    bufp->chgCData(oldp+2524,((0xffU & ((0x20U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[1U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[1U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2525,((0xffU & ((0x40U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[1U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[1U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2526,((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[1U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[1U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2527,((0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_5[2U]
                                         : vlSelf->io_l2_rxDat_bits_data[2U]))),8);
    bufp->chgCData(oldp+2528,((0xffU & ((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[2U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[2U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2529,((0xffU & ((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[2U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[2U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2530,((0xffU & ((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[2U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[2U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2531,((0xffU & ((0x1000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_5[3U]
                                         : vlSelf->io_l2_rxDat_bits_data[3U]))),8);
    bufp->chgCData(oldp+2532,((0xffU & ((0x2000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[3U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[3U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2533,((0xffU & ((0x4000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[3U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[3U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2534,((0xffU & ((0x8000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[3U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[3U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2535,((0xffU & ((0x10000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_5[4U]
                                         : vlSelf->io_l2_rxDat_bits_data[4U]))),8);
    bufp->chgCData(oldp+2536,((0xffU & ((0x20000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[4U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[4U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2537,((0xffU & ((0x40000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[4U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[4U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2538,((0xffU & ((0x80000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[4U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[4U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2539,((0xffU & ((0x100000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_5[5U]
                                         : vlSelf->io_l2_rxDat_bits_data[5U]))),8);
    bufp->chgCData(oldp+2540,((0xffU & ((0x200000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[5U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[5U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2541,((0xffU & ((0x400000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[5U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[5U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2542,((0xffU & ((0x800000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[5U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[5U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2543,((0xffU & ((0x1000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_5[6U]
                                         : vlSelf->io_l2_rxDat_bits_data[6U]))),8);
    bufp->chgCData(oldp+2544,((0xffU & ((0x2000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[6U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[6U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2545,((0xffU & ((0x4000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[6U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[6U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2546,((0xffU & ((0x8000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[6U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[6U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2547,((0xffU & ((0x10000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_5[7U]
                                         : vlSelf->io_l2_rxDat_bits_data[7U]))),8);
    bufp->chgCData(oldp+2548,((0xffU & ((0x20000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[7U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[7U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2549,((0xffU & ((0x40000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[7U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[7U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2550,((0xffU & ((vlSelf->DCache__DOT__miss__DOT__maskHalf_5 
                                         >> 0x1fU) ? 
                                        ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[7U] 
                                          << 8U) | 
                                         (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[7U] 
                                          >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 0x18U))))),8);
    if ((0U != (IData)(vlSelf->DCache__DOT__miss__DOT___dupBeat_T_5))) {
        if (vlSelf->io_l2_rxDat_bits_dataID) {
            __Vtemp_122[0U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[8U];
            __Vtemp_122[1U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[9U];
            __Vtemp_122[2U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[0xaU];
            __Vtemp_122[3U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[0xbU];
            __Vtemp_122[4U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[0xcU];
            __Vtemp_122[5U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[0xdU];
            __Vtemp_122[6U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[0xeU];
            __Vtemp_122[7U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[0xfU];
        } else {
            __Vtemp_122[0U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[0U];
            __Vtemp_122[1U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[1U];
            __Vtemp_122[2U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[2U];
            __Vtemp_122[3U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[3U];
            __Vtemp_122[4U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[4U];
            __Vtemp_122[5U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[5U];
            __Vtemp_122[6U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[6U];
            __Vtemp_122[7U] = vlSelf->DCache__DOT__miss__DOT__entries_5_data[7U];
        }
    } else {
        __Vtemp_122[0U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_5[0U];
        __Vtemp_122[1U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_5[1U];
        __Vtemp_122[2U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_5[2U];
        __Vtemp_122[3U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_5[3U];
        __Vtemp_122[4U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_5[4U];
        __Vtemp_122[5U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_5[5U];
        __Vtemp_122[6U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_5[6U];
        __Vtemp_122[7U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_5[7U];
    }
    bufp->chgWData(oldp+2551,(__Vtemp_122),256);
    bufp->chgBit(oldp+2559,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_57) 
                              & (5U == (IData)(vlSelf->io_refillWakeup_bits_id))) 
                             | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_5)) 
                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_wakeSent)))));
    bufp->chgBit(oldp+2560,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_60) 
                              & (5U == (IData)(vlSelf->io_loadReplay_bits_id))) 
                             | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_5)) 
                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_replaySent)))));
    if (vlSelf->io_l2_rxDat_bits_dataID) {
        __Vtemp_125[0U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[8U];
        __Vtemp_125[1U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[9U];
        __Vtemp_125[2U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[0xaU];
        __Vtemp_125[3U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[0xbU];
        __Vtemp_125[4U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[0xcU];
        __Vtemp_125[5U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[0xdU];
        __Vtemp_125[6U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[0xeU];
        __Vtemp_125[7U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[0xfU];
    } else {
        __Vtemp_125[0U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[0U];
        __Vtemp_125[1U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[1U];
        __Vtemp_125[2U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[2U];
        __Vtemp_125[3U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[3U];
        __Vtemp_125[4U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[4U];
        __Vtemp_125[5U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[5U];
        __Vtemp_125[6U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[6U];
        __Vtemp_125[7U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[7U];
    }
    bufp->chgWData(oldp+2561,(__Vtemp_125),256);
    bufp->chgCData(oldp+2569,((0xffU & ((1U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_6[0U]
                                         : vlSelf->io_l2_rxDat_bits_data[0U]))),8);
    bufp->chgCData(oldp+2570,((0xffU & ((2U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[0U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[0U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2571,((0xffU & ((4U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[0U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[0U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2572,((0xffU & ((8U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[0U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[0U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2573,((0xffU & ((0x10U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_6[1U]
                                         : vlSelf->io_l2_rxDat_bits_data[1U]))),8);
    bufp->chgCData(oldp+2574,((0xffU & ((0x20U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[1U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[1U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2575,((0xffU & ((0x40U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[1U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[1U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2576,((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[1U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[1U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2577,((0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_6[2U]
                                         : vlSelf->io_l2_rxDat_bits_data[2U]))),8);
    bufp->chgCData(oldp+2578,((0xffU & ((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[2U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[2U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2579,((0xffU & ((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[2U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[2U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2580,((0xffU & ((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[2U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[2U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2581,((0xffU & ((0x1000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_6[3U]
                                         : vlSelf->io_l2_rxDat_bits_data[3U]))),8);
    bufp->chgCData(oldp+2582,((0xffU & ((0x2000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[3U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[3U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2583,((0xffU & ((0x4000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[3U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[3U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2584,((0xffU & ((0x8000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[3U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[3U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2585,((0xffU & ((0x10000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_6[4U]
                                         : vlSelf->io_l2_rxDat_bits_data[4U]))),8);
    bufp->chgCData(oldp+2586,((0xffU & ((0x20000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[4U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[4U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2587,((0xffU & ((0x40000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[4U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[4U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2588,((0xffU & ((0x80000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[4U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[4U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2589,((0xffU & ((0x100000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_6[5U]
                                         : vlSelf->io_l2_rxDat_bits_data[5U]))),8);
    bufp->chgCData(oldp+2590,((0xffU & ((0x200000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[5U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[5U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2591,((0xffU & ((0x400000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[5U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[5U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2592,((0xffU & ((0x800000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[5U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[5U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2593,((0xffU & ((0x1000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_6[6U]
                                         : vlSelf->io_l2_rxDat_bits_data[6U]))),8);
    bufp->chgCData(oldp+2594,((0xffU & ((0x2000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[6U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[6U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2595,((0xffU & ((0x4000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[6U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[6U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2596,((0xffU & ((0x8000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[6U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[6U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2597,((0xffU & ((0x10000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_6[7U]
                                         : vlSelf->io_l2_rxDat_bits_data[7U]))),8);
    bufp->chgCData(oldp+2598,((0xffU & ((0x20000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[7U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[7U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2599,((0xffU & ((0x40000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[7U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[7U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2600,((0xffU & ((vlSelf->DCache__DOT__miss__DOT__maskHalf_6 
                                         >> 0x1fU) ? 
                                        ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[7U] 
                                          << 8U) | 
                                         (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[7U] 
                                          >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 0x18U))))),8);
    if ((0U != (IData)(vlSelf->DCache__DOT__miss__DOT___dupBeat_T_6))) {
        if (vlSelf->io_l2_rxDat_bits_dataID) {
            __Vtemp_130[0U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[8U];
            __Vtemp_130[1U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[9U];
            __Vtemp_130[2U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[0xaU];
            __Vtemp_130[3U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[0xbU];
            __Vtemp_130[4U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[0xcU];
            __Vtemp_130[5U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[0xdU];
            __Vtemp_130[6U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[0xeU];
            __Vtemp_130[7U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[0xfU];
        } else {
            __Vtemp_130[0U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[0U];
            __Vtemp_130[1U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[1U];
            __Vtemp_130[2U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[2U];
            __Vtemp_130[3U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[3U];
            __Vtemp_130[4U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[4U];
            __Vtemp_130[5U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[5U];
            __Vtemp_130[6U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[6U];
            __Vtemp_130[7U] = vlSelf->DCache__DOT__miss__DOT__entries_6_data[7U];
        }
    } else {
        __Vtemp_130[0U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_6[0U];
        __Vtemp_130[1U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_6[1U];
        __Vtemp_130[2U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_6[2U];
        __Vtemp_130[3U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_6[3U];
        __Vtemp_130[4U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_6[4U];
        __Vtemp_130[5U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_6[5U];
        __Vtemp_130[6U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_6[6U];
        __Vtemp_130[7U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_6[7U];
    }
    bufp->chgWData(oldp+2601,(__Vtemp_130),256);
    bufp->chgBit(oldp+2609,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_57) 
                              & (6U == (IData)(vlSelf->io_refillWakeup_bits_id))) 
                             | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_6)) 
                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_wakeSent)))));
    bufp->chgBit(oldp+2610,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_60) 
                              & (6U == (IData)(vlSelf->io_loadReplay_bits_id))) 
                             | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_6)) 
                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_replaySent)))));
    if (vlSelf->io_l2_rxDat_bits_dataID) {
        __Vtemp_133[0U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[8U];
        __Vtemp_133[1U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[9U];
        __Vtemp_133[2U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[0xaU];
        __Vtemp_133[3U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[0xbU];
        __Vtemp_133[4U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[0xcU];
        __Vtemp_133[5U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[0xdU];
        __Vtemp_133[6U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[0xeU];
        __Vtemp_133[7U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[0xfU];
    } else {
        __Vtemp_133[0U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[0U];
        __Vtemp_133[1U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[1U];
        __Vtemp_133[2U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[2U];
        __Vtemp_133[3U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[3U];
        __Vtemp_133[4U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[4U];
        __Vtemp_133[5U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[5U];
        __Vtemp_133[6U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[6U];
        __Vtemp_133[7U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[7U];
    }
    bufp->chgWData(oldp+2611,(__Vtemp_133),256);
    bufp->chgCData(oldp+2619,((0xffU & ((1U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_7[0U]
                                         : vlSelf->io_l2_rxDat_bits_data[0U]))),8);
    bufp->chgCData(oldp+2620,((0xffU & ((2U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[0U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[0U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2621,((0xffU & ((4U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[0U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[0U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2622,((0xffU & ((8U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[0U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[0U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2623,((0xffU & ((0x10U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_7[1U]
                                         : vlSelf->io_l2_rxDat_bits_data[1U]))),8);
    bufp->chgCData(oldp+2624,((0xffU & ((0x20U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[1U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[1U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2625,((0xffU & ((0x40U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[1U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[1U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2626,((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[1U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[1U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2627,((0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_7[2U]
                                         : vlSelf->io_l2_rxDat_bits_data[2U]))),8);
    bufp->chgCData(oldp+2628,((0xffU & ((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[2U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[2U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2629,((0xffU & ((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[2U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[2U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2630,((0xffU & ((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[2U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[2U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2631,((0xffU & ((0x1000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_7[3U]
                                         : vlSelf->io_l2_rxDat_bits_data[3U]))),8);
    bufp->chgCData(oldp+2632,((0xffU & ((0x2000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[3U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[3U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2633,((0xffU & ((0x4000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[3U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[3U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2634,((0xffU & ((0x8000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[3U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[3U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2635,((0xffU & ((0x10000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_7[4U]
                                         : vlSelf->io_l2_rxDat_bits_data[4U]))),8);
    bufp->chgCData(oldp+2636,((0xffU & ((0x20000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[4U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[4U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2637,((0xffU & ((0x40000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[4U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[4U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2638,((0xffU & ((0x80000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[4U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[4U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2639,((0xffU & ((0x100000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_7[5U]
                                         : vlSelf->io_l2_rxDat_bits_data[5U]))),8);
    bufp->chgCData(oldp+2640,((0xffU & ((0x200000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[5U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[5U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2641,((0xffU & ((0x400000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[5U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[5U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2642,((0xffU & ((0x800000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[5U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[5U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2643,((0xffU & ((0x1000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_7[6U]
                                         : vlSelf->io_l2_rxDat_bits_data[6U]))),8);
    bufp->chgCData(oldp+2644,((0xffU & ((0x2000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[6U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[6U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2645,((0xffU & ((0x4000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[6U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[6U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2646,((0xffU & ((0x8000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[6U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[6U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2647,((0xffU & ((0x10000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_7[7U]
                                         : vlSelf->io_l2_rxDat_bits_data[7U]))),8);
    bufp->chgCData(oldp+2648,((0xffU & ((0x20000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[7U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[7U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2649,((0xffU & ((0x40000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[7U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[7U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2650,((0xffU & ((vlSelf->DCache__DOT__miss__DOT__maskHalf_7 
                                         >> 0x1fU) ? 
                                        ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[7U] 
                                          << 8U) | 
                                         (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[7U] 
                                          >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 0x18U))))),8);
    if ((0U != (IData)(vlSelf->DCache__DOT__miss__DOT___dupBeat_T_7))) {
        if (vlSelf->io_l2_rxDat_bits_dataID) {
            __Vtemp_138[0U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[8U];
            __Vtemp_138[1U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[9U];
            __Vtemp_138[2U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[0xaU];
            __Vtemp_138[3U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[0xbU];
            __Vtemp_138[4U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[0xcU];
            __Vtemp_138[5U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[0xdU];
            __Vtemp_138[6U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[0xeU];
            __Vtemp_138[7U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[0xfU];
        } else {
            __Vtemp_138[0U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[0U];
            __Vtemp_138[1U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[1U];
            __Vtemp_138[2U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[2U];
            __Vtemp_138[3U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[3U];
            __Vtemp_138[4U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[4U];
            __Vtemp_138[5U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[5U];
            __Vtemp_138[6U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[6U];
            __Vtemp_138[7U] = vlSelf->DCache__DOT__miss__DOT__entries_7_data[7U];
        }
    } else {
        __Vtemp_138[0U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_7[0U];
        __Vtemp_138[1U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_7[1U];
        __Vtemp_138[2U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_7[2U];
        __Vtemp_138[3U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_7[3U];
        __Vtemp_138[4U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_7[4U];
        __Vtemp_138[5U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_7[5U];
        __Vtemp_138[6U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_7[6U];
        __Vtemp_138[7U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_7[7U];
    }
    bufp->chgWData(oldp+2651,(__Vtemp_138),256);
    bufp->chgBit(oldp+2659,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_57) 
                              & (7U == (IData)(vlSelf->io_refillWakeup_bits_id))) 
                             | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_7)) 
                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_wakeSent)))));
    bufp->chgBit(oldp+2660,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_60) 
                              & (7U == (IData)(vlSelf->io_loadReplay_bits_id))) 
                             | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_7)) 
                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_replaySent)))));
    if (vlSelf->io_l2_rxDat_bits_dataID) {
        __Vtemp_141[0U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[8U];
        __Vtemp_141[1U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[9U];
        __Vtemp_141[2U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[0xaU];
        __Vtemp_141[3U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[0xbU];
        __Vtemp_141[4U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[0xcU];
        __Vtemp_141[5U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[0xdU];
        __Vtemp_141[6U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[0xeU];
        __Vtemp_141[7U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[0xfU];
    } else {
        __Vtemp_141[0U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[0U];
        __Vtemp_141[1U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[1U];
        __Vtemp_141[2U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[2U];
        __Vtemp_141[3U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[3U];
        __Vtemp_141[4U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[4U];
        __Vtemp_141[5U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[5U];
        __Vtemp_141[6U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[6U];
        __Vtemp_141[7U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[7U];
    }
    bufp->chgWData(oldp+2661,(__Vtemp_141),256);
    bufp->chgCData(oldp+2669,((0xffU & ((1U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_8[0U]
                                         : vlSelf->io_l2_rxDat_bits_data[0U]))),8);
    bufp->chgCData(oldp+2670,((0xffU & ((2U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[0U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[0U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2671,((0xffU & ((4U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[0U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[0U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2672,((0xffU & ((8U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[0U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[0U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2673,((0xffU & ((0x10U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_8[1U]
                                         : vlSelf->io_l2_rxDat_bits_data[1U]))),8);
    bufp->chgCData(oldp+2674,((0xffU & ((0x20U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[1U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[1U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2675,((0xffU & ((0x40U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[1U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[1U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2676,((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[1U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[1U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2677,((0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_8[2U]
                                         : vlSelf->io_l2_rxDat_bits_data[2U]))),8);
    bufp->chgCData(oldp+2678,((0xffU & ((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[2U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[2U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2679,((0xffU & ((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[2U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[2U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2680,((0xffU & ((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[2U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[2U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2681,((0xffU & ((0x1000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_8[3U]
                                         : vlSelf->io_l2_rxDat_bits_data[3U]))),8);
    bufp->chgCData(oldp+2682,((0xffU & ((0x2000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[3U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[3U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2683,((0xffU & ((0x4000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[3U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[3U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2684,((0xffU & ((0x8000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[3U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[3U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2685,((0xffU & ((0x10000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_8[4U]
                                         : vlSelf->io_l2_rxDat_bits_data[4U]))),8);
    bufp->chgCData(oldp+2686,((0xffU & ((0x20000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[4U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[4U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2687,((0xffU & ((0x40000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[4U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[4U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2688,((0xffU & ((0x80000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[4U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[4U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2689,((0xffU & ((0x100000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_8[5U]
                                         : vlSelf->io_l2_rxDat_bits_data[5U]))),8);
    bufp->chgCData(oldp+2690,((0xffU & ((0x200000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[5U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[5U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2691,((0xffU & ((0x400000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[5U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[5U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2692,((0xffU & ((0x800000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[5U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[5U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2693,((0xffU & ((0x1000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_8[6U]
                                         : vlSelf->io_l2_rxDat_bits_data[6U]))),8);
    bufp->chgCData(oldp+2694,((0xffU & ((0x2000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[6U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[6U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2695,((0xffU & ((0x4000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[6U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[6U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2696,((0xffU & ((0x8000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[6U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[6U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2697,((0xffU & ((0x10000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_8[7U]
                                         : vlSelf->io_l2_rxDat_bits_data[7U]))),8);
    bufp->chgCData(oldp+2698,((0xffU & ((0x20000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[7U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[7U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2699,((0xffU & ((0x40000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[7U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[7U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2700,((0xffU & ((vlSelf->DCache__DOT__miss__DOT__maskHalf_8 
                                         >> 0x1fU) ? 
                                        ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[7U] 
                                          << 8U) | 
                                         (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[7U] 
                                          >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 0x18U))))),8);
    if ((0U != (IData)(vlSelf->DCache__DOT__miss__DOT___dupBeat_T_8))) {
        if (vlSelf->io_l2_rxDat_bits_dataID) {
            __Vtemp_146[0U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[8U];
            __Vtemp_146[1U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[9U];
            __Vtemp_146[2U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[0xaU];
            __Vtemp_146[3U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[0xbU];
            __Vtemp_146[4U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[0xcU];
            __Vtemp_146[5U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[0xdU];
            __Vtemp_146[6U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[0xeU];
            __Vtemp_146[7U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[0xfU];
        } else {
            __Vtemp_146[0U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[0U];
            __Vtemp_146[1U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[1U];
            __Vtemp_146[2U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[2U];
            __Vtemp_146[3U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[3U];
            __Vtemp_146[4U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[4U];
            __Vtemp_146[5U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[5U];
            __Vtemp_146[6U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[6U];
            __Vtemp_146[7U] = vlSelf->DCache__DOT__miss__DOT__entries_8_data[7U];
        }
    } else {
        __Vtemp_146[0U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_8[0U];
        __Vtemp_146[1U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_8[1U];
        __Vtemp_146[2U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_8[2U];
        __Vtemp_146[3U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_8[3U];
        __Vtemp_146[4U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_8[4U];
        __Vtemp_146[5U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_8[5U];
        __Vtemp_146[6U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_8[6U];
        __Vtemp_146[7U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_8[7U];
    }
    bufp->chgWData(oldp+2701,(__Vtemp_146),256);
    bufp->chgBit(oldp+2709,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_57) 
                              & (8U == (IData)(vlSelf->io_refillWakeup_bits_id))) 
                             | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_8)) 
                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_wakeSent)))));
    bufp->chgBit(oldp+2710,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_60) 
                              & (8U == (IData)(vlSelf->io_loadReplay_bits_id))) 
                             | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_8)) 
                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_replaySent)))));
    if (vlSelf->io_l2_rxDat_bits_dataID) {
        __Vtemp_149[0U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[8U];
        __Vtemp_149[1U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[9U];
        __Vtemp_149[2U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[0xaU];
        __Vtemp_149[3U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[0xbU];
        __Vtemp_149[4U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[0xcU];
        __Vtemp_149[5U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[0xdU];
        __Vtemp_149[6U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[0xeU];
        __Vtemp_149[7U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[0xfU];
    } else {
        __Vtemp_149[0U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[0U];
        __Vtemp_149[1U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[1U];
        __Vtemp_149[2U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[2U];
        __Vtemp_149[3U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[3U];
        __Vtemp_149[4U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[4U];
        __Vtemp_149[5U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[5U];
        __Vtemp_149[6U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[6U];
        __Vtemp_149[7U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[7U];
    }
    bufp->chgWData(oldp+2711,(__Vtemp_149),256);
    bufp->chgCData(oldp+2719,((0xffU & ((1U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_9[0U]
                                         : vlSelf->io_l2_rxDat_bits_data[0U]))),8);
    bufp->chgCData(oldp+2720,((0xffU & ((2U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[0U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[0U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2721,((0xffU & ((4U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[0U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[0U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2722,((0xffU & ((8U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[0U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[0U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2723,((0xffU & ((0x10U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_9[1U]
                                         : vlSelf->io_l2_rxDat_bits_data[1U]))),8);
    bufp->chgCData(oldp+2724,((0xffU & ((0x20U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[1U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[1U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2725,((0xffU & ((0x40U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[1U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[1U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2726,((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[1U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[1U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2727,((0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_9[2U]
                                         : vlSelf->io_l2_rxDat_bits_data[2U]))),8);
    bufp->chgCData(oldp+2728,((0xffU & ((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[2U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[2U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2729,((0xffU & ((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[2U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[2U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2730,((0xffU & ((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[2U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[2U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2731,((0xffU & ((0x1000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_9[3U]
                                         : vlSelf->io_l2_rxDat_bits_data[3U]))),8);
    bufp->chgCData(oldp+2732,((0xffU & ((0x2000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[3U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[3U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2733,((0xffU & ((0x4000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[3U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[3U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2734,((0xffU & ((0x8000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[3U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[3U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2735,((0xffU & ((0x10000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_9[4U]
                                         : vlSelf->io_l2_rxDat_bits_data[4U]))),8);
    bufp->chgCData(oldp+2736,((0xffU & ((0x20000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[4U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[4U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2737,((0xffU & ((0x40000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[4U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[4U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2738,((0xffU & ((0x80000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[4U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[4U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2739,((0xffU & ((0x100000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_9[5U]
                                         : vlSelf->io_l2_rxDat_bits_data[5U]))),8);
    bufp->chgCData(oldp+2740,((0xffU & ((0x200000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[5U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[5U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2741,((0xffU & ((0x400000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[5U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[5U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2742,((0xffU & ((0x800000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[5U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[5U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2743,((0xffU & ((0x1000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_9[6U]
                                         : vlSelf->io_l2_rxDat_bits_data[6U]))),8);
    bufp->chgCData(oldp+2744,((0xffU & ((0x2000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[6U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[6U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2745,((0xffU & ((0x4000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[6U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[6U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2746,((0xffU & ((0x8000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[6U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[6U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2747,((0xffU & ((0x10000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_9[7U]
                                         : vlSelf->io_l2_rxDat_bits_data[7U]))),8);
    bufp->chgCData(oldp+2748,((0xffU & ((0x20000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[7U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[7U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2749,((0xffU & ((0x40000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[7U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[7U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2750,((0xffU & ((vlSelf->DCache__DOT__miss__DOT__maskHalf_9 
                                         >> 0x1fU) ? 
                                        ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[7U] 
                                          << 8U) | 
                                         (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[7U] 
                                          >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 0x18U))))),8);
    if ((0U != (IData)(vlSelf->DCache__DOT__miss__DOT___dupBeat_T_9))) {
        if (vlSelf->io_l2_rxDat_bits_dataID) {
            __Vtemp_154[0U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[8U];
            __Vtemp_154[1U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[9U];
            __Vtemp_154[2U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[0xaU];
            __Vtemp_154[3U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[0xbU];
            __Vtemp_154[4U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[0xcU];
            __Vtemp_154[5U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[0xdU];
            __Vtemp_154[6U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[0xeU];
            __Vtemp_154[7U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[0xfU];
        } else {
            __Vtemp_154[0U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[0U];
            __Vtemp_154[1U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[1U];
            __Vtemp_154[2U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[2U];
            __Vtemp_154[3U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[3U];
            __Vtemp_154[4U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[4U];
            __Vtemp_154[5U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[5U];
            __Vtemp_154[6U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[6U];
            __Vtemp_154[7U] = vlSelf->DCache__DOT__miss__DOT__entries_9_data[7U];
        }
    } else {
        __Vtemp_154[0U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_9[0U];
        __Vtemp_154[1U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_9[1U];
        __Vtemp_154[2U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_9[2U];
        __Vtemp_154[3U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_9[3U];
        __Vtemp_154[4U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_9[4U];
        __Vtemp_154[5U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_9[5U];
        __Vtemp_154[6U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_9[6U];
        __Vtemp_154[7U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_9[7U];
    }
    bufp->chgWData(oldp+2751,(__Vtemp_154),256);
    bufp->chgBit(oldp+2759,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_57) 
                              & (9U == (IData)(vlSelf->io_refillWakeup_bits_id))) 
                             | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_9)) 
                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_wakeSent)))));
    bufp->chgBit(oldp+2760,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_60) 
                              & (9U == (IData)(vlSelf->io_loadReplay_bits_id))) 
                             | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_9)) 
                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_replaySent)))));
    if (vlSelf->io_l2_rxDat_bits_dataID) {
        __Vtemp_157[0U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[8U];
        __Vtemp_157[1U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[9U];
        __Vtemp_157[2U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[0xaU];
        __Vtemp_157[3U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[0xbU];
        __Vtemp_157[4U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[0xcU];
        __Vtemp_157[5U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[0xdU];
        __Vtemp_157[6U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[0xeU];
        __Vtemp_157[7U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[0xfU];
    } else {
        __Vtemp_157[0U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[0U];
        __Vtemp_157[1U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[1U];
        __Vtemp_157[2U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[2U];
        __Vtemp_157[3U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[3U];
        __Vtemp_157[4U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[4U];
        __Vtemp_157[5U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[5U];
        __Vtemp_157[6U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[6U];
        __Vtemp_157[7U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[7U];
    }
    bufp->chgWData(oldp+2761,(__Vtemp_157),256);
    bufp->chgCData(oldp+2769,((0xffU & ((1U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_10[0U]
                                         : vlSelf->io_l2_rxDat_bits_data[0U]))),8);
    bufp->chgCData(oldp+2770,((0xffU & ((2U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[0U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[0U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2771,((0xffU & ((4U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[0U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[0U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2772,((0xffU & ((8U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[0U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[0U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2773,((0xffU & ((0x10U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_10[1U]
                                         : vlSelf->io_l2_rxDat_bits_data[1U]))),8);
    bufp->chgCData(oldp+2774,((0xffU & ((0x20U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[1U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[1U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2775,((0xffU & ((0x40U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[1U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[1U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2776,((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[1U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[1U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2777,((0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_10[2U]
                                         : vlSelf->io_l2_rxDat_bits_data[2U]))),8);
    bufp->chgCData(oldp+2778,((0xffU & ((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[2U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[2U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2779,((0xffU & ((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[2U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[2U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2780,((0xffU & ((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[2U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[2U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2781,((0xffU & ((0x1000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_10[3U]
                                         : vlSelf->io_l2_rxDat_bits_data[3U]))),8);
    bufp->chgCData(oldp+2782,((0xffU & ((0x2000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[3U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[3U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2783,((0xffU & ((0x4000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[3U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[3U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2784,((0xffU & ((0x8000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[3U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[3U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2785,((0xffU & ((0x10000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_10[4U]
                                         : vlSelf->io_l2_rxDat_bits_data[4U]))),8);
    bufp->chgCData(oldp+2786,((0xffU & ((0x20000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[4U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[4U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2787,((0xffU & ((0x40000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[4U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[4U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2788,((0xffU & ((0x80000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[4U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[4U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2789,((0xffU & ((0x100000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_10[5U]
                                         : vlSelf->io_l2_rxDat_bits_data[5U]))),8);
    bufp->chgCData(oldp+2790,((0xffU & ((0x200000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[5U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[5U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2791,((0xffU & ((0x400000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[5U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[5U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2792,((0xffU & ((0x800000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[5U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[5U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2793,((0xffU & ((0x1000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_10[6U]
                                         : vlSelf->io_l2_rxDat_bits_data[6U]))),8);
    bufp->chgCData(oldp+2794,((0xffU & ((0x2000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[6U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[6U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2795,((0xffU & ((0x4000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[6U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[6U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2796,((0xffU & ((0x8000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[6U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[6U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2797,((0xffU & ((0x10000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_10[7U]
                                         : vlSelf->io_l2_rxDat_bits_data[7U]))),8);
    bufp->chgCData(oldp+2798,((0xffU & ((0x20000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[7U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[7U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2799,((0xffU & ((0x40000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[7U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[7U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2800,((0xffU & ((vlSelf->DCache__DOT__miss__DOT__maskHalf_10 
                                         >> 0x1fU) ? 
                                        ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[7U] 
                                          << 8U) | 
                                         (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[7U] 
                                          >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 0x18U))))),8);
    if ((0U != (IData)(vlSelf->DCache__DOT__miss__DOT___dupBeat_T_10))) {
        if (vlSelf->io_l2_rxDat_bits_dataID) {
            __Vtemp_162[0U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[8U];
            __Vtemp_162[1U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[9U];
            __Vtemp_162[2U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[0xaU];
            __Vtemp_162[3U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[0xbU];
            __Vtemp_162[4U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[0xcU];
            __Vtemp_162[5U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[0xdU];
            __Vtemp_162[6U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[0xeU];
            __Vtemp_162[7U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[0xfU];
        } else {
            __Vtemp_162[0U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[0U];
            __Vtemp_162[1U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[1U];
            __Vtemp_162[2U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[2U];
            __Vtemp_162[3U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[3U];
            __Vtemp_162[4U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[4U];
            __Vtemp_162[5U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[5U];
            __Vtemp_162[6U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[6U];
            __Vtemp_162[7U] = vlSelf->DCache__DOT__miss__DOT__entries_10_data[7U];
        }
    } else {
        __Vtemp_162[0U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_10[0U];
        __Vtemp_162[1U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_10[1U];
        __Vtemp_162[2U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_10[2U];
        __Vtemp_162[3U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_10[3U];
        __Vtemp_162[4U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_10[4U];
        __Vtemp_162[5U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_10[5U];
        __Vtemp_162[6U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_10[6U];
        __Vtemp_162[7U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_10[7U];
    }
    bufp->chgWData(oldp+2801,(__Vtemp_162),256);
    bufp->chgBit(oldp+2809,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_57) 
                              & (0xaU == (IData)(vlSelf->io_refillWakeup_bits_id))) 
                             | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_10)) 
                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_wakeSent)))));
    bufp->chgBit(oldp+2810,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_60) 
                              & (0xaU == (IData)(vlSelf->io_loadReplay_bits_id))) 
                             | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_10)) 
                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_replaySent)))));
    if (vlSelf->io_l2_rxDat_bits_dataID) {
        __Vtemp_165[0U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[8U];
        __Vtemp_165[1U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[9U];
        __Vtemp_165[2U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[0xaU];
        __Vtemp_165[3U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[0xbU];
        __Vtemp_165[4U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[0xcU];
        __Vtemp_165[5U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[0xdU];
        __Vtemp_165[6U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[0xeU];
        __Vtemp_165[7U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[0xfU];
    } else {
        __Vtemp_165[0U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[0U];
        __Vtemp_165[1U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[1U];
        __Vtemp_165[2U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[2U];
        __Vtemp_165[3U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[3U];
        __Vtemp_165[4U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[4U];
        __Vtemp_165[5U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[5U];
        __Vtemp_165[6U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[6U];
        __Vtemp_165[7U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[7U];
    }
    bufp->chgWData(oldp+2811,(__Vtemp_165),256);
    bufp->chgCData(oldp+2819,((0xffU & ((1U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_11[0U]
                                         : vlSelf->io_l2_rxDat_bits_data[0U]))),8);
    bufp->chgCData(oldp+2820,((0xffU & ((2U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[0U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[0U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2821,((0xffU & ((4U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[0U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[0U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2822,((0xffU & ((8U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[0U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[0U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2823,((0xffU & ((0x10U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_11[1U]
                                         : vlSelf->io_l2_rxDat_bits_data[1U]))),8);
    bufp->chgCData(oldp+2824,((0xffU & ((0x20U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[1U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[1U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2825,((0xffU & ((0x40U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[1U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[1U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2826,((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[1U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[1U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2827,((0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_11[2U]
                                         : vlSelf->io_l2_rxDat_bits_data[2U]))),8);
    bufp->chgCData(oldp+2828,((0xffU & ((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[2U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[2U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2829,((0xffU & ((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[2U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[2U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2830,((0xffU & ((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[2U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[2U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2831,((0xffU & ((0x1000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_11[3U]
                                         : vlSelf->io_l2_rxDat_bits_data[3U]))),8);
    bufp->chgCData(oldp+2832,((0xffU & ((0x2000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[3U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[3U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2833,((0xffU & ((0x4000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[3U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[3U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2834,((0xffU & ((0x8000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[3U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[3U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2835,((0xffU & ((0x10000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_11[4U]
                                         : vlSelf->io_l2_rxDat_bits_data[4U]))),8);
    bufp->chgCData(oldp+2836,((0xffU & ((0x20000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[4U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[4U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2837,((0xffU & ((0x40000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[4U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[4U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2838,((0xffU & ((0x80000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[4U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[4U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2839,((0xffU & ((0x100000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_11[5U]
                                         : vlSelf->io_l2_rxDat_bits_data[5U]))),8);
    bufp->chgCData(oldp+2840,((0xffU & ((0x200000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[5U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[5U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2841,((0xffU & ((0x400000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[5U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[5U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2842,((0xffU & ((0x800000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[5U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[5U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2843,((0xffU & ((0x1000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_11[6U]
                                         : vlSelf->io_l2_rxDat_bits_data[6U]))),8);
    bufp->chgCData(oldp+2844,((0xffU & ((0x2000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[6U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[6U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2845,((0xffU & ((0x4000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[6U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[6U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2846,((0xffU & ((0x8000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[6U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[6U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2847,((0xffU & ((0x10000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_11[7U]
                                         : vlSelf->io_l2_rxDat_bits_data[7U]))),8);
    bufp->chgCData(oldp+2848,((0xffU & ((0x20000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[7U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[7U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2849,((0xffU & ((0x40000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[7U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[7U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2850,((0xffU & ((vlSelf->DCache__DOT__miss__DOT__maskHalf_11 
                                         >> 0x1fU) ? 
                                        ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[7U] 
                                          << 8U) | 
                                         (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[7U] 
                                          >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 0x18U))))),8);
    if ((0U != (IData)(vlSelf->DCache__DOT__miss__DOT___dupBeat_T_11))) {
        if (vlSelf->io_l2_rxDat_bits_dataID) {
            __Vtemp_170[0U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[8U];
            __Vtemp_170[1U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[9U];
            __Vtemp_170[2U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[0xaU];
            __Vtemp_170[3U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[0xbU];
            __Vtemp_170[4U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[0xcU];
            __Vtemp_170[5U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[0xdU];
            __Vtemp_170[6U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[0xeU];
            __Vtemp_170[7U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[0xfU];
        } else {
            __Vtemp_170[0U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[0U];
            __Vtemp_170[1U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[1U];
            __Vtemp_170[2U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[2U];
            __Vtemp_170[3U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[3U];
            __Vtemp_170[4U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[4U];
            __Vtemp_170[5U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[5U];
            __Vtemp_170[6U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[6U];
            __Vtemp_170[7U] = vlSelf->DCache__DOT__miss__DOT__entries_11_data[7U];
        }
    } else {
        __Vtemp_170[0U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_11[0U];
        __Vtemp_170[1U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_11[1U];
        __Vtemp_170[2U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_11[2U];
        __Vtemp_170[3U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_11[3U];
        __Vtemp_170[4U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_11[4U];
        __Vtemp_170[5U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_11[5U];
        __Vtemp_170[6U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_11[6U];
        __Vtemp_170[7U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_11[7U];
    }
    bufp->chgWData(oldp+2851,(__Vtemp_170),256);
    bufp->chgBit(oldp+2859,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_57) 
                              & (0xbU == (IData)(vlSelf->io_refillWakeup_bits_id))) 
                             | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_11)) 
                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_wakeSent)))));
    bufp->chgBit(oldp+2860,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_60) 
                              & (0xbU == (IData)(vlSelf->io_loadReplay_bits_id))) 
                             | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_11)) 
                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_replaySent)))));
    if (vlSelf->io_l2_rxDat_bits_dataID) {
        __Vtemp_173[0U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[8U];
        __Vtemp_173[1U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[9U];
        __Vtemp_173[2U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[0xaU];
        __Vtemp_173[3U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[0xbU];
        __Vtemp_173[4U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[0xcU];
        __Vtemp_173[5U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[0xdU];
        __Vtemp_173[6U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[0xeU];
        __Vtemp_173[7U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[0xfU];
    } else {
        __Vtemp_173[0U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[0U];
        __Vtemp_173[1U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[1U];
        __Vtemp_173[2U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[2U];
        __Vtemp_173[3U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[3U];
        __Vtemp_173[4U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[4U];
        __Vtemp_173[5U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[5U];
        __Vtemp_173[6U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[6U];
        __Vtemp_173[7U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[7U];
    }
    bufp->chgWData(oldp+2861,(__Vtemp_173),256);
    bufp->chgCData(oldp+2869,((0xffU & ((1U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_12[0U]
                                         : vlSelf->io_l2_rxDat_bits_data[0U]))),8);
    bufp->chgCData(oldp+2870,((0xffU & ((2U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[0U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[0U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2871,((0xffU & ((4U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[0U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[0U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2872,((0xffU & ((8U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[0U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[0U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2873,((0xffU & ((0x10U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_12[1U]
                                         : vlSelf->io_l2_rxDat_bits_data[1U]))),8);
    bufp->chgCData(oldp+2874,((0xffU & ((0x20U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[1U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[1U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2875,((0xffU & ((0x40U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[1U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[1U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2876,((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[1U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[1U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2877,((0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_12[2U]
                                         : vlSelf->io_l2_rxDat_bits_data[2U]))),8);
    bufp->chgCData(oldp+2878,((0xffU & ((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[2U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[2U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2879,((0xffU & ((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[2U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[2U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2880,((0xffU & ((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[2U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[2U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2881,((0xffU & ((0x1000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_12[3U]
                                         : vlSelf->io_l2_rxDat_bits_data[3U]))),8);
    bufp->chgCData(oldp+2882,((0xffU & ((0x2000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[3U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[3U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2883,((0xffU & ((0x4000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[3U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[3U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2884,((0xffU & ((0x8000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[3U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[3U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2885,((0xffU & ((0x10000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_12[4U]
                                         : vlSelf->io_l2_rxDat_bits_data[4U]))),8);
    bufp->chgCData(oldp+2886,((0xffU & ((0x20000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[4U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[4U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2887,((0xffU & ((0x40000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[4U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[4U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2888,((0xffU & ((0x80000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[4U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[4U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2889,((0xffU & ((0x100000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_12[5U]
                                         : vlSelf->io_l2_rxDat_bits_data[5U]))),8);
    bufp->chgCData(oldp+2890,((0xffU & ((0x200000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[5U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[5U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2891,((0xffU & ((0x400000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[5U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[5U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2892,((0xffU & ((0x800000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[5U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[5U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2893,((0xffU & ((0x1000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_12[6U]
                                         : vlSelf->io_l2_rxDat_bits_data[6U]))),8);
    bufp->chgCData(oldp+2894,((0xffU & ((0x2000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[6U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[6U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2895,((0xffU & ((0x4000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[6U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[6U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2896,((0xffU & ((0x8000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[6U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[6U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2897,((0xffU & ((0x10000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_12[7U]
                                         : vlSelf->io_l2_rxDat_bits_data[7U]))),8);
    bufp->chgCData(oldp+2898,((0xffU & ((0x20000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[7U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[7U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2899,((0xffU & ((0x40000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[7U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[7U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2900,((0xffU & ((vlSelf->DCache__DOT__miss__DOT__maskHalf_12 
                                         >> 0x1fU) ? 
                                        ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[7U] 
                                          << 8U) | 
                                         (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[7U] 
                                          >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 0x18U))))),8);
    if ((0U != (IData)(vlSelf->DCache__DOT__miss__DOT___dupBeat_T_12))) {
        if (vlSelf->io_l2_rxDat_bits_dataID) {
            __Vtemp_178[0U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[8U];
            __Vtemp_178[1U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[9U];
            __Vtemp_178[2U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[0xaU];
            __Vtemp_178[3U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[0xbU];
            __Vtemp_178[4U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[0xcU];
            __Vtemp_178[5U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[0xdU];
            __Vtemp_178[6U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[0xeU];
            __Vtemp_178[7U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[0xfU];
        } else {
            __Vtemp_178[0U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[0U];
            __Vtemp_178[1U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[1U];
            __Vtemp_178[2U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[2U];
            __Vtemp_178[3U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[3U];
            __Vtemp_178[4U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[4U];
            __Vtemp_178[5U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[5U];
            __Vtemp_178[6U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[6U];
            __Vtemp_178[7U] = vlSelf->DCache__DOT__miss__DOT__entries_12_data[7U];
        }
    } else {
        __Vtemp_178[0U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_12[0U];
        __Vtemp_178[1U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_12[1U];
        __Vtemp_178[2U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_12[2U];
        __Vtemp_178[3U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_12[3U];
        __Vtemp_178[4U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_12[4U];
        __Vtemp_178[5U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_12[5U];
        __Vtemp_178[6U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_12[6U];
        __Vtemp_178[7U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_12[7U];
    }
    bufp->chgWData(oldp+2901,(__Vtemp_178),256);
    bufp->chgBit(oldp+2909,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_57) 
                              & (0xcU == (IData)(vlSelf->io_refillWakeup_bits_id))) 
                             | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_12)) 
                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_wakeSent)))));
    bufp->chgBit(oldp+2910,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_60) 
                              & (0xcU == (IData)(vlSelf->io_loadReplay_bits_id))) 
                             | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_12)) 
                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_replaySent)))));
    if (vlSelf->io_l2_rxDat_bits_dataID) {
        __Vtemp_181[0U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[8U];
        __Vtemp_181[1U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[9U];
        __Vtemp_181[2U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[0xaU];
        __Vtemp_181[3U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[0xbU];
        __Vtemp_181[4U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[0xcU];
        __Vtemp_181[5U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[0xdU];
        __Vtemp_181[6U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[0xeU];
        __Vtemp_181[7U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[0xfU];
    } else {
        __Vtemp_181[0U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[0U];
        __Vtemp_181[1U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[1U];
        __Vtemp_181[2U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[2U];
        __Vtemp_181[3U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[3U];
        __Vtemp_181[4U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[4U];
        __Vtemp_181[5U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[5U];
        __Vtemp_181[6U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[6U];
        __Vtemp_181[7U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[7U];
    }
    bufp->chgWData(oldp+2911,(__Vtemp_181),256);
    bufp->chgCData(oldp+2919,((0xffU & ((1U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_13[0U]
                                         : vlSelf->io_l2_rxDat_bits_data[0U]))),8);
    bufp->chgCData(oldp+2920,((0xffU & ((2U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[0U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[0U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2921,((0xffU & ((4U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[0U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[0U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2922,((0xffU & ((8U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[0U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[0U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2923,((0xffU & ((0x10U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_13[1U]
                                         : vlSelf->io_l2_rxDat_bits_data[1U]))),8);
    bufp->chgCData(oldp+2924,((0xffU & ((0x20U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[1U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[1U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2925,((0xffU & ((0x40U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[1U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[1U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2926,((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[1U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[1U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2927,((0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_13[2U]
                                         : vlSelf->io_l2_rxDat_bits_data[2U]))),8);
    bufp->chgCData(oldp+2928,((0xffU & ((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[2U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[2U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2929,((0xffU & ((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[2U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[2U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2930,((0xffU & ((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[2U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[2U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2931,((0xffU & ((0x1000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_13[3U]
                                         : vlSelf->io_l2_rxDat_bits_data[3U]))),8);
    bufp->chgCData(oldp+2932,((0xffU & ((0x2000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[3U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[3U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2933,((0xffU & ((0x4000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[3U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[3U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2934,((0xffU & ((0x8000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[3U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[3U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2935,((0xffU & ((0x10000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_13[4U]
                                         : vlSelf->io_l2_rxDat_bits_data[4U]))),8);
    bufp->chgCData(oldp+2936,((0xffU & ((0x20000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[4U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[4U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2937,((0xffU & ((0x40000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[4U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[4U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2938,((0xffU & ((0x80000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[4U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[4U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2939,((0xffU & ((0x100000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_13[5U]
                                         : vlSelf->io_l2_rxDat_bits_data[5U]))),8);
    bufp->chgCData(oldp+2940,((0xffU & ((0x200000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[5U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[5U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2941,((0xffU & ((0x400000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[5U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[5U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2942,((0xffU & ((0x800000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[5U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[5U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2943,((0xffU & ((0x1000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_13[6U]
                                         : vlSelf->io_l2_rxDat_bits_data[6U]))),8);
    bufp->chgCData(oldp+2944,((0xffU & ((0x2000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[6U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[6U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2945,((0xffU & ((0x4000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[6U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[6U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2946,((0xffU & ((0x8000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[6U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[6U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2947,((0xffU & ((0x10000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_13[7U]
                                         : vlSelf->io_l2_rxDat_bits_data[7U]))),8);
    bufp->chgCData(oldp+2948,((0xffU & ((0x20000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[7U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[7U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2949,((0xffU & ((0x40000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[7U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[7U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2950,((0xffU & ((vlSelf->DCache__DOT__miss__DOT__maskHalf_13 
                                         >> 0x1fU) ? 
                                        ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[7U] 
                                          << 8U) | 
                                         (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[7U] 
                                          >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 0x18U))))),8);
    if ((0U != (IData)(vlSelf->DCache__DOT__miss__DOT___dupBeat_T_13))) {
        if (vlSelf->io_l2_rxDat_bits_dataID) {
            __Vtemp_186[0U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[8U];
            __Vtemp_186[1U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[9U];
            __Vtemp_186[2U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[0xaU];
            __Vtemp_186[3U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[0xbU];
            __Vtemp_186[4U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[0xcU];
            __Vtemp_186[5U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[0xdU];
            __Vtemp_186[6U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[0xeU];
            __Vtemp_186[7U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[0xfU];
        } else {
            __Vtemp_186[0U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[0U];
            __Vtemp_186[1U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[1U];
            __Vtemp_186[2U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[2U];
            __Vtemp_186[3U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[3U];
            __Vtemp_186[4U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[4U];
            __Vtemp_186[5U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[5U];
            __Vtemp_186[6U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[6U];
            __Vtemp_186[7U] = vlSelf->DCache__DOT__miss__DOT__entries_13_data[7U];
        }
    } else {
        __Vtemp_186[0U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_13[0U];
        __Vtemp_186[1U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_13[1U];
        __Vtemp_186[2U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_13[2U];
        __Vtemp_186[3U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_13[3U];
        __Vtemp_186[4U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_13[4U];
        __Vtemp_186[5U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_13[5U];
        __Vtemp_186[6U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_13[6U];
        __Vtemp_186[7U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_13[7U];
    }
    bufp->chgWData(oldp+2951,(__Vtemp_186),256);
    bufp->chgBit(oldp+2959,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_57) 
                              & (0xdU == (IData)(vlSelf->io_refillWakeup_bits_id))) 
                             | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_13)) 
                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_wakeSent)))));
    bufp->chgBit(oldp+2960,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_60) 
                              & (0xdU == (IData)(vlSelf->io_loadReplay_bits_id))) 
                             | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_13)) 
                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_replaySent)))));
    if (vlSelf->io_l2_rxDat_bits_dataID) {
        __Vtemp_189[0U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[8U];
        __Vtemp_189[1U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[9U];
        __Vtemp_189[2U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[0xaU];
        __Vtemp_189[3U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[0xbU];
        __Vtemp_189[4U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[0xcU];
        __Vtemp_189[5U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[0xdU];
        __Vtemp_189[6U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[0xeU];
        __Vtemp_189[7U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[0xfU];
    } else {
        __Vtemp_189[0U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[0U];
        __Vtemp_189[1U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[1U];
        __Vtemp_189[2U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[2U];
        __Vtemp_189[3U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[3U];
        __Vtemp_189[4U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[4U];
        __Vtemp_189[5U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[5U];
        __Vtemp_189[6U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[6U];
        __Vtemp_189[7U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[7U];
    }
    bufp->chgWData(oldp+2961,(__Vtemp_189),256);
    bufp->chgCData(oldp+2969,((0xffU & ((1U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_14[0U]
                                         : vlSelf->io_l2_rxDat_bits_data[0U]))),8);
    bufp->chgCData(oldp+2970,((0xffU & ((2U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[0U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[0U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2971,((0xffU & ((4U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[0U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[0U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2972,((0xffU & ((8U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[0U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[0U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2973,((0xffU & ((0x10U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_14[1U]
                                         : vlSelf->io_l2_rxDat_bits_data[1U]))),8);
    bufp->chgCData(oldp+2974,((0xffU & ((0x20U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[1U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[1U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2975,((0xffU & ((0x40U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[1U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[1U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2976,((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[1U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[1U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2977,((0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_14[2U]
                                         : vlSelf->io_l2_rxDat_bits_data[2U]))),8);
    bufp->chgCData(oldp+2978,((0xffU & ((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[2U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[2U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2979,((0xffU & ((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[2U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[2U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2980,((0xffU & ((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[2U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[2U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2981,((0xffU & ((0x1000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_14[3U]
                                         : vlSelf->io_l2_rxDat_bits_data[3U]))),8);
    bufp->chgCData(oldp+2982,((0xffU & ((0x2000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[3U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[3U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2983,((0xffU & ((0x4000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[3U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[3U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2984,((0xffU & ((0x8000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[3U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[3U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2985,((0xffU & ((0x10000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_14[4U]
                                         : vlSelf->io_l2_rxDat_bits_data[4U]))),8);
    bufp->chgCData(oldp+2986,((0xffU & ((0x20000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[4U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[4U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2987,((0xffU & ((0x40000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[4U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[4U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2988,((0xffU & ((0x80000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[4U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[4U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2989,((0xffU & ((0x100000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_14[5U]
                                         : vlSelf->io_l2_rxDat_bits_data[5U]))),8);
    bufp->chgCData(oldp+2990,((0xffU & ((0x200000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[5U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[5U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2991,((0xffU & ((0x400000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[5U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[5U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2992,((0xffU & ((0x800000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[5U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[5U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2993,((0xffU & ((0x1000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_14[6U]
                                         : vlSelf->io_l2_rxDat_bits_data[6U]))),8);
    bufp->chgCData(oldp+2994,((0xffU & ((0x2000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[6U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[6U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2995,((0xffU & ((0x4000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[6U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[6U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+2996,((0xffU & ((0x8000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[6U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[6U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+2997,((0xffU & ((0x10000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_14[7U]
                                         : vlSelf->io_l2_rxDat_bits_data[7U]))),8);
    bufp->chgCData(oldp+2998,((0xffU & ((0x20000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[7U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[7U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+2999,((0xffU & ((0x40000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[7U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[7U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+3000,((0xffU & ((vlSelf->DCache__DOT__miss__DOT__maskHalf_14 
                                         >> 0x1fU) ? 
                                        ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[7U] 
                                          << 8U) | 
                                         (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[7U] 
                                          >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 0x18U))))),8);
    if ((0U != (IData)(vlSelf->DCache__DOT__miss__DOT___dupBeat_T_14))) {
        if (vlSelf->io_l2_rxDat_bits_dataID) {
            __Vtemp_194[0U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[8U];
            __Vtemp_194[1U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[9U];
            __Vtemp_194[2U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[0xaU];
            __Vtemp_194[3U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[0xbU];
            __Vtemp_194[4U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[0xcU];
            __Vtemp_194[5U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[0xdU];
            __Vtemp_194[6U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[0xeU];
            __Vtemp_194[7U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[0xfU];
        } else {
            __Vtemp_194[0U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[0U];
            __Vtemp_194[1U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[1U];
            __Vtemp_194[2U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[2U];
            __Vtemp_194[3U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[3U];
            __Vtemp_194[4U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[4U];
            __Vtemp_194[5U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[5U];
            __Vtemp_194[6U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[6U];
            __Vtemp_194[7U] = vlSelf->DCache__DOT__miss__DOT__entries_14_data[7U];
        }
    } else {
        __Vtemp_194[0U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_14[0U];
        __Vtemp_194[1U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_14[1U];
        __Vtemp_194[2U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_14[2U];
        __Vtemp_194[3U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_14[3U];
        __Vtemp_194[4U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_14[4U];
        __Vtemp_194[5U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_14[5U];
        __Vtemp_194[6U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_14[6U];
        __Vtemp_194[7U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_14[7U];
    }
    bufp->chgWData(oldp+3001,(__Vtemp_194),256);
    bufp->chgBit(oldp+3009,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_57) 
                              & (0xeU == (IData)(vlSelf->io_refillWakeup_bits_id))) 
                             | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_14)) 
                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_wakeSent)))));
    bufp->chgBit(oldp+3010,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_60) 
                              & (0xeU == (IData)(vlSelf->io_loadReplay_bits_id))) 
                             | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_14)) 
                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_replaySent)))));
    if (vlSelf->io_l2_rxDat_bits_dataID) {
        __Vtemp_197[0U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[8U];
        __Vtemp_197[1U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[9U];
        __Vtemp_197[2U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[0xaU];
        __Vtemp_197[3U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[0xbU];
        __Vtemp_197[4U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[0xcU];
        __Vtemp_197[5U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[0xdU];
        __Vtemp_197[6U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[0xeU];
        __Vtemp_197[7U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[0xfU];
    } else {
        __Vtemp_197[0U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[0U];
        __Vtemp_197[1U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[1U];
        __Vtemp_197[2U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[2U];
        __Vtemp_197[3U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[3U];
        __Vtemp_197[4U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[4U];
        __Vtemp_197[5U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[5U];
        __Vtemp_197[6U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[6U];
        __Vtemp_197[7U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[7U];
    }
    bufp->chgWData(oldp+3011,(__Vtemp_197),256);
    bufp->chgCData(oldp+3019,((0xffU & ((1U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_15[0U]
                                         : vlSelf->io_l2_rxDat_bits_data[0U]))),8);
    bufp->chgCData(oldp+3020,((0xffU & ((2U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[0U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[0U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+3021,((0xffU & ((4U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[0U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[0U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+3022,((0xffU & ((8U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[0U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[0U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+3023,((0xffU & ((0x10U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_15[1U]
                                         : vlSelf->io_l2_rxDat_bits_data[1U]))),8);
    bufp->chgCData(oldp+3024,((0xffU & ((0x20U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[1U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[1U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+3025,((0xffU & ((0x40U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[1U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[1U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+3026,((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[1U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[1U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+3027,((0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_15[2U]
                                         : vlSelf->io_l2_rxDat_bits_data[2U]))),8);
    bufp->chgCData(oldp+3028,((0xffU & ((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[2U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[2U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+3029,((0xffU & ((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[2U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[2U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+3030,((0xffU & ((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[2U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[2U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+3031,((0xffU & ((0x1000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_15[3U]
                                         : vlSelf->io_l2_rxDat_bits_data[3U]))),8);
    bufp->chgCData(oldp+3032,((0xffU & ((0x2000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[3U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[3U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+3033,((0xffU & ((0x4000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[3U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[3U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+3034,((0xffU & ((0x8000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[3U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[3U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+3035,((0xffU & ((0x10000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_15[4U]
                                         : vlSelf->io_l2_rxDat_bits_data[4U]))),8);
    bufp->chgCData(oldp+3036,((0xffU & ((0x20000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[4U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[4U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+3037,((0xffU & ((0x40000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[4U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[4U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+3038,((0xffU & ((0x80000U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[4U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[4U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+3039,((0xffU & ((0x100000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_15[5U]
                                         : vlSelf->io_l2_rxDat_bits_data[5U]))),8);
    bufp->chgCData(oldp+3040,((0xffU & ((0x200000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[5U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[5U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+3041,((0xffU & ((0x400000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[5U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[5U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+3042,((0xffU & ((0x800000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[5U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[5U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+3043,((0xffU & ((0x1000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_15[6U]
                                         : vlSelf->io_l2_rxDat_bits_data[6U]))),8);
    bufp->chgCData(oldp+3044,((0xffU & ((0x2000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[6U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[6U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+3045,((0xffU & ((0x4000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[6U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[6U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+3046,((0xffU & ((0x8000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[6U] 
                                             << 8U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[6U] 
                                               >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                               >> 0x18U))))),8);
    bufp->chgCData(oldp+3047,((0xffU & ((0x10000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                         ? vlSelf->DCache__DOT__miss__DOT__storeHalf_15[7U]
                                         : vlSelf->io_l2_rxDat_bits_data[7U]))),8);
    bufp->chgCData(oldp+3048,((0xffU & ((0x20000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[7U] 
                                             << 0x18U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[7U] 
                                               >> 8U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 0x18U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 8U))))),8);
    bufp->chgCData(oldp+3049,((0xffU & ((0x40000000U 
                                         & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                         ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[7U] 
                                             << 0x10U) 
                                            | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[7U] 
                                               >> 0x10U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 0x10U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 0x10U))))),8);
    bufp->chgCData(oldp+3050,((0xffU & ((vlSelf->DCache__DOT__miss__DOT__maskHalf_15 
                                         >> 0x1fU) ? 
                                        ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[7U] 
                                          << 8U) | 
                                         (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[7U] 
                                          >> 0x18U))
                                         : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                             << 8U) 
                                            | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                               >> 0x18U))))),8);
    if ((0U != (IData)(vlSelf->DCache__DOT__miss__DOT___dupBeat_T_15))) {
        if (vlSelf->io_l2_rxDat_bits_dataID) {
            __Vtemp_202[0U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[8U];
            __Vtemp_202[1U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[9U];
            __Vtemp_202[2U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[0xaU];
            __Vtemp_202[3U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[0xbU];
            __Vtemp_202[4U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[0xcU];
            __Vtemp_202[5U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[0xdU];
            __Vtemp_202[6U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[0xeU];
            __Vtemp_202[7U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[0xfU];
        } else {
            __Vtemp_202[0U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[0U];
            __Vtemp_202[1U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[1U];
            __Vtemp_202[2U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[2U];
            __Vtemp_202[3U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[3U];
            __Vtemp_202[4U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[4U];
            __Vtemp_202[5U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[5U];
            __Vtemp_202[6U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[6U];
            __Vtemp_202[7U] = vlSelf->DCache__DOT__miss__DOT__entries_15_data[7U];
        }
    } else {
        __Vtemp_202[0U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_15[0U];
        __Vtemp_202[1U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_15[1U];
        __Vtemp_202[2U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_15[2U];
        __Vtemp_202[3U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_15[3U];
        __Vtemp_202[4U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_15[4U];
        __Vtemp_202[5U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_15[5U];
        __Vtemp_202[6U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_15[6U];
        __Vtemp_202[7U] = vlSelf->DCache__DOT__miss__DOT__mergedBeat_15[7U];
    }
    bufp->chgWData(oldp+3051,(__Vtemp_202),256);
    bufp->chgBit(oldp+3059,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_57) 
                              & (0xfU == (IData)(vlSelf->io_refillWakeup_bits_id))) 
                             | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_15)) 
                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_wakeSent)))));
    bufp->chgBit(oldp+3060,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_60) 
                              & (0xfU == (IData)(vlSelf->io_loadReplay_bits_id))) 
                             | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_15)) 
                                & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_replaySent)))));
    bufp->chgBit(oldp+3061,(((((0xfU == (IData)(vlSelf->io_forwardChi_bits_id))
                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_0_valid)
                                : ((0xeU == (IData)(vlSelf->io_forwardChi_bits_id))
                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_0_valid)
                                    : ((0xdU == (IData)(vlSelf->io_forwardChi_bits_id))
                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_0_valid)
                                        : ((0xcU == (IData)(vlSelf->io_forwardChi_bits_id))
                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_0_valid)
                                            : ((0xbU 
                                                == (IData)(vlSelf->io_forwardChi_bits_id))
                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_0_valid)
                                                : (
                                                   (0xaU 
                                                    == (IData)(vlSelf->io_forwardChi_bits_id))
                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_0_valid)
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->io_forwardChi_bits_id))
                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_0_valid)
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->io_forwardChi_bits_id))
                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_0_valid)
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->io_forwardChi_bits_id))
                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_0_valid)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->io_forwardChi_bits_id))
                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_0_valid)
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->io_forwardChi_bits_id))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_0_valid)
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSelf->io_forwardChi_bits_id))
                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_0_valid)
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->io_forwardChi_bits_id))
                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_0_valid)
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->io_forwardChi_bits_id))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_0_valid)
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->io_forwardChi_bits_id))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_0_valid)
                                                             : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_0_valid)))))))))))))))) 
                              & ((0U == ((0xfU == (IData)(vlSelf->io_forwardChi_bits_id))
                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_0_source)
                                          : ((0xeU 
                                              == (IData)(vlSelf->io_forwardChi_bits_id))
                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_0_source)
                                              : ((0xdU 
                                                  == (IData)(vlSelf->io_forwardChi_bits_id))
                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_0_source)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->io_forwardChi_bits_id))
                                                   ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_0_source)
                                                   : 
                                                  ((0xbU 
                                                    == (IData)(vlSelf->io_forwardChi_bits_id))
                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_0_source)
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSelf->io_forwardChi_bits_id))
                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_0_source)
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSelf->io_forwardChi_bits_id))
                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_0_source)
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlSelf->io_forwardChi_bits_id))
                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_0_source)
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlSelf->io_forwardChi_bits_id))
                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_0_source)
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlSelf->io_forwardChi_bits_id))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_0_source)
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlSelf->io_forwardChi_bits_id))
                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_0_source)
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlSelf->io_forwardChi_bits_id))
                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_0_source)
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlSelf->io_forwardChi_bits_id))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_0_source)
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlSelf->io_forwardChi_bits_id))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_0_source)
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlSelf->io_forwardChi_bits_id))
                                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_0_source)
                                                              : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_0_source))))))))))))))))) 
                                 & (((0xfU == (IData)(vlSelf->io_forwardChi_bits_id))
                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_0_half)
                                      : ((0xeU == (IData)(vlSelf->io_forwardChi_bits_id))
                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_0_half)
                                          : ((0xdU 
                                              == (IData)(vlSelf->io_forwardChi_bits_id))
                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_0_half)
                                              : ((0xcU 
                                                  == (IData)(vlSelf->io_forwardChi_bits_id))
                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_0_half)
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->io_forwardChi_bits_id))
                                                   ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_0_half)
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->io_forwardChi_bits_id))
                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_0_half)
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->io_forwardChi_bits_id))
                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_0_half)
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->io_forwardChi_bits_id))
                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_0_half)
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->io_forwardChi_bits_id))
                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_0_half)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->io_forwardChi_bits_id))
                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_0_half)
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->io_forwardChi_bits_id))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_0_half)
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSelf->io_forwardChi_bits_id))
                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_0_half)
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->io_forwardChi_bits_id))
                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_0_half)
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->io_forwardChi_bits_id))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_0_half)
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->io_forwardChi_bits_id))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_0_half)
                                                             : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_0_half)))))))))))))))) 
                                    == (IData)(vlSelf->io_l2_rxDat_bits_dataID)))) 
                             | ((((0xfU == (IData)(vlSelf->io_forwardChi_bits_id))
                                   ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_1_valid)
                                   : ((0xeU == (IData)(vlSelf->io_forwardChi_bits_id))
                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_1_valid)
                                       : ((0xdU == (IData)(vlSelf->io_forwardChi_bits_id))
                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_1_valid)
                                           : ((0xcU 
                                               == (IData)(vlSelf->io_forwardChi_bits_id))
                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_1_valid)
                                               : ((0xbU 
                                                   == (IData)(vlSelf->io_forwardChi_bits_id))
                                                   ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_1_valid)
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->io_forwardChi_bits_id))
                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_1_valid)
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->io_forwardChi_bits_id))
                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_1_valid)
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->io_forwardChi_bits_id))
                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_1_valid)
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->io_forwardChi_bits_id))
                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_1_valid)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->io_forwardChi_bits_id))
                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_1_valid)
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->io_forwardChi_bits_id))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_1_valid)
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSelf->io_forwardChi_bits_id))
                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_1_valid)
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->io_forwardChi_bits_id))
                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_1_valid)
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->io_forwardChi_bits_id))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_1_valid)
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->io_forwardChi_bits_id))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_1_valid)
                                                             : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_1_valid)))))))))))))))) 
                                 & ((0U == ((0xfU == (IData)(vlSelf->io_forwardChi_bits_id))
                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_1_source)
                                             : ((0xeU 
                                                 == (IData)(vlSelf->io_forwardChi_bits_id))
                                                 ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_1_source)
                                                 : 
                                                ((0xdU 
                                                  == (IData)(vlSelf->io_forwardChi_bits_id))
                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_1_source)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->io_forwardChi_bits_id))
                                                   ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_1_source)
                                                   : 
                                                  ((0xbU 
                                                    == (IData)(vlSelf->io_forwardChi_bits_id))
                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_1_source)
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSelf->io_forwardChi_bits_id))
                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_1_source)
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSelf->io_forwardChi_bits_id))
                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_1_source)
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlSelf->io_forwardChi_bits_id))
                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_1_source)
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlSelf->io_forwardChi_bits_id))
                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_1_source)
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlSelf->io_forwardChi_bits_id))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_1_source)
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlSelf->io_forwardChi_bits_id))
                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_1_source)
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlSelf->io_forwardChi_bits_id))
                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_1_source)
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlSelf->io_forwardChi_bits_id))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_1_source)
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlSelf->io_forwardChi_bits_id))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_1_source)
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlSelf->io_forwardChi_bits_id))
                                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_1_source)
                                                              : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_1_source))))))))))))))))) 
                                    & (((0xfU == (IData)(vlSelf->io_forwardChi_bits_id))
                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_1_half)
                                         : ((0xeU == (IData)(vlSelf->io_forwardChi_bits_id))
                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_1_half)
                                             : ((0xdU 
                                                 == (IData)(vlSelf->io_forwardChi_bits_id))
                                                 ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_1_half)
                                                 : 
                                                ((0xcU 
                                                  == (IData)(vlSelf->io_forwardChi_bits_id))
                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_1_half)
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->io_forwardChi_bits_id))
                                                   ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_1_half)
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->io_forwardChi_bits_id))
                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_1_half)
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->io_forwardChi_bits_id))
                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_1_half)
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->io_forwardChi_bits_id))
                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_1_half)
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->io_forwardChi_bits_id))
                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_1_half)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->io_forwardChi_bits_id))
                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_1_half)
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->io_forwardChi_bits_id))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_1_half)
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSelf->io_forwardChi_bits_id))
                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_1_half)
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->io_forwardChi_bits_id))
                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_1_half)
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->io_forwardChi_bits_id))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_1_half)
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->io_forwardChi_bits_id))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_1_half)
                                                             : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_1_half)))))))))))))))) 
                                       == (IData)(vlSelf->io_l2_rxDat_bits_dataID)))) 
                                | ((((0xfU == (IData)(vlSelf->io_forwardChi_bits_id))
                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_2_valid)
                                      : ((0xeU == (IData)(vlSelf->io_forwardChi_bits_id))
                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_2_valid)
                                          : ((0xdU 
                                              == (IData)(vlSelf->io_forwardChi_bits_id))
                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_2_valid)
                                              : ((0xcU 
                                                  == (IData)(vlSelf->io_forwardChi_bits_id))
                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_2_valid)
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->io_forwardChi_bits_id))
                                                   ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_2_valid)
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->io_forwardChi_bits_id))
                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_2_valid)
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->io_forwardChi_bits_id))
                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_2_valid)
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->io_forwardChi_bits_id))
                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_2_valid)
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->io_forwardChi_bits_id))
                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_2_valid)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->io_forwardChi_bits_id))
                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_2_valid)
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->io_forwardChi_bits_id))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_2_valid)
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSelf->io_forwardChi_bits_id))
                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_2_valid)
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->io_forwardChi_bits_id))
                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_2_valid)
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->io_forwardChi_bits_id))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_2_valid)
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->io_forwardChi_bits_id))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_2_valid)
                                                             : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_2_valid)))))))))))))))) 
                                    & ((0U == ((0xfU 
                                                == (IData)(vlSelf->io_forwardChi_bits_id))
                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_2_source)
                                                : (
                                                   (0xeU 
                                                    == (IData)(vlSelf->io_forwardChi_bits_id))
                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_2_source)
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(vlSelf->io_forwardChi_bits_id))
                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_2_source)
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->io_forwardChi_bits_id))
                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_2_source)
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlSelf->io_forwardChi_bits_id))
                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_2_source)
                                                       : 
                                                      ((0xaU 
                                                        == (IData)(vlSelf->io_forwardChi_bits_id))
                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_2_source)
                                                        : 
                                                       ((9U 
                                                         == (IData)(vlSelf->io_forwardChi_bits_id))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_2_source)
                                                         : 
                                                        ((8U 
                                                          == (IData)(vlSelf->io_forwardChi_bits_id))
                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_2_source)
                                                          : 
                                                         ((7U 
                                                           == (IData)(vlSelf->io_forwardChi_bits_id))
                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_2_source)
                                                           : 
                                                          ((6U 
                                                            == (IData)(vlSelf->io_forwardChi_bits_id))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_2_source)
                                                            : 
                                                           ((5U 
                                                             == (IData)(vlSelf->io_forwardChi_bits_id))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_2_source)
                                                             : 
                                                            ((4U 
                                                              == (IData)(vlSelf->io_forwardChi_bits_id))
                                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_2_source)
                                                              : 
                                                             ((3U 
                                                               == (IData)(vlSelf->io_forwardChi_bits_id))
                                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_2_source)
                                                               : 
                                                              ((2U 
                                                                == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_2_source)
                                                                : 
                                                               ((1U 
                                                                 == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                 ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_2_source)
                                                                 : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_2_source))))))))))))))))) 
                                       & (((0xfU == (IData)(vlSelf->io_forwardChi_bits_id))
                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_2_half)
                                            : ((0xeU 
                                                == (IData)(vlSelf->io_forwardChi_bits_id))
                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_2_half)
                                                : (
                                                   (0xdU 
                                                    == (IData)(vlSelf->io_forwardChi_bits_id))
                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_2_half)
                                                    : 
                                                   ((0xcU 
                                                     == (IData)(vlSelf->io_forwardChi_bits_id))
                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_2_half)
                                                     : 
                                                    ((0xbU 
                                                      == (IData)(vlSelf->io_forwardChi_bits_id))
                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_2_half)
                                                      : 
                                                     ((0xaU 
                                                       == (IData)(vlSelf->io_forwardChi_bits_id))
                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_2_half)
                                                       : 
                                                      ((9U 
                                                        == (IData)(vlSelf->io_forwardChi_bits_id))
                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_2_half)
                                                        : 
                                                       ((8U 
                                                         == (IData)(vlSelf->io_forwardChi_bits_id))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_2_half)
                                                         : 
                                                        ((7U 
                                                          == (IData)(vlSelf->io_forwardChi_bits_id))
                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_2_half)
                                                          : 
                                                         ((6U 
                                                           == (IData)(vlSelf->io_forwardChi_bits_id))
                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_2_half)
                                                           : 
                                                          ((5U 
                                                            == (IData)(vlSelf->io_forwardChi_bits_id))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_2_half)
                                                            : 
                                                           ((4U 
                                                             == (IData)(vlSelf->io_forwardChi_bits_id))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_2_half)
                                                             : 
                                                            ((3U 
                                                              == (IData)(vlSelf->io_forwardChi_bits_id))
                                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_2_half)
                                                              : 
                                                             ((2U 
                                                               == (IData)(vlSelf->io_forwardChi_bits_id))
                                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_2_half)
                                                               : 
                                                              ((1U 
                                                                == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_2_half)
                                                                : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_2_half)))))))))))))))) 
                                          == (IData)(vlSelf->io_l2_rxDat_bits_dataID)))) 
                                   | ((((0xfU == (IData)(vlSelf->io_forwardChi_bits_id))
                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_3_valid)
                                         : ((0xeU == (IData)(vlSelf->io_forwardChi_bits_id))
                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_3_valid)
                                             : ((0xdU 
                                                 == (IData)(vlSelf->io_forwardChi_bits_id))
                                                 ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_3_valid)
                                                 : 
                                                ((0xcU 
                                                  == (IData)(vlSelf->io_forwardChi_bits_id))
                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_3_valid)
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->io_forwardChi_bits_id))
                                                   ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_3_valid)
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->io_forwardChi_bits_id))
                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_3_valid)
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->io_forwardChi_bits_id))
                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_3_valid)
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->io_forwardChi_bits_id))
                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_3_valid)
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->io_forwardChi_bits_id))
                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_3_valid)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->io_forwardChi_bits_id))
                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_3_valid)
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->io_forwardChi_bits_id))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_3_valid)
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSelf->io_forwardChi_bits_id))
                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_3_valid)
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->io_forwardChi_bits_id))
                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_3_valid)
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->io_forwardChi_bits_id))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_3_valid)
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->io_forwardChi_bits_id))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_3_valid)
                                                             : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_3_valid)))))))))))))))) 
                                       & ((0U == ((0xfU 
                                                   == (IData)(vlSelf->io_forwardChi_bits_id))
                                                   ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_3_source)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->io_forwardChi_bits_id))
                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_3_source)
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(vlSelf->io_forwardChi_bits_id))
                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_3_source)
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->io_forwardChi_bits_id))
                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_3_source)
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlSelf->io_forwardChi_bits_id))
                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_3_source)
                                                       : 
                                                      ((0xaU 
                                                        == (IData)(vlSelf->io_forwardChi_bits_id))
                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_3_source)
                                                        : 
                                                       ((9U 
                                                         == (IData)(vlSelf->io_forwardChi_bits_id))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_3_source)
                                                         : 
                                                        ((8U 
                                                          == (IData)(vlSelf->io_forwardChi_bits_id))
                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_3_source)
                                                          : 
                                                         ((7U 
                                                           == (IData)(vlSelf->io_forwardChi_bits_id))
                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_3_source)
                                                           : 
                                                          ((6U 
                                                            == (IData)(vlSelf->io_forwardChi_bits_id))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_3_source)
                                                            : 
                                                           ((5U 
                                                             == (IData)(vlSelf->io_forwardChi_bits_id))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_3_source)
                                                             : 
                                                            ((4U 
                                                              == (IData)(vlSelf->io_forwardChi_bits_id))
                                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_3_source)
                                                              : 
                                                             ((3U 
                                                               == (IData)(vlSelf->io_forwardChi_bits_id))
                                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_3_source)
                                                               : 
                                                              ((2U 
                                                                == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_3_source)
                                                                : 
                                                               ((1U 
                                                                 == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                 ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_3_source)
                                                                 : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_3_source))))))))))))))))) 
                                          & (((0xfU 
                                               == (IData)(vlSelf->io_forwardChi_bits_id))
                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_3_half)
                                               : ((0xeU 
                                                   == (IData)(vlSelf->io_forwardChi_bits_id))
                                                   ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_3_half)
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->io_forwardChi_bits_id))
                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_3_half)
                                                    : 
                                                   ((0xcU 
                                                     == (IData)(vlSelf->io_forwardChi_bits_id))
                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_3_half)
                                                     : 
                                                    ((0xbU 
                                                      == (IData)(vlSelf->io_forwardChi_bits_id))
                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_3_half)
                                                      : 
                                                     ((0xaU 
                                                       == (IData)(vlSelf->io_forwardChi_bits_id))
                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_3_half)
                                                       : 
                                                      ((9U 
                                                        == (IData)(vlSelf->io_forwardChi_bits_id))
                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_3_half)
                                                        : 
                                                       ((8U 
                                                         == (IData)(vlSelf->io_forwardChi_bits_id))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_3_half)
                                                         : 
                                                        ((7U 
                                                          == (IData)(vlSelf->io_forwardChi_bits_id))
                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_3_half)
                                                          : 
                                                         ((6U 
                                                           == (IData)(vlSelf->io_forwardChi_bits_id))
                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_3_half)
                                                           : 
                                                          ((5U 
                                                            == (IData)(vlSelf->io_forwardChi_bits_id))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_3_half)
                                                            : 
                                                           ((4U 
                                                             == (IData)(vlSelf->io_forwardChi_bits_id))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_3_half)
                                                             : 
                                                            ((3U 
                                                              == (IData)(vlSelf->io_forwardChi_bits_id))
                                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_3_half)
                                                              : 
                                                             ((2U 
                                                               == (IData)(vlSelf->io_forwardChi_bits_id))
                                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_3_half)
                                                               : 
                                                              ((1U 
                                                                == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_3_half)
                                                                : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_3_half)))))))))))))))) 
                                             == (IData)(vlSelf->io_l2_rxDat_bits_dataID)))) 
                                      | ((((0xfU == (IData)(vlSelf->io_forwardChi_bits_id))
                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_4_valid)
                                            : ((0xeU 
                                                == (IData)(vlSelf->io_forwardChi_bits_id))
                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_4_valid)
                                                : (
                                                   (0xdU 
                                                    == (IData)(vlSelf->io_forwardChi_bits_id))
                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_4_valid)
                                                    : 
                                                   ((0xcU 
                                                     == (IData)(vlSelf->io_forwardChi_bits_id))
                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_4_valid)
                                                     : 
                                                    ((0xbU 
                                                      == (IData)(vlSelf->io_forwardChi_bits_id))
                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_4_valid)
                                                      : 
                                                     ((0xaU 
                                                       == (IData)(vlSelf->io_forwardChi_bits_id))
                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_4_valid)
                                                       : 
                                                      ((9U 
                                                        == (IData)(vlSelf->io_forwardChi_bits_id))
                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_4_valid)
                                                        : 
                                                       ((8U 
                                                         == (IData)(vlSelf->io_forwardChi_bits_id))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_4_valid)
                                                         : 
                                                        ((7U 
                                                          == (IData)(vlSelf->io_forwardChi_bits_id))
                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_4_valid)
                                                          : 
                                                         ((6U 
                                                           == (IData)(vlSelf->io_forwardChi_bits_id))
                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_4_valid)
                                                           : 
                                                          ((5U 
                                                            == (IData)(vlSelf->io_forwardChi_bits_id))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_4_valid)
                                                            : 
                                                           ((4U 
                                                             == (IData)(vlSelf->io_forwardChi_bits_id))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_4_valid)
                                                             : 
                                                            ((3U 
                                                              == (IData)(vlSelf->io_forwardChi_bits_id))
                                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_4_valid)
                                                              : 
                                                             ((2U 
                                                               == (IData)(vlSelf->io_forwardChi_bits_id))
                                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_4_valid)
                                                               : 
                                                              ((1U 
                                                                == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_4_valid)
                                                                : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_4_valid)))))))))))))))) 
                                          & ((0U == 
                                              ((0xfU 
                                                == (IData)(vlSelf->io_forwardChi_bits_id))
                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_4_source)
                                                : (
                                                   (0xeU 
                                                    == (IData)(vlSelf->io_forwardChi_bits_id))
                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_4_source)
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(vlSelf->io_forwardChi_bits_id))
                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_4_source)
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->io_forwardChi_bits_id))
                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_4_source)
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlSelf->io_forwardChi_bits_id))
                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_4_source)
                                                       : 
                                                      ((0xaU 
                                                        == (IData)(vlSelf->io_forwardChi_bits_id))
                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_4_source)
                                                        : 
                                                       ((9U 
                                                         == (IData)(vlSelf->io_forwardChi_bits_id))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_4_source)
                                                         : 
                                                        ((8U 
                                                          == (IData)(vlSelf->io_forwardChi_bits_id))
                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_4_source)
                                                          : 
                                                         ((7U 
                                                           == (IData)(vlSelf->io_forwardChi_bits_id))
                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_4_source)
                                                           : 
                                                          ((6U 
                                                            == (IData)(vlSelf->io_forwardChi_bits_id))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_4_source)
                                                            : 
                                                           ((5U 
                                                             == (IData)(vlSelf->io_forwardChi_bits_id))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_4_source)
                                                             : 
                                                            ((4U 
                                                              == (IData)(vlSelf->io_forwardChi_bits_id))
                                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_4_source)
                                                              : 
                                                             ((3U 
                                                               == (IData)(vlSelf->io_forwardChi_bits_id))
                                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_4_source)
                                                               : 
                                                              ((2U 
                                                                == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_4_source)
                                                                : 
                                                               ((1U 
                                                                 == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                 ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_4_source)
                                                                 : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_4_source))))))))))))))))) 
                                             & (((0xfU 
                                                  == (IData)(vlSelf->io_forwardChi_bits_id))
                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_4_half)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->io_forwardChi_bits_id))
                                                   ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_4_half)
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->io_forwardChi_bits_id))
                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_4_half)
                                                    : 
                                                   ((0xcU 
                                                     == (IData)(vlSelf->io_forwardChi_bits_id))
                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_4_half)
                                                     : 
                                                    ((0xbU 
                                                      == (IData)(vlSelf->io_forwardChi_bits_id))
                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_4_half)
                                                      : 
                                                     ((0xaU 
                                                       == (IData)(vlSelf->io_forwardChi_bits_id))
                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_4_half)
                                                       : 
                                                      ((9U 
                                                        == (IData)(vlSelf->io_forwardChi_bits_id))
                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_4_half)
                                                        : 
                                                       ((8U 
                                                         == (IData)(vlSelf->io_forwardChi_bits_id))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_4_half)
                                                         : 
                                                        ((7U 
                                                          == (IData)(vlSelf->io_forwardChi_bits_id))
                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_4_half)
                                                          : 
                                                         ((6U 
                                                           == (IData)(vlSelf->io_forwardChi_bits_id))
                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_4_half)
                                                           : 
                                                          ((5U 
                                                            == (IData)(vlSelf->io_forwardChi_bits_id))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_4_half)
                                                            : 
                                                           ((4U 
                                                             == (IData)(vlSelf->io_forwardChi_bits_id))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_4_half)
                                                             : 
                                                            ((3U 
                                                              == (IData)(vlSelf->io_forwardChi_bits_id))
                                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_4_half)
                                                              : 
                                                             ((2U 
                                                               == (IData)(vlSelf->io_forwardChi_bits_id))
                                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_4_half)
                                                               : 
                                                              ((1U 
                                                                == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_4_half)
                                                                : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_4_half)))))))))))))))) 
                                                == (IData)(vlSelf->io_l2_rxDat_bits_dataID)))) 
                                         | ((((0xfU 
                                               == (IData)(vlSelf->io_forwardChi_bits_id))
                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_5_valid)
                                               : ((0xeU 
                                                   == (IData)(vlSelf->io_forwardChi_bits_id))
                                                   ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_5_valid)
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->io_forwardChi_bits_id))
                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_5_valid)
                                                    : 
                                                   ((0xcU 
                                                     == (IData)(vlSelf->io_forwardChi_bits_id))
                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_5_valid)
                                                     : 
                                                    ((0xbU 
                                                      == (IData)(vlSelf->io_forwardChi_bits_id))
                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_5_valid)
                                                      : 
                                                     ((0xaU 
                                                       == (IData)(vlSelf->io_forwardChi_bits_id))
                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_5_valid)
                                                       : 
                                                      ((9U 
                                                        == (IData)(vlSelf->io_forwardChi_bits_id))
                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_5_valid)
                                                        : 
                                                       ((8U 
                                                         == (IData)(vlSelf->io_forwardChi_bits_id))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_5_valid)
                                                         : 
                                                        ((7U 
                                                          == (IData)(vlSelf->io_forwardChi_bits_id))
                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_5_valid)
                                                          : 
                                                         ((6U 
                                                           == (IData)(vlSelf->io_forwardChi_bits_id))
                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_5_valid)
                                                           : 
                                                          ((5U 
                                                            == (IData)(vlSelf->io_forwardChi_bits_id))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_5_valid)
                                                            : 
                                                           ((4U 
                                                             == (IData)(vlSelf->io_forwardChi_bits_id))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_5_valid)
                                                             : 
                                                            ((3U 
                                                              == (IData)(vlSelf->io_forwardChi_bits_id))
                                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_5_valid)
                                                              : 
                                                             ((2U 
                                                               == (IData)(vlSelf->io_forwardChi_bits_id))
                                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_5_valid)
                                                               : 
                                                              ((1U 
                                                                == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_5_valid)
                                                                : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_5_valid)))))))))))))))) 
                                             & ((0U 
                                                 == 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->io_forwardChi_bits_id))
                                                   ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_5_source)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->io_forwardChi_bits_id))
                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_5_source)
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(vlSelf->io_forwardChi_bits_id))
                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_5_source)
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->io_forwardChi_bits_id))
                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_5_source)
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlSelf->io_forwardChi_bits_id))
                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_5_source)
                                                       : 
                                                      ((0xaU 
                                                        == (IData)(vlSelf->io_forwardChi_bits_id))
                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_5_source)
                                                        : 
                                                       ((9U 
                                                         == (IData)(vlSelf->io_forwardChi_bits_id))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_5_source)
                                                         : 
                                                        ((8U 
                                                          == (IData)(vlSelf->io_forwardChi_bits_id))
                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_5_source)
                                                          : 
                                                         ((7U 
                                                           == (IData)(vlSelf->io_forwardChi_bits_id))
                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_5_source)
                                                           : 
                                                          ((6U 
                                                            == (IData)(vlSelf->io_forwardChi_bits_id))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_5_source)
                                                            : 
                                                           ((5U 
                                                             == (IData)(vlSelf->io_forwardChi_bits_id))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_5_source)
                                                             : 
                                                            ((4U 
                                                              == (IData)(vlSelf->io_forwardChi_bits_id))
                                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_5_source)
                                                              : 
                                                             ((3U 
                                                               == (IData)(vlSelf->io_forwardChi_bits_id))
                                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_5_source)
                                                               : 
                                                              ((2U 
                                                                == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_5_source)
                                                                : 
                                                               ((1U 
                                                                 == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                 ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_5_source)
                                                                 : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_5_source))))))))))))))))) 
                                                & (((0xfU 
                                                     == (IData)(vlSelf->io_forwardChi_bits_id))
                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_5_half)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->io_forwardChi_bits_id))
                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_5_half)
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->io_forwardChi_bits_id))
                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_5_half)
                                                       : 
                                                      ((0xcU 
                                                        == (IData)(vlSelf->io_forwardChi_bits_id))
                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_5_half)
                                                        : 
                                                       ((0xbU 
                                                         == (IData)(vlSelf->io_forwardChi_bits_id))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_5_half)
                                                         : 
                                                        ((0xaU 
                                                          == (IData)(vlSelf->io_forwardChi_bits_id))
                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_5_half)
                                                          : 
                                                         ((9U 
                                                           == (IData)(vlSelf->io_forwardChi_bits_id))
                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_5_half)
                                                           : 
                                                          ((8U 
                                                            == (IData)(vlSelf->io_forwardChi_bits_id))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_5_half)
                                                            : 
                                                           ((7U 
                                                             == (IData)(vlSelf->io_forwardChi_bits_id))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_5_half)
                                                             : 
                                                            ((6U 
                                                              == (IData)(vlSelf->io_forwardChi_bits_id))
                                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_5_half)
                                                              : 
                                                             ((5U 
                                                               == (IData)(vlSelf->io_forwardChi_bits_id))
                                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_5_half)
                                                               : 
                                                              ((4U 
                                                                == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_5_half)
                                                                : 
                                                               ((3U 
                                                                 == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                 ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_5_half)
                                                                 : 
                                                                ((2U 
                                                                  == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_5_half)
                                                                  : 
                                                                 ((1U 
                                                                   == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                   ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_5_half)
                                                                   : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_5_half)))))))))))))))) 
                                                   == (IData)(vlSelf->io_l2_rxDat_bits_dataID)))) 
                                            | ((((0xfU 
                                                  == (IData)(vlSelf->io_forwardChi_bits_id))
                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_6_valid)
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->io_forwardChi_bits_id))
                                                   ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_6_valid)
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->io_forwardChi_bits_id))
                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_6_valid)
                                                    : 
                                                   ((0xcU 
                                                     == (IData)(vlSelf->io_forwardChi_bits_id))
                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_6_valid)
                                                     : 
                                                    ((0xbU 
                                                      == (IData)(vlSelf->io_forwardChi_bits_id))
                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_6_valid)
                                                      : 
                                                     ((0xaU 
                                                       == (IData)(vlSelf->io_forwardChi_bits_id))
                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_6_valid)
                                                       : 
                                                      ((9U 
                                                        == (IData)(vlSelf->io_forwardChi_bits_id))
                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_6_valid)
                                                        : 
                                                       ((8U 
                                                         == (IData)(vlSelf->io_forwardChi_bits_id))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_6_valid)
                                                         : 
                                                        ((7U 
                                                          == (IData)(vlSelf->io_forwardChi_bits_id))
                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_6_valid)
                                                          : 
                                                         ((6U 
                                                           == (IData)(vlSelf->io_forwardChi_bits_id))
                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_6_valid)
                                                           : 
                                                          ((5U 
                                                            == (IData)(vlSelf->io_forwardChi_bits_id))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_6_valid)
                                                            : 
                                                           ((4U 
                                                             == (IData)(vlSelf->io_forwardChi_bits_id))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_6_valid)
                                                             : 
                                                            ((3U 
                                                              == (IData)(vlSelf->io_forwardChi_bits_id))
                                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_6_valid)
                                                              : 
                                                             ((2U 
                                                               == (IData)(vlSelf->io_forwardChi_bits_id))
                                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_6_valid)
                                                               : 
                                                              ((1U 
                                                                == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_6_valid)
                                                                : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_6_valid)))))))))))))))) 
                                                & ((0U 
                                                    == 
                                                    ((0xfU 
                                                      == (IData)(vlSelf->io_forwardChi_bits_id))
                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_6_source)
                                                      : 
                                                     ((0xeU 
                                                       == (IData)(vlSelf->io_forwardChi_bits_id))
                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_6_source)
                                                       : 
                                                      ((0xdU 
                                                        == (IData)(vlSelf->io_forwardChi_bits_id))
                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_6_source)
                                                        : 
                                                       ((0xcU 
                                                         == (IData)(vlSelf->io_forwardChi_bits_id))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_6_source)
                                                         : 
                                                        ((0xbU 
                                                          == (IData)(vlSelf->io_forwardChi_bits_id))
                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_6_source)
                                                          : 
                                                         ((0xaU 
                                                           == (IData)(vlSelf->io_forwardChi_bits_id))
                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_6_source)
                                                           : 
                                                          ((9U 
                                                            == (IData)(vlSelf->io_forwardChi_bits_id))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_6_source)
                                                            : 
                                                           ((8U 
                                                             == (IData)(vlSelf->io_forwardChi_bits_id))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_6_source)
                                                             : 
                                                            ((7U 
                                                              == (IData)(vlSelf->io_forwardChi_bits_id))
                                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_6_source)
                                                              : 
                                                             ((6U 
                                                               == (IData)(vlSelf->io_forwardChi_bits_id))
                                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_6_source)
                                                               : 
                                                              ((5U 
                                                                == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_6_source)
                                                                : 
                                                               ((4U 
                                                                 == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                 ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_6_source)
                                                                 : 
                                                                ((3U 
                                                                  == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_6_source)
                                                                  : 
                                                                 ((2U 
                                                                   == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                   ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_6_source)
                                                                   : 
                                                                  ((1U 
                                                                    == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_6_source)
                                                                    : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_6_source))))))))))))))))) 
                                                   & (((0xfU 
                                                        == (IData)(vlSelf->io_forwardChi_bits_id))
                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_6_half)
                                                        : 
                                                       ((0xeU 
                                                         == (IData)(vlSelf->io_forwardChi_bits_id))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_6_half)
                                                         : 
                                                        ((0xdU 
                                                          == (IData)(vlSelf->io_forwardChi_bits_id))
                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_6_half)
                                                          : 
                                                         ((0xcU 
                                                           == (IData)(vlSelf->io_forwardChi_bits_id))
                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_6_half)
                                                           : 
                                                          ((0xbU 
                                                            == (IData)(vlSelf->io_forwardChi_bits_id))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_6_half)
                                                            : 
                                                           ((0xaU 
                                                             == (IData)(vlSelf->io_forwardChi_bits_id))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_6_half)
                                                             : 
                                                            ((9U 
                                                              == (IData)(vlSelf->io_forwardChi_bits_id))
                                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_6_half)
                                                              : 
                                                             ((8U 
                                                               == (IData)(vlSelf->io_forwardChi_bits_id))
                                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_6_half)
                                                               : 
                                                              ((7U 
                                                                == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_6_half)
                                                                : 
                                                               ((6U 
                                                                 == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                 ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_6_half)
                                                                 : 
                                                                ((5U 
                                                                  == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_6_half)
                                                                  : 
                                                                 ((4U 
                                                                   == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                   ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_6_half)
                                                                   : 
                                                                  ((3U 
                                                                    == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_6_half)
                                                                    : 
                                                                   ((2U 
                                                                     == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_6_half)
                                                                     : 
                                                                    ((1U 
                                                                      == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_6_half)
                                                                      : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_6_half)))))))))))))))) 
                                                      == (IData)(vlSelf->io_l2_rxDat_bits_dataID)))) 
                                               | (((0xfU 
                                                    == (IData)(vlSelf->io_forwardChi_bits_id))
                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_7_valid)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->io_forwardChi_bits_id))
                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_7_valid)
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSelf->io_forwardChi_bits_id))
                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_7_valid)
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->io_forwardChi_bits_id))
                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_7_valid)
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlSelf->io_forwardChi_bits_id))
                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_7_valid)
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlSelf->io_forwardChi_bits_id))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_7_valid)
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlSelf->io_forwardChi_bits_id))
                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_7_valid)
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSelf->io_forwardChi_bits_id))
                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_7_valid)
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlSelf->io_forwardChi_bits_id))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_7_valid)
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlSelf->io_forwardChi_bits_id))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_7_valid)
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlSelf->io_forwardChi_bits_id))
                                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_7_valid)
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlSelf->io_forwardChi_bits_id))
                                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_7_valid)
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_7_valid)
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                 ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_7_valid)
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_7_valid)
                                                                  : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_7_valid)))))))))))))))) 
                                                  & ((0U 
                                                      == 
                                                      ((0xfU 
                                                        == (IData)(vlSelf->io_forwardChi_bits_id))
                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_7_source)
                                                        : 
                                                       ((0xeU 
                                                         == (IData)(vlSelf->io_forwardChi_bits_id))
                                                         ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_7_source)
                                                         : 
                                                        ((0xdU 
                                                          == (IData)(vlSelf->io_forwardChi_bits_id))
                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_7_source)
                                                          : 
                                                         ((0xcU 
                                                           == (IData)(vlSelf->io_forwardChi_bits_id))
                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_7_source)
                                                           : 
                                                          ((0xbU 
                                                            == (IData)(vlSelf->io_forwardChi_bits_id))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_7_source)
                                                            : 
                                                           ((0xaU 
                                                             == (IData)(vlSelf->io_forwardChi_bits_id))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_7_source)
                                                             : 
                                                            ((9U 
                                                              == (IData)(vlSelf->io_forwardChi_bits_id))
                                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_7_source)
                                                              : 
                                                             ((8U 
                                                               == (IData)(vlSelf->io_forwardChi_bits_id))
                                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_7_source)
                                                               : 
                                                              ((7U 
                                                                == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_7_source)
                                                                : 
                                                               ((6U 
                                                                 == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                 ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_7_source)
                                                                 : 
                                                                ((5U 
                                                                  == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_7_source)
                                                                  : 
                                                                 ((4U 
                                                                   == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                   ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_7_source)
                                                                   : 
                                                                  ((3U 
                                                                    == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_7_source)
                                                                    : 
                                                                   ((2U 
                                                                     == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_7_source)
                                                                     : 
                                                                    ((1U 
                                                                      == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_7_source)
                                                                      : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_7_source))))))))))))))))) 
                                                     & (((0xfU 
                                                          == (IData)(vlSelf->io_forwardChi_bits_id))
                                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_7_half)
                                                          : 
                                                         ((0xeU 
                                                           == (IData)(vlSelf->io_forwardChi_bits_id))
                                                           ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_7_half)
                                                           : 
                                                          ((0xdU 
                                                            == (IData)(vlSelf->io_forwardChi_bits_id))
                                                            ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_7_half)
                                                            : 
                                                           ((0xcU 
                                                             == (IData)(vlSelf->io_forwardChi_bits_id))
                                                             ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_7_half)
                                                             : 
                                                            ((0xbU 
                                                              == (IData)(vlSelf->io_forwardChi_bits_id))
                                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_7_half)
                                                              : 
                                                             ((0xaU 
                                                               == (IData)(vlSelf->io_forwardChi_bits_id))
                                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_clients_7_half)
                                                               : 
                                                              ((9U 
                                                                == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_clients_7_half)
                                                                : 
                                                               ((8U 
                                                                 == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                 ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_clients_7_half)
                                                                 : 
                                                                ((7U 
                                                                  == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_clients_7_half)
                                                                  : 
                                                                 ((6U 
                                                                   == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                   ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_clients_7_half)
                                                                   : 
                                                                  ((5U 
                                                                    == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                    ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_clients_7_half)
                                                                    : 
                                                                   ((4U 
                                                                     == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                     ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_clients_7_half)
                                                                     : 
                                                                    ((3U 
                                                                      == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_clients_7_half)
                                                                      : 
                                                                     ((2U 
                                                                       == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                       ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_clients_7_half)
                                                                       : 
                                                                      ((1U 
                                                                        == (IData)(vlSelf->io_forwardChi_bits_id))
                                                                        ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_clients_7_half)
                                                                        : (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_clients_7_half)))))))))))))))) 
                                                        == (IData)(vlSelf->io_l2_rxDat_bits_dataID)))))))))))));
    bufp->chgCData(oldp+3062,((0xffU & (IData)((vlSelf->io_store_req_bits_vaddr 
                                                >> 6U)))),8);
    bufp->chgCData(oldp+3063,((0xffU & (IData)((vlSelf->io_atomics_req_bits_vaddr 
                                                >> 6U)))),8);
    bufp->chgBit(oldp+3064,(((IData)(vlSelf->DCache__DOT__pipe__DOT___storeLeave_T) 
                             & ((IData)(vlSelf->DCache__DOT__pipe__DOT__missAccepted) 
                                | ((IData)(vlSelf->io_store_replay_resp_ready) 
                                   & (IData)(vlSelf->DCache__DOT__pipe_io_storeReplay_valid))))));
    bufp->chgBit(oldp+3065,((((IData)(vlSelf->DCache__DOT__pipe__DOT___storeLeave_T) 
                              & ((IData)(vlSelf->DCache__DOT__pipe__DOT__missAccepted) 
                                 | ((IData)(vlSelf->io_store_replay_resp_ready) 
                                    & (IData)(vlSelf->DCache__DOT__pipe_io_storeReplay_valid)))) 
                             | ((IData)(vlSelf->DCache__DOT__pipe__DOT__s2_atomic) 
                                & ((IData)(vlSelf->DCache__DOT__pipe_io_wbQuery_valid) 
                                   & ((IData)(vlSelf->DCache__DOT__pipe__DOT__missAccepted) 
                                      | ((IData)(vlSelf->DCache__DOT__pipe__DOT__s2Replay) 
                                         & (IData)(vlSelf->DCache__DOT__pipe__DOT___s3_done_T_38))))))));
    bufp->chgBit(oldp+3066,(((~ ((((IData)(vlSelf->DCache__DOT__pipe__DOT__s1_valid) 
                                   & ((IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_set) 
                                      == (0xffU & (IData)(
                                                          (vlSelf->io_atomics_req_bits_vaddr 
                                                           >> 6U))))) 
                                  | ((IData)(vlSelf->DCache__DOT__pipe__DOT__s2_valid) 
                                     & ((IData)(vlSelf->DCache__DOT__pipe__DOT__s2_hold_set) 
                                        == (0xffU & (IData)(
                                                            (vlSelf->io_atomics_req_bits_vaddr 
                                                             >> 6U)))))) 
                                 | ((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_valid) 
                                    & ((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_set) 
                                       == (0xffU & (IData)(
                                                           (vlSelf->io_atomics_req_bits_vaddr 
                                                            >> 6U))))))) 
                             & (IData)(vlSelf->DCache__DOT__pipe__DOT__portFree))));
    bufp->chgQData(oldp+3067,((vlSelf->io_l2_rxSnp_bits_addr 
                               << 3U)),48);
    bufp->chgQData(oldp+3069,((0xffffffffffc0ULL & 
                               (vlSelf->io_l2_rxSnp_bits_addr 
                                << 3U))),48);
    bufp->chgBit(oldp+3071,((((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_15_state)) 
                              & ((0xffffffffffc0ULL 
                                  & vlSelf->DCache__DOT__probe__DOT__entries_15_addr) 
                                 == (0xffffffffffc0ULL 
                                     & (vlSelf->io_l2_rxSnp_bits_addr 
                                        << 3U)))) | 
                             (((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_14_state)) 
                               & ((0xffffffffffc0ULL 
                                   & vlSelf->DCache__DOT__probe__DOT__entries_14_addr) 
                                  == (0xffffffffffc0ULL 
                                      & (vlSelf->io_l2_rxSnp_bits_addr 
                                         << 3U)))) 
                              | (((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_13_state)) 
                                  & ((0xffffffffffc0ULL 
                                      & vlSelf->DCache__DOT__probe__DOT__entries_13_addr) 
                                     == (0xffffffffffc0ULL 
                                         & (vlSelf->io_l2_rxSnp_bits_addr 
                                            << 3U)))) 
                                 | (((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_12_state)) 
                                     & ((0xffffffffffc0ULL 
                                         & vlSelf->DCache__DOT__probe__DOT__entries_12_addr) 
                                        == (0xffffffffffc0ULL 
                                            & (vlSelf->io_l2_rxSnp_bits_addr 
                                               << 3U)))) 
                                    | (((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_11_state)) 
                                        & ((0xffffffffffc0ULL 
                                            & vlSelf->DCache__DOT__probe__DOT__entries_11_addr) 
                                           == (0xffffffffffc0ULL 
                                               & (vlSelf->io_l2_rxSnp_bits_addr 
                                                  << 3U)))) 
                                       | (((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_10_state)) 
                                           & ((0xffffffffffc0ULL 
                                               & vlSelf->DCache__DOT__probe__DOT__entries_10_addr) 
                                              == (0xffffffffffc0ULL 
                                                  & (vlSelf->io_l2_rxSnp_bits_addr 
                                                     << 3U)))) 
                                          | (((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_9_state)) 
                                              & ((0xffffffffffc0ULL 
                                                  & vlSelf->DCache__DOT__probe__DOT__entries_9_addr) 
                                                 == 
                                                 (0xffffffffffc0ULL 
                                                  & (vlSelf->io_l2_rxSnp_bits_addr 
                                                     << 3U)))) 
                                             | (((0U 
                                                  != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_8_state)) 
                                                 & ((0xffffffffffc0ULL 
                                                     & vlSelf->DCache__DOT__probe__DOT__entries_8_addr) 
                                                    == 
                                                    (0xffffffffffc0ULL 
                                                     & (vlSelf->io_l2_rxSnp_bits_addr 
                                                        << 3U)))) 
                                                | (0U 
                                                   != (IData)(vlSelf->DCache__DOT__probe__DOT__clash_lo))))))))))));
}
