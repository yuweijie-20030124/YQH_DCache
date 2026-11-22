// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDCache__Syms.h"


VL_ATTR_COLD void VDCache___024root__trace_full_sub_3(VDCache___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VDCache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDCache___024root__trace_full_sub_3\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
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
    bufp->fullCData(oldp+9924,((0xffU & ((1U & (IData)(
                                                       (vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask 
                                                        >> 4U)))
                                          ? vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[1U]
                                          : vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[1U]))),8);
    bufp->fullCData(oldp+9925,((0xffU & ((1U & (IData)(
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
    bufp->fullCData(oldp+9926,((0xffU & ((1U & (IData)(
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
    bufp->fullCData(oldp+9927,((0xffU & ((1U & (IData)(
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
    bufp->fullCData(oldp+9928,((0xffU & ((1U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask))
                                          ? vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeData[0U]
                                          : vlSelf->DCache__DOT__pipe__DOT__s3_refill_data[0U]))),8);
    bufp->fullQData(oldp+9929,(vlSelf->DCache__DOT__pipe__DOT__refillLine_lo_lo_lo),64);
    __Vtemp_8[0U] = (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_lo_lo_lo);
    __Vtemp_8[1U] = (IData)((vlSelf->DCache__DOT__pipe__DOT__refillLine_lo_lo_lo 
                             >> 0x20U));
    __Vtemp_8[2U] = (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_11) 
                      << 0x18U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_10) 
                                    << 0x10U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_9) 
                                                  << 8U) 
                                                 | (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_8))));
    __Vtemp_8[3U] = (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_15) 
                      << 0x18U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_14) 
                                    << 0x10U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_13) 
                                                  << 8U) 
                                                 | (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_12))));
    bufp->fullWData(oldp+9931,(__Vtemp_8),128);
    __Vtemp_25[0U] = (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_lo_lo_lo);
    __Vtemp_25[1U] = (IData)((vlSelf->DCache__DOT__pipe__DOT__refillLine_lo_lo_lo 
                              >> 0x20U));
    __Vtemp_25[2U] = (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_11) 
                       << 0x18U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_10) 
                                     << 0x10U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_9) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_8))));
    __Vtemp_25[3U] = (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_15) 
                       << 0x18U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_14) 
                                     << 0x10U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_13) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_12))));
    __Vtemp_25[4U] = (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_lo_hi_lo);
    __Vtemp_25[5U] = (IData)((vlSelf->DCache__DOT__pipe__DOT__refillLine_lo_hi_lo 
                              >> 0x20U));
    __Vtemp_25[6U] = (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_27) 
                       << 0x18U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_26) 
                                     << 0x10U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_25) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_24))));
    __Vtemp_25[7U] = (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_31) 
                       << 0x18U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_30) 
                                     << 0x10U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_29) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_28))));
    bufp->fullWData(oldp+9935,(__Vtemp_25),256);
    __Vtemp_60[0U] = (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_lo_lo_lo);
    __Vtemp_60[1U] = (IData)((vlSelf->DCache__DOT__pipe__DOT__refillLine_lo_lo_lo 
                              >> 0x20U));
    __Vtemp_60[2U] = (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_11) 
                       << 0x18U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_10) 
                                     << 0x10U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_9) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_8))));
    __Vtemp_60[3U] = (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_15) 
                       << 0x18U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_14) 
                                     << 0x10U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_13) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_12))));
    __Vtemp_60[4U] = (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_lo_hi_lo);
    __Vtemp_60[5U] = (IData)((vlSelf->DCache__DOT__pipe__DOT__refillLine_lo_hi_lo 
                              >> 0x20U));
    __Vtemp_60[6U] = (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_27) 
                       << 0x18U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_26) 
                                     << 0x10U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_25) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_24))));
    __Vtemp_60[7U] = (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_31) 
                       << 0x18U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_30) 
                                     << 0x10U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_29) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_28))));
    __Vtemp_60[8U] = (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_hi_lo_lo);
    __Vtemp_60[9U] = (IData)((vlSelf->DCache__DOT__pipe__DOT__refillLine_hi_lo_lo 
                              >> 0x20U));
    __Vtemp_60[0xaU] = (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_43) 
                         << 0x18U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_42) 
                                       << 0x10U) | 
                                      (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_41) 
                                        << 8U) | (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_40))));
    __Vtemp_60[0xbU] = (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_47) 
                         << 0x18U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_46) 
                                       << 0x10U) | 
                                      (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_45) 
                                        << 8U) | (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_44))));
    __Vtemp_60[0xcU] = (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_hi_hi_lo);
    __Vtemp_60[0xdU] = (IData)((vlSelf->DCache__DOT__pipe__DOT__refillLine_hi_hi_lo 
                                >> 0x20U));
    __Vtemp_60[0xeU] = (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_59) 
                         << 0x18U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_58) 
                                       << 0x10U) | 
                                      (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_57) 
                                        << 8U) | (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_56))));
    __Vtemp_60[0xfU] = (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_63) 
                         << 0x18U) | (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_62) 
                                       << 0x10U) | 
                                      (((IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_61) 
                                        << 8U) | (IData)(vlSelf->DCache__DOT__pipe__DOT__refillLine_bytes_60))));
    bufp->fullWData(oldp+9943,(__Vtemp_60),512);
    bufp->fullQData(oldp+9959,(vlSelf->DCache__DOT__pipe__DOT__refillWords_7),64);
    bufp->fullQData(oldp+9961,(vlSelf->DCache__DOT__pipe__DOT__refillWords_5),64);
    bufp->fullQData(oldp+9963,(vlSelf->DCache__DOT__pipe__DOT__refillWords_3),64);
    bufp->fullQData(oldp+9965,(vlSelf->DCache__DOT__pipe__DOT__refillWords_1),64);
    bufp->fullQData(oldp+9967,(vlSelf->DCache__DOT__pipe__DOT__s3_word_7),64);
    bufp->fullQData(oldp+9969,(vlSelf->DCache__DOT__pipe__DOT__s3_word_6),64);
    bufp->fullQData(oldp+9971,(vlSelf->DCache__DOT__pipe__DOT__s3_word_5),64);
    bufp->fullQData(oldp+9973,(vlSelf->DCache__DOT__pipe__DOT__s3_word_4),64);
    bufp->fullQData(oldp+9975,(vlSelf->DCache__DOT__pipe__DOT__s3_word_3),64);
    bufp->fullQData(oldp+9977,(vlSelf->DCache__DOT__pipe__DOT__s3_word_2),64);
    bufp->fullQData(oldp+9979,(vlSelf->DCache__DOT__pipe__DOT__s3_word_1),64);
    bufp->fullQData(oldp+9981,(vlSelf->DCache__DOT__pipe__DOT__s3_word_0),64);
    bufp->fullQData(oldp+9983,(vlSelf->DCache__DOT__pipe__DOT__old1),64);
    __Vtemp_61[0U] = (IData)(vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs);
    __Vtemp_61[1U] = (IData)((vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs 
                              >> 0x20U));
    __Vtemp_61[2U] = (IData)(vlSelf->DCache__DOT__pipe__DOT__old1);
    __Vtemp_61[3U] = (IData)((vlSelf->DCache__DOT__pipe__DOT__old1 
                              >> 0x20U));
    bufp->fullWData(oldp+9985,(__Vtemp_61),128);
    bufp->fullQData(oldp+9989,(vlSelf->DCache__DOT__pipe__DOT__amoalu__DOT__wmask),64);
    bufp->fullBit(oldp+9991,((0U != ((((((IData)(vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs) 
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
    bufp->fullBit(oldp+9992,(vlSelf->DCache__DOT__pipe__DOT__casFail));
    bufp->fullBit(oldp+9993,(vlSelf->DCache__DOT__pipe__DOT__s3_sc));
    bufp->fullBit(oldp+9994,(((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hit) 
                              & ((2U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_coh)) 
                                 | (3U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_coh))))));
    bufp->fullBit(oldp+9995,(vlSelf->DCache__DOT__pipe__DOT__lineMatch));
    bufp->fullCData(oldp+9996,(vlSelf->DCache__DOT__pipe__DOT__lrsc_count),6);
    bufp->fullBit(oldp+9997,(vlSelf->DCache__DOT__pipe__DOT__scOk));
    bufp->fullBit(oldp+9998,(vlSelf->DCache__DOT__pipe__DOT__twoBanks3));
    bufp->fullCData(oldp+9999,((0xffU & (((IData)(1U) 
                                          << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)) 
                                         | ((IData)(vlSelf->DCache__DOT__pipe__DOT__twoBanks3)
                                             ? ((IData)(1U) 
                                                << 
                                                (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx))))
                                             : 0U)))),8);
    bufp->fullCData(oldp+10000,(vlSelf->DCache__DOT__pipe__DOT__atomicBanks),8);
    bufp->fullBit(oldp+10001,(vlSelf->DCache__DOT__pipe__DOT__doAtomicData));
    bufp->fullBit(oldp+10002,(((IData)(vlSelf->DCache__DOT__pipe__DOT__doAtomicData) 
                               & (3U != (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_coh)))));
    bufp->fullBit(oldp+10003,(vlSelf->DCache__DOT__pipe__DOT__doMeta));
    bufp->fullBit(oldp+10004,(vlSelf->DCache__DOT__pipe__DOT__sent_1));
    bufp->fullBit(oldp+10005,(vlSelf->DCache__DOT__pipe__DOT__doData));
    bufp->fullBit(oldp+10006,(vlSelf->DCache__DOT__pipe__DOT__sent_2));
    bufp->fullBit(oldp+10007,(vlSelf->DCache__DOT__pipe__DOT__s3_replace));
    bufp->fullBit(oldp+10008,(vlSelf->DCache__DOT__pipe__DOT__victimWb));
    bufp->fullBit(oldp+10009,(vlSelf->DCache__DOT__pipe__DOT__s3_refill_passDirty));
    bufp->fullBit(oldp+10010,(((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_refill_passDirty) 
                               | (0U != vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask))));
    bufp->fullBit(oldp+10011,(vlSelf->DCache__DOT__pipe__DOT__sharedDirty));
    bufp->fullBit(oldp+10012,(vlSelf->DCache__DOT__pipe__DOT__refillWb));
    bufp->fullBit(oldp+10013,(vlSelf->DCache__DOT__pipe__DOT__doWb1));
    bufp->fullBit(oldp+10014,(vlSelf->DCache__DOT__pipe__DOT__sent_3));
    bufp->fullBit(oldp+10015,(vlSelf->DCache__DOT__pipe__DOT__wb1Fire));
    bufp->fullBit(oldp+10016,(vlSelf->DCache__DOT__pipe__DOT__doWb2));
    bufp->fullBit(oldp+10017,(vlSelf->DCache__DOT__pipe__DOT__sent_7));
    bufp->fullBit(oldp+10018,(vlSelf->DCache__DOT__pipe__DOT__wb2Fire));
    bufp->fullBit(oldp+10019,(vlSelf->DCache__DOT__pipe__DOT__sent_4));
    bufp->fullBit(oldp+10020,(vlSelf->DCache__DOT__pipe__DOT__doAtomicResp));
    bufp->fullBit(oldp+10021,(vlSelf->DCache__DOT__pipe__DOT__sent_5));
    bufp->fullBit(oldp+10022,(vlSelf->DCache__DOT__pipe__DOT__sent_6));
    bufp->fullBit(oldp+10023,(((IData)(vlSelf->DCache__DOT__pipe_io_pendingSnoop_valid) 
                               & (IData)(vlSelf->DCache__DOT__pipe__DOT___refillOp_T_2))));
    bufp->fullBit(oldp+10024,(((~ (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_refill_retUnique)) 
                               & (IData)(vlSelf->DCache__DOT__pipe__DOT__doInstall))));
    bufp->fullBit(oldp+10025,(vlSelf->DCache__DOT__pipe__DOT__doS3Replay));
    bufp->fullBit(oldp+10026,(vlSelf->DCache__DOT__pipe__DOT__sent_8));
    bufp->fullBit(oldp+10027,(vlSelf->DCache__DOT__pipe__DOT__writesDone));
    bufp->fullBit(oldp+10028,(vlSelf->DCache__DOT__pipe__DOT__s3Replay));
    bufp->fullBit(oldp+10029,(vlSelf->DCache__DOT__pipe__DOT__upgradeFail));
    bufp->fullBit(oldp+10030,(vlSelf->DCache__DOT__pipe__DOT__isRefill1));
    bufp->fullBit(oldp+10031,(vlSelf->DCache__DOT__pipe__DOT__s1_first));
    bufp->fullQData(oldp+10032,(vlSelf->DCache__DOT__pipe__DOT__s1_tag_3),36);
    bufp->fullQData(oldp+10034,(vlSelf->DCache__DOT__pipe__DOT__tagNow_3),36);
    bufp->fullCData(oldp+10036,(vlSelf->DCache__DOT__pipe__DOT__s1_meta_3_coh),2);
    bufp->fullCData(oldp+10037,(vlSelf->DCache__DOT__pipe__DOT__metaNow_3_coh),2);
    bufp->fullQData(oldp+10038,(vlSelf->DCache__DOT__pipe__DOT__s1_tag_2),36);
    bufp->fullQData(oldp+10040,(vlSelf->DCache__DOT__pipe__DOT__tagNow_2),36);
    bufp->fullCData(oldp+10042,(vlSelf->DCache__DOT__pipe__DOT__s1_meta_2_coh),2);
    bufp->fullCData(oldp+10043,(vlSelf->DCache__DOT__pipe__DOT__metaNow_2_coh),2);
    bufp->fullQData(oldp+10044,(vlSelf->DCache__DOT__pipe__DOT__s1_tag_1),36);
    bufp->fullQData(oldp+10046,(vlSelf->DCache__DOT__pipe__DOT__tagNow_1),36);
    bufp->fullCData(oldp+10048,(vlSelf->DCache__DOT__pipe__DOT__s1_meta_1_coh),2);
    bufp->fullCData(oldp+10049,(vlSelf->DCache__DOT__pipe__DOT__metaNow_1_coh),2);
    bufp->fullQData(oldp+10050,(vlSelf->DCache__DOT__pipe__DOT__s1_tag_0),36);
    bufp->fullQData(oldp+10052,(vlSelf->DCache__DOT__pipe__DOT__tagNow_0),36);
    bufp->fullCData(oldp+10054,(vlSelf->DCache__DOT__pipe__DOT__s1_meta_0_coh),2);
    bufp->fullCData(oldp+10055,(vlSelf->DCache__DOT__pipe__DOT__metaNow_0_coh),2);
    bufp->fullCData(oldp+10056,(vlSelf->DCache__DOT__pipe__DOT__hitOh),4);
    bufp->fullBit(oldp+10057,((0U != (IData)(vlSelf->DCache__DOT__pipe__DOT__hitOh))));
    bufp->fullBit(oldp+10058,((0U != (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_replaceWay))));
    bufp->fullCData(oldp+10059,(vlSelf->DCache__DOT__pipe__DOT__emptyOh),4);
    bufp->fullCData(oldp+10060,(((0U != (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_replaceWay))
                                  ? (3U & ((IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_replaceWay) 
                                           >> 2U)) : 0U)),2);
    bufp->fullCData(oldp+10061,(((0U != (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_replaceWay))
                                  ? (3U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_replaceWay))
                                  : 1U)),2);
    bufp->fullCData(oldp+10062,(vlSelf->DCache__DOT__pipe__DOT__specWay),2);
    bufp->fullBit(oldp+10063,((0xfU & ((0U != (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_replaceWay)) 
                                       & ((IData)(vlSelf->DCache__DOT__pipe__DOT__emptyOh) 
                                          >> (IData)(vlSelf->DCache__DOT__pipe__DOT__specWay))))));
    bufp->fullBit(oldp+10064,(vlSelf->DCache__DOT__pipe__DOT__useSpecified));
    bufp->fullBit(oldp+10065,(vlSelf->DCache__DOT__pipe__DOT__useEmpty));
    bufp->fullBit(oldp+10066,(vlSelf->DCache__DOT__pipe__DOT__needSearch));
    bufp->fullBit(oldp+10067,(vlSelf->DCache__DOT__pipe__DOT__occupyStall));
    bufp->fullBit(oldp+10068,(vlSelf->DCache__DOT__pipe__DOT__blocked));
    bufp->fullBit(oldp+10069,(vlSelf->DCache__DOT__pipe__DOT__s1_pick_stall));
    bufp->fullBit(oldp+10070,(vlSelf->DCache__DOT__pipe__DOT__isStore1));
    bufp->fullCData(oldp+10071,(vlSelf->DCache__DOT__pipe__DOT__hitMeta_coh),2);
    bufp->fullBit(oldp+10072,(vlSelf->DCache__DOT__pipe__DOT__hitWrite));
    bufp->fullBit(oldp+10073,(((IData)(vlSelf->DCache__DOT__pipe__DOT__isStore1) 
                               & (0xffffffffffffffffULL 
                                  == vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask))));
    bufp->fullCData(oldp+10074,((0xffU & (IData)((vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask 
                                                  >> 0x38U)))),8);
    bufp->fullCData(oldp+10075,((0xffU & (IData)((vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask 
                                                  >> 0x30U)))),8);
    bufp->fullCData(oldp+10076,((0xffU & (IData)((vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask 
                                                  >> 0x28U)))),8);
    bufp->fullCData(oldp+10077,((0xffU & (IData)((vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask 
                                                  >> 0x20U)))),8);
    bufp->fullCData(oldp+10078,((0xffU & (IData)((vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask 
                                                  >> 0x18U)))),8);
    bufp->fullCData(oldp+10079,((0xffU & (IData)((vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask 
                                                  >> 0x10U)))),8);
    bufp->fullCData(oldp+10080,((0xffU & (IData)((vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask 
                                                  >> 8U)))),8);
    bufp->fullCData(oldp+10081,((0xffU & (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask))),8);
    bufp->fullBit(oldp+10082,(((IData)(vlSelf->DCache__DOT__pipe__DOT__isStore1) 
                               & ((IData)(vlSelf->DCache__DOT__pipe__DOT__hitWrite) 
                                  & ((~ ((IData)(vlSelf->DCache__DOT__pipe__DOT__isStore1) 
                                         & (0xffffffffffffffffULL 
                                            == vlSelf->DCache__DOT__pipe__DOT__s1_hold_storeMask))) 
                                     & (0U != (IData)(vlSelf->DCache__DOT__pipe__DOT___storeNeed1_T_35)))))));
    bufp->fullBit(oldp+10083,(vlSelf->DCache__DOT__pipe__DOT__isProbe1));
    bufp->fullBit(oldp+10084,(((IData)(vlSelf->DCache__DOT__pipe__DOT__isProbe1) 
                               & ((0U != (IData)(vlSelf->DCache__DOT__pipe__DOT__hitOh)) 
                                  & ((3U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_probeOp))
                                      ? (3U == (IData)(vlSelf->DCache__DOT__pipe__DOT__hitMeta_coh))
                                      : ((2U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_probeOp))
                                          ? (3U == (IData)(vlSelf->DCache__DOT__pipe__DOT__hitMeta_coh))
                                          : ((1U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_probeOp)) 
                                             & ((3U 
                                                 == (IData)(vlSelf->DCache__DOT__pipe__DOT__hitMeta_coh)) 
                                                | (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_needData)))))))));
    bufp->fullBit(oldp+10085,(vlSelf->DCache__DOT__pipe__DOT__isAtomic1));
    bufp->fullBit(oldp+10086,(((IData)(vlSelf->DCache__DOT__pipe__DOT__isAtomic1) 
                               & (6U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd)))));
    bufp->fullBit(oldp+10087,(((IData)(vlSelf->DCache__DOT__pipe__DOT__isAtomic1) 
                               & (7U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd)))));
    bufp->fullBit(oldp+10088,(((IData)(vlSelf->DCache__DOT__pipe__DOT__isAtomic1) 
                               & ((0x1aU == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd)) 
                                  | ((0x1bU == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd)) 
                                     | (0x18U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_cmd)))))));
    bufp->fullBit(oldp+10089,(((IData)(vlSelf->DCache__DOT__pipe__DOT__isAtomic1) 
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
    bufp->fullBit(oldp+10090,(((IData)(vlSelf->DCache__DOT__pipe__DOT__hitWrite) 
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
    bufp->fullCData(oldp+10091,(((IData)(vlSelf->DCache__DOT__pipe__DOT___occupyMask_T_2)
                                  ? (IData)(vlSelf->DCache__DOT__pipe_io_occupyWay)
                                  : 0U)),4);
    bufp->fullCData(oldp+10092,(vlSelf->DCache__DOT__pipe__DOT__skipVictim),4);
    bufp->fullCData(oldp+10093,(vlSelf->DCache__DOT__pipe__DOT__eligible),4);
    bufp->fullBit(oldp+10094,((0U != (IData)(vlSelf->DCache__DOT__pipe__DOT__eligible))));
    bufp->fullBit(oldp+10095,(vlSelf->DCache__DOT__pipe__DOT__replacing));
    bufp->fullBit(oldp+10096,(vlSelf->DCache__DOT__pipe__DOT__willReplace));
    bufp->fullCData(oldp+10097,(vlSelf->DCache__DOT__pipe__DOT__hitWay_hi),2);
    bufp->fullCData(oldp+10098,(vlSelf->DCache__DOT__pipe__DOT__hitWay_lo),2);
    bufp->fullCData(oldp+10099,(vlSelf->DCache__DOT__pipe__DOT__hitWay),2);
    bufp->fullCData(oldp+10100,(vlSelf->DCache__DOT__pipe__DOT__emptyWay),2);
    bufp->fullBit(oldp+10101,((0xfU & ((0U != (IData)(vlSelf->DCache__DOT__pipe__DOT__eligible)) 
                                       & ((IData)(vlSelf->DCache__DOT__pipe__DOT__eligible) 
                                          >> (IData)(vlSelf->DCache__DOT__pipe__DOT__plru_io_victim))))));
    bufp->fullCData(oldp+10102,(vlSelf->DCache__DOT__pipe__DOT__victimWay),2);
    bufp->fullCData(oldp+10103,(vlSelf->DCache__DOT__pipe__DOT__chosenWay1),2);
    bufp->fullBit(oldp+10104,(vlSelf->DCache__DOT__pipe__DOT__victimNeedData));
    bufp->fullBit(oldp+10105,(vlSelf->DCache__DOT__pipe__DOT__s1_need_data));
    bufp->fullBit(oldp+10106,((1U & ((~ (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_need_data)) 
                                     | (0U == (IData)(vlSelf->DCache__DOT__data__DOT___io_line_ready_T))))));
    bufp->fullCData(oldp+10107,(vlSelf->DCache__DOT__pipe__DOT__s2_way),2);
    bufp->fullQData(oldp+10108,(vlSelf->DCache__DOT__pipe__DOT__victimPaddr_hi),42);
    bufp->fullQData(oldp+10110,(((vlSelf->DCache__DOT__pipe__DOT___GEN_83 
                                  << 0xcU) | (QData)((IData)(
                                                             (0xfc0U 
                                                              & ((IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_set) 
                                                                 << 6U)))))),48);
    bufp->fullBit(oldp+10112,((1U & ((~ (IData)(vlSelf->DCache__DOT__pipe__DOT__isRefill1)) 
                                     | ((0U != (IData)(vlSelf->DCache__DOT__pipe__DOT__hitOh)) 
                                        | ((IData)(vlSelf->DCache__DOT__pipe__DOT__useSpecified) 
                                           | ((IData)(vlSelf->DCache__DOT__pipe__DOT__useEmpty) 
                                              | (IData)(vlSelf->DCache__DOT__pipe__DOT__willReplace))))))));
    bufp->fullBit(oldp+10113,(vlSelf->DCache__DOT__pipe__DOT__twoBanks1));
    bufp->fullCData(oldp+10114,((7U & ((IData)(1U) 
                                       + (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_wordIdx)))),3);
    bufp->fullCData(oldp+10115,((0xffU & (((IData)(1U) 
                                           << (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_wordIdx)) 
                                          | ((IData)(vlSelf->DCache__DOT__pipe__DOT__twoBanks1)
                                              ? ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_wordIdx))))
                                              : 0U)))),8);
    bufp->fullQData(oldp+10116,(((0x3ffffffff00ULL 
                                  & (vlSelf->DCache__DOT__pipe__DOT__s1_hold_addr 
                                     >> 6U)) | (QData)((IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_set)))),42);
    bufp->fullBit(oldp+10118,(vlSelf->DCache__DOT__pipe__DOT__s2_can_install));
    bufp->fullBit(oldp+10119,(vlSelf->DCache__DOT__pipe__DOT__s2_replace));
    bufp->fullBit(oldp+10120,(vlSelf->DCache__DOT__pipe__DOT__s2_replace_dirty));
    bufp->fullQData(oldp+10121,(vlSelf->DCache__DOT__pipe__DOT__s2_replace_addr),48);
    bufp->fullQData(oldp+10123,(vlSelf->DCache__DOT__pipe__DOT__s2_line_0_0),64);
    bufp->fullQData(oldp+10125,(vlSelf->DCache__DOT__pipe__DOT__s2_line_0_1),64);
    bufp->fullQData(oldp+10127,(vlSelf->DCache__DOT__pipe__DOT__s2_line_0_2),64);
    bufp->fullQData(oldp+10129,(vlSelf->DCache__DOT__pipe__DOT__s2_line_0_3),64);
    bufp->fullQData(oldp+10131,(vlSelf->DCache__DOT__pipe__DOT__s2_line_1_0),64);
    bufp->fullQData(oldp+10133,(vlSelf->DCache__DOT__pipe__DOT__s2_line_1_1),64);
    bufp->fullQData(oldp+10135,(vlSelf->DCache__DOT__pipe__DOT__s2_line_1_2),64);
    bufp->fullQData(oldp+10137,(vlSelf->DCache__DOT__pipe__DOT__s2_line_1_3),64);
    bufp->fullQData(oldp+10139,(vlSelf->DCache__DOT__pipe__DOT__s2_line_2_0),64);
    bufp->fullQData(oldp+10141,(vlSelf->DCache__DOT__pipe__DOT__s2_line_2_1),64);
    bufp->fullQData(oldp+10143,(vlSelf->DCache__DOT__pipe__DOT__s2_line_2_2),64);
    bufp->fullQData(oldp+10145,(vlSelf->DCache__DOT__pipe__DOT__s2_line_2_3),64);
    bufp->fullQData(oldp+10147,(vlSelf->DCache__DOT__pipe__DOT__s2_line_3_0),64);
    bufp->fullQData(oldp+10149,(vlSelf->DCache__DOT__pipe__DOT__s2_line_3_1),64);
    bufp->fullQData(oldp+10151,(vlSelf->DCache__DOT__pipe__DOT__s2_line_3_2),64);
    bufp->fullQData(oldp+10153,(vlSelf->DCache__DOT__pipe__DOT__s2_line_3_3),64);
    bufp->fullQData(oldp+10155,(vlSelf->DCache__DOT__pipe__DOT__s2_line_4_0),64);
    bufp->fullQData(oldp+10157,(vlSelf->DCache__DOT__pipe__DOT__s2_line_4_1),64);
    bufp->fullQData(oldp+10159,(vlSelf->DCache__DOT__pipe__DOT__s2_line_4_2),64);
    bufp->fullQData(oldp+10161,(vlSelf->DCache__DOT__pipe__DOT__s2_line_4_3),64);
    bufp->fullQData(oldp+10163,(vlSelf->DCache__DOT__pipe__DOT__s2_line_5_0),64);
    bufp->fullQData(oldp+10165,(vlSelf->DCache__DOT__pipe__DOT__s2_line_5_1),64);
    bufp->fullQData(oldp+10167,(vlSelf->DCache__DOT__pipe__DOT__s2_line_5_2),64);
    bufp->fullQData(oldp+10169,(vlSelf->DCache__DOT__pipe__DOT__s2_line_5_3),64);
    bufp->fullQData(oldp+10171,(vlSelf->DCache__DOT__pipe__DOT__s2_line_6_0),64);
    bufp->fullQData(oldp+10173,(vlSelf->DCache__DOT__pipe__DOT__s2_line_6_1),64);
    bufp->fullQData(oldp+10175,(vlSelf->DCache__DOT__pipe__DOT__s2_line_6_2),64);
    bufp->fullQData(oldp+10177,(vlSelf->DCache__DOT__pipe__DOT__s2_line_6_3),64);
    bufp->fullQData(oldp+10179,(vlSelf->DCache__DOT__pipe__DOT__s2_line_7_0),64);
    bufp->fullQData(oldp+10181,(vlSelf->DCache__DOT__pipe__DOT__s2_line_7_1),64);
    bufp->fullQData(oldp+10183,(vlSelf->DCache__DOT__pipe__DOT__s2_line_7_2),64);
    bufp->fullQData(oldp+10185,(vlSelf->DCache__DOT__pipe__DOT__s2_line_7_3),64);
    bufp->fullQData(oldp+10187,(((IData)(vlSelf->DCache__DOT__data__DOT__io_lineResp_valid_REG)
                                  ? vlSelf->DCache__DOT__data__DOT__dataBank_0_io_r_data_0
                                  : vlSelf->DCache__DOT__pipe__DOT__s2_line_0_0)),64);
    bufp->fullQData(oldp+10189,(((IData)(vlSelf->DCache__DOT__data__DOT__io_lineResp_valid_REG)
                                  ? vlSelf->DCache__DOT__data__DOT__dataBank_0_io_r_data_1
                                  : vlSelf->DCache__DOT__pipe__DOT__s2_line_0_1)),64);
    bufp->fullQData(oldp+10191,(((IData)(vlSelf->DCache__DOT__data__DOT__io_lineResp_valid_REG)
                                  ? vlSelf->DCache__DOT__data__DOT__dataBank_1_io_r_data_0
                                  : vlSelf->DCache__DOT__pipe__DOT__s2_line_1_0)),64);
    bufp->fullQData(oldp+10193,(((IData)(vlSelf->DCache__DOT__data__DOT__io_lineResp_valid_REG)
                                  ? vlSelf->DCache__DOT__data__DOT__dataBank_1_io_r_data_1
                                  : vlSelf->DCache__DOT__pipe__DOT__s2_line_1_1)),64);
    bufp->fullQData(oldp+10195,(((IData)(vlSelf->DCache__DOT__data__DOT__io_lineResp_valid_REG)
                                  ? vlSelf->DCache__DOT__data__DOT__dataBank_2_io_r_data_0
                                  : vlSelf->DCache__DOT__pipe__DOT__s2_line_2_0)),64);
    bufp->fullQData(oldp+10197,(((IData)(vlSelf->DCache__DOT__data__DOT__io_lineResp_valid_REG)
                                  ? vlSelf->DCache__DOT__data__DOT__dataBank_2_io_r_data_1
                                  : vlSelf->DCache__DOT__pipe__DOT__s2_line_2_1)),64);
    bufp->fullQData(oldp+10199,(((IData)(vlSelf->DCache__DOT__data__DOT__io_lineResp_valid_REG)
                                  ? vlSelf->DCache__DOT__data__DOT__dataBank_3_io_r_data_0
                                  : vlSelf->DCache__DOT__pipe__DOT__s2_line_3_0)),64);
    bufp->fullQData(oldp+10201,(((IData)(vlSelf->DCache__DOT__data__DOT__io_lineResp_valid_REG)
                                  ? vlSelf->DCache__DOT__data__DOT__dataBank_3_io_r_data_1
                                  : vlSelf->DCache__DOT__pipe__DOT__s2_line_3_1)),64);
    bufp->fullQData(oldp+10203,(((IData)(vlSelf->DCache__DOT__data__DOT__io_lineResp_valid_REG)
                                  ? vlSelf->DCache__DOT__data__DOT__dataBank_4_io_r_data_0
                                  : vlSelf->DCache__DOT__pipe__DOT__s2_line_4_0)),64);
    bufp->fullQData(oldp+10205,(((IData)(vlSelf->DCache__DOT__data__DOT__io_lineResp_valid_REG)
                                  ? vlSelf->DCache__DOT__data__DOT__dataBank_4_io_r_data_1
                                  : vlSelf->DCache__DOT__pipe__DOT__s2_line_4_1)),64);
    bufp->fullQData(oldp+10207,(((IData)(vlSelf->DCache__DOT__data__DOT__io_lineResp_valid_REG)
                                  ? vlSelf->DCache__DOT__data__DOT__dataBank_5_io_r_data_0
                                  : vlSelf->DCache__DOT__pipe__DOT__s2_line_5_0)),64);
    bufp->fullQData(oldp+10209,(((IData)(vlSelf->DCache__DOT__data__DOT__io_lineResp_valid_REG)
                                  ? vlSelf->DCache__DOT__data__DOT__dataBank_5_io_r_data_1
                                  : vlSelf->DCache__DOT__pipe__DOT__s2_line_5_1)),64);
    bufp->fullQData(oldp+10211,(((IData)(vlSelf->DCache__DOT__data__DOT__io_lineResp_valid_REG)
                                  ? vlSelf->DCache__DOT__data__DOT__dataBank_6_io_r_data_0
                                  : vlSelf->DCache__DOT__pipe__DOT__s2_line_6_0)),64);
    bufp->fullQData(oldp+10213,(((IData)(vlSelf->DCache__DOT__data__DOT__io_lineResp_valid_REG)
                                  ? vlSelf->DCache__DOT__data__DOT__dataBank_6_io_r_data_1
                                  : vlSelf->DCache__DOT__pipe__DOT__s2_line_6_1)),64);
    bufp->fullQData(oldp+10215,(((IData)(vlSelf->DCache__DOT__data__DOT__io_lineResp_valid_REG)
                                  ? vlSelf->DCache__DOT__data__DOT__dataBank_7_io_r_data_0
                                  : vlSelf->DCache__DOT__pipe__DOT__s2_line_7_0)),64);
    bufp->fullQData(oldp+10217,(((IData)(vlSelf->DCache__DOT__data__DOT__io_lineResp_valid_REG)
                                  ? vlSelf->DCache__DOT__data__DOT__dataBank_7_io_r_data_1
                                  : vlSelf->DCache__DOT__pipe__DOT__s2_line_7_1)),64);
    bufp->fullBit(oldp+10219,(vlSelf->DCache__DOT__pipe__DOT__s3_replace_dirty));
    bufp->fullQData(oldp+10220,(vlSelf->DCache__DOT__pipe__DOT__s3_replace_addr),48);
    bufp->fullBit(oldp+10222,(((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_atomic) 
                               & (6U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd)))));
    bufp->fullBit(oldp+10223,(vlSelf->DCache__DOT__pipe__DOT__probeNeedWb));
    bufp->fullCData(oldp+10224,(((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_refill_retUnique)
                                  ? ((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_refill_passDirty)
                                      ? 3U : 2U) : 1U)),2);
    bufp->fullCData(oldp+10225,(vlSelf->DCache__DOT__pipe__DOT__refillCoh),2);
    bufp->fullBit(oldp+10226,(vlSelf->DCache__DOT__pipe__DOT__refillMutate));
    bufp->fullBit(oldp+10227,(((IData)(vlSelf->DCache__DOT__pipe__DOT__doInstall) 
                               & (0U != vlSelf->DCache__DOT__pipe__DOT__s3_refill_storeMask))));
    bufp->fullCData(oldp+10228,(vlSelf->DCache__DOT__pipe__DOT__installCoh),2);
    bufp->fullQData(oldp+10229,((((QData)((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0U])))),64);
    bufp->fullBit(oldp+10231,((0xffU == (0xffU & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask)))));
    bufp->fullCData(oldp+10232,((0xffU & ((1U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask))
                                           ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0U]
                                           : (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_word_0)))),8);
    bufp->fullCData(oldp+10233,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 1U)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0U] 
                                                 >> 8U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_0 
                                                      >> 8U))))),8);
    bufp->fullCData(oldp+10234,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 2U)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0U] 
                                                 >> 0x10U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_0 
                                                      >> 0x10U))))),8);
    bufp->fullCData(oldp+10235,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 3U)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0U] 
                                                 >> 0x18U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_0 
                                                      >> 0x18U))))),8);
    bufp->fullCData(oldp+10236,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 4U)))
                                           ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[1U]
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_0 
                                                      >> 0x20U))))),8);
    bufp->fullCData(oldp+10237,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 5U)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[1U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[1U] 
                                                 >> 8U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_0 
                                                      >> 0x28U))))),8);
    bufp->fullCData(oldp+10238,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 6U)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[1U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[1U] 
                                                 >> 0x10U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_0 
                                                      >> 0x30U))))),8);
    bufp->fullCData(oldp+10239,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 7U)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[1U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[1U] 
                                                 >> 0x18U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_0 
                                                      >> 0x38U))))),8);
    bufp->fullQData(oldp+10240,(((0xffU == (0xffU & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask)))
                                  ? (((QData)((IData)(
                                                      vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0U])))
                                  : vlSelf->DCache__DOT__pipe__DOT___storeWords_0_T_1)),64);
    bufp->fullQData(oldp+10242,((((QData)((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[2U])))),64);
    bufp->fullBit(oldp+10244,((0xffU == (0xffU & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 8U))))));
    bufp->fullCData(oldp+10245,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 8U)))
                                           ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[2U]
                                           : (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_word_1)))),8);
    bufp->fullCData(oldp+10246,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 9U)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[2U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[2U] 
                                                 >> 8U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_1 
                                                      >> 8U))))),8);
    bufp->fullCData(oldp+10247,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0xaU)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[2U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[2U] 
                                                 >> 0x10U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_1 
                                                      >> 0x10U))))),8);
    bufp->fullCData(oldp+10248,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0xbU)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[2U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[2U] 
                                                 >> 0x18U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_1 
                                                      >> 0x18U))))),8);
    bufp->fullCData(oldp+10249,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0xcU)))
                                           ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[3U]
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_1 
                                                      >> 0x20U))))),8);
    bufp->fullCData(oldp+10250,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0xdU)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[3U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[3U] 
                                                 >> 8U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_1 
                                                      >> 0x28U))))),8);
    bufp->fullCData(oldp+10251,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0xeU)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[3U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[3U] 
                                                 >> 0x10U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_1 
                                                      >> 0x30U))))),8);
    bufp->fullCData(oldp+10252,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0xfU)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[3U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[3U] 
                                                 >> 0x18U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_1 
                                                      >> 0x38U))))),8);
    bufp->fullQData(oldp+10253,(((0xffU == (0xffU & (IData)(
                                                            (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                             >> 8U))))
                                  ? (((QData)((IData)(
                                                      vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[2U])))
                                  : vlSelf->DCache__DOT__pipe__DOT___storeWords_1_T_1)),64);
    bufp->fullQData(oldp+10255,((((QData)((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[5U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[4U])))),64);
    bufp->fullBit(oldp+10257,((0xffU == (0xffU & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x10U))))));
    bufp->fullCData(oldp+10258,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x10U)))
                                           ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[4U]
                                           : (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_word_2)))),8);
    bufp->fullCData(oldp+10259,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x11U)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[4U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[4U] 
                                                 >> 8U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_2 
                                                      >> 8U))))),8);
    bufp->fullCData(oldp+10260,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x12U)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[4U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[4U] 
                                                 >> 0x10U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_2 
                                                      >> 0x10U))))),8);
    bufp->fullCData(oldp+10261,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x13U)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[4U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[4U] 
                                                 >> 0x18U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_2 
                                                      >> 0x18U))))),8);
    bufp->fullCData(oldp+10262,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x14U)))
                                           ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[5U]
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_2 
                                                      >> 0x20U))))),8);
    bufp->fullCData(oldp+10263,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x15U)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[5U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[5U] 
                                                 >> 8U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_2 
                                                      >> 0x28U))))),8);
    bufp->fullCData(oldp+10264,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x16U)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[5U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[5U] 
                                                 >> 0x10U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_2 
                                                      >> 0x30U))))),8);
    bufp->fullCData(oldp+10265,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x17U)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[5U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[5U] 
                                                 >> 0x18U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_2 
                                                      >> 0x38U))))),8);
    bufp->fullQData(oldp+10266,(((0xffU == (0xffU & (IData)(
                                                            (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                             >> 0x10U))))
                                  ? (((QData)((IData)(
                                                      vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[4U])))
                                  : vlSelf->DCache__DOT__pipe__DOT___storeWords_2_T_1)),64);
    bufp->fullQData(oldp+10268,((((QData)((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[7U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[6U])))),64);
    bufp->fullBit(oldp+10270,((0xffU == (0xffU & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x18U))))));
    bufp->fullCData(oldp+10271,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x18U)))
                                           ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[6U]
                                           : (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_word_3)))),8);
    bufp->fullCData(oldp+10272,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x19U)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[6U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[6U] 
                                                 >> 8U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_3 
                                                      >> 8U))))),8);
    bufp->fullCData(oldp+10273,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x1aU)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[6U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[6U] 
                                                 >> 0x10U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_3 
                                                      >> 0x10U))))),8);
    bufp->fullCData(oldp+10274,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x1bU)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[6U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[6U] 
                                                 >> 0x18U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_3 
                                                      >> 0x18U))))),8);
    bufp->fullCData(oldp+10275,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x1cU)))
                                           ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[7U]
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_3 
                                                      >> 0x20U))))),8);
    bufp->fullCData(oldp+10276,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x1dU)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[7U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[7U] 
                                                 >> 8U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_3 
                                                      >> 0x28U))))),8);
    bufp->fullCData(oldp+10277,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x1eU)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[7U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[7U] 
                                                 >> 0x10U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_3 
                                                      >> 0x30U))))),8);
    bufp->fullCData(oldp+10278,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x1fU)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[7U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[7U] 
                                                 >> 0x18U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_3 
                                                      >> 0x38U))))),8);
    bufp->fullQData(oldp+10279,(((0xffU == (0xffU & (IData)(
                                                            (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                             >> 0x18U))))
                                  ? (((QData)((IData)(
                                                      vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[7U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[6U])))
                                  : vlSelf->DCache__DOT__pipe__DOT___storeWords_3_T_1)),64);
    bufp->fullQData(oldp+10281,((((QData)((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[9U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[8U])))),64);
    bufp->fullBit(oldp+10283,((0xffU == (0xffU & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x20U))))));
    bufp->fullCData(oldp+10284,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x20U)))
                                           ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[8U]
                                           : (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_word_4)))),8);
    bufp->fullCData(oldp+10285,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x21U)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[8U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[8U] 
                                                 >> 8U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_4 
                                                      >> 8U))))),8);
    bufp->fullCData(oldp+10286,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x22U)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[8U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[8U] 
                                                 >> 0x10U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_4 
                                                      >> 0x10U))))),8);
    bufp->fullCData(oldp+10287,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x23U)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[8U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[8U] 
                                                 >> 0x18U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_4 
                                                      >> 0x18U))))),8);
    bufp->fullCData(oldp+10288,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x24U)))
                                           ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[9U]
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_4 
                                                      >> 0x20U))))),8);
    bufp->fullCData(oldp+10289,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x25U)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[9U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[9U] 
                                                 >> 8U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_4 
                                                      >> 0x28U))))),8);
    bufp->fullCData(oldp+10290,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x26U)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[9U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[9U] 
                                                 >> 0x10U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_4 
                                                      >> 0x30U))))),8);
    bufp->fullCData(oldp+10291,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x27U)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[9U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[9U] 
                                                 >> 0x18U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_4 
                                                      >> 0x38U))))),8);
    bufp->fullQData(oldp+10292,(((0xffU == (0xffU & (IData)(
                                                            (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                             >> 0x20U))))
                                  ? (((QData)((IData)(
                                                      vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[9U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[8U])))
                                  : vlSelf->DCache__DOT__pipe__DOT___storeWords_4_T_1)),64);
    bufp->fullQData(oldp+10294,((((QData)((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xbU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xaU])))),64);
    bufp->fullBit(oldp+10296,((0xffU == (0xffU & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x28U))))));
    bufp->fullCData(oldp+10297,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x28U)))
                                           ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xaU]
                                           : (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_word_5)))),8);
    bufp->fullCData(oldp+10298,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x29U)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xaU] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xaU] 
                                                 >> 8U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_5 
                                                      >> 8U))))),8);
    bufp->fullCData(oldp+10299,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x2aU)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xaU] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xaU] 
                                                 >> 0x10U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_5 
                                                      >> 0x10U))))),8);
    bufp->fullCData(oldp+10300,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x2bU)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xaU] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xaU] 
                                                 >> 0x18U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_5 
                                                      >> 0x18U))))),8);
    bufp->fullCData(oldp+10301,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x2cU)))
                                           ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xbU]
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_5 
                                                      >> 0x20U))))),8);
    bufp->fullCData(oldp+10302,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x2dU)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xbU] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xbU] 
                                                 >> 8U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_5 
                                                      >> 0x28U))))),8);
    bufp->fullCData(oldp+10303,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x2eU)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xbU] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xbU] 
                                                 >> 0x10U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_5 
                                                      >> 0x30U))))),8);
    bufp->fullCData(oldp+10304,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x2fU)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xbU] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xbU] 
                                                 >> 0x18U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_5 
                                                      >> 0x38U))))),8);
    bufp->fullQData(oldp+10305,(((0xffU == (0xffU & (IData)(
                                                            (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                             >> 0x28U))))
                                  ? (((QData)((IData)(
                                                      vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xbU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xaU])))
                                  : vlSelf->DCache__DOT__pipe__DOT___storeWords_5_T_1)),64);
    bufp->fullQData(oldp+10307,((((QData)((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xdU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xcU])))),64);
    bufp->fullBit(oldp+10309,((0xffU == (0xffU & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x30U))))));
    bufp->fullCData(oldp+10310,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x30U)))
                                           ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xcU]
                                           : (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_word_6)))),8);
    bufp->fullCData(oldp+10311,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x31U)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xcU] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xcU] 
                                                 >> 8U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_6 
                                                      >> 8U))))),8);
    bufp->fullCData(oldp+10312,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x32U)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xcU] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xcU] 
                                                 >> 0x10U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_6 
                                                      >> 0x10U))))),8);
    bufp->fullCData(oldp+10313,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x33U)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xcU] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xcU] 
                                                 >> 0x18U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_6 
                                                      >> 0x18U))))),8);
    bufp->fullCData(oldp+10314,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x34U)))
                                           ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xdU]
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_6 
                                                      >> 0x20U))))),8);
    bufp->fullCData(oldp+10315,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x35U)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xdU] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xdU] 
                                                 >> 8U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_6 
                                                      >> 0x28U))))),8);
    bufp->fullCData(oldp+10316,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x36U)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xdU] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xdU] 
                                                 >> 0x10U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_6 
                                                      >> 0x30U))))),8);
    bufp->fullCData(oldp+10317,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x37U)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xdU] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xdU] 
                                                 >> 0x18U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_6 
                                                      >> 0x38U))))),8);
    bufp->fullQData(oldp+10318,(((0xffU == (0xffU & (IData)(
                                                            (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                             >> 0x30U))))
                                  ? (((QData)((IData)(
                                                      vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xdU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xcU])))
                                  : vlSelf->DCache__DOT__pipe__DOT___storeWords_6_T_1)),64);
    bufp->fullQData(oldp+10320,((((QData)((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xfU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xeU])))),64);
    bufp->fullBit(oldp+10322,((0xffU == (0xffU & (IData)(
                                                         (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                          >> 0x38U))))));
    bufp->fullCData(oldp+10323,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x38U)))
                                           ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xeU]
                                           : (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_word_7)))),8);
    bufp->fullCData(oldp+10324,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x39U)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xeU] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xeU] 
                                                 >> 8U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_7 
                                                      >> 8U))))),8);
    bufp->fullCData(oldp+10325,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x3aU)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xeU] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xeU] 
                                                 >> 0x10U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_7 
                                                      >> 0x10U))))),8);
    bufp->fullCData(oldp+10326,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x3bU)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xeU] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xeU] 
                                                 >> 0x18U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_7 
                                                      >> 0x18U))))),8);
    bufp->fullCData(oldp+10327,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x3cU)))
                                           ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xfU]
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_7 
                                                      >> 0x20U))))),8);
    bufp->fullCData(oldp+10328,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x3dU)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xfU] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xfU] 
                                                 >> 8U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_7 
                                                      >> 0x28U))))),8);
    bufp->fullCData(oldp+10329,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x3eU)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xfU] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xfU] 
                                                 >> 0x10U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_7 
                                                      >> 0x30U))))),8);
    bufp->fullCData(oldp+10330,((0xffU & ((1U & (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                         >> 0x3fU)))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xfU] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xfU] 
                                                 >> 0x18U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__s3_word_7 
                                                      >> 0x38U))))),8);
    bufp->fullQData(oldp+10331,(((0xffU == (0xffU & (IData)(
                                                            (vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeMask 
                                                             >> 0x38U))))
                                  ? (((QData)((IData)(
                                                      vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xfU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->DCache__DOT__pipe__DOT__s3_hold_storeData[0xeU])))
                                  : vlSelf->DCache__DOT__pipe__DOT___storeWords_7_T_1)),64);
    bufp->fullCData(oldp+10333,((0xffU & ((1U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                           ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[0U]
                                           : (IData)(vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs)))),8);
    bufp->fullCData(oldp+10334,((0xffU & ((2U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[0U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[0U] 
                                                 >> 8U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs 
                                                      >> 8U))))),8);
    bufp->fullCData(oldp+10335,((0xffU & ((4U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[0U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[0U] 
                                                 >> 0x10U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs 
                                                      >> 0x10U))))),8);
    bufp->fullCData(oldp+10336,((0xffU & ((8U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[0U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[0U] 
                                                 >> 0x18U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs 
                                                      >> 0x18U))))),8);
    bufp->fullCData(oldp+10337,((0xffU & ((0x10U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                           ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[1U]
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs 
                                                      >> 0x20U))))),8);
    bufp->fullCData(oldp+10338,((0xffU & ((0x20U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[1U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[1U] 
                                                 >> 8U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs 
                                                      >> 0x28U))))),8);
    bufp->fullCData(oldp+10339,((0xffU & ((0x40U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[1U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[1U] 
                                                 >> 0x10U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs 
                                                      >> 0x30U))))),8);
    bufp->fullCData(oldp+10340,((0xffU & ((0x80U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[1U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[1U] 
                                                 >> 0x18U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs 
                                                      >> 0x38U))))),8);
    bufp->fullQData(oldp+10341,(vlSelf->DCache__DOT__pipe__DOT__atomicLow),64);
    bufp->fullCData(oldp+10343,((0xffU & ((0x100U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                           ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[2U]
                                           : (IData)(vlSelf->DCache__DOT__pipe__DOT__old1)))),8);
    bufp->fullCData(oldp+10344,((0xffU & ((0x200U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[2U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[2U] 
                                                 >> 8U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__old1 
                                                      >> 8U))))),8);
    bufp->fullCData(oldp+10345,((0xffU & ((0x400U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[2U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[2U] 
                                                 >> 0x10U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__old1 
                                                      >> 0x10U))))),8);
    bufp->fullCData(oldp+10346,((0xffU & ((0x800U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[2U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[2U] 
                                                 >> 0x18U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__old1 
                                                      >> 0x18U))))),8);
    bufp->fullCData(oldp+10347,((0xffU & ((0x1000U 
                                           & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                           ? vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[3U]
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__old1 
                                                      >> 0x20U))))),8);
    bufp->fullCData(oldp+10348,((0xffU & ((0x2000U 
                                           & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[3U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[3U] 
                                                 >> 8U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__old1 
                                                      >> 0x28U))))),8);
    bufp->fullCData(oldp+10349,((0xffU & ((0x4000U 
                                           & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[3U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[3U] 
                                                 >> 0x10U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__old1 
                                                      >> 0x30U))))),8);
    bufp->fullCData(oldp+10350,((0xffU & ((0x8000U 
                                           & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                           ? ((vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[3U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[3U] 
                                                 >> 0x18U))
                                           : (IData)(
                                                     (vlSelf->DCache__DOT__pipe__DOT__old1 
                                                      >> 0x38U))))),8);
    bufp->fullQData(oldp+10351,(vlSelf->DCache__DOT__pipe__DOT__atomicHigh),64);
    bufp->fullBit(oldp+10353,((0U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx))));
    bufp->fullBit(oldp+10354,((0U == (7U & ((IData)(1U) 
                                            + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx))))));
    bufp->fullBit(oldp+10355,(((0U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)) 
                               | ((0U == (7U & ((IData)(1U) 
                                                + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)))) 
                                  & (IData)(vlSelf->DCache__DOT__pipe__DOT__twoBanks3)))));
    bufp->fullQData(oldp+10356,(((IData)(vlSelf->DCache__DOT__pipe_io_pendingSnoop_valid)
                                  ? vlSelf->DCache__DOT__pipe__DOT__refillLine_lo_lo_lo
                                  : vlSelf->DCache__DOT__pipe__DOT__s3_word_0)),64);
    bufp->fullBit(oldp+10358,(vlSelf->DCache__DOT__pipe__DOT__atomicWords_useAlu));
    bufp->fullBit(oldp+10359,((((0U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)) 
                                | ((0U == (7U & ((IData)(1U) 
                                                 + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)))) 
                                   & (IData)(vlSelf->DCache__DOT__pipe__DOT__twoBanks3))) 
                               & ((~ (IData)(vlSelf->DCache__DOT__pipe__DOT__atomicWords_useAlu)) 
                                  & (IData)(vlSelf->DCache__DOT__pipe__DOT___atomicWords_useMerge_T_6)))));
    bufp->fullQData(oldp+10360,(vlSelf->DCache__DOT__pipe__DOT__atomicWords_0),64);
    bufp->fullBit(oldp+10362,((1U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx))));
    bufp->fullBit(oldp+10363,((1U == (7U & ((IData)(1U) 
                                            + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx))))));
    bufp->fullBit(oldp+10364,(((1U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)) 
                               | ((1U == (7U & ((IData)(1U) 
                                                + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)))) 
                                  & (IData)(vlSelf->DCache__DOT__pipe__DOT__twoBanks3)))));
    bufp->fullQData(oldp+10365,(((IData)(vlSelf->DCache__DOT__pipe_io_pendingSnoop_valid)
                                  ? vlSelf->DCache__DOT__pipe__DOT__refillWords_1
                                  : vlSelf->DCache__DOT__pipe__DOT__s3_word_1)),64);
    bufp->fullBit(oldp+10367,(vlSelf->DCache__DOT__pipe__DOT__atomicWords_useAlu_1));
    bufp->fullBit(oldp+10368,((((1U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)) 
                                | ((1U == (7U & ((IData)(1U) 
                                                 + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)))) 
                                   & (IData)(vlSelf->DCache__DOT__pipe__DOT__twoBanks3))) 
                               & ((~ (IData)(vlSelf->DCache__DOT__pipe__DOT__atomicWords_useAlu_1)) 
                                  & (IData)(vlSelf->DCache__DOT__pipe__DOT___atomicWords_useMerge_T_6)))));
    bufp->fullQData(oldp+10369,(vlSelf->DCache__DOT__pipe__DOT__atomicWords_1),64);
    bufp->fullBit(oldp+10371,((2U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx))));
    bufp->fullBit(oldp+10372,((2U == (7U & ((IData)(1U) 
                                            + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx))))));
    bufp->fullBit(oldp+10373,(((2U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)) 
                               | ((2U == (7U & ((IData)(1U) 
                                                + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)))) 
                                  & (IData)(vlSelf->DCache__DOT__pipe__DOT__twoBanks3)))));
    bufp->fullQData(oldp+10374,(((IData)(vlSelf->DCache__DOT__pipe_io_pendingSnoop_valid)
                                  ? vlSelf->DCache__DOT__pipe__DOT__refillLine_lo_hi_lo
                                  : vlSelf->DCache__DOT__pipe__DOT__s3_word_2)),64);
    bufp->fullBit(oldp+10376,(vlSelf->DCache__DOT__pipe__DOT__atomicWords_useAlu_2));
    bufp->fullBit(oldp+10377,((((2U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)) 
                                | ((2U == (7U & ((IData)(1U) 
                                                 + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)))) 
                                   & (IData)(vlSelf->DCache__DOT__pipe__DOT__twoBanks3))) 
                               & ((~ (IData)(vlSelf->DCache__DOT__pipe__DOT__atomicWords_useAlu_2)) 
                                  & (IData)(vlSelf->DCache__DOT__pipe__DOT___atomicWords_useMerge_T_6)))));
    bufp->fullQData(oldp+10378,(vlSelf->DCache__DOT__pipe__DOT__atomicWords_2),64);
    bufp->fullBit(oldp+10380,((3U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx))));
    bufp->fullBit(oldp+10381,((3U == (7U & ((IData)(1U) 
                                            + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx))))));
    bufp->fullBit(oldp+10382,(((3U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)) 
                               | ((3U == (7U & ((IData)(1U) 
                                                + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)))) 
                                  & (IData)(vlSelf->DCache__DOT__pipe__DOT__twoBanks3)))));
    bufp->fullQData(oldp+10383,(((IData)(vlSelf->DCache__DOT__pipe_io_pendingSnoop_valid)
                                  ? vlSelf->DCache__DOT__pipe__DOT__refillWords_3
                                  : vlSelf->DCache__DOT__pipe__DOT__s3_word_3)),64);
    bufp->fullBit(oldp+10385,(vlSelf->DCache__DOT__pipe__DOT__atomicWords_useAlu_3));
    bufp->fullBit(oldp+10386,((((3U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)) 
                                | ((3U == (7U & ((IData)(1U) 
                                                 + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)))) 
                                   & (IData)(vlSelf->DCache__DOT__pipe__DOT__twoBanks3))) 
                               & ((~ (IData)(vlSelf->DCache__DOT__pipe__DOT__atomicWords_useAlu_3)) 
                                  & (IData)(vlSelf->DCache__DOT__pipe__DOT___atomicWords_useMerge_T_6)))));
    bufp->fullQData(oldp+10387,(vlSelf->DCache__DOT__pipe__DOT__atomicWords_3),64);
    bufp->fullBit(oldp+10389,((4U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx))));
    bufp->fullBit(oldp+10390,((4U == (7U & ((IData)(1U) 
                                            + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx))))));
    bufp->fullBit(oldp+10391,(((4U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)) 
                               | ((4U == (7U & ((IData)(1U) 
                                                + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)))) 
                                  & (IData)(vlSelf->DCache__DOT__pipe__DOT__twoBanks3)))));
    bufp->fullQData(oldp+10392,(((IData)(vlSelf->DCache__DOT__pipe_io_pendingSnoop_valid)
                                  ? vlSelf->DCache__DOT__pipe__DOT__refillLine_hi_lo_lo
                                  : vlSelf->DCache__DOT__pipe__DOT__s3_word_4)),64);
    bufp->fullBit(oldp+10394,(vlSelf->DCache__DOT__pipe__DOT__atomicWords_useAlu_4));
    bufp->fullBit(oldp+10395,((((4U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)) 
                                | ((4U == (7U & ((IData)(1U) 
                                                 + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)))) 
                                   & (IData)(vlSelf->DCache__DOT__pipe__DOT__twoBanks3))) 
                               & ((~ (IData)(vlSelf->DCache__DOT__pipe__DOT__atomicWords_useAlu_4)) 
                                  & (IData)(vlSelf->DCache__DOT__pipe__DOT___atomicWords_useMerge_T_6)))));
    bufp->fullQData(oldp+10396,(vlSelf->DCache__DOT__pipe__DOT__atomicWords_4),64);
    bufp->fullBit(oldp+10398,((5U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx))));
    bufp->fullBit(oldp+10399,((5U == (7U & ((IData)(1U) 
                                            + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx))))));
    bufp->fullBit(oldp+10400,(((5U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)) 
                               | ((5U == (7U & ((IData)(1U) 
                                                + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)))) 
                                  & (IData)(vlSelf->DCache__DOT__pipe__DOT__twoBanks3)))));
    bufp->fullQData(oldp+10401,(((IData)(vlSelf->DCache__DOT__pipe_io_pendingSnoop_valid)
                                  ? vlSelf->DCache__DOT__pipe__DOT__refillWords_5
                                  : vlSelf->DCache__DOT__pipe__DOT__s3_word_5)),64);
    bufp->fullBit(oldp+10403,(vlSelf->DCache__DOT__pipe__DOT__atomicWords_useAlu_5));
    bufp->fullBit(oldp+10404,((((5U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)) 
                                | ((5U == (7U & ((IData)(1U) 
                                                 + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)))) 
                                   & (IData)(vlSelf->DCache__DOT__pipe__DOT__twoBanks3))) 
                               & ((~ (IData)(vlSelf->DCache__DOT__pipe__DOT__atomicWords_useAlu_5)) 
                                  & (IData)(vlSelf->DCache__DOT__pipe__DOT___atomicWords_useMerge_T_6)))));
    bufp->fullQData(oldp+10405,(vlSelf->DCache__DOT__pipe__DOT__atomicWords_5),64);
    bufp->fullBit(oldp+10407,((6U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx))));
    bufp->fullBit(oldp+10408,((6U == (7U & ((IData)(1U) 
                                            + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx))))));
    bufp->fullBit(oldp+10409,(((6U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)) 
                               | ((6U == (7U & ((IData)(1U) 
                                                + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)))) 
                                  & (IData)(vlSelf->DCache__DOT__pipe__DOT__twoBanks3)))));
    bufp->fullQData(oldp+10410,(((IData)(vlSelf->DCache__DOT__pipe_io_pendingSnoop_valid)
                                  ? vlSelf->DCache__DOT__pipe__DOT__refillLine_hi_hi_lo
                                  : vlSelf->DCache__DOT__pipe__DOT__s3_word_6)),64);
    bufp->fullBit(oldp+10412,(vlSelf->DCache__DOT__pipe__DOT__atomicWords_useAlu_6));
    bufp->fullBit(oldp+10413,((((6U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)) 
                                | ((6U == (7U & ((IData)(1U) 
                                                 + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)))) 
                                   & (IData)(vlSelf->DCache__DOT__pipe__DOT__twoBanks3))) 
                               & ((~ (IData)(vlSelf->DCache__DOT__pipe__DOT__atomicWords_useAlu_6)) 
                                  & (IData)(vlSelf->DCache__DOT__pipe__DOT___atomicWords_useMerge_T_6)))));
    bufp->fullQData(oldp+10414,(vlSelf->DCache__DOT__pipe__DOT__atomicWords_6),64);
    bufp->fullBit(oldp+10416,((7U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx))));
    bufp->fullBit(oldp+10417,((7U == (7U & ((IData)(1U) 
                                            + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx))))));
    bufp->fullBit(oldp+10418,(((7U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)) 
                               | ((7U == (7U & ((IData)(1U) 
                                                + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)))) 
                                  & (IData)(vlSelf->DCache__DOT__pipe__DOT__twoBanks3)))));
    bufp->fullQData(oldp+10419,(((IData)(vlSelf->DCache__DOT__pipe_io_pendingSnoop_valid)
                                  ? vlSelf->DCache__DOT__pipe__DOT__refillWords_7
                                  : vlSelf->DCache__DOT__pipe__DOT__s3_word_7)),64);
    bufp->fullBit(oldp+10421,(vlSelf->DCache__DOT__pipe__DOT__atomicWords_useAlu_7));
    bufp->fullBit(oldp+10422,((((7U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)) 
                                | ((7U == (7U & ((IData)(1U) 
                                                 + (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_wordIdx)))) 
                                   & (IData)(vlSelf->DCache__DOT__pipe__DOT__twoBanks3))) 
                               & ((~ (IData)(vlSelf->DCache__DOT__pipe__DOT__atomicWords_useAlu_7)) 
                                  & (IData)(vlSelf->DCache__DOT__pipe__DOT___atomicWords_useMerge_T_6)))));
    bufp->fullQData(oldp+10423,(vlSelf->DCache__DOT__pipe__DOT__atomicWords_7),64);
    bufp->fullBit(oldp+10425,(vlSelf->DCache__DOT__pipe__DOT__keepShared));
    bufp->fullBit(oldp+10426,(vlSelf->DCache__DOT__pipe__DOT__wbClear));
    bufp->fullQData(oldp+10427,(((0x3ffffffff00ULL 
                                  & (vlSelf->DCache__DOT__pipe__DOT__s3_hold_addr 
                                     >> 6U)) | (QData)((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_set)))),42);
    bufp->fullBit(oldp+10429,(((IData)(vlSelf->DCache__DOT__pipe__DOT__sent_3) 
                               & (IData)(vlSelf->DCache__DOT__pipe__DOT__doWb2))));
    bufp->fullBit(oldp+10430,(vlSelf->DCache__DOT__pipe__DOT__wbIsVictim));
    bufp->fullCData(oldp+10431,(((IData)(vlSelf->DCache__DOT__pipe__DOT__probeNeedWb)
                                  ? 4U : 3U)),3);
    bufp->fullCData(oldp+10432,(((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_replace_dirty)
                                  ? 2U : 0U)),3);
    bufp->fullCData(oldp+10433,(((IData)(vlSelf->DCache__DOT__pipe__DOT__keepShared)
                                  ? 5U : 2U)),3);
    bufp->fullBit(oldp+10434,((0U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_probeOp))));
    bufp->fullBit(oldp+10435,(((0xdU == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd)) 
                               | (0xfU == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd)))));
    bufp->fullBit(oldp+10436,(((0xcU == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd)) 
                               | (0xeU == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd)))));
    bufp->fullBit(oldp+10437,((8U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd))));
    bufp->fullBit(oldp+10438,(vlSelf->DCache__DOT__pipe__DOT__amoalu__DOT__logic_and));
    bufp->fullBit(oldp+10439,(vlSelf->DCache__DOT__pipe__DOT__amoalu__DOT__logic_xor));
    bufp->fullQData(oldp+10440,((~ (QData)((IData)(
                                                   ((~ 
                                                     ((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask) 
                                                      >> 3U)) 
                                                    << 0x1fU))))),64);
    bufp->fullQData(oldp+10442,((((~ (QData)((IData)(
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
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[0U])))))),64);
    bufp->fullBit(oldp+10444,((0U == (2U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd)))));
    bufp->fullBit(oldp+10445,((1U & ((0x10U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
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
                                              (2U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd)))
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
                                              (2U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd)))
                                              ? (IData)(
                                                        (vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs 
                                                         >> 0x1fU))
                                              : (vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[0U] 
                                                 >> 0x1fU)))))));
    bufp->fullQData(oldp+10446,((((1U & ((0x10U & (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoMask))
                                          ? (((1U & (IData)(
                                                            (vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs 
                                                             >> 0x3fU))) 
                                              == (vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[1U] 
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
                                          : (((1U & (IData)(
                                                            (vlSelf->DCache__DOT__pipe__DOT__amoalu_io_lhs 
                                                             >> 0x1fU))) 
                                              == (vlSelf->DCache__DOT__pipe__DOT__s3_hold_amoData[0U] 
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
    bufp->fullQData(oldp+10448,((((IData)(vlSelf->DCache__DOT__pipe__DOT__amoalu__DOT__logic_and)
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
    bufp->fullQData(oldp+10450,(((8U == (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_cmd))
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
    bufp->fullCData(oldp+10452,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_0),3);
    bufp->fullCData(oldp+10453,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_1),3);
    bufp->fullCData(oldp+10454,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_2),3);
    bufp->fullCData(oldp+10455,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_3),3);
    bufp->fullCData(oldp+10456,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_4),3);
    bufp->fullCData(oldp+10457,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_5),3);
    bufp->fullCData(oldp+10458,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_6),3);
    bufp->fullCData(oldp+10459,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_7),3);
    bufp->fullCData(oldp+10460,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_8),3);
    bufp->fullCData(oldp+10461,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_9),3);
    bufp->fullCData(oldp+10462,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_10),3);
    bufp->fullCData(oldp+10463,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_11),3);
    bufp->fullCData(oldp+10464,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_12),3);
    bufp->fullCData(oldp+10465,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_13),3);
    bufp->fullCData(oldp+10466,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_14),3);
    bufp->fullCData(oldp+10467,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_15),3);
    bufp->fullCData(oldp+10468,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_16),3);
    bufp->fullCData(oldp+10469,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_17),3);
    bufp->fullCData(oldp+10470,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_18),3);
    bufp->fullCData(oldp+10471,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_19),3);
    bufp->fullCData(oldp+10472,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_20),3);
    bufp->fullCData(oldp+10473,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_21),3);
    bufp->fullCData(oldp+10474,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_22),3);
    bufp->fullCData(oldp+10475,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_23),3);
    bufp->fullCData(oldp+10476,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_24),3);
    bufp->fullCData(oldp+10477,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_25),3);
    bufp->fullCData(oldp+10478,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_26),3);
    bufp->fullCData(oldp+10479,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_27),3);
    bufp->fullCData(oldp+10480,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_28),3);
    bufp->fullCData(oldp+10481,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_29),3);
    bufp->fullCData(oldp+10482,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_30),3);
    bufp->fullCData(oldp+10483,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_31),3);
    bufp->fullCData(oldp+10484,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_32),3);
    bufp->fullCData(oldp+10485,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_33),3);
    bufp->fullCData(oldp+10486,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_34),3);
    bufp->fullCData(oldp+10487,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_35),3);
    bufp->fullCData(oldp+10488,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_36),3);
    bufp->fullCData(oldp+10489,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_37),3);
    bufp->fullCData(oldp+10490,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_38),3);
    bufp->fullCData(oldp+10491,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_39),3);
    bufp->fullCData(oldp+10492,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_40),3);
    bufp->fullCData(oldp+10493,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_41),3);
    bufp->fullCData(oldp+10494,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_42),3);
    bufp->fullCData(oldp+10495,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_43),3);
    bufp->fullCData(oldp+10496,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_44),3);
    bufp->fullCData(oldp+10497,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_45),3);
    bufp->fullCData(oldp+10498,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_46),3);
    bufp->fullCData(oldp+10499,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_47),3);
    bufp->fullCData(oldp+10500,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_48),3);
    bufp->fullCData(oldp+10501,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_49),3);
    bufp->fullCData(oldp+10502,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_50),3);
    bufp->fullCData(oldp+10503,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_51),3);
    bufp->fullCData(oldp+10504,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_52),3);
    bufp->fullCData(oldp+10505,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_53),3);
    bufp->fullCData(oldp+10506,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_54),3);
    bufp->fullCData(oldp+10507,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_55),3);
    bufp->fullCData(oldp+10508,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_56),3);
    bufp->fullCData(oldp+10509,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_57),3);
    bufp->fullCData(oldp+10510,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_58),3);
    bufp->fullCData(oldp+10511,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_59),3);
    bufp->fullCData(oldp+10512,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_60),3);
    bufp->fullCData(oldp+10513,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_61),3);
    bufp->fullCData(oldp+10514,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_62),3);
    bufp->fullCData(oldp+10515,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_63),3);
    bufp->fullCData(oldp+10516,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_64),3);
    bufp->fullCData(oldp+10517,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_65),3);
    bufp->fullCData(oldp+10518,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_66),3);
    bufp->fullCData(oldp+10519,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_67),3);
    bufp->fullCData(oldp+10520,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_68),3);
    bufp->fullCData(oldp+10521,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_69),3);
    bufp->fullCData(oldp+10522,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_70),3);
    bufp->fullCData(oldp+10523,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_71),3);
    bufp->fullCData(oldp+10524,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_72),3);
    bufp->fullCData(oldp+10525,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_73),3);
    bufp->fullCData(oldp+10526,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_74),3);
    bufp->fullCData(oldp+10527,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_75),3);
    bufp->fullCData(oldp+10528,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_76),3);
    bufp->fullCData(oldp+10529,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_77),3);
    bufp->fullCData(oldp+10530,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_78),3);
    bufp->fullCData(oldp+10531,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_79),3);
    bufp->fullCData(oldp+10532,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_80),3);
    bufp->fullCData(oldp+10533,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_81),3);
    bufp->fullCData(oldp+10534,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_82),3);
    bufp->fullCData(oldp+10535,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_83),3);
    bufp->fullCData(oldp+10536,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_84),3);
    bufp->fullCData(oldp+10537,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_85),3);
    bufp->fullCData(oldp+10538,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_86),3);
    bufp->fullCData(oldp+10539,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_87),3);
    bufp->fullCData(oldp+10540,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_88),3);
    bufp->fullCData(oldp+10541,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_89),3);
    bufp->fullCData(oldp+10542,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_90),3);
    bufp->fullCData(oldp+10543,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_91),3);
    bufp->fullCData(oldp+10544,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_92),3);
    bufp->fullCData(oldp+10545,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_93),3);
    bufp->fullCData(oldp+10546,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_94),3);
    bufp->fullCData(oldp+10547,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_95),3);
    bufp->fullCData(oldp+10548,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_96),3);
    bufp->fullCData(oldp+10549,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_97),3);
    bufp->fullCData(oldp+10550,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_98),3);
    bufp->fullCData(oldp+10551,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_99),3);
    bufp->fullCData(oldp+10552,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_100),3);
    bufp->fullCData(oldp+10553,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_101),3);
    bufp->fullCData(oldp+10554,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_102),3);
    bufp->fullCData(oldp+10555,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_103),3);
    bufp->fullCData(oldp+10556,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_104),3);
    bufp->fullCData(oldp+10557,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_105),3);
    bufp->fullCData(oldp+10558,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_106),3);
    bufp->fullCData(oldp+10559,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_107),3);
    bufp->fullCData(oldp+10560,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_108),3);
    bufp->fullCData(oldp+10561,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_109),3);
    bufp->fullCData(oldp+10562,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_110),3);
    bufp->fullCData(oldp+10563,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_111),3);
    bufp->fullCData(oldp+10564,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_112),3);
    bufp->fullCData(oldp+10565,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_113),3);
    bufp->fullCData(oldp+10566,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_114),3);
    bufp->fullCData(oldp+10567,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_115),3);
    bufp->fullCData(oldp+10568,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_116),3);
    bufp->fullCData(oldp+10569,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_117),3);
    bufp->fullCData(oldp+10570,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_118),3);
    bufp->fullCData(oldp+10571,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_119),3);
    bufp->fullCData(oldp+10572,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_120),3);
    bufp->fullCData(oldp+10573,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_121),3);
    bufp->fullCData(oldp+10574,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_122),3);
    bufp->fullCData(oldp+10575,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_123),3);
    bufp->fullCData(oldp+10576,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_124),3);
    bufp->fullCData(oldp+10577,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_125),3);
    bufp->fullCData(oldp+10578,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_126),3);
    bufp->fullCData(oldp+10579,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_127),3);
    bufp->fullCData(oldp+10580,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_128),3);
    bufp->fullCData(oldp+10581,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_129),3);
    bufp->fullCData(oldp+10582,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_130),3);
    bufp->fullCData(oldp+10583,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_131),3);
    bufp->fullCData(oldp+10584,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_132),3);
    bufp->fullCData(oldp+10585,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_133),3);
    bufp->fullCData(oldp+10586,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_134),3);
    bufp->fullCData(oldp+10587,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_135),3);
    bufp->fullCData(oldp+10588,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_136),3);
    bufp->fullCData(oldp+10589,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_137),3);
    bufp->fullCData(oldp+10590,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_138),3);
    bufp->fullCData(oldp+10591,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_139),3);
    bufp->fullCData(oldp+10592,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_140),3);
    bufp->fullCData(oldp+10593,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_141),3);
    bufp->fullCData(oldp+10594,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_142),3);
    bufp->fullCData(oldp+10595,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_143),3);
    bufp->fullCData(oldp+10596,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_144),3);
    bufp->fullCData(oldp+10597,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_145),3);
    bufp->fullCData(oldp+10598,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_146),3);
    bufp->fullCData(oldp+10599,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_147),3);
    bufp->fullCData(oldp+10600,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_148),3);
    bufp->fullCData(oldp+10601,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_149),3);
    bufp->fullCData(oldp+10602,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_150),3);
    bufp->fullCData(oldp+10603,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_151),3);
    bufp->fullCData(oldp+10604,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_152),3);
    bufp->fullCData(oldp+10605,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_153),3);
    bufp->fullCData(oldp+10606,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_154),3);
    bufp->fullCData(oldp+10607,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_155),3);
    bufp->fullCData(oldp+10608,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_156),3);
    bufp->fullCData(oldp+10609,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_157),3);
    bufp->fullCData(oldp+10610,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_158),3);
    bufp->fullCData(oldp+10611,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_159),3);
    bufp->fullCData(oldp+10612,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_160),3);
    bufp->fullCData(oldp+10613,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_161),3);
    bufp->fullCData(oldp+10614,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_162),3);
    bufp->fullCData(oldp+10615,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_163),3);
    bufp->fullCData(oldp+10616,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_164),3);
    bufp->fullCData(oldp+10617,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_165),3);
    bufp->fullCData(oldp+10618,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_166),3);
    bufp->fullCData(oldp+10619,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_167),3);
    bufp->fullCData(oldp+10620,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_168),3);
    bufp->fullCData(oldp+10621,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_169),3);
    bufp->fullCData(oldp+10622,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_170),3);
    bufp->fullCData(oldp+10623,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_171),3);
    bufp->fullCData(oldp+10624,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_172),3);
    bufp->fullCData(oldp+10625,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_173),3);
    bufp->fullCData(oldp+10626,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_174),3);
    bufp->fullCData(oldp+10627,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_175),3);
    bufp->fullCData(oldp+10628,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_176),3);
    bufp->fullCData(oldp+10629,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_177),3);
    bufp->fullCData(oldp+10630,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_178),3);
    bufp->fullCData(oldp+10631,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_179),3);
    bufp->fullCData(oldp+10632,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_180),3);
    bufp->fullCData(oldp+10633,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_181),3);
    bufp->fullCData(oldp+10634,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_182),3);
    bufp->fullCData(oldp+10635,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_183),3);
    bufp->fullCData(oldp+10636,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_184),3);
    bufp->fullCData(oldp+10637,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_185),3);
    bufp->fullCData(oldp+10638,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_186),3);
    bufp->fullCData(oldp+10639,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_187),3);
    bufp->fullCData(oldp+10640,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_188),3);
    bufp->fullCData(oldp+10641,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_189),3);
    bufp->fullCData(oldp+10642,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_190),3);
    bufp->fullCData(oldp+10643,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_191),3);
    bufp->fullCData(oldp+10644,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_192),3);
    bufp->fullCData(oldp+10645,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_193),3);
    bufp->fullCData(oldp+10646,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_194),3);
    bufp->fullCData(oldp+10647,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_195),3);
    bufp->fullCData(oldp+10648,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_196),3);
    bufp->fullCData(oldp+10649,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_197),3);
    bufp->fullCData(oldp+10650,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_198),3);
    bufp->fullCData(oldp+10651,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_199),3);
    bufp->fullCData(oldp+10652,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_200),3);
    bufp->fullCData(oldp+10653,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_201),3);
    bufp->fullCData(oldp+10654,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_202),3);
    bufp->fullCData(oldp+10655,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_203),3);
    bufp->fullCData(oldp+10656,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_204),3);
    bufp->fullCData(oldp+10657,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_205),3);
    bufp->fullCData(oldp+10658,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_206),3);
    bufp->fullCData(oldp+10659,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_207),3);
    bufp->fullCData(oldp+10660,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_208),3);
    bufp->fullCData(oldp+10661,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_209),3);
    bufp->fullCData(oldp+10662,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_210),3);
    bufp->fullCData(oldp+10663,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_211),3);
    bufp->fullCData(oldp+10664,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_212),3);
    bufp->fullCData(oldp+10665,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_213),3);
    bufp->fullCData(oldp+10666,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_214),3);
    bufp->fullCData(oldp+10667,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_215),3);
    bufp->fullCData(oldp+10668,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_216),3);
    bufp->fullCData(oldp+10669,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_217),3);
    bufp->fullCData(oldp+10670,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_218),3);
    bufp->fullCData(oldp+10671,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_219),3);
    bufp->fullCData(oldp+10672,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_220),3);
    bufp->fullCData(oldp+10673,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_221),3);
    bufp->fullCData(oldp+10674,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_222),3);
    bufp->fullCData(oldp+10675,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_223),3);
    bufp->fullCData(oldp+10676,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_224),3);
    bufp->fullCData(oldp+10677,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_225),3);
    bufp->fullCData(oldp+10678,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_226),3);
    bufp->fullCData(oldp+10679,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_227),3);
    bufp->fullCData(oldp+10680,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_228),3);
    bufp->fullCData(oldp+10681,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_229),3);
    bufp->fullCData(oldp+10682,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_230),3);
    bufp->fullCData(oldp+10683,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_231),3);
    bufp->fullCData(oldp+10684,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_232),3);
    bufp->fullCData(oldp+10685,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_233),3);
    bufp->fullCData(oldp+10686,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_234),3);
    bufp->fullCData(oldp+10687,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_235),3);
    bufp->fullCData(oldp+10688,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_236),3);
    bufp->fullCData(oldp+10689,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_237),3);
    bufp->fullCData(oldp+10690,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_238),3);
    bufp->fullCData(oldp+10691,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_239),3);
    bufp->fullCData(oldp+10692,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_240),3);
    bufp->fullCData(oldp+10693,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_241),3);
    bufp->fullCData(oldp+10694,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_242),3);
    bufp->fullCData(oldp+10695,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_243),3);
    bufp->fullCData(oldp+10696,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_244),3);
    bufp->fullCData(oldp+10697,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_245),3);
    bufp->fullCData(oldp+10698,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_246),3);
    bufp->fullCData(oldp+10699,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_247),3);
    bufp->fullCData(oldp+10700,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_248),3);
    bufp->fullCData(oldp+10701,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_249),3);
    bufp->fullCData(oldp+10702,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_250),3);
    bufp->fullCData(oldp+10703,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_251),3);
    bufp->fullCData(oldp+10704,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_252),3);
    bufp->fullCData(oldp+10705,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_253),3);
    bufp->fullCData(oldp+10706,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_254),3);
    bufp->fullCData(oldp+10707,(vlSelf->DCache__DOT__pipe__DOT__plru__DOT__state_255),3);
    bufp->fullBit(oldp+10708,((1U & (~ ((IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_way) 
                                        >> 1U)))));
    bufp->fullBit(oldp+10709,((1U & (~ (IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_way)))));
    bufp->fullBit(oldp+10710,((1U & ((2U & (IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_way))
                                      ? ((IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT___GEN_511) 
                                         >> 1U) : (~ (IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_way))))));
    bufp->fullBit(oldp+10711,((1U & ((2U & (IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_way))
                                      ? (~ (IData)(vlSelf->DCache__DOT__loads_0__DOT__s2_way))
                                      : ((IData)(vlSelf->DCache__DOT__pipe__DOT__plru__DOT___GEN_511) 
                                         >> 2U)))));
    bufp->fullBit(oldp+10712,((1U & (~ ((IData)(vlSelf->DCache__DOT__loads_1__DOT__s2_way) 
                                        >> 1U)))));
    bufp->fullBit(oldp+10713,((1U & (~ (IData)(vlSelf->DCache__DOT__loads_1__DOT__s2_way)))));
    bufp->fullBit(oldp+10714,((1U & (~ ((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way) 
                                        >> 1U)))));
    bufp->fullBit(oldp+10715,((1U & (~ (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)))));
    bufp->fullCData(oldp+10716,(vlSelf->DCache__DOT__probe__DOT__entries_0_state),2);
    bufp->fullCData(oldp+10717,(vlSelf->DCache__DOT__probe__DOT__entries_0_opcode),2);
    bufp->fullCData(oldp+10718,(vlSelf->DCache__DOT__probe__DOT__entries_0_snpTxnId),8);
    bufp->fullCData(oldp+10719,(vlSelf->DCache__DOT__probe__DOT__entries_1_state),2);
    bufp->fullCData(oldp+10720,(vlSelf->DCache__DOT__probe__DOT__entries_1_opcode),2);
    bufp->fullCData(oldp+10721,(vlSelf->DCache__DOT__probe__DOT__entries_1_snpTxnId),8);
    bufp->fullCData(oldp+10722,(vlSelf->DCache__DOT__probe__DOT__entries_2_state),2);
    bufp->fullCData(oldp+10723,(vlSelf->DCache__DOT__probe__DOT__entries_2_opcode),2);
    bufp->fullCData(oldp+10724,(vlSelf->DCache__DOT__probe__DOT__entries_2_snpTxnId),8);
    bufp->fullCData(oldp+10725,(vlSelf->DCache__DOT__probe__DOT__entries_3_state),2);
    bufp->fullCData(oldp+10726,(vlSelf->DCache__DOT__probe__DOT__entries_3_opcode),2);
    bufp->fullCData(oldp+10727,(vlSelf->DCache__DOT__probe__DOT__entries_3_snpTxnId),8);
    bufp->fullCData(oldp+10728,(vlSelf->DCache__DOT__probe__DOT__entries_4_state),2);
    bufp->fullCData(oldp+10729,(vlSelf->DCache__DOT__probe__DOT__entries_4_opcode),2);
    bufp->fullCData(oldp+10730,(vlSelf->DCache__DOT__probe__DOT__entries_4_snpTxnId),8);
    bufp->fullCData(oldp+10731,(vlSelf->DCache__DOT__probe__DOT__entries_5_state),2);
    bufp->fullCData(oldp+10732,(vlSelf->DCache__DOT__probe__DOT__entries_5_opcode),2);
    bufp->fullCData(oldp+10733,(vlSelf->DCache__DOT__probe__DOT__entries_5_snpTxnId),8);
    bufp->fullCData(oldp+10734,(vlSelf->DCache__DOT__probe__DOT__entries_6_state),2);
    bufp->fullCData(oldp+10735,(vlSelf->DCache__DOT__probe__DOT__entries_6_opcode),2);
    bufp->fullCData(oldp+10736,(vlSelf->DCache__DOT__probe__DOT__entries_6_snpTxnId),8);
    bufp->fullCData(oldp+10737,(vlSelf->DCache__DOT__probe__DOT__entries_7_state),2);
    bufp->fullCData(oldp+10738,(vlSelf->DCache__DOT__probe__DOT__entries_7_opcode),2);
    bufp->fullCData(oldp+10739,(vlSelf->DCache__DOT__probe__DOT__entries_7_snpTxnId),8);
    bufp->fullCData(oldp+10740,(vlSelf->DCache__DOT__probe__DOT__entries_8_state),2);
    bufp->fullCData(oldp+10741,(vlSelf->DCache__DOT__probe__DOT__entries_8_opcode),2);
    bufp->fullCData(oldp+10742,(vlSelf->DCache__DOT__probe__DOT__entries_8_snpTxnId),8);
    bufp->fullCData(oldp+10743,(vlSelf->DCache__DOT__probe__DOT__entries_9_state),2);
    bufp->fullCData(oldp+10744,(vlSelf->DCache__DOT__probe__DOT__entries_9_opcode),2);
    bufp->fullCData(oldp+10745,(vlSelf->DCache__DOT__probe__DOT__entries_9_snpTxnId),8);
    bufp->fullCData(oldp+10746,(vlSelf->DCache__DOT__probe__DOT__entries_10_state),2);
    bufp->fullCData(oldp+10747,(vlSelf->DCache__DOT__probe__DOT__entries_10_opcode),2);
    bufp->fullCData(oldp+10748,(vlSelf->DCache__DOT__probe__DOT__entries_10_snpTxnId),8);
    bufp->fullCData(oldp+10749,(vlSelf->DCache__DOT__probe__DOT__entries_11_state),2);
    bufp->fullCData(oldp+10750,(vlSelf->DCache__DOT__probe__DOT__entries_11_opcode),2);
    bufp->fullCData(oldp+10751,(vlSelf->DCache__DOT__probe__DOT__entries_11_snpTxnId),8);
    bufp->fullCData(oldp+10752,(vlSelf->DCache__DOT__probe__DOT__entries_12_state),2);
    bufp->fullCData(oldp+10753,(vlSelf->DCache__DOT__probe__DOT__entries_12_opcode),2);
    bufp->fullCData(oldp+10754,(vlSelf->DCache__DOT__probe__DOT__entries_12_snpTxnId),8);
    bufp->fullCData(oldp+10755,(vlSelf->DCache__DOT__probe__DOT__entries_13_state),2);
    bufp->fullCData(oldp+10756,(vlSelf->DCache__DOT__probe__DOT__entries_13_opcode),2);
    bufp->fullCData(oldp+10757,(vlSelf->DCache__DOT__probe__DOT__entries_13_snpTxnId),8);
    bufp->fullCData(oldp+10758,(vlSelf->DCache__DOT__probe__DOT__entries_14_state),2);
    bufp->fullCData(oldp+10759,(vlSelf->DCache__DOT__probe__DOT__entries_14_opcode),2);
    bufp->fullCData(oldp+10760,(vlSelf->DCache__DOT__probe__DOT__entries_14_snpTxnId),8);
    bufp->fullCData(oldp+10761,(vlSelf->DCache__DOT__probe__DOT__entries_15_state),2);
    bufp->fullCData(oldp+10762,(vlSelf->DCache__DOT__probe__DOT__entries_15_opcode),2);
    bufp->fullCData(oldp+10763,(vlSelf->DCache__DOT__probe__DOT__entries_15_snpTxnId),8);
    bufp->fullBit(oldp+10764,(vlSelf->DCache__DOT__probe__DOT__outValid));
    bufp->fullCData(oldp+10765,(vlSelf->DCache__DOT__probe__DOT__outIdx),4);
    bufp->fullBit(oldp+10766,(vlSelf->DCache__DOT__probe__DOT__pause));
    bufp->fullQData(oldp+10767,((0xffffffffffc0ULL 
                                 & vlSelf->DCache__DOT__pipe__DOT__lrsc_addr)),48);
    bufp->fullBit(oldp+10769,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__outBits_probeOp))));
    bufp->fullBit(oldp+10770,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_0_valid) 
                               & (((0xffffffffffc0ULL 
                                    & vlSelf->DCache__DOT__miss__DOT__entries_0_addr) 
                                   == (0xffffffffffc0ULL 
                                       & vlSelf->DCache__DOT__probe__DOT__outBits_addr)) 
                                  & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_alias) 
                                     == (IData)(vlSelf->DCache__DOT__probe__DOT__outBits_tagAlias))))));
    bufp->fullBit(oldp+10771,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_1_valid) 
                               & (((0xffffffffffc0ULL 
                                    & vlSelf->DCache__DOT__miss__DOT__entries_1_addr) 
                                   == (0xffffffffffc0ULL 
                                       & vlSelf->DCache__DOT__probe__DOT__outBits_addr)) 
                                  & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_alias) 
                                     == (IData)(vlSelf->DCache__DOT__probe__DOT__outBits_tagAlias))))));
    bufp->fullBit(oldp+10772,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_2_valid) 
                               & (((0xffffffffffc0ULL 
                                    & vlSelf->DCache__DOT__miss__DOT__entries_2_addr) 
                                   == (0xffffffffffc0ULL 
                                       & vlSelf->DCache__DOT__probe__DOT__outBits_addr)) 
                                  & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_alias) 
                                     == (IData)(vlSelf->DCache__DOT__probe__DOT__outBits_tagAlias))))));
    bufp->fullBit(oldp+10773,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_3_valid) 
                               & (((0xffffffffffc0ULL 
                                    & vlSelf->DCache__DOT__miss__DOT__entries_3_addr) 
                                   == (0xffffffffffc0ULL 
                                       & vlSelf->DCache__DOT__probe__DOT__outBits_addr)) 
                                  & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_alias) 
                                     == (IData)(vlSelf->DCache__DOT__probe__DOT__outBits_tagAlias))))));
    bufp->fullBit(oldp+10774,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_4_valid) 
                               & (((0xffffffffffc0ULL 
                                    & vlSelf->DCache__DOT__miss__DOT__entries_4_addr) 
                                   == (0xffffffffffc0ULL 
                                       & vlSelf->DCache__DOT__probe__DOT__outBits_addr)) 
                                  & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_alias) 
                                     == (IData)(vlSelf->DCache__DOT__probe__DOT__outBits_tagAlias))))));
    bufp->fullBit(oldp+10775,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_5_valid) 
                               & (((0xffffffffffc0ULL 
                                    & vlSelf->DCache__DOT__miss__DOT__entries_5_addr) 
                                   == (0xffffffffffc0ULL 
                                       & vlSelf->DCache__DOT__probe__DOT__outBits_addr)) 
                                  & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_alias) 
                                     == (IData)(vlSelf->DCache__DOT__probe__DOT__outBits_tagAlias))))));
    bufp->fullBit(oldp+10776,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_6_valid) 
                               & (((0xffffffffffc0ULL 
                                    & vlSelf->DCache__DOT__miss__DOT__entries_6_addr) 
                                   == (0xffffffffffc0ULL 
                                       & vlSelf->DCache__DOT__probe__DOT__outBits_addr)) 
                                  & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_alias) 
                                     == (IData)(vlSelf->DCache__DOT__probe__DOT__outBits_tagAlias))))));
    bufp->fullBit(oldp+10777,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_7_valid) 
                               & (((0xffffffffffc0ULL 
                                    & vlSelf->DCache__DOT__miss__DOT__entries_7_addr) 
                                   == (0xffffffffffc0ULL 
                                       & vlSelf->DCache__DOT__probe__DOT__outBits_addr)) 
                                  & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_alias) 
                                     == (IData)(vlSelf->DCache__DOT__probe__DOT__outBits_tagAlias))))));
    bufp->fullBit(oldp+10778,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_8_valid) 
                               & (((0xffffffffffc0ULL 
                                    & vlSelf->DCache__DOT__miss__DOT__entries_8_addr) 
                                   == (0xffffffffffc0ULL 
                                       & vlSelf->DCache__DOT__probe__DOT__outBits_addr)) 
                                  & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_alias) 
                                     == (IData)(vlSelf->DCache__DOT__probe__DOT__outBits_tagAlias))))));
    bufp->fullBit(oldp+10779,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_9_valid) 
                               & (((0xffffffffffc0ULL 
                                    & vlSelf->DCache__DOT__miss__DOT__entries_9_addr) 
                                   == (0xffffffffffc0ULL 
                                       & vlSelf->DCache__DOT__probe__DOT__outBits_addr)) 
                                  & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_alias) 
                                     == (IData)(vlSelf->DCache__DOT__probe__DOT__outBits_tagAlias))))));
    bufp->fullBit(oldp+10780,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_10_valid) 
                               & (((0xffffffffffc0ULL 
                                    & vlSelf->DCache__DOT__miss__DOT__entries_10_addr) 
                                   == (0xffffffffffc0ULL 
                                       & vlSelf->DCache__DOT__probe__DOT__outBits_addr)) 
                                  & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_alias) 
                                     == (IData)(vlSelf->DCache__DOT__probe__DOT__outBits_tagAlias))))));
    bufp->fullBit(oldp+10781,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_11_valid) 
                               & (((0xffffffffffc0ULL 
                                    & vlSelf->DCache__DOT__miss__DOT__entries_11_addr) 
                                   == (0xffffffffffc0ULL 
                                       & vlSelf->DCache__DOT__probe__DOT__outBits_addr)) 
                                  & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_alias) 
                                     == (IData)(vlSelf->DCache__DOT__probe__DOT__outBits_tagAlias))))));
    bufp->fullBit(oldp+10782,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_12_valid) 
                               & (((0xffffffffffc0ULL 
                                    & vlSelf->DCache__DOT__miss__DOT__entries_12_addr) 
                                   == (0xffffffffffc0ULL 
                                       & vlSelf->DCache__DOT__probe__DOT__outBits_addr)) 
                                  & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_alias) 
                                     == (IData)(vlSelf->DCache__DOT__probe__DOT__outBits_tagAlias))))));
    bufp->fullBit(oldp+10783,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_13_valid) 
                               & (((0xffffffffffc0ULL 
                                    & vlSelf->DCache__DOT__miss__DOT__entries_13_addr) 
                                   == (0xffffffffffc0ULL 
                                       & vlSelf->DCache__DOT__probe__DOT__outBits_addr)) 
                                  & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_alias) 
                                     == (IData)(vlSelf->DCache__DOT__probe__DOT__outBits_tagAlias))))));
    bufp->fullBit(oldp+10784,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_14_valid) 
                               & (((0xffffffffffc0ULL 
                                    & vlSelf->DCache__DOT__miss__DOT__entries_14_addr) 
                                   == (0xffffffffffc0ULL 
                                       & vlSelf->DCache__DOT__probe__DOT__outBits_addr)) 
                                  & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_alias) 
                                     == (IData)(vlSelf->DCache__DOT__probe__DOT__outBits_tagAlias))))));
    bufp->fullBit(oldp+10785,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_15_valid) 
                               & (((0xffffffffffc0ULL 
                                    & vlSelf->DCache__DOT__miss__DOT__entries_15_addr) 
                                   == (0xffffffffffc0ULL 
                                       & vlSelf->DCache__DOT__probe__DOT__outBits_addr)) 
                                  & ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_alias) 
                                     == (IData)(vlSelf->DCache__DOT__probe__DOT__outBits_tagAlias))))));
    bufp->fullBit(oldp+10786,(((IData)(vlSelf->DCache__DOT__probe__DOT__outValid) 
                               & (IData)(vlSelf->DCache__DOT__probe__DOT___missNow_T_16))));
    bufp->fullBit(oldp+10787,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_0_opcode))));
    bufp->fullBit(oldp+10788,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_0_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_7) 
                                  & (IData)(vlSelf->__VdfgTmp_hb99d0ec6__0)))));
    bufp->fullBit(oldp+10789,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_1_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_197) 
                                  & (IData)(vlSelf->__VdfgTmp_h13fd2bb4__0)))));
    bufp->fullBit(oldp+10790,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_2_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_387) 
                                  & (IData)(vlSelf->__VdfgTmp_h38e53a06__0)))));
    bufp->fullBit(oldp+10791,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_3_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_577) 
                                  & (IData)(vlSelf->__VdfgTmp_h8fc573e6__0)))));
    bufp->fullBit(oldp+10792,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_4_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_767) 
                                  & (IData)(vlSelf->__VdfgTmp_h8bb336e8__0)))));
    bufp->fullBit(oldp+10793,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_5_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_957) 
                                  & (IData)(vlSelf->__VdfgTmp_h18b77a5a__0)))));
    bufp->fullBit(oldp+10794,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_6_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1147) 
                                  & (IData)(vlSelf->__VdfgTmp_h74df05db__0)))));
    bufp->fullBit(oldp+10795,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_7_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1337) 
                                  & (IData)(vlSelf->__VdfgTmp_h1ef9bd33__0)))));
    bufp->fullBit(oldp+10796,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_8_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1527) 
                                  & (IData)(vlSelf->__VdfgTmp_ha62206e2__0)))));
    bufp->fullBit(oldp+10797,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_9_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1717) 
                                  & (IData)(vlSelf->__VdfgTmp_hf322ffde__0)))));
    bufp->fullBit(oldp+10798,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_10_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1907) 
                                  & (IData)(vlSelf->__VdfgTmp_hc1ed2b8a__0)))));
    bufp->fullBit(oldp+10799,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_11_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2097) 
                                  & (IData)(vlSelf->__VdfgTmp_h2fd58e13__0)))));
    bufp->fullBit(oldp+10800,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_12_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2287) 
                                  & (IData)(vlSelf->__VdfgTmp_hb3409e01__0)))));
    bufp->fullBit(oldp+10801,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_13_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2477) 
                                  & (IData)(vlSelf->__VdfgTmp_h8667ba33__0)))));
    bufp->fullBit(oldp+10802,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_14_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2667) 
                                  & (IData)(vlSelf->__VdfgTmp_h74927c72__0)))));
    bufp->fullBit(oldp+10803,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_15_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2857) 
                                  & (IData)(vlSelf->__VdfgTmp_h245dabaa__0)))));
    bufp->fullBit(oldp+10804,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_1_opcode))));
    bufp->fullBit(oldp+10805,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_0_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_18) 
                                  & (IData)(vlSelf->__VdfgTmp_h6c4dda41__0)))));
    bufp->fullBit(oldp+10806,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_1_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_208) 
                                  & (IData)(vlSelf->__VdfgTmp_hb8cd8733__0)))));
    bufp->fullBit(oldp+10807,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_2_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_398) 
                                  & (IData)(vlSelf->__VdfgTmp_h84368685__0)))));
    bufp->fullBit(oldp+10808,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_3_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_588) 
                                  & (IData)(vlSelf->__VdfgTmp_hfb15a767__0)))));
    bufp->fullBit(oldp+10809,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_4_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_778) 
                                  & (IData)(vlSelf->__VdfgTmp_h2482e269__0)))));
    bufp->fullBit(oldp+10810,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_5_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_968) 
                                  & (IData)(vlSelf->__VdfgTmp_hac6706c5__0)))));
    bufp->fullBit(oldp+10811,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_6_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1158) 
                                  & (IData)(vlSelf->__VdfgTmp_hc1afa95a__0)))));
    bufp->fullBit(oldp+10812,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_7_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1348) 
                                  & (IData)(vlSelf->__VdfgTmp_hca2901b2__0)))));
    bufp->fullBit(oldp+10813,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_8_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1538) 
                                  & (IData)(vlSelf->__VdfgTmp_hdaf3b363__0)))));
    bufp->fullBit(oldp+10814,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_9_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1728) 
                                  & (IData)(vlSelf->__VdfgTmp_hac732a5f__0)))));
    bufp->fullBit(oldp+10815,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_10_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1918) 
                                  & (IData)(vlSelf->__VdfgTmp_h16bcc60b__0)))));
    bufp->fullBit(oldp+10816,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_11_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2108) 
                                  & (IData)(vlSelf->__VdfgTmp_h52e53d9c__0)))));
    bufp->fullBit(oldp+10817,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_12_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2298) 
                                  & (IData)(vlSelf->__VdfgTmp_h5c70c28e__0)))));
    bufp->fullBit(oldp+10818,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_13_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2488) 
                                  & (IData)(vlSelf->__VdfgTmp_h2b170ebc__0)))));
    bufp->fullBit(oldp+10819,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_14_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2678) 
                                  & (IData)(vlSelf->__VdfgTmp_ha1c220f1__0)))));
    bufp->fullBit(oldp+10820,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_15_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2868) 
                                  & (IData)(vlSelf->__VdfgTmp_h736e7f2b__0)))));
    bufp->fullBit(oldp+10821,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_2_opcode))));
    bufp->fullBit(oldp+10822,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_0_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_29) 
                                  & (IData)(vlSelf->__VdfgTmp_h0f914751__0)))));
    bufp->fullBit(oldp+10823,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_1_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_219) 
                                  & (IData)(vlSelf->__VdfgTmp_h9df17243__0)))));
    bufp->fullBit(oldp+10824,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_2_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_409) 
                                  & (IData)(vlSelf->__VdfgTmp_haae173b5__0)))));
    bufp->fullBit(oldp+10825,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_3_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_599) 
                                  & (IData)(vlSelf->__VdfgTmp_h1dc93a77__0)))));
    bufp->fullBit(oldp+10826,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_4_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_789) 
                                  & (IData)(vlSelf->__VdfgTmp_h19af6979__0)))));
    bufp->fullBit(oldp+10827,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_5_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_979) 
                                  & (IData)(vlSelf->__VdfgTmp_h8abbb3b5__0)))));
    bufp->fullBit(oldp+10828,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_6_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1169) 
                                  & (IData)(vlSelf->__VdfgTmp_he2dadeaa__0)))));
    bufp->fullBit(oldp+10829,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_7_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1359) 
                                  & (IData)(vlSelf->__VdfgTmp_he8c474a2__0)))));
    bufp->fullBit(oldp+10830,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_8_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1549) 
                                  & (IData)(vlSelf->__VdfgTmp_h37de3e73__0)))));
    bufp->fullBit(oldp+10831,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_9_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1739) 
                                  & (IData)(vlSelf->__VdfgTmp_h4126a76f__0)))));
    bufp->fullBit(oldp+10832,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_10_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1929) 
                                  & (IData)(vlSelf->__VdfgTmp_h33e9731b__0)))));
    bufp->fullBit(oldp+10833,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_11_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2119) 
                                  & (IData)(vlSelf->__VdfgTmp_hb1c9c68c__0)))));
    bufp->fullBit(oldp+10834,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_12_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2309) 
                                  & (IData)(vlSelf->__VdfgTmp_h414449be__0)))));
    bufp->fullBit(oldp+10835,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_13_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2499) 
                                  & (IData)(vlSelf->__VdfgTmp_h146873ac__0)))));
    bufp->fullBit(oldp+10836,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_14_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2689) 
                                  & (IData)(vlSelf->__VdfgTmp_h82aeb7c1__0)))));
    bufp->fullBit(oldp+10837,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_15_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2879) 
                                  & (IData)(vlSelf->__VdfgTmp_h5651f43b__0)))));
    bufp->fullBit(oldp+10838,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_3_opcode))));
    bufp->fullBit(oldp+10839,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_0_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_40) 
                                  & (IData)(vlSelf->__VdfgTmp_hcda7edad__0)))));
    bufp->fullBit(oldp+10840,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_1_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_230) 
                                  & (IData)(vlSelf->__VdfgTmp_hdfe3971f__0)))));
    bufp->fullBit(oldp+10841,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_2_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_420) 
                                  & (IData)(vlSelf->__VdfgTmp_he4d09561__0)))));
    bufp->fullBit(oldp+10842,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_3_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_610) 
                                  & (IData)(vlSelf->__VdfgTmp_h5c3f949b__0)))));
    bufp->fullBit(oldp+10843,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_4_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_800) 
                                  & (IData)(vlSelf->__VdfgTmp_h4798938d__0)))));
    bufp->fullBit(oldp+10844,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_5_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_990) 
                                  & (IData)(vlSelf->__VdfgTmp_hcc8916e1__0)))));
    bufp->fullBit(oldp+10845,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_6_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1180) 
                                  & (IData)(vlSelf->__VdfgTmp_ha0b5b97e__0)))));
    bufp->fullBit(oldp+10846,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_7_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1370) 
                                  & (IData)(vlSelf->__VdfgTmp_haad31196__0)))));
    bufp->fullBit(oldp+10847,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_8_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1560) 
                                  & (IData)(vlSelf->__VdfgTmp_h75c9a347__0)))));
    bufp->fullBit(oldp+10848,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_9_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1750) 
                                  & (IData)(vlSelf->__VdfgTmp_h0f151a33__0)))));
    bufp->fullBit(oldp+10849,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_10_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1940) 
                                  & (IData)(vlSelf->__VdfgTmp_h75c6d62f__0)))));
    bufp->fullBit(oldp+10850,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_11_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2130) 
                                  & (IData)(vlSelf->__VdfgTmp_hf3ff2df8__0)))));
    bufp->fullBit(oldp+10851,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_12_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2320) 
                                  & (IData)(vlSelf->__VdfgTmp_hff56f36a__0)))));
    bufp->fullBit(oldp+10852,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_13_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2510) 
                                  & (IData)(vlSelf->__VdfgTmp_h4a791e98__0)))));
    bufp->fullBit(oldp+10853,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_14_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2700) 
                                  & (IData)(vlSelf->__VdfgTmp_hc0bc10ed__0)))));
    bufp->fullBit(oldp+10854,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_15_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2890) 
                                  & (IData)(vlSelf->__VdfgTmp_h90404f4f__0)))));
    bufp->fullBit(oldp+10855,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_4_opcode))));
    bufp->fullBit(oldp+10856,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_0_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_51) 
                                  & (IData)(vlSelf->__VdfgTmp_h7d103831__0)))));
    bufp->fullBit(oldp+10857,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_1_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_241) 
                                  & (IData)(vlSelf->__VdfgTmp_h4e70e1a3__0)))));
    bufp->fullBit(oldp+10858,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_2_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_431) 
                                  & (IData)(vlSelf->__VdfgTmp_h7b61e015__0)))));
    bufp->fullBit(oldp+10859,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_3_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_621) 
                                  & (IData)(vlSelf->__VdfgTmp_hcc4e4917__0)))));
    bufp->fullBit(oldp+10860,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_4_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_811) 
                                  & (IData)(vlSelf->__VdfgTmp_h362ffc19__0)))));
    bufp->fullBit(oldp+10861,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_5_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1001) 
                                  & (IData)(vlSelf->__VdfgTmp_h5b3a2455__0)))));
    bufp->fullBit(oldp+10862,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_6_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1191) 
                                  & (IData)(vlSelf->__VdfgTmp_h305a4bca__0)))));
    bufp->fullBit(oldp+10863,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_7_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1381) 
                                  & (IData)(vlSelf->__VdfgTmp_hd944e302__0)))));
    bufp->fullBit(oldp+10864,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_8_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1571) 
                                  & (IData)(vlSelf->__VdfgTmp_he5594cd3__0)))));
    bufp->fullBit(oldp+10865,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_9_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1761) 
                                  & (IData)(vlSelf->__VdfgTmp_hbea635cf__0)))));
    bufp->fullBit(oldp+10866,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_10_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1951) 
                                  & (IData)(vlSelf->__VdfgTmp_h0469e5bb__0)))));
    bufp->fullBit(oldp+10867,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_11_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2141) 
                                  & (IData)(vlSelf->__VdfgTmp_h6048586c__0)))));
    bufp->fullBit(oldp+10868,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_12_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2331) 
                                  & (IData)(vlSelf->__VdfgTmp_h6fc7a41e__0)))));
    bufp->fullBit(oldp+10869,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_13_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2521) 
                                  & (IData)(vlSelf->__VdfgTmp_h3ae8e00c__0)))));
    bufp->fullBit(oldp+10870,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_14_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2711) 
                                  & (IData)(vlSelf->__VdfgTmp_hb02f4261__0)))));
    bufp->fullBit(oldp+10871,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_15_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2901) 
                                  & (IData)(vlSelf->__VdfgTmp_h61d161db__0)))));
    bufp->fullBit(oldp+10872,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_5_opcode))));
    bufp->fullBit(oldp+10873,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_0_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_62) 
                                  & (IData)(vlSelf->__VdfgTmp_h105d4c66__0)))));
    bufp->fullBit(oldp+10874,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_1_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_252) 
                                  & (IData)(vlSelf->__VdfgTmp_ha4bd7554__0)))));
    bufp->fullBit(oldp+10875,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_2_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_442) 
                                  & (IData)(vlSelf->__VdfgTmp_h902574a6__0)))));
    bufp->fullBit(oldp+10876,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_3_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_632) 
                                  & (IData)(vlSelf->__VdfgTmp_h17053546__0)))));
    bufp->fullBit(oldp+10877,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_4_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_822) 
                                  & (IData)(vlSelf->__VdfgTmp_h10f37048__0)))));
    bufp->fullBit(oldp+10878,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_5_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1012) 
                                  & (IData)(vlSelf->__VdfgTmp_hb077b8ba__0)))));
    bufp->fullBit(oldp+10879,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_6_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1202) 
                                  & (IData)(vlSelf->__VdfgTmp_hdd9ec7bb__0)))));
    bufp->fullBit(oldp+10880,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_7_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1392) 
                                  & (IData)(vlSelf->__VdfgTmp_he6387f53__0)))));
    bufp->fullBit(oldp+10881,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_8_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1582) 
                                  & (IData)(vlSelf->__VdfgTmp_hcee2c102__0)))));
    bufp->fullBit(oldp+10882,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_9_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1772) 
                                  & (IData)(vlSelf->__VdfgTmp_h5862b87e__0)))));
    bufp->fullBit(oldp+10883,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_10_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1962) 
                                  & (IData)(vlSelf->__VdfgTmp_h2aad69ea__0)))));
    bufp->fullBit(oldp+10884,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_11_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2152) 
                                  & (IData)(vlSelf->__VdfgTmp_h4695cfb3__0)))));
    bufp->fullBit(oldp+10885,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_12_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2342) 
                                  & (IData)(vlSelf->__VdfgTmp_h480050a1__0)))));
    bufp->fullBit(oldp+10886,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_13_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2532) 
                                  & (IData)(vlSelf->__VdfgTmp_h1f247c53__0)))));
    bufp->fullBit(oldp+10887,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_14_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2722) 
                                  & (IData)(vlSelf->__VdfgTmp_h8dd2bed2__0)))));
    bufp->fullBit(oldp+10888,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_15_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2912) 
                                  & (IData)(vlSelf->__VdfgTmp_h4c9ded0a__0)))));
    bufp->fullBit(oldp+10889,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_6_opcode))));
    bufp->fullBit(oldp+10890,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_0_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_73) 
                                  & (IData)(vlSelf->__VdfgTmp_hcf3953e8__0)))));
    bufp->fullBit(oldp+10891,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_1_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_263) 
                                  & (IData)(vlSelf->__VdfgTmp_hdc590eda__0)))));
    bufp->fullBit(oldp+10892,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_2_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_453) 
                                  & (IData)(vlSelf->__VdfgTmp_he9591f5c__0)))));
    bufp->fullBit(oldp+10893,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_3_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_643) 
                                  & (IData)(vlSelf->__VdfgTmp_h5ea12edc__0)))));
    bufp->fullBit(oldp+10894,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_4_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_833) 
                                  & (IData)(vlSelf->__VdfgTmp_h581715d6__0)))));
    bufp->fullBit(oldp+10895,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_5_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1023) 
                                  & (IData)(vlSelf->__VdfgTmp_hc9139f2c__0)))));
    bufp->fullBit(oldp+10896,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_6_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1213) 
                                  & (IData)(vlSelf->__VdfgTmp_ha2332305__0)))));
    bufp->fullBit(oldp+10897,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_7_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1403) 
                                  & (IData)(vlSelf->__VdfgTmp_haf5d9bc9__0)))));
    bufp->fullBit(oldp+10898,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_8_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1593) 
                                  & (IData)(vlSelf->__VdfgTmp_h7746258c__0)))));
    bufp->fullBit(oldp+10899,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_9_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1783) 
                                  & (IData)(vlSelf->__VdfgTmp_h008e9cf4__0)))));
    bufp->fullBit(oldp+10900,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_10_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1973) 
                                  & (IData)(vlSelf->__VdfgTmp_h72414c74__0)))));
    bufp->fullBit(oldp+10901,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_11_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2163) 
                                  & (IData)(vlSelf->__VdfgTmp_hfe71b325__0)))));
    bufp->fullBit(oldp+10902,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_12_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2353) 
                                  & (IData)(vlSelf->__VdfgTmp_h01dc7d57__0)))));
    bufp->fullBit(oldp+10903,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_13_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2543) 
                                  & (IData)(vlSelf->__VdfgTmp_h548398c5__0)))));
    bufp->fullBit(oldp+10904,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_14_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2733) 
                                  & (IData)(vlSelf->__VdfgTmp_hc2369aa8__0)))));
    bufp->fullBit(oldp+10905,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_15_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2923) 
                                  & (IData)(vlSelf->__VdfgTmp_h97f9c894__0)))));
    bufp->fullBit(oldp+10906,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_7_opcode))));
    bufp->fullBit(oldp+10907,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_0_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_84) 
                                  & (IData)(vlSelf->__VdfgTmp_hf833fb5c__0)))));
    bufp->fullBit(oldp+10908,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_1_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_274) 
                                  & (IData)(vlSelf->__VdfgTmp_hd35fa64e__0)))));
    bufp->fullBit(oldp+10909,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_2_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_464) 
                                  & (IData)(vlSelf->__VdfgTmp_hf844a7b0__0)))));
    bufp->fullBit(oldp+10910,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_3_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_654) 
                                  & (IData)(vlSelf->__VdfgTmp_h4fab8648__0)))));
    bufp->fullBit(oldp+10911,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_4_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_844) 
                                  & (IData)(vlSelf->__VdfgTmp_h4b0cbd42__0)))));
    bufp->fullBit(oldp+10912,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_5_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1034) 
                                  & (IData)(vlSelf->__VdfgTmp_hd816e7b0__0)))));
    bufp->fullBit(oldp+10913,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_6_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1224) 
                                  & (IData)(vlSelf->__VdfgTmp_hb5398ab1__0)))));
    bufp->fullBit(oldp+10914,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_7_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1414) 
                                  & (IData)(vlSelf->__VdfgTmp_h5ea720a5__0)))));
    bufp->fullBit(oldp+10915,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_8_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1604) 
                                  & (IData)(vlSelf->__VdfgTmp_h667d9278__0)))));
    bufp->fullBit(oldp+10916,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_9_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1794) 
                                  & (IData)(vlSelf->__VdfgTmp_h33810b60__0)))));
    bufp->fullBit(oldp+10917,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_10_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1984) 
                                  & (IData)(vlSelf->__VdfgTmp_h814aa4e0__0)))));
    bufp->fullBit(oldp+10918,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_11_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2174) 
                                  & (IData)(vlSelf->__VdfgTmp_hef6b1a89__0)))));
    bufp->fullBit(oldp+10919,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_12_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2364) 
                                  & (IData)(vlSelf->__VdfgTmp_hf0e2e5bb__0)))));
    bufp->fullBit(oldp+10920,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_13_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2554) 
                                  & (IData)(vlSelf->__VdfgTmp_h47852fa9__0)))));
    bufp->fullBit(oldp+10921,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_14_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2744) 
                                  & (IData)(vlSelf->__VdfgTmp_h353003dc__0)))));
    bufp->fullBit(oldp+10922,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_15_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2934) 
                                  & (IData)(vlSelf->__VdfgTmp_he4fc2000__0)))));
    bufp->fullBit(oldp+10923,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_8_opcode))));
    bufp->fullBit(oldp+10924,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_0_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_95) 
                                  & (IData)(vlSelf->__VdfgTmp_he79eaa22__0)))));
    bufp->fullBit(oldp+10925,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_1_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_285) 
                                  & (IData)(vlSelf->__VdfgTmp_h35fb5790__0)))));
    bufp->fullBit(oldp+10926,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_2_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_475) 
                                  & (IData)(vlSelf->__VdfgTmp_h02e756e2__0)))));
    bufp->fullBit(oldp+10927,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_3_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_665) 
                                  & (IData)(vlSelf->__VdfgTmp_h65c4d71a__0)))));
    bufp->fullBit(oldp+10928,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_4_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_855) 
                                  & (IData)(vlSelf->__VdfgTmp_ha1b1520c__0)))));
    bufp->fullBit(oldp+10929,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_5_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1045) 
                                  & (IData)(vlSelf->__VdfgTmp_h22b1d666__0)))));
    bufp->fullBit(oldp+10930,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_6_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1235) 
                                  & (IData)(vlSelf->__VdfgTmp_h4adcf9ff__0)))));
    bufp->fullBit(oldp+10931,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_7_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1425) 
                                  & (IData)(vlSelf->__VdfgTmp_h70fa5117__0)))));
    bufp->fullBit(oldp+10932,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_8_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1615) 
                                  & (IData)(vlSelf->__VdfgTmp_h5c20e2c6__0)))));
    bufp->fullBit(oldp+10933,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_9_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1805) 
                                  & (IData)(vlSelf->__VdfgTmp_h292c5bb2__0)))));
    bufp->fullBit(oldp+10934,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_10_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1995) 
                                  & (IData)(vlSelf->__VdfgTmp_h9bef97ae__0)))));
    bufp->fullBit(oldp+10935,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_11_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2185) 
                                  & (IData)(vlSelf->__VdfgTmp_hc9d7ea7f__0)))));
    bufp->fullBit(oldp+10936,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_12_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2375) 
                                  & (IData)(vlSelf->__VdfgTmp_hd6be32ed__0)))));
    bufp->fullBit(oldp+10937,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_13_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2565) 
                                  & (IData)(vlSelf->__VdfgTmp_hac665e1f__0)))));
    bufp->fullBit(oldp+10938,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_14_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2755) 
                                  & (IData)(vlSelf->__VdfgTmp_h1a94d06e__0)))));
    bufp->fullBit(oldp+10939,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_15_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2945) 
                                  & (IData)(vlSelf->__VdfgTmp_hfe5f0fce__0)))));
    bufp->fullBit(oldp+10940,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_9_opcode))));
    bufp->fullBit(oldp+10941,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_0_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_106) 
                                  & (IData)(vlSelf->__VdfgTmp_hd3ac9510__0)))));
    bufp->fullBit(oldp+10942,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_1_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_296) 
                                  & (IData)(vlSelf->__VdfgTmp_he9ed4c82__0)))));
    bufp->fullBit(oldp+10943,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_2_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_486) 
                                  & (IData)(vlSelf->__VdfgTmp_hd6d55df4__0)))));
    bufp->fullBit(oldp+10944,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_3_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_676) 
                                  & (IData)(vlSelf->__VdfgTmp_h2a3aec34__0)))));
    bufp->fullBit(oldp+10945,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_4_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_866) 
                                  & (IData)(vlSelf->__VdfgTmp_h55a35b3e__0)))));
    bufp->fullBit(oldp+10946,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_5_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1056) 
                                  & (IData)(vlSelf->__VdfgTmp_hfe87c174__0)))));
    bufp->fullBit(oldp+10947,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_6_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1246) 
                                  & (IData)(vlSelf->__VdfgTmp_h9ecee0ed__0)))));
    bufp->fullBit(oldp+10948,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_7_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1436) 
                                  & (IData)(vlSelf->__VdfgTmp_ha4c84661__0)))));
    bufp->fullBit(oldp+10949,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_8_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1626) 
                                  & (IData)(vlSelf->__VdfgTmp_h0bd2e834__0)))));
    bufp->fullBit(oldp+10950,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_9_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1816) 
                                  & (IData)(vlSelf->__VdfgTmp_h1d1252ac__0)))));
    bufp->fullBit(oldp+10951,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_10_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2006) 
                                  & (IData)(vlSelf->__VdfgTmp_h67dd8edc__0)))));
    bufp->fullBit(oldp+10952,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_11_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2196) 
                                  & (IData)(vlSelf->__VdfgTmp_h85c5f54d__0)))));
    bufp->fullBit(oldp+10953,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_12_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2386) 
                                  & (IData)(vlSelf->__VdfgTmp_h0d503bff__0)))));
    bufp->fullBit(oldp+10954,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_13_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2576) 
                                  & (IData)(vlSelf->__VdfgTmp_h5874456d__0)))));
    bufp->fullBit(oldp+10955,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_14_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2766) 
                                  & (IData)(vlSelf->__VdfgTmp_hcea2d900__0)))));
    bufp->fullBit(oldp+10956,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_15_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2956) 
                                  & (IData)(vlSelf->__VdfgTmp_h824d06fc__0)))));
    bufp->fullBit(oldp+10957,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_10_opcode))));
    bufp->fullBit(oldp+10958,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_0_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_117) 
                                  & (IData)(vlSelf->__VdfgTmp_h122838eb__0)))));
    bufp->fullBit(oldp+10959,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_1_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_307) 
                                  & (IData)(vlSelf->__VdfgTmp_ha968e1d9__0)))));
    bufp->fullBit(oldp+10960,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_2_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_497) 
                                  & (IData)(vlSelf->__VdfgTmp_h9669e05b__0)))));
    bufp->fullBit(oldp+10961,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_3_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_687) 
                                  & (IData)(vlSelf->__VdfgTmp_he9b649dd__0)))));
    bufp->fullBit(oldp+10962,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_4_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_877) 
                                  & (IData)(vlSelf->__VdfgTmp_h1527fcd7__0)))));
    bufp->fullBit(oldp+10963,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_5_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1067) 
                                  & (IData)(vlSelf->__VdfgTmp_hbe02242f__0)))));
    bufp->fullBit(oldp+10964,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_6_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1257) 
                                  & (IData)(vlSelf->__VdfgTmp_hdf424c04__0)))));
    bufp->fullBit(oldp+10965,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_7_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1447) 
                                  & (IData)(vlSelf->__VdfgTmp_he44ce2c8__0)))));
    bufp->fullBit(oldp+10966,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_8_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1637) 
                                  & (IData)(vlSelf->__VdfgTmp_hc8514c8d__0)))));
    bufp->fullBit(oldp+10967,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_9_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1827) 
                                  & (IData)(vlSelf->__VdfgTmp_h5d9e35f5__0)))));
    bufp->fullBit(oldp+10968,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_10_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2017) 
                                  & (IData)(vlSelf->__VdfgTmp_h2751e575__0)))));
    bufp->fullBit(oldp+10969,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_11_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2207) 
                                  & (IData)(vlSelf->__VdfgTmp_h45405826__0)))));
    bufp->fullBit(oldp+10970,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_12_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2397) 
                                  & (IData)(vlSelf->__VdfgTmp_h4acfa454__0)))));
    bufp->fullBit(oldp+10971,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_13_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2587) 
                                  & (IData)(vlSelf->__VdfgTmp_h19f0e1c6__0)))));
    bufp->fullBit(oldp+10972,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_14_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2777) 
                                  & (IData)(vlSelf->__VdfgTmp_h8f2745a7__0)))));
    bufp->fullBit(oldp+10973,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_15_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2967) 
                                  & (IData)(vlSelf->__VdfgTmp_h42c96195__0)))));
    bufp->fullBit(oldp+10974,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_11_opcode))));
    bufp->fullBit(oldp+10975,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_0_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_128) 
                                  & (IData)(vlSelf->__VdfgTmp_h941b3b68__0)))));
    bufp->fullBit(oldp+10976,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_1_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_318) 
                                  & (IData)(vlSelf->__VdfgTmp_h2087e65a__0)))));
    bufp->fullBit(oldp+10977,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_2_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_508) 
                                  & (IData)(vlSelf->__VdfgTmp_h2c7ce7dc__0)))));
    bufp->fullBit(oldp+10978,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_3_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_698) 
                                  & (IData)(vlSelf->__VdfgTmp_h9343465c__0)))));
    bufp->fullBit(oldp+10979,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_4_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_888) 
                                  & (IData)(vlSelf->__VdfgTmp_h9f34fd56__0)))));
    bufp->fullBit(oldp+10980,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_5_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1078) 
                                  & (IData)(vlSelf->__VdfgTmp_h342d27ac__0)))));
    bufp->fullBit(oldp+10981,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_6_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1268) 
                                  & (IData)(vlSelf->__VdfgTmp_h59514a85__0)))));
    bufp->fullBit(oldp+10982,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_7_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1458) 
                                  & (IData)(vlSelf->__VdfgTmp_h627fe049__0)))));
    bufp->fullBit(oldp+10983,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_8_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1648) 
                                  & (IData)(vlSelf->__VdfgTmp_hb2a4520c__0)))));
    bufp->fullBit(oldp+10984,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_9_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1838) 
                                  & (IData)(vlSelf->__VdfgTmp_hc7a8cb74__0)))));
    bufp->fullBit(oldp+10985,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_10_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2028) 
                                  & (IData)(vlSelf->__VdfgTmp_had62e4f4__0)))));
    bufp->fullBit(oldp+10986,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_11_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2218) 
                                  & (IData)(vlSelf->__VdfgTmp_h3b535aa5__0)))));
    bufp->fullBit(oldp+10987,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_12_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2408) 
                                  & (IData)(vlSelf->__VdfgTmp_hc43aa5d7__0)))));
    bufp->fullBit(oldp+10988,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_13_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2598) 
                                  & (IData)(vlSelf->__VdfgTmp_h93ddef45__0)))));
    bufp->fullBit(oldp+10989,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_14_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2788) 
                                  & (IData)(vlSelf->__VdfgTmp_h09184328__0)))));
    bufp->fullBit(oldp+10990,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_15_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2978) 
                                  & (IData)(vlSelf->__VdfgTmp_hc8a46014__0)))));
    bufp->fullBit(oldp+10991,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_12_opcode))));
    bufp->fullBit(oldp+10992,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_0_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_139) 
                                  & (IData)(vlSelf->__VdfgTmp_h1c5681ea__0)))));
    bufp->fullBit(oldp+10993,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_1_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_329) 
                                  & (IData)(vlSelf->__VdfgTmp_ha8b2b8d8__0)))));
    bufp->fullBit(oldp+10994,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_2_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_519) 
                                  & (IData)(vlSelf->__VdfgTmp_h942f495a__0)))));
    bufp->fullBit(oldp+10995,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_3_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_709) 
                                  & (IData)(vlSelf->__VdfgTmp_heb0ce0d2__0)))));
    bufp->fullBit(oldp+10996,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_4_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_899) 
                                  & (IData)(vlSelf->__VdfgTmp_h14e9a7d4__0)))));
    bufp->fullBit(oldp+10997,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_5_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1089) 
                                  & (IData)(vlSelf->__VdfgTmp_hbc79cd2e__0)))));
    bufp->fullBit(oldp+10998,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_6_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1279) 
                                  & (IData)(vlSelf->__VdfgTmp_hd1849507__0)))));
    bufp->fullBit(oldp+10999,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_7_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1469) 
                                  & (IData)(vlSelf->__VdfgTmp_hfa024dcf__0)))));
    bufp->fullBit(oldp+11000,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_8_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1659) 
                                  & (IData)(vlSelf->__VdfgTmp_hca98f78e__0)))));
    bufp->fullBit(oldp+11001,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_9_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1849) 
                                  & (IData)(vlSelf->__VdfgTmp_h5c646e0a__0)))));
    bufp->fullBit(oldp+11002,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_10_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2039) 
                                  & (IData)(vlSelf->__VdfgTmp_h2697ba76__0)))));
    bufp->fullBit(oldp+11003,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_11_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2229) 
                                  & (IData)(vlSelf->__VdfgTmp_h428e0127__0)))));
    bufp->fullBit(oldp+11004,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_12_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2419) 
                                  & (IData)(vlSelf->__VdfgTmp_h4c060f55__0)))));
    bufp->fullBit(oldp+11005,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_13_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2609) 
                                  & (IData)(vlSelf->__VdfgTmp_h1b2e4ac7__0)))));
    bufp->fullBit(oldp+11006,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_14_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2799) 
                                  & (IData)(vlSelf->__VdfgTmp_h91ececa6__0)))));
    bufp->fullBit(oldp+11007,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_15_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2989) 
                                  & (IData)(vlSelf->__VdfgTmp_h40973a96__0)))));
    bufp->fullBit(oldp+11008,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_13_opcode))));
    bufp->fullBit(oldp+11009,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_0_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_150) 
                                  & (IData)(vlSelf->__VdfgTmp_hb9c3e853__0)))));
    bufp->fullBit(oldp+11010,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_1_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_340) 
                                  & (IData)(vlSelf->__VdfgTmp_h134f9141__0)))));
    bufp->fullBit(oldp+11011,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_2_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_530) 
                                  & (IData)(vlSelf->__VdfgTmp_h38b490b3__0)))));
    bufp->fullBit(oldp+11012,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_3_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_720) 
                                  & (IData)(vlSelf->__VdfgTmp_h8f9b9975__0)))));
    bufp->fullBit(oldp+11013,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_4_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_910) 
                                  & (IData)(vlSelf->__VdfgTmp_h8b7c8c7f__0)))));
    bufp->fullBit(oldp+11014,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_5_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1100) 
                                  & (IData)(vlSelf->__VdfgTmp_h18e514b7__0)))));
    bufp->fullBit(oldp+11015,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_6_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1290) 
                                  & (IData)(vlSelf->__VdfgTmp_h7529bbac__0)))));
    bufp->fullBit(oldp+11016,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_7_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1480) 
                                  & (IData)(vlSelf->__VdfgTmp_h1eb713a0__0)))));
    bufp->fullBit(oldp+11017,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_8_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1670) 
                                  & (IData)(vlSelf->__VdfgTmp_ha66d9d75__0)))));
    bufp->fullBit(oldp+11018,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_9_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1860) 
                                  & (IData)(vlSelf->__VdfgTmp_hf3f1046d__0)))));
    bufp->fullBit(oldp+11019,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_10_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2050) 
                                  & (IData)(vlSelf->__VdfgTmp_hc13ad41d__0)))));
    bufp->fullBit(oldp+11020,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_11_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2240) 
                                  & (IData)(vlSelf->__VdfgTmp_h2f1b2b8e__0)))));
    bufp->fullBit(oldp+11021,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_12_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2430) 
                                  & (IData)(vlSelf->__VdfgTmp_hb0f2f4bc__0)))));
    bufp->fullBit(oldp+11022,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_13_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2620) 
                                  & (IData)(vlSelf->__VdfgTmp_h879510ae__0)))));
    bufp->fullBit(oldp+11023,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_14_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2810) 
                                  & (IData)(vlSelf->__VdfgTmp_h754012df__0)))));
    bufp->fullBit(oldp+11024,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_15_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_3000) 
                                  & (IData)(vlSelf->__VdfgTmp_h24ec513d__0)))));
    bufp->fullBit(oldp+11025,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_14_opcode))));
    bufp->fullBit(oldp+11026,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_0_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_161) 
                                  & (IData)(vlSelf->__VdfgTmp_h87720796__0)))));
    bufp->fullBit(oldp+11027,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_1_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_351) 
                                  & (IData)(vlSelf->__VdfgTmp_h159e3d04__0)))));
    bufp->fullBit(oldp+11028,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_2_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_541) 
                                  & (IData)(vlSelf->__VdfgTmp_h21023376__0)))));
    bufp->fullBit(oldp+11029,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_3_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_731) 
                                  & (IData)(vlSelf->__VdfgTmp_h86687ab6__0)))));
    bufp->fullBit(oldp+11030,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_4_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_921) 
                                  & (IData)(vlSelf->__VdfgTmp_h81ce29b8__0)))));
    bufp->fullBit(oldp+11031,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_5_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1111) 
                                  & (IData)(vlSelf->__VdfgTmp_h0154730a__0)))));
    bufp->fullBit(oldp+11032,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_6_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1301) 
                                  & (IData)(vlSelf->__VdfgTmp_h6a781f6b__0)))));
    bufp->fullBit(oldp+11033,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_7_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1491) 
                                  & (IData)(vlSelf->__VdfgTmp_h1766b7e3__0)))));
    bufp->fullBit(oldp+11034,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_8_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1681) 
                                  & (IData)(vlSelf->__VdfgTmp_hbfbf79b2__0)))));
    bufp->fullBit(oldp+11035,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_9_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1871) 
                                  & (IData)(vlSelf->__VdfgTmp_hc947e02e__0)))));
    bufp->fullBit(oldp+11036,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_10_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2061) 
                                  & (IData)(vlSelf->__VdfgTmp_hbb88305a__0)))));
    bufp->fullBit(oldp+11037,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_11_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2251) 
                                  & (IData)(vlSelf->__VdfgTmp_h29aa87c3__0)))));
    bufp->fullBit(oldp+11038,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_12_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2441) 
                                  & (IData)(vlSelf->__VdfgTmp_hb9258971__0)))));
    bufp->fullBit(oldp+11039,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_13_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2631) 
                                  & (IData)(vlSelf->__VdfgTmp_h8ccab4e3__0)))));
    bufp->fullBit(oldp+11040,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_14_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2821) 
                                  & (IData)(vlSelf->__VdfgTmp_h7af17682__0)))));
    bufp->fullBit(oldp+11041,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_15_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_3011) 
                                  & (IData)(vlSelf->__VdfgTmp_hdfb2b57a__0)))));
    bufp->fullBit(oldp+11042,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_15_opcode))));
    bufp->fullBit(oldp+11043,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_0_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_172) 
                                  & (IData)(vlSelf->__VdfgTmp_h19245a98__0)))));
    bufp->fullBit(oldp+11044,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_1_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_362) 
                                  & (IData)(vlSelf->__VdfgTmp_hb264060a__0)))));
    bufp->fullBit(oldp+11045,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_2_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_552) 
                                  & (IData)(vlSelf->__VdfgTmp_h9f5c066c__0)))));
    bufp->fullBit(oldp+11046,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_3_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_742) 
                                  & (IData)(vlSelf->__VdfgTmp_he0a2278c__0)))));
    bufp->fullBit(oldp+11047,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_4_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_932) 
                                  & (IData)(vlSelf->__VdfgTmp_h2a146286__0)))));
    bufp->fullBit(oldp+11048,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_5_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1122) 
                                  & (IData)(vlSelf->__VdfgTmp_ha70e87fc__0)))));
    bufp->fullBit(oldp+11049,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_6_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1312) 
                                  & (IData)(vlSelf->__VdfgTmp_hd4362a75__0)))));
    bufp->fullBit(oldp+11050,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_7_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1502) 
                                  & (IData)(vlSelf->__VdfgTmp_hfd508099__0)))));
    bufp->fullBit(oldp+11051,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_8_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1692) 
                                  & (IData)(vlSelf->__VdfgTmp_hc14532bc__0)))));
    bufp->fullBit(oldp+11052,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_9_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_1882) 
                                  & (IData)(vlSelf->__VdfgTmp_h5289ab24__0)))));
    bufp->fullBit(oldp+11053,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_10_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2072) 
                                  & (IData)(vlSelf->__VdfgTmp_h20424724__0)))));
    bufp->fullBit(oldp+11054,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_11_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2262) 
                                  & (IData)(vlSelf->__VdfgTmp_h4c7cbaf5__0)))));
    bufp->fullBit(oldp+11055,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_12_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2452) 
                                  & (IData)(vlSelf->__VdfgTmp_h53db4267__0)))));
    bufp->fullBit(oldp+11056,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_13_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2642) 
                                  & (IData)(vlSelf->__VdfgTmp_h26fc8f95__0)))));
    bufp->fullBit(oldp+11057,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_14_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_2832) 
                                  & (IData)(vlSelf->__VdfgTmp_h943ba398__0)))));
    bufp->fullBit(oldp+11058,(((IData)(vlSelf->DCache__DOT__miss_io_snoopHold_15_valid) 
                               & ((IData)(vlSelf->DCache__DOT__miss__DOT___dropHit_T_3022) 
                                  & (IData)(vlSelf->__VdfgTmp_h45c4c044__0)))));
    bufp->fullBit(oldp+11059,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_0_state))));
    bufp->fullBit(oldp+11060,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_1_state))));
    bufp->fullBit(oldp+11061,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_2_state))));
    bufp->fullBit(oldp+11062,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_3_state))));
    bufp->fullBit(oldp+11063,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_4_state))));
    bufp->fullBit(oldp+11064,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_5_state))));
    bufp->fullBit(oldp+11065,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_6_state))));
    bufp->fullBit(oldp+11066,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_7_state))));
    bufp->fullBit(oldp+11067,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_8_state))));
    bufp->fullBit(oldp+11068,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_9_state))));
    bufp->fullBit(oldp+11069,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_10_state))));
    bufp->fullBit(oldp+11070,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_11_state))));
    bufp->fullBit(oldp+11071,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_12_state))));
    bufp->fullBit(oldp+11072,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_13_state))));
    bufp->fullBit(oldp+11073,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_14_state))));
    bufp->fullBit(oldp+11074,((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_15_state))));
    bufp->fullCData(oldp+11075,((((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_7_state)) 
                                  << 7U) | (((0U == (IData)(vlSelf->DCache__DOT__probe__DOT__entries_6_state)) 
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
    bufp->fullCData(oldp+11076,(vlSelf->DCache__DOT__probe__DOT__allocId),4);
    bufp->fullBit(oldp+11077,(((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_0_state)) 
                               | ((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_1_state)) 
                                  | ((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_2_state)) 
                                     | ((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_3_state)) 
                                        | ((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_4_state)) 
                                           | ((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_5_state)) 
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
    bufp->fullBit(oldp+11078,(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_0__DOT__tagSram__DOT__mem_0_MPORT_1_en));
    bufp->fullCData(oldp+11079,((3U & ((IData)(1U) 
                                       << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)))),2);
    bufp->fullBit(oldp+11080,(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_1__DOT__tagSram__DOT__mem_0_MPORT_1_en));
    bufp->fullCData(oldp+11081,((3U & (((IData)(1U) 
                                        << (IData)(vlSelf->DCache__DOT__pipe__DOT__s3_way)) 
                                       >> 2U))),2);
    bufp->fullBit(oldp+11082,(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_0__DOT__tagSram__DOT__mem_0_MPORT_en_pipe_0));
    bufp->fullCData(oldp+11083,(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_0__DOT__tagSram__DOT__mem_1_MPORT_addr_pipe_0),8);
    bufp->fullBit(oldp+11084,(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_0__DOT__tagSram__DOT__mem_1_MPORT_en_pipe_0));
    bufp->fullBit(oldp+11085,(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_1__DOT__tagSram__DOT__mem_0_MPORT_en_pipe_0));
    bufp->fullCData(oldp+11086,(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_1__DOT__tagSram__DOT__mem_1_MPORT_addr_pipe_0),8);
    bufp->fullBit(oldp+11087,(vlSelf->DCache__DOT__tags__DOT__arrays_0__DOT__banks_1__DOT__tagSram__DOT__mem_1_MPORT_en_pipe_0));
    bufp->fullBit(oldp+11088,(vlSelf->DCache__DOT__tags__DOT__arrays_1__DOT__banks_0__DOT__tagSram__DOT__mem_0_MPORT_en_pipe_0));
    bufp->fullCData(oldp+11089,(vlSelf->DCache__DOT__tags__DOT__arrays_1__DOT__banks_0__DOT__tagSram__DOT__mem_0_MPORT_addr_pipe_0),8);
    bufp->fullBit(oldp+11090,(vlSelf->DCache__DOT__tags__DOT__arrays_1__DOT__banks_0__DOT__tagSram__DOT__mem_1_MPORT_en_pipe_0));
    bufp->fullBit(oldp+11091,(vlSelf->DCache__DOT__tags__DOT__arrays_1__DOT__banks_1__DOT__tagSram__DOT__mem_0_MPORT_en_pipe_0));
    bufp->fullCData(oldp+11092,(vlSelf->DCache__DOT__tags__DOT__arrays_1__DOT__banks_1__DOT__tagSram__DOT__mem_0_MPORT_addr_pipe_0),8);
    bufp->fullBit(oldp+11093,(vlSelf->DCache__DOT__tags__DOT__arrays_1__DOT__banks_1__DOT__tagSram__DOT__mem_1_MPORT_en_pipe_0));
    bufp->fullCData(oldp+11094,(vlSelf->DCache__DOT__tags__DOT__arrays_1__DOT__banks_1__DOT__tagSram__DOT__mem_1_MPORT_addr_pipe_0),8);
    bufp->fullBit(oldp+11095,(vlSelf->DCache__DOT__tags__DOT__arrays_2__DOT__banks_0__DOT__tagSram__DOT__mem_0_MPORT_en_pipe_0));
    bufp->fullCData(oldp+11096,(vlSelf->DCache__DOT__tags__DOT__arrays_2__DOT__banks_0__DOT__tagSram__DOT__mem_1_MPORT_addr_pipe_0),8);
    bufp->fullBit(oldp+11097,(vlSelf->DCache__DOT__tags__DOT__arrays_2__DOT__banks_0__DOT__tagSram__DOT__mem_1_MPORT_en_pipe_0));
    bufp->fullBit(oldp+11098,(vlSelf->DCache__DOT__tags__DOT__arrays_2__DOT__banks_1__DOT__tagSram__DOT__mem_0_MPORT_en_pipe_0));
    bufp->fullCData(oldp+11099,(vlSelf->DCache__DOT__tags__DOT__arrays_2__DOT__banks_1__DOT__tagSram__DOT__mem_1_MPORT_addr_pipe_0),8);
    bufp->fullBit(oldp+11100,(vlSelf->DCache__DOT__tags__DOT__arrays_2__DOT__banks_1__DOT__tagSram__DOT__mem_1_MPORT_en_pipe_0));
    bufp->fullBit(oldp+11101,(vlSelf->DCache__DOT__wb__DOT__entries_0_busy));
    bufp->fullCData(oldp+11102,(vlSelf->DCache__DOT__wb__DOT__entries_0_opcode),3);
    bufp->fullCData(oldp+11103,(vlSelf->DCache__DOT__wb__DOT__entries_0_resp),3);
    bufp->fullCData(oldp+11104,(vlSelf->DCache__DOT__wb__DOT__entries_0_snpTxnId),8);
    bufp->fullQData(oldp+11105,(vlSelf->DCache__DOT__wb__DOT__entries_0_addr),48);
    bufp->fullWData(oldp+11107,(vlSelf->DCache__DOT__wb__DOT__entries_0_data),512);
    bufp->fullBit(oldp+11123,(vlSelf->DCache__DOT__wb__DOT__entries_0_dataReady));
    bufp->fullCData(oldp+11124,(vlSelf->DCache__DOT__wb__DOT__entries_0_dbid),8);
    bufp->fullBit(oldp+11125,(vlSelf->DCache__DOT__wb__DOT__entries_0_dbidValid));
    bufp->fullBit(oldp+11126,(vlSelf->DCache__DOT__wb__DOT__entries_0_compGot));
    bufp->fullBit(oldp+11127,(vlSelf->DCache__DOT__wb__DOT__entries_0_dataSent));
    bufp->fullBit(oldp+11128,(vlSelf->DCache__DOT__wb__DOT__entries_0_rspSeen));
    bufp->fullCData(oldp+11129,(vlSelf->DCache__DOT__wb__DOT__entries_0_compSrc),7);
    bufp->fullBit(oldp+11130,(vlSelf->DCache__DOT__wb__DOT__entries_0_traceTag));
    bufp->fullCData(oldp+11131,(vlSelf->DCache__DOT__wb__DOT__entries_0_state),2);
    bufp->fullCData(oldp+11132,(vlSelf->DCache__DOT__wb__DOT__entries_0_beatsLeft),2);
    bufp->fullBit(oldp+11133,(vlSelf->DCache__DOT__wb__DOT__entries_1_busy));
    bufp->fullCData(oldp+11134,(vlSelf->DCache__DOT__wb__DOT__entries_1_opcode),3);
    bufp->fullCData(oldp+11135,(vlSelf->DCache__DOT__wb__DOT__entries_1_resp),3);
    bufp->fullCData(oldp+11136,(vlSelf->DCache__DOT__wb__DOT__entries_1_snpTxnId),8);
    bufp->fullQData(oldp+11137,(vlSelf->DCache__DOT__wb__DOT__entries_1_addr),48);
    bufp->fullWData(oldp+11139,(vlSelf->DCache__DOT__wb__DOT__entries_1_data),512);
    bufp->fullBit(oldp+11155,(vlSelf->DCache__DOT__wb__DOT__entries_1_dataReady));
    bufp->fullCData(oldp+11156,(vlSelf->DCache__DOT__wb__DOT__entries_1_dbid),8);
    bufp->fullBit(oldp+11157,(vlSelf->DCache__DOT__wb__DOT__entries_1_dbidValid));
    bufp->fullBit(oldp+11158,(vlSelf->DCache__DOT__wb__DOT__entries_1_compGot));
    bufp->fullBit(oldp+11159,(vlSelf->DCache__DOT__wb__DOT__entries_1_dataSent));
    bufp->fullBit(oldp+11160,(vlSelf->DCache__DOT__wb__DOT__entries_1_rspSeen));
    bufp->fullCData(oldp+11161,(vlSelf->DCache__DOT__wb__DOT__entries_1_compSrc),7);
    bufp->fullBit(oldp+11162,(vlSelf->DCache__DOT__wb__DOT__entries_1_traceTag));
    bufp->fullCData(oldp+11163,(vlSelf->DCache__DOT__wb__DOT__entries_1_state),2);
    bufp->fullCData(oldp+11164,(vlSelf->DCache__DOT__wb__DOT__entries_1_beatsLeft),2);
    bufp->fullBit(oldp+11165,(vlSelf->DCache__DOT__wb__DOT__entries_2_busy));
    bufp->fullCData(oldp+11166,(vlSelf->DCache__DOT__wb__DOT__entries_2_opcode),3);
    bufp->fullCData(oldp+11167,(vlSelf->DCache__DOT__wb__DOT__entries_2_resp),3);
    bufp->fullCData(oldp+11168,(vlSelf->DCache__DOT__wb__DOT__entries_2_snpTxnId),8);
    bufp->fullQData(oldp+11169,(vlSelf->DCache__DOT__wb__DOT__entries_2_addr),48);
    bufp->fullWData(oldp+11171,(vlSelf->DCache__DOT__wb__DOT__entries_2_data),512);
    bufp->fullBit(oldp+11187,(vlSelf->DCache__DOT__wb__DOT__entries_2_dataReady));
    bufp->fullCData(oldp+11188,(vlSelf->DCache__DOT__wb__DOT__entries_2_dbid),8);
    bufp->fullBit(oldp+11189,(vlSelf->DCache__DOT__wb__DOT__entries_2_dbidValid));
    bufp->fullBit(oldp+11190,(vlSelf->DCache__DOT__wb__DOT__entries_2_compGot));
    bufp->fullBit(oldp+11191,(vlSelf->DCache__DOT__wb__DOT__entries_2_dataSent));
    bufp->fullBit(oldp+11192,(vlSelf->DCache__DOT__wb__DOT__entries_2_rspSeen));
    bufp->fullCData(oldp+11193,(vlSelf->DCache__DOT__wb__DOT__entries_2_compSrc),7);
    bufp->fullBit(oldp+11194,(vlSelf->DCache__DOT__wb__DOT__entries_2_traceTag));
    bufp->fullCData(oldp+11195,(vlSelf->DCache__DOT__wb__DOT__entries_2_state),2);
    bufp->fullCData(oldp+11196,(vlSelf->DCache__DOT__wb__DOT__entries_2_beatsLeft),2);
    bufp->fullBit(oldp+11197,(vlSelf->DCache__DOT__wb__DOT__entries_3_busy));
    bufp->fullCData(oldp+11198,(vlSelf->DCache__DOT__wb__DOT__entries_3_opcode),3);
    bufp->fullCData(oldp+11199,(vlSelf->DCache__DOT__wb__DOT__entries_3_resp),3);
    bufp->fullCData(oldp+11200,(vlSelf->DCache__DOT__wb__DOT__entries_3_snpTxnId),8);
    bufp->fullQData(oldp+11201,(vlSelf->DCache__DOT__wb__DOT__entries_3_addr),48);
    bufp->fullWData(oldp+11203,(vlSelf->DCache__DOT__wb__DOT__entries_3_data),512);
    bufp->fullBit(oldp+11219,(vlSelf->DCache__DOT__wb__DOT__entries_3_dataReady));
    bufp->fullCData(oldp+11220,(vlSelf->DCache__DOT__wb__DOT__entries_3_dbid),8);
    bufp->fullBit(oldp+11221,(vlSelf->DCache__DOT__wb__DOT__entries_3_dbidValid));
    bufp->fullBit(oldp+11222,(vlSelf->DCache__DOT__wb__DOT__entries_3_compGot));
    bufp->fullBit(oldp+11223,(vlSelf->DCache__DOT__wb__DOT__entries_3_dataSent));
    bufp->fullBit(oldp+11224,(vlSelf->DCache__DOT__wb__DOT__entries_3_rspSeen));
    bufp->fullCData(oldp+11225,(vlSelf->DCache__DOT__wb__DOT__entries_3_compSrc),7);
    bufp->fullBit(oldp+11226,(vlSelf->DCache__DOT__wb__DOT__entries_3_traceTag));
    bufp->fullCData(oldp+11227,(vlSelf->DCache__DOT__wb__DOT__entries_3_state),2);
    bufp->fullCData(oldp+11228,(vlSelf->DCache__DOT__wb__DOT__entries_3_beatsLeft),2);
    bufp->fullBit(oldp+11229,(vlSelf->DCache__DOT__wb__DOT__entries_4_busy));
    bufp->fullCData(oldp+11230,(vlSelf->DCache__DOT__wb__DOT__entries_4_opcode),3);
    bufp->fullCData(oldp+11231,(vlSelf->DCache__DOT__wb__DOT__entries_4_resp),3);
    bufp->fullCData(oldp+11232,(vlSelf->DCache__DOT__wb__DOT__entries_4_snpTxnId),8);
    bufp->fullQData(oldp+11233,(vlSelf->DCache__DOT__wb__DOT__entries_4_addr),48);
    bufp->fullWData(oldp+11235,(vlSelf->DCache__DOT__wb__DOT__entries_4_data),512);
    bufp->fullBit(oldp+11251,(vlSelf->DCache__DOT__wb__DOT__entries_4_dataReady));
    bufp->fullCData(oldp+11252,(vlSelf->DCache__DOT__wb__DOT__entries_4_dbid),8);
    bufp->fullBit(oldp+11253,(vlSelf->DCache__DOT__wb__DOT__entries_4_dbidValid));
    bufp->fullBit(oldp+11254,(vlSelf->DCache__DOT__wb__DOT__entries_4_compGot));
    bufp->fullBit(oldp+11255,(vlSelf->DCache__DOT__wb__DOT__entries_4_dataSent));
    bufp->fullBit(oldp+11256,(vlSelf->DCache__DOT__wb__DOT__entries_4_rspSeen));
    bufp->fullCData(oldp+11257,(vlSelf->DCache__DOT__wb__DOT__entries_4_compSrc),7);
    bufp->fullBit(oldp+11258,(vlSelf->DCache__DOT__wb__DOT__entries_4_traceTag));
    bufp->fullCData(oldp+11259,(vlSelf->DCache__DOT__wb__DOT__entries_4_state),2);
    bufp->fullCData(oldp+11260,(vlSelf->DCache__DOT__wb__DOT__entries_4_beatsLeft),2);
    bufp->fullBit(oldp+11261,(vlSelf->DCache__DOT__wb__DOT__entries_5_busy));
    bufp->fullCData(oldp+11262,(vlSelf->DCache__DOT__wb__DOT__entries_5_opcode),3);
    bufp->fullCData(oldp+11263,(vlSelf->DCache__DOT__wb__DOT__entries_5_resp),3);
    bufp->fullCData(oldp+11264,(vlSelf->DCache__DOT__wb__DOT__entries_5_snpTxnId),8);
    bufp->fullQData(oldp+11265,(vlSelf->DCache__DOT__wb__DOT__entries_5_addr),48);
    bufp->fullWData(oldp+11267,(vlSelf->DCache__DOT__wb__DOT__entries_5_data),512);
    bufp->fullBit(oldp+11283,(vlSelf->DCache__DOT__wb__DOT__entries_5_dataReady));
    bufp->fullCData(oldp+11284,(vlSelf->DCache__DOT__wb__DOT__entries_5_dbid),8);
    bufp->fullBit(oldp+11285,(vlSelf->DCache__DOT__wb__DOT__entries_5_dbidValid));
    bufp->fullBit(oldp+11286,(vlSelf->DCache__DOT__wb__DOT__entries_5_compGot));
    bufp->fullBit(oldp+11287,(vlSelf->DCache__DOT__wb__DOT__entries_5_dataSent));
    bufp->fullBit(oldp+11288,(vlSelf->DCache__DOT__wb__DOT__entries_5_rspSeen));
    bufp->fullCData(oldp+11289,(vlSelf->DCache__DOT__wb__DOT__entries_5_compSrc),7);
    bufp->fullBit(oldp+11290,(vlSelf->DCache__DOT__wb__DOT__entries_5_traceTag));
    bufp->fullCData(oldp+11291,(vlSelf->DCache__DOT__wb__DOT__entries_5_state),2);
    bufp->fullCData(oldp+11292,(vlSelf->DCache__DOT__wb__DOT__entries_5_beatsLeft),2);
    bufp->fullBit(oldp+11293,(vlSelf->DCache__DOT__wb__DOT__entries_6_busy));
    bufp->fullCData(oldp+11294,(vlSelf->DCache__DOT__wb__DOT__entries_6_opcode),3);
    bufp->fullCData(oldp+11295,(vlSelf->DCache__DOT__wb__DOT__entries_6_resp),3);
    bufp->fullCData(oldp+11296,(vlSelf->DCache__DOT__wb__DOT__entries_6_snpTxnId),8);
    bufp->fullQData(oldp+11297,(vlSelf->DCache__DOT__wb__DOT__entries_6_addr),48);
    bufp->fullWData(oldp+11299,(vlSelf->DCache__DOT__wb__DOT__entries_6_data),512);
    bufp->fullBit(oldp+11315,(vlSelf->DCache__DOT__wb__DOT__entries_6_dataReady));
    bufp->fullCData(oldp+11316,(vlSelf->DCache__DOT__wb__DOT__entries_6_dbid),8);
    bufp->fullBit(oldp+11317,(vlSelf->DCache__DOT__wb__DOT__entries_6_dbidValid));
    bufp->fullBit(oldp+11318,(vlSelf->DCache__DOT__wb__DOT__entries_6_compGot));
    bufp->fullBit(oldp+11319,(vlSelf->DCache__DOT__wb__DOT__entries_6_dataSent));
    bufp->fullBit(oldp+11320,(vlSelf->DCache__DOT__wb__DOT__entries_6_rspSeen));
    bufp->fullCData(oldp+11321,(vlSelf->DCache__DOT__wb__DOT__entries_6_compSrc),7);
    bufp->fullBit(oldp+11322,(vlSelf->DCache__DOT__wb__DOT__entries_6_traceTag));
    bufp->fullCData(oldp+11323,(vlSelf->DCache__DOT__wb__DOT__entries_6_state),2);
    bufp->fullCData(oldp+11324,(vlSelf->DCache__DOT__wb__DOT__entries_6_beatsLeft),2);
    bufp->fullBit(oldp+11325,(vlSelf->DCache__DOT__wb__DOT__entries_7_busy));
    bufp->fullCData(oldp+11326,(vlSelf->DCache__DOT__wb__DOT__entries_7_opcode),3);
    bufp->fullCData(oldp+11327,(vlSelf->DCache__DOT__wb__DOT__entries_7_resp),3);
    bufp->fullCData(oldp+11328,(vlSelf->DCache__DOT__wb__DOT__entries_7_snpTxnId),8);
    bufp->fullQData(oldp+11329,(vlSelf->DCache__DOT__wb__DOT__entries_7_addr),48);
    bufp->fullWData(oldp+11331,(vlSelf->DCache__DOT__wb__DOT__entries_7_data),512);
    bufp->fullBit(oldp+11347,(vlSelf->DCache__DOT__wb__DOT__entries_7_dataReady));
    bufp->fullCData(oldp+11348,(vlSelf->DCache__DOT__wb__DOT__entries_7_dbid),8);
    bufp->fullBit(oldp+11349,(vlSelf->DCache__DOT__wb__DOT__entries_7_dbidValid));
    bufp->fullBit(oldp+11350,(vlSelf->DCache__DOT__wb__DOT__entries_7_compGot));
    bufp->fullBit(oldp+11351,(vlSelf->DCache__DOT__wb__DOT__entries_7_dataSent));
    bufp->fullBit(oldp+11352,(vlSelf->DCache__DOT__wb__DOT__entries_7_rspSeen));
    bufp->fullCData(oldp+11353,(vlSelf->DCache__DOT__wb__DOT__entries_7_compSrc),7);
    bufp->fullBit(oldp+11354,(vlSelf->DCache__DOT__wb__DOT__entries_7_traceTag));
    bufp->fullCData(oldp+11355,(vlSelf->DCache__DOT__wb__DOT__entries_7_state),2);
    bufp->fullCData(oldp+11356,(vlSelf->DCache__DOT__wb__DOT__entries_7_beatsLeft),2);
    bufp->fullBit(oldp+11357,(vlSelf->DCache__DOT__wb__DOT__entries_8_busy));
    bufp->fullCData(oldp+11358,(vlSelf->DCache__DOT__wb__DOT__entries_8_opcode),3);
    bufp->fullCData(oldp+11359,(vlSelf->DCache__DOT__wb__DOT__entries_8_resp),3);
    bufp->fullCData(oldp+11360,(vlSelf->DCache__DOT__wb__DOT__entries_8_snpTxnId),8);
    bufp->fullQData(oldp+11361,(vlSelf->DCache__DOT__wb__DOT__entries_8_addr),48);
    bufp->fullWData(oldp+11363,(vlSelf->DCache__DOT__wb__DOT__entries_8_data),512);
    bufp->fullBit(oldp+11379,(vlSelf->DCache__DOT__wb__DOT__entries_8_dataReady));
    bufp->fullCData(oldp+11380,(vlSelf->DCache__DOT__wb__DOT__entries_8_dbid),8);
    bufp->fullBit(oldp+11381,(vlSelf->DCache__DOT__wb__DOT__entries_8_dbidValid));
    bufp->fullBit(oldp+11382,(vlSelf->DCache__DOT__wb__DOT__entries_8_compGot));
    bufp->fullBit(oldp+11383,(vlSelf->DCache__DOT__wb__DOT__entries_8_dataSent));
    bufp->fullBit(oldp+11384,(vlSelf->DCache__DOT__wb__DOT__entries_8_rspSeen));
    bufp->fullCData(oldp+11385,(vlSelf->DCache__DOT__wb__DOT__entries_8_compSrc),7);
    bufp->fullBit(oldp+11386,(vlSelf->DCache__DOT__wb__DOT__entries_8_traceTag));
    bufp->fullCData(oldp+11387,(vlSelf->DCache__DOT__wb__DOT__entries_8_state),2);
    bufp->fullCData(oldp+11388,(vlSelf->DCache__DOT__wb__DOT__entries_8_beatsLeft),2);
    bufp->fullBit(oldp+11389,(vlSelf->DCache__DOT__wb__DOT__entries_9_busy));
    bufp->fullCData(oldp+11390,(vlSelf->DCache__DOT__wb__DOT__entries_9_opcode),3);
    bufp->fullCData(oldp+11391,(vlSelf->DCache__DOT__wb__DOT__entries_9_resp),3);
    bufp->fullCData(oldp+11392,(vlSelf->DCache__DOT__wb__DOT__entries_9_snpTxnId),8);
    bufp->fullQData(oldp+11393,(vlSelf->DCache__DOT__wb__DOT__entries_9_addr),48);
    bufp->fullWData(oldp+11395,(vlSelf->DCache__DOT__wb__DOT__entries_9_data),512);
    bufp->fullBit(oldp+11411,(vlSelf->DCache__DOT__wb__DOT__entries_9_dataReady));
    bufp->fullCData(oldp+11412,(vlSelf->DCache__DOT__wb__DOT__entries_9_dbid),8);
    bufp->fullBit(oldp+11413,(vlSelf->DCache__DOT__wb__DOT__entries_9_dbidValid));
    bufp->fullBit(oldp+11414,(vlSelf->DCache__DOT__wb__DOT__entries_9_compGot));
    bufp->fullBit(oldp+11415,(vlSelf->DCache__DOT__wb__DOT__entries_9_dataSent));
    bufp->fullBit(oldp+11416,(vlSelf->DCache__DOT__wb__DOT__entries_9_rspSeen));
    bufp->fullCData(oldp+11417,(vlSelf->DCache__DOT__wb__DOT__entries_9_compSrc),7);
    bufp->fullBit(oldp+11418,(vlSelf->DCache__DOT__wb__DOT__entries_9_traceTag));
    bufp->fullCData(oldp+11419,(vlSelf->DCache__DOT__wb__DOT__entries_9_state),2);
    bufp->fullCData(oldp+11420,(vlSelf->DCache__DOT__wb__DOT__entries_9_beatsLeft),2);
    bufp->fullBit(oldp+11421,(vlSelf->DCache__DOT__wb__DOT__entries_10_busy));
    bufp->fullCData(oldp+11422,(vlSelf->DCache__DOT__wb__DOT__entries_10_opcode),3);
    bufp->fullCData(oldp+11423,(vlSelf->DCache__DOT__wb__DOT__entries_10_resp),3);
    bufp->fullCData(oldp+11424,(vlSelf->DCache__DOT__wb__DOT__entries_10_snpTxnId),8);
    bufp->fullQData(oldp+11425,(vlSelf->DCache__DOT__wb__DOT__entries_10_addr),48);
    bufp->fullWData(oldp+11427,(vlSelf->DCache__DOT__wb__DOT__entries_10_data),512);
    bufp->fullBit(oldp+11443,(vlSelf->DCache__DOT__wb__DOT__entries_10_dataReady));
    bufp->fullCData(oldp+11444,(vlSelf->DCache__DOT__wb__DOT__entries_10_dbid),8);
    bufp->fullBit(oldp+11445,(vlSelf->DCache__DOT__wb__DOT__entries_10_dbidValid));
    bufp->fullBit(oldp+11446,(vlSelf->DCache__DOT__wb__DOT__entries_10_compGot));
    bufp->fullBit(oldp+11447,(vlSelf->DCache__DOT__wb__DOT__entries_10_dataSent));
    bufp->fullBit(oldp+11448,(vlSelf->DCache__DOT__wb__DOT__entries_10_rspSeen));
    bufp->fullCData(oldp+11449,(vlSelf->DCache__DOT__wb__DOT__entries_10_compSrc),7);
    bufp->fullBit(oldp+11450,(vlSelf->DCache__DOT__wb__DOT__entries_10_traceTag));
    bufp->fullCData(oldp+11451,(vlSelf->DCache__DOT__wb__DOT__entries_10_state),2);
    bufp->fullCData(oldp+11452,(vlSelf->DCache__DOT__wb__DOT__entries_10_beatsLeft),2);
    bufp->fullBit(oldp+11453,(vlSelf->DCache__DOT__wb__DOT__entries_11_busy));
    bufp->fullCData(oldp+11454,(vlSelf->DCache__DOT__wb__DOT__entries_11_opcode),3);
    bufp->fullCData(oldp+11455,(vlSelf->DCache__DOT__wb__DOT__entries_11_resp),3);
    bufp->fullCData(oldp+11456,(vlSelf->DCache__DOT__wb__DOT__entries_11_snpTxnId),8);
    bufp->fullQData(oldp+11457,(vlSelf->DCache__DOT__wb__DOT__entries_11_addr),48);
    bufp->fullWData(oldp+11459,(vlSelf->DCache__DOT__wb__DOT__entries_11_data),512);
    bufp->fullBit(oldp+11475,(vlSelf->DCache__DOT__wb__DOT__entries_11_dataReady));
    bufp->fullCData(oldp+11476,(vlSelf->DCache__DOT__wb__DOT__entries_11_dbid),8);
    bufp->fullBit(oldp+11477,(vlSelf->DCache__DOT__wb__DOT__entries_11_dbidValid));
    bufp->fullBit(oldp+11478,(vlSelf->DCache__DOT__wb__DOT__entries_11_compGot));
    bufp->fullBit(oldp+11479,(vlSelf->DCache__DOT__wb__DOT__entries_11_dataSent));
    bufp->fullBit(oldp+11480,(vlSelf->DCache__DOT__wb__DOT__entries_11_rspSeen));
    bufp->fullCData(oldp+11481,(vlSelf->DCache__DOT__wb__DOT__entries_11_compSrc),7);
    bufp->fullBit(oldp+11482,(vlSelf->DCache__DOT__wb__DOT__entries_11_traceTag));
    bufp->fullCData(oldp+11483,(vlSelf->DCache__DOT__wb__DOT__entries_11_state),2);
    bufp->fullCData(oldp+11484,(vlSelf->DCache__DOT__wb__DOT__entries_11_beatsLeft),2);
    bufp->fullBit(oldp+11485,(vlSelf->DCache__DOT__wb__DOT__entries_12_busy));
    bufp->fullCData(oldp+11486,(vlSelf->DCache__DOT__wb__DOT__entries_12_opcode),3);
    bufp->fullCData(oldp+11487,(vlSelf->DCache__DOT__wb__DOT__entries_12_resp),3);
    bufp->fullCData(oldp+11488,(vlSelf->DCache__DOT__wb__DOT__entries_12_snpTxnId),8);
    bufp->fullQData(oldp+11489,(vlSelf->DCache__DOT__wb__DOT__entries_12_addr),48);
    bufp->fullWData(oldp+11491,(vlSelf->DCache__DOT__wb__DOT__entries_12_data),512);
    bufp->fullBit(oldp+11507,(vlSelf->DCache__DOT__wb__DOT__entries_12_dataReady));
    bufp->fullCData(oldp+11508,(vlSelf->DCache__DOT__wb__DOT__entries_12_dbid),8);
    bufp->fullBit(oldp+11509,(vlSelf->DCache__DOT__wb__DOT__entries_12_dbidValid));
    bufp->fullBit(oldp+11510,(vlSelf->DCache__DOT__wb__DOT__entries_12_compGot));
    bufp->fullBit(oldp+11511,(vlSelf->DCache__DOT__wb__DOT__entries_12_dataSent));
    bufp->fullBit(oldp+11512,(vlSelf->DCache__DOT__wb__DOT__entries_12_rspSeen));
    bufp->fullCData(oldp+11513,(vlSelf->DCache__DOT__wb__DOT__entries_12_compSrc),7);
    bufp->fullBit(oldp+11514,(vlSelf->DCache__DOT__wb__DOT__entries_12_traceTag));
    bufp->fullCData(oldp+11515,(vlSelf->DCache__DOT__wb__DOT__entries_12_state),2);
    bufp->fullCData(oldp+11516,(vlSelf->DCache__DOT__wb__DOT__entries_12_beatsLeft),2);
    bufp->fullBit(oldp+11517,(vlSelf->DCache__DOT__wb__DOT__entries_13_busy));
    bufp->fullCData(oldp+11518,(vlSelf->DCache__DOT__wb__DOT__entries_13_opcode),3);
    bufp->fullCData(oldp+11519,(vlSelf->DCache__DOT__wb__DOT__entries_13_resp),3);
    bufp->fullCData(oldp+11520,(vlSelf->DCache__DOT__wb__DOT__entries_13_snpTxnId),8);
    bufp->fullQData(oldp+11521,(vlSelf->DCache__DOT__wb__DOT__entries_13_addr),48);
    bufp->fullWData(oldp+11523,(vlSelf->DCache__DOT__wb__DOT__entries_13_data),512);
    bufp->fullBit(oldp+11539,(vlSelf->DCache__DOT__wb__DOT__entries_13_dataReady));
    bufp->fullCData(oldp+11540,(vlSelf->DCache__DOT__wb__DOT__entries_13_dbid),8);
    bufp->fullBit(oldp+11541,(vlSelf->DCache__DOT__wb__DOT__entries_13_dbidValid));
    bufp->fullBit(oldp+11542,(vlSelf->DCache__DOT__wb__DOT__entries_13_compGot));
    bufp->fullBit(oldp+11543,(vlSelf->DCache__DOT__wb__DOT__entries_13_dataSent));
    bufp->fullBit(oldp+11544,(vlSelf->DCache__DOT__wb__DOT__entries_13_rspSeen));
    bufp->fullCData(oldp+11545,(vlSelf->DCache__DOT__wb__DOT__entries_13_compSrc),7);
    bufp->fullBit(oldp+11546,(vlSelf->DCache__DOT__wb__DOT__entries_13_traceTag));
    bufp->fullCData(oldp+11547,(vlSelf->DCache__DOT__wb__DOT__entries_13_state),2);
    bufp->fullCData(oldp+11548,(vlSelf->DCache__DOT__wb__DOT__entries_13_beatsLeft),2);
    bufp->fullBit(oldp+11549,(vlSelf->DCache__DOT__wb__DOT__entries_14_busy));
    bufp->fullCData(oldp+11550,(vlSelf->DCache__DOT__wb__DOT__entries_14_opcode),3);
    bufp->fullCData(oldp+11551,(vlSelf->DCache__DOT__wb__DOT__entries_14_resp),3);
    bufp->fullCData(oldp+11552,(vlSelf->DCache__DOT__wb__DOT__entries_14_snpTxnId),8);
    bufp->fullQData(oldp+11553,(vlSelf->DCache__DOT__wb__DOT__entries_14_addr),48);
    bufp->fullWData(oldp+11555,(vlSelf->DCache__DOT__wb__DOT__entries_14_data),512);
    bufp->fullBit(oldp+11571,(vlSelf->DCache__DOT__wb__DOT__entries_14_dataReady));
    bufp->fullCData(oldp+11572,(vlSelf->DCache__DOT__wb__DOT__entries_14_dbid),8);
    bufp->fullBit(oldp+11573,(vlSelf->DCache__DOT__wb__DOT__entries_14_dbidValid));
    bufp->fullBit(oldp+11574,(vlSelf->DCache__DOT__wb__DOT__entries_14_compGot));
    bufp->fullBit(oldp+11575,(vlSelf->DCache__DOT__wb__DOT__entries_14_dataSent));
    bufp->fullBit(oldp+11576,(vlSelf->DCache__DOT__wb__DOT__entries_14_rspSeen));
    bufp->fullCData(oldp+11577,(vlSelf->DCache__DOT__wb__DOT__entries_14_compSrc),7);
    bufp->fullBit(oldp+11578,(vlSelf->DCache__DOT__wb__DOT__entries_14_traceTag));
    bufp->fullCData(oldp+11579,(vlSelf->DCache__DOT__wb__DOT__entries_14_state),2);
    bufp->fullCData(oldp+11580,(vlSelf->DCache__DOT__wb__DOT__entries_14_beatsLeft),2);
    bufp->fullBit(oldp+11581,(vlSelf->DCache__DOT__wb__DOT__entries_15_busy));
    bufp->fullCData(oldp+11582,(vlSelf->DCache__DOT__wb__DOT__entries_15_opcode),3);
    bufp->fullCData(oldp+11583,(vlSelf->DCache__DOT__wb__DOT__entries_15_resp),3);
    bufp->fullCData(oldp+11584,(vlSelf->DCache__DOT__wb__DOT__entries_15_snpTxnId),8);
    bufp->fullQData(oldp+11585,(vlSelf->DCache__DOT__wb__DOT__entries_15_addr),48);
    bufp->fullWData(oldp+11587,(vlSelf->DCache__DOT__wb__DOT__entries_15_data),512);
    bufp->fullBit(oldp+11603,(vlSelf->DCache__DOT__wb__DOT__entries_15_dataReady));
    bufp->fullCData(oldp+11604,(vlSelf->DCache__DOT__wb__DOT__entries_15_dbid),8);
    bufp->fullBit(oldp+11605,(vlSelf->DCache__DOT__wb__DOT__entries_15_dbidValid));
    bufp->fullBit(oldp+11606,(vlSelf->DCache__DOT__wb__DOT__entries_15_compGot));
    bufp->fullBit(oldp+11607,(vlSelf->DCache__DOT__wb__DOT__entries_15_dataSent));
    bufp->fullBit(oldp+11608,(vlSelf->DCache__DOT__wb__DOT__entries_15_rspSeen));
    bufp->fullCData(oldp+11609,(vlSelf->DCache__DOT__wb__DOT__entries_15_compSrc),7);
    bufp->fullBit(oldp+11610,(vlSelf->DCache__DOT__wb__DOT__entries_15_traceTag));
    bufp->fullCData(oldp+11611,(vlSelf->DCache__DOT__wb__DOT__entries_15_state),2);
    bufp->fullCData(oldp+11612,(vlSelf->DCache__DOT__wb__DOT__entries_15_beatsLeft),2);
    bufp->fullBit(oldp+11613,(vlSelf->DCache__DOT__wb__DOT__entries_16_busy));
    bufp->fullCData(oldp+11614,(vlSelf->DCache__DOT__wb__DOT__entries_16_opcode),3);
    bufp->fullCData(oldp+11615,(vlSelf->DCache__DOT__wb__DOT__entries_16_resp),3);
    bufp->fullCData(oldp+11616,(vlSelf->DCache__DOT__wb__DOT__entries_16_snpTxnId),8);
    bufp->fullQData(oldp+11617,(vlSelf->DCache__DOT__wb__DOT__entries_16_addr),48);
    bufp->fullWData(oldp+11619,(vlSelf->DCache__DOT__wb__DOT__entries_16_data),512);
    bufp->fullBit(oldp+11635,(vlSelf->DCache__DOT__wb__DOT__entries_16_dataReady));
    bufp->fullCData(oldp+11636,(vlSelf->DCache__DOT__wb__DOT__entries_16_dbid),8);
    bufp->fullBit(oldp+11637,(vlSelf->DCache__DOT__wb__DOT__entries_16_dbidValid));
    bufp->fullBit(oldp+11638,(vlSelf->DCache__DOT__wb__DOT__entries_16_compGot));
    bufp->fullBit(oldp+11639,(vlSelf->DCache__DOT__wb__DOT__entries_16_dataSent));
    bufp->fullBit(oldp+11640,(vlSelf->DCache__DOT__wb__DOT__entries_16_rspSeen));
    bufp->fullCData(oldp+11641,(vlSelf->DCache__DOT__wb__DOT__entries_16_compSrc),7);
    bufp->fullBit(oldp+11642,(vlSelf->DCache__DOT__wb__DOT__entries_16_traceTag));
    bufp->fullCData(oldp+11643,(vlSelf->DCache__DOT__wb__DOT__entries_16_state),2);
    bufp->fullCData(oldp+11644,(vlSelf->DCache__DOT__wb__DOT__entries_16_beatsLeft),2);
    bufp->fullBit(oldp+11645,(vlSelf->DCache__DOT__wb__DOT__entries_17_busy));
    bufp->fullCData(oldp+11646,(vlSelf->DCache__DOT__wb__DOT__entries_17_opcode),3);
    bufp->fullCData(oldp+11647,(vlSelf->DCache__DOT__wb__DOT__entries_17_resp),3);
    bufp->fullCData(oldp+11648,(vlSelf->DCache__DOT__wb__DOT__entries_17_snpTxnId),8);
    bufp->fullQData(oldp+11649,(vlSelf->DCache__DOT__wb__DOT__entries_17_addr),48);
    bufp->fullWData(oldp+11651,(vlSelf->DCache__DOT__wb__DOT__entries_17_data),512);
    bufp->fullCData(oldp+11667,(vlSelf->DCache__DOT__wb__DOT__entries_17_dbid),8);
    bufp->fullBit(oldp+11668,(vlSelf->DCache__DOT__wb__DOT__entries_17_dbidValid));
    bufp->fullBit(oldp+11669,(vlSelf->DCache__DOT__wb__DOT__entries_17_compGot));
    bufp->fullBit(oldp+11670,(vlSelf->DCache__DOT__wb__DOT__entries_17_dataSent));
    bufp->fullBit(oldp+11671,(vlSelf->DCache__DOT__wb__DOT__entries_17_rspSeen));
    bufp->fullCData(oldp+11672,(vlSelf->DCache__DOT__wb__DOT__entries_17_compSrc),7);
    bufp->fullBit(oldp+11673,(vlSelf->DCache__DOT__wb__DOT__entries_17_traceTag));
    bufp->fullCData(oldp+11674,(vlSelf->DCache__DOT__wb__DOT__entries_17_state),2);
    bufp->fullCData(oldp+11675,(vlSelf->DCache__DOT__wb__DOT__entries_17_beatsLeft),2);
    bufp->fullQData(oldp+11676,((0xffffffffffc0ULL 
                                 & vlSelf->DCache__DOT__pipe_io_wbReq_bits_addr)),48);
    bufp->fullBit(oldp+11678,((((0U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode)) 
                                | ((2U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode)) 
                                   | (3U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode)))) 
                               | ((4U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode)) 
                                  | (5U == (IData)(vlSelf->DCache__DOT__pipe_io_wbReq_bits_opcode))))));
    bufp->fullBit(oldp+11679,(vlSelf->DCache__DOT__wb__DOT__conflict));
    bufp->fullBit(oldp+11680,((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy)))));
    bufp->fullBit(oldp+11681,((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy)))));
    bufp->fullBit(oldp+11682,((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy)))));
    bufp->fullBit(oldp+11683,((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy)))));
    bufp->fullBit(oldp+11684,((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy)))));
    bufp->fullBit(oldp+11685,((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy)))));
    bufp->fullBit(oldp+11686,((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy)))));
    bufp->fullBit(oldp+11687,((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy)))));
    bufp->fullBit(oldp+11688,((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy)))));
    bufp->fullBit(oldp+11689,((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy)))));
    bufp->fullBit(oldp+11690,((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy)))));
    bufp->fullBit(oldp+11691,((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy)))));
    bufp->fullBit(oldp+11692,((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy)))));
    bufp->fullBit(oldp+11693,((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy)))));
    bufp->fullBit(oldp+11694,((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy)))));
    bufp->fullBit(oldp+11695,((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy)))));
    bufp->fullBit(oldp+11696,((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy)))));
    bufp->fullBit(oldp+11697,((1U & (~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy)))));
    bufp->fullSData(oldp+11698,(((0x100U & ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy)) 
                                            << 8U)) 
                                 | ((0x80U & ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy)) 
                                              << 7U)) 
                                    | ((0x40U & ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy)) 
                                                 << 6U)) 
                                       | ((0x20U & 
                                           ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy)) 
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
    bufp->fullBit(oldp+11699,((1U & ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy)) 
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
    bufp->fullCData(oldp+11700,(vlSelf->DCache__DOT__wb__DOT__allocId),5);
    bufp->fullCData(oldp+11701,(vlSelf->DCache__DOT__wb__DOT__reqResp),3);
    bufp->fullBit(oldp+11702,(vlSelf->DCache__DOT__wb__DOT__evtHold));
    bufp->fullCData(oldp+11703,(vlSelf->DCache__DOT__wb__DOT__evtHoldIdx),5);
    bufp->fullBit(oldp+11704,(vlSelf->DCache__DOT__wb__DOT__rspHold));
    bufp->fullCData(oldp+11705,(vlSelf->DCache__DOT__wb__DOT__rspHoldIdx),5);
    bufp->fullBit(oldp+11706,(vlSelf->DCache__DOT__wb__DOT__datHold));
    bufp->fullCData(oldp+11707,(vlSelf->DCache__DOT__wb__DOT__datHoldIdx),5);
    bufp->fullBit(oldp+11708,(vlSelf->DCache__DOT__wb__DOT__evtWant_0));
    bufp->fullBit(oldp+11709,(vlSelf->DCache__DOT__wb__DOT__evtWant_1));
    bufp->fullBit(oldp+11710,(vlSelf->DCache__DOT__wb__DOT__evtWant_2));
    bufp->fullBit(oldp+11711,(vlSelf->DCache__DOT__wb__DOT__evtWant_3));
    bufp->fullBit(oldp+11712,(vlSelf->DCache__DOT__wb__DOT__evtWant_4));
    bufp->fullBit(oldp+11713,(vlSelf->DCache__DOT__wb__DOT__evtWant_5));
    bufp->fullBit(oldp+11714,(vlSelf->DCache__DOT__wb__DOT__evtWant_6));
    bufp->fullBit(oldp+11715,(vlSelf->DCache__DOT__wb__DOT__evtWant_7));
    bufp->fullBit(oldp+11716,(vlSelf->DCache__DOT__wb__DOT__evtWant_8));
    bufp->fullBit(oldp+11717,(vlSelf->DCache__DOT__wb__DOT__evtWant_9));
    bufp->fullBit(oldp+11718,(vlSelf->DCache__DOT__wb__DOT__evtWant_10));
    bufp->fullBit(oldp+11719,(vlSelf->DCache__DOT__wb__DOT__evtWant_11));
    bufp->fullBit(oldp+11720,(vlSelf->DCache__DOT__wb__DOT__evtWant_12));
    bufp->fullBit(oldp+11721,(vlSelf->DCache__DOT__wb__DOT__evtWant_13));
    bufp->fullBit(oldp+11722,(vlSelf->DCache__DOT__wb__DOT__evtWant_14));
    bufp->fullBit(oldp+11723,(vlSelf->DCache__DOT__wb__DOT__evtWant_15));
    bufp->fullBit(oldp+11724,(vlSelf->DCache__DOT__wb__DOT__evtWant_16));
    bufp->fullBit(oldp+11725,(vlSelf->DCache__DOT__wb__DOT__evtWant_17));
    bufp->fullBit(oldp+11726,(vlSelf->DCache__DOT__wb__DOT__rspWant_0));
    bufp->fullBit(oldp+11727,(vlSelf->DCache__DOT__wb__DOT__rspWant_1));
    bufp->fullBit(oldp+11728,(vlSelf->DCache__DOT__wb__DOT__rspWant_2));
    bufp->fullBit(oldp+11729,(vlSelf->DCache__DOT__wb__DOT__rspWant_3));
    bufp->fullBit(oldp+11730,(vlSelf->DCache__DOT__wb__DOT__rspWant_4));
    bufp->fullBit(oldp+11731,(vlSelf->DCache__DOT__wb__DOT__rspWant_5));
    bufp->fullBit(oldp+11732,(vlSelf->DCache__DOT__wb__DOT__rspWant_6));
    bufp->fullBit(oldp+11733,(vlSelf->DCache__DOT__wb__DOT__rspWant_7));
    bufp->fullBit(oldp+11734,(vlSelf->DCache__DOT__wb__DOT__rspWant_8));
    bufp->fullBit(oldp+11735,(vlSelf->DCache__DOT__wb__DOT__rspWant_9));
    bufp->fullBit(oldp+11736,(vlSelf->DCache__DOT__wb__DOT__rspWant_10));
    bufp->fullBit(oldp+11737,(vlSelf->DCache__DOT__wb__DOT__rspWant_11));
    bufp->fullBit(oldp+11738,(vlSelf->DCache__DOT__wb__DOT__rspWant_12));
    bufp->fullBit(oldp+11739,(vlSelf->DCache__DOT__wb__DOT__rspWant_13));
    bufp->fullBit(oldp+11740,(vlSelf->DCache__DOT__wb__DOT__rspWant_14));
    bufp->fullBit(oldp+11741,(vlSelf->DCache__DOT__wb__DOT__rspWant_15));
    bufp->fullBit(oldp+11742,(vlSelf->DCache__DOT__wb__DOT__rspWant_16));
    bufp->fullBit(oldp+11743,(vlSelf->DCache__DOT__wb__DOT__rspWant_17));
    bufp->fullBit(oldp+11744,(vlSelf->DCache__DOT__wb__DOT__datStart_0));
    bufp->fullBit(oldp+11745,(vlSelf->DCache__DOT__wb__DOT__datStart_1));
    bufp->fullBit(oldp+11746,(vlSelf->DCache__DOT__wb__DOT__datStart_2));
    bufp->fullBit(oldp+11747,(vlSelf->DCache__DOT__wb__DOT__datStart_3));
    bufp->fullBit(oldp+11748,(vlSelf->DCache__DOT__wb__DOT__datStart_4));
    bufp->fullBit(oldp+11749,(vlSelf->DCache__DOT__wb__DOT__datStart_5));
    bufp->fullBit(oldp+11750,(vlSelf->DCache__DOT__wb__DOT__datStart_6));
    bufp->fullBit(oldp+11751,(vlSelf->DCache__DOT__wb__DOT__datStart_7));
    bufp->fullBit(oldp+11752,(vlSelf->DCache__DOT__wb__DOT__datStart_8));
    bufp->fullBit(oldp+11753,(vlSelf->DCache__DOT__wb__DOT__datStart_9));
    bufp->fullBit(oldp+11754,(vlSelf->DCache__DOT__wb__DOT__datStart_10));
    bufp->fullBit(oldp+11755,(vlSelf->DCache__DOT__wb__DOT__datStart_11));
    bufp->fullBit(oldp+11756,(vlSelf->DCache__DOT__wb__DOT__datStart_12));
    bufp->fullBit(oldp+11757,(vlSelf->DCache__DOT__wb__DOT__datStart_13));
    bufp->fullBit(oldp+11758,(vlSelf->DCache__DOT__wb__DOT__datStart_14));
    bufp->fullBit(oldp+11759,(vlSelf->DCache__DOT__wb__DOT__datStart_15));
    bufp->fullBit(oldp+11760,(vlSelf->DCache__DOT__wb__DOT__datStart_16));
    bufp->fullBit(oldp+11761,(((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_153) 
                               & ((3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_state)) 
                                  & ((~ (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_dataSent)) 
                                     & (2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_beatsLeft)))))));
    bufp->fullBit(oldp+11762,(vlSelf->DCache__DOT__wb__DOT__datHeld));
    bufp->fullSData(oldp+11763,((((IData)(vlSelf->DCache__DOT__wb__DOT__evtWant_8) 
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
    bufp->fullCData(oldp+11764,(vlSelf->DCache__DOT__wb__DOT__evtIdx),5);
    bufp->fullSData(oldp+11765,((((IData)(vlSelf->DCache__DOT__wb__DOT__rspWant_8) 
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
    bufp->fullCData(oldp+11766,(vlSelf->DCache__DOT__wb__DOT__rspIdx),5);
    bufp->fullSData(oldp+11767,((((IData)(vlSelf->DCache__DOT__wb__DOT__datStart_8) 
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
    bufp->fullCData(oldp+11768,(vlSelf->DCache__DOT__wb__DOT__datIdx),5);
    __Vtemp_73[0U] = vlSelf->DCache__DOT__wb__DOT___GEN_197[0U];
    __Vtemp_73[1U] = vlSelf->DCache__DOT__wb__DOT___GEN_197[1U];
    __Vtemp_73[2U] = vlSelf->DCache__DOT__wb__DOT___GEN_197[2U];
    __Vtemp_73[3U] = vlSelf->DCache__DOT__wb__DOT___GEN_197[3U];
    __Vtemp_73[4U] = vlSelf->DCache__DOT__wb__DOT___GEN_197[4U];
    __Vtemp_73[5U] = vlSelf->DCache__DOT__wb__DOT___GEN_197[5U];
    __Vtemp_73[6U] = vlSelf->DCache__DOT__wb__DOT___GEN_197[6U];
    __Vtemp_73[7U] = vlSelf->DCache__DOT__wb__DOT___GEN_197[7U];
    bufp->fullWData(oldp+11769,(__Vtemp_73),256);
    __Vtemp_74[0U] = vlSelf->DCache__DOT__wb__DOT___GEN_197[8U];
    __Vtemp_74[1U] = vlSelf->DCache__DOT__wb__DOT___GEN_197[9U];
    __Vtemp_74[2U] = vlSelf->DCache__DOT__wb__DOT___GEN_197[0xaU];
    __Vtemp_74[3U] = vlSelf->DCache__DOT__wb__DOT___GEN_197[0xbU];
    __Vtemp_74[4U] = vlSelf->DCache__DOT__wb__DOT___GEN_197[0xcU];
    __Vtemp_74[5U] = vlSelf->DCache__DOT__wb__DOT___GEN_197[0xdU];
    __Vtemp_74[6U] = vlSelf->DCache__DOT__wb__DOT___GEN_197[0xeU];
    __Vtemp_74[7U] = vlSelf->DCache__DOT__wb__DOT___GEN_197[0xfU];
    bufp->fullWData(oldp+11777,(__Vtemp_74),256);
    bufp->fullBit(oldp+11785,((2U == (IData)(vlSelf->DCache__DOT__wb__DOT___GEN_215))));
    bufp->fullBit(oldp+11786,(((IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_busy) 
                               & ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_7) 
                                  & ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_state)) 
                                     | (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_0_state)))))));
    bufp->fullBit(oldp+11787,(((IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_busy) 
                               & ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_16) 
                                  & ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_state)) 
                                     | (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_1_state)))))));
    bufp->fullBit(oldp+11788,(((IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_busy) 
                               & ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_25) 
                                  & ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_state)) 
                                     | (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_2_state)))))));
    bufp->fullBit(oldp+11789,(((IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_busy) 
                               & ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_34) 
                                  & ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_state)) 
                                     | (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_3_state)))))));
    bufp->fullBit(oldp+11790,(((IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_busy) 
                               & ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_43) 
                                  & ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_state)) 
                                     | (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_4_state)))))));
    bufp->fullBit(oldp+11791,(((IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_busy) 
                               & ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_52) 
                                  & ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_state)) 
                                     | (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_5_state)))))));
    bufp->fullBit(oldp+11792,(((IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_busy) 
                               & ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_61) 
                                  & ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_state)) 
                                     | (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_6_state)))))));
    bufp->fullBit(oldp+11793,(((IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_busy) 
                               & ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_70) 
                                  & ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_state)) 
                                     | (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_7_state)))))));
    bufp->fullBit(oldp+11794,(((IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_busy) 
                               & ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_79) 
                                  & ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_state)) 
                                     | (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_8_state)))))));
    bufp->fullBit(oldp+11795,(((IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_busy) 
                               & ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_88) 
                                  & ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_state)) 
                                     | (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_9_state)))))));
    bufp->fullBit(oldp+11796,(((IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_busy) 
                               & ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_97) 
                                  & ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_state)) 
                                     | (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_10_state)))))));
    bufp->fullBit(oldp+11797,(((IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_busy) 
                               & ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_106) 
                                  & ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_state)) 
                                     | (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_11_state)))))));
    bufp->fullBit(oldp+11798,(((IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_busy) 
                               & ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_115) 
                                  & ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_state)) 
                                     | (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_12_state)))))));
    bufp->fullBit(oldp+11799,(((IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_busy) 
                               & ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_124) 
                                  & ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_state)) 
                                     | (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_13_state)))))));
    bufp->fullBit(oldp+11800,(((IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_busy) 
                               & ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_133) 
                                  & ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_state)) 
                                     | (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_14_state)))))));
    bufp->fullBit(oldp+11801,(((IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_busy) 
                               & ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_142) 
                                  & ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_state)) 
                                     | (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_15_state)))))));
    bufp->fullBit(oldp+11802,(((IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_busy) 
                               & ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_151) 
                                  & ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_state)) 
                                     | (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_16_state)))))));
    bufp->fullBit(oldp+11803,(((IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_busy) 
                               & ((IData)(vlSelf->DCache__DOT__wb__DOT___evtWant_T_160) 
                                  & ((2U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_state)) 
                                     | (3U == (IData)(vlSelf->DCache__DOT__wb__DOT__entries_17_state)))))));
    bufp->fullBit(oldp+11804,(vlSelf->DCache__DOT__wb__DOT__doAlloc));
    bufp->fullBit(oldp+11805,(vlSelf->DCache__DOT__wb__DOT__doAlloc_1));
    bufp->fullBit(oldp+11806,(vlSelf->DCache__DOT__wb__DOT__doAlloc_2));
    bufp->fullBit(oldp+11807,(vlSelf->DCache__DOT__wb__DOT__doAlloc_3));
    bufp->fullBit(oldp+11808,(vlSelf->DCache__DOT__wb__DOT__doAlloc_4));
    bufp->fullBit(oldp+11809,(vlSelf->DCache__DOT__wb__DOT__doAlloc_5));
    bufp->fullBit(oldp+11810,(vlSelf->DCache__DOT__wb__DOT__doAlloc_6));
    bufp->fullBit(oldp+11811,(vlSelf->DCache__DOT__wb__DOT__doAlloc_7));
    bufp->fullBit(oldp+11812,(vlSelf->DCache__DOT__wb__DOT__doAlloc_8));
    bufp->fullBit(oldp+11813,(vlSelf->DCache__DOT__wb__DOT__doAlloc_9));
    bufp->fullBit(oldp+11814,(vlSelf->DCache__DOT__wb__DOT__doAlloc_10));
    bufp->fullBit(oldp+11815,(vlSelf->DCache__DOT__wb__DOT__doAlloc_11));
    bufp->fullBit(oldp+11816,(vlSelf->DCache__DOT__wb__DOT__doAlloc_12));
    bufp->fullBit(oldp+11817,(vlSelf->DCache__DOT__wb__DOT__doAlloc_13));
    bufp->fullBit(oldp+11818,(vlSelf->DCache__DOT__wb__DOT__doAlloc_14));
    bufp->fullBit(oldp+11819,(vlSelf->DCache__DOT__wb__DOT__doAlloc_15));
    bufp->fullBit(oldp+11820,(vlSelf->DCache__DOT__wb__DOT__doAlloc_16));
    bufp->fullBit(oldp+11821,(vlSelf->DCache__DOT__wb__DOT__doAlloc_17));
    bufp->fullBit(oldp+11822,(vlSelf->clock));
    bufp->fullBit(oldp+11823,(vlSelf->reset));
    bufp->fullBit(oldp+11824,(vlSelf->io_load_0_req_ready));
    bufp->fullBit(oldp+11825,(vlSelf->io_load_0_req_valid));
    bufp->fullCData(oldp+11826,(vlSelf->io_load_0_req_bits_cmd),5);
    bufp->fullQData(oldp+11827,(vlSelf->io_load_0_req_bits_vaddr),48);
    bufp->fullQData(oldp+11829,(vlSelf->io_load_0_req_bits_vaddr_dup),48);
    bufp->fullWData(oldp+11831,(vlSelf->io_load_0_req_bits_data),128);
    bufp->fullSData(oldp+11835,(vlSelf->io_load_0_req_bits_mask),16);
    bufp->fullCData(oldp+11836,(vlSelf->io_load_0_req_bits_id),6);
    bufp->fullCData(oldp+11837,(vlSelf->io_load_0_req_bits_instrtype),4);
    bufp->fullBit(oldp+11838,(vlSelf->io_load_0_req_bits_isFirstIssue));
    bufp->fullCData(oldp+11839,(vlSelf->io_load_0_req_bits_replayCarry_real_way_en),4);
    bufp->fullBit(oldp+11840,(vlSelf->io_load_0_req_bits_replayCarry_valid));
    bufp->fullBit(oldp+11841,(vlSelf->io_load_0_req_bits_lqIdx_flag));
    bufp->fullCData(oldp+11842,(vlSelf->io_load_0_req_bits_lqIdx_value),4);
    bufp->fullBit(oldp+11843,(vlSelf->io_load_0_resp_ready));
    bufp->fullBit(oldp+11844,(vlSelf->io_load_0_resp_valid));
    bufp->fullWData(oldp+11845,(vlSelf->io_load_0_resp_bits_data),128);
    bufp->fullCData(oldp+11849,(vlSelf->io_load_0_resp_bits_id),6);
    bufp->fullBit(oldp+11850,(vlSelf->io_load_0_resp_bits_miss));
    bufp->fullBit(oldp+11851,(vlSelf->io_load_0_resp_bits_replay));
    bufp->fullCData(oldp+11852,(vlSelf->io_load_0_resp_bits_replayCarry_real_way_en),4);
    bufp->fullBit(oldp+11853,(vlSelf->io_load_0_resp_bits_replayCarry_valid));
    bufp->fullCData(oldp+11854,(vlSelf->io_load_0_resp_bits_mshr_id),4);
    bufp->fullBit(oldp+11855,(vlSelf->io_load_0_resp_bits_handled));
    bufp->fullBit(oldp+11856,(vlSelf->io_load_0_resp_bits_real_miss));
    bufp->fullBit(oldp+11857,(vlSelf->io_load_0_resp_bits_replacementUpdated));
    bufp->fullBit(oldp+11858,(vlSelf->io_load_0_s1_kill_data_read));
    bufp->fullBit(oldp+11859,(vlSelf->io_load_0_s1_kill));
    bufp->fullBit(oldp+11860,(vlSelf->io_load_0_s2_kill));
    bufp->fullQData(oldp+11861,(vlSelf->io_load_0_s0_pc),48);
    bufp->fullQData(oldp+11863,(vlSelf->io_load_0_s1_pc),48);
    bufp->fullQData(oldp+11865,(vlSelf->io_load_0_s2_pc),48);
    bufp->fullBit(oldp+11867,(vlSelf->io_load_0_replacementUpdated));
    bufp->fullBit(oldp+11868,(vlSelf->io_load_0_is128Req));
    bufp->fullQData(oldp+11869,(vlSelf->io_load_0_s1_paddr_dup_lsu),48);
    bufp->fullQData(oldp+11871,(vlSelf->io_load_0_s1_paddr_dup_dcache),48);
    bufp->fullBit(oldp+11873,(vlSelf->io_load_0_s1_disable_fast_wakeup));
    bufp->fullBit(oldp+11874,(vlSelf->io_load_0_s2_hit));
    bufp->fullBit(oldp+11875,(vlSelf->io_load_0_s2_first_hit));
    bufp->fullBit(oldp+11876,(vlSelf->io_load_0_s2_bank_conflict));
    bufp->fullBit(oldp+11877,(vlSelf->io_load_0_s2_wpu_pred_fail));
    bufp->fullBit(oldp+11878,(vlSelf->io_load_0_s2_mq_nack));
    bufp->fullBit(oldp+11879,(vlSelf->io_load_1_req_ready));
    bufp->fullBit(oldp+11880,(vlSelf->io_load_1_req_valid));
    bufp->fullCData(oldp+11881,(vlSelf->io_load_1_req_bits_cmd),5);
    bufp->fullQData(oldp+11882,(vlSelf->io_load_1_req_bits_vaddr),48);
    bufp->fullQData(oldp+11884,(vlSelf->io_load_1_req_bits_vaddr_dup),48);
    bufp->fullWData(oldp+11886,(vlSelf->io_load_1_req_bits_data),128);
    bufp->fullSData(oldp+11890,(vlSelf->io_load_1_req_bits_mask),16);
    bufp->fullCData(oldp+11891,(vlSelf->io_load_1_req_bits_id),6);
    bufp->fullCData(oldp+11892,(vlSelf->io_load_1_req_bits_instrtype),4);
    bufp->fullBit(oldp+11893,(vlSelf->io_load_1_req_bits_isFirstIssue));
    bufp->fullCData(oldp+11894,(vlSelf->io_load_1_req_bits_replayCarry_real_way_en),4);
    bufp->fullBit(oldp+11895,(vlSelf->io_load_1_req_bits_replayCarry_valid));
    bufp->fullBit(oldp+11896,(vlSelf->io_load_1_req_bits_lqIdx_flag));
    bufp->fullCData(oldp+11897,(vlSelf->io_load_1_req_bits_lqIdx_value),4);
    bufp->fullBit(oldp+11898,(vlSelf->io_load_1_resp_ready));
    bufp->fullBit(oldp+11899,(vlSelf->io_load_1_resp_valid));
    bufp->fullWData(oldp+11900,(vlSelf->io_load_1_resp_bits_data),128);
    bufp->fullCData(oldp+11904,(vlSelf->io_load_1_resp_bits_id),6);
    bufp->fullBit(oldp+11905,(vlSelf->io_load_1_resp_bits_miss));
    bufp->fullBit(oldp+11906,(vlSelf->io_load_1_resp_bits_replay));
    bufp->fullCData(oldp+11907,(vlSelf->io_load_1_resp_bits_replayCarry_real_way_en),4);
    bufp->fullBit(oldp+11908,(vlSelf->io_load_1_resp_bits_replayCarry_valid));
    bufp->fullCData(oldp+11909,(vlSelf->io_load_1_resp_bits_mshr_id),4);
    bufp->fullBit(oldp+11910,(vlSelf->io_load_1_resp_bits_handled));
    bufp->fullBit(oldp+11911,(vlSelf->io_load_1_resp_bits_real_miss));
    bufp->fullBit(oldp+11912,(vlSelf->io_load_1_resp_bits_replacementUpdated));
    bufp->fullBit(oldp+11913,(vlSelf->io_load_1_s1_kill_data_read));
    bufp->fullBit(oldp+11914,(vlSelf->io_load_1_s1_kill));
    bufp->fullBit(oldp+11915,(vlSelf->io_load_1_s2_kill));
    bufp->fullQData(oldp+11916,(vlSelf->io_load_1_s0_pc),48);
    bufp->fullQData(oldp+11918,(vlSelf->io_load_1_s1_pc),48);
    bufp->fullQData(oldp+11920,(vlSelf->io_load_1_s2_pc),48);
    bufp->fullBit(oldp+11922,(vlSelf->io_load_1_replacementUpdated));
    bufp->fullBit(oldp+11923,(vlSelf->io_load_1_is128Req));
    bufp->fullQData(oldp+11924,(vlSelf->io_load_1_s1_paddr_dup_lsu),48);
    bufp->fullQData(oldp+11926,(vlSelf->io_load_1_s1_paddr_dup_dcache),48);
    bufp->fullBit(oldp+11928,(vlSelf->io_load_1_s1_disable_fast_wakeup));
    bufp->fullBit(oldp+11929,(vlSelf->io_load_1_s2_hit));
    bufp->fullBit(oldp+11930,(vlSelf->io_load_1_s2_first_hit));
    bufp->fullBit(oldp+11931,(vlSelf->io_load_1_s2_bank_conflict));
    bufp->fullBit(oldp+11932,(vlSelf->io_load_1_s2_wpu_pred_fail));
    bufp->fullBit(oldp+11933,(vlSelf->io_load_1_s2_mq_nack));
    bufp->fullBit(oldp+11934,(vlSelf->io_store_req_ready));
    bufp->fullBit(oldp+11935,(vlSelf->io_store_req_valid));
    bufp->fullCData(oldp+11936,(vlSelf->io_store_req_bits_cmd),5);
    bufp->fullQData(oldp+11937,(vlSelf->io_store_req_bits_vaddr),48);
    bufp->fullQData(oldp+11939,(vlSelf->io_store_req_bits_addr),48);
    bufp->fullWData(oldp+11941,(vlSelf->io_store_req_bits_data),512);
    bufp->fullQData(oldp+11957,(vlSelf->io_store_req_bits_mask),64);
    bufp->fullCData(oldp+11959,(vlSelf->io_store_req_bits_id),6);
    bufp->fullBit(oldp+11960,(vlSelf->io_store_main_pipe_hit_resp_ready));
    bufp->fullBit(oldp+11961,(vlSelf->io_store_main_pipe_hit_resp_valid));
    bufp->fullBit(oldp+11962,(vlSelf->io_store_main_pipe_hit_resp_bits_miss));
    bufp->fullBit(oldp+11963,(vlSelf->io_store_main_pipe_hit_resp_bits_replay));
    bufp->fullCData(oldp+11964,(vlSelf->io_store_main_pipe_hit_resp_bits_id),6);
    bufp->fullBit(oldp+11965,(vlSelf->io_store_refill_hit_resp_ready));
    bufp->fullBit(oldp+11966,(vlSelf->io_store_refill_hit_resp_valid));
    bufp->fullBit(oldp+11967,(vlSelf->io_store_refill_hit_resp_bits_miss));
    bufp->fullBit(oldp+11968,(vlSelf->io_store_refill_hit_resp_bits_replay));
    bufp->fullCData(oldp+11969,(vlSelf->io_store_refill_hit_resp_bits_id),6);
    bufp->fullBit(oldp+11970,(vlSelf->io_store_replay_resp_ready));
    bufp->fullBit(oldp+11971,(vlSelf->io_store_replay_resp_valid));
    bufp->fullBit(oldp+11972,(vlSelf->io_store_replay_resp_bits_miss));
    bufp->fullBit(oldp+11973,(vlSelf->io_store_replay_resp_bits_replay));
    bufp->fullCData(oldp+11974,(vlSelf->io_store_replay_resp_bits_id),6);
    bufp->fullBit(oldp+11975,(vlSelf->io_atomics_req_ready));
    bufp->fullBit(oldp+11976,(vlSelf->io_atomics_req_valid));
    bufp->fullCData(oldp+11977,(vlSelf->io_atomics_req_bits_cmd),5);
    bufp->fullQData(oldp+11978,(vlSelf->io_atomics_req_bits_vaddr),48);
    bufp->fullQData(oldp+11980,(vlSelf->io_atomics_req_bits_addr),48);
    bufp->fullCData(oldp+11982,(vlSelf->io_atomics_req_bits_tagAlias),2);
    bufp->fullCData(oldp+11983,(vlSelf->io_atomics_req_bits_id),6);
    bufp->fullCData(oldp+11984,(vlSelf->io_atomics_req_bits_missId),4);
    bufp->fullQData(oldp+11985,(vlSelf->io_atomics_req_bits_pc),48);
    bufp->fullCData(oldp+11987,(vlSelf->io_atomics_req_bits_wordIdx),3);
    bufp->fullWData(oldp+11988,(vlSelf->io_atomics_req_bits_amoData),128);
    bufp->fullSData(oldp+11992,(vlSelf->io_atomics_req_bits_amoMask),16);
    bufp->fullWData(oldp+11993,(vlSelf->io_atomics_req_bits_amoCmp),128);
    bufp->fullCData(oldp+11997,(vlSelf->io_atomics_req_bits_probeOp),2);
    bufp->fullBit(oldp+11998,(vlSelf->io_atomics_req_bits_needData));
    bufp->fullCData(oldp+11999,(vlSelf->io_atomics_req_bits_snpTxnId),8);
    bufp->fullCData(oldp+12000,(vlSelf->io_atomics_req_bits_replaceWay),4);
    bufp->fullBit(oldp+12001,(vlSelf->io_atomics_resp_ready));
    bufp->fullBit(oldp+12002,(vlSelf->io_atomics_resp_valid));
    bufp->fullCData(oldp+12003,(vlSelf->io_atomics_resp_bits_id),6);
    bufp->fullCData(oldp+12004,(vlSelf->io_atomics_resp_bits_cmd),5);
    bufp->fullWData(oldp+12005,(vlSelf->io_atomics_resp_bits_data),128);
    bufp->fullBit(oldp+12009,(vlSelf->io_atomics_resp_bits_success));
    bufp->fullBit(oldp+12010,(vlSelf->io_atomics_replay_ready));
    bufp->fullBit(oldp+12011,(vlSelf->io_atomics_replay_valid));
    bufp->fullBit(oldp+12012,(vlSelf->io_atomics_replay_bits_miss));
    bufp->fullBit(oldp+12013,(vlSelf->io_atomics_replay_bits_replay));
    bufp->fullCData(oldp+12014,(vlSelf->io_atomics_replay_bits_id),6);
    bufp->fullBit(oldp+12015,(vlSelf->io_cmoReq_ready));
    bufp->fullBit(oldp+12016,(vlSelf->io_cmoReq_valid));
    bufp->fullCData(oldp+12017,(vlSelf->io_cmoReq_bits_id),6);
    bufp->fullCData(oldp+12018,(vlSelf->io_cmoReq_bits_opcode),6);
    bufp->fullQData(oldp+12019,(vlSelf->io_cmoReq_bits_addr),48);
    bufp->fullCData(oldp+12021,(vlSelf->io_cmoReq_bits_alias),2);
    bufp->fullBit(oldp+12022,(vlSelf->io_cmoResp_ready));
    bufp->fullBit(oldp+12023,(vlSelf->io_cmoResp_valid));
    bufp->fullCData(oldp+12024,(vlSelf->io_cmoResp_bits_id),6);
    bufp->fullBit(oldp+12025,(vlSelf->io_cmoResp_bits_done));
    bufp->fullBit(oldp+12026,(vlSelf->io_cmoResp_bits_error));
    bufp->fullBit(oldp+12027,(vlSelf->io_wfi_req));
    bufp->fullBit(oldp+12028,(vlSelf->io_wfi_safe));
    bufp->fullBit(oldp+12029,(vlSelf->io_l2_req_ready));
    bufp->fullBit(oldp+12030,(vlSelf->io_l2_req_valid));
    bufp->fullCData(oldp+12031,(vlSelf->io_l2_req_bits_txnID),8);
    bufp->fullCData(oldp+12032,(vlSelf->io_l2_req_bits_srcID),7);
    bufp->fullCData(oldp+12033,(vlSelf->io_l2_req_bits_tgtID),7);
    bufp->fullCData(oldp+12034,(vlSelf->io_l2_req_bits_opcode),6);
    bufp->fullCData(oldp+12035,(vlSelf->io_l2_req_bits_size),3);
    bufp->fullQData(oldp+12036,(vlSelf->io_l2_req_bits_addr),48);
    bufp->fullCData(oldp+12038,(vlSelf->io_l2_req_bits_tagAlias),2);
    bufp->fullBit(oldp+12039,(vlSelf->io_l2_req_bits_ns));
    bufp->fullCData(oldp+12040,(vlSelf->io_l2_req_bits_order),2);
    bufp->fullCData(oldp+12041,(vlSelf->io_l2_req_bits_memAttr),4);
    bufp->fullBit(oldp+12042,(vlSelf->io_l2_req_bits_excl));
    bufp->fullBit(oldp+12043,(vlSelf->io_l2_req_bits_expCompData));
    bufp->fullBit(oldp+12044,(vlSelf->io_l2_req_bits_expCompStash));
    bufp->fullBit(oldp+12045,(vlSelf->io_l2_req_bits_wayValid));
    bufp->fullCData(oldp+12046,(vlSelf->io_l2_req_bits_way),2);
    bufp->fullBit(oldp+12047,(vlSelf->io_l2_req_bits_traceTag));
    bufp->fullBit(oldp+12048,(vlSelf->io_l2_evt_ready));
    bufp->fullBit(oldp+12049,(vlSelf->io_l2_evt_valid));
    bufp->fullCData(oldp+12050,(vlSelf->io_l2_evt_bits_txnID),8);
    bufp->fullCData(oldp+12051,(vlSelf->io_l2_evt_bits_srcID),7);
    bufp->fullCData(oldp+12052,(vlSelf->io_l2_evt_bits_tgtID),7);
    bufp->fullBit(oldp+12053,(vlSelf->io_l2_evt_bits_opcode));
    bufp->fullQData(oldp+12054,(vlSelf->io_l2_evt_bits_addr),48);
    bufp->fullBit(oldp+12056,(vlSelf->io_l2_evt_bits_ns));
    bufp->fullBit(oldp+12057,(vlSelf->io_l2_evt_bits_memAttr));
    bufp->fullBit(oldp+12058,(vlSelf->io_l2_evt_bits_wayValid));
    bufp->fullCData(oldp+12059,(vlSelf->io_l2_evt_bits_way),2);
    bufp->fullBit(oldp+12060,(vlSelf->io_l2_evt_bits_traceTag));
    bufp->fullBit(oldp+12061,(vlSelf->io_l2_txRsp_ready));
    bufp->fullBit(oldp+12062,(vlSelf->io_l2_txRsp_valid));
    bufp->fullCData(oldp+12063,(vlSelf->io_l2_txRsp_bits_txnID),8);
    bufp->fullCData(oldp+12064,(vlSelf->io_l2_txRsp_bits_srcID),7);
    bufp->fullCData(oldp+12065,(vlSelf->io_l2_txRsp_bits_tgtID),7);
    bufp->fullBit(oldp+12066,(vlSelf->io_l2_txRsp_bits_opcode));
    bufp->fullCData(oldp+12067,(vlSelf->io_l2_txRsp_bits_respErr),2);
    bufp->fullCData(oldp+12068,(vlSelf->io_l2_txRsp_bits_resp),3);
    bufp->fullBit(oldp+12069,(vlSelf->io_l2_txRsp_bits_traceTag));
    bufp->fullBit(oldp+12070,(vlSelf->io_l2_txDat_ready));
    bufp->fullBit(oldp+12071,(vlSelf->io_l2_txDat_valid));
    bufp->fullCData(oldp+12072,(vlSelf->io_l2_txDat_bits_txnID),8);
    bufp->fullCData(oldp+12073,(vlSelf->io_l2_txDat_bits_srcID),7);
    bufp->fullCData(oldp+12074,(vlSelf->io_l2_txDat_bits_tgtID),7);
    bufp->fullCData(oldp+12075,(vlSelf->io_l2_txDat_bits_opcode),2);
    bufp->fullCData(oldp+12076,(vlSelf->io_l2_txDat_bits_respErr),2);
    bufp->fullCData(oldp+12077,(vlSelf->io_l2_txDat_bits_resp),3);
    bufp->fullBit(oldp+12078,(vlSelf->io_l2_txDat_bits_dataID));
    bufp->fullWData(oldp+12079,(vlSelf->io_l2_txDat_bits_data),256);
    bufp->fullIData(oldp+12087,(vlSelf->io_l2_txDat_bits_byteEnable),32);
    bufp->fullBit(oldp+12088,(vlSelf->io_l2_txDat_bits_traceTag));
    bufp->fullBit(oldp+12089,(vlSelf->io_l2_rxRsp_ready));
    bufp->fullBit(oldp+12090,(vlSelf->io_l2_rxRsp_valid));
    bufp->fullCData(oldp+12091,(vlSelf->io_l2_rxRsp_bits_txnID),8);
    bufp->fullCData(oldp+12092,(vlSelf->io_l2_rxRsp_bits_srcID),7);
    bufp->fullCData(oldp+12093,(vlSelf->io_l2_rxRsp_bits_tgtID),7);
    bufp->fullCData(oldp+12094,(vlSelf->io_l2_rxRsp_bits_opcode),3);
    bufp->fullCData(oldp+12095,(vlSelf->io_l2_rxRsp_bits_dbID),8);
    bufp->fullCData(oldp+12096,(vlSelf->io_l2_rxRsp_bits_respErr),2);
    bufp->fullCData(oldp+12097,(vlSelf->io_l2_rxRsp_bits_resp),3);
    bufp->fullCData(oldp+12098,(vlSelf->io_l2_rxRsp_bits_cBusy),3);
    bufp->fullBit(oldp+12099,(vlSelf->io_l2_rxRsp_bits_traceTag));
    bufp->fullBit(oldp+12100,(vlSelf->io_l2_rxDat_ready));
    bufp->fullBit(oldp+12101,(vlSelf->io_l2_rxDat_valid));
    bufp->fullCData(oldp+12102,(vlSelf->io_l2_rxDat_bits_txnID),8);
    bufp->fullCData(oldp+12103,(vlSelf->io_l2_rxDat_bits_srcID),7);
    bufp->fullCData(oldp+12104,(vlSelf->io_l2_rxDat_bits_tgtID),7);
    bufp->fullBit(oldp+12105,(vlSelf->io_l2_rxDat_bits_opcode));
    bufp->fullCData(oldp+12106,(vlSelf->io_l2_rxDat_bits_dbID),8);
    bufp->fullCData(oldp+12107,(vlSelf->io_l2_rxDat_bits_respErr),2);
    bufp->fullCData(oldp+12108,(vlSelf->io_l2_rxDat_bits_resp),3);
    bufp->fullCData(oldp+12109,(vlSelf->io_l2_rxDat_bits_dataSource),5);
    bufp->fullCData(oldp+12110,(vlSelf->io_l2_rxDat_bits_cBusy),3);
    bufp->fullBit(oldp+12111,(vlSelf->io_l2_rxDat_bits_dataID));
    bufp->fullWData(oldp+12112,(vlSelf->io_l2_rxDat_bits_data),256);
    bufp->fullBit(oldp+12120,(vlSelf->io_l2_rxDat_bits_traceTag));
    bufp->fullBit(oldp+12121,(vlSelf->io_l2_rxSnp_ready));
    bufp->fullBit(oldp+12122,(vlSelf->io_l2_rxSnp_valid));
    bufp->fullCData(oldp+12123,(vlSelf->io_l2_rxSnp_bits_txnID),8);
    bufp->fullCData(oldp+12124,(vlSelf->io_l2_rxSnp_bits_srcID),7);
    bufp->fullCData(oldp+12125,(vlSelf->io_l2_rxSnp_bits_tgtID),7);
    bufp->fullCData(oldp+12126,(vlSelf->io_l2_rxSnp_bits_opcode),2);
    bufp->fullQData(oldp+12127,(vlSelf->io_l2_rxSnp_bits_addr),45);
    bufp->fullCData(oldp+12129,(vlSelf->io_l2_rxSnp_bits_tagAlias),2);
    bufp->fullBit(oldp+12130,(vlSelf->io_l2_rxSnp_bits_ns));
    bufp->fullBit(oldp+12131,(vlSelf->io_l2_rxSnp_bits_traceTag));
    bufp->fullBit(oldp+12132,(vlSelf->io_forwardChi_valid));
    bufp->fullCData(oldp+12133,(vlSelf->io_forwardChi_bits_id),4);
    bufp->fullBit(oldp+12134,(vlSelf->io_forwardChi_bits_half));
    bufp->fullWData(oldp+12135,(vlSelf->io_forwardChi_bits_data),256);
    bufp->fullCData(oldp+12143,(vlSelf->io_forwardMshr_id),4);
    bufp->fullBit(oldp+12144,(vlSelf->io_forwardMshr_half));
    bufp->fullBit(oldp+12145,(vlSelf->io_forwardMshr_data_valid));
    bufp->fullWData(oldp+12146,(vlSelf->io_forwardMshr_data_bits),256);
    bufp->fullBit(oldp+12154,(vlSelf->io_refillWakeup_ready));
    bufp->fullBit(oldp+12155,(vlSelf->io_refillWakeup_valid));
    bufp->fullCData(oldp+12156,(vlSelf->io_refillWakeup_bits_id),4);
    bufp->fullQData(oldp+12157,(vlSelf->io_refillWakeup_bits_addr),48);
    bufp->fullCData(oldp+12159,(vlSelf->io_refillWakeup_bits_alias),2);
    bufp->fullBit(oldp+12160,(vlSelf->io_loadReplay_ready));
    bufp->fullBit(oldp+12161,(vlSelf->io_loadReplay_valid));
    bufp->fullCData(oldp+12162,(vlSelf->io_loadReplay_bits_id),4);
    bufp->fullQData(oldp+12163,(vlSelf->io_loadReplay_bits_addr),48);
    bufp->fullCData(oldp+12165,(vlSelf->io_loadReplay_bits_alias),2);
    bufp->fullBit(oldp+12166,(((IData)(vlSelf->io_load_0_req_valid) 
                               & (IData)(vlSelf->DCache__DOT__loads_0__DOT__s1_ready))));
    bufp->fullCData(oldp+12167,((0xffU & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                                  >> 6U)))),8);
    bufp->fullBit(oldp+12168,(((IData)(vlSelf->io_load_1_req_valid) 
                               & (IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_ready))));
    bufp->fullCData(oldp+12169,((0xffU & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                                  >> 6U)))),8);
    bufp->fullBit(oldp+12170,(((~ ((IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_busy) 
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
    bufp->fullBit(oldp+12171,(((IData)(vlSelf->io_l2_rxRsp_valid) 
                               & (0x10U >= (IData)(vlSelf->io_l2_rxRsp_bits_txnID)))));
    bufp->fullBit(oldp+12172,(((~ (IData)(vlSelf->io_l2_txRsp_bits_opcode)) 
                               & (IData)(vlSelf->io_l2_txRsp_ready))));
    bufp->fullBit(oldp+12173,(((IData)(vlSelf->io_store_replay_resp_bits_miss) 
                               & (IData)(vlSelf->io_store_replay_resp_ready))));
    bufp->fullBit(oldp+12174,(((IData)(vlSelf->io_l2_rxRsp_valid) 
                               & (IData)(vlSelf->DCache__DOT__rspToWb))));
    bufp->fullBit(oldp+12175,((0x10U >= (IData)(vlSelf->io_l2_rxRsp_bits_txnID))));
    bufp->fullBit(oldp+12176,(((IData)(vlSelf->DCache__DOT__loads_0__DOT__s1_valid) 
                               & (IData)(vlSelf->io_load_0_s1_kill))));
    bufp->fullCData(oldp+12177,((7U & (IData)((vlSelf->io_load_0_req_bits_vaddr 
                                               >> 3U)))),3);
    bufp->fullBit(oldp+12178,(((IData)(vlSelf->io_load_0_s2_kill) 
                               | (IData)(vlSelf->DCache__DOT__loads_0__DOT___io_replace_access_valid_T))));
    bufp->fullBit(oldp+12179,(((IData)(vlSelf->DCache__DOT__loads_1__DOT__s1_valid) 
                               & (IData)(vlSelf->io_load_1_s1_kill))));
    bufp->fullCData(oldp+12180,((7U & (IData)((vlSelf->io_load_1_req_bits_vaddr 
                                               >> 3U)))),3);
    bufp->fullBit(oldp+12181,(((IData)(vlSelf->io_load_1_s2_kill) 
                               | (IData)(vlSelf->DCache__DOT__loads_1__DOT___io_replace_access_valid_T))));
    bufp->fullCData(oldp+12182,((0xfU & (IData)(vlSelf->io_l2_rxDat_bits_txnID))),4);
    bufp->fullCData(oldp+12183,((0xfU & (IData)(vlSelf->io_l2_rxRsp_bits_txnID))),4);
    bufp->fullCData(oldp+12184,((3U & ((IData)(1U) 
                                       << (IData)(vlSelf->io_l2_rxDat_bits_dataID)))),2);
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
    bufp->fullWData(oldp+12185,(__Vtemp_77),256);
    bufp->fullCData(oldp+12193,((0xffU & ((1U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf[0U]
                                           : vlSelf->io_l2_rxDat_bits_data[0U]))),8);
    bufp->fullCData(oldp+12194,((0xffU & ((2U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[0U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf[0U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12195,((0xffU & ((4U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[0U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf[0U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12196,((0xffU & ((8U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[0U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf[0U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12197,((0xffU & ((0x10U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf[1U]
                                           : vlSelf->io_l2_rxDat_bits_data[1U]))),8);
    bufp->fullCData(oldp+12198,((0xffU & ((0x20U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[1U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf[1U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12199,((0xffU & ((0x40U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[1U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf[1U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12200,((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[1U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf[1U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12201,((0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf[2U]
                                           : vlSelf->io_l2_rxDat_bits_data[2U]))),8);
    bufp->fullCData(oldp+12202,((0xffU & ((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[2U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf[2U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12203,((0xffU & ((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[2U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf[2U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12204,((0xffU & ((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[2U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf[2U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12205,((0xffU & ((0x1000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf[3U]
                                           : vlSelf->io_l2_rxDat_bits_data[3U]))),8);
    bufp->fullCData(oldp+12206,((0xffU & ((0x2000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[3U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf[3U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12207,((0xffU & ((0x4000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[3U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf[3U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12208,((0xffU & ((0x8000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[3U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf[3U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12209,((0xffU & ((0x10000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf[4U]
                                           : vlSelf->io_l2_rxDat_bits_data[4U]))),8);
    bufp->fullCData(oldp+12210,((0xffU & ((0x20000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[4U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf[4U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12211,((0xffU & ((0x40000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[4U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf[4U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12212,((0xffU & ((0x80000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[4U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf[4U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12213,((0xffU & ((0x100000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf[5U]
                                           : vlSelf->io_l2_rxDat_bits_data[5U]))),8);
    bufp->fullCData(oldp+12214,((0xffU & ((0x200000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[5U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf[5U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12215,((0xffU & ((0x400000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[5U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf[5U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12216,((0xffU & ((0x800000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[5U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf[5U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12217,((0xffU & ((0x1000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf[6U]
                                           : vlSelf->io_l2_rxDat_bits_data[6U]))),8);
    bufp->fullCData(oldp+12218,((0xffU & ((0x2000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[6U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf[6U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12219,((0xffU & ((0x4000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[6U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf[6U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12220,((0xffU & ((0x8000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[6U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf[6U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12221,((0xffU & ((0x10000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf[7U]
                                           : vlSelf->io_l2_rxDat_bits_data[7U]))),8);
    bufp->fullCData(oldp+12222,((0xffU & ((0x20000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[7U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf[7U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12223,((0xffU & ((0x40000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[7U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf[7U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12224,((0xffU & ((vlSelf->DCache__DOT__miss__DOT__maskHalf 
                                           >> 0x1fU)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf[7U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf[7U] 
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
    bufp->fullWData(oldp+12225,(__Vtemp_82),256);
    bufp->fullBit(oldp+12233,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_57) 
                                & (0U == (IData)(vlSelf->io_refillWakeup_bits_id))) 
                               | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc)) 
                                  & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_0_wakeSent)))));
    bufp->fullBit(oldp+12234,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_60) 
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
    bufp->fullWData(oldp+12235,(__Vtemp_85),256);
    bufp->fullCData(oldp+12243,((0xffU & ((1U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_1[0U]
                                           : vlSelf->io_l2_rxDat_bits_data[0U]))),8);
    bufp->fullCData(oldp+12244,((0xffU & ((2U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[0U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[0U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12245,((0xffU & ((4U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[0U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[0U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12246,((0xffU & ((8U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[0U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[0U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12247,((0xffU & ((0x10U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_1[1U]
                                           : vlSelf->io_l2_rxDat_bits_data[1U]))),8);
    bufp->fullCData(oldp+12248,((0xffU & ((0x20U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[1U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[1U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12249,((0xffU & ((0x40U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[1U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[1U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12250,((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[1U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[1U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12251,((0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_1[2U]
                                           : vlSelf->io_l2_rxDat_bits_data[2U]))),8);
    bufp->fullCData(oldp+12252,((0xffU & ((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[2U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[2U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12253,((0xffU & ((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[2U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[2U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12254,((0xffU & ((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[2U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[2U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12255,((0xffU & ((0x1000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_1[3U]
                                           : vlSelf->io_l2_rxDat_bits_data[3U]))),8);
    bufp->fullCData(oldp+12256,((0xffU & ((0x2000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[3U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[3U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12257,((0xffU & ((0x4000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[3U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[3U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12258,((0xffU & ((0x8000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[3U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[3U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12259,((0xffU & ((0x10000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_1[4U]
                                           : vlSelf->io_l2_rxDat_bits_data[4U]))),8);
    bufp->fullCData(oldp+12260,((0xffU & ((0x20000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[4U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[4U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12261,((0xffU & ((0x40000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[4U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[4U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12262,((0xffU & ((0x80000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[4U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[4U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12263,((0xffU & ((0x100000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_1[5U]
                                           : vlSelf->io_l2_rxDat_bits_data[5U]))),8);
    bufp->fullCData(oldp+12264,((0xffU & ((0x200000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[5U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[5U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12265,((0xffU & ((0x400000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[5U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[5U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12266,((0xffU & ((0x800000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[5U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[5U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12267,((0xffU & ((0x1000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_1[6U]
                                           : vlSelf->io_l2_rxDat_bits_data[6U]))),8);
    bufp->fullCData(oldp+12268,((0xffU & ((0x2000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[6U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[6U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12269,((0xffU & ((0x4000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[6U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[6U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12270,((0xffU & ((0x8000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[6U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[6U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12271,((0xffU & ((0x10000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_1[7U]
                                           : vlSelf->io_l2_rxDat_bits_data[7U]))),8);
    bufp->fullCData(oldp+12272,((0xffU & ((0x20000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[7U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[7U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12273,((0xffU & ((0x40000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_1)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[7U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[7U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12274,((0xffU & ((vlSelf->DCache__DOT__miss__DOT__maskHalf_1 
                                           >> 0x1fU)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_1[7U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_1[7U] 
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
    bufp->fullWData(oldp+12275,(__Vtemp_90),256);
    bufp->fullBit(oldp+12283,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_57) 
                                & (1U == (IData)(vlSelf->io_refillWakeup_bits_id))) 
                               | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_1)) 
                                  & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_1_wakeSent)))));
    bufp->fullBit(oldp+12284,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_60) 
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
    bufp->fullWData(oldp+12285,(__Vtemp_93),256);
    bufp->fullCData(oldp+12293,((0xffU & ((1U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_2[0U]
                                           : vlSelf->io_l2_rxDat_bits_data[0U]))),8);
    bufp->fullCData(oldp+12294,((0xffU & ((2U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[0U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[0U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12295,((0xffU & ((4U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[0U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[0U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12296,((0xffU & ((8U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[0U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[0U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12297,((0xffU & ((0x10U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_2[1U]
                                           : vlSelf->io_l2_rxDat_bits_data[1U]))),8);
    bufp->fullCData(oldp+12298,((0xffU & ((0x20U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[1U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[1U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12299,((0xffU & ((0x40U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[1U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[1U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12300,((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[1U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[1U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12301,((0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_2[2U]
                                           : vlSelf->io_l2_rxDat_bits_data[2U]))),8);
    bufp->fullCData(oldp+12302,((0xffU & ((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[2U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[2U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12303,((0xffU & ((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[2U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[2U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12304,((0xffU & ((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[2U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[2U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12305,((0xffU & ((0x1000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_2[3U]
                                           : vlSelf->io_l2_rxDat_bits_data[3U]))),8);
    bufp->fullCData(oldp+12306,((0xffU & ((0x2000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[3U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[3U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12307,((0xffU & ((0x4000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[3U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[3U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12308,((0xffU & ((0x8000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[3U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[3U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12309,((0xffU & ((0x10000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_2[4U]
                                           : vlSelf->io_l2_rxDat_bits_data[4U]))),8);
    bufp->fullCData(oldp+12310,((0xffU & ((0x20000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[4U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[4U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12311,((0xffU & ((0x40000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[4U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[4U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12312,((0xffU & ((0x80000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[4U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[4U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12313,((0xffU & ((0x100000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_2[5U]
                                           : vlSelf->io_l2_rxDat_bits_data[5U]))),8);
    bufp->fullCData(oldp+12314,((0xffU & ((0x200000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[5U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[5U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12315,((0xffU & ((0x400000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[5U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[5U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12316,((0xffU & ((0x800000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[5U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[5U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12317,((0xffU & ((0x1000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_2[6U]
                                           : vlSelf->io_l2_rxDat_bits_data[6U]))),8);
    bufp->fullCData(oldp+12318,((0xffU & ((0x2000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[6U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[6U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12319,((0xffU & ((0x4000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[6U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[6U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12320,((0xffU & ((0x8000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[6U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[6U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12321,((0xffU & ((0x10000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_2[7U]
                                           : vlSelf->io_l2_rxDat_bits_data[7U]))),8);
    bufp->fullCData(oldp+12322,((0xffU & ((0x20000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[7U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[7U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12323,((0xffU & ((0x40000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_2)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[7U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[7U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12324,((0xffU & ((vlSelf->DCache__DOT__miss__DOT__maskHalf_2 
                                           >> 0x1fU)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_2[7U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_2[7U] 
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
    bufp->fullWData(oldp+12325,(__Vtemp_98),256);
    bufp->fullBit(oldp+12333,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_57) 
                                & (2U == (IData)(vlSelf->io_refillWakeup_bits_id))) 
                               | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_2)) 
                                  & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_2_wakeSent)))));
    bufp->fullBit(oldp+12334,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_60) 
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
    bufp->fullWData(oldp+12335,(__Vtemp_101),256);
    bufp->fullCData(oldp+12343,((0xffU & ((1U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_3[0U]
                                           : vlSelf->io_l2_rxDat_bits_data[0U]))),8);
    bufp->fullCData(oldp+12344,((0xffU & ((2U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[0U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[0U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12345,((0xffU & ((4U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[0U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[0U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12346,((0xffU & ((8U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[0U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[0U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12347,((0xffU & ((0x10U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_3[1U]
                                           : vlSelf->io_l2_rxDat_bits_data[1U]))),8);
    bufp->fullCData(oldp+12348,((0xffU & ((0x20U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[1U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[1U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12349,((0xffU & ((0x40U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[1U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[1U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12350,((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[1U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[1U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12351,((0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_3[2U]
                                           : vlSelf->io_l2_rxDat_bits_data[2U]))),8);
    bufp->fullCData(oldp+12352,((0xffU & ((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[2U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[2U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12353,((0xffU & ((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[2U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[2U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12354,((0xffU & ((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[2U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[2U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12355,((0xffU & ((0x1000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_3[3U]
                                           : vlSelf->io_l2_rxDat_bits_data[3U]))),8);
    bufp->fullCData(oldp+12356,((0xffU & ((0x2000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[3U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[3U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12357,((0xffU & ((0x4000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[3U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[3U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12358,((0xffU & ((0x8000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[3U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[3U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12359,((0xffU & ((0x10000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_3[4U]
                                           : vlSelf->io_l2_rxDat_bits_data[4U]))),8);
    bufp->fullCData(oldp+12360,((0xffU & ((0x20000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[4U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[4U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12361,((0xffU & ((0x40000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[4U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[4U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12362,((0xffU & ((0x80000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[4U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[4U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12363,((0xffU & ((0x100000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_3[5U]
                                           : vlSelf->io_l2_rxDat_bits_data[5U]))),8);
    bufp->fullCData(oldp+12364,((0xffU & ((0x200000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[5U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[5U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12365,((0xffU & ((0x400000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[5U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[5U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12366,((0xffU & ((0x800000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[5U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[5U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12367,((0xffU & ((0x1000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_3[6U]
                                           : vlSelf->io_l2_rxDat_bits_data[6U]))),8);
    bufp->fullCData(oldp+12368,((0xffU & ((0x2000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[6U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[6U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12369,((0xffU & ((0x4000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[6U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[6U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12370,((0xffU & ((0x8000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[6U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[6U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12371,((0xffU & ((0x10000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_3[7U]
                                           : vlSelf->io_l2_rxDat_bits_data[7U]))),8);
    bufp->fullCData(oldp+12372,((0xffU & ((0x20000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[7U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[7U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12373,((0xffU & ((0x40000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_3)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[7U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[7U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12374,((0xffU & ((vlSelf->DCache__DOT__miss__DOT__maskHalf_3 
                                           >> 0x1fU)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_3[7U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_3[7U] 
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
    bufp->fullWData(oldp+12375,(__Vtemp_106),256);
    bufp->fullBit(oldp+12383,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_57) 
                                & (3U == (IData)(vlSelf->io_refillWakeup_bits_id))) 
                               | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_3)) 
                                  & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_3_wakeSent)))));
    bufp->fullBit(oldp+12384,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_60) 
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
    bufp->fullWData(oldp+12385,(__Vtemp_109),256);
    bufp->fullCData(oldp+12393,((0xffU & ((1U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_4[0U]
                                           : vlSelf->io_l2_rxDat_bits_data[0U]))),8);
    bufp->fullCData(oldp+12394,((0xffU & ((2U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[0U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[0U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12395,((0xffU & ((4U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[0U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[0U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12396,((0xffU & ((8U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[0U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[0U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12397,((0xffU & ((0x10U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_4[1U]
                                           : vlSelf->io_l2_rxDat_bits_data[1U]))),8);
    bufp->fullCData(oldp+12398,((0xffU & ((0x20U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[1U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[1U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12399,((0xffU & ((0x40U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[1U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[1U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12400,((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[1U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[1U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12401,((0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_4[2U]
                                           : vlSelf->io_l2_rxDat_bits_data[2U]))),8);
    bufp->fullCData(oldp+12402,((0xffU & ((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[2U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[2U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12403,((0xffU & ((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[2U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[2U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12404,((0xffU & ((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[2U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[2U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12405,((0xffU & ((0x1000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_4[3U]
                                           : vlSelf->io_l2_rxDat_bits_data[3U]))),8);
    bufp->fullCData(oldp+12406,((0xffU & ((0x2000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[3U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[3U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12407,((0xffU & ((0x4000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[3U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[3U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12408,((0xffU & ((0x8000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[3U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[3U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12409,((0xffU & ((0x10000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_4[4U]
                                           : vlSelf->io_l2_rxDat_bits_data[4U]))),8);
    bufp->fullCData(oldp+12410,((0xffU & ((0x20000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[4U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[4U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12411,((0xffU & ((0x40000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[4U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[4U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12412,((0xffU & ((0x80000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[4U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[4U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12413,((0xffU & ((0x100000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_4[5U]
                                           : vlSelf->io_l2_rxDat_bits_data[5U]))),8);
    bufp->fullCData(oldp+12414,((0xffU & ((0x200000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[5U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[5U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12415,((0xffU & ((0x400000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[5U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[5U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12416,((0xffU & ((0x800000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[5U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[5U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12417,((0xffU & ((0x1000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_4[6U]
                                           : vlSelf->io_l2_rxDat_bits_data[6U]))),8);
    bufp->fullCData(oldp+12418,((0xffU & ((0x2000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[6U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[6U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12419,((0xffU & ((0x4000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[6U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[6U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12420,((0xffU & ((0x8000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[6U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[6U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12421,((0xffU & ((0x10000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_4[7U]
                                           : vlSelf->io_l2_rxDat_bits_data[7U]))),8);
    bufp->fullCData(oldp+12422,((0xffU & ((0x20000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[7U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[7U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12423,((0xffU & ((0x40000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_4)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[7U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[7U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12424,((0xffU & ((vlSelf->DCache__DOT__miss__DOT__maskHalf_4 
                                           >> 0x1fU)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_4[7U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_4[7U] 
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
    bufp->fullWData(oldp+12425,(__Vtemp_114),256);
    bufp->fullBit(oldp+12433,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_57) 
                                & (4U == (IData)(vlSelf->io_refillWakeup_bits_id))) 
                               | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_4)) 
                                  & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_4_wakeSent)))));
    bufp->fullBit(oldp+12434,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_60) 
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
    bufp->fullWData(oldp+12435,(__Vtemp_117),256);
    bufp->fullCData(oldp+12443,((0xffU & ((1U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_5[0U]
                                           : vlSelf->io_l2_rxDat_bits_data[0U]))),8);
    bufp->fullCData(oldp+12444,((0xffU & ((2U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[0U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[0U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12445,((0xffU & ((4U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[0U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[0U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12446,((0xffU & ((8U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[0U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[0U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12447,((0xffU & ((0x10U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_5[1U]
                                           : vlSelf->io_l2_rxDat_bits_data[1U]))),8);
    bufp->fullCData(oldp+12448,((0xffU & ((0x20U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[1U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[1U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12449,((0xffU & ((0x40U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[1U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[1U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12450,((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[1U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[1U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12451,((0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_5[2U]
                                           : vlSelf->io_l2_rxDat_bits_data[2U]))),8);
    bufp->fullCData(oldp+12452,((0xffU & ((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[2U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[2U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12453,((0xffU & ((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[2U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[2U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12454,((0xffU & ((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[2U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[2U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12455,((0xffU & ((0x1000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_5[3U]
                                           : vlSelf->io_l2_rxDat_bits_data[3U]))),8);
    bufp->fullCData(oldp+12456,((0xffU & ((0x2000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[3U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[3U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12457,((0xffU & ((0x4000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[3U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[3U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12458,((0xffU & ((0x8000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[3U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[3U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12459,((0xffU & ((0x10000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_5[4U]
                                           : vlSelf->io_l2_rxDat_bits_data[4U]))),8);
    bufp->fullCData(oldp+12460,((0xffU & ((0x20000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[4U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[4U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12461,((0xffU & ((0x40000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[4U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[4U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12462,((0xffU & ((0x80000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[4U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[4U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12463,((0xffU & ((0x100000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_5[5U]
                                           : vlSelf->io_l2_rxDat_bits_data[5U]))),8);
    bufp->fullCData(oldp+12464,((0xffU & ((0x200000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[5U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[5U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12465,((0xffU & ((0x400000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[5U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[5U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12466,((0xffU & ((0x800000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[5U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[5U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12467,((0xffU & ((0x1000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_5[6U]
                                           : vlSelf->io_l2_rxDat_bits_data[6U]))),8);
    bufp->fullCData(oldp+12468,((0xffU & ((0x2000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[6U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[6U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12469,((0xffU & ((0x4000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[6U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[6U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12470,((0xffU & ((0x8000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[6U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[6U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12471,((0xffU & ((0x10000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_5[7U]
                                           : vlSelf->io_l2_rxDat_bits_data[7U]))),8);
    bufp->fullCData(oldp+12472,((0xffU & ((0x20000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[7U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[7U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12473,((0xffU & ((0x40000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_5)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[7U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[7U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12474,((0xffU & ((vlSelf->DCache__DOT__miss__DOT__maskHalf_5 
                                           >> 0x1fU)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_5[7U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_5[7U] 
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
    bufp->fullWData(oldp+12475,(__Vtemp_122),256);
    bufp->fullBit(oldp+12483,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_57) 
                                & (5U == (IData)(vlSelf->io_refillWakeup_bits_id))) 
                               | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_5)) 
                                  & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_5_wakeSent)))));
    bufp->fullBit(oldp+12484,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_60) 
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
    bufp->fullWData(oldp+12485,(__Vtemp_125),256);
    bufp->fullCData(oldp+12493,((0xffU & ((1U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_6[0U]
                                           : vlSelf->io_l2_rxDat_bits_data[0U]))),8);
    bufp->fullCData(oldp+12494,((0xffU & ((2U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[0U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[0U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12495,((0xffU & ((4U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[0U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[0U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12496,((0xffU & ((8U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[0U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[0U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12497,((0xffU & ((0x10U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_6[1U]
                                           : vlSelf->io_l2_rxDat_bits_data[1U]))),8);
    bufp->fullCData(oldp+12498,((0xffU & ((0x20U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[1U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[1U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12499,((0xffU & ((0x40U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[1U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[1U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12500,((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[1U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[1U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12501,((0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_6[2U]
                                           : vlSelf->io_l2_rxDat_bits_data[2U]))),8);
    bufp->fullCData(oldp+12502,((0xffU & ((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[2U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[2U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12503,((0xffU & ((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[2U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[2U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12504,((0xffU & ((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[2U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[2U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12505,((0xffU & ((0x1000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_6[3U]
                                           : vlSelf->io_l2_rxDat_bits_data[3U]))),8);
    bufp->fullCData(oldp+12506,((0xffU & ((0x2000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[3U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[3U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12507,((0xffU & ((0x4000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[3U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[3U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12508,((0xffU & ((0x8000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[3U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[3U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12509,((0xffU & ((0x10000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_6[4U]
                                           : vlSelf->io_l2_rxDat_bits_data[4U]))),8);
    bufp->fullCData(oldp+12510,((0xffU & ((0x20000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[4U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[4U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12511,((0xffU & ((0x40000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[4U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[4U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12512,((0xffU & ((0x80000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[4U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[4U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12513,((0xffU & ((0x100000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_6[5U]
                                           : vlSelf->io_l2_rxDat_bits_data[5U]))),8);
    bufp->fullCData(oldp+12514,((0xffU & ((0x200000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[5U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[5U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12515,((0xffU & ((0x400000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[5U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[5U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12516,((0xffU & ((0x800000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[5U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[5U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12517,((0xffU & ((0x1000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_6[6U]
                                           : vlSelf->io_l2_rxDat_bits_data[6U]))),8);
    bufp->fullCData(oldp+12518,((0xffU & ((0x2000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[6U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[6U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12519,((0xffU & ((0x4000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[6U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[6U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12520,((0xffU & ((0x8000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[6U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[6U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12521,((0xffU & ((0x10000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_6[7U]
                                           : vlSelf->io_l2_rxDat_bits_data[7U]))),8);
    bufp->fullCData(oldp+12522,((0xffU & ((0x20000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[7U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[7U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12523,((0xffU & ((0x40000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_6)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[7U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[7U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12524,((0xffU & ((vlSelf->DCache__DOT__miss__DOT__maskHalf_6 
                                           >> 0x1fU)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_6[7U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_6[7U] 
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
    bufp->fullWData(oldp+12525,(__Vtemp_130),256);
    bufp->fullBit(oldp+12533,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_57) 
                                & (6U == (IData)(vlSelf->io_refillWakeup_bits_id))) 
                               | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_6)) 
                                  & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_6_wakeSent)))));
    bufp->fullBit(oldp+12534,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_60) 
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
    bufp->fullWData(oldp+12535,(__Vtemp_133),256);
    bufp->fullCData(oldp+12543,((0xffU & ((1U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_7[0U]
                                           : vlSelf->io_l2_rxDat_bits_data[0U]))),8);
    bufp->fullCData(oldp+12544,((0xffU & ((2U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[0U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[0U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12545,((0xffU & ((4U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[0U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[0U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12546,((0xffU & ((8U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[0U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[0U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12547,((0xffU & ((0x10U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_7[1U]
                                           : vlSelf->io_l2_rxDat_bits_data[1U]))),8);
    bufp->fullCData(oldp+12548,((0xffU & ((0x20U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[1U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[1U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12549,((0xffU & ((0x40U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[1U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[1U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12550,((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[1U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[1U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12551,((0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_7[2U]
                                           : vlSelf->io_l2_rxDat_bits_data[2U]))),8);
    bufp->fullCData(oldp+12552,((0xffU & ((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[2U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[2U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12553,((0xffU & ((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[2U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[2U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12554,((0xffU & ((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[2U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[2U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12555,((0xffU & ((0x1000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_7[3U]
                                           : vlSelf->io_l2_rxDat_bits_data[3U]))),8);
    bufp->fullCData(oldp+12556,((0xffU & ((0x2000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[3U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[3U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12557,((0xffU & ((0x4000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[3U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[3U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12558,((0xffU & ((0x8000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[3U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[3U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12559,((0xffU & ((0x10000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_7[4U]
                                           : vlSelf->io_l2_rxDat_bits_data[4U]))),8);
    bufp->fullCData(oldp+12560,((0xffU & ((0x20000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[4U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[4U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12561,((0xffU & ((0x40000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[4U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[4U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12562,((0xffU & ((0x80000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[4U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[4U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12563,((0xffU & ((0x100000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_7[5U]
                                           : vlSelf->io_l2_rxDat_bits_data[5U]))),8);
    bufp->fullCData(oldp+12564,((0xffU & ((0x200000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[5U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[5U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12565,((0xffU & ((0x400000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[5U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[5U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12566,((0xffU & ((0x800000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[5U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[5U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12567,((0xffU & ((0x1000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_7[6U]
                                           : vlSelf->io_l2_rxDat_bits_data[6U]))),8);
    bufp->fullCData(oldp+12568,((0xffU & ((0x2000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[6U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[6U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12569,((0xffU & ((0x4000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[6U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[6U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12570,((0xffU & ((0x8000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[6U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[6U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12571,((0xffU & ((0x10000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_7[7U]
                                           : vlSelf->io_l2_rxDat_bits_data[7U]))),8);
    bufp->fullCData(oldp+12572,((0xffU & ((0x20000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[7U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[7U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12573,((0xffU & ((0x40000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_7)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[7U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[7U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12574,((0xffU & ((vlSelf->DCache__DOT__miss__DOT__maskHalf_7 
                                           >> 0x1fU)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_7[7U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_7[7U] 
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
    bufp->fullWData(oldp+12575,(__Vtemp_138),256);
    bufp->fullBit(oldp+12583,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_57) 
                                & (7U == (IData)(vlSelf->io_refillWakeup_bits_id))) 
                               | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_7)) 
                                  & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_7_wakeSent)))));
    bufp->fullBit(oldp+12584,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_60) 
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
    bufp->fullWData(oldp+12585,(__Vtemp_141),256);
    bufp->fullCData(oldp+12593,((0xffU & ((1U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_8[0U]
                                           : vlSelf->io_l2_rxDat_bits_data[0U]))),8);
    bufp->fullCData(oldp+12594,((0xffU & ((2U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[0U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[0U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12595,((0xffU & ((4U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[0U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[0U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12596,((0xffU & ((8U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[0U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[0U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12597,((0xffU & ((0x10U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_8[1U]
                                           : vlSelf->io_l2_rxDat_bits_data[1U]))),8);
    bufp->fullCData(oldp+12598,((0xffU & ((0x20U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[1U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[1U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12599,((0xffU & ((0x40U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[1U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[1U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12600,((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[1U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[1U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12601,((0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_8[2U]
                                           : vlSelf->io_l2_rxDat_bits_data[2U]))),8);
    bufp->fullCData(oldp+12602,((0xffU & ((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[2U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[2U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12603,((0xffU & ((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[2U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[2U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12604,((0xffU & ((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[2U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[2U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12605,((0xffU & ((0x1000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_8[3U]
                                           : vlSelf->io_l2_rxDat_bits_data[3U]))),8);
    bufp->fullCData(oldp+12606,((0xffU & ((0x2000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[3U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[3U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12607,((0xffU & ((0x4000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[3U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[3U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12608,((0xffU & ((0x8000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[3U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[3U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12609,((0xffU & ((0x10000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_8[4U]
                                           : vlSelf->io_l2_rxDat_bits_data[4U]))),8);
    bufp->fullCData(oldp+12610,((0xffU & ((0x20000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[4U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[4U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12611,((0xffU & ((0x40000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[4U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[4U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12612,((0xffU & ((0x80000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[4U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[4U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12613,((0xffU & ((0x100000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_8[5U]
                                           : vlSelf->io_l2_rxDat_bits_data[5U]))),8);
    bufp->fullCData(oldp+12614,((0xffU & ((0x200000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[5U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[5U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12615,((0xffU & ((0x400000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[5U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[5U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12616,((0xffU & ((0x800000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[5U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[5U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12617,((0xffU & ((0x1000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_8[6U]
                                           : vlSelf->io_l2_rxDat_bits_data[6U]))),8);
    bufp->fullCData(oldp+12618,((0xffU & ((0x2000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[6U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[6U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12619,((0xffU & ((0x4000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[6U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[6U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12620,((0xffU & ((0x8000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[6U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[6U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12621,((0xffU & ((0x10000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_8[7U]
                                           : vlSelf->io_l2_rxDat_bits_data[7U]))),8);
    bufp->fullCData(oldp+12622,((0xffU & ((0x20000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[7U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[7U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12623,((0xffU & ((0x40000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_8)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[7U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[7U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12624,((0xffU & ((vlSelf->DCache__DOT__miss__DOT__maskHalf_8 
                                           >> 0x1fU)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_8[7U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_8[7U] 
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
    bufp->fullWData(oldp+12625,(__Vtemp_146),256);
    bufp->fullBit(oldp+12633,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_57) 
                                & (8U == (IData)(vlSelf->io_refillWakeup_bits_id))) 
                               | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_8)) 
                                  & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_8_wakeSent)))));
    bufp->fullBit(oldp+12634,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_60) 
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
    bufp->fullWData(oldp+12635,(__Vtemp_149),256);
    bufp->fullCData(oldp+12643,((0xffU & ((1U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_9[0U]
                                           : vlSelf->io_l2_rxDat_bits_data[0U]))),8);
    bufp->fullCData(oldp+12644,((0xffU & ((2U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[0U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[0U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12645,((0xffU & ((4U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[0U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[0U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12646,((0xffU & ((8U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[0U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[0U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12647,((0xffU & ((0x10U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_9[1U]
                                           : vlSelf->io_l2_rxDat_bits_data[1U]))),8);
    bufp->fullCData(oldp+12648,((0xffU & ((0x20U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[1U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[1U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12649,((0xffU & ((0x40U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[1U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[1U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12650,((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[1U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[1U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12651,((0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_9[2U]
                                           : vlSelf->io_l2_rxDat_bits_data[2U]))),8);
    bufp->fullCData(oldp+12652,((0xffU & ((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[2U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[2U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12653,((0xffU & ((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[2U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[2U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12654,((0xffU & ((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[2U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[2U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12655,((0xffU & ((0x1000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_9[3U]
                                           : vlSelf->io_l2_rxDat_bits_data[3U]))),8);
    bufp->fullCData(oldp+12656,((0xffU & ((0x2000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[3U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[3U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12657,((0xffU & ((0x4000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[3U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[3U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12658,((0xffU & ((0x8000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[3U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[3U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12659,((0xffU & ((0x10000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_9[4U]
                                           : vlSelf->io_l2_rxDat_bits_data[4U]))),8);
    bufp->fullCData(oldp+12660,((0xffU & ((0x20000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[4U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[4U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12661,((0xffU & ((0x40000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[4U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[4U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12662,((0xffU & ((0x80000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[4U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[4U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12663,((0xffU & ((0x100000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_9[5U]
                                           : vlSelf->io_l2_rxDat_bits_data[5U]))),8);
    bufp->fullCData(oldp+12664,((0xffU & ((0x200000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[5U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[5U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12665,((0xffU & ((0x400000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[5U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[5U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12666,((0xffU & ((0x800000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[5U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[5U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12667,((0xffU & ((0x1000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_9[6U]
                                           : vlSelf->io_l2_rxDat_bits_data[6U]))),8);
    bufp->fullCData(oldp+12668,((0xffU & ((0x2000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[6U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[6U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12669,((0xffU & ((0x4000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[6U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[6U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12670,((0xffU & ((0x8000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[6U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[6U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12671,((0xffU & ((0x10000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_9[7U]
                                           : vlSelf->io_l2_rxDat_bits_data[7U]))),8);
    bufp->fullCData(oldp+12672,((0xffU & ((0x20000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[7U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[7U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12673,((0xffU & ((0x40000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_9)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[7U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[7U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12674,((0xffU & ((vlSelf->DCache__DOT__miss__DOT__maskHalf_9 
                                           >> 0x1fU)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_9[7U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_9[7U] 
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
    bufp->fullWData(oldp+12675,(__Vtemp_154),256);
    bufp->fullBit(oldp+12683,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_57) 
                                & (9U == (IData)(vlSelf->io_refillWakeup_bits_id))) 
                               | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_9)) 
                                  & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_9_wakeSent)))));
    bufp->fullBit(oldp+12684,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_60) 
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
    bufp->fullWData(oldp+12685,(__Vtemp_157),256);
    bufp->fullCData(oldp+12693,((0xffU & ((1U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_10[0U]
                                           : vlSelf->io_l2_rxDat_bits_data[0U]))),8);
    bufp->fullCData(oldp+12694,((0xffU & ((2U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[0U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[0U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12695,((0xffU & ((4U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[0U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[0U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12696,((0xffU & ((8U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[0U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[0U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12697,((0xffU & ((0x10U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_10[1U]
                                           : vlSelf->io_l2_rxDat_bits_data[1U]))),8);
    bufp->fullCData(oldp+12698,((0xffU & ((0x20U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[1U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[1U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12699,((0xffU & ((0x40U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[1U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[1U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12700,((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[1U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[1U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12701,((0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_10[2U]
                                           : vlSelf->io_l2_rxDat_bits_data[2U]))),8);
    bufp->fullCData(oldp+12702,((0xffU & ((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[2U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[2U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12703,((0xffU & ((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[2U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[2U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12704,((0xffU & ((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[2U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[2U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12705,((0xffU & ((0x1000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_10[3U]
                                           : vlSelf->io_l2_rxDat_bits_data[3U]))),8);
    bufp->fullCData(oldp+12706,((0xffU & ((0x2000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[3U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[3U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12707,((0xffU & ((0x4000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[3U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[3U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12708,((0xffU & ((0x8000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[3U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[3U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12709,((0xffU & ((0x10000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_10[4U]
                                           : vlSelf->io_l2_rxDat_bits_data[4U]))),8);
    bufp->fullCData(oldp+12710,((0xffU & ((0x20000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[4U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[4U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12711,((0xffU & ((0x40000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[4U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[4U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12712,((0xffU & ((0x80000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[4U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[4U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12713,((0xffU & ((0x100000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_10[5U]
                                           : vlSelf->io_l2_rxDat_bits_data[5U]))),8);
    bufp->fullCData(oldp+12714,((0xffU & ((0x200000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[5U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[5U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12715,((0xffU & ((0x400000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[5U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[5U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12716,((0xffU & ((0x800000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[5U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[5U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12717,((0xffU & ((0x1000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_10[6U]
                                           : vlSelf->io_l2_rxDat_bits_data[6U]))),8);
    bufp->fullCData(oldp+12718,((0xffU & ((0x2000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[6U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[6U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12719,((0xffU & ((0x4000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[6U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[6U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12720,((0xffU & ((0x8000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[6U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[6U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12721,((0xffU & ((0x10000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_10[7U]
                                           : vlSelf->io_l2_rxDat_bits_data[7U]))),8);
    bufp->fullCData(oldp+12722,((0xffU & ((0x20000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[7U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[7U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12723,((0xffU & ((0x40000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_10)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[7U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[7U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12724,((0xffU & ((vlSelf->DCache__DOT__miss__DOT__maskHalf_10 
                                           >> 0x1fU)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_10[7U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_10[7U] 
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
    bufp->fullWData(oldp+12725,(__Vtemp_162),256);
    bufp->fullBit(oldp+12733,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_57) 
                                & (0xaU == (IData)(vlSelf->io_refillWakeup_bits_id))) 
                               | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_10)) 
                                  & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_10_wakeSent)))));
    bufp->fullBit(oldp+12734,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_60) 
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
    bufp->fullWData(oldp+12735,(__Vtemp_165),256);
    bufp->fullCData(oldp+12743,((0xffU & ((1U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_11[0U]
                                           : vlSelf->io_l2_rxDat_bits_data[0U]))),8);
    bufp->fullCData(oldp+12744,((0xffU & ((2U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[0U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[0U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12745,((0xffU & ((4U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[0U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[0U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12746,((0xffU & ((8U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[0U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[0U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12747,((0xffU & ((0x10U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_11[1U]
                                           : vlSelf->io_l2_rxDat_bits_data[1U]))),8);
    bufp->fullCData(oldp+12748,((0xffU & ((0x20U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[1U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[1U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12749,((0xffU & ((0x40U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[1U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[1U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12750,((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[1U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[1U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12751,((0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_11[2U]
                                           : vlSelf->io_l2_rxDat_bits_data[2U]))),8);
    bufp->fullCData(oldp+12752,((0xffU & ((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[2U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[2U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12753,((0xffU & ((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[2U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[2U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12754,((0xffU & ((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[2U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[2U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12755,((0xffU & ((0x1000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_11[3U]
                                           : vlSelf->io_l2_rxDat_bits_data[3U]))),8);
    bufp->fullCData(oldp+12756,((0xffU & ((0x2000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[3U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[3U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12757,((0xffU & ((0x4000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[3U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[3U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12758,((0xffU & ((0x8000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[3U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[3U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12759,((0xffU & ((0x10000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_11[4U]
                                           : vlSelf->io_l2_rxDat_bits_data[4U]))),8);
    bufp->fullCData(oldp+12760,((0xffU & ((0x20000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[4U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[4U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12761,((0xffU & ((0x40000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[4U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[4U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12762,((0xffU & ((0x80000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[4U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[4U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12763,((0xffU & ((0x100000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_11[5U]
                                           : vlSelf->io_l2_rxDat_bits_data[5U]))),8);
    bufp->fullCData(oldp+12764,((0xffU & ((0x200000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[5U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[5U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12765,((0xffU & ((0x400000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[5U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[5U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12766,((0xffU & ((0x800000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[5U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[5U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12767,((0xffU & ((0x1000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_11[6U]
                                           : vlSelf->io_l2_rxDat_bits_data[6U]))),8);
    bufp->fullCData(oldp+12768,((0xffU & ((0x2000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[6U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[6U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12769,((0xffU & ((0x4000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[6U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[6U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12770,((0xffU & ((0x8000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[6U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[6U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12771,((0xffU & ((0x10000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_11[7U]
                                           : vlSelf->io_l2_rxDat_bits_data[7U]))),8);
    bufp->fullCData(oldp+12772,((0xffU & ((0x20000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[7U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[7U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12773,((0xffU & ((0x40000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_11)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[7U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[7U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12774,((0xffU & ((vlSelf->DCache__DOT__miss__DOT__maskHalf_11 
                                           >> 0x1fU)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_11[7U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_11[7U] 
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
    bufp->fullWData(oldp+12775,(__Vtemp_170),256);
    bufp->fullBit(oldp+12783,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_57) 
                                & (0xbU == (IData)(vlSelf->io_refillWakeup_bits_id))) 
                               | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_11)) 
                                  & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_wakeSent)))));
    bufp->fullBit(oldp+12784,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_60) 
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
    bufp->fullWData(oldp+12785,(__Vtemp_173),256);
    bufp->fullCData(oldp+12793,((0xffU & ((1U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_12[0U]
                                           : vlSelf->io_l2_rxDat_bits_data[0U]))),8);
    bufp->fullCData(oldp+12794,((0xffU & ((2U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[0U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[0U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12795,((0xffU & ((4U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[0U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[0U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12796,((0xffU & ((8U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[0U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[0U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12797,((0xffU & ((0x10U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_12[1U]
                                           : vlSelf->io_l2_rxDat_bits_data[1U]))),8);
    bufp->fullCData(oldp+12798,((0xffU & ((0x20U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[1U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[1U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12799,((0xffU & ((0x40U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[1U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[1U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12800,((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[1U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[1U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12801,((0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_12[2U]
                                           : vlSelf->io_l2_rxDat_bits_data[2U]))),8);
    bufp->fullCData(oldp+12802,((0xffU & ((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[2U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[2U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12803,((0xffU & ((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[2U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[2U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12804,((0xffU & ((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[2U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[2U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12805,((0xffU & ((0x1000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_12[3U]
                                           : vlSelf->io_l2_rxDat_bits_data[3U]))),8);
    bufp->fullCData(oldp+12806,((0xffU & ((0x2000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[3U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[3U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12807,((0xffU & ((0x4000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[3U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[3U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12808,((0xffU & ((0x8000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[3U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[3U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12809,((0xffU & ((0x10000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_12[4U]
                                           : vlSelf->io_l2_rxDat_bits_data[4U]))),8);
    bufp->fullCData(oldp+12810,((0xffU & ((0x20000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[4U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[4U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12811,((0xffU & ((0x40000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[4U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[4U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12812,((0xffU & ((0x80000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[4U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[4U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12813,((0xffU & ((0x100000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_12[5U]
                                           : vlSelf->io_l2_rxDat_bits_data[5U]))),8);
    bufp->fullCData(oldp+12814,((0xffU & ((0x200000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[5U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[5U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12815,((0xffU & ((0x400000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[5U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[5U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12816,((0xffU & ((0x800000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[5U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[5U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12817,((0xffU & ((0x1000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_12[6U]
                                           : vlSelf->io_l2_rxDat_bits_data[6U]))),8);
    bufp->fullCData(oldp+12818,((0xffU & ((0x2000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[6U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[6U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12819,((0xffU & ((0x4000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[6U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[6U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12820,((0xffU & ((0x8000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[6U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[6U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12821,((0xffU & ((0x10000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_12[7U]
                                           : vlSelf->io_l2_rxDat_bits_data[7U]))),8);
    bufp->fullCData(oldp+12822,((0xffU & ((0x20000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[7U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[7U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12823,((0xffU & ((0x40000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_12)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[7U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[7U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12824,((0xffU & ((vlSelf->DCache__DOT__miss__DOT__maskHalf_12 
                                           >> 0x1fU)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_12[7U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_12[7U] 
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
    bufp->fullWData(oldp+12825,(__Vtemp_178),256);
    bufp->fullBit(oldp+12833,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_57) 
                                & (0xcU == (IData)(vlSelf->io_refillWakeup_bits_id))) 
                               | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_12)) 
                                  & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_wakeSent)))));
    bufp->fullBit(oldp+12834,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_60) 
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
    bufp->fullWData(oldp+12835,(__Vtemp_181),256);
    bufp->fullCData(oldp+12843,((0xffU & ((1U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_13[0U]
                                           : vlSelf->io_l2_rxDat_bits_data[0U]))),8);
    bufp->fullCData(oldp+12844,((0xffU & ((2U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[0U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[0U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12845,((0xffU & ((4U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[0U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[0U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12846,((0xffU & ((8U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[0U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[0U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12847,((0xffU & ((0x10U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_13[1U]
                                           : vlSelf->io_l2_rxDat_bits_data[1U]))),8);
    bufp->fullCData(oldp+12848,((0xffU & ((0x20U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[1U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[1U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12849,((0xffU & ((0x40U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[1U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[1U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12850,((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[1U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[1U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12851,((0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_13[2U]
                                           : vlSelf->io_l2_rxDat_bits_data[2U]))),8);
    bufp->fullCData(oldp+12852,((0xffU & ((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[2U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[2U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12853,((0xffU & ((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[2U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[2U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12854,((0xffU & ((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[2U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[2U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12855,((0xffU & ((0x1000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_13[3U]
                                           : vlSelf->io_l2_rxDat_bits_data[3U]))),8);
    bufp->fullCData(oldp+12856,((0xffU & ((0x2000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[3U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[3U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12857,((0xffU & ((0x4000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[3U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[3U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12858,((0xffU & ((0x8000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[3U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[3U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12859,((0xffU & ((0x10000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_13[4U]
                                           : vlSelf->io_l2_rxDat_bits_data[4U]))),8);
    bufp->fullCData(oldp+12860,((0xffU & ((0x20000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[4U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[4U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12861,((0xffU & ((0x40000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[4U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[4U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12862,((0xffU & ((0x80000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[4U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[4U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12863,((0xffU & ((0x100000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_13[5U]
                                           : vlSelf->io_l2_rxDat_bits_data[5U]))),8);
    bufp->fullCData(oldp+12864,((0xffU & ((0x200000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[5U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[5U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12865,((0xffU & ((0x400000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[5U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[5U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12866,((0xffU & ((0x800000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[5U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[5U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12867,((0xffU & ((0x1000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_13[6U]
                                           : vlSelf->io_l2_rxDat_bits_data[6U]))),8);
    bufp->fullCData(oldp+12868,((0xffU & ((0x2000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[6U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[6U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12869,((0xffU & ((0x4000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[6U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[6U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12870,((0xffU & ((0x8000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[6U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[6U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12871,((0xffU & ((0x10000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_13[7U]
                                           : vlSelf->io_l2_rxDat_bits_data[7U]))),8);
    bufp->fullCData(oldp+12872,((0xffU & ((0x20000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[7U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[7U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12873,((0xffU & ((0x40000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_13)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[7U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[7U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12874,((0xffU & ((vlSelf->DCache__DOT__miss__DOT__maskHalf_13 
                                           >> 0x1fU)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_13[7U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_13[7U] 
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
    bufp->fullWData(oldp+12875,(__Vtemp_186),256);
    bufp->fullBit(oldp+12883,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_57) 
                                & (0xdU == (IData)(vlSelf->io_refillWakeup_bits_id))) 
                               | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_13)) 
                                  & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_wakeSent)))));
    bufp->fullBit(oldp+12884,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_60) 
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
    bufp->fullWData(oldp+12885,(__Vtemp_189),256);
    bufp->fullCData(oldp+12893,((0xffU & ((1U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_14[0U]
                                           : vlSelf->io_l2_rxDat_bits_data[0U]))),8);
    bufp->fullCData(oldp+12894,((0xffU & ((2U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[0U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[0U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12895,((0xffU & ((4U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[0U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[0U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12896,((0xffU & ((8U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[0U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[0U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12897,((0xffU & ((0x10U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_14[1U]
                                           : vlSelf->io_l2_rxDat_bits_data[1U]))),8);
    bufp->fullCData(oldp+12898,((0xffU & ((0x20U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[1U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[1U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12899,((0xffU & ((0x40U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[1U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[1U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12900,((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[1U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[1U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12901,((0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_14[2U]
                                           : vlSelf->io_l2_rxDat_bits_data[2U]))),8);
    bufp->fullCData(oldp+12902,((0xffU & ((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[2U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[2U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12903,((0xffU & ((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[2U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[2U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12904,((0xffU & ((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[2U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[2U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12905,((0xffU & ((0x1000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_14[3U]
                                           : vlSelf->io_l2_rxDat_bits_data[3U]))),8);
    bufp->fullCData(oldp+12906,((0xffU & ((0x2000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[3U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[3U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12907,((0xffU & ((0x4000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[3U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[3U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12908,((0xffU & ((0x8000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[3U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[3U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12909,((0xffU & ((0x10000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_14[4U]
                                           : vlSelf->io_l2_rxDat_bits_data[4U]))),8);
    bufp->fullCData(oldp+12910,((0xffU & ((0x20000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[4U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[4U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12911,((0xffU & ((0x40000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[4U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[4U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12912,((0xffU & ((0x80000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[4U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[4U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12913,((0xffU & ((0x100000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_14[5U]
                                           : vlSelf->io_l2_rxDat_bits_data[5U]))),8);
    bufp->fullCData(oldp+12914,((0xffU & ((0x200000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[5U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[5U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12915,((0xffU & ((0x400000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[5U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[5U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12916,((0xffU & ((0x800000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[5U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[5U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12917,((0xffU & ((0x1000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_14[6U]
                                           : vlSelf->io_l2_rxDat_bits_data[6U]))),8);
    bufp->fullCData(oldp+12918,((0xffU & ((0x2000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[6U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[6U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12919,((0xffU & ((0x4000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[6U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[6U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12920,((0xffU & ((0x8000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[6U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[6U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12921,((0xffU & ((0x10000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_14[7U]
                                           : vlSelf->io_l2_rxDat_bits_data[7U]))),8);
    bufp->fullCData(oldp+12922,((0xffU & ((0x20000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[7U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[7U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12923,((0xffU & ((0x40000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_14)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[7U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[7U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12924,((0xffU & ((vlSelf->DCache__DOT__miss__DOT__maskHalf_14 
                                           >> 0x1fU)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_14[7U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_14[7U] 
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
    bufp->fullWData(oldp+12925,(__Vtemp_194),256);
    bufp->fullBit(oldp+12933,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_57) 
                                & (0xeU == (IData)(vlSelf->io_refillWakeup_bits_id))) 
                               | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_14)) 
                                  & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_wakeSent)))));
    bufp->fullBit(oldp+12934,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_60) 
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
    bufp->fullWData(oldp+12935,(__Vtemp_197),256);
    bufp->fullCData(oldp+12943,((0xffU & ((1U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_15[0U]
                                           : vlSelf->io_l2_rxDat_bits_data[0U]))),8);
    bufp->fullCData(oldp+12944,((0xffU & ((2U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[0U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[0U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12945,((0xffU & ((4U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[0U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[0U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12946,((0xffU & ((8U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[0U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[0U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[0U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[0U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12947,((0xffU & ((0x10U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_15[1U]
                                           : vlSelf->io_l2_rxDat_bits_data[1U]))),8);
    bufp->fullCData(oldp+12948,((0xffU & ((0x20U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[1U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[1U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12949,((0xffU & ((0x40U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[1U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[1U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12950,((0xffU & ((0x80U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[1U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[1U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[1U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[1U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12951,((0xffU & ((0x100U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_15[2U]
                                           : vlSelf->io_l2_rxDat_bits_data[2U]))),8);
    bufp->fullCData(oldp+12952,((0xffU & ((0x200U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[2U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[2U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12953,((0xffU & ((0x400U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[2U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[2U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12954,((0xffU & ((0x800U & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[2U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[2U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[2U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[2U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12955,((0xffU & ((0x1000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_15[3U]
                                           : vlSelf->io_l2_rxDat_bits_data[3U]))),8);
    bufp->fullCData(oldp+12956,((0xffU & ((0x2000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[3U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[3U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12957,((0xffU & ((0x4000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[3U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[3U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12958,((0xffU & ((0x8000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[3U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[3U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[3U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[3U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12959,((0xffU & ((0x10000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_15[4U]
                                           : vlSelf->io_l2_rxDat_bits_data[4U]))),8);
    bufp->fullCData(oldp+12960,((0xffU & ((0x20000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[4U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[4U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12961,((0xffU & ((0x40000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[4U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[4U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12962,((0xffU & ((0x80000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[4U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[4U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[4U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[4U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12963,((0xffU & ((0x100000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_15[5U]
                                           : vlSelf->io_l2_rxDat_bits_data[5U]))),8);
    bufp->fullCData(oldp+12964,((0xffU & ((0x200000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[5U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[5U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12965,((0xffU & ((0x400000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[5U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[5U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12966,((0xffU & ((0x800000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[5U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[5U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[5U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[5U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12967,((0xffU & ((0x1000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_15[6U]
                                           : vlSelf->io_l2_rxDat_bits_data[6U]))),8);
    bufp->fullCData(oldp+12968,((0xffU & ((0x2000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[6U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[6U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12969,((0xffU & ((0x4000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[6U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[6U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12970,((0xffU & ((0x8000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[6U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[6U] 
                                                 >> 0x18U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[6U] 
                                               << 8U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[6U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+12971,((0xffU & ((0x10000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                           ? vlSelf->DCache__DOT__miss__DOT__storeHalf_15[7U]
                                           : vlSelf->io_l2_rxDat_bits_data[7U]))),8);
    bufp->fullCData(oldp+12972,((0xffU & ((0x20000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[7U] 
                                               << 0x18U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[7U] 
                                                 >> 8U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                               << 0x18U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+12973,((0xffU & ((0x40000000U 
                                           & vlSelf->DCache__DOT__miss__DOT__maskHalf_15)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[7U] 
                                               << 0x10U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[7U] 
                                                 >> 0x10U))
                                           : ((vlSelf->io_l2_rxDat_bits_data[7U] 
                                               << 0x10U) 
                                              | (vlSelf->io_l2_rxDat_bits_data[7U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+12974,((0xffU & ((vlSelf->DCache__DOT__miss__DOT__maskHalf_15 
                                           >> 0x1fU)
                                           ? ((vlSelf->DCache__DOT__miss__DOT__storeHalf_15[7U] 
                                               << 8U) 
                                              | (vlSelf->DCache__DOT__miss__DOT__storeHalf_15[7U] 
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
    bufp->fullWData(oldp+12975,(__Vtemp_202),256);
    bufp->fullBit(oldp+12983,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_57) 
                                & (0xfU == (IData)(vlSelf->io_refillWakeup_bits_id))) 
                               | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_15)) 
                                  & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_wakeSent)))));
    bufp->fullBit(oldp+12984,((((IData)(vlSelf->DCache__DOT__miss__DOT___T_60) 
                                & (0xfU == (IData)(vlSelf->io_loadReplay_bits_id))) 
                               | ((~ (IData)(vlSelf->DCache__DOT__miss__DOT__doAlloc_15)) 
                                  & (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_replaySent)))));
    bufp->fullBit(oldp+12985,(((((0xfU == (IData)(vlSelf->io_forwardChi_bits_id))
                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_0_valid)
                                  : ((0xeU == (IData)(vlSelf->io_forwardChi_bits_id))
                                      ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_0_valid)
                                      : ((0xdU == (IData)(vlSelf->io_forwardChi_bits_id))
                                          ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_13_clients_0_valid)
                                          : ((0xcU 
                                              == (IData)(vlSelf->io_forwardChi_bits_id))
                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_12_clients_0_valid)
                                              : ((0xbU 
                                                  == (IData)(vlSelf->io_forwardChi_bits_id))
                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_11_clients_0_valid)
                                                  : 
                                                 ((0xaU 
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
                                                : (
                                                   (0xdU 
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
                                                : (
                                                   (0xcU 
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
                                                 : 
                                                ((0xbU 
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
                                   & ((0U == ((0xfU 
                                               == (IData)(vlSelf->io_forwardChi_bits_id))
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
                                           : ((0xeU 
                                               == (IData)(vlSelf->io_forwardChi_bits_id))
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
                                                : (
                                                   (0xcU 
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
                                                  : 
                                                 ((0xeU 
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
                                         & (((0xfU 
                                              == (IData)(vlSelf->io_forwardChi_bits_id))
                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_2_half)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->io_forwardChi_bits_id))
                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_2_half)
                                                  : 
                                                 ((0xdU 
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
                                           : ((0xeU 
                                               == (IData)(vlSelf->io_forwardChi_bits_id))
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
                                         & ((0U == 
                                             ((0xfU 
                                               == (IData)(vlSelf->io_forwardChi_bits_id))
                                               ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_3_source)
                                               : ((0xeU 
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
                                                 : 
                                                ((0xeU 
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
                                        | ((((0xfU 
                                              == (IData)(vlSelf->io_forwardChi_bits_id))
                                              ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_4_valid)
                                              : ((0xeU 
                                                  == (IData)(vlSelf->io_forwardChi_bits_id))
                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_14_clients_4_valid)
                                                  : 
                                                 ((0xdU 
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
                                            & ((0U 
                                                == 
                                                ((0xfU 
                                                  == (IData)(vlSelf->io_forwardChi_bits_id))
                                                  ? (IData)(vlSelf->DCache__DOT__miss__DOT__entries_15_clients_4_source)
                                                  : 
                                                 ((0xeU 
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
                                                 : 
                                                ((0xeU 
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
    bufp->fullCData(oldp+12986,((0xffU & (IData)((vlSelf->io_store_req_bits_vaddr 
                                                  >> 6U)))),8);
    bufp->fullCData(oldp+12987,((0xffU & (IData)((vlSelf->io_atomics_req_bits_vaddr 
                                                  >> 6U)))),8);
    bufp->fullBit(oldp+12988,(((IData)(vlSelf->DCache__DOT__pipe__DOT___storeLeave_T) 
                               & ((IData)(vlSelf->DCache__DOT__pipe__DOT__missAccepted) 
                                  | ((IData)(vlSelf->io_store_replay_resp_ready) 
                                     & (IData)(vlSelf->DCache__DOT__pipe_io_storeReplay_valid))))));
    bufp->fullBit(oldp+12989,((((IData)(vlSelf->DCache__DOT__pipe__DOT___storeLeave_T) 
                                & ((IData)(vlSelf->DCache__DOT__pipe__DOT__missAccepted) 
                                   | ((IData)(vlSelf->io_store_replay_resp_ready) 
                                      & (IData)(vlSelf->DCache__DOT__pipe_io_storeReplay_valid)))) 
                               | ((IData)(vlSelf->DCache__DOT__pipe__DOT__s2_atomic) 
                                  & ((IData)(vlSelf->DCache__DOT__pipe_io_wbQuery_valid) 
                                     & ((IData)(vlSelf->DCache__DOT__pipe__DOT__missAccepted) 
                                        | ((IData)(vlSelf->DCache__DOT__pipe__DOT__s2Replay) 
                                           & (IData)(vlSelf->DCache__DOT__pipe__DOT___s3_done_T_38))))))));
    bufp->fullBit(oldp+12990,(((~ ((((IData)(vlSelf->DCache__DOT__pipe__DOT__s1_valid) 
                                     & ((IData)(vlSelf->DCache__DOT__pipe__DOT__s1_hold_set) 
                                        == (0xffU & (IData)(
                                                            (vlSelf->io_atomics_req_bits_vaddr 
                                                             >> 6U))))) 
                                    | ((IData)(vlSelf->DCache__DOT__pipe__DOT__s2_valid) 
                                       & ((IData)(vlSelf->DCache__DOT__pipe__DOT__s2_hold_set) 
                                          == (0xffU 
                                              & (IData)(
                                                        (vlSelf->io_atomics_req_bits_vaddr 
                                                         >> 6U)))))) 
                                   | ((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_valid) 
                                      & ((IData)(vlSelf->DCache__DOT__pipe__DOT__s3_hold_set) 
                                         == (0xffU 
                                             & (IData)(
                                                       (vlSelf->io_atomics_req_bits_vaddr 
                                                        >> 6U))))))) 
                               & (IData)(vlSelf->DCache__DOT__pipe__DOT__portFree))));
    bufp->fullQData(oldp+12991,((vlSelf->io_l2_rxSnp_bits_addr 
                                 << 3U)),48);
    bufp->fullQData(oldp+12993,((0xffffffffffc0ULL 
                                 & (vlSelf->io_l2_rxSnp_bits_addr 
                                    << 3U))),48);
    bufp->fullBit(oldp+12995,((((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_15_state)) 
                                & ((0xffffffffffc0ULL 
                                    & vlSelf->DCache__DOT__probe__DOT__entries_15_addr) 
                                   == (0xffffffffffc0ULL 
                                       & (vlSelf->io_l2_rxSnp_bits_addr 
                                          << 3U)))) 
                               | (((0U != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_14_state)) 
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
                                           | (((0U 
                                                != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_10_state)) 
                                               & ((0xffffffffffc0ULL 
                                                   & vlSelf->DCache__DOT__probe__DOT__entries_10_addr) 
                                                  == 
                                                  (0xffffffffffc0ULL 
                                                   & (vlSelf->io_l2_rxSnp_bits_addr 
                                                      << 3U)))) 
                                              | (((0U 
                                                   != (IData)(vlSelf->DCache__DOT__probe__DOT__entries_9_state)) 
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
    bufp->fullBit(oldp+12996,(1U));
    bufp->fullBit(oldp+12997,(0U));
}
