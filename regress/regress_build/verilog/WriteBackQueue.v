module WriteBackQueue(
  input          clock,
  input          reset,
  output         io_req_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  input          io_req_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  input  [511:0] io_req_bits_data, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  input  [47:0]  io_req_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  input  [2:0]   io_req_bits_opcode, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  input  [2:0]   io_req_bits_resp, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  input          io_req_bits_passDirty, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  input  [7:0]   io_req_bits_snpTxnId, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  input          io_txEvt_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  output         io_txEvt_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  output [7:0]   io_txEvt_bits_txnID, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  output         io_txEvt_bits_opcode, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  output [47:0]  io_txEvt_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  output         io_txEvt_bits_traceTag, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  input          io_txDat_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  output         io_txDat_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  output [7:0]   io_txDat_bits_txnID, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  output [6:0]   io_txDat_bits_tgtID, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  output [1:0]   io_txDat_bits_opcode, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  output [2:0]   io_txDat_bits_resp, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  output         io_txDat_bits_dataID, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  output [255:0] io_txDat_bits_data, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  output         io_txDat_bits_traceTag, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  input          io_txRsp_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  output         io_txRsp_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  output [7:0]   io_txRsp_bits_txnID, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  output [2:0]   io_txRsp_bits_resp, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  output         io_txRsp_bits_traceTag, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  output         io_rxRsp_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  input          io_rxRsp_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  input  [7:0]   io_rxRsp_bits_txnID, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  input  [6:0]   io_rxRsp_bits_srcID, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  input  [2:0]   io_rxRsp_bits_opcode, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  input  [7:0]   io_rxRsp_bits_dbID, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  input          io_rxRsp_bits_traceTag, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  input          io_blockQuery_0_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  input  [47:0]  io_blockQuery_0_bits, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  input          io_blockQuery_1_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  input  [47:0]  io_blockQuery_1_bits, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  input          io_blockQuery_2_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  input  [47:0]  io_blockQuery_2_bits, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  input          io_blockQuery_3_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  input  [47:0]  io_blockQuery_3_bits, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  output         io_block_0, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  output         io_block_1, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  output         io_block_2, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  output         io_block_3, // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
  output         io_wfi_safe // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 98:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [511:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [63:0] _RAND_20;
  reg [511:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [31:0] _RAND_27;
  reg [31:0] _RAND_28;
  reg [31:0] _RAND_29;
  reg [31:0] _RAND_30;
  reg [31:0] _RAND_31;
  reg [31:0] _RAND_32;
  reg [31:0] _RAND_33;
  reg [31:0] _RAND_34;
  reg [31:0] _RAND_35;
  reg [63:0] _RAND_36;
  reg [511:0] _RAND_37;
  reg [31:0] _RAND_38;
  reg [31:0] _RAND_39;
  reg [31:0] _RAND_40;
  reg [31:0] _RAND_41;
  reg [31:0] _RAND_42;
  reg [31:0] _RAND_43;
  reg [31:0] _RAND_44;
  reg [31:0] _RAND_45;
  reg [31:0] _RAND_46;
  reg [31:0] _RAND_47;
  reg [31:0] _RAND_48;
  reg [31:0] _RAND_49;
  reg [31:0] _RAND_50;
  reg [31:0] _RAND_51;
  reg [63:0] _RAND_52;
  reg [511:0] _RAND_53;
  reg [31:0] _RAND_54;
  reg [31:0] _RAND_55;
  reg [31:0] _RAND_56;
  reg [31:0] _RAND_57;
  reg [31:0] _RAND_58;
  reg [31:0] _RAND_59;
  reg [31:0] _RAND_60;
  reg [31:0] _RAND_61;
  reg [31:0] _RAND_62;
  reg [31:0] _RAND_63;
  reg [31:0] _RAND_64;
  reg [31:0] _RAND_65;
  reg [31:0] _RAND_66;
  reg [31:0] _RAND_67;
  reg [63:0] _RAND_68;
  reg [511:0] _RAND_69;
  reg [31:0] _RAND_70;
  reg [31:0] _RAND_71;
  reg [31:0] _RAND_72;
  reg [31:0] _RAND_73;
  reg [31:0] _RAND_74;
  reg [31:0] _RAND_75;
  reg [31:0] _RAND_76;
  reg [31:0] _RAND_77;
  reg [31:0] _RAND_78;
  reg [31:0] _RAND_79;
  reg [31:0] _RAND_80;
  reg [31:0] _RAND_81;
  reg [31:0] _RAND_82;
  reg [31:0] _RAND_83;
  reg [63:0] _RAND_84;
  reg [511:0] _RAND_85;
  reg [31:0] _RAND_86;
  reg [31:0] _RAND_87;
  reg [31:0] _RAND_88;
  reg [31:0] _RAND_89;
  reg [31:0] _RAND_90;
  reg [31:0] _RAND_91;
  reg [31:0] _RAND_92;
  reg [31:0] _RAND_93;
  reg [31:0] _RAND_94;
  reg [31:0] _RAND_95;
  reg [31:0] _RAND_96;
  reg [31:0] _RAND_97;
  reg [31:0] _RAND_98;
  reg [31:0] _RAND_99;
  reg [63:0] _RAND_100;
  reg [511:0] _RAND_101;
  reg [31:0] _RAND_102;
  reg [31:0] _RAND_103;
  reg [31:0] _RAND_104;
  reg [31:0] _RAND_105;
  reg [31:0] _RAND_106;
  reg [31:0] _RAND_107;
  reg [31:0] _RAND_108;
  reg [31:0] _RAND_109;
  reg [31:0] _RAND_110;
  reg [31:0] _RAND_111;
  reg [31:0] _RAND_112;
  reg [31:0] _RAND_113;
  reg [31:0] _RAND_114;
  reg [31:0] _RAND_115;
  reg [63:0] _RAND_116;
  reg [511:0] _RAND_117;
  reg [31:0] _RAND_118;
  reg [31:0] _RAND_119;
  reg [31:0] _RAND_120;
  reg [31:0] _RAND_121;
  reg [31:0] _RAND_122;
  reg [31:0] _RAND_123;
  reg [31:0] _RAND_124;
  reg [31:0] _RAND_125;
  reg [31:0] _RAND_126;
  reg [31:0] _RAND_127;
  reg [31:0] _RAND_128;
  reg [31:0] _RAND_129;
  reg [31:0] _RAND_130;
  reg [31:0] _RAND_131;
  reg [63:0] _RAND_132;
  reg [511:0] _RAND_133;
  reg [31:0] _RAND_134;
  reg [31:0] _RAND_135;
  reg [31:0] _RAND_136;
  reg [31:0] _RAND_137;
  reg [31:0] _RAND_138;
  reg [31:0] _RAND_139;
  reg [31:0] _RAND_140;
  reg [31:0] _RAND_141;
  reg [31:0] _RAND_142;
  reg [31:0] _RAND_143;
  reg [31:0] _RAND_144;
  reg [31:0] _RAND_145;
  reg [31:0] _RAND_146;
  reg [31:0] _RAND_147;
  reg [63:0] _RAND_148;
  reg [511:0] _RAND_149;
  reg [31:0] _RAND_150;
  reg [31:0] _RAND_151;
  reg [31:0] _RAND_152;
  reg [31:0] _RAND_153;
  reg [31:0] _RAND_154;
  reg [31:0] _RAND_155;
  reg [31:0] _RAND_156;
  reg [31:0] _RAND_157;
  reg [31:0] _RAND_158;
  reg [31:0] _RAND_159;
  reg [31:0] _RAND_160;
  reg [31:0] _RAND_161;
  reg [31:0] _RAND_162;
  reg [31:0] _RAND_163;
  reg [63:0] _RAND_164;
  reg [511:0] _RAND_165;
  reg [31:0] _RAND_166;
  reg [31:0] _RAND_167;
  reg [31:0] _RAND_168;
  reg [31:0] _RAND_169;
  reg [31:0] _RAND_170;
  reg [31:0] _RAND_171;
  reg [31:0] _RAND_172;
  reg [31:0] _RAND_173;
  reg [31:0] _RAND_174;
  reg [31:0] _RAND_175;
  reg [31:0] _RAND_176;
  reg [31:0] _RAND_177;
  reg [31:0] _RAND_178;
  reg [31:0] _RAND_179;
  reg [63:0] _RAND_180;
  reg [511:0] _RAND_181;
  reg [31:0] _RAND_182;
  reg [31:0] _RAND_183;
  reg [31:0] _RAND_184;
  reg [31:0] _RAND_185;
  reg [31:0] _RAND_186;
  reg [31:0] _RAND_187;
  reg [31:0] _RAND_188;
  reg [31:0] _RAND_189;
  reg [31:0] _RAND_190;
  reg [31:0] _RAND_191;
  reg [31:0] _RAND_192;
  reg [31:0] _RAND_193;
  reg [31:0] _RAND_194;
  reg [31:0] _RAND_195;
  reg [63:0] _RAND_196;
  reg [511:0] _RAND_197;
  reg [31:0] _RAND_198;
  reg [31:0] _RAND_199;
  reg [31:0] _RAND_200;
  reg [31:0] _RAND_201;
  reg [31:0] _RAND_202;
  reg [31:0] _RAND_203;
  reg [31:0] _RAND_204;
  reg [31:0] _RAND_205;
  reg [31:0] _RAND_206;
  reg [31:0] _RAND_207;
  reg [31:0] _RAND_208;
  reg [31:0] _RAND_209;
  reg [31:0] _RAND_210;
  reg [31:0] _RAND_211;
  reg [63:0] _RAND_212;
  reg [511:0] _RAND_213;
  reg [31:0] _RAND_214;
  reg [31:0] _RAND_215;
  reg [31:0] _RAND_216;
  reg [31:0] _RAND_217;
  reg [31:0] _RAND_218;
  reg [31:0] _RAND_219;
  reg [31:0] _RAND_220;
  reg [31:0] _RAND_221;
  reg [31:0] _RAND_222;
  reg [31:0] _RAND_223;
  reg [31:0] _RAND_224;
  reg [31:0] _RAND_225;
  reg [31:0] _RAND_226;
  reg [31:0] _RAND_227;
  reg [63:0] _RAND_228;
  reg [511:0] _RAND_229;
  reg [31:0] _RAND_230;
  reg [31:0] _RAND_231;
  reg [31:0] _RAND_232;
  reg [31:0] _RAND_233;
  reg [31:0] _RAND_234;
  reg [31:0] _RAND_235;
  reg [31:0] _RAND_236;
  reg [31:0] _RAND_237;
  reg [31:0] _RAND_238;
  reg [31:0] _RAND_239;
  reg [31:0] _RAND_240;
  reg [31:0] _RAND_241;
  reg [31:0] _RAND_242;
  reg [31:0] _RAND_243;
  reg [63:0] _RAND_244;
  reg [511:0] _RAND_245;
  reg [31:0] _RAND_246;
  reg [31:0] _RAND_247;
  reg [31:0] _RAND_248;
  reg [31:0] _RAND_249;
  reg [31:0] _RAND_250;
  reg [31:0] _RAND_251;
  reg [31:0] _RAND_252;
  reg [31:0] _RAND_253;
  reg [31:0] _RAND_254;
  reg [31:0] _RAND_255;
  reg [31:0] _RAND_256;
  reg [31:0] _RAND_257;
  reg [31:0] _RAND_258;
  reg [31:0] _RAND_259;
  reg [63:0] _RAND_260;
  reg [511:0] _RAND_261;
  reg [31:0] _RAND_262;
  reg [31:0] _RAND_263;
  reg [31:0] _RAND_264;
  reg [31:0] _RAND_265;
  reg [31:0] _RAND_266;
  reg [31:0] _RAND_267;
  reg [31:0] _RAND_268;
  reg [31:0] _RAND_269;
  reg [31:0] _RAND_270;
  reg [31:0] _RAND_271;
  reg [31:0] _RAND_272;
  reg [31:0] _RAND_273;
  reg [31:0] _RAND_274;
  reg [31:0] _RAND_275;
  reg [63:0] _RAND_276;
  reg [511:0] _RAND_277;
  reg [31:0] _RAND_278;
  reg [31:0] _RAND_279;
  reg [31:0] _RAND_280;
  reg [31:0] _RAND_281;
  reg [31:0] _RAND_282;
  reg [31:0] _RAND_283;
  reg [31:0] _RAND_284;
  reg [31:0] _RAND_285;
  reg [31:0] _RAND_286;
  reg [31:0] _RAND_287;
  reg [31:0] _RAND_288;
  reg [31:0] _RAND_289;
  reg [31:0] _RAND_290;
  reg [31:0] _RAND_291;
  reg [31:0] _RAND_292;
  reg [31:0] _RAND_293;
`endif // RANDOMIZE_REG_INIT
  reg  entries_0_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [2:0] entries_0_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [2:0] entries_0_resp; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [7:0] entries_0_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [47:0] entries_0_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [511:0] entries_0_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_0_dataReady; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [7:0] entries_0_dbid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_0_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_0_compGot; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_0_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_0_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [6:0] entries_0_compSrc; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_0_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [1:0] entries_0_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [1:0] entries_0_beatsLeft; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_1_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [2:0] entries_1_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [2:0] entries_1_resp; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [7:0] entries_1_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [47:0] entries_1_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [511:0] entries_1_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_1_dataReady; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [7:0] entries_1_dbid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_1_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_1_compGot; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_1_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_1_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [6:0] entries_1_compSrc; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_1_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [1:0] entries_1_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [1:0] entries_1_beatsLeft; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_2_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [2:0] entries_2_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [2:0] entries_2_resp; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [7:0] entries_2_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [47:0] entries_2_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [511:0] entries_2_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_2_dataReady; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [7:0] entries_2_dbid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_2_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_2_compGot; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_2_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_2_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [6:0] entries_2_compSrc; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_2_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [1:0] entries_2_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [1:0] entries_2_beatsLeft; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_3_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [2:0] entries_3_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [2:0] entries_3_resp; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [7:0] entries_3_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [47:0] entries_3_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [511:0] entries_3_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_3_dataReady; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [7:0] entries_3_dbid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_3_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_3_compGot; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_3_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_3_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [6:0] entries_3_compSrc; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_3_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [1:0] entries_3_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [1:0] entries_3_beatsLeft; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_4_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [2:0] entries_4_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [2:0] entries_4_resp; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [7:0] entries_4_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [47:0] entries_4_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [511:0] entries_4_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_4_dataReady; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [7:0] entries_4_dbid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_4_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_4_compGot; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_4_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_4_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [6:0] entries_4_compSrc; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_4_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [1:0] entries_4_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [1:0] entries_4_beatsLeft; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_5_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [2:0] entries_5_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [2:0] entries_5_resp; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [7:0] entries_5_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [47:0] entries_5_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [511:0] entries_5_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_5_dataReady; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [7:0] entries_5_dbid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_5_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_5_compGot; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_5_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_5_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [6:0] entries_5_compSrc; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_5_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [1:0] entries_5_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [1:0] entries_5_beatsLeft; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_6_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [2:0] entries_6_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [2:0] entries_6_resp; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [7:0] entries_6_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [47:0] entries_6_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [511:0] entries_6_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_6_dataReady; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [7:0] entries_6_dbid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_6_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_6_compGot; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_6_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_6_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [6:0] entries_6_compSrc; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_6_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [1:0] entries_6_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [1:0] entries_6_beatsLeft; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_7_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [2:0] entries_7_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [2:0] entries_7_resp; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [7:0] entries_7_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [47:0] entries_7_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [511:0] entries_7_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_7_dataReady; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [7:0] entries_7_dbid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_7_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_7_compGot; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_7_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_7_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [6:0] entries_7_compSrc; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_7_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [1:0] entries_7_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [1:0] entries_7_beatsLeft; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_8_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [2:0] entries_8_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [2:0] entries_8_resp; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [7:0] entries_8_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [47:0] entries_8_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [511:0] entries_8_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_8_dataReady; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [7:0] entries_8_dbid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_8_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_8_compGot; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_8_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_8_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [6:0] entries_8_compSrc; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_8_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [1:0] entries_8_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [1:0] entries_8_beatsLeft; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_9_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [2:0] entries_9_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [2:0] entries_9_resp; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [7:0] entries_9_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [47:0] entries_9_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [511:0] entries_9_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_9_dataReady; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [7:0] entries_9_dbid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_9_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_9_compGot; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_9_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_9_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [6:0] entries_9_compSrc; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_9_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [1:0] entries_9_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [1:0] entries_9_beatsLeft; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_10_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [2:0] entries_10_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [2:0] entries_10_resp; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [7:0] entries_10_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [47:0] entries_10_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [511:0] entries_10_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_10_dataReady; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [7:0] entries_10_dbid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_10_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_10_compGot; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_10_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_10_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [6:0] entries_10_compSrc; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_10_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [1:0] entries_10_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [1:0] entries_10_beatsLeft; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_11_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [2:0] entries_11_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [2:0] entries_11_resp; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [7:0] entries_11_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [47:0] entries_11_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [511:0] entries_11_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_11_dataReady; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [7:0] entries_11_dbid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_11_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_11_compGot; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_11_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_11_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [6:0] entries_11_compSrc; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_11_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [1:0] entries_11_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [1:0] entries_11_beatsLeft; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_12_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [2:0] entries_12_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [2:0] entries_12_resp; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [7:0] entries_12_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [47:0] entries_12_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [511:0] entries_12_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_12_dataReady; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [7:0] entries_12_dbid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_12_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_12_compGot; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_12_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_12_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [6:0] entries_12_compSrc; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_12_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [1:0] entries_12_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [1:0] entries_12_beatsLeft; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_13_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [2:0] entries_13_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [2:0] entries_13_resp; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [7:0] entries_13_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [47:0] entries_13_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [511:0] entries_13_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_13_dataReady; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [7:0] entries_13_dbid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_13_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_13_compGot; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_13_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_13_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [6:0] entries_13_compSrc; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_13_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [1:0] entries_13_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [1:0] entries_13_beatsLeft; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_14_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [2:0] entries_14_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [2:0] entries_14_resp; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [7:0] entries_14_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [47:0] entries_14_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [511:0] entries_14_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_14_dataReady; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [7:0] entries_14_dbid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_14_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_14_compGot; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_14_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_14_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [6:0] entries_14_compSrc; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_14_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [1:0] entries_14_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [1:0] entries_14_beatsLeft; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_15_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [2:0] entries_15_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [2:0] entries_15_resp; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [7:0] entries_15_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [47:0] entries_15_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [511:0] entries_15_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_15_dataReady; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [7:0] entries_15_dbid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_15_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_15_compGot; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_15_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_15_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [6:0] entries_15_compSrc; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_15_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [1:0] entries_15_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [1:0] entries_15_beatsLeft; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_16_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [2:0] entries_16_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [2:0] entries_16_resp; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [7:0] entries_16_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [47:0] entries_16_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [511:0] entries_16_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_16_dataReady; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [7:0] entries_16_dbid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_16_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_16_compGot; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_16_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_16_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [6:0] entries_16_compSrc; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_16_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [1:0] entries_16_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [1:0] entries_16_beatsLeft; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_17_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [2:0] entries_17_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [2:0] entries_17_resp; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [7:0] entries_17_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [47:0] entries_17_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [511:0] entries_17_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_17_dataReady; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [7:0] entries_17_dbid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_17_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_17_compGot; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_17_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_17_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [6:0] entries_17_compSrc; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg  entries_17_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [1:0] entries_17_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  reg [1:0] entries_17_beatsLeft; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
  wire [47:0] reqLine = {io_req_bits_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 108:8]
  wire  _legalOp_T = io_req_bits_opcode == 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 123:16]
  wire  _legalOp_T_1 = io_req_bits_opcode == 3'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 123:49]
  wire  _legalOp_T_3 = io_req_bits_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 124:18]
  wire  _legalOp_T_4 = io_req_bits_opcode == 3'h0 | io_req_bits_opcode == 3'h2 | _legalOp_T_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 123:76]
  wire  _legalOp_T_5 = io_req_bits_opcode == 3'h4; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 124:53]
  wire  _legalOp_T_7 = io_req_bits_opcode == 3'h5; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 125:18]
  wire  legalOp = _legalOp_T_4 | io_req_bits_opcode == 3'h4 | _legalOp_T_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 124:78]
  wire [47:0] _conflict_T_1 = {entries_0_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 108:8]
  wire [47:0] _conflict_T_5 = {entries_1_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 108:8]
  wire [47:0] _conflict_T_9 = {entries_2_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 108:8]
  wire [47:0] _conflict_T_13 = {entries_3_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 108:8]
  wire [47:0] _conflict_T_17 = {entries_4_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 108:8]
  wire [47:0] _conflict_T_21 = {entries_5_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 108:8]
  wire [47:0] _conflict_T_25 = {entries_6_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 108:8]
  wire [47:0] _conflict_T_29 = {entries_7_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 108:8]
  wire [47:0] _conflict_T_33 = {entries_8_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 108:8]
  wire [47:0] _conflict_T_37 = {entries_9_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 108:8]
  wire [47:0] _conflict_T_41 = {entries_10_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 108:8]
  wire  _conflict_T_43 = entries_10_busy & _conflict_T_41 == reqLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 126:42]
  wire [47:0] _conflict_T_45 = {entries_11_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 108:8]
  wire [47:0] _conflict_T_49 = {entries_12_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 108:8]
  wire [47:0] _conflict_T_53 = {entries_13_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 108:8]
  wire [47:0] _conflict_T_57 = {entries_14_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 108:8]
  wire [47:0] _conflict_T_61 = {entries_15_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 108:8]
  wire [47:0] _conflict_T_65 = {entries_16_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 108:8]
  wire [47:0] _conflict_T_69 = {entries_17_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 108:8]
  wire  _conflict_T_81 = entries_0_busy & _conflict_T_1 == reqLine | entries_1_busy & _conflict_T_5 == reqLine |
    entries_2_busy & _conflict_T_9 == reqLine | entries_3_busy & _conflict_T_13 == reqLine | entries_4_busy &
    _conflict_T_17 == reqLine | entries_5_busy & _conflict_T_21 == reqLine | entries_6_busy & _conflict_T_25 == reqLine
     | entries_7_busy & _conflict_T_29 == reqLine | entries_8_busy & _conflict_T_33 == reqLine | entries_9_busy &
    _conflict_T_37 == reqLine | _conflict_T_43; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 126:82]
  wire  conflict = _conflict_T_81 | entries_11_busy & _conflict_T_45 == reqLine | entries_12_busy & _conflict_T_49 ==
    reqLine | entries_13_busy & _conflict_T_53 == reqLine | entries_14_busy & _conflict_T_57 == reqLine |
    entries_15_busy & _conflict_T_61 == reqLine | entries_16_busy & _conflict_T_65 == reqLine | entries_17_busy &
    _conflict_T_69 == reqLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 126:82]
  wire  freeOh_0 = ~entries_0_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 127:36]
  wire  freeOh_1 = ~entries_1_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 127:36]
  wire  freeOh_2 = ~entries_2_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 127:36]
  wire  freeOh_3 = ~entries_3_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 127:36]
  wire  freeOh_4 = ~entries_4_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 127:36]
  wire  freeOh_5 = ~entries_5_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 127:36]
  wire  freeOh_6 = ~entries_6_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 127:36]
  wire  freeOh_7 = ~entries_7_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 127:36]
  wire  freeOh_8 = ~entries_8_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 127:36]
  wire  freeOh_9 = ~entries_9_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 127:36]
  wire  freeOh_10 = ~entries_10_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 127:36]
  wire  freeOh_11 = ~entries_11_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 127:36]
  wire  freeOh_12 = ~entries_12_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 127:36]
  wire  freeOh_13 = ~entries_13_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 127:36]
  wire  freeOh_14 = ~entries_14_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 127:36]
  wire  freeOh_15 = ~entries_15_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 127:36]
  wire  freeOh_16 = ~entries_16_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 127:36]
  wire  freeOh_17 = ~entries_17_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 127:36]
  wire [8:0] hasFree_lo = {freeOh_8,freeOh_7,freeOh_6,freeOh_5,freeOh_4,freeOh_3,freeOh_2,freeOh_1,freeOh_0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 128:24]
  wire [17:0] _hasFree_T = {freeOh_17,freeOh_16,freeOh_15,freeOh_14,freeOh_13,freeOh_12,freeOh_11,freeOh_10,freeOh_9,
    hasFree_lo}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 128:24]
  wire  hasFree = |_hasFree_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 128:31]
  wire [4:0] _allocId_T_19 = _hasFree_T[16] ? 5'h10 : 5'h11; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _allocId_T_20 = _hasFree_T[15] ? 5'hf : _allocId_T_19; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _allocId_T_21 = _hasFree_T[14] ? 5'he : _allocId_T_20; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _allocId_T_22 = _hasFree_T[13] ? 5'hd : _allocId_T_21; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _allocId_T_23 = _hasFree_T[12] ? 5'hc : _allocId_T_22; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _allocId_T_24 = _hasFree_T[11] ? 5'hb : _allocId_T_23; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _allocId_T_25 = _hasFree_T[10] ? 5'ha : _allocId_T_24; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _allocId_T_26 = _hasFree_T[9] ? 5'h9 : _allocId_T_25; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _allocId_T_27 = _hasFree_T[8] ? 5'h8 : _allocId_T_26; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _allocId_T_28 = _hasFree_T[7] ? 5'h7 : _allocId_T_27; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _allocId_T_29 = _hasFree_T[6] ? 5'h6 : _allocId_T_28; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _allocId_T_30 = _hasFree_T[5] ? 5'h5 : _allocId_T_29; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _allocId_T_31 = _hasFree_T[4] ? 5'h4 : _allocId_T_30; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _allocId_T_32 = _hasFree_T[3] ? 5'h3 : _allocId_T_31; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _allocId_T_33 = _hasFree_T[2] ? 5'h2 : _allocId_T_32; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _allocId_T_34 = _hasFree_T[1] ? 5'h1 : _allocId_T_33; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] allocId = _hasFree_T[0] ? 5'h0 : _allocId_T_34; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire  _reqResp_T_4 = _legalOp_T_1 | _legalOp_T_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 111:35]
  wire  _reqResp_T_5 = _legalOp_T | _reqResp_T_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:27]
  wire [2:0] _reqResp_T_6 = io_req_bits_resp | 3'h4; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 134:35]
  wire [2:0] _reqResp_T_7 = io_req_bits_passDirty ? _reqResp_T_6 : io_req_bits_resp; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 134:10]
  wire [2:0] _reqResp_T_8 = _reqResp_T_5 ? 3'h0 : _reqResp_T_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 133:8]
  wire [2:0] reqResp = _legalOp_T_7 ? 3'h5 : _reqResp_T_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 132:20]
  reg  evtHold; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 136:24]
  reg [4:0] evtHoldIdx; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 137:27]
  reg  rspHold; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 138:24]
  reg [4:0] rspHoldIdx; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 139:27]
  reg  datHold; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 140:24]
  reg [4:0] datHoldIdx; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 141:27]
  wire  _evtWant_T = entries_0_busy & entries_0_dataReady; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:12]
  wire  _evtWant_T_2 = entries_0_busy & entries_0_dataReady & entries_0_state == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:27]
  wire  _evtWant_T_3 = entries_0_opcode == 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:8]
  wire  _evtWant_T_6 = entries_0_opcode == 3'h2 | entries_0_opcode == 3'h5; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 111:35]
  wire  _evtWant_T_7 = entries_0_opcode == 3'h0 | _evtWant_T_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:27]
  wire  evtWant_0 = entries_0_busy & entries_0_dataReady & entries_0_state == 2'h1 & _evtWant_T_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:54]
  wire  _evtWant_T_9 = entries_1_busy & entries_1_dataReady; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:12]
  wire  _evtWant_T_11 = entries_1_busy & entries_1_dataReady & entries_1_state == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:27]
  wire  _evtWant_T_12 = entries_1_opcode == 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:8]
  wire  _evtWant_T_15 = entries_1_opcode == 3'h2 | entries_1_opcode == 3'h5; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 111:35]
  wire  _evtWant_T_16 = entries_1_opcode == 3'h0 | _evtWant_T_15; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:27]
  wire  evtWant_1 = entries_1_busy & entries_1_dataReady & entries_1_state == 2'h1 & _evtWant_T_16; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:54]
  wire  _evtWant_T_18 = entries_2_busy & entries_2_dataReady; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:12]
  wire  _evtWant_T_20 = entries_2_busy & entries_2_dataReady & entries_2_state == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:27]
  wire  _evtWant_T_21 = entries_2_opcode == 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:8]
  wire  _evtWant_T_24 = entries_2_opcode == 3'h2 | entries_2_opcode == 3'h5; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 111:35]
  wire  _evtWant_T_25 = entries_2_opcode == 3'h0 | _evtWant_T_24; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:27]
  wire  evtWant_2 = entries_2_busy & entries_2_dataReady & entries_2_state == 2'h1 & _evtWant_T_25; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:54]
  wire  _evtWant_T_27 = entries_3_busy & entries_3_dataReady; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:12]
  wire  _evtWant_T_29 = entries_3_busy & entries_3_dataReady & entries_3_state == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:27]
  wire  _evtWant_T_30 = entries_3_opcode == 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:8]
  wire  _evtWant_T_33 = entries_3_opcode == 3'h2 | entries_3_opcode == 3'h5; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 111:35]
  wire  _evtWant_T_34 = entries_3_opcode == 3'h0 | _evtWant_T_33; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:27]
  wire  evtWant_3 = entries_3_busy & entries_3_dataReady & entries_3_state == 2'h1 & _evtWant_T_34; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:54]
  wire  _evtWant_T_36 = entries_4_busy & entries_4_dataReady; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:12]
  wire  _evtWant_T_38 = entries_4_busy & entries_4_dataReady & entries_4_state == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:27]
  wire  _evtWant_T_39 = entries_4_opcode == 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:8]
  wire  _evtWant_T_42 = entries_4_opcode == 3'h2 | entries_4_opcode == 3'h5; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 111:35]
  wire  _evtWant_T_43 = entries_4_opcode == 3'h0 | _evtWant_T_42; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:27]
  wire  evtWant_4 = entries_4_busy & entries_4_dataReady & entries_4_state == 2'h1 & _evtWant_T_43; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:54]
  wire  _evtWant_T_45 = entries_5_busy & entries_5_dataReady; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:12]
  wire  _evtWant_T_47 = entries_5_busy & entries_5_dataReady & entries_5_state == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:27]
  wire  _evtWant_T_48 = entries_5_opcode == 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:8]
  wire  _evtWant_T_51 = entries_5_opcode == 3'h2 | entries_5_opcode == 3'h5; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 111:35]
  wire  _evtWant_T_52 = entries_5_opcode == 3'h0 | _evtWant_T_51; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:27]
  wire  evtWant_5 = entries_5_busy & entries_5_dataReady & entries_5_state == 2'h1 & _evtWant_T_52; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:54]
  wire  _evtWant_T_54 = entries_6_busy & entries_6_dataReady; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:12]
  wire  _evtWant_T_56 = entries_6_busy & entries_6_dataReady & entries_6_state == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:27]
  wire  _evtWant_T_57 = entries_6_opcode == 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:8]
  wire  _evtWant_T_60 = entries_6_opcode == 3'h2 | entries_6_opcode == 3'h5; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 111:35]
  wire  _evtWant_T_61 = entries_6_opcode == 3'h0 | _evtWant_T_60; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:27]
  wire  evtWant_6 = entries_6_busy & entries_6_dataReady & entries_6_state == 2'h1 & _evtWant_T_61; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:54]
  wire  _evtWant_T_63 = entries_7_busy & entries_7_dataReady; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:12]
  wire  _evtWant_T_65 = entries_7_busy & entries_7_dataReady & entries_7_state == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:27]
  wire  _evtWant_T_66 = entries_7_opcode == 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:8]
  wire  _evtWant_T_69 = entries_7_opcode == 3'h2 | entries_7_opcode == 3'h5; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 111:35]
  wire  _evtWant_T_70 = entries_7_opcode == 3'h0 | _evtWant_T_69; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:27]
  wire  evtWant_7 = entries_7_busy & entries_7_dataReady & entries_7_state == 2'h1 & _evtWant_T_70; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:54]
  wire  _evtWant_T_72 = entries_8_busy & entries_8_dataReady; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:12]
  wire  _evtWant_T_74 = entries_8_busy & entries_8_dataReady & entries_8_state == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:27]
  wire  _evtWant_T_75 = entries_8_opcode == 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:8]
  wire  _evtWant_T_78 = entries_8_opcode == 3'h2 | entries_8_opcode == 3'h5; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 111:35]
  wire  _evtWant_T_79 = entries_8_opcode == 3'h0 | _evtWant_T_78; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:27]
  wire  evtWant_8 = entries_8_busy & entries_8_dataReady & entries_8_state == 2'h1 & _evtWant_T_79; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:54]
  wire  _evtWant_T_81 = entries_9_busy & entries_9_dataReady; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:12]
  wire  _evtWant_T_83 = entries_9_busy & entries_9_dataReady & entries_9_state == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:27]
  wire  _evtWant_T_84 = entries_9_opcode == 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:8]
  wire  _evtWant_T_87 = entries_9_opcode == 3'h2 | entries_9_opcode == 3'h5; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 111:35]
  wire  _evtWant_T_88 = entries_9_opcode == 3'h0 | _evtWant_T_87; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:27]
  wire  evtWant_9 = entries_9_busy & entries_9_dataReady & entries_9_state == 2'h1 & _evtWant_T_88; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:54]
  wire  _evtWant_T_90 = entries_10_busy & entries_10_dataReady; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:12]
  wire  _evtWant_T_92 = entries_10_busy & entries_10_dataReady & entries_10_state == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:27]
  wire  _evtWant_T_93 = entries_10_opcode == 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:8]
  wire  _evtWant_T_96 = entries_10_opcode == 3'h2 | entries_10_opcode == 3'h5; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 111:35]
  wire  _evtWant_T_97 = entries_10_opcode == 3'h0 | _evtWant_T_96; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:27]
  wire  evtWant_10 = entries_10_busy & entries_10_dataReady & entries_10_state == 2'h1 & _evtWant_T_97; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:54]
  wire  _evtWant_T_99 = entries_11_busy & entries_11_dataReady; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:12]
  wire  _evtWant_T_101 = entries_11_busy & entries_11_dataReady & entries_11_state == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:27]
  wire  _evtWant_T_102 = entries_11_opcode == 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:8]
  wire  _evtWant_T_105 = entries_11_opcode == 3'h2 | entries_11_opcode == 3'h5; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 111:35]
  wire  _evtWant_T_106 = entries_11_opcode == 3'h0 | _evtWant_T_105; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:27]
  wire  evtWant_11 = entries_11_busy & entries_11_dataReady & entries_11_state == 2'h1 & _evtWant_T_106; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:54]
  wire  _evtWant_T_108 = entries_12_busy & entries_12_dataReady; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:12]
  wire  _evtWant_T_110 = entries_12_busy & entries_12_dataReady & entries_12_state == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:27]
  wire  _evtWant_T_111 = entries_12_opcode == 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:8]
  wire  _evtWant_T_114 = entries_12_opcode == 3'h2 | entries_12_opcode == 3'h5; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 111:35]
  wire  _evtWant_T_115 = entries_12_opcode == 3'h0 | _evtWant_T_114; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:27]
  wire  evtWant_12 = entries_12_busy & entries_12_dataReady & entries_12_state == 2'h1 & _evtWant_T_115; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:54]
  wire  _evtWant_T_117 = entries_13_busy & entries_13_dataReady; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:12]
  wire  _evtWant_T_119 = entries_13_busy & entries_13_dataReady & entries_13_state == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:27]
  wire  _evtWant_T_120 = entries_13_opcode == 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:8]
  wire  _evtWant_T_123 = entries_13_opcode == 3'h2 | entries_13_opcode == 3'h5; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 111:35]
  wire  _evtWant_T_124 = entries_13_opcode == 3'h0 | _evtWant_T_123; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:27]
  wire  evtWant_13 = entries_13_busy & entries_13_dataReady & entries_13_state == 2'h1 & _evtWant_T_124; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:54]
  wire  _evtWant_T_126 = entries_14_busy & entries_14_dataReady; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:12]
  wire  _evtWant_T_128 = entries_14_busy & entries_14_dataReady & entries_14_state == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:27]
  wire  _evtWant_T_129 = entries_14_opcode == 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:8]
  wire  _evtWant_T_132 = entries_14_opcode == 3'h2 | entries_14_opcode == 3'h5; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 111:35]
  wire  _evtWant_T_133 = entries_14_opcode == 3'h0 | _evtWant_T_132; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:27]
  wire  evtWant_14 = entries_14_busy & entries_14_dataReady & entries_14_state == 2'h1 & _evtWant_T_133; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:54]
  wire  _evtWant_T_135 = entries_15_busy & entries_15_dataReady; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:12]
  wire  _evtWant_T_137 = entries_15_busy & entries_15_dataReady & entries_15_state == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:27]
  wire  _evtWant_T_138 = entries_15_opcode == 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:8]
  wire  _evtWant_T_141 = entries_15_opcode == 3'h2 | entries_15_opcode == 3'h5; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 111:35]
  wire  _evtWant_T_142 = entries_15_opcode == 3'h0 | _evtWant_T_141; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:27]
  wire  evtWant_15 = entries_15_busy & entries_15_dataReady & entries_15_state == 2'h1 & _evtWant_T_142; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:54]
  wire  _evtWant_T_144 = entries_16_busy & entries_16_dataReady; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:12]
  wire  _evtWant_T_146 = entries_16_busy & entries_16_dataReady & entries_16_state == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:27]
  wire  _evtWant_T_147 = entries_16_opcode == 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:8]
  wire  _evtWant_T_150 = entries_16_opcode == 3'h2 | entries_16_opcode == 3'h5; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 111:35]
  wire  _evtWant_T_151 = entries_16_opcode == 3'h0 | _evtWant_T_150; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:27]
  wire  evtWant_16 = entries_16_busy & entries_16_dataReady & entries_16_state == 2'h1 & _evtWant_T_151; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:54]
  wire  _evtWant_T_153 = entries_17_busy & entries_17_dataReady; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:12]
  wire  _evtWant_T_155 = entries_17_busy & entries_17_dataReady & entries_17_state == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:27]
  wire  _evtWant_T_156 = entries_17_opcode == 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:8]
  wire  _evtWant_T_159 = entries_17_opcode == 3'h2 | entries_17_opcode == 3'h5; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 111:35]
  wire  _evtWant_T_160 = entries_17_opcode == 3'h0 | _evtWant_T_159; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 114:27]
  wire  evtWant_17 = entries_17_busy & entries_17_dataReady & entries_17_state == 2'h1 & _evtWant_T_160; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 144:54]
  wire  _rspWant_T_3 = entries_0_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 147:66]
  wire  rspWant_0 = _evtWant_T_2 & entries_0_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 147:54]
  wire  _rspWant_T_8 = entries_1_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 147:66]
  wire  rspWant_1 = _evtWant_T_11 & entries_1_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 147:54]
  wire  _rspWant_T_13 = entries_2_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 147:66]
  wire  rspWant_2 = _evtWant_T_20 & entries_2_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 147:54]
  wire  _rspWant_T_18 = entries_3_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 147:66]
  wire  rspWant_3 = _evtWant_T_29 & entries_3_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 147:54]
  wire  _rspWant_T_23 = entries_4_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 147:66]
  wire  rspWant_4 = _evtWant_T_38 & entries_4_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 147:54]
  wire  _rspWant_T_28 = entries_5_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 147:66]
  wire  rspWant_5 = _evtWant_T_47 & entries_5_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 147:54]
  wire  _rspWant_T_33 = entries_6_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 147:66]
  wire  rspWant_6 = _evtWant_T_56 & entries_6_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 147:54]
  wire  _rspWant_T_38 = entries_7_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 147:66]
  wire  rspWant_7 = _evtWant_T_65 & entries_7_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 147:54]
  wire  _rspWant_T_43 = entries_8_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 147:66]
  wire  rspWant_8 = _evtWant_T_74 & entries_8_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 147:54]
  wire  _rspWant_T_48 = entries_9_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 147:66]
  wire  rspWant_9 = _evtWant_T_83 & entries_9_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 147:54]
  wire  _rspWant_T_53 = entries_10_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 147:66]
  wire  rspWant_10 = _evtWant_T_92 & entries_10_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 147:54]
  wire  _rspWant_T_58 = entries_11_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 147:66]
  wire  rspWant_11 = _evtWant_T_101 & entries_11_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 147:54]
  wire  _rspWant_T_63 = entries_12_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 147:66]
  wire  rspWant_12 = _evtWant_T_110 & entries_12_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 147:54]
  wire  _rspWant_T_68 = entries_13_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 147:66]
  wire  rspWant_13 = _evtWant_T_119 & entries_13_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 147:54]
  wire  _rspWant_T_73 = entries_14_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 147:66]
  wire  rspWant_14 = _evtWant_T_128 & entries_14_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 147:54]
  wire  _rspWant_T_78 = entries_15_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 147:66]
  wire  rspWant_15 = _evtWant_T_137 & entries_15_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 147:54]
  wire  _rspWant_T_83 = entries_16_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 147:66]
  wire  rspWant_16 = _evtWant_T_146 & entries_16_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 147:54]
  wire  _rspWant_T_88 = entries_17_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 147:66]
  wire  rspWant_17 = _evtWant_T_155 & entries_17_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 147:54]
  wire  _datStart_T_1 = entries_0_state == 2'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:38]
  wire  _datStart_T_5 = ~entries_0_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:80]
  wire  datStart_0 = _evtWant_T & entries_0_state == 2'h3 & entries_0_beatsLeft == 2'h2 & ~entries_0_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:77]
  wire  _datStart_T_8 = entries_1_state == 2'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:38]
  wire  _datStart_T_12 = ~entries_1_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:80]
  wire  datStart_1 = _evtWant_T_9 & entries_1_state == 2'h3 & entries_1_beatsLeft == 2'h2 & ~entries_1_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:77]
  wire  _datStart_T_15 = entries_2_state == 2'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:38]
  wire  _datStart_T_19 = ~entries_2_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:80]
  wire  datStart_2 = _evtWant_T_18 & entries_2_state == 2'h3 & entries_2_beatsLeft == 2'h2 & ~entries_2_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:77]
  wire  _datStart_T_22 = entries_3_state == 2'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:38]
  wire  _datStart_T_26 = ~entries_3_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:80]
  wire  datStart_3 = _evtWant_T_27 & entries_3_state == 2'h3 & entries_3_beatsLeft == 2'h2 & ~entries_3_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:77]
  wire  _datStart_T_29 = entries_4_state == 2'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:38]
  wire  _datStart_T_33 = ~entries_4_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:80]
  wire  datStart_4 = _evtWant_T_36 & entries_4_state == 2'h3 & entries_4_beatsLeft == 2'h2 & ~entries_4_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:77]
  wire  _datStart_T_36 = entries_5_state == 2'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:38]
  wire  _datStart_T_40 = ~entries_5_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:80]
  wire  datStart_5 = _evtWant_T_45 & entries_5_state == 2'h3 & entries_5_beatsLeft == 2'h2 & ~entries_5_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:77]
  wire  _datStart_T_43 = entries_6_state == 2'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:38]
  wire  _datStart_T_47 = ~entries_6_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:80]
  wire  datStart_6 = _evtWant_T_54 & entries_6_state == 2'h3 & entries_6_beatsLeft == 2'h2 & ~entries_6_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:77]
  wire  _datStart_T_50 = entries_7_state == 2'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:38]
  wire  _datStart_T_54 = ~entries_7_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:80]
  wire  datStart_7 = _evtWant_T_63 & entries_7_state == 2'h3 & entries_7_beatsLeft == 2'h2 & ~entries_7_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:77]
  wire  _datStart_T_57 = entries_8_state == 2'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:38]
  wire  _datStart_T_61 = ~entries_8_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:80]
  wire  datStart_8 = _evtWant_T_72 & entries_8_state == 2'h3 & entries_8_beatsLeft == 2'h2 & ~entries_8_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:77]
  wire  _datStart_T_64 = entries_9_state == 2'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:38]
  wire  _datStart_T_68 = ~entries_9_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:80]
  wire  datStart_9 = _evtWant_T_81 & entries_9_state == 2'h3 & entries_9_beatsLeft == 2'h2 & ~entries_9_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:77]
  wire  _datStart_T_71 = entries_10_state == 2'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:38]
  wire  _datStart_T_75 = ~entries_10_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:80]
  wire  datStart_10 = _evtWant_T_90 & entries_10_state == 2'h3 & entries_10_beatsLeft == 2'h2 & ~entries_10_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:77]
  wire  _datStart_T_78 = entries_11_state == 2'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:38]
  wire  _datStart_T_82 = ~entries_11_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:80]
  wire  datStart_11 = _evtWant_T_99 & entries_11_state == 2'h3 & entries_11_beatsLeft == 2'h2 & ~entries_11_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:77]
  wire  _datStart_T_85 = entries_12_state == 2'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:38]
  wire  _datStart_T_89 = ~entries_12_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:80]
  wire  datStart_12 = _evtWant_T_108 & entries_12_state == 2'h3 & entries_12_beatsLeft == 2'h2 & ~entries_12_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:77]
  wire  _datStart_T_92 = entries_13_state == 2'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:38]
  wire  _datStart_T_96 = ~entries_13_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:80]
  wire  datStart_13 = _evtWant_T_117 & entries_13_state == 2'h3 & entries_13_beatsLeft == 2'h2 & ~entries_13_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:77]
  wire  _datStart_T_99 = entries_14_state == 2'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:38]
  wire  _datStart_T_103 = ~entries_14_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:80]
  wire  datStart_14 = _evtWant_T_126 & entries_14_state == 2'h3 & entries_14_beatsLeft == 2'h2 & ~entries_14_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:77]
  wire  _datStart_T_106 = entries_15_state == 2'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:38]
  wire  _datStart_T_110 = ~entries_15_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:80]
  wire  datStart_15 = _evtWant_T_135 & entries_15_state == 2'h3 & entries_15_beatsLeft == 2'h2 & ~entries_15_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:77]
  wire  _datStart_T_113 = entries_16_state == 2'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:38]
  wire  _datStart_T_117 = ~entries_16_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:80]
  wire  datStart_16 = _evtWant_T_144 & entries_16_state == 2'h3 & entries_16_beatsLeft == 2'h2 & ~entries_16_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:77]
  wire  _datStart_T_120 = entries_17_state == 2'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:38]
  wire  _datStart_T_124 = ~entries_17_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:80]
  wire  datStart_17 = _evtWant_T_153 & entries_17_state == 2'h3 & entries_17_beatsLeft == 2'h2 & ~entries_17_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 150:77]
  wire  _GEN_1 = 5'h1 == datHoldIdx ? entries_1_busy : entries_0_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 152:{25,25}]
  wire  _GEN_2 = 5'h2 == datHoldIdx ? entries_2_busy : _GEN_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 152:{25,25}]
  wire  _GEN_3 = 5'h3 == datHoldIdx ? entries_3_busy : _GEN_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 152:{25,25}]
  wire  _GEN_4 = 5'h4 == datHoldIdx ? entries_4_busy : _GEN_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 152:{25,25}]
  wire  _GEN_5 = 5'h5 == datHoldIdx ? entries_5_busy : _GEN_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 152:{25,25}]
  wire  _GEN_6 = 5'h6 == datHoldIdx ? entries_6_busy : _GEN_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 152:{25,25}]
  wire  _GEN_7 = 5'h7 == datHoldIdx ? entries_7_busy : _GEN_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 152:{25,25}]
  wire  _GEN_8 = 5'h8 == datHoldIdx ? entries_8_busy : _GEN_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 152:{25,25}]
  wire  _GEN_9 = 5'h9 == datHoldIdx ? entries_9_busy : _GEN_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 152:{25,25}]
  wire  _GEN_10 = 5'ha == datHoldIdx ? entries_10_busy : _GEN_9; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 152:{25,25}]
  wire  _GEN_11 = 5'hb == datHoldIdx ? entries_11_busy : _GEN_10; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 152:{25,25}]
  wire  _GEN_12 = 5'hc == datHoldIdx ? entries_12_busy : _GEN_11; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 152:{25,25}]
  wire  _GEN_13 = 5'hd == datHoldIdx ? entries_13_busy : _GEN_12; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 152:{25,25}]
  wire  _GEN_14 = 5'he == datHoldIdx ? entries_14_busy : _GEN_13; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 152:{25,25}]
  wire  _GEN_15 = 5'hf == datHoldIdx ? entries_15_busy : _GEN_14; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 152:{25,25}]
  wire  _GEN_16 = 5'h10 == datHoldIdx ? entries_16_busy : _GEN_15; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 152:{25,25}]
  wire  _GEN_17 = 5'h11 == datHoldIdx ? entries_17_busy : _GEN_16; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 152:{25,25}]
  wire [1:0] _GEN_19 = 5'h1 == datHoldIdx ? entries_1_state : entries_0_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 153:{31,31}]
  wire [1:0] _GEN_20 = 5'h2 == datHoldIdx ? entries_2_state : _GEN_19; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 153:{31,31}]
  wire [1:0] _GEN_21 = 5'h3 == datHoldIdx ? entries_3_state : _GEN_20; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 153:{31,31}]
  wire [1:0] _GEN_22 = 5'h4 == datHoldIdx ? entries_4_state : _GEN_21; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 153:{31,31}]
  wire [1:0] _GEN_23 = 5'h5 == datHoldIdx ? entries_5_state : _GEN_22; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 153:{31,31}]
  wire [1:0] _GEN_24 = 5'h6 == datHoldIdx ? entries_6_state : _GEN_23; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 153:{31,31}]
  wire [1:0] _GEN_25 = 5'h7 == datHoldIdx ? entries_7_state : _GEN_24; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 153:{31,31}]
  wire [1:0] _GEN_26 = 5'h8 == datHoldIdx ? entries_8_state : _GEN_25; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 153:{31,31}]
  wire [1:0] _GEN_27 = 5'h9 == datHoldIdx ? entries_9_state : _GEN_26; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 153:{31,31}]
  wire [1:0] _GEN_28 = 5'ha == datHoldIdx ? entries_10_state : _GEN_27; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 153:{31,31}]
  wire [1:0] _GEN_29 = 5'hb == datHoldIdx ? entries_11_state : _GEN_28; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 153:{31,31}]
  wire [1:0] _GEN_30 = 5'hc == datHoldIdx ? entries_12_state : _GEN_29; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 153:{31,31}]
  wire [1:0] _GEN_31 = 5'hd == datHoldIdx ? entries_13_state : _GEN_30; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 153:{31,31}]
  wire [1:0] _GEN_32 = 5'he == datHoldIdx ? entries_14_state : _GEN_31; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 153:{31,31}]
  wire [1:0] _GEN_33 = 5'hf == datHoldIdx ? entries_15_state : _GEN_32; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 153:{31,31}]
  wire [1:0] _GEN_34 = 5'h10 == datHoldIdx ? entries_16_state : _GEN_33; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 153:{31,31}]
  wire [1:0] _GEN_35 = 5'h11 == datHoldIdx ? entries_17_state : _GEN_34; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 153:{31,31}]
  wire  _datHeld_T_1 = _GEN_35 == 2'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 153:31]
  wire  _datHeld_T_2 = datHold & _GEN_17 & _datHeld_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 152:53]
  wire [1:0] _GEN_37 = 5'h1 == datHoldIdx ? entries_1_beatsLeft : entries_0_beatsLeft; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 153:{80,80}]
  wire [1:0] _GEN_38 = 5'h2 == datHoldIdx ? entries_2_beatsLeft : _GEN_37; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 153:{80,80}]
  wire [1:0] _GEN_39 = 5'h3 == datHoldIdx ? entries_3_beatsLeft : _GEN_38; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 153:{80,80}]
  wire [1:0] _GEN_40 = 5'h4 == datHoldIdx ? entries_4_beatsLeft : _GEN_39; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 153:{80,80}]
  wire [1:0] _GEN_41 = 5'h5 == datHoldIdx ? entries_5_beatsLeft : _GEN_40; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 153:{80,80}]
  wire [1:0] _GEN_42 = 5'h6 == datHoldIdx ? entries_6_beatsLeft : _GEN_41; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 153:{80,80}]
  wire [1:0] _GEN_43 = 5'h7 == datHoldIdx ? entries_7_beatsLeft : _GEN_42; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 153:{80,80}]
  wire [1:0] _GEN_44 = 5'h8 == datHoldIdx ? entries_8_beatsLeft : _GEN_43; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 153:{80,80}]
  wire [1:0] _GEN_45 = 5'h9 == datHoldIdx ? entries_9_beatsLeft : _GEN_44; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 153:{80,80}]
  wire [1:0] _GEN_46 = 5'ha == datHoldIdx ? entries_10_beatsLeft : _GEN_45; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 153:{80,80}]
  wire [1:0] _GEN_47 = 5'hb == datHoldIdx ? entries_11_beatsLeft : _GEN_46; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 153:{80,80}]
  wire [1:0] _GEN_48 = 5'hc == datHoldIdx ? entries_12_beatsLeft : _GEN_47; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 153:{80,80}]
  wire [1:0] _GEN_49 = 5'hd == datHoldIdx ? entries_13_beatsLeft : _GEN_48; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 153:{80,80}]
  wire [1:0] _GEN_50 = 5'he == datHoldIdx ? entries_14_beatsLeft : _GEN_49; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 153:{80,80}]
  wire [1:0] _GEN_51 = 5'hf == datHoldIdx ? entries_15_beatsLeft : _GEN_50; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 153:{80,80}]
  wire [1:0] _GEN_52 = 5'h10 == datHoldIdx ? entries_16_beatsLeft : _GEN_51; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 153:{80,80}]
  wire [1:0] _GEN_53 = 5'h11 == datHoldIdx ? entries_17_beatsLeft : _GEN_52; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 153:{80,80}]
  wire  datHeld = _datHeld_T_2 & _GEN_53 != 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 153:47]
  wire [8:0] evtIdx_lo = {evtWant_8,evtWant_7,evtWant_6,evtWant_5,evtWant_4,evtWant_3,evtWant_2,evtWant_1,evtWant_0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 155:65]
  wire [17:0] _evtIdx_T = {evtWant_17,evtWant_16,evtWant_15,evtWant_14,evtWant_13,evtWant_12,evtWant_11,evtWant_10,
    evtWant_9,evtIdx_lo}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 155:65]
  wire [4:0] _evtIdx_T_19 = _evtIdx_T[16] ? 5'h10 : 5'h11; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _evtIdx_T_20 = _evtIdx_T[15] ? 5'hf : _evtIdx_T_19; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _evtIdx_T_21 = _evtIdx_T[14] ? 5'he : _evtIdx_T_20; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _evtIdx_T_22 = _evtIdx_T[13] ? 5'hd : _evtIdx_T_21; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _evtIdx_T_23 = _evtIdx_T[12] ? 5'hc : _evtIdx_T_22; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _evtIdx_T_24 = _evtIdx_T[11] ? 5'hb : _evtIdx_T_23; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _evtIdx_T_25 = _evtIdx_T[10] ? 5'ha : _evtIdx_T_24; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _evtIdx_T_26 = _evtIdx_T[9] ? 5'h9 : _evtIdx_T_25; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _evtIdx_T_27 = _evtIdx_T[8] ? 5'h8 : _evtIdx_T_26; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _evtIdx_T_28 = _evtIdx_T[7] ? 5'h7 : _evtIdx_T_27; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _evtIdx_T_29 = _evtIdx_T[6] ? 5'h6 : _evtIdx_T_28; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _evtIdx_T_30 = _evtIdx_T[5] ? 5'h5 : _evtIdx_T_29; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _evtIdx_T_31 = _evtIdx_T[4] ? 5'h4 : _evtIdx_T_30; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _evtIdx_T_32 = _evtIdx_T[3] ? 5'h3 : _evtIdx_T_31; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _evtIdx_T_33 = _evtIdx_T[2] ? 5'h2 : _evtIdx_T_32; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _evtIdx_T_34 = _evtIdx_T[1] ? 5'h1 : _evtIdx_T_33; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _evtIdx_T_35 = _evtIdx_T[0] ? 5'h0 : _evtIdx_T_34; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] evtIdx = evtHold ? evtHoldIdx : _evtIdx_T_35; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 155:19]
  wire [8:0] rspIdx_lo = {rspWant_8,rspWant_7,rspWant_6,rspWant_5,rspWant_4,rspWant_3,rspWant_2,rspWant_1,rspWant_0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 156:65]
  wire [17:0] _rspIdx_T = {rspWant_17,rspWant_16,rspWant_15,rspWant_14,rspWant_13,rspWant_12,rspWant_11,rspWant_10,
    rspWant_9,rspIdx_lo}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 156:65]
  wire [4:0] _rspIdx_T_19 = _rspIdx_T[16] ? 5'h10 : 5'h11; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _rspIdx_T_20 = _rspIdx_T[15] ? 5'hf : _rspIdx_T_19; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _rspIdx_T_21 = _rspIdx_T[14] ? 5'he : _rspIdx_T_20; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _rspIdx_T_22 = _rspIdx_T[13] ? 5'hd : _rspIdx_T_21; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _rspIdx_T_23 = _rspIdx_T[12] ? 5'hc : _rspIdx_T_22; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _rspIdx_T_24 = _rspIdx_T[11] ? 5'hb : _rspIdx_T_23; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _rspIdx_T_25 = _rspIdx_T[10] ? 5'ha : _rspIdx_T_24; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _rspIdx_T_26 = _rspIdx_T[9] ? 5'h9 : _rspIdx_T_25; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _rspIdx_T_27 = _rspIdx_T[8] ? 5'h8 : _rspIdx_T_26; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _rspIdx_T_28 = _rspIdx_T[7] ? 5'h7 : _rspIdx_T_27; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _rspIdx_T_29 = _rspIdx_T[6] ? 5'h6 : _rspIdx_T_28; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _rspIdx_T_30 = _rspIdx_T[5] ? 5'h5 : _rspIdx_T_29; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _rspIdx_T_31 = _rspIdx_T[4] ? 5'h4 : _rspIdx_T_30; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _rspIdx_T_32 = _rspIdx_T[3] ? 5'h3 : _rspIdx_T_31; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _rspIdx_T_33 = _rspIdx_T[2] ? 5'h2 : _rspIdx_T_32; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _rspIdx_T_34 = _rspIdx_T[1] ? 5'h1 : _rspIdx_T_33; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _rspIdx_T_35 = _rspIdx_T[0] ? 5'h0 : _rspIdx_T_34; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] rspIdx = rspHold ? rspHoldIdx : _rspIdx_T_35; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 156:19]
  wire [8:0] datIdx_lo = {datStart_8,datStart_7,datStart_6,datStart_5,datStart_4,datStart_3,datStart_2,datStart_1,
    datStart_0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 157:66]
  wire [17:0] _datIdx_T = {datStart_17,datStart_16,datStart_15,datStart_14,datStart_13,datStart_12,datStart_11,
    datStart_10,datStart_9,datIdx_lo}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 157:66]
  wire [4:0] _datIdx_T_19 = _datIdx_T[16] ? 5'h10 : 5'h11; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _datIdx_T_20 = _datIdx_T[15] ? 5'hf : _datIdx_T_19; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _datIdx_T_21 = _datIdx_T[14] ? 5'he : _datIdx_T_20; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _datIdx_T_22 = _datIdx_T[13] ? 5'hd : _datIdx_T_21; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _datIdx_T_23 = _datIdx_T[12] ? 5'hc : _datIdx_T_22; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _datIdx_T_24 = _datIdx_T[11] ? 5'hb : _datIdx_T_23; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _datIdx_T_25 = _datIdx_T[10] ? 5'ha : _datIdx_T_24; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _datIdx_T_26 = _datIdx_T[9] ? 5'h9 : _datIdx_T_25; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _datIdx_T_27 = _datIdx_T[8] ? 5'h8 : _datIdx_T_26; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _datIdx_T_28 = _datIdx_T[7] ? 5'h7 : _datIdx_T_27; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _datIdx_T_29 = _datIdx_T[6] ? 5'h6 : _datIdx_T_28; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _datIdx_T_30 = _datIdx_T[5] ? 5'h5 : _datIdx_T_29; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _datIdx_T_31 = _datIdx_T[4] ? 5'h4 : _datIdx_T_30; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _datIdx_T_32 = _datIdx_T[3] ? 5'h3 : _datIdx_T_31; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _datIdx_T_33 = _datIdx_T[2] ? 5'h2 : _datIdx_T_32; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _datIdx_T_34 = _datIdx_T[1] ? 5'h1 : _datIdx_T_33; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _datIdx_T_35 = _datIdx_T[0] ? 5'h0 : _datIdx_T_34; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] datIdx = datHeld ? datHoldIdx : _datIdx_T_35; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 157:19]
  wire [4:0] _io_txEvt_bits_txnID_T_1 = 5'h11 + evtIdx; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 164:43]
  wire [2:0] _GEN_55 = 5'h1 == evtIdx ? entries_1_opcode : entries_0_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 167:{47,47}]
  wire [2:0] _GEN_56 = 5'h2 == evtIdx ? entries_2_opcode : _GEN_55; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 167:{47,47}]
  wire [2:0] _GEN_57 = 5'h3 == evtIdx ? entries_3_opcode : _GEN_56; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 167:{47,47}]
  wire [2:0] _GEN_58 = 5'h4 == evtIdx ? entries_4_opcode : _GEN_57; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 167:{47,47}]
  wire [2:0] _GEN_59 = 5'h5 == evtIdx ? entries_5_opcode : _GEN_58; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 167:{47,47}]
  wire [2:0] _GEN_60 = 5'h6 == evtIdx ? entries_6_opcode : _GEN_59; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 167:{47,47}]
  wire [2:0] _GEN_61 = 5'h7 == evtIdx ? entries_7_opcode : _GEN_60; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 167:{47,47}]
  wire [2:0] _GEN_62 = 5'h8 == evtIdx ? entries_8_opcode : _GEN_61; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 167:{47,47}]
  wire [2:0] _GEN_63 = 5'h9 == evtIdx ? entries_9_opcode : _GEN_62; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 167:{47,47}]
  wire [2:0] _GEN_64 = 5'ha == evtIdx ? entries_10_opcode : _GEN_63; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 167:{47,47}]
  wire [2:0] _GEN_65 = 5'hb == evtIdx ? entries_11_opcode : _GEN_64; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 167:{47,47}]
  wire [2:0] _GEN_66 = 5'hc == evtIdx ? entries_12_opcode : _GEN_65; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 167:{47,47}]
  wire [2:0] _GEN_67 = 5'hd == evtIdx ? entries_13_opcode : _GEN_66; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 167:{47,47}]
  wire [2:0] _GEN_68 = 5'he == evtIdx ? entries_14_opcode : _GEN_67; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 167:{47,47}]
  wire [2:0] _GEN_69 = 5'hf == evtIdx ? entries_15_opcode : _GEN_68; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 167:{47,47}]
  wire [2:0] _GEN_70 = 5'h10 == evtIdx ? entries_16_opcode : _GEN_69; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 167:{47,47}]
  wire [2:0] _GEN_71 = 5'h11 == evtIdx ? entries_17_opcode : _GEN_70; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 167:{47,47}]
  wire [47:0] _GEN_73 = 5'h1 == evtIdx ? entries_1_addr : entries_0_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 169:{22,22}]
  wire [47:0] _GEN_74 = 5'h2 == evtIdx ? entries_2_addr : _GEN_73; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 169:{22,22}]
  wire [47:0] _GEN_75 = 5'h3 == evtIdx ? entries_3_addr : _GEN_74; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 169:{22,22}]
  wire [47:0] _GEN_76 = 5'h4 == evtIdx ? entries_4_addr : _GEN_75; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 169:{22,22}]
  wire [47:0] _GEN_77 = 5'h5 == evtIdx ? entries_5_addr : _GEN_76; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 169:{22,22}]
  wire [47:0] _GEN_78 = 5'h6 == evtIdx ? entries_6_addr : _GEN_77; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 169:{22,22}]
  wire [47:0] _GEN_79 = 5'h7 == evtIdx ? entries_7_addr : _GEN_78; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 169:{22,22}]
  wire [47:0] _GEN_80 = 5'h8 == evtIdx ? entries_8_addr : _GEN_79; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 169:{22,22}]
  wire [47:0] _GEN_81 = 5'h9 == evtIdx ? entries_9_addr : _GEN_80; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 169:{22,22}]
  wire [47:0] _GEN_82 = 5'ha == evtIdx ? entries_10_addr : _GEN_81; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 169:{22,22}]
  wire [47:0] _GEN_83 = 5'hb == evtIdx ? entries_11_addr : _GEN_82; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 169:{22,22}]
  wire [47:0] _GEN_84 = 5'hc == evtIdx ? entries_12_addr : _GEN_83; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 169:{22,22}]
  wire [47:0] _GEN_85 = 5'hd == evtIdx ? entries_13_addr : _GEN_84; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 169:{22,22}]
  wire [47:0] _GEN_86 = 5'he == evtIdx ? entries_14_addr : _GEN_85; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 169:{22,22}]
  wire [47:0] _GEN_87 = 5'hf == evtIdx ? entries_15_addr : _GEN_86; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 169:{22,22}]
  wire [47:0] _GEN_88 = 5'h10 == evtIdx ? entries_16_addr : _GEN_87; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 169:{22,22}]
  wire  _GEN_91 = 5'h1 == evtIdx ? entries_1_traceTag : entries_0_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 170:{26,26}]
  wire  _GEN_92 = 5'h2 == evtIdx ? entries_2_traceTag : _GEN_91; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 170:{26,26}]
  wire  _GEN_93 = 5'h3 == evtIdx ? entries_3_traceTag : _GEN_92; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 170:{26,26}]
  wire  _GEN_94 = 5'h4 == evtIdx ? entries_4_traceTag : _GEN_93; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 170:{26,26}]
  wire  _GEN_95 = 5'h5 == evtIdx ? entries_5_traceTag : _GEN_94; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 170:{26,26}]
  wire  _GEN_96 = 5'h6 == evtIdx ? entries_6_traceTag : _GEN_95; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 170:{26,26}]
  wire  _GEN_97 = 5'h7 == evtIdx ? entries_7_traceTag : _GEN_96; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 170:{26,26}]
  wire  _GEN_98 = 5'h8 == evtIdx ? entries_8_traceTag : _GEN_97; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 170:{26,26}]
  wire  _GEN_99 = 5'h9 == evtIdx ? entries_9_traceTag : _GEN_98; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 170:{26,26}]
  wire  _GEN_100 = 5'ha == evtIdx ? entries_10_traceTag : _GEN_99; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 170:{26,26}]
  wire  _GEN_101 = 5'hb == evtIdx ? entries_11_traceTag : _GEN_100; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 170:{26,26}]
  wire  _GEN_102 = 5'hc == evtIdx ? entries_12_traceTag : _GEN_101; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 170:{26,26}]
  wire  _GEN_103 = 5'hd == evtIdx ? entries_13_traceTag : _GEN_102; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 170:{26,26}]
  wire  _GEN_104 = 5'he == evtIdx ? entries_14_traceTag : _GEN_103; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 170:{26,26}]
  wire  _GEN_105 = 5'hf == evtIdx ? entries_15_traceTag : _GEN_104; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 170:{26,26}]
  wire  _GEN_106 = 5'h10 == evtIdx ? entries_16_traceTag : _GEN_105; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 170:{26,26}]
  wire [7:0] _GEN_109 = 5'h1 == rspIdx ? entries_1_snpTxnId : entries_0_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 174:{23,23}]
  wire [7:0] _GEN_110 = 5'h2 == rspIdx ? entries_2_snpTxnId : _GEN_109; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 174:{23,23}]
  wire [7:0] _GEN_111 = 5'h3 == rspIdx ? entries_3_snpTxnId : _GEN_110; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 174:{23,23}]
  wire [7:0] _GEN_112 = 5'h4 == rspIdx ? entries_4_snpTxnId : _GEN_111; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 174:{23,23}]
  wire [7:0] _GEN_113 = 5'h5 == rspIdx ? entries_5_snpTxnId : _GEN_112; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 174:{23,23}]
  wire [7:0] _GEN_114 = 5'h6 == rspIdx ? entries_6_snpTxnId : _GEN_113; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 174:{23,23}]
  wire [7:0] _GEN_115 = 5'h7 == rspIdx ? entries_7_snpTxnId : _GEN_114; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 174:{23,23}]
  wire [7:0] _GEN_116 = 5'h8 == rspIdx ? entries_8_snpTxnId : _GEN_115; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 174:{23,23}]
  wire [7:0] _GEN_117 = 5'h9 == rspIdx ? entries_9_snpTxnId : _GEN_116; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 174:{23,23}]
  wire [7:0] _GEN_118 = 5'ha == rspIdx ? entries_10_snpTxnId : _GEN_117; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 174:{23,23}]
  wire [7:0] _GEN_119 = 5'hb == rspIdx ? entries_11_snpTxnId : _GEN_118; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 174:{23,23}]
  wire [7:0] _GEN_120 = 5'hc == rspIdx ? entries_12_snpTxnId : _GEN_119; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 174:{23,23}]
  wire [7:0] _GEN_121 = 5'hd == rspIdx ? entries_13_snpTxnId : _GEN_120; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 174:{23,23}]
  wire [7:0] _GEN_122 = 5'he == rspIdx ? entries_14_snpTxnId : _GEN_121; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 174:{23,23}]
  wire [7:0] _GEN_123 = 5'hf == rspIdx ? entries_15_snpTxnId : _GEN_122; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 174:{23,23}]
  wire [7:0] _GEN_124 = 5'h10 == rspIdx ? entries_16_snpTxnId : _GEN_123; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 174:{23,23}]
  wire [2:0] _GEN_145 = 5'h1 == rspIdx ? entries_1_resp : entries_0_resp; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 179:{22,22}]
  wire [2:0] _GEN_146 = 5'h2 == rspIdx ? entries_2_resp : _GEN_145; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 179:{22,22}]
  wire [2:0] _GEN_147 = 5'h3 == rspIdx ? entries_3_resp : _GEN_146; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 179:{22,22}]
  wire [2:0] _GEN_148 = 5'h4 == rspIdx ? entries_4_resp : _GEN_147; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 179:{22,22}]
  wire [2:0] _GEN_149 = 5'h5 == rspIdx ? entries_5_resp : _GEN_148; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 179:{22,22}]
  wire [2:0] _GEN_150 = 5'h6 == rspIdx ? entries_6_resp : _GEN_149; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 179:{22,22}]
  wire [2:0] _GEN_151 = 5'h7 == rspIdx ? entries_7_resp : _GEN_150; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 179:{22,22}]
  wire [2:0] _GEN_152 = 5'h8 == rspIdx ? entries_8_resp : _GEN_151; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 179:{22,22}]
  wire [2:0] _GEN_153 = 5'h9 == rspIdx ? entries_9_resp : _GEN_152; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 179:{22,22}]
  wire [2:0] _GEN_154 = 5'ha == rspIdx ? entries_10_resp : _GEN_153; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 179:{22,22}]
  wire [2:0] _GEN_155 = 5'hb == rspIdx ? entries_11_resp : _GEN_154; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 179:{22,22}]
  wire [2:0] _GEN_156 = 5'hc == rspIdx ? entries_12_resp : _GEN_155; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 179:{22,22}]
  wire [2:0] _GEN_157 = 5'hd == rspIdx ? entries_13_resp : _GEN_156; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 179:{22,22}]
  wire [2:0] _GEN_158 = 5'he == rspIdx ? entries_14_resp : _GEN_157; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 179:{22,22}]
  wire [2:0] _GEN_159 = 5'hf == rspIdx ? entries_15_resp : _GEN_158; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 179:{22,22}]
  wire [2:0] _GEN_160 = 5'h10 == rspIdx ? entries_16_resp : _GEN_159; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 179:{22,22}]
  wire  _GEN_163 = 5'h1 == rspIdx ? entries_1_traceTag : entries_0_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 180:{26,26}]
  wire  _GEN_164 = 5'h2 == rspIdx ? entries_2_traceTag : _GEN_163; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 180:{26,26}]
  wire  _GEN_165 = 5'h3 == rspIdx ? entries_3_traceTag : _GEN_164; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 180:{26,26}]
  wire  _GEN_166 = 5'h4 == rspIdx ? entries_4_traceTag : _GEN_165; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 180:{26,26}]
  wire  _GEN_167 = 5'h5 == rspIdx ? entries_5_traceTag : _GEN_166; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 180:{26,26}]
  wire  _GEN_168 = 5'h6 == rspIdx ? entries_6_traceTag : _GEN_167; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 180:{26,26}]
  wire  _GEN_169 = 5'h7 == rspIdx ? entries_7_traceTag : _GEN_168; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 180:{26,26}]
  wire  _GEN_170 = 5'h8 == rspIdx ? entries_8_traceTag : _GEN_169; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 180:{26,26}]
  wire  _GEN_171 = 5'h9 == rspIdx ? entries_9_traceTag : _GEN_170; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 180:{26,26}]
  wire  _GEN_172 = 5'ha == rspIdx ? entries_10_traceTag : _GEN_171; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 180:{26,26}]
  wire  _GEN_173 = 5'hb == rspIdx ? entries_11_traceTag : _GEN_172; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 180:{26,26}]
  wire  _GEN_174 = 5'hc == rspIdx ? entries_12_traceTag : _GEN_173; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 180:{26,26}]
  wire  _GEN_175 = 5'hd == rspIdx ? entries_13_traceTag : _GEN_174; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 180:{26,26}]
  wire  _GEN_176 = 5'he == rspIdx ? entries_14_traceTag : _GEN_175; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 180:{26,26}]
  wire  _GEN_177 = 5'hf == rspIdx ? entries_15_traceTag : _GEN_176; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 180:{26,26}]
  wire  _GEN_178 = 5'h10 == rspIdx ? entries_16_traceTag : _GEN_177; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 180:{26,26}]
  wire [511:0] _GEN_181 = 5'h1 == datIdx ? entries_1_data : entries_0_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 183:{30,30}]
  wire [511:0] _GEN_182 = 5'h2 == datIdx ? entries_2_data : _GEN_181; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 183:{30,30}]
  wire [511:0] _GEN_183 = 5'h3 == datIdx ? entries_3_data : _GEN_182; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 183:{30,30}]
  wire [511:0] _GEN_184 = 5'h4 == datIdx ? entries_4_data : _GEN_183; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 183:{30,30}]
  wire [511:0] _GEN_185 = 5'h5 == datIdx ? entries_5_data : _GEN_184; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 183:{30,30}]
  wire [511:0] _GEN_186 = 5'h6 == datIdx ? entries_6_data : _GEN_185; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 183:{30,30}]
  wire [511:0] _GEN_187 = 5'h7 == datIdx ? entries_7_data : _GEN_186; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 183:{30,30}]
  wire [511:0] _GEN_188 = 5'h8 == datIdx ? entries_8_data : _GEN_187; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 183:{30,30}]
  wire [511:0] _GEN_189 = 5'h9 == datIdx ? entries_9_data : _GEN_188; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 183:{30,30}]
  wire [511:0] _GEN_190 = 5'ha == datIdx ? entries_10_data : _GEN_189; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 183:{30,30}]
  wire [511:0] _GEN_191 = 5'hb == datIdx ? entries_11_data : _GEN_190; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 183:{30,30}]
  wire [511:0] _GEN_192 = 5'hc == datIdx ? entries_12_data : _GEN_191; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 183:{30,30}]
  wire [511:0] _GEN_193 = 5'hd == datIdx ? entries_13_data : _GEN_192; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 183:{30,30}]
  wire [511:0] _GEN_194 = 5'he == datIdx ? entries_14_data : _GEN_193; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 183:{30,30}]
  wire [511:0] _GEN_195 = 5'hf == datIdx ? entries_15_data : _GEN_194; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 183:{30,30}]
  wire [511:0] _GEN_196 = 5'h10 == datIdx ? entries_16_data : _GEN_195; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 183:{30,30}]
  wire [511:0] _GEN_197 = 5'h11 == datIdx ? entries_17_data : _GEN_196; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 183:{30,30}]
  wire [255:0] lowBeat = _GEN_197[255:0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 183:30]
  wire [255:0] highBeat = _GEN_197[511:256]; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 184:31]
  wire [1:0] _GEN_199 = 5'h1 == datIdx ? entries_1_beatsLeft : entries_0_beatsLeft; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 185:{38,38}]
  wire [1:0] _GEN_200 = 5'h2 == datIdx ? entries_2_beatsLeft : _GEN_199; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 185:{38,38}]
  wire [1:0] _GEN_201 = 5'h3 == datIdx ? entries_3_beatsLeft : _GEN_200; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 185:{38,38}]
  wire [1:0] _GEN_202 = 5'h4 == datIdx ? entries_4_beatsLeft : _GEN_201; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 185:{38,38}]
  wire [1:0] _GEN_203 = 5'h5 == datIdx ? entries_5_beatsLeft : _GEN_202; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 185:{38,38}]
  wire [1:0] _GEN_204 = 5'h6 == datIdx ? entries_6_beatsLeft : _GEN_203; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 185:{38,38}]
  wire [1:0] _GEN_205 = 5'h7 == datIdx ? entries_7_beatsLeft : _GEN_204; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 185:{38,38}]
  wire [1:0] _GEN_206 = 5'h8 == datIdx ? entries_8_beatsLeft : _GEN_205; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 185:{38,38}]
  wire [1:0] _GEN_207 = 5'h9 == datIdx ? entries_9_beatsLeft : _GEN_206; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 185:{38,38}]
  wire [1:0] _GEN_208 = 5'ha == datIdx ? entries_10_beatsLeft : _GEN_207; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 185:{38,38}]
  wire [1:0] _GEN_209 = 5'hb == datIdx ? entries_11_beatsLeft : _GEN_208; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 185:{38,38}]
  wire [1:0] _GEN_210 = 5'hc == datIdx ? entries_12_beatsLeft : _GEN_209; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 185:{38,38}]
  wire [1:0] _GEN_211 = 5'hd == datIdx ? entries_13_beatsLeft : _GEN_210; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 185:{38,38}]
  wire [1:0] _GEN_212 = 5'he == datIdx ? entries_14_beatsLeft : _GEN_211; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 185:{38,38}]
  wire [1:0] _GEN_213 = 5'hf == datIdx ? entries_15_beatsLeft : _GEN_212; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 185:{38,38}]
  wire [1:0] _GEN_214 = 5'h10 == datIdx ? entries_16_beatsLeft : _GEN_213; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 185:{38,38}]
  wire [1:0] _GEN_215 = 5'h11 == datIdx ? entries_17_beatsLeft : _GEN_214; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 185:{38,38}]
  wire  firstBeat = _GEN_215 == 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 185:38]
  wire [2:0] _GEN_217 = 5'h1 == datIdx ? entries_1_opcode : entries_0_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{46,46}]
  wire [2:0] _GEN_218 = 5'h2 == datIdx ? entries_2_opcode : _GEN_217; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{46,46}]
  wire [2:0] _GEN_219 = 5'h3 == datIdx ? entries_3_opcode : _GEN_218; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{46,46}]
  wire [2:0] _GEN_220 = 5'h4 == datIdx ? entries_4_opcode : _GEN_219; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{46,46}]
  wire [2:0] _GEN_221 = 5'h5 == datIdx ? entries_5_opcode : _GEN_220; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{46,46}]
  wire [2:0] _GEN_222 = 5'h6 == datIdx ? entries_6_opcode : _GEN_221; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{46,46}]
  wire [2:0] _GEN_223 = 5'h7 == datIdx ? entries_7_opcode : _GEN_222; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{46,46}]
  wire [2:0] _GEN_224 = 5'h8 == datIdx ? entries_8_opcode : _GEN_223; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{46,46}]
  wire [2:0] _GEN_225 = 5'h9 == datIdx ? entries_9_opcode : _GEN_224; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{46,46}]
  wire [2:0] _GEN_226 = 5'ha == datIdx ? entries_10_opcode : _GEN_225; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{46,46}]
  wire [2:0] _GEN_227 = 5'hb == datIdx ? entries_11_opcode : _GEN_226; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{46,46}]
  wire [2:0] _GEN_228 = 5'hc == datIdx ? entries_12_opcode : _GEN_227; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{46,46}]
  wire [2:0] _GEN_229 = 5'hd == datIdx ? entries_13_opcode : _GEN_228; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{46,46}]
  wire [2:0] _GEN_230 = 5'he == datIdx ? entries_14_opcode : _GEN_229; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{46,46}]
  wire [2:0] _GEN_231 = 5'hf == datIdx ? entries_15_opcode : _GEN_230; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{46,46}]
  wire [2:0] _GEN_232 = 5'h10 == datIdx ? entries_16_opcode : _GEN_231; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{46,46}]
  wire [2:0] _GEN_233 = 5'h11 == datIdx ? entries_17_opcode : _GEN_232; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{46,46}]
  wire  _io_txDat_bits_txnID_T = _GEN_233 == 3'h4; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:46]
  wire [7:0] _GEN_235 = 5'h1 == datIdx ? entries_1_snpTxnId : entries_0_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{29,29}]
  wire [7:0] _GEN_236 = 5'h2 == datIdx ? entries_2_snpTxnId : _GEN_235; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{29,29}]
  wire [7:0] _GEN_237 = 5'h3 == datIdx ? entries_3_snpTxnId : _GEN_236; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{29,29}]
  wire [7:0] _GEN_238 = 5'h4 == datIdx ? entries_4_snpTxnId : _GEN_237; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{29,29}]
  wire [7:0] _GEN_239 = 5'h5 == datIdx ? entries_5_snpTxnId : _GEN_238; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{29,29}]
  wire [7:0] _GEN_240 = 5'h6 == datIdx ? entries_6_snpTxnId : _GEN_239; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{29,29}]
  wire [7:0] _GEN_241 = 5'h7 == datIdx ? entries_7_snpTxnId : _GEN_240; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{29,29}]
  wire [7:0] _GEN_242 = 5'h8 == datIdx ? entries_8_snpTxnId : _GEN_241; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{29,29}]
  wire [7:0] _GEN_243 = 5'h9 == datIdx ? entries_9_snpTxnId : _GEN_242; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{29,29}]
  wire [7:0] _GEN_244 = 5'ha == datIdx ? entries_10_snpTxnId : _GEN_243; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{29,29}]
  wire [7:0] _GEN_245 = 5'hb == datIdx ? entries_11_snpTxnId : _GEN_244; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{29,29}]
  wire [7:0] _GEN_246 = 5'hc == datIdx ? entries_12_snpTxnId : _GEN_245; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{29,29}]
  wire [7:0] _GEN_247 = 5'hd == datIdx ? entries_13_snpTxnId : _GEN_246; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{29,29}]
  wire [7:0] _GEN_248 = 5'he == datIdx ? entries_14_snpTxnId : _GEN_247; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{29,29}]
  wire [7:0] _GEN_249 = 5'hf == datIdx ? entries_15_snpTxnId : _GEN_248; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{29,29}]
  wire [7:0] _GEN_250 = 5'h10 == datIdx ? entries_16_snpTxnId : _GEN_249; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{29,29}]
  wire [7:0] _GEN_251 = 5'h11 == datIdx ? entries_17_snpTxnId : _GEN_250; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{29,29}]
  wire [7:0] _GEN_253 = 5'h1 == datIdx ? entries_1_dbid : entries_0_dbid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{29,29}]
  wire [7:0] _GEN_254 = 5'h2 == datIdx ? entries_2_dbid : _GEN_253; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{29,29}]
  wire [7:0] _GEN_255 = 5'h3 == datIdx ? entries_3_dbid : _GEN_254; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{29,29}]
  wire [7:0] _GEN_256 = 5'h4 == datIdx ? entries_4_dbid : _GEN_255; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{29,29}]
  wire [7:0] _GEN_257 = 5'h5 == datIdx ? entries_5_dbid : _GEN_256; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{29,29}]
  wire [7:0] _GEN_258 = 5'h6 == datIdx ? entries_6_dbid : _GEN_257; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{29,29}]
  wire [7:0] _GEN_259 = 5'h7 == datIdx ? entries_7_dbid : _GEN_258; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{29,29}]
  wire [7:0] _GEN_260 = 5'h8 == datIdx ? entries_8_dbid : _GEN_259; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{29,29}]
  wire [7:0] _GEN_261 = 5'h9 == datIdx ? entries_9_dbid : _GEN_260; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{29,29}]
  wire [7:0] _GEN_262 = 5'ha == datIdx ? entries_10_dbid : _GEN_261; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{29,29}]
  wire [7:0] _GEN_263 = 5'hb == datIdx ? entries_11_dbid : _GEN_262; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{29,29}]
  wire [7:0] _GEN_264 = 5'hc == datIdx ? entries_12_dbid : _GEN_263; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{29,29}]
  wire [7:0] _GEN_265 = 5'hd == datIdx ? entries_13_dbid : _GEN_264; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{29,29}]
  wire [7:0] _GEN_266 = 5'he == datIdx ? entries_14_dbid : _GEN_265; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{29,29}]
  wire [7:0] _GEN_267 = 5'hf == datIdx ? entries_15_dbid : _GEN_266; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{29,29}]
  wire [7:0] _GEN_268 = 5'h10 == datIdx ? entries_16_dbid : _GEN_267; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{29,29}]
  wire [7:0] _GEN_269 = 5'h11 == datIdx ? entries_17_dbid : _GEN_268; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:{29,29}]
  wire  _GEN_271 = 5'h1 == datIdx ? entries_1_rspSeen : entries_0_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 189:{29,29}]
  wire  _GEN_272 = 5'h2 == datIdx ? entries_2_rspSeen : _GEN_271; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 189:{29,29}]
  wire  _GEN_273 = 5'h3 == datIdx ? entries_3_rspSeen : _GEN_272; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 189:{29,29}]
  wire  _GEN_274 = 5'h4 == datIdx ? entries_4_rspSeen : _GEN_273; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 189:{29,29}]
  wire  _GEN_275 = 5'h5 == datIdx ? entries_5_rspSeen : _GEN_274; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 189:{29,29}]
  wire  _GEN_276 = 5'h6 == datIdx ? entries_6_rspSeen : _GEN_275; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 189:{29,29}]
  wire  _GEN_277 = 5'h7 == datIdx ? entries_7_rspSeen : _GEN_276; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 189:{29,29}]
  wire  _GEN_278 = 5'h8 == datIdx ? entries_8_rspSeen : _GEN_277; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 189:{29,29}]
  wire  _GEN_279 = 5'h9 == datIdx ? entries_9_rspSeen : _GEN_278; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 189:{29,29}]
  wire  _GEN_280 = 5'ha == datIdx ? entries_10_rspSeen : _GEN_279; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 189:{29,29}]
  wire  _GEN_281 = 5'hb == datIdx ? entries_11_rspSeen : _GEN_280; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 189:{29,29}]
  wire  _GEN_282 = 5'hc == datIdx ? entries_12_rspSeen : _GEN_281; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 189:{29,29}]
  wire  _GEN_283 = 5'hd == datIdx ? entries_13_rspSeen : _GEN_282; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 189:{29,29}]
  wire  _GEN_284 = 5'he == datIdx ? entries_14_rspSeen : _GEN_283; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 189:{29,29}]
  wire  _GEN_285 = 5'hf == datIdx ? entries_15_rspSeen : _GEN_284; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 189:{29,29}]
  wire  _GEN_286 = 5'h10 == datIdx ? entries_16_rspSeen : _GEN_285; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 189:{29,29}]
  wire  _GEN_287 = 5'h11 == datIdx ? entries_17_rspSeen : _GEN_286; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 189:{29,29}]
  wire [6:0] _GEN_289 = 5'h1 == datIdx ? entries_1_compSrc : entries_0_compSrc; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 189:{29,29}]
  wire [6:0] _GEN_290 = 5'h2 == datIdx ? entries_2_compSrc : _GEN_289; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 189:{29,29}]
  wire [6:0] _GEN_291 = 5'h3 == datIdx ? entries_3_compSrc : _GEN_290; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 189:{29,29}]
  wire [6:0] _GEN_292 = 5'h4 == datIdx ? entries_4_compSrc : _GEN_291; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 189:{29,29}]
  wire [6:0] _GEN_293 = 5'h5 == datIdx ? entries_5_compSrc : _GEN_292; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 189:{29,29}]
  wire [6:0] _GEN_294 = 5'h6 == datIdx ? entries_6_compSrc : _GEN_293; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 189:{29,29}]
  wire [6:0] _GEN_295 = 5'h7 == datIdx ? entries_7_compSrc : _GEN_294; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 189:{29,29}]
  wire [6:0] _GEN_296 = 5'h8 == datIdx ? entries_8_compSrc : _GEN_295; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 189:{29,29}]
  wire [6:0] _GEN_297 = 5'h9 == datIdx ? entries_9_compSrc : _GEN_296; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 189:{29,29}]
  wire [6:0] _GEN_298 = 5'ha == datIdx ? entries_10_compSrc : _GEN_297; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 189:{29,29}]
  wire [6:0] _GEN_299 = 5'hb == datIdx ? entries_11_compSrc : _GEN_298; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 189:{29,29}]
  wire [6:0] _GEN_300 = 5'hc == datIdx ? entries_12_compSrc : _GEN_299; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 189:{29,29}]
  wire [6:0] _GEN_301 = 5'hd == datIdx ? entries_13_compSrc : _GEN_300; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 189:{29,29}]
  wire [6:0] _GEN_302 = 5'he == datIdx ? entries_14_compSrc : _GEN_301; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 189:{29,29}]
  wire [6:0] _GEN_303 = 5'hf == datIdx ? entries_15_compSrc : _GEN_302; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 189:{29,29}]
  wire [6:0] _GEN_304 = 5'h10 == datIdx ? entries_16_compSrc : _GEN_303; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 189:{29,29}]
  wire [6:0] _GEN_305 = 5'h11 == datIdx ? entries_17_compSrc : _GEN_304; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 189:{29,29}]
  wire [2:0] _GEN_325 = 5'h1 == datIdx ? entries_1_resp : entries_0_resp; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 193:{22,22}]
  wire [2:0] _GEN_326 = 5'h2 == datIdx ? entries_2_resp : _GEN_325; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 193:{22,22}]
  wire [2:0] _GEN_327 = 5'h3 == datIdx ? entries_3_resp : _GEN_326; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 193:{22,22}]
  wire [2:0] _GEN_328 = 5'h4 == datIdx ? entries_4_resp : _GEN_327; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 193:{22,22}]
  wire [2:0] _GEN_329 = 5'h5 == datIdx ? entries_5_resp : _GEN_328; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 193:{22,22}]
  wire [2:0] _GEN_330 = 5'h6 == datIdx ? entries_6_resp : _GEN_329; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 193:{22,22}]
  wire [2:0] _GEN_331 = 5'h7 == datIdx ? entries_7_resp : _GEN_330; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 193:{22,22}]
  wire [2:0] _GEN_332 = 5'h8 == datIdx ? entries_8_resp : _GEN_331; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 193:{22,22}]
  wire [2:0] _GEN_333 = 5'h9 == datIdx ? entries_9_resp : _GEN_332; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 193:{22,22}]
  wire [2:0] _GEN_334 = 5'ha == datIdx ? entries_10_resp : _GEN_333; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 193:{22,22}]
  wire [2:0] _GEN_335 = 5'hb == datIdx ? entries_11_resp : _GEN_334; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 193:{22,22}]
  wire [2:0] _GEN_336 = 5'hc == datIdx ? entries_12_resp : _GEN_335; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 193:{22,22}]
  wire [2:0] _GEN_337 = 5'hd == datIdx ? entries_13_resp : _GEN_336; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 193:{22,22}]
  wire [2:0] _GEN_338 = 5'he == datIdx ? entries_14_resp : _GEN_337; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 193:{22,22}]
  wire [2:0] _GEN_339 = 5'hf == datIdx ? entries_15_resp : _GEN_338; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 193:{22,22}]
  wire [2:0] _GEN_340 = 5'h10 == datIdx ? entries_16_resp : _GEN_339; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 193:{22,22}]
  wire  _GEN_343 = 5'h1 == datIdx ? entries_1_traceTag : entries_0_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 197:{26,26}]
  wire  _GEN_344 = 5'h2 == datIdx ? entries_2_traceTag : _GEN_343; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 197:{26,26}]
  wire  _GEN_345 = 5'h3 == datIdx ? entries_3_traceTag : _GEN_344; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 197:{26,26}]
  wire  _GEN_346 = 5'h4 == datIdx ? entries_4_traceTag : _GEN_345; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 197:{26,26}]
  wire  _GEN_347 = 5'h5 == datIdx ? entries_5_traceTag : _GEN_346; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 197:{26,26}]
  wire  _GEN_348 = 5'h6 == datIdx ? entries_6_traceTag : _GEN_347; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 197:{26,26}]
  wire  _GEN_349 = 5'h7 == datIdx ? entries_7_traceTag : _GEN_348; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 197:{26,26}]
  wire  _GEN_350 = 5'h8 == datIdx ? entries_8_traceTag : _GEN_349; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 197:{26,26}]
  wire  _GEN_351 = 5'h9 == datIdx ? entries_9_traceTag : _GEN_350; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 197:{26,26}]
  wire  _GEN_352 = 5'ha == datIdx ? entries_10_traceTag : _GEN_351; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 197:{26,26}]
  wire  _GEN_353 = 5'hb == datIdx ? entries_11_traceTag : _GEN_352; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 197:{26,26}]
  wire  _GEN_354 = 5'hc == datIdx ? entries_12_traceTag : _GEN_353; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 197:{26,26}]
  wire  _GEN_355 = 5'hd == datIdx ? entries_13_traceTag : _GEN_354; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 197:{26,26}]
  wire  _GEN_356 = 5'he == datIdx ? entries_14_traceTag : _GEN_355; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 197:{26,26}]
  wire  _GEN_357 = 5'hf == datIdx ? entries_15_traceTag : _GEN_356; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 197:{26,26}]
  wire  _GEN_358 = 5'h10 == datIdx ? entries_16_traceTag : _GEN_357; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 197:{26,26}]
  wire  _T = io_txEvt_ready & io_txEvt_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 57:35]
  wire  _GEN_360 = io_txEvt_valid | evtHold; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 201:30 202:13 136:24]
  wire  _T_1 = io_txRsp_ready & io_txRsp_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 57:35]
  wire  _GEN_364 = io_txRsp_valid | rspHold; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 207:30 208:13 138:24]
  wire  _T_2 = io_txDat_ready & io_txDat_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 57:35]
  wire  _T_3 = _GEN_215 == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 211:44]
  wire  _GEN_368 = io_txDat_valid | datHold; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 213:30 214:13 140:24]
  wire  rspInRange = io_rxRsp_bits_txnID >= 8'h11 & io_rxRsp_bits_txnID < 8'h23; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 221:41]
  wire [7:0] _rspEnt_T_1 = io_rxRsp_bits_txnID - 8'h11; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 223:42]
  wire [7:0] rspEnt = rspInRange ? _rspEnt_T_1 : 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 223:19]
  wire  _rspWait_0_T_6 = entries_0_state == 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 228:16]
  wire  _rspWait_0_T_8 = entries_0_state == 2'h2 | _datStart_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 228:37]
  wire  rspWait_0 = entries_0_busy & _evtWant_T_7 & _rspWait_0_T_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 227:45]
  wire  _rspWait_1_T_6 = entries_1_state == 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 228:16]
  wire  _rspWait_1_T_8 = entries_1_state == 2'h2 | _datStart_T_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 228:37]
  wire  rspWait_1 = entries_1_busy & _evtWant_T_16 & _rspWait_1_T_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 227:45]
  wire  _rspWait_2_T_6 = entries_2_state == 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 228:16]
  wire  _rspWait_2_T_8 = entries_2_state == 2'h2 | _datStart_T_15; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 228:37]
  wire  rspWait_2 = entries_2_busy & _evtWant_T_25 & _rspWait_2_T_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 227:45]
  wire  _rspWait_3_T_6 = entries_3_state == 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 228:16]
  wire  _rspWait_3_T_8 = entries_3_state == 2'h2 | _datStart_T_22; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 228:37]
  wire  rspWait_3 = entries_3_busy & _evtWant_T_34 & _rspWait_3_T_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 227:45]
  wire  _rspWait_4_T_6 = entries_4_state == 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 228:16]
  wire  _rspWait_4_T_8 = entries_4_state == 2'h2 | _datStart_T_29; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 228:37]
  wire  rspWait_4 = entries_4_busy & _evtWant_T_43 & _rspWait_4_T_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 227:45]
  wire  _rspWait_5_T_6 = entries_5_state == 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 228:16]
  wire  _rspWait_5_T_8 = entries_5_state == 2'h2 | _datStart_T_36; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 228:37]
  wire  rspWait_5 = entries_5_busy & _evtWant_T_52 & _rspWait_5_T_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 227:45]
  wire  _rspWait_6_T_6 = entries_6_state == 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 228:16]
  wire  _rspWait_6_T_8 = entries_6_state == 2'h2 | _datStart_T_43; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 228:37]
  wire  rspWait_6 = entries_6_busy & _evtWant_T_61 & _rspWait_6_T_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 227:45]
  wire  _rspWait_7_T_6 = entries_7_state == 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 228:16]
  wire  _rspWait_7_T_8 = entries_7_state == 2'h2 | _datStart_T_50; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 228:37]
  wire  rspWait_7 = entries_7_busy & _evtWant_T_70 & _rspWait_7_T_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 227:45]
  wire  _rspWait_8_T_6 = entries_8_state == 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 228:16]
  wire  _rspWait_8_T_8 = entries_8_state == 2'h2 | _datStart_T_57; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 228:37]
  wire  rspWait_8 = entries_8_busy & _evtWant_T_79 & _rspWait_8_T_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 227:45]
  wire  _rspWait_9_T_6 = entries_9_state == 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 228:16]
  wire  _rspWait_9_T_8 = entries_9_state == 2'h2 | _datStart_T_64; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 228:37]
  wire  rspWait_9 = entries_9_busy & _evtWant_T_88 & _rspWait_9_T_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 227:45]
  wire  _rspWait_10_T_6 = entries_10_state == 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 228:16]
  wire  _rspWait_10_T_8 = entries_10_state == 2'h2 | _datStart_T_71; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 228:37]
  wire  rspWait_10 = entries_10_busy & _evtWant_T_97 & _rspWait_10_T_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 227:45]
  wire  _rspWait_11_T_6 = entries_11_state == 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 228:16]
  wire  _rspWait_11_T_8 = entries_11_state == 2'h2 | _datStart_T_78; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 228:37]
  wire  rspWait_11 = entries_11_busy & _evtWant_T_106 & _rspWait_11_T_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 227:45]
  wire  _rspWait_12_T_6 = entries_12_state == 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 228:16]
  wire  _rspWait_12_T_8 = entries_12_state == 2'h2 | _datStart_T_85; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 228:37]
  wire  rspWait_12 = entries_12_busy & _evtWant_T_115 & _rspWait_12_T_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 227:45]
  wire  _rspWait_13_T_6 = entries_13_state == 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 228:16]
  wire  _rspWait_13_T_8 = entries_13_state == 2'h2 | _datStart_T_92; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 228:37]
  wire  rspWait_13 = entries_13_busy & _evtWant_T_124 & _rspWait_13_T_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 227:45]
  wire  _rspWait_14_T_6 = entries_14_state == 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 228:16]
  wire  _rspWait_14_T_8 = entries_14_state == 2'h2 | _datStart_T_99; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 228:37]
  wire  rspWait_14 = entries_14_busy & _evtWant_T_133 & _rspWait_14_T_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 227:45]
  wire  _rspWait_15_T_6 = entries_15_state == 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 228:16]
  wire  _rspWait_15_T_8 = entries_15_state == 2'h2 | _datStart_T_106; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 228:37]
  wire  rspWait_15 = entries_15_busy & _evtWant_T_142 & _rspWait_15_T_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 227:45]
  wire  _rspWait_16_T_6 = entries_16_state == 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 228:16]
  wire  _rspWait_16_T_8 = entries_16_state == 2'h2 | _datStart_T_113; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 228:37]
  wire  rspWait_16 = entries_16_busy & _evtWant_T_151 & _rspWait_16_T_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 227:45]
  wire  _rspWait_17_T_6 = entries_17_state == 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 228:16]
  wire  _rspWait_17_T_8 = entries_17_state == 2'h2 | _datStart_T_120; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 228:37]
  wire  rspWait_17 = entries_17_busy & _evtWant_T_160 & _rspWait_17_T_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 227:45]
  wire  _GEN_373 = 5'h1 == rspEnt[4:0] ? rspWait_1 : rspWait_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 230:{30,30}]
  wire  _GEN_374 = 5'h2 == rspEnt[4:0] ? rspWait_2 : _GEN_373; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 230:{30,30}]
  wire  _GEN_375 = 5'h3 == rspEnt[4:0] ? rspWait_3 : _GEN_374; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 230:{30,30}]
  wire  _GEN_376 = 5'h4 == rspEnt[4:0] ? rspWait_4 : _GEN_375; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 230:{30,30}]
  wire  _GEN_377 = 5'h5 == rspEnt[4:0] ? rspWait_5 : _GEN_376; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 230:{30,30}]
  wire  _GEN_378 = 5'h6 == rspEnt[4:0] ? rspWait_6 : _GEN_377; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 230:{30,30}]
  wire  _GEN_379 = 5'h7 == rspEnt[4:0] ? rspWait_7 : _GEN_378; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 230:{30,30}]
  wire  _GEN_380 = 5'h8 == rspEnt[4:0] ? rspWait_8 : _GEN_379; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 230:{30,30}]
  wire  _GEN_381 = 5'h9 == rspEnt[4:0] ? rspWait_9 : _GEN_380; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 230:{30,30}]
  wire  _GEN_382 = 5'ha == rspEnt[4:0] ? rspWait_10 : _GEN_381; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 230:{30,30}]
  wire  _GEN_383 = 5'hb == rspEnt[4:0] ? rspWait_11 : _GEN_382; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 230:{30,30}]
  wire  _GEN_384 = 5'hc == rspEnt[4:0] ? rspWait_12 : _GEN_383; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 230:{30,30}]
  wire  _GEN_385 = 5'hd == rspEnt[4:0] ? rspWait_13 : _GEN_384; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 230:{30,30}]
  wire  _GEN_386 = 5'he == rspEnt[4:0] ? rspWait_14 : _GEN_385; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 230:{30,30}]
  wire  _GEN_387 = 5'hf == rspEnt[4:0] ? rspWait_15 : _GEN_386; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 230:{30,30}]
  wire  _GEN_388 = 5'h10 == rspEnt[4:0] ? rspWait_16 : _GEN_387; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 230:{30,30}]
  wire  _GEN_389 = 5'h11 == rspEnt[4:0] ? rspWait_17 : _GEN_388; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 230:{30,30}]
  wire  rspExpect = rspInRange & _GEN_389; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 230:30]
  wire  _doAlloc_T = io_req_ready & io_req_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 57:35]
  wire  doAlloc = _doAlloc_T & allocId == 5'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 236:31]
  wire  _rspHit_T = io_rxRsp_ready & io_rxRsp_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 57:35]
  wire  rspHit = _rspHit_T & rspEnt == 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 237:32]
  wire  evtFire = _T & evtIdx == 5'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 238:33]
  wire  rspFire = _T_1 & rspIdx == 5'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 239:33]
  wire  datFire = _T_2 & datIdx == 5'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 240:33]
  wire  _isComp_T = io_rxRsp_bits_opcode == 3'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 242:29]
  wire  _isComp_T_1 = io_rxRsp_bits_opcode == 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 243:18]
  wire  isComp = io_rxRsp_bits_opcode == 3'h1 | _isComp_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 242:59]
  wire  _isDbid_T = io_rxRsp_bits_opcode == 3'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 244:29]
  wire  isDbid = io_rxRsp_bits_opcode == 3'h2 | _isComp_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 244:63]
  wire [1:0] _beatsNext_T_1 = _legalOp_T_5 ? 2'h2 : 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 277:23]
  wire [1:0] _stateNext_T_1 = _legalOp_T_5 ? 2'h3 : 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 278:23]
  wire  _GEN_390 = doAlloc ? 1'h0 : entries_0_compGot; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 258:14 269:19 270:16]
  wire  _GEN_391 = doAlloc ? 1'h0 : entries_0_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 259:19 269:19 271:21]
  wire  _GEN_393 = doAlloc ? 1'h0 : entries_0_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 261:18 269:19 273:20]
  wire  _GEN_394 = doAlloc ? 1'h0 : entries_0_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 262:17 269:19 274:19]
  wire [1:0] _GEN_398 = doAlloc ? _stateNext_T_1 : entries_0_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 266:15 269:19 278:17]
  wire  compNext = rspHit & isComp | _GEN_390; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 280:{28,39}]
  wire  _T_7 = ~entries_0_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:30]
  wire  dbidValidNext = rspHit & isDbid & ~entries_0_dbidValid | _GEN_391; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:44 283:21]
  wire  rspSeenNext = rspHit & ~entries_0_rspSeen | _GEN_394; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32 286:19]
  wire  _T_11 = entries_0_beatsLeft == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 290:33]
  wire  dataSentNext = datFire & entries_0_beatsLeft == 2'h1 | _GEN_393; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 290:{42,57}]
  wire [1:0] _beatsNext_T_3 = entries_0_beatsLeft - 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:56]
  wire  _entering_T = entries_0_busy & _evtWant_T_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 293:27]
  wire  _entering_T_3 = entries_0_busy & _evtWant_T_6 & _rspWait_0_T_6 & dbidValidNext; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 293:71]
  wire  entering = _entering_T_3 & _datStart_T_5 & entries_0_beatsLeft == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 294:36]
  wire [1:0] _GEN_407 = entering ? 2'h3 : _GEN_398; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 295:20 296:17]
  wire  _freeNow_T_6 = _evtWant_T_6 & dataSentNext & compNext; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 306:35]
  wire  _freeNow_T_7 = _evtWant_T_3 & _rspWait_0_T_6 & rspHit & isComp | _freeNow_T_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 305:89]
  wire  _freeNow_T_9 = _rspWant_T_3 & rspFire; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 307:40]
  wire  _freeNow_T_10 = _freeNow_T_7 | _freeNow_T_9; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 306:48]
  wire  _freeNow_T_14 = entries_0_opcode == 3'h4 & datFire & _T_11; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 308:55]
  wire  _freeNow_T_15 = _freeNow_T_10 | _freeNow_T_14; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 307:52]
  wire  freeNow = entries_0_busy & _freeNow_T_15; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 304:26]
  wire  _GEN_411 = freeNow ? 1'h0 : entries_0_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 267:14 309:19 310:16]
  wire  busyNext = doAlloc | _GEN_411; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 313:{19,30}]
  wire  _T_22 = _isComp_T | _isDbid_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:55]
  wire  _T_24 = _T_22 | _isComp_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 339:54]
  wire  _T_26 = ~reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
  wire [1:0] _T_47 = rspFire + datFire; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [1:0] _GEN_1020 = {{1'd0}, evtFire}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [2:0] _T_49 = _GEN_1020 + _T_47; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire  doAlloc_1 = _doAlloc_T & allocId == 5'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 236:31]
  wire  rspHit_1 = _rspHit_T & rspEnt == 8'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 237:32]
  wire  evtFire_1 = _T & evtIdx == 5'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 238:33]
  wire  rspFire_1 = _T_1 & rspIdx == 5'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 239:33]
  wire  datFire_1 = _T_2 & datIdx == 5'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 240:33]
  wire  _GEN_421 = doAlloc_1 ? 1'h0 : entries_1_compGot; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 258:14 269:19 270:16]
  wire  _GEN_422 = doAlloc_1 ? 1'h0 : entries_1_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 259:19 269:19 271:21]
  wire  _GEN_424 = doAlloc_1 ? 1'h0 : entries_1_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 261:18 269:19 273:20]
  wire  _GEN_425 = doAlloc_1 ? 1'h0 : entries_1_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 262:17 269:19 274:19]
  wire [1:0] _GEN_429 = doAlloc_1 ? _stateNext_T_1 : entries_1_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 266:15 269:19 278:17]
  wire  compNext_1 = rspHit_1 & isComp | _GEN_421; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 280:{28,39}]
  wire  _T_57 = ~entries_1_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:30]
  wire  dbidValidNext_1 = rspHit_1 & isDbid & ~entries_1_dbidValid | _GEN_422; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:44 283:21]
  wire  rspSeenNext_1 = rspHit_1 & ~entries_1_rspSeen | _GEN_425; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32 286:19]
  wire  _T_61 = entries_1_beatsLeft == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 290:33]
  wire  dataSentNext_1 = datFire_1 & entries_1_beatsLeft == 2'h1 | _GEN_424; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 290:{42,57}]
  wire [1:0] _beatsNext_T_7 = entries_1_beatsLeft - 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:56]
  wire  _entering_T_7 = entries_1_busy & _evtWant_T_15; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 293:27]
  wire  _entering_T_10 = entries_1_busy & _evtWant_T_15 & _rspWait_1_T_6 & dbidValidNext_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 293:71]
  wire  entering_1 = _entering_T_10 & _datStart_T_12 & entries_1_beatsLeft == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 294:36]
  wire [1:0] _GEN_438 = entering_1 ? 2'h3 : _GEN_429; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 295:20 296:17]
  wire  _freeNow_T_22 = _evtWant_T_15 & dataSentNext_1 & compNext_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 306:35]
  wire  _freeNow_T_23 = _evtWant_T_12 & _rspWait_1_T_6 & rspHit_1 & isComp | _freeNow_T_22; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 305:89]
  wire  _freeNow_T_25 = _rspWant_T_8 & rspFire_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 307:40]
  wire  _freeNow_T_26 = _freeNow_T_23 | _freeNow_T_25; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 306:48]
  wire  _freeNow_T_30 = entries_1_opcode == 3'h4 & datFire_1 & _T_61; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 308:55]
  wire  _freeNow_T_31 = _freeNow_T_26 | _freeNow_T_30; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 307:52]
  wire  freeNow_1 = entries_1_busy & _freeNow_T_31; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 304:26]
  wire  _GEN_442 = freeNow_1 ? 1'h0 : entries_1_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 267:14 309:19 310:16]
  wire  busyNext_1 = doAlloc_1 | _GEN_442; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 313:{19,30}]
  wire [1:0] _T_97 = rspFire_1 + datFire_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [1:0] _GEN_1021 = {{1'd0}, evtFire_1}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [2:0] _T_99 = _GEN_1021 + _T_97; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire  doAlloc_2 = _doAlloc_T & allocId == 5'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 236:31]
  wire  rspHit_2 = _rspHit_T & rspEnt == 8'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 237:32]
  wire  evtFire_2 = _T & evtIdx == 5'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 238:33]
  wire  rspFire_2 = _T_1 & rspIdx == 5'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 239:33]
  wire  datFire_2 = _T_2 & datIdx == 5'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 240:33]
  wire  _GEN_452 = doAlloc_2 ? 1'h0 : entries_2_compGot; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 258:14 269:19 270:16]
  wire  _GEN_453 = doAlloc_2 ? 1'h0 : entries_2_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 259:19 269:19 271:21]
  wire  _GEN_455 = doAlloc_2 ? 1'h0 : entries_2_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 261:18 269:19 273:20]
  wire  _GEN_456 = doAlloc_2 ? 1'h0 : entries_2_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 262:17 269:19 274:19]
  wire [1:0] _GEN_460 = doAlloc_2 ? _stateNext_T_1 : entries_2_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 266:15 269:19 278:17]
  wire  compNext_2 = rspHit_2 & isComp | _GEN_452; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 280:{28,39}]
  wire  _T_107 = ~entries_2_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:30]
  wire  dbidValidNext_2 = rspHit_2 & isDbid & ~entries_2_dbidValid | _GEN_453; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:44 283:21]
  wire  rspSeenNext_2 = rspHit_2 & ~entries_2_rspSeen | _GEN_456; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32 286:19]
  wire  _T_111 = entries_2_beatsLeft == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 290:33]
  wire  dataSentNext_2 = datFire_2 & entries_2_beatsLeft == 2'h1 | _GEN_455; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 290:{42,57}]
  wire [1:0] _beatsNext_T_11 = entries_2_beatsLeft - 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:56]
  wire  _entering_T_14 = entries_2_busy & _evtWant_T_24; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 293:27]
  wire  _entering_T_17 = entries_2_busy & _evtWant_T_24 & _rspWait_2_T_6 & dbidValidNext_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 293:71]
  wire  entering_2 = _entering_T_17 & _datStart_T_19 & entries_2_beatsLeft == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 294:36]
  wire [1:0] _GEN_469 = entering_2 ? 2'h3 : _GEN_460; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 295:20 296:17]
  wire  _freeNow_T_38 = _evtWant_T_24 & dataSentNext_2 & compNext_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 306:35]
  wire  _freeNow_T_39 = _evtWant_T_21 & _rspWait_2_T_6 & rspHit_2 & isComp | _freeNow_T_38; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 305:89]
  wire  _freeNow_T_41 = _rspWant_T_13 & rspFire_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 307:40]
  wire  _freeNow_T_42 = _freeNow_T_39 | _freeNow_T_41; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 306:48]
  wire  _freeNow_T_46 = entries_2_opcode == 3'h4 & datFire_2 & _T_111; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 308:55]
  wire  _freeNow_T_47 = _freeNow_T_42 | _freeNow_T_46; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 307:52]
  wire  freeNow_2 = entries_2_busy & _freeNow_T_47; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 304:26]
  wire  _GEN_473 = freeNow_2 ? 1'h0 : entries_2_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 267:14 309:19 310:16]
  wire  busyNext_2 = doAlloc_2 | _GEN_473; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 313:{19,30}]
  wire [1:0] _T_147 = rspFire_2 + datFire_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [1:0] _GEN_1022 = {{1'd0}, evtFire_2}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [2:0] _T_149 = _GEN_1022 + _T_147; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire  doAlloc_3 = _doAlloc_T & allocId == 5'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 236:31]
  wire  rspHit_3 = _rspHit_T & rspEnt == 8'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 237:32]
  wire  evtFire_3 = _T & evtIdx == 5'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 238:33]
  wire  rspFire_3 = _T_1 & rspIdx == 5'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 239:33]
  wire  datFire_3 = _T_2 & datIdx == 5'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 240:33]
  wire  _GEN_483 = doAlloc_3 ? 1'h0 : entries_3_compGot; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 258:14 269:19 270:16]
  wire  _GEN_484 = doAlloc_3 ? 1'h0 : entries_3_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 259:19 269:19 271:21]
  wire  _GEN_486 = doAlloc_3 ? 1'h0 : entries_3_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 261:18 269:19 273:20]
  wire  _GEN_487 = doAlloc_3 ? 1'h0 : entries_3_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 262:17 269:19 274:19]
  wire [1:0] _GEN_491 = doAlloc_3 ? _stateNext_T_1 : entries_3_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 266:15 269:19 278:17]
  wire  compNext_3 = rspHit_3 & isComp | _GEN_483; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 280:{28,39}]
  wire  _T_157 = ~entries_3_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:30]
  wire  dbidValidNext_3 = rspHit_3 & isDbid & ~entries_3_dbidValid | _GEN_484; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:44 283:21]
  wire  rspSeenNext_3 = rspHit_3 & ~entries_3_rspSeen | _GEN_487; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32 286:19]
  wire  _T_161 = entries_3_beatsLeft == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 290:33]
  wire  dataSentNext_3 = datFire_3 & entries_3_beatsLeft == 2'h1 | _GEN_486; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 290:{42,57}]
  wire [1:0] _beatsNext_T_15 = entries_3_beatsLeft - 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:56]
  wire  _entering_T_21 = entries_3_busy & _evtWant_T_33; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 293:27]
  wire  _entering_T_24 = entries_3_busy & _evtWant_T_33 & _rspWait_3_T_6 & dbidValidNext_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 293:71]
  wire  entering_3 = _entering_T_24 & _datStart_T_26 & entries_3_beatsLeft == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 294:36]
  wire [1:0] _GEN_500 = entering_3 ? 2'h3 : _GEN_491; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 295:20 296:17]
  wire  _freeNow_T_54 = _evtWant_T_33 & dataSentNext_3 & compNext_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 306:35]
  wire  _freeNow_T_55 = _evtWant_T_30 & _rspWait_3_T_6 & rspHit_3 & isComp | _freeNow_T_54; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 305:89]
  wire  _freeNow_T_57 = _rspWant_T_18 & rspFire_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 307:40]
  wire  _freeNow_T_58 = _freeNow_T_55 | _freeNow_T_57; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 306:48]
  wire  _freeNow_T_62 = entries_3_opcode == 3'h4 & datFire_3 & _T_161; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 308:55]
  wire  _freeNow_T_63 = _freeNow_T_58 | _freeNow_T_62; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 307:52]
  wire  freeNow_3 = entries_3_busy & _freeNow_T_63; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 304:26]
  wire  _GEN_504 = freeNow_3 ? 1'h0 : entries_3_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 267:14 309:19 310:16]
  wire  busyNext_3 = doAlloc_3 | _GEN_504; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 313:{19,30}]
  wire [1:0] _T_197 = rspFire_3 + datFire_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [1:0] _GEN_1023 = {{1'd0}, evtFire_3}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [2:0] _T_199 = _GEN_1023 + _T_197; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire  doAlloc_4 = _doAlloc_T & allocId == 5'h4; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 236:31]
  wire  rspHit_4 = _rspHit_T & rspEnt == 8'h4; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 237:32]
  wire  evtFire_4 = _T & evtIdx == 5'h4; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 238:33]
  wire  rspFire_4 = _T_1 & rspIdx == 5'h4; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 239:33]
  wire  datFire_4 = _T_2 & datIdx == 5'h4; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 240:33]
  wire  _GEN_514 = doAlloc_4 ? 1'h0 : entries_4_compGot; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 258:14 269:19 270:16]
  wire  _GEN_515 = doAlloc_4 ? 1'h0 : entries_4_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 259:19 269:19 271:21]
  wire  _GEN_517 = doAlloc_4 ? 1'h0 : entries_4_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 261:18 269:19 273:20]
  wire  _GEN_518 = doAlloc_4 ? 1'h0 : entries_4_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 262:17 269:19 274:19]
  wire [1:0] _GEN_522 = doAlloc_4 ? _stateNext_T_1 : entries_4_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 266:15 269:19 278:17]
  wire  compNext_4 = rspHit_4 & isComp | _GEN_514; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 280:{28,39}]
  wire  _T_207 = ~entries_4_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:30]
  wire  dbidValidNext_4 = rspHit_4 & isDbid & ~entries_4_dbidValid | _GEN_515; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:44 283:21]
  wire  rspSeenNext_4 = rspHit_4 & ~entries_4_rspSeen | _GEN_518; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32 286:19]
  wire  _T_211 = entries_4_beatsLeft == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 290:33]
  wire  dataSentNext_4 = datFire_4 & entries_4_beatsLeft == 2'h1 | _GEN_517; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 290:{42,57}]
  wire [1:0] _beatsNext_T_19 = entries_4_beatsLeft - 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:56]
  wire  _entering_T_28 = entries_4_busy & _evtWant_T_42; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 293:27]
  wire  _entering_T_31 = entries_4_busy & _evtWant_T_42 & _rspWait_4_T_6 & dbidValidNext_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 293:71]
  wire  entering_4 = _entering_T_31 & _datStart_T_33 & entries_4_beatsLeft == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 294:36]
  wire [1:0] _GEN_531 = entering_4 ? 2'h3 : _GEN_522; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 295:20 296:17]
  wire  _freeNow_T_70 = _evtWant_T_42 & dataSentNext_4 & compNext_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 306:35]
  wire  _freeNow_T_71 = _evtWant_T_39 & _rspWait_4_T_6 & rspHit_4 & isComp | _freeNow_T_70; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 305:89]
  wire  _freeNow_T_73 = _rspWant_T_23 & rspFire_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 307:40]
  wire  _freeNow_T_74 = _freeNow_T_71 | _freeNow_T_73; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 306:48]
  wire  _freeNow_T_78 = entries_4_opcode == 3'h4 & datFire_4 & _T_211; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 308:55]
  wire  _freeNow_T_79 = _freeNow_T_74 | _freeNow_T_78; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 307:52]
  wire  freeNow_4 = entries_4_busy & _freeNow_T_79; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 304:26]
  wire  _GEN_535 = freeNow_4 ? 1'h0 : entries_4_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 267:14 309:19 310:16]
  wire  busyNext_4 = doAlloc_4 | _GEN_535; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 313:{19,30}]
  wire [1:0] _T_247 = rspFire_4 + datFire_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [1:0] _GEN_1024 = {{1'd0}, evtFire_4}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [2:0] _T_249 = _GEN_1024 + _T_247; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire  doAlloc_5 = _doAlloc_T & allocId == 5'h5; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 236:31]
  wire  rspHit_5 = _rspHit_T & rspEnt == 8'h5; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 237:32]
  wire  evtFire_5 = _T & evtIdx == 5'h5; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 238:33]
  wire  rspFire_5 = _T_1 & rspIdx == 5'h5; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 239:33]
  wire  datFire_5 = _T_2 & datIdx == 5'h5; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 240:33]
  wire  _GEN_545 = doAlloc_5 ? 1'h0 : entries_5_compGot; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 258:14 269:19 270:16]
  wire  _GEN_546 = doAlloc_5 ? 1'h0 : entries_5_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 259:19 269:19 271:21]
  wire  _GEN_548 = doAlloc_5 ? 1'h0 : entries_5_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 261:18 269:19 273:20]
  wire  _GEN_549 = doAlloc_5 ? 1'h0 : entries_5_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 262:17 269:19 274:19]
  wire [1:0] _GEN_553 = doAlloc_5 ? _stateNext_T_1 : entries_5_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 266:15 269:19 278:17]
  wire  compNext_5 = rspHit_5 & isComp | _GEN_545; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 280:{28,39}]
  wire  _T_257 = ~entries_5_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:30]
  wire  dbidValidNext_5 = rspHit_5 & isDbid & ~entries_5_dbidValid | _GEN_546; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:44 283:21]
  wire  rspSeenNext_5 = rspHit_5 & ~entries_5_rspSeen | _GEN_549; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32 286:19]
  wire  _T_261 = entries_5_beatsLeft == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 290:33]
  wire  dataSentNext_5 = datFire_5 & entries_5_beatsLeft == 2'h1 | _GEN_548; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 290:{42,57}]
  wire [1:0] _beatsNext_T_23 = entries_5_beatsLeft - 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:56]
  wire  _entering_T_35 = entries_5_busy & _evtWant_T_51; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 293:27]
  wire  _entering_T_38 = entries_5_busy & _evtWant_T_51 & _rspWait_5_T_6 & dbidValidNext_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 293:71]
  wire  entering_5 = _entering_T_38 & _datStart_T_40 & entries_5_beatsLeft == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 294:36]
  wire [1:0] _GEN_562 = entering_5 ? 2'h3 : _GEN_553; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 295:20 296:17]
  wire  _freeNow_T_86 = _evtWant_T_51 & dataSentNext_5 & compNext_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 306:35]
  wire  _freeNow_T_87 = _evtWant_T_48 & _rspWait_5_T_6 & rspHit_5 & isComp | _freeNow_T_86; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 305:89]
  wire  _freeNow_T_89 = _rspWant_T_28 & rspFire_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 307:40]
  wire  _freeNow_T_90 = _freeNow_T_87 | _freeNow_T_89; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 306:48]
  wire  _freeNow_T_94 = entries_5_opcode == 3'h4 & datFire_5 & _T_261; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 308:55]
  wire  _freeNow_T_95 = _freeNow_T_90 | _freeNow_T_94; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 307:52]
  wire  freeNow_5 = entries_5_busy & _freeNow_T_95; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 304:26]
  wire  _GEN_566 = freeNow_5 ? 1'h0 : entries_5_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 267:14 309:19 310:16]
  wire  busyNext_5 = doAlloc_5 | _GEN_566; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 313:{19,30}]
  wire [1:0] _T_297 = rspFire_5 + datFire_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [1:0] _GEN_1025 = {{1'd0}, evtFire_5}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [2:0] _T_299 = _GEN_1025 + _T_297; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire  doAlloc_6 = _doAlloc_T & allocId == 5'h6; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 236:31]
  wire  rspHit_6 = _rspHit_T & rspEnt == 8'h6; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 237:32]
  wire  evtFire_6 = _T & evtIdx == 5'h6; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 238:33]
  wire  rspFire_6 = _T_1 & rspIdx == 5'h6; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 239:33]
  wire  datFire_6 = _T_2 & datIdx == 5'h6; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 240:33]
  wire  _GEN_576 = doAlloc_6 ? 1'h0 : entries_6_compGot; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 258:14 269:19 270:16]
  wire  _GEN_577 = doAlloc_6 ? 1'h0 : entries_6_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 259:19 269:19 271:21]
  wire  _GEN_579 = doAlloc_6 ? 1'h0 : entries_6_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 261:18 269:19 273:20]
  wire  _GEN_580 = doAlloc_6 ? 1'h0 : entries_6_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 262:17 269:19 274:19]
  wire [1:0] _GEN_584 = doAlloc_6 ? _stateNext_T_1 : entries_6_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 266:15 269:19 278:17]
  wire  compNext_6 = rspHit_6 & isComp | _GEN_576; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 280:{28,39}]
  wire  _T_307 = ~entries_6_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:30]
  wire  dbidValidNext_6 = rspHit_6 & isDbid & ~entries_6_dbidValid | _GEN_577; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:44 283:21]
  wire  rspSeenNext_6 = rspHit_6 & ~entries_6_rspSeen | _GEN_580; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32 286:19]
  wire  _T_311 = entries_6_beatsLeft == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 290:33]
  wire  dataSentNext_6 = datFire_6 & entries_6_beatsLeft == 2'h1 | _GEN_579; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 290:{42,57}]
  wire [1:0] _beatsNext_T_27 = entries_6_beatsLeft - 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:56]
  wire  _entering_T_42 = entries_6_busy & _evtWant_T_60; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 293:27]
  wire  _entering_T_45 = entries_6_busy & _evtWant_T_60 & _rspWait_6_T_6 & dbidValidNext_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 293:71]
  wire  entering_6 = _entering_T_45 & _datStart_T_47 & entries_6_beatsLeft == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 294:36]
  wire [1:0] _GEN_593 = entering_6 ? 2'h3 : _GEN_584; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 295:20 296:17]
  wire  _freeNow_T_102 = _evtWant_T_60 & dataSentNext_6 & compNext_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 306:35]
  wire  _freeNow_T_103 = _evtWant_T_57 & _rspWait_6_T_6 & rspHit_6 & isComp | _freeNow_T_102; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 305:89]
  wire  _freeNow_T_105 = _rspWant_T_33 & rspFire_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 307:40]
  wire  _freeNow_T_106 = _freeNow_T_103 | _freeNow_T_105; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 306:48]
  wire  _freeNow_T_110 = entries_6_opcode == 3'h4 & datFire_6 & _T_311; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 308:55]
  wire  _freeNow_T_111 = _freeNow_T_106 | _freeNow_T_110; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 307:52]
  wire  freeNow_6 = entries_6_busy & _freeNow_T_111; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 304:26]
  wire  _GEN_597 = freeNow_6 ? 1'h0 : entries_6_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 267:14 309:19 310:16]
  wire  busyNext_6 = doAlloc_6 | _GEN_597; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 313:{19,30}]
  wire [1:0] _T_347 = rspFire_6 + datFire_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [1:0] _GEN_1026 = {{1'd0}, evtFire_6}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [2:0] _T_349 = _GEN_1026 + _T_347; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire  doAlloc_7 = _doAlloc_T & allocId == 5'h7; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 236:31]
  wire  rspHit_7 = _rspHit_T & rspEnt == 8'h7; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 237:32]
  wire  evtFire_7 = _T & evtIdx == 5'h7; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 238:33]
  wire  rspFire_7 = _T_1 & rspIdx == 5'h7; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 239:33]
  wire  datFire_7 = _T_2 & datIdx == 5'h7; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 240:33]
  wire  _GEN_607 = doAlloc_7 ? 1'h0 : entries_7_compGot; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 258:14 269:19 270:16]
  wire  _GEN_608 = doAlloc_7 ? 1'h0 : entries_7_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 259:19 269:19 271:21]
  wire  _GEN_610 = doAlloc_7 ? 1'h0 : entries_7_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 261:18 269:19 273:20]
  wire  _GEN_611 = doAlloc_7 ? 1'h0 : entries_7_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 262:17 269:19 274:19]
  wire [1:0] _GEN_615 = doAlloc_7 ? _stateNext_T_1 : entries_7_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 266:15 269:19 278:17]
  wire  compNext_7 = rspHit_7 & isComp | _GEN_607; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 280:{28,39}]
  wire  _T_357 = ~entries_7_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:30]
  wire  dbidValidNext_7 = rspHit_7 & isDbid & ~entries_7_dbidValid | _GEN_608; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:44 283:21]
  wire  rspSeenNext_7 = rspHit_7 & ~entries_7_rspSeen | _GEN_611; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32 286:19]
  wire  _T_361 = entries_7_beatsLeft == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 290:33]
  wire  dataSentNext_7 = datFire_7 & entries_7_beatsLeft == 2'h1 | _GEN_610; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 290:{42,57}]
  wire [1:0] _beatsNext_T_31 = entries_7_beatsLeft - 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:56]
  wire  _entering_T_49 = entries_7_busy & _evtWant_T_69; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 293:27]
  wire  _entering_T_52 = entries_7_busy & _evtWant_T_69 & _rspWait_7_T_6 & dbidValidNext_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 293:71]
  wire  entering_7 = _entering_T_52 & _datStart_T_54 & entries_7_beatsLeft == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 294:36]
  wire [1:0] _GEN_624 = entering_7 ? 2'h3 : _GEN_615; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 295:20 296:17]
  wire  _freeNow_T_118 = _evtWant_T_69 & dataSentNext_7 & compNext_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 306:35]
  wire  _freeNow_T_119 = _evtWant_T_66 & _rspWait_7_T_6 & rspHit_7 & isComp | _freeNow_T_118; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 305:89]
  wire  _freeNow_T_121 = _rspWant_T_38 & rspFire_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 307:40]
  wire  _freeNow_T_122 = _freeNow_T_119 | _freeNow_T_121; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 306:48]
  wire  _freeNow_T_126 = entries_7_opcode == 3'h4 & datFire_7 & _T_361; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 308:55]
  wire  _freeNow_T_127 = _freeNow_T_122 | _freeNow_T_126; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 307:52]
  wire  freeNow_7 = entries_7_busy & _freeNow_T_127; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 304:26]
  wire  _GEN_628 = freeNow_7 ? 1'h0 : entries_7_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 267:14 309:19 310:16]
  wire  busyNext_7 = doAlloc_7 | _GEN_628; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 313:{19,30}]
  wire [1:0] _T_397 = rspFire_7 + datFire_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [1:0] _GEN_1027 = {{1'd0}, evtFire_7}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [2:0] _T_399 = _GEN_1027 + _T_397; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire  doAlloc_8 = _doAlloc_T & allocId == 5'h8; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 236:31]
  wire  rspHit_8 = _rspHit_T & rspEnt == 8'h8; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 237:32]
  wire  evtFire_8 = _T & evtIdx == 5'h8; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 238:33]
  wire  rspFire_8 = _T_1 & rspIdx == 5'h8; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 239:33]
  wire  datFire_8 = _T_2 & datIdx == 5'h8; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 240:33]
  wire  _GEN_638 = doAlloc_8 ? 1'h0 : entries_8_compGot; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 258:14 269:19 270:16]
  wire  _GEN_639 = doAlloc_8 ? 1'h0 : entries_8_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 259:19 269:19 271:21]
  wire  _GEN_641 = doAlloc_8 ? 1'h0 : entries_8_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 261:18 269:19 273:20]
  wire  _GEN_642 = doAlloc_8 ? 1'h0 : entries_8_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 262:17 269:19 274:19]
  wire [1:0] _GEN_646 = doAlloc_8 ? _stateNext_T_1 : entries_8_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 266:15 269:19 278:17]
  wire  compNext_8 = rspHit_8 & isComp | _GEN_638; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 280:{28,39}]
  wire  _T_407 = ~entries_8_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:30]
  wire  dbidValidNext_8 = rspHit_8 & isDbid & ~entries_8_dbidValid | _GEN_639; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:44 283:21]
  wire  rspSeenNext_8 = rspHit_8 & ~entries_8_rspSeen | _GEN_642; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32 286:19]
  wire  _T_411 = entries_8_beatsLeft == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 290:33]
  wire  dataSentNext_8 = datFire_8 & entries_8_beatsLeft == 2'h1 | _GEN_641; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 290:{42,57}]
  wire [1:0] _beatsNext_T_35 = entries_8_beatsLeft - 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:56]
  wire  _entering_T_56 = entries_8_busy & _evtWant_T_78; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 293:27]
  wire  _entering_T_59 = entries_8_busy & _evtWant_T_78 & _rspWait_8_T_6 & dbidValidNext_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 293:71]
  wire  entering_8 = _entering_T_59 & _datStart_T_61 & entries_8_beatsLeft == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 294:36]
  wire [1:0] _GEN_655 = entering_8 ? 2'h3 : _GEN_646; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 295:20 296:17]
  wire  _freeNow_T_134 = _evtWant_T_78 & dataSentNext_8 & compNext_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 306:35]
  wire  _freeNow_T_135 = _evtWant_T_75 & _rspWait_8_T_6 & rspHit_8 & isComp | _freeNow_T_134; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 305:89]
  wire  _freeNow_T_137 = _rspWant_T_43 & rspFire_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 307:40]
  wire  _freeNow_T_138 = _freeNow_T_135 | _freeNow_T_137; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 306:48]
  wire  _freeNow_T_142 = entries_8_opcode == 3'h4 & datFire_8 & _T_411; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 308:55]
  wire  _freeNow_T_143 = _freeNow_T_138 | _freeNow_T_142; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 307:52]
  wire  freeNow_8 = entries_8_busy & _freeNow_T_143; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 304:26]
  wire  _GEN_659 = freeNow_8 ? 1'h0 : entries_8_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 267:14 309:19 310:16]
  wire  busyNext_8 = doAlloc_8 | _GEN_659; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 313:{19,30}]
  wire [1:0] _T_447 = rspFire_8 + datFire_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [1:0] _GEN_1028 = {{1'd0}, evtFire_8}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [2:0] _T_449 = _GEN_1028 + _T_447; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire  doAlloc_9 = _doAlloc_T & allocId == 5'h9; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 236:31]
  wire  rspHit_9 = _rspHit_T & rspEnt == 8'h9; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 237:32]
  wire  evtFire_9 = _T & evtIdx == 5'h9; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 238:33]
  wire  rspFire_9 = _T_1 & rspIdx == 5'h9; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 239:33]
  wire  datFire_9 = _T_2 & datIdx == 5'h9; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 240:33]
  wire  _GEN_669 = doAlloc_9 ? 1'h0 : entries_9_compGot; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 258:14 269:19 270:16]
  wire  _GEN_670 = doAlloc_9 ? 1'h0 : entries_9_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 259:19 269:19 271:21]
  wire  _GEN_672 = doAlloc_9 ? 1'h0 : entries_9_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 261:18 269:19 273:20]
  wire  _GEN_673 = doAlloc_9 ? 1'h0 : entries_9_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 262:17 269:19 274:19]
  wire [1:0] _GEN_677 = doAlloc_9 ? _stateNext_T_1 : entries_9_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 266:15 269:19 278:17]
  wire  compNext_9 = rspHit_9 & isComp | _GEN_669; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 280:{28,39}]
  wire  _T_457 = ~entries_9_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:30]
  wire  dbidValidNext_9 = rspHit_9 & isDbid & ~entries_9_dbidValid | _GEN_670; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:44 283:21]
  wire  rspSeenNext_9 = rspHit_9 & ~entries_9_rspSeen | _GEN_673; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32 286:19]
  wire  _T_461 = entries_9_beatsLeft == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 290:33]
  wire  dataSentNext_9 = datFire_9 & entries_9_beatsLeft == 2'h1 | _GEN_672; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 290:{42,57}]
  wire [1:0] _beatsNext_T_39 = entries_9_beatsLeft - 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:56]
  wire  _entering_T_63 = entries_9_busy & _evtWant_T_87; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 293:27]
  wire  _entering_T_66 = entries_9_busy & _evtWant_T_87 & _rspWait_9_T_6 & dbidValidNext_9; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 293:71]
  wire  entering_9 = _entering_T_66 & _datStart_T_68 & entries_9_beatsLeft == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 294:36]
  wire [1:0] _GEN_686 = entering_9 ? 2'h3 : _GEN_677; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 295:20 296:17]
  wire  _freeNow_T_150 = _evtWant_T_87 & dataSentNext_9 & compNext_9; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 306:35]
  wire  _freeNow_T_151 = _evtWant_T_84 & _rspWait_9_T_6 & rspHit_9 & isComp | _freeNow_T_150; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 305:89]
  wire  _freeNow_T_153 = _rspWant_T_48 & rspFire_9; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 307:40]
  wire  _freeNow_T_154 = _freeNow_T_151 | _freeNow_T_153; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 306:48]
  wire  _freeNow_T_158 = entries_9_opcode == 3'h4 & datFire_9 & _T_461; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 308:55]
  wire  _freeNow_T_159 = _freeNow_T_154 | _freeNow_T_158; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 307:52]
  wire  freeNow_9 = entries_9_busy & _freeNow_T_159; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 304:26]
  wire  _GEN_690 = freeNow_9 ? 1'h0 : entries_9_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 267:14 309:19 310:16]
  wire  busyNext_9 = doAlloc_9 | _GEN_690; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 313:{19,30}]
  wire [1:0] _T_497 = rspFire_9 + datFire_9; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [1:0] _GEN_1029 = {{1'd0}, evtFire_9}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [2:0] _T_499 = _GEN_1029 + _T_497; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire  doAlloc_10 = _doAlloc_T & allocId == 5'ha; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 236:31]
  wire  rspHit_10 = _rspHit_T & rspEnt == 8'ha; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 237:32]
  wire  evtFire_10 = _T & evtIdx == 5'ha; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 238:33]
  wire  rspFire_10 = _T_1 & rspIdx == 5'ha; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 239:33]
  wire  datFire_10 = _T_2 & datIdx == 5'ha; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 240:33]
  wire  _GEN_700 = doAlloc_10 ? 1'h0 : entries_10_compGot; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 258:14 269:19 270:16]
  wire  _GEN_701 = doAlloc_10 ? 1'h0 : entries_10_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 259:19 269:19 271:21]
  wire  _GEN_703 = doAlloc_10 ? 1'h0 : entries_10_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 261:18 269:19 273:20]
  wire  _GEN_704 = doAlloc_10 ? 1'h0 : entries_10_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 262:17 269:19 274:19]
  wire [1:0] _GEN_708 = doAlloc_10 ? _stateNext_T_1 : entries_10_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 266:15 269:19 278:17]
  wire  compNext_10 = rspHit_10 & isComp | _GEN_700; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 280:{28,39}]
  wire  _T_507 = ~entries_10_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:30]
  wire  dbidValidNext_10 = rspHit_10 & isDbid & ~entries_10_dbidValid | _GEN_701; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:44 283:21]
  wire  rspSeenNext_10 = rspHit_10 & ~entries_10_rspSeen | _GEN_704; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32 286:19]
  wire  _T_511 = entries_10_beatsLeft == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 290:33]
  wire  dataSentNext_10 = datFire_10 & entries_10_beatsLeft == 2'h1 | _GEN_703; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 290:{42,57}]
  wire [1:0] _beatsNext_T_43 = entries_10_beatsLeft - 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:56]
  wire  _entering_T_70 = entries_10_busy & _evtWant_T_96; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 293:27]
  wire  _entering_T_73 = entries_10_busy & _evtWant_T_96 & _rspWait_10_T_6 & dbidValidNext_10; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 293:71]
  wire  entering_10 = _entering_T_73 & _datStart_T_75 & entries_10_beatsLeft == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 294:36]
  wire [1:0] _GEN_717 = entering_10 ? 2'h3 : _GEN_708; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 295:20 296:17]
  wire  _freeNow_T_166 = _evtWant_T_96 & dataSentNext_10 & compNext_10; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 306:35]
  wire  _freeNow_T_167 = _evtWant_T_93 & _rspWait_10_T_6 & rspHit_10 & isComp | _freeNow_T_166; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 305:89]
  wire  _freeNow_T_169 = _rspWant_T_53 & rspFire_10; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 307:40]
  wire  _freeNow_T_170 = _freeNow_T_167 | _freeNow_T_169; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 306:48]
  wire  _freeNow_T_174 = entries_10_opcode == 3'h4 & datFire_10 & _T_511; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 308:55]
  wire  _freeNow_T_175 = _freeNow_T_170 | _freeNow_T_174; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 307:52]
  wire  freeNow_10 = entries_10_busy & _freeNow_T_175; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 304:26]
  wire  _GEN_721 = freeNow_10 ? 1'h0 : entries_10_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 267:14 309:19 310:16]
  wire  busyNext_10 = doAlloc_10 | _GEN_721; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 313:{19,30}]
  wire [1:0] _T_547 = rspFire_10 + datFire_10; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [1:0] _GEN_1030 = {{1'd0}, evtFire_10}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [2:0] _T_549 = _GEN_1030 + _T_547; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire  doAlloc_11 = _doAlloc_T & allocId == 5'hb; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 236:31]
  wire  rspHit_11 = _rspHit_T & rspEnt == 8'hb; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 237:32]
  wire  evtFire_11 = _T & evtIdx == 5'hb; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 238:33]
  wire  rspFire_11 = _T_1 & rspIdx == 5'hb; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 239:33]
  wire  datFire_11 = _T_2 & datIdx == 5'hb; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 240:33]
  wire  _GEN_731 = doAlloc_11 ? 1'h0 : entries_11_compGot; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 258:14 269:19 270:16]
  wire  _GEN_732 = doAlloc_11 ? 1'h0 : entries_11_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 259:19 269:19 271:21]
  wire  _GEN_734 = doAlloc_11 ? 1'h0 : entries_11_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 261:18 269:19 273:20]
  wire  _GEN_735 = doAlloc_11 ? 1'h0 : entries_11_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 262:17 269:19 274:19]
  wire [1:0] _GEN_739 = doAlloc_11 ? _stateNext_T_1 : entries_11_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 266:15 269:19 278:17]
  wire  compNext_11 = rspHit_11 & isComp | _GEN_731; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 280:{28,39}]
  wire  _T_557 = ~entries_11_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:30]
  wire  dbidValidNext_11 = rspHit_11 & isDbid & ~entries_11_dbidValid | _GEN_732; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:44 283:21]
  wire  rspSeenNext_11 = rspHit_11 & ~entries_11_rspSeen | _GEN_735; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32 286:19]
  wire  _T_561 = entries_11_beatsLeft == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 290:33]
  wire  dataSentNext_11 = datFire_11 & entries_11_beatsLeft == 2'h1 | _GEN_734; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 290:{42,57}]
  wire [1:0] _beatsNext_T_47 = entries_11_beatsLeft - 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:56]
  wire  _entering_T_77 = entries_11_busy & _evtWant_T_105; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 293:27]
  wire  _entering_T_80 = entries_11_busy & _evtWant_T_105 & _rspWait_11_T_6 & dbidValidNext_11; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 293:71]
  wire  entering_11 = _entering_T_80 & _datStart_T_82 & entries_11_beatsLeft == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 294:36]
  wire [1:0] _GEN_748 = entering_11 ? 2'h3 : _GEN_739; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 295:20 296:17]
  wire  _freeNow_T_182 = _evtWant_T_105 & dataSentNext_11 & compNext_11; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 306:35]
  wire  _freeNow_T_183 = _evtWant_T_102 & _rspWait_11_T_6 & rspHit_11 & isComp | _freeNow_T_182; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 305:89]
  wire  _freeNow_T_185 = _rspWant_T_58 & rspFire_11; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 307:40]
  wire  _freeNow_T_186 = _freeNow_T_183 | _freeNow_T_185; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 306:48]
  wire  _freeNow_T_190 = entries_11_opcode == 3'h4 & datFire_11 & _T_561; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 308:55]
  wire  _freeNow_T_191 = _freeNow_T_186 | _freeNow_T_190; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 307:52]
  wire  freeNow_11 = entries_11_busy & _freeNow_T_191; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 304:26]
  wire  _GEN_752 = freeNow_11 ? 1'h0 : entries_11_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 267:14 309:19 310:16]
  wire  busyNext_11 = doAlloc_11 | _GEN_752; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 313:{19,30}]
  wire [1:0] _T_597 = rspFire_11 + datFire_11; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [1:0] _GEN_1031 = {{1'd0}, evtFire_11}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [2:0] _T_599 = _GEN_1031 + _T_597; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire  doAlloc_12 = _doAlloc_T & allocId == 5'hc; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 236:31]
  wire  rspHit_12 = _rspHit_T & rspEnt == 8'hc; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 237:32]
  wire  evtFire_12 = _T & evtIdx == 5'hc; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 238:33]
  wire  rspFire_12 = _T_1 & rspIdx == 5'hc; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 239:33]
  wire  datFire_12 = _T_2 & datIdx == 5'hc; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 240:33]
  wire  _GEN_762 = doAlloc_12 ? 1'h0 : entries_12_compGot; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 258:14 269:19 270:16]
  wire  _GEN_763 = doAlloc_12 ? 1'h0 : entries_12_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 259:19 269:19 271:21]
  wire  _GEN_765 = doAlloc_12 ? 1'h0 : entries_12_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 261:18 269:19 273:20]
  wire  _GEN_766 = doAlloc_12 ? 1'h0 : entries_12_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 262:17 269:19 274:19]
  wire [1:0] _GEN_770 = doAlloc_12 ? _stateNext_T_1 : entries_12_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 266:15 269:19 278:17]
  wire  compNext_12 = rspHit_12 & isComp | _GEN_762; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 280:{28,39}]
  wire  _T_607 = ~entries_12_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:30]
  wire  dbidValidNext_12 = rspHit_12 & isDbid & ~entries_12_dbidValid | _GEN_763; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:44 283:21]
  wire  rspSeenNext_12 = rspHit_12 & ~entries_12_rspSeen | _GEN_766; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32 286:19]
  wire  _T_611 = entries_12_beatsLeft == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 290:33]
  wire  dataSentNext_12 = datFire_12 & entries_12_beatsLeft == 2'h1 | _GEN_765; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 290:{42,57}]
  wire [1:0] _beatsNext_T_51 = entries_12_beatsLeft - 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:56]
  wire  _entering_T_84 = entries_12_busy & _evtWant_T_114; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 293:27]
  wire  _entering_T_87 = entries_12_busy & _evtWant_T_114 & _rspWait_12_T_6 & dbidValidNext_12; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 293:71]
  wire  entering_12 = _entering_T_87 & _datStart_T_89 & entries_12_beatsLeft == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 294:36]
  wire [1:0] _GEN_779 = entering_12 ? 2'h3 : _GEN_770; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 295:20 296:17]
  wire  _freeNow_T_198 = _evtWant_T_114 & dataSentNext_12 & compNext_12; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 306:35]
  wire  _freeNow_T_199 = _evtWant_T_111 & _rspWait_12_T_6 & rspHit_12 & isComp | _freeNow_T_198; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 305:89]
  wire  _freeNow_T_201 = _rspWant_T_63 & rspFire_12; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 307:40]
  wire  _freeNow_T_202 = _freeNow_T_199 | _freeNow_T_201; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 306:48]
  wire  _freeNow_T_206 = entries_12_opcode == 3'h4 & datFire_12 & _T_611; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 308:55]
  wire  _freeNow_T_207 = _freeNow_T_202 | _freeNow_T_206; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 307:52]
  wire  freeNow_12 = entries_12_busy & _freeNow_T_207; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 304:26]
  wire  _GEN_783 = freeNow_12 ? 1'h0 : entries_12_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 267:14 309:19 310:16]
  wire  busyNext_12 = doAlloc_12 | _GEN_783; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 313:{19,30}]
  wire [1:0] _T_647 = rspFire_12 + datFire_12; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [1:0] _GEN_1032 = {{1'd0}, evtFire_12}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [2:0] _T_649 = _GEN_1032 + _T_647; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire  doAlloc_13 = _doAlloc_T & allocId == 5'hd; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 236:31]
  wire  rspHit_13 = _rspHit_T & rspEnt == 8'hd; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 237:32]
  wire  evtFire_13 = _T & evtIdx == 5'hd; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 238:33]
  wire  rspFire_13 = _T_1 & rspIdx == 5'hd; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 239:33]
  wire  datFire_13 = _T_2 & datIdx == 5'hd; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 240:33]
  wire  _GEN_793 = doAlloc_13 ? 1'h0 : entries_13_compGot; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 258:14 269:19 270:16]
  wire  _GEN_794 = doAlloc_13 ? 1'h0 : entries_13_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 259:19 269:19 271:21]
  wire  _GEN_796 = doAlloc_13 ? 1'h0 : entries_13_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 261:18 269:19 273:20]
  wire  _GEN_797 = doAlloc_13 ? 1'h0 : entries_13_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 262:17 269:19 274:19]
  wire [1:0] _GEN_801 = doAlloc_13 ? _stateNext_T_1 : entries_13_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 266:15 269:19 278:17]
  wire  compNext_13 = rspHit_13 & isComp | _GEN_793; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 280:{28,39}]
  wire  _T_657 = ~entries_13_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:30]
  wire  dbidValidNext_13 = rspHit_13 & isDbid & ~entries_13_dbidValid | _GEN_794; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:44 283:21]
  wire  rspSeenNext_13 = rspHit_13 & ~entries_13_rspSeen | _GEN_797; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32 286:19]
  wire  _T_661 = entries_13_beatsLeft == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 290:33]
  wire  dataSentNext_13 = datFire_13 & entries_13_beatsLeft == 2'h1 | _GEN_796; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 290:{42,57}]
  wire [1:0] _beatsNext_T_55 = entries_13_beatsLeft - 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:56]
  wire  _entering_T_91 = entries_13_busy & _evtWant_T_123; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 293:27]
  wire  _entering_T_94 = entries_13_busy & _evtWant_T_123 & _rspWait_13_T_6 & dbidValidNext_13; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 293:71]
  wire  entering_13 = _entering_T_94 & _datStart_T_96 & entries_13_beatsLeft == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 294:36]
  wire [1:0] _GEN_810 = entering_13 ? 2'h3 : _GEN_801; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 295:20 296:17]
  wire  _freeNow_T_214 = _evtWant_T_123 & dataSentNext_13 & compNext_13; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 306:35]
  wire  _freeNow_T_215 = _evtWant_T_120 & _rspWait_13_T_6 & rspHit_13 & isComp | _freeNow_T_214; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 305:89]
  wire  _freeNow_T_217 = _rspWant_T_68 & rspFire_13; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 307:40]
  wire  _freeNow_T_218 = _freeNow_T_215 | _freeNow_T_217; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 306:48]
  wire  _freeNow_T_222 = entries_13_opcode == 3'h4 & datFire_13 & _T_661; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 308:55]
  wire  _freeNow_T_223 = _freeNow_T_218 | _freeNow_T_222; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 307:52]
  wire  freeNow_13 = entries_13_busy & _freeNow_T_223; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 304:26]
  wire  _GEN_814 = freeNow_13 ? 1'h0 : entries_13_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 267:14 309:19 310:16]
  wire  busyNext_13 = doAlloc_13 | _GEN_814; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 313:{19,30}]
  wire [1:0] _T_697 = rspFire_13 + datFire_13; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [1:0] _GEN_1033 = {{1'd0}, evtFire_13}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [2:0] _T_699 = _GEN_1033 + _T_697; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire  doAlloc_14 = _doAlloc_T & allocId == 5'he; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 236:31]
  wire  rspHit_14 = _rspHit_T & rspEnt == 8'he; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 237:32]
  wire  evtFire_14 = _T & evtIdx == 5'he; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 238:33]
  wire  rspFire_14 = _T_1 & rspIdx == 5'he; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 239:33]
  wire  datFire_14 = _T_2 & datIdx == 5'he; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 240:33]
  wire  _GEN_824 = doAlloc_14 ? 1'h0 : entries_14_compGot; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 258:14 269:19 270:16]
  wire  _GEN_825 = doAlloc_14 ? 1'h0 : entries_14_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 259:19 269:19 271:21]
  wire  _GEN_827 = doAlloc_14 ? 1'h0 : entries_14_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 261:18 269:19 273:20]
  wire  _GEN_828 = doAlloc_14 ? 1'h0 : entries_14_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 262:17 269:19 274:19]
  wire [1:0] _GEN_832 = doAlloc_14 ? _stateNext_T_1 : entries_14_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 266:15 269:19 278:17]
  wire  compNext_14 = rspHit_14 & isComp | _GEN_824; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 280:{28,39}]
  wire  _T_707 = ~entries_14_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:30]
  wire  dbidValidNext_14 = rspHit_14 & isDbid & ~entries_14_dbidValid | _GEN_825; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:44 283:21]
  wire  rspSeenNext_14 = rspHit_14 & ~entries_14_rspSeen | _GEN_828; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32 286:19]
  wire  _T_711 = entries_14_beatsLeft == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 290:33]
  wire  dataSentNext_14 = datFire_14 & entries_14_beatsLeft == 2'h1 | _GEN_827; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 290:{42,57}]
  wire [1:0] _beatsNext_T_59 = entries_14_beatsLeft - 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:56]
  wire  _entering_T_98 = entries_14_busy & _evtWant_T_132; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 293:27]
  wire  _entering_T_101 = entries_14_busy & _evtWant_T_132 & _rspWait_14_T_6 & dbidValidNext_14; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 293:71]
  wire  entering_14 = _entering_T_101 & _datStart_T_103 & entries_14_beatsLeft == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 294:36]
  wire [1:0] _GEN_841 = entering_14 ? 2'h3 : _GEN_832; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 295:20 296:17]
  wire  _freeNow_T_230 = _evtWant_T_132 & dataSentNext_14 & compNext_14; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 306:35]
  wire  _freeNow_T_231 = _evtWant_T_129 & _rspWait_14_T_6 & rspHit_14 & isComp | _freeNow_T_230; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 305:89]
  wire  _freeNow_T_233 = _rspWant_T_73 & rspFire_14; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 307:40]
  wire  _freeNow_T_234 = _freeNow_T_231 | _freeNow_T_233; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 306:48]
  wire  _freeNow_T_238 = entries_14_opcode == 3'h4 & datFire_14 & _T_711; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 308:55]
  wire  _freeNow_T_239 = _freeNow_T_234 | _freeNow_T_238; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 307:52]
  wire  freeNow_14 = entries_14_busy & _freeNow_T_239; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 304:26]
  wire  _GEN_845 = freeNow_14 ? 1'h0 : entries_14_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 267:14 309:19 310:16]
  wire  busyNext_14 = doAlloc_14 | _GEN_845; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 313:{19,30}]
  wire [1:0] _T_747 = rspFire_14 + datFire_14; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [1:0] _GEN_1034 = {{1'd0}, evtFire_14}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [2:0] _T_749 = _GEN_1034 + _T_747; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire  doAlloc_15 = _doAlloc_T & allocId == 5'hf; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 236:31]
  wire  rspHit_15 = _rspHit_T & rspEnt == 8'hf; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 237:32]
  wire  evtFire_15 = _T & evtIdx == 5'hf; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 238:33]
  wire  rspFire_15 = _T_1 & rspIdx == 5'hf; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 239:33]
  wire  datFire_15 = _T_2 & datIdx == 5'hf; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 240:33]
  wire  _GEN_855 = doAlloc_15 ? 1'h0 : entries_15_compGot; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 258:14 269:19 270:16]
  wire  _GEN_856 = doAlloc_15 ? 1'h0 : entries_15_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 259:19 269:19 271:21]
  wire  _GEN_858 = doAlloc_15 ? 1'h0 : entries_15_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 261:18 269:19 273:20]
  wire  _GEN_859 = doAlloc_15 ? 1'h0 : entries_15_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 262:17 269:19 274:19]
  wire [1:0] _GEN_863 = doAlloc_15 ? _stateNext_T_1 : entries_15_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 266:15 269:19 278:17]
  wire  compNext_15 = rspHit_15 & isComp | _GEN_855; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 280:{28,39}]
  wire  _T_757 = ~entries_15_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:30]
  wire  dbidValidNext_15 = rspHit_15 & isDbid & ~entries_15_dbidValid | _GEN_856; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:44 283:21]
  wire  rspSeenNext_15 = rspHit_15 & ~entries_15_rspSeen | _GEN_859; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32 286:19]
  wire  _T_761 = entries_15_beatsLeft == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 290:33]
  wire  dataSentNext_15 = datFire_15 & entries_15_beatsLeft == 2'h1 | _GEN_858; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 290:{42,57}]
  wire [1:0] _beatsNext_T_63 = entries_15_beatsLeft - 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:56]
  wire  _entering_T_105 = entries_15_busy & _evtWant_T_141; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 293:27]
  wire  _entering_T_108 = entries_15_busy & _evtWant_T_141 & _rspWait_15_T_6 & dbidValidNext_15; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 293:71]
  wire  entering_15 = _entering_T_108 & _datStart_T_110 & entries_15_beatsLeft == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 294:36]
  wire [1:0] _GEN_872 = entering_15 ? 2'h3 : _GEN_863; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 295:20 296:17]
  wire  _freeNow_T_246 = _evtWant_T_141 & dataSentNext_15 & compNext_15; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 306:35]
  wire  _freeNow_T_247 = _evtWant_T_138 & _rspWait_15_T_6 & rspHit_15 & isComp | _freeNow_T_246; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 305:89]
  wire  _freeNow_T_249 = _rspWant_T_78 & rspFire_15; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 307:40]
  wire  _freeNow_T_250 = _freeNow_T_247 | _freeNow_T_249; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 306:48]
  wire  _freeNow_T_254 = entries_15_opcode == 3'h4 & datFire_15 & _T_761; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 308:55]
  wire  _freeNow_T_255 = _freeNow_T_250 | _freeNow_T_254; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 307:52]
  wire  freeNow_15 = entries_15_busy & _freeNow_T_255; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 304:26]
  wire  _GEN_876 = freeNow_15 ? 1'h0 : entries_15_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 267:14 309:19 310:16]
  wire  busyNext_15 = doAlloc_15 | _GEN_876; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 313:{19,30}]
  wire [1:0] _T_797 = rspFire_15 + datFire_15; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [1:0] _GEN_1035 = {{1'd0}, evtFire_15}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [2:0] _T_799 = _GEN_1035 + _T_797; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire  doAlloc_16 = _doAlloc_T & allocId == 5'h10; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 236:31]
  wire  rspHit_16 = _rspHit_T & rspEnt == 8'h10; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 237:32]
  wire  evtFire_16 = _T & evtIdx == 5'h10; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 238:33]
  wire  rspFire_16 = _T_1 & rspIdx == 5'h10; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 239:33]
  wire  datFire_16 = _T_2 & datIdx == 5'h10; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 240:33]
  wire  _GEN_886 = doAlloc_16 ? 1'h0 : entries_16_compGot; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 258:14 269:19 270:16]
  wire  _GEN_887 = doAlloc_16 ? 1'h0 : entries_16_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 259:19 269:19 271:21]
  wire  _GEN_889 = doAlloc_16 ? 1'h0 : entries_16_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 261:18 269:19 273:20]
  wire  _GEN_890 = doAlloc_16 ? 1'h0 : entries_16_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 262:17 269:19 274:19]
  wire [1:0] _GEN_894 = doAlloc_16 ? _stateNext_T_1 : entries_16_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 266:15 269:19 278:17]
  wire  compNext_16 = rspHit_16 & isComp | _GEN_886; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 280:{28,39}]
  wire  _T_807 = ~entries_16_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:30]
  wire  dbidValidNext_16 = rspHit_16 & isDbid & ~entries_16_dbidValid | _GEN_887; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:44 283:21]
  wire  rspSeenNext_16 = rspHit_16 & ~entries_16_rspSeen | _GEN_890; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32 286:19]
  wire  _T_811 = entries_16_beatsLeft == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 290:33]
  wire  dataSentNext_16 = datFire_16 & entries_16_beatsLeft == 2'h1 | _GEN_889; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 290:{42,57}]
  wire [1:0] _beatsNext_T_67 = entries_16_beatsLeft - 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:56]
  wire  _entering_T_112 = entries_16_busy & _evtWant_T_150; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 293:27]
  wire  _entering_T_115 = entries_16_busy & _evtWant_T_150 & _rspWait_16_T_6 & dbidValidNext_16; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 293:71]
  wire  entering_16 = _entering_T_115 & _datStart_T_117 & entries_16_beatsLeft == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 294:36]
  wire [1:0] _GEN_903 = entering_16 ? 2'h3 : _GEN_894; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 295:20 296:17]
  wire  _freeNow_T_262 = _evtWant_T_150 & dataSentNext_16 & compNext_16; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 306:35]
  wire  _freeNow_T_263 = _evtWant_T_147 & _rspWait_16_T_6 & rspHit_16 & isComp | _freeNow_T_262; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 305:89]
  wire  _freeNow_T_265 = _rspWant_T_83 & rspFire_16; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 307:40]
  wire  _freeNow_T_266 = _freeNow_T_263 | _freeNow_T_265; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 306:48]
  wire  _freeNow_T_270 = entries_16_opcode == 3'h4 & datFire_16 & _T_811; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 308:55]
  wire  _freeNow_T_271 = _freeNow_T_266 | _freeNow_T_270; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 307:52]
  wire  freeNow_16 = entries_16_busy & _freeNow_T_271; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 304:26]
  wire  _GEN_907 = freeNow_16 ? 1'h0 : entries_16_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 267:14 309:19 310:16]
  wire  busyNext_16 = doAlloc_16 | _GEN_907; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 313:{19,30}]
  wire [1:0] _T_847 = rspFire_16 + datFire_16; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [1:0] _GEN_1036 = {{1'd0}, evtFire_16}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [2:0] _T_849 = _GEN_1036 + _T_847; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire  doAlloc_17 = _doAlloc_T & allocId == 5'h11; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 236:31]
  wire  rspHit_17 = _rspHit_T & rspEnt == 8'h11; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 237:32]
  wire  evtFire_17 = _T & evtIdx == 5'h11; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 238:33]
  wire  rspFire_17 = _T_1 & rspIdx == 5'h11; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 239:33]
  wire  datFire_17 = _T_2 & datIdx == 5'h11; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 240:33]
  wire  _GEN_917 = doAlloc_17 ? 1'h0 : entries_17_compGot; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 258:14 269:19 270:16]
  wire  _GEN_918 = doAlloc_17 ? 1'h0 : entries_17_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 259:19 269:19 271:21]
  wire  _GEN_920 = doAlloc_17 ? 1'h0 : entries_17_dataSent; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 261:18 269:19 273:20]
  wire  _GEN_921 = doAlloc_17 ? 1'h0 : entries_17_rspSeen; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 262:17 269:19 274:19]
  wire [1:0] _GEN_925 = doAlloc_17 ? _stateNext_T_1 : entries_17_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 266:15 269:19 278:17]
  wire  compNext_17 = rspHit_17 & isComp | _GEN_917; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 280:{28,39}]
  wire  _T_857 = ~entries_17_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:30]
  wire  dbidValidNext_17 = rspHit_17 & isDbid & ~entries_17_dbidValid | _GEN_918; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:44 283:21]
  wire  rspSeenNext_17 = rspHit_17 & ~entries_17_rspSeen | _GEN_921; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32 286:19]
  wire  _T_861 = entries_17_beatsLeft == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 290:33]
  wire  dataSentNext_17 = datFire_17 & entries_17_beatsLeft == 2'h1 | _GEN_920; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 290:{42,57}]
  wire [1:0] _beatsNext_T_71 = entries_17_beatsLeft - 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:56]
  wire  _entering_T_119 = entries_17_busy & _evtWant_T_159; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 293:27]
  wire  _entering_T_122 = entries_17_busy & _evtWant_T_159 & _rspWait_17_T_6 & dbidValidNext_17; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 293:71]
  wire  entering_17 = _entering_T_122 & _datStart_T_124 & entries_17_beatsLeft == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 294:36]
  wire [1:0] _GEN_934 = entering_17 ? 2'h3 : _GEN_925; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 295:20 296:17]
  wire  _freeNow_T_278 = _evtWant_T_159 & dataSentNext_17 & compNext_17; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 306:35]
  wire  _freeNow_T_279 = _evtWant_T_156 & _rspWait_17_T_6 & rspHit_17 & isComp | _freeNow_T_278; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 305:89]
  wire  _freeNow_T_281 = _rspWant_T_88 & rspFire_17; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 307:40]
  wire  _freeNow_T_282 = _freeNow_T_279 | _freeNow_T_281; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 306:48]
  wire  _freeNow_T_286 = entries_17_opcode == 3'h4 & datFire_17 & _T_861; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 308:55]
  wire  _freeNow_T_287 = _freeNow_T_282 | _freeNow_T_286; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 307:52]
  wire  freeNow_17 = entries_17_busy & _freeNow_T_287; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 304:26]
  wire  _GEN_938 = freeNow_17 ? 1'h0 : entries_17_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 267:14 309:19 310:16]
  wire  busyNext_17 = doAlloc_17 | _GEN_938; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 313:{19,30}]
  wire [1:0] _T_897 = rspFire_17 + datFire_17; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [1:0] _GEN_1037 = {{1'd0}, evtFire_17}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [2:0] _T_899 = _GEN_1037 + _T_897; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:20]
  wire [47:0] addr = {io_blockQuery_0_bits[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 108:8]
  wire  _io_block_0_T_43 = entries_10_busy & _conflict_T_41 == addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 355:31]
  wire  _io_block_0_T_81 = entries_0_busy & _conflict_T_1 == addr | entries_1_busy & _conflict_T_5 == addr |
    entries_2_busy & _conflict_T_9 == addr | entries_3_busy & _conflict_T_13 == addr | entries_4_busy & _conflict_T_17
     == addr | entries_5_busy & _conflict_T_21 == addr | entries_6_busy & _conflict_T_25 == addr | entries_7_busy &
    _conflict_T_29 == addr | entries_8_busy & _conflict_T_33 == addr | entries_9_busy & _conflict_T_37 == addr |
    _io_block_0_T_43; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 355:68]
  wire  _io_block_0_T_88 = _io_block_0_T_81 | entries_11_busy & _conflict_T_45 == addr | entries_12_busy &
    _conflict_T_49 == addr | entries_13_busy & _conflict_T_53 == addr | entries_14_busy & _conflict_T_57 == addr |
    entries_15_busy & _conflict_T_61 == addr | entries_16_busy & _conflict_T_65 == addr | entries_17_busy &
    _conflict_T_69 == addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 355:68]
  wire [47:0] addr_1 = {io_blockQuery_1_bits[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 108:8]
  wire  _io_block_1_T_43 = entries_10_busy & _conflict_T_41 == addr_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 355:31]
  wire  _io_block_1_T_81 = entries_0_busy & _conflict_T_1 == addr_1 | entries_1_busy & _conflict_T_5 == addr_1 |
    entries_2_busy & _conflict_T_9 == addr_1 | entries_3_busy & _conflict_T_13 == addr_1 | entries_4_busy &
    _conflict_T_17 == addr_1 | entries_5_busy & _conflict_T_21 == addr_1 | entries_6_busy & _conflict_T_25 == addr_1 |
    entries_7_busy & _conflict_T_29 == addr_1 | entries_8_busy & _conflict_T_33 == addr_1 | entries_9_busy &
    _conflict_T_37 == addr_1 | _io_block_1_T_43; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 355:68]
  wire  _io_block_1_T_88 = _io_block_1_T_81 | entries_11_busy & _conflict_T_45 == addr_1 | entries_12_busy &
    _conflict_T_49 == addr_1 | entries_13_busy & _conflict_T_53 == addr_1 | entries_14_busy & _conflict_T_57 == addr_1
     | entries_15_busy & _conflict_T_61 == addr_1 | entries_16_busy & _conflict_T_65 == addr_1 | entries_17_busy &
    _conflict_T_69 == addr_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 355:68]
  wire [47:0] addr_2 = {io_blockQuery_2_bits[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 108:8]
  wire  _io_block_2_T_43 = entries_10_busy & _conflict_T_41 == addr_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 355:31]
  wire  _io_block_2_T_81 = entries_0_busy & _conflict_T_1 == addr_2 | entries_1_busy & _conflict_T_5 == addr_2 |
    entries_2_busy & _conflict_T_9 == addr_2 | entries_3_busy & _conflict_T_13 == addr_2 | entries_4_busy &
    _conflict_T_17 == addr_2 | entries_5_busy & _conflict_T_21 == addr_2 | entries_6_busy & _conflict_T_25 == addr_2 |
    entries_7_busy & _conflict_T_29 == addr_2 | entries_8_busy & _conflict_T_33 == addr_2 | entries_9_busy &
    _conflict_T_37 == addr_2 | _io_block_2_T_43; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 355:68]
  wire  _io_block_2_T_88 = _io_block_2_T_81 | entries_11_busy & _conflict_T_45 == addr_2 | entries_12_busy &
    _conflict_T_49 == addr_2 | entries_13_busy & _conflict_T_53 == addr_2 | entries_14_busy & _conflict_T_57 == addr_2
     | entries_15_busy & _conflict_T_61 == addr_2 | entries_16_busy & _conflict_T_65 == addr_2 | entries_17_busy &
    _conflict_T_69 == addr_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 355:68]
  wire [47:0] addr_3 = {io_blockQuery_3_bits[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 108:8]
  wire  _io_block_3_T_43 = entries_10_busy & _conflict_T_41 == addr_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 355:31]
  wire  _io_block_3_T_81 = entries_0_busy & _conflict_T_1 == addr_3 | entries_1_busy & _conflict_T_5 == addr_3 |
    entries_2_busy & _conflict_T_9 == addr_3 | entries_3_busy & _conflict_T_13 == addr_3 | entries_4_busy &
    _conflict_T_17 == addr_3 | entries_5_busy & _conflict_T_21 == addr_3 | entries_6_busy & _conflict_T_25 == addr_3 |
    entries_7_busy & _conflict_T_29 == addr_3 | entries_8_busy & _conflict_T_33 == addr_3 | entries_9_busy &
    _conflict_T_37 == addr_3 | _io_block_3_T_43; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 355:68]
  wire  _io_block_3_T_88 = _io_block_3_T_81 | entries_11_busy & _conflict_T_45 == addr_3 | entries_12_busy &
    _conflict_T_49 == addr_3 | entries_13_busy & _conflict_T_53 == addr_3 | entries_14_busy & _conflict_T_57 == addr_3
     | entries_15_busy & _conflict_T_61 == addr_3 | entries_16_busy & _conflict_T_65 == addr_3 | entries_17_busy &
    _conflict_T_69 == addr_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 355:68]
  wire  _T_905 = ~io_req_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 360:10]
  wire  _T_941 = reqResp == 3'h4; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 118:12]
  wire  _T_942 = reqResp == 3'h0 | reqResp == 3'h1 | reqResp == 3'h2 | _T_941; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 117:76]
  wire  _T_946 = _T_942 | reqResp == 3'h5 | reqResp == 3'h6; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 118:59]
  wire  _T_951 = ~io_rxRsp_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 367:10]
  wire  _GEN_949 = 5'h1 == evtIdx ? evtWant_1 : evtWant_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 369:{26,26}]
  wire  _GEN_950 = 5'h2 == evtIdx ? evtWant_2 : _GEN_949; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 369:{26,26}]
  wire  _GEN_951 = 5'h3 == evtIdx ? evtWant_3 : _GEN_950; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 369:{26,26}]
  wire  _GEN_952 = 5'h4 == evtIdx ? evtWant_4 : _GEN_951; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 369:{26,26}]
  wire  _GEN_953 = 5'h5 == evtIdx ? evtWant_5 : _GEN_952; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 369:{26,26}]
  wire  _GEN_954 = 5'h6 == evtIdx ? evtWant_6 : _GEN_953; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 369:{26,26}]
  wire  _GEN_955 = 5'h7 == evtIdx ? evtWant_7 : _GEN_954; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 369:{26,26}]
  wire  _GEN_956 = 5'h8 == evtIdx ? evtWant_8 : _GEN_955; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 369:{26,26}]
  wire  _GEN_957 = 5'h9 == evtIdx ? evtWant_9 : _GEN_956; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 369:{26,26}]
  wire  _GEN_958 = 5'ha == evtIdx ? evtWant_10 : _GEN_957; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 369:{26,26}]
  wire  _GEN_959 = 5'hb == evtIdx ? evtWant_11 : _GEN_958; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 369:{26,26}]
  wire  _GEN_960 = 5'hc == evtIdx ? evtWant_12 : _GEN_959; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 369:{26,26}]
  wire  _GEN_961 = 5'hd == evtIdx ? evtWant_13 : _GEN_960; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 369:{26,26}]
  wire  _GEN_962 = 5'he == evtIdx ? evtWant_14 : _GEN_961; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 369:{26,26}]
  wire  _GEN_963 = 5'hf == evtIdx ? evtWant_15 : _GEN_962; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 369:{26,26}]
  wire  _GEN_964 = 5'h10 == evtIdx ? evtWant_16 : _GEN_963; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 369:{26,26}]
  wire  _GEN_965 = 5'h11 == evtIdx ? evtWant_17 : _GEN_964; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 369:{26,26}]
  wire  _GEN_967 = 5'h1 == rspIdx ? rspWant_1 : rspWant_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 370:{26,26}]
  wire  _GEN_968 = 5'h2 == rspIdx ? rspWant_2 : _GEN_967; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 370:{26,26}]
  wire  _GEN_969 = 5'h3 == rspIdx ? rspWant_3 : _GEN_968; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 370:{26,26}]
  wire  _GEN_970 = 5'h4 == rspIdx ? rspWant_4 : _GEN_969; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 370:{26,26}]
  wire  _GEN_971 = 5'h5 == rspIdx ? rspWant_5 : _GEN_970; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 370:{26,26}]
  wire  _GEN_972 = 5'h6 == rspIdx ? rspWant_6 : _GEN_971; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 370:{26,26}]
  wire  _GEN_973 = 5'h7 == rspIdx ? rspWant_7 : _GEN_972; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 370:{26,26}]
  wire  _GEN_974 = 5'h8 == rspIdx ? rspWant_8 : _GEN_973; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 370:{26,26}]
  wire  _GEN_975 = 5'h9 == rspIdx ? rspWant_9 : _GEN_974; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 370:{26,26}]
  wire  _GEN_976 = 5'ha == rspIdx ? rspWant_10 : _GEN_975; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 370:{26,26}]
  wire  _GEN_977 = 5'hb == rspIdx ? rspWant_11 : _GEN_976; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 370:{26,26}]
  wire  _GEN_978 = 5'hc == rspIdx ? rspWant_12 : _GEN_977; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 370:{26,26}]
  wire  _GEN_979 = 5'hd == rspIdx ? rspWant_13 : _GEN_978; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 370:{26,26}]
  wire  _GEN_980 = 5'he == rspIdx ? rspWant_14 : _GEN_979; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 370:{26,26}]
  wire  _GEN_981 = 5'hf == rspIdx ? rspWant_15 : _GEN_980; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 370:{26,26}]
  wire  _GEN_982 = 5'h10 == rspIdx ? rspWant_16 : _GEN_981; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 370:{26,26}]
  wire  _GEN_983 = 5'h11 == rspIdx ? rspWant_17 : _GEN_982; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 370:{26,26}]
  wire  _T_971 = ~io_txDat_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 371:10]
  wire [1:0] _GEN_985 = 5'h1 == datIdx ? entries_1_state : entries_0_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 371:{44,44}]
  wire [1:0] _GEN_986 = 5'h2 == datIdx ? entries_2_state : _GEN_985; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 371:{44,44}]
  wire [1:0] _GEN_987 = 5'h3 == datIdx ? entries_3_state : _GEN_986; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 371:{44,44}]
  wire [1:0] _GEN_988 = 5'h4 == datIdx ? entries_4_state : _GEN_987; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 371:{44,44}]
  wire [1:0] _GEN_989 = 5'h5 == datIdx ? entries_5_state : _GEN_988; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 371:{44,44}]
  wire [1:0] _GEN_990 = 5'h6 == datIdx ? entries_6_state : _GEN_989; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 371:{44,44}]
  wire [1:0] _GEN_991 = 5'h7 == datIdx ? entries_7_state : _GEN_990; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 371:{44,44}]
  wire [1:0] _GEN_992 = 5'h8 == datIdx ? entries_8_state : _GEN_991; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 371:{44,44}]
  wire [1:0] _GEN_993 = 5'h9 == datIdx ? entries_9_state : _GEN_992; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 371:{44,44}]
  wire [1:0] _GEN_994 = 5'ha == datIdx ? entries_10_state : _GEN_993; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 371:{44,44}]
  wire [1:0] _GEN_995 = 5'hb == datIdx ? entries_11_state : _GEN_994; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 371:{44,44}]
  wire [1:0] _GEN_996 = 5'hc == datIdx ? entries_12_state : _GEN_995; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 371:{44,44}]
  wire [1:0] _GEN_997 = 5'hd == datIdx ? entries_13_state : _GEN_996; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 371:{44,44}]
  wire [1:0] _GEN_998 = 5'he == datIdx ? entries_14_state : _GEN_997; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 371:{44,44}]
  wire [1:0] _GEN_999 = 5'hf == datIdx ? entries_15_state : _GEN_998; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 371:{44,44}]
  wire [1:0] _GEN_1000 = 5'h10 == datIdx ? entries_16_state : _GEN_999; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 371:{44,44}]
  wire [1:0] _GEN_1001 = 5'h11 == datIdx ? entries_17_state : _GEN_1000; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 371:{44,44}]
  wire  _GEN_1003 = 5'h1 == datIdx ? entries_1_dbidValid : entries_0_dbidValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 374:{73,73}]
  wire  _GEN_1004 = 5'h2 == datIdx ? entries_2_dbidValid : _GEN_1003; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 374:{73,73}]
  wire  _GEN_1005 = 5'h3 == datIdx ? entries_3_dbidValid : _GEN_1004; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 374:{73,73}]
  wire  _GEN_1006 = 5'h4 == datIdx ? entries_4_dbidValid : _GEN_1005; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 374:{73,73}]
  wire  _GEN_1007 = 5'h5 == datIdx ? entries_5_dbidValid : _GEN_1006; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 374:{73,73}]
  wire  _GEN_1008 = 5'h6 == datIdx ? entries_6_dbidValid : _GEN_1007; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 374:{73,73}]
  wire  _GEN_1009 = 5'h7 == datIdx ? entries_7_dbidValid : _GEN_1008; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 374:{73,73}]
  wire  _GEN_1010 = 5'h8 == datIdx ? entries_8_dbidValid : _GEN_1009; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 374:{73,73}]
  wire  _GEN_1011 = 5'h9 == datIdx ? entries_9_dbidValid : _GEN_1010; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 374:{73,73}]
  wire  _GEN_1012 = 5'ha == datIdx ? entries_10_dbidValid : _GEN_1011; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 374:{73,73}]
  wire  _GEN_1013 = 5'hb == datIdx ? entries_11_dbidValid : _GEN_1012; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 374:{73,73}]
  wire  _GEN_1014 = 5'hc == datIdx ? entries_12_dbidValid : _GEN_1013; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 374:{73,73}]
  wire  _GEN_1015 = 5'hd == datIdx ? entries_13_dbidValid : _GEN_1014; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 374:{73,73}]
  wire  _GEN_1016 = 5'he == datIdx ? entries_14_dbidValid : _GEN_1015; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 374:{73,73}]
  wire  _GEN_1017 = 5'hf == datIdx ? entries_15_dbidValid : _GEN_1016; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 374:{73,73}]
  wire  _GEN_1018 = 5'h10 == datIdx ? entries_16_dbidValid : _GEN_1017; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 374:{73,73}]
  wire  _GEN_1019 = 5'h11 == datIdx ? entries_17_dbidValid : _GEN_1018; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 374:{73,73}]
  wire  _GEN_1038 = rspHit & ~reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
  wire  _GEN_1051 = rspHit_1 & ~reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
  wire  _GEN_1064 = rspHit_2 & ~reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
  wire  _GEN_1077 = rspHit_3 & ~reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
  wire  _GEN_1090 = rspHit_4 & ~reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
  wire  _GEN_1103 = rspHit_5 & ~reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
  wire  _GEN_1116 = rspHit_6 & ~reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
  wire  _GEN_1129 = rspHit_7 & ~reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
  wire  _GEN_1142 = rspHit_8 & ~reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
  wire  _GEN_1155 = rspHit_9 & ~reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
  wire  _GEN_1168 = rspHit_10 & ~reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
  wire  _GEN_1181 = rspHit_11 & ~reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
  wire  _GEN_1194 = rspHit_12 & ~reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
  wire  _GEN_1207 = rspHit_13 & ~reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
  wire  _GEN_1220 = rspHit_14 & ~reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
  wire  _GEN_1233 = rspHit_15 & ~reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
  wire  _GEN_1246 = rspHit_16 & ~reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
  wire  _GEN_1259 = rspHit_17 & ~reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
  assign io_req_ready = hasFree & ~conflict & legalOp; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 130:40]
  assign io_txEvt_valid = evtHold | |_evtIdx_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 158:29]
  assign io_txEvt_bits_txnID = {{3'd0}, _io_txEvt_bits_txnID_T_1}; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 164:23]
  assign io_txEvt_bits_opcode = _GEN_71 == 3'h0 ? 1'h0 : 1'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 167:30]
  assign io_txEvt_bits_addr = 5'h11 == evtIdx ? entries_17_addr : _GEN_88; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 169:{22,22}]
  assign io_txEvt_bits_traceTag = 5'h11 == evtIdx ? entries_17_traceTag : _GEN_106; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 170:{26,26}]
  assign io_txDat_valid = datHeld | ~datHold & |_datIdx_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 160:29]
  assign io_txDat_bits_txnID = _GEN_233 == 3'h4 ? _GEN_251 : _GEN_269; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 187:29]
  assign io_txDat_bits_tgtID = _GEN_287 ? _GEN_305 : 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 189:29]
  assign io_txDat_bits_opcode = _io_txDat_bits_txnID_T ? 2'h3 : 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 190:30]
  assign io_txDat_bits_resp = 5'h11 == datIdx ? entries_17_resp : _GEN_340; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 193:{22,22}]
  assign io_txDat_bits_dataID = firstBeat ? 1'h0 : 1'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 194:30]
  assign io_txDat_bits_data = firstBeat ? lowBeat : highBeat; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 195:28]
  assign io_txDat_bits_traceTag = 5'h11 == datIdx ? entries_17_traceTag : _GEN_358; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 197:{26,26}]
  assign io_txRsp_valid = rspHold | |_rspIdx_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 159:29]
  assign io_txRsp_bits_txnID = 5'h11 == rspIdx ? entries_17_snpTxnId : _GEN_124; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 174:{23,23}]
  assign io_txRsp_bits_resp = 5'h11 == rspIdx ? entries_17_resp : _GEN_160; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 179:{22,22}]
  assign io_txRsp_bits_traceTag = 5'h11 == rspIdx ? entries_17_traceTag : _GEN_178; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 180:{26,26}]
  assign io_rxRsp_ready = rspInRange & _GEN_389; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 230:30]
  assign io_block_0 = io_blockQuery_0_valid & _io_block_0_T_88; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 354:43]
  assign io_block_1 = io_blockQuery_1_valid & _io_block_1_T_88; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 354:43]
  assign io_block_2 = io_blockQuery_2_valid & _io_block_2_T_88; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 354:43]
  assign io_block_3 = io_blockQuery_3_valid & _io_block_3_T_88; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 354:43]
  assign io_wfi_safe = ~(entries_0_busy | entries_1_busy | entries_2_busy | entries_3_busy | entries_4_busy |
    entries_5_busy | entries_6_busy | entries_7_busy | entries_8_busy | entries_9_busy | entries_10_busy |
    entries_11_busy | entries_12_busy | entries_13_busy | entries_14_busy | entries_15_busy | entries_16_busy |
    entries_17_busy); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 357:18]
  always @(posedge clock) begin
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_0_busy <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_0_busy <= busyNext; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 315:12]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_0_opcode <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_0_opcode <= io_req_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 328:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_0_resp <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      if (_legalOp_T_7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 132:20]
        entries_0_resp <= 3'h5;
      end else if (_reqResp_T_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 133:8]
        entries_0_resp <= 3'h0;
      end else begin
        entries_0_resp <= _reqResp_T_7;
      end
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_0_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_0_snpTxnId <= io_req_bits_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 332:18]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_0_addr <= 48'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_0_addr <= reqLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 333:14]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_0_data <= 512'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_0_data <= io_req_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 334:14]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_0_dataReady <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_0_dataReady <= busyNext; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 326:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_0_dbid <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit & isDbid & ~entries_0_dbidValid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:44]
      entries_0_dbid <= io_rxRsp_bits_dbID; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 282:16]
    end else if (doAlloc) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_0_dbid <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 272:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_0_dbidValid <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_0_dbidValid <= dbidValidNext; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 318:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_0_compGot <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_0_compGot <= compNext; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 317:15]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_0_dataSent <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_0_dataSent <= dataSentNext; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 320:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_0_rspSeen <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_0_rspSeen <= rspSeenNext; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 321:15]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_0_compSrc <= 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit & ~entries_0_rspSeen) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32]
      entries_0_compSrc <= io_rxRsp_bits_srcID; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 287:19]
    end else if (doAlloc) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_0_compSrc <= 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 275:19]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_0_traceTag <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit & ~entries_0_rspSeen) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32]
      entries_0_traceTag <= io_rxRsp_bits_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 288:17]
    end else if (doAlloc) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_0_traceTag <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 276:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_0_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (freeNow) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 309:19]
      entries_0_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 311:17]
    end else if (_entering_T & _datStart_T_1 & dataSentNext & ~compNext) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 300:86]
      entries_0_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 301:17]
    end else if (evtFire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 299:19]
      entries_0_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 299:31]
    end else begin
      entries_0_state <= _GEN_407;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_0_beatsLeft <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (entering) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 295:20]
      entries_0_beatsLeft <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 297:17]
    end else if (entries_0_busy & datFire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:29]
      entries_0_beatsLeft <= _beatsNext_T_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:41]
    end else if (doAlloc) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_0_beatsLeft <= _beatsNext_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 277:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_1_busy <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_1_busy <= busyNext_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 315:12]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_1_opcode <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_1_opcode <= io_req_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 328:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_1_resp <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      if (_legalOp_T_7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 132:20]
        entries_1_resp <= 3'h5;
      end else if (_reqResp_T_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 133:8]
        entries_1_resp <= 3'h0;
      end else begin
        entries_1_resp <= _reqResp_T_7;
      end
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_1_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_1_snpTxnId <= io_req_bits_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 332:18]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_1_addr <= 48'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_1_addr <= reqLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 333:14]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_1_data <= 512'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_1_data <= io_req_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 334:14]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_1_dataReady <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_1_dataReady <= busyNext_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 326:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_1_dbid <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_1 & isDbid & ~entries_1_dbidValid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:44]
      entries_1_dbid <= io_rxRsp_bits_dbID; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 282:16]
    end else if (doAlloc_1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_1_dbid <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 272:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_1_dbidValid <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_1_dbidValid <= dbidValidNext_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 318:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_1_compGot <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_1_compGot <= compNext_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 317:15]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_1_dataSent <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_1_dataSent <= dataSentNext_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 320:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_1_rspSeen <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_1_rspSeen <= rspSeenNext_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 321:15]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_1_compSrc <= 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_1 & ~entries_1_rspSeen) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32]
      entries_1_compSrc <= io_rxRsp_bits_srcID; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 287:19]
    end else if (doAlloc_1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_1_compSrc <= 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 275:19]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_1_traceTag <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_1 & ~entries_1_rspSeen) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32]
      entries_1_traceTag <= io_rxRsp_bits_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 288:17]
    end else if (doAlloc_1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_1_traceTag <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 276:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_1_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (freeNow_1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 309:19]
      entries_1_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 311:17]
    end else if (_entering_T_7 & _datStart_T_8 & dataSentNext_1 & ~compNext_1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 300:86]
      entries_1_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 301:17]
    end else if (evtFire_1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 299:19]
      entries_1_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 299:31]
    end else begin
      entries_1_state <= _GEN_438;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_1_beatsLeft <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (entering_1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 295:20]
      entries_1_beatsLeft <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 297:17]
    end else if (entries_1_busy & datFire_1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:29]
      entries_1_beatsLeft <= _beatsNext_T_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:41]
    end else if (doAlloc_1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_1_beatsLeft <= _beatsNext_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 277:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_2_busy <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_2_busy <= busyNext_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 315:12]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_2_opcode <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_2) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_2_opcode <= io_req_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 328:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_2_resp <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_2) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      if (_legalOp_T_7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 132:20]
        entries_2_resp <= 3'h5;
      end else if (_reqResp_T_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 133:8]
        entries_2_resp <= 3'h0;
      end else begin
        entries_2_resp <= _reqResp_T_7;
      end
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_2_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_2) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_2_snpTxnId <= io_req_bits_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 332:18]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_2_addr <= 48'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_2) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_2_addr <= reqLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 333:14]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_2_data <= 512'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_2) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_2_data <= io_req_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 334:14]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_2_dataReady <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_2_dataReady <= busyNext_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 326:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_2_dbid <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_2 & isDbid & ~entries_2_dbidValid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:44]
      entries_2_dbid <= io_rxRsp_bits_dbID; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 282:16]
    end else if (doAlloc_2) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_2_dbid <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 272:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_2_dbidValid <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_2_dbidValid <= dbidValidNext_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 318:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_2_compGot <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_2_compGot <= compNext_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 317:15]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_2_dataSent <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_2_dataSent <= dataSentNext_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 320:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_2_rspSeen <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_2_rspSeen <= rspSeenNext_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 321:15]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_2_compSrc <= 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_2 & ~entries_2_rspSeen) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32]
      entries_2_compSrc <= io_rxRsp_bits_srcID; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 287:19]
    end else if (doAlloc_2) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_2_compSrc <= 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 275:19]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_2_traceTag <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_2 & ~entries_2_rspSeen) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32]
      entries_2_traceTag <= io_rxRsp_bits_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 288:17]
    end else if (doAlloc_2) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_2_traceTag <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 276:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_2_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (freeNow_2) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 309:19]
      entries_2_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 311:17]
    end else if (_entering_T_14 & _datStart_T_15 & dataSentNext_2 & ~compNext_2) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 300:86]
      entries_2_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 301:17]
    end else if (evtFire_2) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 299:19]
      entries_2_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 299:31]
    end else begin
      entries_2_state <= _GEN_469;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_2_beatsLeft <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (entering_2) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 295:20]
      entries_2_beatsLeft <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 297:17]
    end else if (entries_2_busy & datFire_2) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:29]
      entries_2_beatsLeft <= _beatsNext_T_11; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:41]
    end else if (doAlloc_2) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_2_beatsLeft <= _beatsNext_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 277:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_3_busy <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_3_busy <= busyNext_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 315:12]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_3_opcode <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_3_opcode <= io_req_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 328:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_3_resp <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      if (_legalOp_T_7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 132:20]
        entries_3_resp <= 3'h5;
      end else if (_reqResp_T_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 133:8]
        entries_3_resp <= 3'h0;
      end else begin
        entries_3_resp <= _reqResp_T_7;
      end
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_3_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_3_snpTxnId <= io_req_bits_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 332:18]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_3_addr <= 48'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_3_addr <= reqLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 333:14]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_3_data <= 512'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_3_data <= io_req_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 334:14]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_3_dataReady <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_3_dataReady <= busyNext_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 326:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_3_dbid <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_3 & isDbid & ~entries_3_dbidValid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:44]
      entries_3_dbid <= io_rxRsp_bits_dbID; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 282:16]
    end else if (doAlloc_3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_3_dbid <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 272:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_3_dbidValid <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_3_dbidValid <= dbidValidNext_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 318:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_3_compGot <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_3_compGot <= compNext_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 317:15]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_3_dataSent <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_3_dataSent <= dataSentNext_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 320:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_3_rspSeen <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_3_rspSeen <= rspSeenNext_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 321:15]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_3_compSrc <= 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_3 & ~entries_3_rspSeen) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32]
      entries_3_compSrc <= io_rxRsp_bits_srcID; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 287:19]
    end else if (doAlloc_3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_3_compSrc <= 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 275:19]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_3_traceTag <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_3 & ~entries_3_rspSeen) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32]
      entries_3_traceTag <= io_rxRsp_bits_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 288:17]
    end else if (doAlloc_3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_3_traceTag <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 276:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_3_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (freeNow_3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 309:19]
      entries_3_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 311:17]
    end else if (_entering_T_21 & _datStart_T_22 & dataSentNext_3 & ~compNext_3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 300:86]
      entries_3_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 301:17]
    end else if (evtFire_3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 299:19]
      entries_3_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 299:31]
    end else begin
      entries_3_state <= _GEN_500;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_3_beatsLeft <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (entering_3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 295:20]
      entries_3_beatsLeft <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 297:17]
    end else if (entries_3_busy & datFire_3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:29]
      entries_3_beatsLeft <= _beatsNext_T_15; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:41]
    end else if (doAlloc_3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_3_beatsLeft <= _beatsNext_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 277:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_4_busy <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_4_busy <= busyNext_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 315:12]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_4_opcode <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_4) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_4_opcode <= io_req_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 328:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_4_resp <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_4) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      if (_legalOp_T_7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 132:20]
        entries_4_resp <= 3'h5;
      end else if (_reqResp_T_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 133:8]
        entries_4_resp <= 3'h0;
      end else begin
        entries_4_resp <= _reqResp_T_7;
      end
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_4_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_4) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_4_snpTxnId <= io_req_bits_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 332:18]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_4_addr <= 48'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_4) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_4_addr <= reqLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 333:14]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_4_data <= 512'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_4) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_4_data <= io_req_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 334:14]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_4_dataReady <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_4_dataReady <= busyNext_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 326:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_4_dbid <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_4 & isDbid & ~entries_4_dbidValid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:44]
      entries_4_dbid <= io_rxRsp_bits_dbID; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 282:16]
    end else if (doAlloc_4) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_4_dbid <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 272:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_4_dbidValid <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_4_dbidValid <= dbidValidNext_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 318:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_4_compGot <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_4_compGot <= compNext_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 317:15]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_4_dataSent <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_4_dataSent <= dataSentNext_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 320:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_4_rspSeen <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_4_rspSeen <= rspSeenNext_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 321:15]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_4_compSrc <= 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_4 & ~entries_4_rspSeen) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32]
      entries_4_compSrc <= io_rxRsp_bits_srcID; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 287:19]
    end else if (doAlloc_4) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_4_compSrc <= 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 275:19]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_4_traceTag <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_4 & ~entries_4_rspSeen) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32]
      entries_4_traceTag <= io_rxRsp_bits_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 288:17]
    end else if (doAlloc_4) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_4_traceTag <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 276:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_4_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (freeNow_4) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 309:19]
      entries_4_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 311:17]
    end else if (_entering_T_28 & _datStart_T_29 & dataSentNext_4 & ~compNext_4) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 300:86]
      entries_4_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 301:17]
    end else if (evtFire_4) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 299:19]
      entries_4_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 299:31]
    end else begin
      entries_4_state <= _GEN_531;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_4_beatsLeft <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (entering_4) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 295:20]
      entries_4_beatsLeft <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 297:17]
    end else if (entries_4_busy & datFire_4) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:29]
      entries_4_beatsLeft <= _beatsNext_T_19; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:41]
    end else if (doAlloc_4) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_4_beatsLeft <= _beatsNext_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 277:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_5_busy <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_5_busy <= busyNext_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 315:12]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_5_opcode <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_5_opcode <= io_req_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 328:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_5_resp <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      if (_legalOp_T_7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 132:20]
        entries_5_resp <= 3'h5;
      end else if (_reqResp_T_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 133:8]
        entries_5_resp <= 3'h0;
      end else begin
        entries_5_resp <= _reqResp_T_7;
      end
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_5_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_5_snpTxnId <= io_req_bits_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 332:18]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_5_addr <= 48'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_5_addr <= reqLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 333:14]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_5_data <= 512'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_5_data <= io_req_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 334:14]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_5_dataReady <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_5_dataReady <= busyNext_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 326:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_5_dbid <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_5 & isDbid & ~entries_5_dbidValid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:44]
      entries_5_dbid <= io_rxRsp_bits_dbID; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 282:16]
    end else if (doAlloc_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_5_dbid <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 272:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_5_dbidValid <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_5_dbidValid <= dbidValidNext_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 318:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_5_compGot <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_5_compGot <= compNext_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 317:15]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_5_dataSent <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_5_dataSent <= dataSentNext_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 320:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_5_rspSeen <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_5_rspSeen <= rspSeenNext_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 321:15]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_5_compSrc <= 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_5 & ~entries_5_rspSeen) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32]
      entries_5_compSrc <= io_rxRsp_bits_srcID; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 287:19]
    end else if (doAlloc_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_5_compSrc <= 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 275:19]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_5_traceTag <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_5 & ~entries_5_rspSeen) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32]
      entries_5_traceTag <= io_rxRsp_bits_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 288:17]
    end else if (doAlloc_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_5_traceTag <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 276:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_5_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (freeNow_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 309:19]
      entries_5_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 311:17]
    end else if (_entering_T_35 & _datStart_T_36 & dataSentNext_5 & ~compNext_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 300:86]
      entries_5_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 301:17]
    end else if (evtFire_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 299:19]
      entries_5_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 299:31]
    end else begin
      entries_5_state <= _GEN_562;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_5_beatsLeft <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (entering_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 295:20]
      entries_5_beatsLeft <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 297:17]
    end else if (entries_5_busy & datFire_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:29]
      entries_5_beatsLeft <= _beatsNext_T_23; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:41]
    end else if (doAlloc_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_5_beatsLeft <= _beatsNext_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 277:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_6_busy <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_6_busy <= busyNext_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 315:12]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_6_opcode <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_6) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_6_opcode <= io_req_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 328:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_6_resp <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_6) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      if (_legalOp_T_7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 132:20]
        entries_6_resp <= 3'h5;
      end else if (_reqResp_T_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 133:8]
        entries_6_resp <= 3'h0;
      end else begin
        entries_6_resp <= _reqResp_T_7;
      end
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_6_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_6) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_6_snpTxnId <= io_req_bits_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 332:18]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_6_addr <= 48'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_6) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_6_addr <= reqLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 333:14]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_6_data <= 512'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_6) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_6_data <= io_req_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 334:14]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_6_dataReady <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_6_dataReady <= busyNext_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 326:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_6_dbid <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_6 & isDbid & ~entries_6_dbidValid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:44]
      entries_6_dbid <= io_rxRsp_bits_dbID; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 282:16]
    end else if (doAlloc_6) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_6_dbid <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 272:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_6_dbidValid <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_6_dbidValid <= dbidValidNext_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 318:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_6_compGot <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_6_compGot <= compNext_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 317:15]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_6_dataSent <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_6_dataSent <= dataSentNext_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 320:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_6_rspSeen <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_6_rspSeen <= rspSeenNext_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 321:15]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_6_compSrc <= 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_6 & ~entries_6_rspSeen) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32]
      entries_6_compSrc <= io_rxRsp_bits_srcID; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 287:19]
    end else if (doAlloc_6) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_6_compSrc <= 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 275:19]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_6_traceTag <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_6 & ~entries_6_rspSeen) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32]
      entries_6_traceTag <= io_rxRsp_bits_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 288:17]
    end else if (doAlloc_6) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_6_traceTag <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 276:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_6_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (freeNow_6) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 309:19]
      entries_6_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 311:17]
    end else if (_entering_T_42 & _datStart_T_43 & dataSentNext_6 & ~compNext_6) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 300:86]
      entries_6_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 301:17]
    end else if (evtFire_6) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 299:19]
      entries_6_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 299:31]
    end else begin
      entries_6_state <= _GEN_593;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_6_beatsLeft <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (entering_6) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 295:20]
      entries_6_beatsLeft <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 297:17]
    end else if (entries_6_busy & datFire_6) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:29]
      entries_6_beatsLeft <= _beatsNext_T_27; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:41]
    end else if (doAlloc_6) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_6_beatsLeft <= _beatsNext_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 277:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_7_busy <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_7_busy <= busyNext_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 315:12]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_7_opcode <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_7_opcode <= io_req_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 328:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_7_resp <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      if (_legalOp_T_7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 132:20]
        entries_7_resp <= 3'h5;
      end else if (_reqResp_T_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 133:8]
        entries_7_resp <= 3'h0;
      end else begin
        entries_7_resp <= _reqResp_T_7;
      end
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_7_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_7_snpTxnId <= io_req_bits_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 332:18]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_7_addr <= 48'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_7_addr <= reqLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 333:14]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_7_data <= 512'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_7_data <= io_req_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 334:14]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_7_dataReady <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_7_dataReady <= busyNext_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 326:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_7_dbid <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_7 & isDbid & ~entries_7_dbidValid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:44]
      entries_7_dbid <= io_rxRsp_bits_dbID; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 282:16]
    end else if (doAlloc_7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_7_dbid <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 272:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_7_dbidValid <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_7_dbidValid <= dbidValidNext_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 318:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_7_compGot <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_7_compGot <= compNext_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 317:15]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_7_dataSent <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_7_dataSent <= dataSentNext_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 320:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_7_rspSeen <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_7_rspSeen <= rspSeenNext_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 321:15]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_7_compSrc <= 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_7 & ~entries_7_rspSeen) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32]
      entries_7_compSrc <= io_rxRsp_bits_srcID; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 287:19]
    end else if (doAlloc_7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_7_compSrc <= 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 275:19]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_7_traceTag <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_7 & ~entries_7_rspSeen) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32]
      entries_7_traceTag <= io_rxRsp_bits_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 288:17]
    end else if (doAlloc_7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_7_traceTag <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 276:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_7_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (freeNow_7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 309:19]
      entries_7_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 311:17]
    end else if (_entering_T_49 & _datStart_T_50 & dataSentNext_7 & ~compNext_7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 300:86]
      entries_7_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 301:17]
    end else if (evtFire_7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 299:19]
      entries_7_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 299:31]
    end else begin
      entries_7_state <= _GEN_624;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_7_beatsLeft <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (entering_7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 295:20]
      entries_7_beatsLeft <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 297:17]
    end else if (entries_7_busy & datFire_7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:29]
      entries_7_beatsLeft <= _beatsNext_T_31; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:41]
    end else if (doAlloc_7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_7_beatsLeft <= _beatsNext_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 277:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_8_busy <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_8_busy <= busyNext_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 315:12]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_8_opcode <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_8) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_8_opcode <= io_req_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 328:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_8_resp <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_8) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      if (_legalOp_T_7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 132:20]
        entries_8_resp <= 3'h5;
      end else if (_reqResp_T_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 133:8]
        entries_8_resp <= 3'h0;
      end else begin
        entries_8_resp <= _reqResp_T_7;
      end
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_8_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_8) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_8_snpTxnId <= io_req_bits_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 332:18]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_8_addr <= 48'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_8) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_8_addr <= reqLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 333:14]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_8_data <= 512'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_8) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_8_data <= io_req_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 334:14]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_8_dataReady <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_8_dataReady <= busyNext_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 326:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_8_dbid <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_8 & isDbid & ~entries_8_dbidValid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:44]
      entries_8_dbid <= io_rxRsp_bits_dbID; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 282:16]
    end else if (doAlloc_8) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_8_dbid <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 272:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_8_dbidValid <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_8_dbidValid <= dbidValidNext_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 318:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_8_compGot <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_8_compGot <= compNext_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 317:15]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_8_dataSent <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_8_dataSent <= dataSentNext_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 320:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_8_rspSeen <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_8_rspSeen <= rspSeenNext_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 321:15]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_8_compSrc <= 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_8 & ~entries_8_rspSeen) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32]
      entries_8_compSrc <= io_rxRsp_bits_srcID; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 287:19]
    end else if (doAlloc_8) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_8_compSrc <= 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 275:19]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_8_traceTag <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_8 & ~entries_8_rspSeen) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32]
      entries_8_traceTag <= io_rxRsp_bits_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 288:17]
    end else if (doAlloc_8) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_8_traceTag <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 276:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_8_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (freeNow_8) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 309:19]
      entries_8_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 311:17]
    end else if (_entering_T_56 & _datStart_T_57 & dataSentNext_8 & ~compNext_8) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 300:86]
      entries_8_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 301:17]
    end else if (evtFire_8) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 299:19]
      entries_8_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 299:31]
    end else begin
      entries_8_state <= _GEN_655;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_8_beatsLeft <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (entering_8) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 295:20]
      entries_8_beatsLeft <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 297:17]
    end else if (entries_8_busy & datFire_8) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:29]
      entries_8_beatsLeft <= _beatsNext_T_35; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:41]
    end else if (doAlloc_8) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_8_beatsLeft <= _beatsNext_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 277:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_9_busy <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_9_busy <= busyNext_9; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 315:12]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_9_opcode <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_9) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_9_opcode <= io_req_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 328:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_9_resp <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_9) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      if (_legalOp_T_7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 132:20]
        entries_9_resp <= 3'h5;
      end else if (_reqResp_T_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 133:8]
        entries_9_resp <= 3'h0;
      end else begin
        entries_9_resp <= _reqResp_T_7;
      end
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_9_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_9) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_9_snpTxnId <= io_req_bits_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 332:18]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_9_addr <= 48'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_9) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_9_addr <= reqLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 333:14]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_9_data <= 512'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_9) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_9_data <= io_req_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 334:14]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_9_dataReady <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_9_dataReady <= busyNext_9; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 326:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_9_dbid <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_9 & isDbid & ~entries_9_dbidValid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:44]
      entries_9_dbid <= io_rxRsp_bits_dbID; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 282:16]
    end else if (doAlloc_9) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_9_dbid <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 272:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_9_dbidValid <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_9_dbidValid <= dbidValidNext_9; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 318:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_9_compGot <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_9_compGot <= compNext_9; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 317:15]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_9_dataSent <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_9_dataSent <= dataSentNext_9; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 320:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_9_rspSeen <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_9_rspSeen <= rspSeenNext_9; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 321:15]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_9_compSrc <= 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_9 & ~entries_9_rspSeen) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32]
      entries_9_compSrc <= io_rxRsp_bits_srcID; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 287:19]
    end else if (doAlloc_9) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_9_compSrc <= 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 275:19]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_9_traceTag <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_9 & ~entries_9_rspSeen) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32]
      entries_9_traceTag <= io_rxRsp_bits_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 288:17]
    end else if (doAlloc_9) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_9_traceTag <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 276:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_9_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (freeNow_9) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 309:19]
      entries_9_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 311:17]
    end else if (_entering_T_63 & _datStart_T_64 & dataSentNext_9 & ~compNext_9) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 300:86]
      entries_9_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 301:17]
    end else if (evtFire_9) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 299:19]
      entries_9_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 299:31]
    end else begin
      entries_9_state <= _GEN_686;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_9_beatsLeft <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (entering_9) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 295:20]
      entries_9_beatsLeft <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 297:17]
    end else if (entries_9_busy & datFire_9) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:29]
      entries_9_beatsLeft <= _beatsNext_T_39; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:41]
    end else if (doAlloc_9) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_9_beatsLeft <= _beatsNext_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 277:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_10_busy <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_10_busy <= busyNext_10; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 315:12]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_10_opcode <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_10) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_10_opcode <= io_req_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 328:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_10_resp <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_10) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      if (_legalOp_T_7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 132:20]
        entries_10_resp <= 3'h5;
      end else if (_reqResp_T_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 133:8]
        entries_10_resp <= 3'h0;
      end else begin
        entries_10_resp <= _reqResp_T_7;
      end
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_10_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_10) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_10_snpTxnId <= io_req_bits_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 332:18]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_10_addr <= 48'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_10) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_10_addr <= reqLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 333:14]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_10_data <= 512'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_10) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_10_data <= io_req_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 334:14]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_10_dataReady <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_10_dataReady <= busyNext_10; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 326:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_10_dbid <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_10 & isDbid & ~entries_10_dbidValid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:44]
      entries_10_dbid <= io_rxRsp_bits_dbID; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 282:16]
    end else if (doAlloc_10) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_10_dbid <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 272:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_10_dbidValid <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_10_dbidValid <= dbidValidNext_10; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 318:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_10_compGot <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_10_compGot <= compNext_10; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 317:15]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_10_dataSent <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_10_dataSent <= dataSentNext_10; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 320:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_10_rspSeen <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_10_rspSeen <= rspSeenNext_10; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 321:15]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_10_compSrc <= 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_10 & ~entries_10_rspSeen) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32]
      entries_10_compSrc <= io_rxRsp_bits_srcID; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 287:19]
    end else if (doAlloc_10) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_10_compSrc <= 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 275:19]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_10_traceTag <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_10 & ~entries_10_rspSeen) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32]
      entries_10_traceTag <= io_rxRsp_bits_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 288:17]
    end else if (doAlloc_10) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_10_traceTag <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 276:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_10_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (freeNow_10) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 309:19]
      entries_10_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 311:17]
    end else if (_entering_T_70 & _datStart_T_71 & dataSentNext_10 & ~compNext_10) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 300:86]
      entries_10_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 301:17]
    end else if (evtFire_10) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 299:19]
      entries_10_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 299:31]
    end else begin
      entries_10_state <= _GEN_717;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_10_beatsLeft <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (entering_10) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 295:20]
      entries_10_beatsLeft <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 297:17]
    end else if (entries_10_busy & datFire_10) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:29]
      entries_10_beatsLeft <= _beatsNext_T_43; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:41]
    end else if (doAlloc_10) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_10_beatsLeft <= _beatsNext_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 277:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_11_busy <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_11_busy <= busyNext_11; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 315:12]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_11_opcode <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_11) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_11_opcode <= io_req_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 328:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_11_resp <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_11) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      if (_legalOp_T_7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 132:20]
        entries_11_resp <= 3'h5;
      end else if (_reqResp_T_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 133:8]
        entries_11_resp <= 3'h0;
      end else begin
        entries_11_resp <= _reqResp_T_7;
      end
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_11_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_11) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_11_snpTxnId <= io_req_bits_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 332:18]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_11_addr <= 48'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_11) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_11_addr <= reqLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 333:14]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_11_data <= 512'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_11) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_11_data <= io_req_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 334:14]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_11_dataReady <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_11_dataReady <= busyNext_11; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 326:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_11_dbid <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_11 & isDbid & ~entries_11_dbidValid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:44]
      entries_11_dbid <= io_rxRsp_bits_dbID; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 282:16]
    end else if (doAlloc_11) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_11_dbid <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 272:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_11_dbidValid <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_11_dbidValid <= dbidValidNext_11; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 318:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_11_compGot <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_11_compGot <= compNext_11; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 317:15]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_11_dataSent <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_11_dataSent <= dataSentNext_11; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 320:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_11_rspSeen <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_11_rspSeen <= rspSeenNext_11; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 321:15]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_11_compSrc <= 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_11 & ~entries_11_rspSeen) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32]
      entries_11_compSrc <= io_rxRsp_bits_srcID; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 287:19]
    end else if (doAlloc_11) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_11_compSrc <= 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 275:19]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_11_traceTag <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_11 & ~entries_11_rspSeen) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32]
      entries_11_traceTag <= io_rxRsp_bits_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 288:17]
    end else if (doAlloc_11) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_11_traceTag <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 276:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_11_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (freeNow_11) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 309:19]
      entries_11_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 311:17]
    end else if (_entering_T_77 & _datStart_T_78 & dataSentNext_11 & ~compNext_11) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 300:86]
      entries_11_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 301:17]
    end else if (evtFire_11) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 299:19]
      entries_11_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 299:31]
    end else begin
      entries_11_state <= _GEN_748;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_11_beatsLeft <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (entering_11) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 295:20]
      entries_11_beatsLeft <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 297:17]
    end else if (entries_11_busy & datFire_11) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:29]
      entries_11_beatsLeft <= _beatsNext_T_47; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:41]
    end else if (doAlloc_11) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_11_beatsLeft <= _beatsNext_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 277:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_12_busy <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_12_busy <= busyNext_12; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 315:12]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_12_opcode <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_12) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_12_opcode <= io_req_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 328:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_12_resp <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_12) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      if (_legalOp_T_7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 132:20]
        entries_12_resp <= 3'h5;
      end else if (_reqResp_T_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 133:8]
        entries_12_resp <= 3'h0;
      end else begin
        entries_12_resp <= _reqResp_T_7;
      end
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_12_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_12) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_12_snpTxnId <= io_req_bits_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 332:18]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_12_addr <= 48'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_12) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_12_addr <= reqLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 333:14]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_12_data <= 512'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_12) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_12_data <= io_req_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 334:14]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_12_dataReady <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_12_dataReady <= busyNext_12; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 326:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_12_dbid <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_12 & isDbid & ~entries_12_dbidValid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:44]
      entries_12_dbid <= io_rxRsp_bits_dbID; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 282:16]
    end else if (doAlloc_12) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_12_dbid <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 272:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_12_dbidValid <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_12_dbidValid <= dbidValidNext_12; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 318:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_12_compGot <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_12_compGot <= compNext_12; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 317:15]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_12_dataSent <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_12_dataSent <= dataSentNext_12; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 320:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_12_rspSeen <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_12_rspSeen <= rspSeenNext_12; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 321:15]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_12_compSrc <= 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_12 & ~entries_12_rspSeen) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32]
      entries_12_compSrc <= io_rxRsp_bits_srcID; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 287:19]
    end else if (doAlloc_12) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_12_compSrc <= 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 275:19]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_12_traceTag <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_12 & ~entries_12_rspSeen) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32]
      entries_12_traceTag <= io_rxRsp_bits_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 288:17]
    end else if (doAlloc_12) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_12_traceTag <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 276:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_12_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (freeNow_12) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 309:19]
      entries_12_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 311:17]
    end else if (_entering_T_84 & _datStart_T_85 & dataSentNext_12 & ~compNext_12) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 300:86]
      entries_12_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 301:17]
    end else if (evtFire_12) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 299:19]
      entries_12_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 299:31]
    end else begin
      entries_12_state <= _GEN_779;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_12_beatsLeft <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (entering_12) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 295:20]
      entries_12_beatsLeft <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 297:17]
    end else if (entries_12_busy & datFire_12) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:29]
      entries_12_beatsLeft <= _beatsNext_T_51; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:41]
    end else if (doAlloc_12) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_12_beatsLeft <= _beatsNext_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 277:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_13_busy <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_13_busy <= busyNext_13; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 315:12]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_13_opcode <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_13) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_13_opcode <= io_req_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 328:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_13_resp <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_13) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      if (_legalOp_T_7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 132:20]
        entries_13_resp <= 3'h5;
      end else if (_reqResp_T_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 133:8]
        entries_13_resp <= 3'h0;
      end else begin
        entries_13_resp <= _reqResp_T_7;
      end
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_13_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_13) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_13_snpTxnId <= io_req_bits_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 332:18]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_13_addr <= 48'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_13) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_13_addr <= reqLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 333:14]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_13_data <= 512'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_13) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_13_data <= io_req_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 334:14]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_13_dataReady <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_13_dataReady <= busyNext_13; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 326:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_13_dbid <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_13 & isDbid & ~entries_13_dbidValid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:44]
      entries_13_dbid <= io_rxRsp_bits_dbID; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 282:16]
    end else if (doAlloc_13) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_13_dbid <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 272:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_13_dbidValid <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_13_dbidValid <= dbidValidNext_13; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 318:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_13_compGot <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_13_compGot <= compNext_13; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 317:15]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_13_dataSent <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_13_dataSent <= dataSentNext_13; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 320:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_13_rspSeen <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_13_rspSeen <= rspSeenNext_13; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 321:15]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_13_compSrc <= 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_13 & ~entries_13_rspSeen) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32]
      entries_13_compSrc <= io_rxRsp_bits_srcID; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 287:19]
    end else if (doAlloc_13) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_13_compSrc <= 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 275:19]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_13_traceTag <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_13 & ~entries_13_rspSeen) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32]
      entries_13_traceTag <= io_rxRsp_bits_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 288:17]
    end else if (doAlloc_13) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_13_traceTag <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 276:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_13_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (freeNow_13) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 309:19]
      entries_13_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 311:17]
    end else if (_entering_T_91 & _datStart_T_92 & dataSentNext_13 & ~compNext_13) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 300:86]
      entries_13_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 301:17]
    end else if (evtFire_13) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 299:19]
      entries_13_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 299:31]
    end else begin
      entries_13_state <= _GEN_810;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_13_beatsLeft <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (entering_13) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 295:20]
      entries_13_beatsLeft <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 297:17]
    end else if (entries_13_busy & datFire_13) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:29]
      entries_13_beatsLeft <= _beatsNext_T_55; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:41]
    end else if (doAlloc_13) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_13_beatsLeft <= _beatsNext_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 277:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_14_busy <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_14_busy <= busyNext_14; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 315:12]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_14_opcode <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_14) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_14_opcode <= io_req_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 328:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_14_resp <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_14) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      if (_legalOp_T_7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 132:20]
        entries_14_resp <= 3'h5;
      end else if (_reqResp_T_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 133:8]
        entries_14_resp <= 3'h0;
      end else begin
        entries_14_resp <= _reqResp_T_7;
      end
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_14_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_14) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_14_snpTxnId <= io_req_bits_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 332:18]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_14_addr <= 48'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_14) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_14_addr <= reqLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 333:14]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_14_data <= 512'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_14) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_14_data <= io_req_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 334:14]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_14_dataReady <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_14_dataReady <= busyNext_14; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 326:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_14_dbid <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_14 & isDbid & ~entries_14_dbidValid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:44]
      entries_14_dbid <= io_rxRsp_bits_dbID; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 282:16]
    end else if (doAlloc_14) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_14_dbid <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 272:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_14_dbidValid <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_14_dbidValid <= dbidValidNext_14; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 318:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_14_compGot <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_14_compGot <= compNext_14; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 317:15]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_14_dataSent <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_14_dataSent <= dataSentNext_14; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 320:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_14_rspSeen <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_14_rspSeen <= rspSeenNext_14; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 321:15]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_14_compSrc <= 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_14 & ~entries_14_rspSeen) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32]
      entries_14_compSrc <= io_rxRsp_bits_srcID; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 287:19]
    end else if (doAlloc_14) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_14_compSrc <= 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 275:19]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_14_traceTag <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_14 & ~entries_14_rspSeen) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32]
      entries_14_traceTag <= io_rxRsp_bits_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 288:17]
    end else if (doAlloc_14) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_14_traceTag <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 276:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_14_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (freeNow_14) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 309:19]
      entries_14_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 311:17]
    end else if (_entering_T_98 & _datStart_T_99 & dataSentNext_14 & ~compNext_14) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 300:86]
      entries_14_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 301:17]
    end else if (evtFire_14) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 299:19]
      entries_14_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 299:31]
    end else begin
      entries_14_state <= _GEN_841;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_14_beatsLeft <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (entering_14) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 295:20]
      entries_14_beatsLeft <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 297:17]
    end else if (entries_14_busy & datFire_14) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:29]
      entries_14_beatsLeft <= _beatsNext_T_59; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:41]
    end else if (doAlloc_14) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_14_beatsLeft <= _beatsNext_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 277:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_15_busy <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_15_busy <= busyNext_15; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 315:12]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_15_opcode <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_15) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_15_opcode <= io_req_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 328:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_15_resp <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_15) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      if (_legalOp_T_7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 132:20]
        entries_15_resp <= 3'h5;
      end else if (_reqResp_T_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 133:8]
        entries_15_resp <= 3'h0;
      end else begin
        entries_15_resp <= _reqResp_T_7;
      end
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_15_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_15) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_15_snpTxnId <= io_req_bits_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 332:18]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_15_addr <= 48'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_15) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_15_addr <= reqLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 333:14]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_15_data <= 512'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_15) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_15_data <= io_req_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 334:14]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_15_dataReady <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_15_dataReady <= busyNext_15; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 326:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_15_dbid <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_15 & isDbid & ~entries_15_dbidValid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:44]
      entries_15_dbid <= io_rxRsp_bits_dbID; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 282:16]
    end else if (doAlloc_15) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_15_dbid <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 272:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_15_dbidValid <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_15_dbidValid <= dbidValidNext_15; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 318:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_15_compGot <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_15_compGot <= compNext_15; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 317:15]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_15_dataSent <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_15_dataSent <= dataSentNext_15; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 320:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_15_rspSeen <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_15_rspSeen <= rspSeenNext_15; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 321:15]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_15_compSrc <= 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_15 & ~entries_15_rspSeen) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32]
      entries_15_compSrc <= io_rxRsp_bits_srcID; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 287:19]
    end else if (doAlloc_15) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_15_compSrc <= 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 275:19]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_15_traceTag <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_15 & ~entries_15_rspSeen) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32]
      entries_15_traceTag <= io_rxRsp_bits_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 288:17]
    end else if (doAlloc_15) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_15_traceTag <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 276:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_15_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (freeNow_15) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 309:19]
      entries_15_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 311:17]
    end else if (_entering_T_105 & _datStart_T_106 & dataSentNext_15 & ~compNext_15) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 300:86]
      entries_15_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 301:17]
    end else if (evtFire_15) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 299:19]
      entries_15_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 299:31]
    end else begin
      entries_15_state <= _GEN_872;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_15_beatsLeft <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (entering_15) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 295:20]
      entries_15_beatsLeft <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 297:17]
    end else if (entries_15_busy & datFire_15) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:29]
      entries_15_beatsLeft <= _beatsNext_T_63; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:41]
    end else if (doAlloc_15) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_15_beatsLeft <= _beatsNext_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 277:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_16_busy <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_16_busy <= busyNext_16; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 315:12]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_16_opcode <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_16) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_16_opcode <= io_req_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 328:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_16_resp <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_16) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      if (_legalOp_T_7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 132:20]
        entries_16_resp <= 3'h5;
      end else if (_reqResp_T_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 133:8]
        entries_16_resp <= 3'h0;
      end else begin
        entries_16_resp <= _reqResp_T_7;
      end
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_16_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_16) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_16_snpTxnId <= io_req_bits_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 332:18]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_16_addr <= 48'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_16) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_16_addr <= reqLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 333:14]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_16_data <= 512'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_16) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_16_data <= io_req_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 334:14]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_16_dataReady <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_16_dataReady <= busyNext_16; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 326:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_16_dbid <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_16 & isDbid & ~entries_16_dbidValid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:44]
      entries_16_dbid <= io_rxRsp_bits_dbID; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 282:16]
    end else if (doAlloc_16) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_16_dbid <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 272:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_16_dbidValid <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_16_dbidValid <= dbidValidNext_16; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 318:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_16_compGot <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_16_compGot <= compNext_16; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 317:15]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_16_dataSent <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_16_dataSent <= dataSentNext_16; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 320:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_16_rspSeen <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_16_rspSeen <= rspSeenNext_16; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 321:15]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_16_compSrc <= 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_16 & ~entries_16_rspSeen) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32]
      entries_16_compSrc <= io_rxRsp_bits_srcID; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 287:19]
    end else if (doAlloc_16) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_16_compSrc <= 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 275:19]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_16_traceTag <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_16 & ~entries_16_rspSeen) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32]
      entries_16_traceTag <= io_rxRsp_bits_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 288:17]
    end else if (doAlloc_16) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_16_traceTag <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 276:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_16_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (freeNow_16) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 309:19]
      entries_16_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 311:17]
    end else if (_entering_T_112 & _datStart_T_113 & dataSentNext_16 & ~compNext_16) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 300:86]
      entries_16_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 301:17]
    end else if (evtFire_16) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 299:19]
      entries_16_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 299:31]
    end else begin
      entries_16_state <= _GEN_903;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_16_beatsLeft <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (entering_16) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 295:20]
      entries_16_beatsLeft <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 297:17]
    end else if (entries_16_busy & datFire_16) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:29]
      entries_16_beatsLeft <= _beatsNext_T_67; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:41]
    end else if (doAlloc_16) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_16_beatsLeft <= _beatsNext_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 277:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_17_busy <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_17_busy <= busyNext_17; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 315:12]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_17_opcode <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_17) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_17_opcode <= io_req_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 328:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_17_resp <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_17) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      if (_legalOp_T_7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 132:20]
        entries_17_resp <= 3'h5;
      end else if (_reqResp_T_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 133:8]
        entries_17_resp <= 3'h0;
      end else begin
        entries_17_resp <= _reqResp_T_7;
      end
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_17_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_17) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_17_snpTxnId <= io_req_bits_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 332:18]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_17_addr <= 48'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_17) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_17_addr <= reqLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 333:14]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_17_data <= 512'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (doAlloc_17) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 327:19]
      entries_17_data <= io_req_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 334:14]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_17_dataReady <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_17_dataReady <= busyNext_17; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 326:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_17_dbid <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_17 & isDbid & ~entries_17_dbidValid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 281:44]
      entries_17_dbid <= io_rxRsp_bits_dbID; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 282:16]
    end else if (doAlloc_17) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_17_dbid <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 272:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_17_dbidValid <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_17_dbidValid <= dbidValidNext_17; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 318:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_17_compGot <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_17_compGot <= compNext_17; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 317:15]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_17_dataSent <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_17_dataSent <= dataSentNext_17; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 320:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_17_rspSeen <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else begin
      entries_17_rspSeen <= rspSeenNext_17; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 321:15]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_17_compSrc <= 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_17 & ~entries_17_rspSeen) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32]
      entries_17_compSrc <= io_rxRsp_bits_srcID; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 287:19]
    end else if (doAlloc_17) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_17_compSrc <= 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 275:19]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_17_traceTag <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (rspHit_17 & ~entries_17_rspSeen) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 285:32]
      entries_17_traceTag <= io_rxRsp_bits_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 288:17]
    end else if (doAlloc_17) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_17_traceTag <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 276:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_17_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (freeNow_17) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 309:19]
      entries_17_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 311:17]
    end else if (_entering_T_119 & _datStart_T_120 & dataSentNext_17 & ~compNext_17) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 300:86]
      entries_17_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 301:17]
    end else if (evtFire_17) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 299:19]
      entries_17_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 299:31]
    end else begin
      entries_17_state <= _GEN_934;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
      entries_17_beatsLeft <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 105:24]
    end else if (entering_17) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 295:20]
      entries_17_beatsLeft <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 297:17]
    end else if (entries_17_busy & datFire_17) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:29]
      entries_17_beatsLeft <= _beatsNext_T_71; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 291:41]
    end else if (doAlloc_17) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 269:19]
      entries_17_beatsLeft <= _beatsNext_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 277:17]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 136:24]
      evtHold <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 136:24]
    end else if (_T) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 199:23]
      evtHold <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 200:13]
    end else begin
      evtHold <= _GEN_360;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 137:27]
      evtHoldIdx <= 5'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 137:27]
    end else if (!(_T)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 199:23]
      if (io_txEvt_valid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 201:30]
        if (!(evtHold)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 155:19]
          evtHoldIdx <= _evtIdx_T_35;
        end
      end
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 138:24]
      rspHold <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 138:24]
    end else if (_T_1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 205:23]
      rspHold <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 206:13]
    end else begin
      rspHold <= _GEN_364;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 139:27]
      rspHoldIdx <= 5'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 139:27]
    end else if (!(_T_1)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 205:23]
      if (io_txRsp_valid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 207:30]
        if (!(rspHold)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 156:19]
          rspHoldIdx <= _rspIdx_T_35;
        end
      end
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 140:24]
      datHold <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 140:24]
    end else if (_T_2 & _GEN_215 == 2'h1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 211:53]
      datHold <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 212:13]
    end else begin
      datHold <= _GEN_368;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 141:27]
      datHoldIdx <= 5'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 141:27]
    end else if (!(_T_2 & _GEN_215 == 2'h1)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 211:53]
      if (io_txDat_valid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 213:30]
        if (!(datHeld)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 157:19]
          datHoldIdx <= _datIdx_T_35;
        end
      end
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (rspHit & ~reset & ~_T_24) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback RXRSP opcode is not a completion or a DBID\n    at WriteBackQueue.scala:338 assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (rspHit & ~reset & ~_T_24) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1038 & ~(entries_0_opcode != 3'h0 | isComp)) begin
          $fwrite(32'h80000002,
            "Assertion failed: Evict waits for Comp or CompDBIDResp\n    at WriteBackQueue.scala:342 assert(e.opcode =/= WbOpcode.Evict || isComp,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 342:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1038 & ~(entries_0_opcode != 3'h0 | isComp)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 342:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1038 & ~(~isComp | ~entries_0_compGot)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback completion arrived twice\n    at WriteBackQueue.scala:344 assert(!isComp || !e.compGot, \"writeback completion arrived twice\")\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 344:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1038 & ~(~isComp | ~entries_0_compGot)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 344:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1038 & ~(_T_7 | ~isDbid | entries_0_dbid == io_rxRsp_bits_dbID)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback DBID changed\n    at WriteBackQueue.scala:345 assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 345:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1038 & ~(_T_7 | ~isDbid | entries_0_dbid == io_rxRsp_bits_dbID)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 345:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(_T_49[1:0] <= 2'h1)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one writeback entry can use only one channel\n    at WriteBackQueue.scala:348 assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(_T_49[1:0] <= 2'h1)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (rspHit_1 & ~reset & ~_T_24) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback RXRSP opcode is not a completion or a DBID\n    at WriteBackQueue.scala:338 assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (rspHit_1 & ~reset & ~_T_24) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1051 & ~(entries_1_opcode != 3'h0 | isComp)) begin
          $fwrite(32'h80000002,
            "Assertion failed: Evict waits for Comp or CompDBIDResp\n    at WriteBackQueue.scala:342 assert(e.opcode =/= WbOpcode.Evict || isComp,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 342:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1051 & ~(entries_1_opcode != 3'h0 | isComp)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 342:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1051 & ~(~isComp | ~entries_1_compGot)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback completion arrived twice\n    at WriteBackQueue.scala:344 assert(!isComp || !e.compGot, \"writeback completion arrived twice\")\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 344:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1051 & ~(~isComp | ~entries_1_compGot)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 344:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1051 & ~(_T_57 | ~isDbid | entries_1_dbid == io_rxRsp_bits_dbID)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback DBID changed\n    at WriteBackQueue.scala:345 assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 345:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1051 & ~(_T_57 | ~isDbid | entries_1_dbid == io_rxRsp_bits_dbID)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 345:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(_T_99[1:0] <= 2'h1)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one writeback entry can use only one channel\n    at WriteBackQueue.scala:348 assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(_T_99[1:0] <= 2'h1)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (rspHit_2 & ~reset & ~_T_24) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback RXRSP opcode is not a completion or a DBID\n    at WriteBackQueue.scala:338 assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (rspHit_2 & ~reset & ~_T_24) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1064 & ~(entries_2_opcode != 3'h0 | isComp)) begin
          $fwrite(32'h80000002,
            "Assertion failed: Evict waits for Comp or CompDBIDResp\n    at WriteBackQueue.scala:342 assert(e.opcode =/= WbOpcode.Evict || isComp,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 342:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1064 & ~(entries_2_opcode != 3'h0 | isComp)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 342:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1064 & ~(~isComp | ~entries_2_compGot)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback completion arrived twice\n    at WriteBackQueue.scala:344 assert(!isComp || !e.compGot, \"writeback completion arrived twice\")\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 344:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1064 & ~(~isComp | ~entries_2_compGot)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 344:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1064 & ~(_T_107 | ~isDbid | entries_2_dbid == io_rxRsp_bits_dbID)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback DBID changed\n    at WriteBackQueue.scala:345 assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 345:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1064 & ~(_T_107 | ~isDbid | entries_2_dbid == io_rxRsp_bits_dbID)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 345:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(_T_149[1:0] <= 2'h1)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one writeback entry can use only one channel\n    at WriteBackQueue.scala:348 assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(_T_149[1:0] <= 2'h1)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (rspHit_3 & ~reset & ~_T_24) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback RXRSP opcode is not a completion or a DBID\n    at WriteBackQueue.scala:338 assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (rspHit_3 & ~reset & ~_T_24) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1077 & ~(entries_3_opcode != 3'h0 | isComp)) begin
          $fwrite(32'h80000002,
            "Assertion failed: Evict waits for Comp or CompDBIDResp\n    at WriteBackQueue.scala:342 assert(e.opcode =/= WbOpcode.Evict || isComp,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 342:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1077 & ~(entries_3_opcode != 3'h0 | isComp)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 342:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1077 & ~(~isComp | ~entries_3_compGot)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback completion arrived twice\n    at WriteBackQueue.scala:344 assert(!isComp || !e.compGot, \"writeback completion arrived twice\")\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 344:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1077 & ~(~isComp | ~entries_3_compGot)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 344:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1077 & ~(_T_157 | ~isDbid | entries_3_dbid == io_rxRsp_bits_dbID)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback DBID changed\n    at WriteBackQueue.scala:345 assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 345:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1077 & ~(_T_157 | ~isDbid | entries_3_dbid == io_rxRsp_bits_dbID)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 345:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(_T_199[1:0] <= 2'h1)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one writeback entry can use only one channel\n    at WriteBackQueue.scala:348 assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(_T_199[1:0] <= 2'h1)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (rspHit_4 & ~reset & ~_T_24) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback RXRSP opcode is not a completion or a DBID\n    at WriteBackQueue.scala:338 assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (rspHit_4 & ~reset & ~_T_24) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1090 & ~(entries_4_opcode != 3'h0 | isComp)) begin
          $fwrite(32'h80000002,
            "Assertion failed: Evict waits for Comp or CompDBIDResp\n    at WriteBackQueue.scala:342 assert(e.opcode =/= WbOpcode.Evict || isComp,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 342:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1090 & ~(entries_4_opcode != 3'h0 | isComp)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 342:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1090 & ~(~isComp | ~entries_4_compGot)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback completion arrived twice\n    at WriteBackQueue.scala:344 assert(!isComp || !e.compGot, \"writeback completion arrived twice\")\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 344:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1090 & ~(~isComp | ~entries_4_compGot)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 344:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1090 & ~(_T_207 | ~isDbid | entries_4_dbid == io_rxRsp_bits_dbID)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback DBID changed\n    at WriteBackQueue.scala:345 assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 345:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1090 & ~(_T_207 | ~isDbid | entries_4_dbid == io_rxRsp_bits_dbID)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 345:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(_T_249[1:0] <= 2'h1)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one writeback entry can use only one channel\n    at WriteBackQueue.scala:348 assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(_T_249[1:0] <= 2'h1)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (rspHit_5 & ~reset & ~_T_24) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback RXRSP opcode is not a completion or a DBID\n    at WriteBackQueue.scala:338 assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (rspHit_5 & ~reset & ~_T_24) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1103 & ~(entries_5_opcode != 3'h0 | isComp)) begin
          $fwrite(32'h80000002,
            "Assertion failed: Evict waits for Comp or CompDBIDResp\n    at WriteBackQueue.scala:342 assert(e.opcode =/= WbOpcode.Evict || isComp,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 342:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1103 & ~(entries_5_opcode != 3'h0 | isComp)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 342:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1103 & ~(~isComp | ~entries_5_compGot)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback completion arrived twice\n    at WriteBackQueue.scala:344 assert(!isComp || !e.compGot, \"writeback completion arrived twice\")\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 344:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1103 & ~(~isComp | ~entries_5_compGot)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 344:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1103 & ~(_T_257 | ~isDbid | entries_5_dbid == io_rxRsp_bits_dbID)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback DBID changed\n    at WriteBackQueue.scala:345 assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 345:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1103 & ~(_T_257 | ~isDbid | entries_5_dbid == io_rxRsp_bits_dbID)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 345:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(_T_299[1:0] <= 2'h1)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one writeback entry can use only one channel\n    at WriteBackQueue.scala:348 assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(_T_299[1:0] <= 2'h1)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (rspHit_6 & ~reset & ~_T_24) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback RXRSP opcode is not a completion or a DBID\n    at WriteBackQueue.scala:338 assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (rspHit_6 & ~reset & ~_T_24) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1116 & ~(entries_6_opcode != 3'h0 | isComp)) begin
          $fwrite(32'h80000002,
            "Assertion failed: Evict waits for Comp or CompDBIDResp\n    at WriteBackQueue.scala:342 assert(e.opcode =/= WbOpcode.Evict || isComp,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 342:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1116 & ~(entries_6_opcode != 3'h0 | isComp)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 342:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1116 & ~(~isComp | ~entries_6_compGot)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback completion arrived twice\n    at WriteBackQueue.scala:344 assert(!isComp || !e.compGot, \"writeback completion arrived twice\")\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 344:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1116 & ~(~isComp | ~entries_6_compGot)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 344:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1116 & ~(_T_307 | ~isDbid | entries_6_dbid == io_rxRsp_bits_dbID)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback DBID changed\n    at WriteBackQueue.scala:345 assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 345:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1116 & ~(_T_307 | ~isDbid | entries_6_dbid == io_rxRsp_bits_dbID)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 345:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(_T_349[1:0] <= 2'h1)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one writeback entry can use only one channel\n    at WriteBackQueue.scala:348 assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(_T_349[1:0] <= 2'h1)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (rspHit_7 & ~reset & ~_T_24) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback RXRSP opcode is not a completion or a DBID\n    at WriteBackQueue.scala:338 assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (rspHit_7 & ~reset & ~_T_24) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1129 & ~(entries_7_opcode != 3'h0 | isComp)) begin
          $fwrite(32'h80000002,
            "Assertion failed: Evict waits for Comp or CompDBIDResp\n    at WriteBackQueue.scala:342 assert(e.opcode =/= WbOpcode.Evict || isComp,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 342:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1129 & ~(entries_7_opcode != 3'h0 | isComp)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 342:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1129 & ~(~isComp | ~entries_7_compGot)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback completion arrived twice\n    at WriteBackQueue.scala:344 assert(!isComp || !e.compGot, \"writeback completion arrived twice\")\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 344:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1129 & ~(~isComp | ~entries_7_compGot)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 344:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1129 & ~(_T_357 | ~isDbid | entries_7_dbid == io_rxRsp_bits_dbID)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback DBID changed\n    at WriteBackQueue.scala:345 assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 345:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1129 & ~(_T_357 | ~isDbid | entries_7_dbid == io_rxRsp_bits_dbID)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 345:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(_T_399[1:0] <= 2'h1)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one writeback entry can use only one channel\n    at WriteBackQueue.scala:348 assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(_T_399[1:0] <= 2'h1)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (rspHit_8 & ~reset & ~_T_24) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback RXRSP opcode is not a completion or a DBID\n    at WriteBackQueue.scala:338 assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (rspHit_8 & ~reset & ~_T_24) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1142 & ~(entries_8_opcode != 3'h0 | isComp)) begin
          $fwrite(32'h80000002,
            "Assertion failed: Evict waits for Comp or CompDBIDResp\n    at WriteBackQueue.scala:342 assert(e.opcode =/= WbOpcode.Evict || isComp,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 342:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1142 & ~(entries_8_opcode != 3'h0 | isComp)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 342:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1142 & ~(~isComp | ~entries_8_compGot)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback completion arrived twice\n    at WriteBackQueue.scala:344 assert(!isComp || !e.compGot, \"writeback completion arrived twice\")\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 344:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1142 & ~(~isComp | ~entries_8_compGot)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 344:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1142 & ~(_T_407 | ~isDbid | entries_8_dbid == io_rxRsp_bits_dbID)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback DBID changed\n    at WriteBackQueue.scala:345 assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 345:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1142 & ~(_T_407 | ~isDbid | entries_8_dbid == io_rxRsp_bits_dbID)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 345:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(_T_449[1:0] <= 2'h1)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one writeback entry can use only one channel\n    at WriteBackQueue.scala:348 assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(_T_449[1:0] <= 2'h1)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (rspHit_9 & ~reset & ~_T_24) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback RXRSP opcode is not a completion or a DBID\n    at WriteBackQueue.scala:338 assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (rspHit_9 & ~reset & ~_T_24) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1155 & ~(entries_9_opcode != 3'h0 | isComp)) begin
          $fwrite(32'h80000002,
            "Assertion failed: Evict waits for Comp or CompDBIDResp\n    at WriteBackQueue.scala:342 assert(e.opcode =/= WbOpcode.Evict || isComp,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 342:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1155 & ~(entries_9_opcode != 3'h0 | isComp)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 342:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1155 & ~(~isComp | ~entries_9_compGot)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback completion arrived twice\n    at WriteBackQueue.scala:344 assert(!isComp || !e.compGot, \"writeback completion arrived twice\")\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 344:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1155 & ~(~isComp | ~entries_9_compGot)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 344:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1155 & ~(_T_457 | ~isDbid | entries_9_dbid == io_rxRsp_bits_dbID)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback DBID changed\n    at WriteBackQueue.scala:345 assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 345:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1155 & ~(_T_457 | ~isDbid | entries_9_dbid == io_rxRsp_bits_dbID)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 345:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(_T_499[1:0] <= 2'h1)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one writeback entry can use only one channel\n    at WriteBackQueue.scala:348 assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(_T_499[1:0] <= 2'h1)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (rspHit_10 & ~reset & ~_T_24) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback RXRSP opcode is not a completion or a DBID\n    at WriteBackQueue.scala:338 assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (rspHit_10 & ~reset & ~_T_24) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1168 & ~(entries_10_opcode != 3'h0 | isComp)) begin
          $fwrite(32'h80000002,
            "Assertion failed: Evict waits for Comp or CompDBIDResp\n    at WriteBackQueue.scala:342 assert(e.opcode =/= WbOpcode.Evict || isComp,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 342:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1168 & ~(entries_10_opcode != 3'h0 | isComp)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 342:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1168 & ~(~isComp | ~entries_10_compGot)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback completion arrived twice\n    at WriteBackQueue.scala:344 assert(!isComp || !e.compGot, \"writeback completion arrived twice\")\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 344:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1168 & ~(~isComp | ~entries_10_compGot)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 344:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1168 & ~(_T_507 | ~isDbid | entries_10_dbid == io_rxRsp_bits_dbID)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback DBID changed\n    at WriteBackQueue.scala:345 assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 345:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1168 & ~(_T_507 | ~isDbid | entries_10_dbid == io_rxRsp_bits_dbID)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 345:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(_T_549[1:0] <= 2'h1)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one writeback entry can use only one channel\n    at WriteBackQueue.scala:348 assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(_T_549[1:0] <= 2'h1)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (rspHit_11 & ~reset & ~_T_24) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback RXRSP opcode is not a completion or a DBID\n    at WriteBackQueue.scala:338 assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (rspHit_11 & ~reset & ~_T_24) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1181 & ~(entries_11_opcode != 3'h0 | isComp)) begin
          $fwrite(32'h80000002,
            "Assertion failed: Evict waits for Comp or CompDBIDResp\n    at WriteBackQueue.scala:342 assert(e.opcode =/= WbOpcode.Evict || isComp,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 342:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1181 & ~(entries_11_opcode != 3'h0 | isComp)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 342:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1181 & ~(~isComp | ~entries_11_compGot)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback completion arrived twice\n    at WriteBackQueue.scala:344 assert(!isComp || !e.compGot, \"writeback completion arrived twice\")\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 344:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1181 & ~(~isComp | ~entries_11_compGot)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 344:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1181 & ~(_T_557 | ~isDbid | entries_11_dbid == io_rxRsp_bits_dbID)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback DBID changed\n    at WriteBackQueue.scala:345 assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 345:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1181 & ~(_T_557 | ~isDbid | entries_11_dbid == io_rxRsp_bits_dbID)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 345:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(_T_599[1:0] <= 2'h1)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one writeback entry can use only one channel\n    at WriteBackQueue.scala:348 assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(_T_599[1:0] <= 2'h1)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (rspHit_12 & ~reset & ~_T_24) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback RXRSP opcode is not a completion or a DBID\n    at WriteBackQueue.scala:338 assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (rspHit_12 & ~reset & ~_T_24) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1194 & ~(entries_12_opcode != 3'h0 | isComp)) begin
          $fwrite(32'h80000002,
            "Assertion failed: Evict waits for Comp or CompDBIDResp\n    at WriteBackQueue.scala:342 assert(e.opcode =/= WbOpcode.Evict || isComp,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 342:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1194 & ~(entries_12_opcode != 3'h0 | isComp)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 342:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1194 & ~(~isComp | ~entries_12_compGot)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback completion arrived twice\n    at WriteBackQueue.scala:344 assert(!isComp || !e.compGot, \"writeback completion arrived twice\")\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 344:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1194 & ~(~isComp | ~entries_12_compGot)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 344:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1194 & ~(_T_607 | ~isDbid | entries_12_dbid == io_rxRsp_bits_dbID)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback DBID changed\n    at WriteBackQueue.scala:345 assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 345:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1194 & ~(_T_607 | ~isDbid | entries_12_dbid == io_rxRsp_bits_dbID)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 345:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(_T_649[1:0] <= 2'h1)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one writeback entry can use only one channel\n    at WriteBackQueue.scala:348 assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(_T_649[1:0] <= 2'h1)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (rspHit_13 & ~reset & ~_T_24) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback RXRSP opcode is not a completion or a DBID\n    at WriteBackQueue.scala:338 assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (rspHit_13 & ~reset & ~_T_24) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1207 & ~(entries_13_opcode != 3'h0 | isComp)) begin
          $fwrite(32'h80000002,
            "Assertion failed: Evict waits for Comp or CompDBIDResp\n    at WriteBackQueue.scala:342 assert(e.opcode =/= WbOpcode.Evict || isComp,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 342:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1207 & ~(entries_13_opcode != 3'h0 | isComp)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 342:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1207 & ~(~isComp | ~entries_13_compGot)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback completion arrived twice\n    at WriteBackQueue.scala:344 assert(!isComp || !e.compGot, \"writeback completion arrived twice\")\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 344:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1207 & ~(~isComp | ~entries_13_compGot)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 344:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1207 & ~(_T_657 | ~isDbid | entries_13_dbid == io_rxRsp_bits_dbID)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback DBID changed\n    at WriteBackQueue.scala:345 assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 345:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1207 & ~(_T_657 | ~isDbid | entries_13_dbid == io_rxRsp_bits_dbID)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 345:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(_T_699[1:0] <= 2'h1)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one writeback entry can use only one channel\n    at WriteBackQueue.scala:348 assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(_T_699[1:0] <= 2'h1)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (rspHit_14 & ~reset & ~_T_24) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback RXRSP opcode is not a completion or a DBID\n    at WriteBackQueue.scala:338 assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (rspHit_14 & ~reset & ~_T_24) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1220 & ~(entries_14_opcode != 3'h0 | isComp)) begin
          $fwrite(32'h80000002,
            "Assertion failed: Evict waits for Comp or CompDBIDResp\n    at WriteBackQueue.scala:342 assert(e.opcode =/= WbOpcode.Evict || isComp,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 342:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1220 & ~(entries_14_opcode != 3'h0 | isComp)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 342:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1220 & ~(~isComp | ~entries_14_compGot)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback completion arrived twice\n    at WriteBackQueue.scala:344 assert(!isComp || !e.compGot, \"writeback completion arrived twice\")\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 344:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1220 & ~(~isComp | ~entries_14_compGot)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 344:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1220 & ~(_T_707 | ~isDbid | entries_14_dbid == io_rxRsp_bits_dbID)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback DBID changed\n    at WriteBackQueue.scala:345 assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 345:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1220 & ~(_T_707 | ~isDbid | entries_14_dbid == io_rxRsp_bits_dbID)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 345:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(_T_749[1:0] <= 2'h1)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one writeback entry can use only one channel\n    at WriteBackQueue.scala:348 assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(_T_749[1:0] <= 2'h1)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (rspHit_15 & ~reset & ~_T_24) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback RXRSP opcode is not a completion or a DBID\n    at WriteBackQueue.scala:338 assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (rspHit_15 & ~reset & ~_T_24) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1233 & ~(entries_15_opcode != 3'h0 | isComp)) begin
          $fwrite(32'h80000002,
            "Assertion failed: Evict waits for Comp or CompDBIDResp\n    at WriteBackQueue.scala:342 assert(e.opcode =/= WbOpcode.Evict || isComp,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 342:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1233 & ~(entries_15_opcode != 3'h0 | isComp)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 342:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1233 & ~(~isComp | ~entries_15_compGot)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback completion arrived twice\n    at WriteBackQueue.scala:344 assert(!isComp || !e.compGot, \"writeback completion arrived twice\")\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 344:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1233 & ~(~isComp | ~entries_15_compGot)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 344:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1233 & ~(_T_757 | ~isDbid | entries_15_dbid == io_rxRsp_bits_dbID)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback DBID changed\n    at WriteBackQueue.scala:345 assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 345:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1233 & ~(_T_757 | ~isDbid | entries_15_dbid == io_rxRsp_bits_dbID)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 345:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(_T_799[1:0] <= 2'h1)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one writeback entry can use only one channel\n    at WriteBackQueue.scala:348 assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(_T_799[1:0] <= 2'h1)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (rspHit_16 & ~reset & ~_T_24) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback RXRSP opcode is not a completion or a DBID\n    at WriteBackQueue.scala:338 assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (rspHit_16 & ~reset & ~_T_24) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1246 & ~(entries_16_opcode != 3'h0 | isComp)) begin
          $fwrite(32'h80000002,
            "Assertion failed: Evict waits for Comp or CompDBIDResp\n    at WriteBackQueue.scala:342 assert(e.opcode =/= WbOpcode.Evict || isComp,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 342:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1246 & ~(entries_16_opcode != 3'h0 | isComp)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 342:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1246 & ~(~isComp | ~entries_16_compGot)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback completion arrived twice\n    at WriteBackQueue.scala:344 assert(!isComp || !e.compGot, \"writeback completion arrived twice\")\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 344:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1246 & ~(~isComp | ~entries_16_compGot)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 344:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1246 & ~(_T_807 | ~isDbid | entries_16_dbid == io_rxRsp_bits_dbID)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback DBID changed\n    at WriteBackQueue.scala:345 assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 345:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1246 & ~(_T_807 | ~isDbid | entries_16_dbid == io_rxRsp_bits_dbID)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 345:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(_T_849[1:0] <= 2'h1)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one writeback entry can use only one channel\n    at WriteBackQueue.scala:348 assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(_T_849[1:0] <= 2'h1)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (rspHit_17 & ~reset & ~_T_24) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback RXRSP opcode is not a completion or a DBID\n    at WriteBackQueue.scala:338 assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (rspHit_17 & ~reset & ~_T_24) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 338:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1259 & ~(entries_17_opcode != 3'h0 | isComp)) begin
          $fwrite(32'h80000002,
            "Assertion failed: Evict waits for Comp or CompDBIDResp\n    at WriteBackQueue.scala:342 assert(e.opcode =/= WbOpcode.Evict || isComp,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 342:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1259 & ~(entries_17_opcode != 3'h0 | isComp)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 342:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1259 & ~(~isComp | ~entries_17_compGot)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback completion arrived twice\n    at WriteBackQueue.scala:344 assert(!isComp || !e.compGot, \"writeback completion arrived twice\")\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 344:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1259 & ~(~isComp | ~entries_17_compGot)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 344:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_1259 & ~(_T_857 | ~isDbid | entries_17_dbid == io_rxRsp_bits_dbID)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback DBID changed\n    at WriteBackQueue.scala:345 assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 345:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_GEN_1259 & ~(_T_857 | ~isDbid | entries_17_dbid == io_rxRsp_bits_dbID)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 345:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(_T_899[1:0] <= 2'h1)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one writeback entry can use only one channel\n    at WriteBackQueue.scala:348 assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(_T_899[1:0] <= 2'h1)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 348:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(~io_req_valid | legalOp)) begin
          $fwrite(32'h80000002,
            "Assertion failed: WriteEvictFull is off, opcode must be known\n    at WriteBackQueue.scala:360 assert(!io.req.valid || legalOp, \"WriteEvictFull is off, opcode must be known\")\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 360:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(~io_req_valid | legalOp)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 360:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(_T_905 | io_req_bits_addr[5:0] == 6'h0)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback address must be line aligned\n    at WriteBackQueue.scala:361 assert(!io.req.valid || req.addr(blockOffBits - 1, 0) === 0.U, \"writeback address must be line aligned\")\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 361:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(_T_905 | io_req_bits_addr[5:0] == 6'h0)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 361:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(_T_905 | io_req_bits_opcode != 3'h5 | io_req_bits_passDirty)) begin
          $fwrite(32'h80000002,
            "Assertion failed: PassDirty request must set passDirty\n    at WriteBackQueue.scala:362 assert(!io.req.valid || req.opcode =/= WbOpcode.PassDirty || req.passDirty,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 362:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(_T_905 | io_req_bits_opcode != 3'h5 | io_req_bits_passDirty)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 362:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(_T_905 | io_req_bits_opcode != 3'h0 & io_req_bits_opcode != 3'h3 | ~io_req_bits_passDirty)) begin
          $fwrite(32'h80000002,
            "Assertion failed: Evict and SnpResp do not carry data\n    at WriteBackQueue.scala:364 assert(!io.req.valid || (req.opcode =/= WbOpcode.Evict && req.opcode =/= WbOpcode.SnpResp) || !req.passDirty,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 364:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(_T_905 | io_req_bits_opcode != 3'h0 & io_req_bits_opcode != 3'h3 | ~io_req_bits_passDirty)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 364:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(~_doAlloc_T | _T_946)) begin
          $fwrite(32'h80000002,
            "Assertion failed: writeback response state is not a CHI resp\n    at WriteBackQueue.scala:366 assert(!io.req.fire || legalResp(reqResp), \"writeback response state is not a CHI resp\")\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 366:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(~_doAlloc_T | _T_946)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 366:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(~io_rxRsp_valid | rspInRange)) begin
          $fwrite(32'h80000002,
            "Assertion failed: RXRSP txnId is outside writeback ids 17 to 34\n    at WriteBackQueue.scala:367 assert(!io.rxRsp.valid || rspInRange, \"RXRSP txnId is outside writeback ids 17 to 34\")\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 367:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(~io_rxRsp_valid | rspInRange)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 367:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(_T_951 | rspExpect)) begin
          $fwrite(32'h80000002,
            "Assertion failed: RXRSP writeback id is not waiting\n    at WriteBackQueue.scala:368 assert(!io.rxRsp.valid || rspExpect, \"RXRSP writeback id is not waiting\")\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 368:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(_T_951 | rspExpect)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 368:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(~io_txEvt_valid | _GEN_965)) begin
          $fwrite(32'h80000002,
            "Assertion failed: TXEVT payload must stay on the selected entry\n    at WriteBackQueue.scala:369 assert(!io.txEvt.valid || evtWant(evtIdx), \"TXEVT payload must stay on the selected entry\")\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 369:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(~io_txEvt_valid | _GEN_965)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 369:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(~io_txRsp_valid | _GEN_983)) begin
          $fwrite(32'h80000002,
            "Assertion failed: TXRSP payload must stay on the selected entry\n    at WriteBackQueue.scala:370 assert(!io.txRsp.valid || rspWant(rspIdx), \"TXRSP payload must stay on the selected entry\")\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 370:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(~io_txRsp_valid | _GEN_983)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 370:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(~io_txDat_valid | _GEN_1001 == 2'h3)) begin
          $fwrite(32'h80000002,
            "Assertion failed: TXDAT entry must be in s_dat\n    at WriteBackQueue.scala:371 assert(!io.txDat.valid || datEntry.state === WbState.dat, \"TXDAT entry must be in s_dat\")\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 371:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(~io_txDat_valid | _GEN_1001 == 2'h3)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 371:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(_T_971 | _T_3 | firstBeat)) begin
          $fwrite(32'h80000002,
            "Assertion failed: TXDAT beat counter must be 2 then 1\n    at WriteBackQueue.scala:372 assert(!io.txDat.valid || datEntry.beatsLeft === 1.U || datEntry.beatsLeft === 2.U,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 372:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(_T_971 | _T_3 | firstBeat)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 372:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(_T_971 | _GEN_233 != 3'h4 | ~_GEN_1019)) begin
          $fwrite(32'h80000002,
            "Assertion failed: SnpRespData uses the snoop txnId, not a DBID\n    at WriteBackQueue.scala:374 assert(!io.txDat.valid || datEntry.opcode =/= WbOpcode.SnpRespData || !datEntry.dbidValid,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 374:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(_T_971 | _GEN_233 != 3'h4 | ~_GEN_1019)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 374:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(_T_971 | _io_txDat_bits_txnID_T | _GEN_1019)) begin
          $fwrite(32'h80000002,
            "Assertion failed: CopyBackWrData cannot start before DBID\n    at WriteBackQueue.scala:376 assert(!io.txDat.valid || datEntry.opcode === WbOpcode.SnpRespData || datEntry.dbidValid,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 376:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(_T_971 | _io_txDat_bits_txnID_T | _GEN_1019)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 376:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_0 | freeOh_1 | _conflict_T_1 != _conflict_T_5)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_0 | freeOh_1 | _conflict_T_1 != _conflict_T_5)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_0 | freeOh_2 | _conflict_T_1 != _conflict_T_9)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_0 | freeOh_2 | _conflict_T_1 != _conflict_T_9)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_0 | freeOh_3 | _conflict_T_1 != _conflict_T_13)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_0 | freeOh_3 | _conflict_T_1 != _conflict_T_13)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_0 | freeOh_4 | _conflict_T_1 != _conflict_T_17)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_0 | freeOh_4 | _conflict_T_1 != _conflict_T_17)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_0 | freeOh_5 | _conflict_T_1 != _conflict_T_21)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_0 | freeOh_5 | _conflict_T_1 != _conflict_T_21)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_0 | freeOh_6 | _conflict_T_1 != _conflict_T_25)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_0 | freeOh_6 | _conflict_T_1 != _conflict_T_25)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_0 | freeOh_7 | _conflict_T_1 != _conflict_T_29)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_0 | freeOh_7 | _conflict_T_1 != _conflict_T_29)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_0 | freeOh_8 | _conflict_T_1 != _conflict_T_33)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_0 | freeOh_8 | _conflict_T_1 != _conflict_T_33)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_0 | freeOh_9 | _conflict_T_1 != _conflict_T_37)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_0 | freeOh_9 | _conflict_T_1 != _conflict_T_37)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_0 | freeOh_10 | _conflict_T_1 != _conflict_T_41)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_0 | freeOh_10 | _conflict_T_1 != _conflict_T_41)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_0 | freeOh_11 | _conflict_T_1 != _conflict_T_45)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_0 | freeOh_11 | _conflict_T_1 != _conflict_T_45)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_0 | freeOh_12 | _conflict_T_1 != _conflict_T_49)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_0 | freeOh_12 | _conflict_T_1 != _conflict_T_49)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_0 | freeOh_13 | _conflict_T_1 != _conflict_T_53)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_0 | freeOh_13 | _conflict_T_1 != _conflict_T_53)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_0 | freeOh_14 | _conflict_T_1 != _conflict_T_57)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_0 | freeOh_14 | _conflict_T_1 != _conflict_T_57)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_0 | freeOh_15 | _conflict_T_1 != _conflict_T_61)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_0 | freeOh_15 | _conflict_T_1 != _conflict_T_61)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_0 | freeOh_16 | _conflict_T_1 != _conflict_T_65)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_0 | freeOh_16 | _conflict_T_1 != _conflict_T_65)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_0 | freeOh_17 | _conflict_T_1 != _conflict_T_69)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_0 | freeOh_17 | _conflict_T_1 != _conflict_T_69)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_1 | freeOh_2 | _conflict_T_5 != _conflict_T_9)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_1 | freeOh_2 | _conflict_T_5 != _conflict_T_9)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_1 | freeOh_3 | _conflict_T_5 != _conflict_T_13)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_1 | freeOh_3 | _conflict_T_5 != _conflict_T_13)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_1 | freeOh_4 | _conflict_T_5 != _conflict_T_17)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_1 | freeOh_4 | _conflict_T_5 != _conflict_T_17)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_1 | freeOh_5 | _conflict_T_5 != _conflict_T_21)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_1 | freeOh_5 | _conflict_T_5 != _conflict_T_21)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_1 | freeOh_6 | _conflict_T_5 != _conflict_T_25)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_1 | freeOh_6 | _conflict_T_5 != _conflict_T_25)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_1 | freeOh_7 | _conflict_T_5 != _conflict_T_29)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_1 | freeOh_7 | _conflict_T_5 != _conflict_T_29)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_1 | freeOh_8 | _conflict_T_5 != _conflict_T_33)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_1 | freeOh_8 | _conflict_T_5 != _conflict_T_33)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_1 | freeOh_9 | _conflict_T_5 != _conflict_T_37)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_1 | freeOh_9 | _conflict_T_5 != _conflict_T_37)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_1 | freeOh_10 | _conflict_T_5 != _conflict_T_41)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_1 | freeOh_10 | _conflict_T_5 != _conflict_T_41)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_1 | freeOh_11 | _conflict_T_5 != _conflict_T_45)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_1 | freeOh_11 | _conflict_T_5 != _conflict_T_45)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_1 | freeOh_12 | _conflict_T_5 != _conflict_T_49)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_1 | freeOh_12 | _conflict_T_5 != _conflict_T_49)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_1 | freeOh_13 | _conflict_T_5 != _conflict_T_53)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_1 | freeOh_13 | _conflict_T_5 != _conflict_T_53)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_1 | freeOh_14 | _conflict_T_5 != _conflict_T_57)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_1 | freeOh_14 | _conflict_T_5 != _conflict_T_57)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_1 | freeOh_15 | _conflict_T_5 != _conflict_T_61)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_1 | freeOh_15 | _conflict_T_5 != _conflict_T_61)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_1 | freeOh_16 | _conflict_T_5 != _conflict_T_65)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_1 | freeOh_16 | _conflict_T_5 != _conflict_T_65)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_1 | freeOh_17 | _conflict_T_5 != _conflict_T_69)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_1 | freeOh_17 | _conflict_T_5 != _conflict_T_69)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_2 | freeOh_3 | _conflict_T_9 != _conflict_T_13)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_2 | freeOh_3 | _conflict_T_9 != _conflict_T_13)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_2 | freeOh_4 | _conflict_T_9 != _conflict_T_17)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_2 | freeOh_4 | _conflict_T_9 != _conflict_T_17)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_2 | freeOh_5 | _conflict_T_9 != _conflict_T_21)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_2 | freeOh_5 | _conflict_T_9 != _conflict_T_21)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_2 | freeOh_6 | _conflict_T_9 != _conflict_T_25)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_2 | freeOh_6 | _conflict_T_9 != _conflict_T_25)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_2 | freeOh_7 | _conflict_T_9 != _conflict_T_29)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_2 | freeOh_7 | _conflict_T_9 != _conflict_T_29)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_2 | freeOh_8 | _conflict_T_9 != _conflict_T_33)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_2 | freeOh_8 | _conflict_T_9 != _conflict_T_33)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_2 | freeOh_9 | _conflict_T_9 != _conflict_T_37)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_2 | freeOh_9 | _conflict_T_9 != _conflict_T_37)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_2 | freeOh_10 | _conflict_T_9 != _conflict_T_41)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_2 | freeOh_10 | _conflict_T_9 != _conflict_T_41)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_2 | freeOh_11 | _conflict_T_9 != _conflict_T_45)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_2 | freeOh_11 | _conflict_T_9 != _conflict_T_45)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_2 | freeOh_12 | _conflict_T_9 != _conflict_T_49)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_2 | freeOh_12 | _conflict_T_9 != _conflict_T_49)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_2 | freeOh_13 | _conflict_T_9 != _conflict_T_53)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_2 | freeOh_13 | _conflict_T_9 != _conflict_T_53)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_2 | freeOh_14 | _conflict_T_9 != _conflict_T_57)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_2 | freeOh_14 | _conflict_T_9 != _conflict_T_57)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_2 | freeOh_15 | _conflict_T_9 != _conflict_T_61)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_2 | freeOh_15 | _conflict_T_9 != _conflict_T_61)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_2 | freeOh_16 | _conflict_T_9 != _conflict_T_65)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_2 | freeOh_16 | _conflict_T_9 != _conflict_T_65)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_2 | freeOh_17 | _conflict_T_9 != _conflict_T_69)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_2 | freeOh_17 | _conflict_T_9 != _conflict_T_69)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_3 | freeOh_4 | _conflict_T_13 != _conflict_T_17)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_3 | freeOh_4 | _conflict_T_13 != _conflict_T_17)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_3 | freeOh_5 | _conflict_T_13 != _conflict_T_21)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_3 | freeOh_5 | _conflict_T_13 != _conflict_T_21)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_3 | freeOh_6 | _conflict_T_13 != _conflict_T_25)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_3 | freeOh_6 | _conflict_T_13 != _conflict_T_25)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_3 | freeOh_7 | _conflict_T_13 != _conflict_T_29)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_3 | freeOh_7 | _conflict_T_13 != _conflict_T_29)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_3 | freeOh_8 | _conflict_T_13 != _conflict_T_33)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_3 | freeOh_8 | _conflict_T_13 != _conflict_T_33)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_3 | freeOh_9 | _conflict_T_13 != _conflict_T_37)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_3 | freeOh_9 | _conflict_T_13 != _conflict_T_37)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_3 | freeOh_10 | _conflict_T_13 != _conflict_T_41)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_3 | freeOh_10 | _conflict_T_13 != _conflict_T_41)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_3 | freeOh_11 | _conflict_T_13 != _conflict_T_45)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_3 | freeOh_11 | _conflict_T_13 != _conflict_T_45)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_3 | freeOh_12 | _conflict_T_13 != _conflict_T_49)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_3 | freeOh_12 | _conflict_T_13 != _conflict_T_49)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_3 | freeOh_13 | _conflict_T_13 != _conflict_T_53)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_3 | freeOh_13 | _conflict_T_13 != _conflict_T_53)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_3 | freeOh_14 | _conflict_T_13 != _conflict_T_57)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_3 | freeOh_14 | _conflict_T_13 != _conflict_T_57)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_3 | freeOh_15 | _conflict_T_13 != _conflict_T_61)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_3 | freeOh_15 | _conflict_T_13 != _conflict_T_61)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_3 | freeOh_16 | _conflict_T_13 != _conflict_T_65)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_3 | freeOh_16 | _conflict_T_13 != _conflict_T_65)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_3 | freeOh_17 | _conflict_T_13 != _conflict_T_69)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_3 | freeOh_17 | _conflict_T_13 != _conflict_T_69)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_4 | freeOh_5 | _conflict_T_17 != _conflict_T_21)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_4 | freeOh_5 | _conflict_T_17 != _conflict_T_21)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_4 | freeOh_6 | _conflict_T_17 != _conflict_T_25)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_4 | freeOh_6 | _conflict_T_17 != _conflict_T_25)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_4 | freeOh_7 | _conflict_T_17 != _conflict_T_29)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_4 | freeOh_7 | _conflict_T_17 != _conflict_T_29)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_4 | freeOh_8 | _conflict_T_17 != _conflict_T_33)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_4 | freeOh_8 | _conflict_T_17 != _conflict_T_33)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_4 | freeOh_9 | _conflict_T_17 != _conflict_T_37)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_4 | freeOh_9 | _conflict_T_17 != _conflict_T_37)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_4 | freeOh_10 | _conflict_T_17 != _conflict_T_41)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_4 | freeOh_10 | _conflict_T_17 != _conflict_T_41)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_4 | freeOh_11 | _conflict_T_17 != _conflict_T_45)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_4 | freeOh_11 | _conflict_T_17 != _conflict_T_45)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_4 | freeOh_12 | _conflict_T_17 != _conflict_T_49)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_4 | freeOh_12 | _conflict_T_17 != _conflict_T_49)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_4 | freeOh_13 | _conflict_T_17 != _conflict_T_53)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_4 | freeOh_13 | _conflict_T_17 != _conflict_T_53)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_4 | freeOh_14 | _conflict_T_17 != _conflict_T_57)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_4 | freeOh_14 | _conflict_T_17 != _conflict_T_57)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_4 | freeOh_15 | _conflict_T_17 != _conflict_T_61)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_4 | freeOh_15 | _conflict_T_17 != _conflict_T_61)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_4 | freeOh_16 | _conflict_T_17 != _conflict_T_65)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_4 | freeOh_16 | _conflict_T_17 != _conflict_T_65)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_4 | freeOh_17 | _conflict_T_17 != _conflict_T_69)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_4 | freeOh_17 | _conflict_T_17 != _conflict_T_69)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_5 | freeOh_6 | _conflict_T_21 != _conflict_T_25)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_5 | freeOh_6 | _conflict_T_21 != _conflict_T_25)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_5 | freeOh_7 | _conflict_T_21 != _conflict_T_29)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_5 | freeOh_7 | _conflict_T_21 != _conflict_T_29)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_5 | freeOh_8 | _conflict_T_21 != _conflict_T_33)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_5 | freeOh_8 | _conflict_T_21 != _conflict_T_33)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_5 | freeOh_9 | _conflict_T_21 != _conflict_T_37)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_5 | freeOh_9 | _conflict_T_21 != _conflict_T_37)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_5 | freeOh_10 | _conflict_T_21 != _conflict_T_41)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_5 | freeOh_10 | _conflict_T_21 != _conflict_T_41)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_5 | freeOh_11 | _conflict_T_21 != _conflict_T_45)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_5 | freeOh_11 | _conflict_T_21 != _conflict_T_45)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_5 | freeOh_12 | _conflict_T_21 != _conflict_T_49)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_5 | freeOh_12 | _conflict_T_21 != _conflict_T_49)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_5 | freeOh_13 | _conflict_T_21 != _conflict_T_53)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_5 | freeOh_13 | _conflict_T_21 != _conflict_T_53)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_5 | freeOh_14 | _conflict_T_21 != _conflict_T_57)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_5 | freeOh_14 | _conflict_T_21 != _conflict_T_57)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_5 | freeOh_15 | _conflict_T_21 != _conflict_T_61)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_5 | freeOh_15 | _conflict_T_21 != _conflict_T_61)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_5 | freeOh_16 | _conflict_T_21 != _conflict_T_65)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_5 | freeOh_16 | _conflict_T_21 != _conflict_T_65)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_5 | freeOh_17 | _conflict_T_21 != _conflict_T_69)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_5 | freeOh_17 | _conflict_T_21 != _conflict_T_69)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_6 | freeOh_7 | _conflict_T_25 != _conflict_T_29)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_6 | freeOh_7 | _conflict_T_25 != _conflict_T_29)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_6 | freeOh_8 | _conflict_T_25 != _conflict_T_33)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_6 | freeOh_8 | _conflict_T_25 != _conflict_T_33)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_6 | freeOh_9 | _conflict_T_25 != _conflict_T_37)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_6 | freeOh_9 | _conflict_T_25 != _conflict_T_37)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_6 | freeOh_10 | _conflict_T_25 != _conflict_T_41)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_6 | freeOh_10 | _conflict_T_25 != _conflict_T_41)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_6 | freeOh_11 | _conflict_T_25 != _conflict_T_45)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_6 | freeOh_11 | _conflict_T_25 != _conflict_T_45)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_6 | freeOh_12 | _conflict_T_25 != _conflict_T_49)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_6 | freeOh_12 | _conflict_T_25 != _conflict_T_49)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_6 | freeOh_13 | _conflict_T_25 != _conflict_T_53)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_6 | freeOh_13 | _conflict_T_25 != _conflict_T_53)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_6 | freeOh_14 | _conflict_T_25 != _conflict_T_57)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_6 | freeOh_14 | _conflict_T_25 != _conflict_T_57)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_6 | freeOh_15 | _conflict_T_25 != _conflict_T_61)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_6 | freeOh_15 | _conflict_T_25 != _conflict_T_61)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_6 | freeOh_16 | _conflict_T_25 != _conflict_T_65)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_6 | freeOh_16 | _conflict_T_25 != _conflict_T_65)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_6 | freeOh_17 | _conflict_T_25 != _conflict_T_69)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_6 | freeOh_17 | _conflict_T_25 != _conflict_T_69)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_7 | freeOh_8 | _conflict_T_29 != _conflict_T_33)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_7 | freeOh_8 | _conflict_T_29 != _conflict_T_33)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_7 | freeOh_9 | _conflict_T_29 != _conflict_T_37)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_7 | freeOh_9 | _conflict_T_29 != _conflict_T_37)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_7 | freeOh_10 | _conflict_T_29 != _conflict_T_41)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_7 | freeOh_10 | _conflict_T_29 != _conflict_T_41)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_7 | freeOh_11 | _conflict_T_29 != _conflict_T_45)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_7 | freeOh_11 | _conflict_T_29 != _conflict_T_45)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_7 | freeOh_12 | _conflict_T_29 != _conflict_T_49)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_7 | freeOh_12 | _conflict_T_29 != _conflict_T_49)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_7 | freeOh_13 | _conflict_T_29 != _conflict_T_53)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_7 | freeOh_13 | _conflict_T_29 != _conflict_T_53)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_7 | freeOh_14 | _conflict_T_29 != _conflict_T_57)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_7 | freeOh_14 | _conflict_T_29 != _conflict_T_57)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_7 | freeOh_15 | _conflict_T_29 != _conflict_T_61)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_7 | freeOh_15 | _conflict_T_29 != _conflict_T_61)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_7 | freeOh_16 | _conflict_T_29 != _conflict_T_65)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_7 | freeOh_16 | _conflict_T_29 != _conflict_T_65)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_7 | freeOh_17 | _conflict_T_29 != _conflict_T_69)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_7 | freeOh_17 | _conflict_T_29 != _conflict_T_69)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_8 | freeOh_9 | _conflict_T_33 != _conflict_T_37)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_8 | freeOh_9 | _conflict_T_33 != _conflict_T_37)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_8 | freeOh_10 | _conflict_T_33 != _conflict_T_41)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_8 | freeOh_10 | _conflict_T_33 != _conflict_T_41)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_8 | freeOh_11 | _conflict_T_33 != _conflict_T_45)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_8 | freeOh_11 | _conflict_T_33 != _conflict_T_45)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_8 | freeOh_12 | _conflict_T_33 != _conflict_T_49)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_8 | freeOh_12 | _conflict_T_33 != _conflict_T_49)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_8 | freeOh_13 | _conflict_T_33 != _conflict_T_53)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_8 | freeOh_13 | _conflict_T_33 != _conflict_T_53)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_8 | freeOh_14 | _conflict_T_33 != _conflict_T_57)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_8 | freeOh_14 | _conflict_T_33 != _conflict_T_57)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_8 | freeOh_15 | _conflict_T_33 != _conflict_T_61)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_8 | freeOh_15 | _conflict_T_33 != _conflict_T_61)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_8 | freeOh_16 | _conflict_T_33 != _conflict_T_65)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_8 | freeOh_16 | _conflict_T_33 != _conflict_T_65)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_8 | freeOh_17 | _conflict_T_33 != _conflict_T_69)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_8 | freeOh_17 | _conflict_T_33 != _conflict_T_69)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_9 | freeOh_10 | _conflict_T_37 != _conflict_T_41)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_9 | freeOh_10 | _conflict_T_37 != _conflict_T_41)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_9 | freeOh_11 | _conflict_T_37 != _conflict_T_45)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_9 | freeOh_11 | _conflict_T_37 != _conflict_T_45)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_9 | freeOh_12 | _conflict_T_37 != _conflict_T_49)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_9 | freeOh_12 | _conflict_T_37 != _conflict_T_49)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_9 | freeOh_13 | _conflict_T_37 != _conflict_T_53)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_9 | freeOh_13 | _conflict_T_37 != _conflict_T_53)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_9 | freeOh_14 | _conflict_T_37 != _conflict_T_57)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_9 | freeOh_14 | _conflict_T_37 != _conflict_T_57)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_9 | freeOh_15 | _conflict_T_37 != _conflict_T_61)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_9 | freeOh_15 | _conflict_T_37 != _conflict_T_61)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_9 | freeOh_16 | _conflict_T_37 != _conflict_T_65)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_9 | freeOh_16 | _conflict_T_37 != _conflict_T_65)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_9 | freeOh_17 | _conflict_T_37 != _conflict_T_69)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_9 | freeOh_17 | _conflict_T_37 != _conflict_T_69)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_10 | freeOh_11 | _conflict_T_41 != _conflict_T_45)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_10 | freeOh_11 | _conflict_T_41 != _conflict_T_45)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_10 | freeOh_12 | _conflict_T_41 != _conflict_T_49)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_10 | freeOh_12 | _conflict_T_41 != _conflict_T_49)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_10 | freeOh_13 | _conflict_T_41 != _conflict_T_53)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_10 | freeOh_13 | _conflict_T_41 != _conflict_T_53)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_10 | freeOh_14 | _conflict_T_41 != _conflict_T_57)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_10 | freeOh_14 | _conflict_T_41 != _conflict_T_57)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_10 | freeOh_15 | _conflict_T_41 != _conflict_T_61)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_10 | freeOh_15 | _conflict_T_41 != _conflict_T_61)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_10 | freeOh_16 | _conflict_T_41 != _conflict_T_65)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_10 | freeOh_16 | _conflict_T_41 != _conflict_T_65)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_10 | freeOh_17 | _conflict_T_41 != _conflict_T_69)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_10 | freeOh_17 | _conflict_T_41 != _conflict_T_69)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_11 | freeOh_12 | _conflict_T_45 != _conflict_T_49)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_11 | freeOh_12 | _conflict_T_45 != _conflict_T_49)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_11 | freeOh_13 | _conflict_T_45 != _conflict_T_53)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_11 | freeOh_13 | _conflict_T_45 != _conflict_T_53)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_11 | freeOh_14 | _conflict_T_45 != _conflict_T_57)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_11 | freeOh_14 | _conflict_T_45 != _conflict_T_57)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_11 | freeOh_15 | _conflict_T_45 != _conflict_T_61)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_11 | freeOh_15 | _conflict_T_45 != _conflict_T_61)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_11 | freeOh_16 | _conflict_T_45 != _conflict_T_65)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_11 | freeOh_16 | _conflict_T_45 != _conflict_T_65)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_11 | freeOh_17 | _conflict_T_45 != _conflict_T_69)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_11 | freeOh_17 | _conflict_T_45 != _conflict_T_69)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_12 | freeOh_13 | _conflict_T_49 != _conflict_T_53)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_12 | freeOh_13 | _conflict_T_49 != _conflict_T_53)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_12 | freeOh_14 | _conflict_T_49 != _conflict_T_57)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_12 | freeOh_14 | _conflict_T_49 != _conflict_T_57)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_12 | freeOh_15 | _conflict_T_49 != _conflict_T_61)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_12 | freeOh_15 | _conflict_T_49 != _conflict_T_61)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_12 | freeOh_16 | _conflict_T_49 != _conflict_T_65)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_12 | freeOh_16 | _conflict_T_49 != _conflict_T_65)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_12 | freeOh_17 | _conflict_T_49 != _conflict_T_69)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_12 | freeOh_17 | _conflict_T_49 != _conflict_T_69)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_13 | freeOh_14 | _conflict_T_53 != _conflict_T_57)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_13 | freeOh_14 | _conflict_T_53 != _conflict_T_57)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_13 | freeOh_15 | _conflict_T_53 != _conflict_T_61)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_13 | freeOh_15 | _conflict_T_53 != _conflict_T_61)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_13 | freeOh_16 | _conflict_T_53 != _conflict_T_65)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_13 | freeOh_16 | _conflict_T_53 != _conflict_T_65)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_13 | freeOh_17 | _conflict_T_53 != _conflict_T_69)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_13 | freeOh_17 | _conflict_T_53 != _conflict_T_69)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_14 | freeOh_15 | _conflict_T_57 != _conflict_T_61)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_14 | freeOh_15 | _conflict_T_57 != _conflict_T_61)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_14 | freeOh_16 | _conflict_T_57 != _conflict_T_65)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_14 | freeOh_16 | _conflict_T_57 != _conflict_T_65)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_14 | freeOh_17 | _conflict_T_57 != _conflict_T_69)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_14 | freeOh_17 | _conflict_T_57 != _conflict_T_69)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_15 | freeOh_16 | _conflict_T_61 != _conflict_T_65)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_15 | freeOh_16 | _conflict_T_61 != _conflict_T_65)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_15 | freeOh_17 | _conflict_T_61 != _conflict_T_69)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_15 | freeOh_17 | _conflict_T_61 != _conflict_T_69)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_26 & ~(freeOh_16 | freeOh_17 | _conflict_T_65 != _conflict_T_69)) begin
          $fwrite(32'h80000002,
            "Assertion failed: one address can occupy only one writeback entry\n    at WriteBackQueue.scala:380 assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_26 & ~(freeOh_16 | freeOh_17 | _conflict_T_65 != _conflict_T_69)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/WriteBackQueue/WriteBackQueue.scala 380:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  entries_0_busy = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  entries_0_opcode = _RAND_1[2:0];
  _RAND_2 = {1{`RANDOM}};
  entries_0_resp = _RAND_2[2:0];
  _RAND_3 = {1{`RANDOM}};
  entries_0_snpTxnId = _RAND_3[7:0];
  _RAND_4 = {2{`RANDOM}};
  entries_0_addr = _RAND_4[47:0];
  _RAND_5 = {16{`RANDOM}};
  entries_0_data = _RAND_5[511:0];
  _RAND_6 = {1{`RANDOM}};
  entries_0_dataReady = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  entries_0_dbid = _RAND_7[7:0];
  _RAND_8 = {1{`RANDOM}};
  entries_0_dbidValid = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  entries_0_compGot = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  entries_0_dataSent = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  entries_0_rspSeen = _RAND_11[0:0];
  _RAND_12 = {1{`RANDOM}};
  entries_0_compSrc = _RAND_12[6:0];
  _RAND_13 = {1{`RANDOM}};
  entries_0_traceTag = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  entries_0_state = _RAND_14[1:0];
  _RAND_15 = {1{`RANDOM}};
  entries_0_beatsLeft = _RAND_15[1:0];
  _RAND_16 = {1{`RANDOM}};
  entries_1_busy = _RAND_16[0:0];
  _RAND_17 = {1{`RANDOM}};
  entries_1_opcode = _RAND_17[2:0];
  _RAND_18 = {1{`RANDOM}};
  entries_1_resp = _RAND_18[2:0];
  _RAND_19 = {1{`RANDOM}};
  entries_1_snpTxnId = _RAND_19[7:0];
  _RAND_20 = {2{`RANDOM}};
  entries_1_addr = _RAND_20[47:0];
  _RAND_21 = {16{`RANDOM}};
  entries_1_data = _RAND_21[511:0];
  _RAND_22 = {1{`RANDOM}};
  entries_1_dataReady = _RAND_22[0:0];
  _RAND_23 = {1{`RANDOM}};
  entries_1_dbid = _RAND_23[7:0];
  _RAND_24 = {1{`RANDOM}};
  entries_1_dbidValid = _RAND_24[0:0];
  _RAND_25 = {1{`RANDOM}};
  entries_1_compGot = _RAND_25[0:0];
  _RAND_26 = {1{`RANDOM}};
  entries_1_dataSent = _RAND_26[0:0];
  _RAND_27 = {1{`RANDOM}};
  entries_1_rspSeen = _RAND_27[0:0];
  _RAND_28 = {1{`RANDOM}};
  entries_1_compSrc = _RAND_28[6:0];
  _RAND_29 = {1{`RANDOM}};
  entries_1_traceTag = _RAND_29[0:0];
  _RAND_30 = {1{`RANDOM}};
  entries_1_state = _RAND_30[1:0];
  _RAND_31 = {1{`RANDOM}};
  entries_1_beatsLeft = _RAND_31[1:0];
  _RAND_32 = {1{`RANDOM}};
  entries_2_busy = _RAND_32[0:0];
  _RAND_33 = {1{`RANDOM}};
  entries_2_opcode = _RAND_33[2:0];
  _RAND_34 = {1{`RANDOM}};
  entries_2_resp = _RAND_34[2:0];
  _RAND_35 = {1{`RANDOM}};
  entries_2_snpTxnId = _RAND_35[7:0];
  _RAND_36 = {2{`RANDOM}};
  entries_2_addr = _RAND_36[47:0];
  _RAND_37 = {16{`RANDOM}};
  entries_2_data = _RAND_37[511:0];
  _RAND_38 = {1{`RANDOM}};
  entries_2_dataReady = _RAND_38[0:0];
  _RAND_39 = {1{`RANDOM}};
  entries_2_dbid = _RAND_39[7:0];
  _RAND_40 = {1{`RANDOM}};
  entries_2_dbidValid = _RAND_40[0:0];
  _RAND_41 = {1{`RANDOM}};
  entries_2_compGot = _RAND_41[0:0];
  _RAND_42 = {1{`RANDOM}};
  entries_2_dataSent = _RAND_42[0:0];
  _RAND_43 = {1{`RANDOM}};
  entries_2_rspSeen = _RAND_43[0:0];
  _RAND_44 = {1{`RANDOM}};
  entries_2_compSrc = _RAND_44[6:0];
  _RAND_45 = {1{`RANDOM}};
  entries_2_traceTag = _RAND_45[0:0];
  _RAND_46 = {1{`RANDOM}};
  entries_2_state = _RAND_46[1:0];
  _RAND_47 = {1{`RANDOM}};
  entries_2_beatsLeft = _RAND_47[1:0];
  _RAND_48 = {1{`RANDOM}};
  entries_3_busy = _RAND_48[0:0];
  _RAND_49 = {1{`RANDOM}};
  entries_3_opcode = _RAND_49[2:0];
  _RAND_50 = {1{`RANDOM}};
  entries_3_resp = _RAND_50[2:0];
  _RAND_51 = {1{`RANDOM}};
  entries_3_snpTxnId = _RAND_51[7:0];
  _RAND_52 = {2{`RANDOM}};
  entries_3_addr = _RAND_52[47:0];
  _RAND_53 = {16{`RANDOM}};
  entries_3_data = _RAND_53[511:0];
  _RAND_54 = {1{`RANDOM}};
  entries_3_dataReady = _RAND_54[0:0];
  _RAND_55 = {1{`RANDOM}};
  entries_3_dbid = _RAND_55[7:0];
  _RAND_56 = {1{`RANDOM}};
  entries_3_dbidValid = _RAND_56[0:0];
  _RAND_57 = {1{`RANDOM}};
  entries_3_compGot = _RAND_57[0:0];
  _RAND_58 = {1{`RANDOM}};
  entries_3_dataSent = _RAND_58[0:0];
  _RAND_59 = {1{`RANDOM}};
  entries_3_rspSeen = _RAND_59[0:0];
  _RAND_60 = {1{`RANDOM}};
  entries_3_compSrc = _RAND_60[6:0];
  _RAND_61 = {1{`RANDOM}};
  entries_3_traceTag = _RAND_61[0:0];
  _RAND_62 = {1{`RANDOM}};
  entries_3_state = _RAND_62[1:0];
  _RAND_63 = {1{`RANDOM}};
  entries_3_beatsLeft = _RAND_63[1:0];
  _RAND_64 = {1{`RANDOM}};
  entries_4_busy = _RAND_64[0:0];
  _RAND_65 = {1{`RANDOM}};
  entries_4_opcode = _RAND_65[2:0];
  _RAND_66 = {1{`RANDOM}};
  entries_4_resp = _RAND_66[2:0];
  _RAND_67 = {1{`RANDOM}};
  entries_4_snpTxnId = _RAND_67[7:0];
  _RAND_68 = {2{`RANDOM}};
  entries_4_addr = _RAND_68[47:0];
  _RAND_69 = {16{`RANDOM}};
  entries_4_data = _RAND_69[511:0];
  _RAND_70 = {1{`RANDOM}};
  entries_4_dataReady = _RAND_70[0:0];
  _RAND_71 = {1{`RANDOM}};
  entries_4_dbid = _RAND_71[7:0];
  _RAND_72 = {1{`RANDOM}};
  entries_4_dbidValid = _RAND_72[0:0];
  _RAND_73 = {1{`RANDOM}};
  entries_4_compGot = _RAND_73[0:0];
  _RAND_74 = {1{`RANDOM}};
  entries_4_dataSent = _RAND_74[0:0];
  _RAND_75 = {1{`RANDOM}};
  entries_4_rspSeen = _RAND_75[0:0];
  _RAND_76 = {1{`RANDOM}};
  entries_4_compSrc = _RAND_76[6:0];
  _RAND_77 = {1{`RANDOM}};
  entries_4_traceTag = _RAND_77[0:0];
  _RAND_78 = {1{`RANDOM}};
  entries_4_state = _RAND_78[1:0];
  _RAND_79 = {1{`RANDOM}};
  entries_4_beatsLeft = _RAND_79[1:0];
  _RAND_80 = {1{`RANDOM}};
  entries_5_busy = _RAND_80[0:0];
  _RAND_81 = {1{`RANDOM}};
  entries_5_opcode = _RAND_81[2:0];
  _RAND_82 = {1{`RANDOM}};
  entries_5_resp = _RAND_82[2:0];
  _RAND_83 = {1{`RANDOM}};
  entries_5_snpTxnId = _RAND_83[7:0];
  _RAND_84 = {2{`RANDOM}};
  entries_5_addr = _RAND_84[47:0];
  _RAND_85 = {16{`RANDOM}};
  entries_5_data = _RAND_85[511:0];
  _RAND_86 = {1{`RANDOM}};
  entries_5_dataReady = _RAND_86[0:0];
  _RAND_87 = {1{`RANDOM}};
  entries_5_dbid = _RAND_87[7:0];
  _RAND_88 = {1{`RANDOM}};
  entries_5_dbidValid = _RAND_88[0:0];
  _RAND_89 = {1{`RANDOM}};
  entries_5_compGot = _RAND_89[0:0];
  _RAND_90 = {1{`RANDOM}};
  entries_5_dataSent = _RAND_90[0:0];
  _RAND_91 = {1{`RANDOM}};
  entries_5_rspSeen = _RAND_91[0:0];
  _RAND_92 = {1{`RANDOM}};
  entries_5_compSrc = _RAND_92[6:0];
  _RAND_93 = {1{`RANDOM}};
  entries_5_traceTag = _RAND_93[0:0];
  _RAND_94 = {1{`RANDOM}};
  entries_5_state = _RAND_94[1:0];
  _RAND_95 = {1{`RANDOM}};
  entries_5_beatsLeft = _RAND_95[1:0];
  _RAND_96 = {1{`RANDOM}};
  entries_6_busy = _RAND_96[0:0];
  _RAND_97 = {1{`RANDOM}};
  entries_6_opcode = _RAND_97[2:0];
  _RAND_98 = {1{`RANDOM}};
  entries_6_resp = _RAND_98[2:0];
  _RAND_99 = {1{`RANDOM}};
  entries_6_snpTxnId = _RAND_99[7:0];
  _RAND_100 = {2{`RANDOM}};
  entries_6_addr = _RAND_100[47:0];
  _RAND_101 = {16{`RANDOM}};
  entries_6_data = _RAND_101[511:0];
  _RAND_102 = {1{`RANDOM}};
  entries_6_dataReady = _RAND_102[0:0];
  _RAND_103 = {1{`RANDOM}};
  entries_6_dbid = _RAND_103[7:0];
  _RAND_104 = {1{`RANDOM}};
  entries_6_dbidValid = _RAND_104[0:0];
  _RAND_105 = {1{`RANDOM}};
  entries_6_compGot = _RAND_105[0:0];
  _RAND_106 = {1{`RANDOM}};
  entries_6_dataSent = _RAND_106[0:0];
  _RAND_107 = {1{`RANDOM}};
  entries_6_rspSeen = _RAND_107[0:0];
  _RAND_108 = {1{`RANDOM}};
  entries_6_compSrc = _RAND_108[6:0];
  _RAND_109 = {1{`RANDOM}};
  entries_6_traceTag = _RAND_109[0:0];
  _RAND_110 = {1{`RANDOM}};
  entries_6_state = _RAND_110[1:0];
  _RAND_111 = {1{`RANDOM}};
  entries_6_beatsLeft = _RAND_111[1:0];
  _RAND_112 = {1{`RANDOM}};
  entries_7_busy = _RAND_112[0:0];
  _RAND_113 = {1{`RANDOM}};
  entries_7_opcode = _RAND_113[2:0];
  _RAND_114 = {1{`RANDOM}};
  entries_7_resp = _RAND_114[2:0];
  _RAND_115 = {1{`RANDOM}};
  entries_7_snpTxnId = _RAND_115[7:0];
  _RAND_116 = {2{`RANDOM}};
  entries_7_addr = _RAND_116[47:0];
  _RAND_117 = {16{`RANDOM}};
  entries_7_data = _RAND_117[511:0];
  _RAND_118 = {1{`RANDOM}};
  entries_7_dataReady = _RAND_118[0:0];
  _RAND_119 = {1{`RANDOM}};
  entries_7_dbid = _RAND_119[7:0];
  _RAND_120 = {1{`RANDOM}};
  entries_7_dbidValid = _RAND_120[0:0];
  _RAND_121 = {1{`RANDOM}};
  entries_7_compGot = _RAND_121[0:0];
  _RAND_122 = {1{`RANDOM}};
  entries_7_dataSent = _RAND_122[0:0];
  _RAND_123 = {1{`RANDOM}};
  entries_7_rspSeen = _RAND_123[0:0];
  _RAND_124 = {1{`RANDOM}};
  entries_7_compSrc = _RAND_124[6:0];
  _RAND_125 = {1{`RANDOM}};
  entries_7_traceTag = _RAND_125[0:0];
  _RAND_126 = {1{`RANDOM}};
  entries_7_state = _RAND_126[1:0];
  _RAND_127 = {1{`RANDOM}};
  entries_7_beatsLeft = _RAND_127[1:0];
  _RAND_128 = {1{`RANDOM}};
  entries_8_busy = _RAND_128[0:0];
  _RAND_129 = {1{`RANDOM}};
  entries_8_opcode = _RAND_129[2:0];
  _RAND_130 = {1{`RANDOM}};
  entries_8_resp = _RAND_130[2:0];
  _RAND_131 = {1{`RANDOM}};
  entries_8_snpTxnId = _RAND_131[7:0];
  _RAND_132 = {2{`RANDOM}};
  entries_8_addr = _RAND_132[47:0];
  _RAND_133 = {16{`RANDOM}};
  entries_8_data = _RAND_133[511:0];
  _RAND_134 = {1{`RANDOM}};
  entries_8_dataReady = _RAND_134[0:0];
  _RAND_135 = {1{`RANDOM}};
  entries_8_dbid = _RAND_135[7:0];
  _RAND_136 = {1{`RANDOM}};
  entries_8_dbidValid = _RAND_136[0:0];
  _RAND_137 = {1{`RANDOM}};
  entries_8_compGot = _RAND_137[0:0];
  _RAND_138 = {1{`RANDOM}};
  entries_8_dataSent = _RAND_138[0:0];
  _RAND_139 = {1{`RANDOM}};
  entries_8_rspSeen = _RAND_139[0:0];
  _RAND_140 = {1{`RANDOM}};
  entries_8_compSrc = _RAND_140[6:0];
  _RAND_141 = {1{`RANDOM}};
  entries_8_traceTag = _RAND_141[0:0];
  _RAND_142 = {1{`RANDOM}};
  entries_8_state = _RAND_142[1:0];
  _RAND_143 = {1{`RANDOM}};
  entries_8_beatsLeft = _RAND_143[1:0];
  _RAND_144 = {1{`RANDOM}};
  entries_9_busy = _RAND_144[0:0];
  _RAND_145 = {1{`RANDOM}};
  entries_9_opcode = _RAND_145[2:0];
  _RAND_146 = {1{`RANDOM}};
  entries_9_resp = _RAND_146[2:0];
  _RAND_147 = {1{`RANDOM}};
  entries_9_snpTxnId = _RAND_147[7:0];
  _RAND_148 = {2{`RANDOM}};
  entries_9_addr = _RAND_148[47:0];
  _RAND_149 = {16{`RANDOM}};
  entries_9_data = _RAND_149[511:0];
  _RAND_150 = {1{`RANDOM}};
  entries_9_dataReady = _RAND_150[0:0];
  _RAND_151 = {1{`RANDOM}};
  entries_9_dbid = _RAND_151[7:0];
  _RAND_152 = {1{`RANDOM}};
  entries_9_dbidValid = _RAND_152[0:0];
  _RAND_153 = {1{`RANDOM}};
  entries_9_compGot = _RAND_153[0:0];
  _RAND_154 = {1{`RANDOM}};
  entries_9_dataSent = _RAND_154[0:0];
  _RAND_155 = {1{`RANDOM}};
  entries_9_rspSeen = _RAND_155[0:0];
  _RAND_156 = {1{`RANDOM}};
  entries_9_compSrc = _RAND_156[6:0];
  _RAND_157 = {1{`RANDOM}};
  entries_9_traceTag = _RAND_157[0:0];
  _RAND_158 = {1{`RANDOM}};
  entries_9_state = _RAND_158[1:0];
  _RAND_159 = {1{`RANDOM}};
  entries_9_beatsLeft = _RAND_159[1:0];
  _RAND_160 = {1{`RANDOM}};
  entries_10_busy = _RAND_160[0:0];
  _RAND_161 = {1{`RANDOM}};
  entries_10_opcode = _RAND_161[2:0];
  _RAND_162 = {1{`RANDOM}};
  entries_10_resp = _RAND_162[2:0];
  _RAND_163 = {1{`RANDOM}};
  entries_10_snpTxnId = _RAND_163[7:0];
  _RAND_164 = {2{`RANDOM}};
  entries_10_addr = _RAND_164[47:0];
  _RAND_165 = {16{`RANDOM}};
  entries_10_data = _RAND_165[511:0];
  _RAND_166 = {1{`RANDOM}};
  entries_10_dataReady = _RAND_166[0:0];
  _RAND_167 = {1{`RANDOM}};
  entries_10_dbid = _RAND_167[7:0];
  _RAND_168 = {1{`RANDOM}};
  entries_10_dbidValid = _RAND_168[0:0];
  _RAND_169 = {1{`RANDOM}};
  entries_10_compGot = _RAND_169[0:0];
  _RAND_170 = {1{`RANDOM}};
  entries_10_dataSent = _RAND_170[0:0];
  _RAND_171 = {1{`RANDOM}};
  entries_10_rspSeen = _RAND_171[0:0];
  _RAND_172 = {1{`RANDOM}};
  entries_10_compSrc = _RAND_172[6:0];
  _RAND_173 = {1{`RANDOM}};
  entries_10_traceTag = _RAND_173[0:0];
  _RAND_174 = {1{`RANDOM}};
  entries_10_state = _RAND_174[1:0];
  _RAND_175 = {1{`RANDOM}};
  entries_10_beatsLeft = _RAND_175[1:0];
  _RAND_176 = {1{`RANDOM}};
  entries_11_busy = _RAND_176[0:0];
  _RAND_177 = {1{`RANDOM}};
  entries_11_opcode = _RAND_177[2:0];
  _RAND_178 = {1{`RANDOM}};
  entries_11_resp = _RAND_178[2:0];
  _RAND_179 = {1{`RANDOM}};
  entries_11_snpTxnId = _RAND_179[7:0];
  _RAND_180 = {2{`RANDOM}};
  entries_11_addr = _RAND_180[47:0];
  _RAND_181 = {16{`RANDOM}};
  entries_11_data = _RAND_181[511:0];
  _RAND_182 = {1{`RANDOM}};
  entries_11_dataReady = _RAND_182[0:0];
  _RAND_183 = {1{`RANDOM}};
  entries_11_dbid = _RAND_183[7:0];
  _RAND_184 = {1{`RANDOM}};
  entries_11_dbidValid = _RAND_184[0:0];
  _RAND_185 = {1{`RANDOM}};
  entries_11_compGot = _RAND_185[0:0];
  _RAND_186 = {1{`RANDOM}};
  entries_11_dataSent = _RAND_186[0:0];
  _RAND_187 = {1{`RANDOM}};
  entries_11_rspSeen = _RAND_187[0:0];
  _RAND_188 = {1{`RANDOM}};
  entries_11_compSrc = _RAND_188[6:0];
  _RAND_189 = {1{`RANDOM}};
  entries_11_traceTag = _RAND_189[0:0];
  _RAND_190 = {1{`RANDOM}};
  entries_11_state = _RAND_190[1:0];
  _RAND_191 = {1{`RANDOM}};
  entries_11_beatsLeft = _RAND_191[1:0];
  _RAND_192 = {1{`RANDOM}};
  entries_12_busy = _RAND_192[0:0];
  _RAND_193 = {1{`RANDOM}};
  entries_12_opcode = _RAND_193[2:0];
  _RAND_194 = {1{`RANDOM}};
  entries_12_resp = _RAND_194[2:0];
  _RAND_195 = {1{`RANDOM}};
  entries_12_snpTxnId = _RAND_195[7:0];
  _RAND_196 = {2{`RANDOM}};
  entries_12_addr = _RAND_196[47:0];
  _RAND_197 = {16{`RANDOM}};
  entries_12_data = _RAND_197[511:0];
  _RAND_198 = {1{`RANDOM}};
  entries_12_dataReady = _RAND_198[0:0];
  _RAND_199 = {1{`RANDOM}};
  entries_12_dbid = _RAND_199[7:0];
  _RAND_200 = {1{`RANDOM}};
  entries_12_dbidValid = _RAND_200[0:0];
  _RAND_201 = {1{`RANDOM}};
  entries_12_compGot = _RAND_201[0:0];
  _RAND_202 = {1{`RANDOM}};
  entries_12_dataSent = _RAND_202[0:0];
  _RAND_203 = {1{`RANDOM}};
  entries_12_rspSeen = _RAND_203[0:0];
  _RAND_204 = {1{`RANDOM}};
  entries_12_compSrc = _RAND_204[6:0];
  _RAND_205 = {1{`RANDOM}};
  entries_12_traceTag = _RAND_205[0:0];
  _RAND_206 = {1{`RANDOM}};
  entries_12_state = _RAND_206[1:0];
  _RAND_207 = {1{`RANDOM}};
  entries_12_beatsLeft = _RAND_207[1:0];
  _RAND_208 = {1{`RANDOM}};
  entries_13_busy = _RAND_208[0:0];
  _RAND_209 = {1{`RANDOM}};
  entries_13_opcode = _RAND_209[2:0];
  _RAND_210 = {1{`RANDOM}};
  entries_13_resp = _RAND_210[2:0];
  _RAND_211 = {1{`RANDOM}};
  entries_13_snpTxnId = _RAND_211[7:0];
  _RAND_212 = {2{`RANDOM}};
  entries_13_addr = _RAND_212[47:0];
  _RAND_213 = {16{`RANDOM}};
  entries_13_data = _RAND_213[511:0];
  _RAND_214 = {1{`RANDOM}};
  entries_13_dataReady = _RAND_214[0:0];
  _RAND_215 = {1{`RANDOM}};
  entries_13_dbid = _RAND_215[7:0];
  _RAND_216 = {1{`RANDOM}};
  entries_13_dbidValid = _RAND_216[0:0];
  _RAND_217 = {1{`RANDOM}};
  entries_13_compGot = _RAND_217[0:0];
  _RAND_218 = {1{`RANDOM}};
  entries_13_dataSent = _RAND_218[0:0];
  _RAND_219 = {1{`RANDOM}};
  entries_13_rspSeen = _RAND_219[0:0];
  _RAND_220 = {1{`RANDOM}};
  entries_13_compSrc = _RAND_220[6:0];
  _RAND_221 = {1{`RANDOM}};
  entries_13_traceTag = _RAND_221[0:0];
  _RAND_222 = {1{`RANDOM}};
  entries_13_state = _RAND_222[1:0];
  _RAND_223 = {1{`RANDOM}};
  entries_13_beatsLeft = _RAND_223[1:0];
  _RAND_224 = {1{`RANDOM}};
  entries_14_busy = _RAND_224[0:0];
  _RAND_225 = {1{`RANDOM}};
  entries_14_opcode = _RAND_225[2:0];
  _RAND_226 = {1{`RANDOM}};
  entries_14_resp = _RAND_226[2:0];
  _RAND_227 = {1{`RANDOM}};
  entries_14_snpTxnId = _RAND_227[7:0];
  _RAND_228 = {2{`RANDOM}};
  entries_14_addr = _RAND_228[47:0];
  _RAND_229 = {16{`RANDOM}};
  entries_14_data = _RAND_229[511:0];
  _RAND_230 = {1{`RANDOM}};
  entries_14_dataReady = _RAND_230[0:0];
  _RAND_231 = {1{`RANDOM}};
  entries_14_dbid = _RAND_231[7:0];
  _RAND_232 = {1{`RANDOM}};
  entries_14_dbidValid = _RAND_232[0:0];
  _RAND_233 = {1{`RANDOM}};
  entries_14_compGot = _RAND_233[0:0];
  _RAND_234 = {1{`RANDOM}};
  entries_14_dataSent = _RAND_234[0:0];
  _RAND_235 = {1{`RANDOM}};
  entries_14_rspSeen = _RAND_235[0:0];
  _RAND_236 = {1{`RANDOM}};
  entries_14_compSrc = _RAND_236[6:0];
  _RAND_237 = {1{`RANDOM}};
  entries_14_traceTag = _RAND_237[0:0];
  _RAND_238 = {1{`RANDOM}};
  entries_14_state = _RAND_238[1:0];
  _RAND_239 = {1{`RANDOM}};
  entries_14_beatsLeft = _RAND_239[1:0];
  _RAND_240 = {1{`RANDOM}};
  entries_15_busy = _RAND_240[0:0];
  _RAND_241 = {1{`RANDOM}};
  entries_15_opcode = _RAND_241[2:0];
  _RAND_242 = {1{`RANDOM}};
  entries_15_resp = _RAND_242[2:0];
  _RAND_243 = {1{`RANDOM}};
  entries_15_snpTxnId = _RAND_243[7:0];
  _RAND_244 = {2{`RANDOM}};
  entries_15_addr = _RAND_244[47:0];
  _RAND_245 = {16{`RANDOM}};
  entries_15_data = _RAND_245[511:0];
  _RAND_246 = {1{`RANDOM}};
  entries_15_dataReady = _RAND_246[0:0];
  _RAND_247 = {1{`RANDOM}};
  entries_15_dbid = _RAND_247[7:0];
  _RAND_248 = {1{`RANDOM}};
  entries_15_dbidValid = _RAND_248[0:0];
  _RAND_249 = {1{`RANDOM}};
  entries_15_compGot = _RAND_249[0:0];
  _RAND_250 = {1{`RANDOM}};
  entries_15_dataSent = _RAND_250[0:0];
  _RAND_251 = {1{`RANDOM}};
  entries_15_rspSeen = _RAND_251[0:0];
  _RAND_252 = {1{`RANDOM}};
  entries_15_compSrc = _RAND_252[6:0];
  _RAND_253 = {1{`RANDOM}};
  entries_15_traceTag = _RAND_253[0:0];
  _RAND_254 = {1{`RANDOM}};
  entries_15_state = _RAND_254[1:0];
  _RAND_255 = {1{`RANDOM}};
  entries_15_beatsLeft = _RAND_255[1:0];
  _RAND_256 = {1{`RANDOM}};
  entries_16_busy = _RAND_256[0:0];
  _RAND_257 = {1{`RANDOM}};
  entries_16_opcode = _RAND_257[2:0];
  _RAND_258 = {1{`RANDOM}};
  entries_16_resp = _RAND_258[2:0];
  _RAND_259 = {1{`RANDOM}};
  entries_16_snpTxnId = _RAND_259[7:0];
  _RAND_260 = {2{`RANDOM}};
  entries_16_addr = _RAND_260[47:0];
  _RAND_261 = {16{`RANDOM}};
  entries_16_data = _RAND_261[511:0];
  _RAND_262 = {1{`RANDOM}};
  entries_16_dataReady = _RAND_262[0:0];
  _RAND_263 = {1{`RANDOM}};
  entries_16_dbid = _RAND_263[7:0];
  _RAND_264 = {1{`RANDOM}};
  entries_16_dbidValid = _RAND_264[0:0];
  _RAND_265 = {1{`RANDOM}};
  entries_16_compGot = _RAND_265[0:0];
  _RAND_266 = {1{`RANDOM}};
  entries_16_dataSent = _RAND_266[0:0];
  _RAND_267 = {1{`RANDOM}};
  entries_16_rspSeen = _RAND_267[0:0];
  _RAND_268 = {1{`RANDOM}};
  entries_16_compSrc = _RAND_268[6:0];
  _RAND_269 = {1{`RANDOM}};
  entries_16_traceTag = _RAND_269[0:0];
  _RAND_270 = {1{`RANDOM}};
  entries_16_state = _RAND_270[1:0];
  _RAND_271 = {1{`RANDOM}};
  entries_16_beatsLeft = _RAND_271[1:0];
  _RAND_272 = {1{`RANDOM}};
  entries_17_busy = _RAND_272[0:0];
  _RAND_273 = {1{`RANDOM}};
  entries_17_opcode = _RAND_273[2:0];
  _RAND_274 = {1{`RANDOM}};
  entries_17_resp = _RAND_274[2:0];
  _RAND_275 = {1{`RANDOM}};
  entries_17_snpTxnId = _RAND_275[7:0];
  _RAND_276 = {2{`RANDOM}};
  entries_17_addr = _RAND_276[47:0];
  _RAND_277 = {16{`RANDOM}};
  entries_17_data = _RAND_277[511:0];
  _RAND_278 = {1{`RANDOM}};
  entries_17_dataReady = _RAND_278[0:0];
  _RAND_279 = {1{`RANDOM}};
  entries_17_dbid = _RAND_279[7:0];
  _RAND_280 = {1{`RANDOM}};
  entries_17_dbidValid = _RAND_280[0:0];
  _RAND_281 = {1{`RANDOM}};
  entries_17_compGot = _RAND_281[0:0];
  _RAND_282 = {1{`RANDOM}};
  entries_17_dataSent = _RAND_282[0:0];
  _RAND_283 = {1{`RANDOM}};
  entries_17_rspSeen = _RAND_283[0:0];
  _RAND_284 = {1{`RANDOM}};
  entries_17_compSrc = _RAND_284[6:0];
  _RAND_285 = {1{`RANDOM}};
  entries_17_traceTag = _RAND_285[0:0];
  _RAND_286 = {1{`RANDOM}};
  entries_17_state = _RAND_286[1:0];
  _RAND_287 = {1{`RANDOM}};
  entries_17_beatsLeft = _RAND_287[1:0];
  _RAND_288 = {1{`RANDOM}};
  evtHold = _RAND_288[0:0];
  _RAND_289 = {1{`RANDOM}};
  evtHoldIdx = _RAND_289[4:0];
  _RAND_290 = {1{`RANDOM}};
  rspHold = _RAND_290[0:0];
  _RAND_291 = {1{`RANDOM}};
  rspHoldIdx = _RAND_291[4:0];
  _RAND_292 = {1{`RANDOM}};
  datHold = _RAND_292[0:0];
  _RAND_293 = {1{`RANDOM}};
  datHoldIdx = _RAND_293[4:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
