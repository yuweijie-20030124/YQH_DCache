module ProbeQueue(
  input         clock,
  input         reset,
  output        io_rxSnp_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input         io_rxSnp_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [7:0]  io_rxSnp_bits_txnID, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [1:0]  io_rxSnp_bits_opcode, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [44:0] io_rxSnp_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [1:0]  io_rxSnp_bits_tagAlias, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input         io_pipeReq_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output        io_pipeReq_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [47:0] io_pipeReq_bits_vaddr, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [47:0] io_pipeReq_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [1:0]  io_pipeReq_bits_tagAlias, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [5:0]  io_pipeReq_bits_id, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [1:0]  io_pipeReq_bits_probeOp, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output        io_pipeReq_bits_needData, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [7:0]  io_pipeReq_bits_snpTxnId, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output        io_probeResp_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input         io_probeResp_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [5:0]  io_probeResp_bits_id, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input         io_lrscLockedBlock_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [47:0] io_lrscLockedBlock_bits, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input         io_updateResvSet, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input         io_missHold_0_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [47:0] io_missHold_0_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [1:0]  io_missHold_0_bits_alias, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input         io_missHold_1_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [47:0] io_missHold_1_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [1:0]  io_missHold_1_bits_alias, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input         io_missHold_2_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [47:0] io_missHold_2_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [1:0]  io_missHold_2_bits_alias, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input         io_missHold_3_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [47:0] io_missHold_3_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [1:0]  io_missHold_3_bits_alias, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input         io_missHold_4_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [47:0] io_missHold_4_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [1:0]  io_missHold_4_bits_alias, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input         io_missHold_5_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [47:0] io_missHold_5_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [1:0]  io_missHold_5_bits_alias, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input         io_missHold_6_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [47:0] io_missHold_6_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [1:0]  io_missHold_6_bits_alias, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input         io_missHold_7_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [47:0] io_missHold_7_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [1:0]  io_missHold_7_bits_alias, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input         io_missHold_8_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [47:0] io_missHold_8_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [1:0]  io_missHold_8_bits_alias, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input         io_missHold_9_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [47:0] io_missHold_9_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [1:0]  io_missHold_9_bits_alias, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input         io_missHold_10_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [47:0] io_missHold_10_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [1:0]  io_missHold_10_bits_alias, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input         io_missHold_11_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [47:0] io_missHold_11_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [1:0]  io_missHold_11_bits_alias, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input         io_missHold_12_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [47:0] io_missHold_12_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [1:0]  io_missHold_12_bits_alias, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input         io_missHold_13_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [47:0] io_missHold_13_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [1:0]  io_missHold_13_bits_alias, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input         io_missHold_14_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [47:0] io_missHold_14_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [1:0]  io_missHold_14_bits_alias, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input         io_missHold_15_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [47:0] io_missHold_15_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  input  [1:0]  io_missHold_15_bits_alias, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output        io_dropLine_0_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [47:0] io_dropLine_0_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [1:0]  io_dropLine_0_bits_alias, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output        io_dropLine_1_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [47:0] io_dropLine_1_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [1:0]  io_dropLine_1_bits_alias, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output        io_dropLine_2_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [47:0] io_dropLine_2_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [1:0]  io_dropLine_2_bits_alias, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output        io_dropLine_3_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [47:0] io_dropLine_3_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [1:0]  io_dropLine_3_bits_alias, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output        io_dropLine_4_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [47:0] io_dropLine_4_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [1:0]  io_dropLine_4_bits_alias, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output        io_dropLine_5_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [47:0] io_dropLine_5_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [1:0]  io_dropLine_5_bits_alias, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output        io_dropLine_6_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [47:0] io_dropLine_6_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [1:0]  io_dropLine_6_bits_alias, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output        io_dropLine_7_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [47:0] io_dropLine_7_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [1:0]  io_dropLine_7_bits_alias, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output        io_dropLine_8_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [47:0] io_dropLine_8_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [1:0]  io_dropLine_8_bits_alias, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output        io_dropLine_9_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [47:0] io_dropLine_9_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [1:0]  io_dropLine_9_bits_alias, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output        io_dropLine_10_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [47:0] io_dropLine_10_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [1:0]  io_dropLine_10_bits_alias, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output        io_dropLine_11_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [47:0] io_dropLine_11_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [1:0]  io_dropLine_11_bits_alias, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output        io_dropLine_12_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [47:0] io_dropLine_12_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [1:0]  io_dropLine_12_bits_alias, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output        io_dropLine_13_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [47:0] io_dropLine_13_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [1:0]  io_dropLine_13_bits_alias, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output        io_dropLine_14_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [47:0] io_dropLine_14_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [1:0]  io_dropLine_14_bits_alias, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output        io_dropLine_15_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [47:0] io_dropLine_15_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output [1:0]  io_dropLine_15_bits_alias, // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
  output        io_wfi_safe // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 65:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [63:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [63:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [63:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [63:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [63:0] _RAND_26;
  reg [31:0] _RAND_27;
  reg [31:0] _RAND_28;
  reg [31:0] _RAND_29;
  reg [31:0] _RAND_30;
  reg [63:0] _RAND_31;
  reg [31:0] _RAND_32;
  reg [31:0] _RAND_33;
  reg [31:0] _RAND_34;
  reg [31:0] _RAND_35;
  reg [63:0] _RAND_36;
  reg [31:0] _RAND_37;
  reg [31:0] _RAND_38;
  reg [31:0] _RAND_39;
  reg [31:0] _RAND_40;
  reg [63:0] _RAND_41;
  reg [31:0] _RAND_42;
  reg [31:0] _RAND_43;
  reg [31:0] _RAND_44;
  reg [31:0] _RAND_45;
  reg [63:0] _RAND_46;
  reg [31:0] _RAND_47;
  reg [31:0] _RAND_48;
  reg [31:0] _RAND_49;
  reg [31:0] _RAND_50;
  reg [63:0] _RAND_51;
  reg [31:0] _RAND_52;
  reg [31:0] _RAND_53;
  reg [31:0] _RAND_54;
  reg [31:0] _RAND_55;
  reg [63:0] _RAND_56;
  reg [31:0] _RAND_57;
  reg [31:0] _RAND_58;
  reg [31:0] _RAND_59;
  reg [31:0] _RAND_60;
  reg [63:0] _RAND_61;
  reg [31:0] _RAND_62;
  reg [31:0] _RAND_63;
  reg [31:0] _RAND_64;
  reg [31:0] _RAND_65;
  reg [63:0] _RAND_66;
  reg [31:0] _RAND_67;
  reg [31:0] _RAND_68;
  reg [31:0] _RAND_69;
  reg [31:0] _RAND_70;
  reg [63:0] _RAND_71;
  reg [31:0] _RAND_72;
  reg [31:0] _RAND_73;
  reg [31:0] _RAND_74;
  reg [31:0] _RAND_75;
  reg [63:0] _RAND_76;
  reg [31:0] _RAND_77;
  reg [31:0] _RAND_78;
  reg [31:0] _RAND_79;
  reg [31:0] _RAND_80;
  reg [31:0] _RAND_81;
  reg [63:0] _RAND_82;
  reg [63:0] _RAND_83;
  reg [31:0] _RAND_84;
  reg [31:0] _RAND_85;
  reg [31:0] _RAND_86;
  reg [31:0] _RAND_87;
  reg [31:0] _RAND_88;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] entries_0_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [47:0] entries_0_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_0_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_0_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [7:0] entries_0_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_1_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [47:0] entries_1_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_1_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_1_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [7:0] entries_1_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_2_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [47:0] entries_2_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_2_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_2_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [7:0] entries_2_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_3_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [47:0] entries_3_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_3_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_3_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [7:0] entries_3_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_4_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [47:0] entries_4_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_4_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_4_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [7:0] entries_4_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_5_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [47:0] entries_5_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_5_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_5_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [7:0] entries_5_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_6_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [47:0] entries_6_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_6_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_6_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [7:0] entries_6_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_7_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [47:0] entries_7_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_7_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_7_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [7:0] entries_7_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_8_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [47:0] entries_8_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_8_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_8_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [7:0] entries_8_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_9_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [47:0] entries_9_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_9_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_9_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [7:0] entries_9_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_10_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [47:0] entries_10_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_10_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_10_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [7:0] entries_10_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_11_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [47:0] entries_11_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_11_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_11_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [7:0] entries_11_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_12_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [47:0] entries_12_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_12_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_12_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [7:0] entries_12_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_13_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [47:0] entries_13_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_13_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_13_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [7:0] entries_13_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_14_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [47:0] entries_14_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_14_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_14_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [7:0] entries_14_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_15_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [47:0] entries_15_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_15_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [1:0] entries_15_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg [7:0] entries_15_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
  reg  outValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 70:25]
  reg [3:0] outIdx; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 71:23]
  reg [47:0] outBits_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 72:24]
  reg [47:0] outBits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 72:24]
  reg [1:0] outBits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 72:24]
  reg [5:0] outBits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 72:24]
  reg [1:0] outBits_probeOp; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 72:24]
  reg [7:0] outBits_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 72:24]
  reg  pause; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 73:22]
  wire  stop = io_updateResvSet | pause; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 75:31]
  wire [47:0] lockedLine = {io_lrscLockedBlock_bits[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 78:8]
  wire [47:0] _sameNow_T_1 = {outBits_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 78:8]
  wire  _sameNow_T_3 = io_lrscLockedBlock_valid & _sameNow_T_1 == lockedLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 84:12]
  wire  sameNow = outValid & _sameNow_T_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 94:26]
  wire  missNow_drop = outBits_probeOp == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 87:23]
  wire [47:0] _missNow_hit_T_1 = {io_missHold_0_bits_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 78:8]
  wire  missNow_hit_0 = io_missHold_0_valid & _missNow_hit_T_1 == _sameNow_T_1 & io_missHold_0_bits_alias ==
    outBits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire [47:0] _missNow_hit_T_8 = {io_missHold_1_bits_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 78:8]
  wire  missNow_hit_1 = io_missHold_1_valid & _missNow_hit_T_8 == _sameNow_T_1 & io_missHold_1_bits_alias ==
    outBits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire [47:0] _missNow_hit_T_15 = {io_missHold_2_bits_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 78:8]
  wire  missNow_hit_2 = io_missHold_2_valid & _missNow_hit_T_15 == _sameNow_T_1 & io_missHold_2_bits_alias ==
    outBits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire [47:0] _missNow_hit_T_22 = {io_missHold_3_bits_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 78:8]
  wire  missNow_hit_3 = io_missHold_3_valid & _missNow_hit_T_22 == _sameNow_T_1 & io_missHold_3_bits_alias ==
    outBits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire [47:0] _missNow_hit_T_29 = {io_missHold_4_bits_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 78:8]
  wire  missNow_hit_4 = io_missHold_4_valid & _missNow_hit_T_29 == _sameNow_T_1 & io_missHold_4_bits_alias ==
    outBits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire [47:0] _missNow_hit_T_36 = {io_missHold_5_bits_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 78:8]
  wire  missNow_hit_5 = io_missHold_5_valid & _missNow_hit_T_36 == _sameNow_T_1 & io_missHold_5_bits_alias ==
    outBits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire [47:0] _missNow_hit_T_43 = {io_missHold_6_bits_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 78:8]
  wire  missNow_hit_6 = io_missHold_6_valid & _missNow_hit_T_43 == _sameNow_T_1 & io_missHold_6_bits_alias ==
    outBits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire [47:0] _missNow_hit_T_50 = {io_missHold_7_bits_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 78:8]
  wire  missNow_hit_7 = io_missHold_7_valid & _missNow_hit_T_50 == _sameNow_T_1 & io_missHold_7_bits_alias ==
    outBits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire [47:0] _missNow_hit_T_57 = {io_missHold_8_bits_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 78:8]
  wire  missNow_hit_8 = io_missHold_8_valid & _missNow_hit_T_57 == _sameNow_T_1 & io_missHold_8_bits_alias ==
    outBits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire [47:0] _missNow_hit_T_64 = {io_missHold_9_bits_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 78:8]
  wire  missNow_hit_9 = io_missHold_9_valid & _missNow_hit_T_64 == _sameNow_T_1 & io_missHold_9_bits_alias ==
    outBits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire [47:0] _missNow_hit_T_71 = {io_missHold_10_bits_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 78:8]
  wire  missNow_hit_10 = io_missHold_10_valid & _missNow_hit_T_71 == _sameNow_T_1 & io_missHold_10_bits_alias ==
    outBits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire [47:0] _missNow_hit_T_78 = {io_missHold_11_bits_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 78:8]
  wire  missNow_hit_11 = io_missHold_11_valid & _missNow_hit_T_78 == _sameNow_T_1 & io_missHold_11_bits_alias ==
    outBits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire [47:0] _missNow_hit_T_85 = {io_missHold_12_bits_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 78:8]
  wire  missNow_hit_12 = io_missHold_12_valid & _missNow_hit_T_85 == _sameNow_T_1 & io_missHold_12_bits_alias ==
    outBits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire [47:0] _missNow_hit_T_92 = {io_missHold_13_bits_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 78:8]
  wire  missNow_hit_13 = io_missHold_13_valid & _missNow_hit_T_92 == _sameNow_T_1 & io_missHold_13_bits_alias ==
    outBits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire [47:0] _missNow_hit_T_99 = {io_missHold_14_bits_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 78:8]
  wire  missNow_hit_14 = io_missHold_14_valid & _missNow_hit_T_99 == _sameNow_T_1 & io_missHold_14_bits_alias ==
    outBits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire [47:0] _missNow_hit_T_106 = {io_missHold_15_bits_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 78:8]
  wire  missNow_hit_15 = io_missHold_15_valid & _missNow_hit_T_106 == _sameNow_T_1 & io_missHold_15_bits_alias ==
    outBits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  _missNow_T_16 = ~missNow_drop & (missNow_hit_0 | missNow_hit_1 | missNow_hit_2 | missNow_hit_3 | missNow_hit_4
     | missNow_hit_5 | missNow_hit_6 | missNow_hit_7 | missNow_hit_8 | missNow_hit_9 | missNow_hit_10 | missNow_hit_11
     | missNow_hit_12 | missNow_hit_13 | missNow_hit_14 | missNow_hit_15); // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 91:11]
  wire  missNow = outValid & _missNow_T_16; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 95:26]
  wire  pullBack = sameNow | missNow; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 97:26]
  wire  fire = io_pipeReq_ready & io_pipeReq_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 57:35]
  wire [47:0] _eligible_0_T_2 = {entries_0_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 78:8]
  wire  _eligible_0_T_4 = io_lrscLockedBlock_valid & _eligible_0_T_2 == lockedLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 84:12]
  wire  _eligible_0_T_5 = ~_eligible_0_T_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 105:7]
  wire  _eligible_0_T_6 = entries_0_state == 2'h1 & _eligible_0_T_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 104:61]
  wire  eligible_0_drop = entries_0_opcode == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 87:23]
  wire  eligible_0_hit_0 = io_missHold_0_valid & _missNow_hit_T_1 == _eligible_0_T_2 & io_missHold_0_bits_alias ==
    entries_0_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_0_hit_1 = io_missHold_1_valid & _missNow_hit_T_8 == _eligible_0_T_2 & io_missHold_1_bits_alias ==
    entries_0_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_0_hit_2 = io_missHold_2_valid & _missNow_hit_T_15 == _eligible_0_T_2 & io_missHold_2_bits_alias ==
    entries_0_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_0_hit_3 = io_missHold_3_valid & _missNow_hit_T_22 == _eligible_0_T_2 & io_missHold_3_bits_alias ==
    entries_0_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_0_hit_4 = io_missHold_4_valid & _missNow_hit_T_29 == _eligible_0_T_2 & io_missHold_4_bits_alias ==
    entries_0_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_0_hit_5 = io_missHold_5_valid & _missNow_hit_T_36 == _eligible_0_T_2 & io_missHold_5_bits_alias ==
    entries_0_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_0_hit_6 = io_missHold_6_valid & _missNow_hit_T_43 == _eligible_0_T_2 & io_missHold_6_bits_alias ==
    entries_0_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_0_hit_7 = io_missHold_7_valid & _missNow_hit_T_50 == _eligible_0_T_2 & io_missHold_7_bits_alias ==
    entries_0_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_0_hit_8 = io_missHold_8_valid & _missNow_hit_T_57 == _eligible_0_T_2 & io_missHold_8_bits_alias ==
    entries_0_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_0_hit_9 = io_missHold_9_valid & _missNow_hit_T_64 == _eligible_0_T_2 & io_missHold_9_bits_alias ==
    entries_0_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_0_hit_10 = io_missHold_10_valid & _missNow_hit_T_71 == _eligible_0_T_2 & io_missHold_10_bits_alias ==
    entries_0_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_0_hit_11 = io_missHold_11_valid & _missNow_hit_T_78 == _eligible_0_T_2 & io_missHold_11_bits_alias ==
    entries_0_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_0_hit_12 = io_missHold_12_valid & _missNow_hit_T_85 == _eligible_0_T_2 & io_missHold_12_bits_alias ==
    entries_0_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_0_hit_13 = io_missHold_13_valid & _missNow_hit_T_92 == _eligible_0_T_2 & io_missHold_13_bits_alias ==
    entries_0_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_0_hit_14 = io_missHold_14_valid & _missNow_hit_T_99 == _eligible_0_T_2 & io_missHold_14_bits_alias ==
    entries_0_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_0_hit_15 = io_missHold_15_valid & _missNow_hit_T_106 == _eligible_0_T_2 & io_missHold_15_bits_alias ==
    entries_0_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  _eligible_0_T_23 = ~eligible_0_drop & (eligible_0_hit_0 | eligible_0_hit_1 | eligible_0_hit_2 | eligible_0_hit_3
     | eligible_0_hit_4 | eligible_0_hit_5 | eligible_0_hit_6 | eligible_0_hit_7 | eligible_0_hit_8 | eligible_0_hit_9
     | eligible_0_hit_10 | eligible_0_hit_11 | eligible_0_hit_12 | eligible_0_hit_13 | eligible_0_hit_14 |
    eligible_0_hit_15); // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 91:11]
  wire  _eligible_0_T_24 = ~_eligible_0_T_23; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 106:7]
  wire  eligible_0 = _eligible_0_T_6 & _eligible_0_T_24; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 105:34]
  wire [47:0] _eligible_1_T_2 = {entries_1_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 78:8]
  wire  _eligible_1_T_4 = io_lrscLockedBlock_valid & _eligible_1_T_2 == lockedLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 84:12]
  wire  _eligible_1_T_5 = ~_eligible_1_T_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 105:7]
  wire  _eligible_1_T_6 = entries_1_state == 2'h1 & _eligible_1_T_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 104:61]
  wire  eligible_1_drop = entries_1_opcode == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 87:23]
  wire  eligible_1_hit_0 = io_missHold_0_valid & _missNow_hit_T_1 == _eligible_1_T_2 & io_missHold_0_bits_alias ==
    entries_1_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_1_hit_1 = io_missHold_1_valid & _missNow_hit_T_8 == _eligible_1_T_2 & io_missHold_1_bits_alias ==
    entries_1_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_1_hit_2 = io_missHold_2_valid & _missNow_hit_T_15 == _eligible_1_T_2 & io_missHold_2_bits_alias ==
    entries_1_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_1_hit_3 = io_missHold_3_valid & _missNow_hit_T_22 == _eligible_1_T_2 & io_missHold_3_bits_alias ==
    entries_1_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_1_hit_4 = io_missHold_4_valid & _missNow_hit_T_29 == _eligible_1_T_2 & io_missHold_4_bits_alias ==
    entries_1_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_1_hit_5 = io_missHold_5_valid & _missNow_hit_T_36 == _eligible_1_T_2 & io_missHold_5_bits_alias ==
    entries_1_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_1_hit_6 = io_missHold_6_valid & _missNow_hit_T_43 == _eligible_1_T_2 & io_missHold_6_bits_alias ==
    entries_1_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_1_hit_7 = io_missHold_7_valid & _missNow_hit_T_50 == _eligible_1_T_2 & io_missHold_7_bits_alias ==
    entries_1_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_1_hit_8 = io_missHold_8_valid & _missNow_hit_T_57 == _eligible_1_T_2 & io_missHold_8_bits_alias ==
    entries_1_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_1_hit_9 = io_missHold_9_valid & _missNow_hit_T_64 == _eligible_1_T_2 & io_missHold_9_bits_alias ==
    entries_1_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_1_hit_10 = io_missHold_10_valid & _missNow_hit_T_71 == _eligible_1_T_2 & io_missHold_10_bits_alias ==
    entries_1_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_1_hit_11 = io_missHold_11_valid & _missNow_hit_T_78 == _eligible_1_T_2 & io_missHold_11_bits_alias ==
    entries_1_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_1_hit_12 = io_missHold_12_valid & _missNow_hit_T_85 == _eligible_1_T_2 & io_missHold_12_bits_alias ==
    entries_1_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_1_hit_13 = io_missHold_13_valid & _missNow_hit_T_92 == _eligible_1_T_2 & io_missHold_13_bits_alias ==
    entries_1_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_1_hit_14 = io_missHold_14_valid & _missNow_hit_T_99 == _eligible_1_T_2 & io_missHold_14_bits_alias ==
    entries_1_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_1_hit_15 = io_missHold_15_valid & _missNow_hit_T_106 == _eligible_1_T_2 & io_missHold_15_bits_alias ==
    entries_1_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  _eligible_1_T_23 = ~eligible_1_drop & (eligible_1_hit_0 | eligible_1_hit_1 | eligible_1_hit_2 | eligible_1_hit_3
     | eligible_1_hit_4 | eligible_1_hit_5 | eligible_1_hit_6 | eligible_1_hit_7 | eligible_1_hit_8 | eligible_1_hit_9
     | eligible_1_hit_10 | eligible_1_hit_11 | eligible_1_hit_12 | eligible_1_hit_13 | eligible_1_hit_14 |
    eligible_1_hit_15); // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 91:11]
  wire  _eligible_1_T_24 = ~_eligible_1_T_23; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 106:7]
  wire  eligible_1 = _eligible_1_T_6 & _eligible_1_T_24; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 105:34]
  wire [47:0] _eligible_2_T_2 = {entries_2_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 78:8]
  wire  _eligible_2_T_4 = io_lrscLockedBlock_valid & _eligible_2_T_2 == lockedLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 84:12]
  wire  _eligible_2_T_5 = ~_eligible_2_T_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 105:7]
  wire  _eligible_2_T_6 = entries_2_state == 2'h1 & _eligible_2_T_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 104:61]
  wire  eligible_2_drop = entries_2_opcode == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 87:23]
  wire  eligible_2_hit_0 = io_missHold_0_valid & _missNow_hit_T_1 == _eligible_2_T_2 & io_missHold_0_bits_alias ==
    entries_2_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_2_hit_1 = io_missHold_1_valid & _missNow_hit_T_8 == _eligible_2_T_2 & io_missHold_1_bits_alias ==
    entries_2_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_2_hit_2 = io_missHold_2_valid & _missNow_hit_T_15 == _eligible_2_T_2 & io_missHold_2_bits_alias ==
    entries_2_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_2_hit_3 = io_missHold_3_valid & _missNow_hit_T_22 == _eligible_2_T_2 & io_missHold_3_bits_alias ==
    entries_2_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_2_hit_4 = io_missHold_4_valid & _missNow_hit_T_29 == _eligible_2_T_2 & io_missHold_4_bits_alias ==
    entries_2_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_2_hit_5 = io_missHold_5_valid & _missNow_hit_T_36 == _eligible_2_T_2 & io_missHold_5_bits_alias ==
    entries_2_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_2_hit_6 = io_missHold_6_valid & _missNow_hit_T_43 == _eligible_2_T_2 & io_missHold_6_bits_alias ==
    entries_2_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_2_hit_7 = io_missHold_7_valid & _missNow_hit_T_50 == _eligible_2_T_2 & io_missHold_7_bits_alias ==
    entries_2_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_2_hit_8 = io_missHold_8_valid & _missNow_hit_T_57 == _eligible_2_T_2 & io_missHold_8_bits_alias ==
    entries_2_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_2_hit_9 = io_missHold_9_valid & _missNow_hit_T_64 == _eligible_2_T_2 & io_missHold_9_bits_alias ==
    entries_2_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_2_hit_10 = io_missHold_10_valid & _missNow_hit_T_71 == _eligible_2_T_2 & io_missHold_10_bits_alias ==
    entries_2_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_2_hit_11 = io_missHold_11_valid & _missNow_hit_T_78 == _eligible_2_T_2 & io_missHold_11_bits_alias ==
    entries_2_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_2_hit_12 = io_missHold_12_valid & _missNow_hit_T_85 == _eligible_2_T_2 & io_missHold_12_bits_alias ==
    entries_2_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_2_hit_13 = io_missHold_13_valid & _missNow_hit_T_92 == _eligible_2_T_2 & io_missHold_13_bits_alias ==
    entries_2_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_2_hit_14 = io_missHold_14_valid & _missNow_hit_T_99 == _eligible_2_T_2 & io_missHold_14_bits_alias ==
    entries_2_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_2_hit_15 = io_missHold_15_valid & _missNow_hit_T_106 == _eligible_2_T_2 & io_missHold_15_bits_alias ==
    entries_2_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  _eligible_2_T_23 = ~eligible_2_drop & (eligible_2_hit_0 | eligible_2_hit_1 | eligible_2_hit_2 | eligible_2_hit_3
     | eligible_2_hit_4 | eligible_2_hit_5 | eligible_2_hit_6 | eligible_2_hit_7 | eligible_2_hit_8 | eligible_2_hit_9
     | eligible_2_hit_10 | eligible_2_hit_11 | eligible_2_hit_12 | eligible_2_hit_13 | eligible_2_hit_14 |
    eligible_2_hit_15); // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 91:11]
  wire  _eligible_2_T_24 = ~_eligible_2_T_23; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 106:7]
  wire  eligible_2 = _eligible_2_T_6 & _eligible_2_T_24; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 105:34]
  wire [47:0] _eligible_3_T_2 = {entries_3_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 78:8]
  wire  _eligible_3_T_4 = io_lrscLockedBlock_valid & _eligible_3_T_2 == lockedLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 84:12]
  wire  _eligible_3_T_5 = ~_eligible_3_T_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 105:7]
  wire  _eligible_3_T_6 = entries_3_state == 2'h1 & _eligible_3_T_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 104:61]
  wire  eligible_3_drop = entries_3_opcode == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 87:23]
  wire  eligible_3_hit_0 = io_missHold_0_valid & _missNow_hit_T_1 == _eligible_3_T_2 & io_missHold_0_bits_alias ==
    entries_3_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_3_hit_1 = io_missHold_1_valid & _missNow_hit_T_8 == _eligible_3_T_2 & io_missHold_1_bits_alias ==
    entries_3_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_3_hit_2 = io_missHold_2_valid & _missNow_hit_T_15 == _eligible_3_T_2 & io_missHold_2_bits_alias ==
    entries_3_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_3_hit_3 = io_missHold_3_valid & _missNow_hit_T_22 == _eligible_3_T_2 & io_missHold_3_bits_alias ==
    entries_3_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_3_hit_4 = io_missHold_4_valid & _missNow_hit_T_29 == _eligible_3_T_2 & io_missHold_4_bits_alias ==
    entries_3_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_3_hit_5 = io_missHold_5_valid & _missNow_hit_T_36 == _eligible_3_T_2 & io_missHold_5_bits_alias ==
    entries_3_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_3_hit_6 = io_missHold_6_valid & _missNow_hit_T_43 == _eligible_3_T_2 & io_missHold_6_bits_alias ==
    entries_3_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_3_hit_7 = io_missHold_7_valid & _missNow_hit_T_50 == _eligible_3_T_2 & io_missHold_7_bits_alias ==
    entries_3_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_3_hit_8 = io_missHold_8_valid & _missNow_hit_T_57 == _eligible_3_T_2 & io_missHold_8_bits_alias ==
    entries_3_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_3_hit_9 = io_missHold_9_valid & _missNow_hit_T_64 == _eligible_3_T_2 & io_missHold_9_bits_alias ==
    entries_3_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_3_hit_10 = io_missHold_10_valid & _missNow_hit_T_71 == _eligible_3_T_2 & io_missHold_10_bits_alias ==
    entries_3_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_3_hit_11 = io_missHold_11_valid & _missNow_hit_T_78 == _eligible_3_T_2 & io_missHold_11_bits_alias ==
    entries_3_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_3_hit_12 = io_missHold_12_valid & _missNow_hit_T_85 == _eligible_3_T_2 & io_missHold_12_bits_alias ==
    entries_3_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_3_hit_13 = io_missHold_13_valid & _missNow_hit_T_92 == _eligible_3_T_2 & io_missHold_13_bits_alias ==
    entries_3_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_3_hit_14 = io_missHold_14_valid & _missNow_hit_T_99 == _eligible_3_T_2 & io_missHold_14_bits_alias ==
    entries_3_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_3_hit_15 = io_missHold_15_valid & _missNow_hit_T_106 == _eligible_3_T_2 & io_missHold_15_bits_alias ==
    entries_3_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  _eligible_3_T_23 = ~eligible_3_drop & (eligible_3_hit_0 | eligible_3_hit_1 | eligible_3_hit_2 | eligible_3_hit_3
     | eligible_3_hit_4 | eligible_3_hit_5 | eligible_3_hit_6 | eligible_3_hit_7 | eligible_3_hit_8 | eligible_3_hit_9
     | eligible_3_hit_10 | eligible_3_hit_11 | eligible_3_hit_12 | eligible_3_hit_13 | eligible_3_hit_14 |
    eligible_3_hit_15); // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 91:11]
  wire  _eligible_3_T_24 = ~_eligible_3_T_23; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 106:7]
  wire  eligible_3 = _eligible_3_T_6 & _eligible_3_T_24; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 105:34]
  wire [47:0] _eligible_4_T_2 = {entries_4_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 78:8]
  wire  _eligible_4_T_4 = io_lrscLockedBlock_valid & _eligible_4_T_2 == lockedLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 84:12]
  wire  _eligible_4_T_5 = ~_eligible_4_T_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 105:7]
  wire  _eligible_4_T_6 = entries_4_state == 2'h1 & _eligible_4_T_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 104:61]
  wire  eligible_4_drop = entries_4_opcode == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 87:23]
  wire  eligible_4_hit_0 = io_missHold_0_valid & _missNow_hit_T_1 == _eligible_4_T_2 & io_missHold_0_bits_alias ==
    entries_4_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_4_hit_1 = io_missHold_1_valid & _missNow_hit_T_8 == _eligible_4_T_2 & io_missHold_1_bits_alias ==
    entries_4_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_4_hit_2 = io_missHold_2_valid & _missNow_hit_T_15 == _eligible_4_T_2 & io_missHold_2_bits_alias ==
    entries_4_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_4_hit_3 = io_missHold_3_valid & _missNow_hit_T_22 == _eligible_4_T_2 & io_missHold_3_bits_alias ==
    entries_4_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_4_hit_4 = io_missHold_4_valid & _missNow_hit_T_29 == _eligible_4_T_2 & io_missHold_4_bits_alias ==
    entries_4_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_4_hit_5 = io_missHold_5_valid & _missNow_hit_T_36 == _eligible_4_T_2 & io_missHold_5_bits_alias ==
    entries_4_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_4_hit_6 = io_missHold_6_valid & _missNow_hit_T_43 == _eligible_4_T_2 & io_missHold_6_bits_alias ==
    entries_4_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_4_hit_7 = io_missHold_7_valid & _missNow_hit_T_50 == _eligible_4_T_2 & io_missHold_7_bits_alias ==
    entries_4_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_4_hit_8 = io_missHold_8_valid & _missNow_hit_T_57 == _eligible_4_T_2 & io_missHold_8_bits_alias ==
    entries_4_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_4_hit_9 = io_missHold_9_valid & _missNow_hit_T_64 == _eligible_4_T_2 & io_missHold_9_bits_alias ==
    entries_4_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_4_hit_10 = io_missHold_10_valid & _missNow_hit_T_71 == _eligible_4_T_2 & io_missHold_10_bits_alias ==
    entries_4_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_4_hit_11 = io_missHold_11_valid & _missNow_hit_T_78 == _eligible_4_T_2 & io_missHold_11_bits_alias ==
    entries_4_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_4_hit_12 = io_missHold_12_valid & _missNow_hit_T_85 == _eligible_4_T_2 & io_missHold_12_bits_alias ==
    entries_4_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_4_hit_13 = io_missHold_13_valid & _missNow_hit_T_92 == _eligible_4_T_2 & io_missHold_13_bits_alias ==
    entries_4_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_4_hit_14 = io_missHold_14_valid & _missNow_hit_T_99 == _eligible_4_T_2 & io_missHold_14_bits_alias ==
    entries_4_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_4_hit_15 = io_missHold_15_valid & _missNow_hit_T_106 == _eligible_4_T_2 & io_missHold_15_bits_alias ==
    entries_4_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  _eligible_4_T_23 = ~eligible_4_drop & (eligible_4_hit_0 | eligible_4_hit_1 | eligible_4_hit_2 | eligible_4_hit_3
     | eligible_4_hit_4 | eligible_4_hit_5 | eligible_4_hit_6 | eligible_4_hit_7 | eligible_4_hit_8 | eligible_4_hit_9
     | eligible_4_hit_10 | eligible_4_hit_11 | eligible_4_hit_12 | eligible_4_hit_13 | eligible_4_hit_14 |
    eligible_4_hit_15); // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 91:11]
  wire  _eligible_4_T_24 = ~_eligible_4_T_23; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 106:7]
  wire  eligible_4 = _eligible_4_T_6 & _eligible_4_T_24; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 105:34]
  wire [47:0] _eligible_5_T_2 = {entries_5_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 78:8]
  wire  _eligible_5_T_4 = io_lrscLockedBlock_valid & _eligible_5_T_2 == lockedLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 84:12]
  wire  _eligible_5_T_5 = ~_eligible_5_T_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 105:7]
  wire  _eligible_5_T_6 = entries_5_state == 2'h1 & _eligible_5_T_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 104:61]
  wire  eligible_5_drop = entries_5_opcode == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 87:23]
  wire  eligible_5_hit_0 = io_missHold_0_valid & _missNow_hit_T_1 == _eligible_5_T_2 & io_missHold_0_bits_alias ==
    entries_5_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_5_hit_1 = io_missHold_1_valid & _missNow_hit_T_8 == _eligible_5_T_2 & io_missHold_1_bits_alias ==
    entries_5_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_5_hit_2 = io_missHold_2_valid & _missNow_hit_T_15 == _eligible_5_T_2 & io_missHold_2_bits_alias ==
    entries_5_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_5_hit_3 = io_missHold_3_valid & _missNow_hit_T_22 == _eligible_5_T_2 & io_missHold_3_bits_alias ==
    entries_5_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_5_hit_4 = io_missHold_4_valid & _missNow_hit_T_29 == _eligible_5_T_2 & io_missHold_4_bits_alias ==
    entries_5_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_5_hit_5 = io_missHold_5_valid & _missNow_hit_T_36 == _eligible_5_T_2 & io_missHold_5_bits_alias ==
    entries_5_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_5_hit_6 = io_missHold_6_valid & _missNow_hit_T_43 == _eligible_5_T_2 & io_missHold_6_bits_alias ==
    entries_5_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_5_hit_7 = io_missHold_7_valid & _missNow_hit_T_50 == _eligible_5_T_2 & io_missHold_7_bits_alias ==
    entries_5_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_5_hit_8 = io_missHold_8_valid & _missNow_hit_T_57 == _eligible_5_T_2 & io_missHold_8_bits_alias ==
    entries_5_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_5_hit_9 = io_missHold_9_valid & _missNow_hit_T_64 == _eligible_5_T_2 & io_missHold_9_bits_alias ==
    entries_5_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_5_hit_10 = io_missHold_10_valid & _missNow_hit_T_71 == _eligible_5_T_2 & io_missHold_10_bits_alias ==
    entries_5_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_5_hit_11 = io_missHold_11_valid & _missNow_hit_T_78 == _eligible_5_T_2 & io_missHold_11_bits_alias ==
    entries_5_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_5_hit_12 = io_missHold_12_valid & _missNow_hit_T_85 == _eligible_5_T_2 & io_missHold_12_bits_alias ==
    entries_5_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_5_hit_13 = io_missHold_13_valid & _missNow_hit_T_92 == _eligible_5_T_2 & io_missHold_13_bits_alias ==
    entries_5_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_5_hit_14 = io_missHold_14_valid & _missNow_hit_T_99 == _eligible_5_T_2 & io_missHold_14_bits_alias ==
    entries_5_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_5_hit_15 = io_missHold_15_valid & _missNow_hit_T_106 == _eligible_5_T_2 & io_missHold_15_bits_alias ==
    entries_5_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  _eligible_5_T_23 = ~eligible_5_drop & (eligible_5_hit_0 | eligible_5_hit_1 | eligible_5_hit_2 | eligible_5_hit_3
     | eligible_5_hit_4 | eligible_5_hit_5 | eligible_5_hit_6 | eligible_5_hit_7 | eligible_5_hit_8 | eligible_5_hit_9
     | eligible_5_hit_10 | eligible_5_hit_11 | eligible_5_hit_12 | eligible_5_hit_13 | eligible_5_hit_14 |
    eligible_5_hit_15); // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 91:11]
  wire  _eligible_5_T_24 = ~_eligible_5_T_23; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 106:7]
  wire  eligible_5 = _eligible_5_T_6 & _eligible_5_T_24; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 105:34]
  wire [47:0] _eligible_6_T_2 = {entries_6_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 78:8]
  wire  _eligible_6_T_4 = io_lrscLockedBlock_valid & _eligible_6_T_2 == lockedLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 84:12]
  wire  _eligible_6_T_5 = ~_eligible_6_T_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 105:7]
  wire  _eligible_6_T_6 = entries_6_state == 2'h1 & _eligible_6_T_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 104:61]
  wire  eligible_6_drop = entries_6_opcode == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 87:23]
  wire  eligible_6_hit_0 = io_missHold_0_valid & _missNow_hit_T_1 == _eligible_6_T_2 & io_missHold_0_bits_alias ==
    entries_6_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_6_hit_1 = io_missHold_1_valid & _missNow_hit_T_8 == _eligible_6_T_2 & io_missHold_1_bits_alias ==
    entries_6_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_6_hit_2 = io_missHold_2_valid & _missNow_hit_T_15 == _eligible_6_T_2 & io_missHold_2_bits_alias ==
    entries_6_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_6_hit_3 = io_missHold_3_valid & _missNow_hit_T_22 == _eligible_6_T_2 & io_missHold_3_bits_alias ==
    entries_6_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_6_hit_4 = io_missHold_4_valid & _missNow_hit_T_29 == _eligible_6_T_2 & io_missHold_4_bits_alias ==
    entries_6_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_6_hit_5 = io_missHold_5_valid & _missNow_hit_T_36 == _eligible_6_T_2 & io_missHold_5_bits_alias ==
    entries_6_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_6_hit_6 = io_missHold_6_valid & _missNow_hit_T_43 == _eligible_6_T_2 & io_missHold_6_bits_alias ==
    entries_6_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_6_hit_7 = io_missHold_7_valid & _missNow_hit_T_50 == _eligible_6_T_2 & io_missHold_7_bits_alias ==
    entries_6_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_6_hit_8 = io_missHold_8_valid & _missNow_hit_T_57 == _eligible_6_T_2 & io_missHold_8_bits_alias ==
    entries_6_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_6_hit_9 = io_missHold_9_valid & _missNow_hit_T_64 == _eligible_6_T_2 & io_missHold_9_bits_alias ==
    entries_6_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_6_hit_10 = io_missHold_10_valid & _missNow_hit_T_71 == _eligible_6_T_2 & io_missHold_10_bits_alias ==
    entries_6_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_6_hit_11 = io_missHold_11_valid & _missNow_hit_T_78 == _eligible_6_T_2 & io_missHold_11_bits_alias ==
    entries_6_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_6_hit_12 = io_missHold_12_valid & _missNow_hit_T_85 == _eligible_6_T_2 & io_missHold_12_bits_alias ==
    entries_6_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_6_hit_13 = io_missHold_13_valid & _missNow_hit_T_92 == _eligible_6_T_2 & io_missHold_13_bits_alias ==
    entries_6_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_6_hit_14 = io_missHold_14_valid & _missNow_hit_T_99 == _eligible_6_T_2 & io_missHold_14_bits_alias ==
    entries_6_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_6_hit_15 = io_missHold_15_valid & _missNow_hit_T_106 == _eligible_6_T_2 & io_missHold_15_bits_alias ==
    entries_6_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  _eligible_6_T_23 = ~eligible_6_drop & (eligible_6_hit_0 | eligible_6_hit_1 | eligible_6_hit_2 | eligible_6_hit_3
     | eligible_6_hit_4 | eligible_6_hit_5 | eligible_6_hit_6 | eligible_6_hit_7 | eligible_6_hit_8 | eligible_6_hit_9
     | eligible_6_hit_10 | eligible_6_hit_11 | eligible_6_hit_12 | eligible_6_hit_13 | eligible_6_hit_14 |
    eligible_6_hit_15); // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 91:11]
  wire  _eligible_6_T_24 = ~_eligible_6_T_23; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 106:7]
  wire  eligible_6 = _eligible_6_T_6 & _eligible_6_T_24; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 105:34]
  wire [47:0] _eligible_7_T_2 = {entries_7_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 78:8]
  wire  _eligible_7_T_4 = io_lrscLockedBlock_valid & _eligible_7_T_2 == lockedLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 84:12]
  wire  _eligible_7_T_5 = ~_eligible_7_T_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 105:7]
  wire  _eligible_7_T_6 = entries_7_state == 2'h1 & _eligible_7_T_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 104:61]
  wire  eligible_7_drop = entries_7_opcode == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 87:23]
  wire  eligible_7_hit_0 = io_missHold_0_valid & _missNow_hit_T_1 == _eligible_7_T_2 & io_missHold_0_bits_alias ==
    entries_7_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_7_hit_1 = io_missHold_1_valid & _missNow_hit_T_8 == _eligible_7_T_2 & io_missHold_1_bits_alias ==
    entries_7_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_7_hit_2 = io_missHold_2_valid & _missNow_hit_T_15 == _eligible_7_T_2 & io_missHold_2_bits_alias ==
    entries_7_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_7_hit_3 = io_missHold_3_valid & _missNow_hit_T_22 == _eligible_7_T_2 & io_missHold_3_bits_alias ==
    entries_7_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_7_hit_4 = io_missHold_4_valid & _missNow_hit_T_29 == _eligible_7_T_2 & io_missHold_4_bits_alias ==
    entries_7_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_7_hit_5 = io_missHold_5_valid & _missNow_hit_T_36 == _eligible_7_T_2 & io_missHold_5_bits_alias ==
    entries_7_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_7_hit_6 = io_missHold_6_valid & _missNow_hit_T_43 == _eligible_7_T_2 & io_missHold_6_bits_alias ==
    entries_7_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_7_hit_7 = io_missHold_7_valid & _missNow_hit_T_50 == _eligible_7_T_2 & io_missHold_7_bits_alias ==
    entries_7_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_7_hit_8 = io_missHold_8_valid & _missNow_hit_T_57 == _eligible_7_T_2 & io_missHold_8_bits_alias ==
    entries_7_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_7_hit_9 = io_missHold_9_valid & _missNow_hit_T_64 == _eligible_7_T_2 & io_missHold_9_bits_alias ==
    entries_7_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_7_hit_10 = io_missHold_10_valid & _missNow_hit_T_71 == _eligible_7_T_2 & io_missHold_10_bits_alias ==
    entries_7_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_7_hit_11 = io_missHold_11_valid & _missNow_hit_T_78 == _eligible_7_T_2 & io_missHold_11_bits_alias ==
    entries_7_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_7_hit_12 = io_missHold_12_valid & _missNow_hit_T_85 == _eligible_7_T_2 & io_missHold_12_bits_alias ==
    entries_7_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_7_hit_13 = io_missHold_13_valid & _missNow_hit_T_92 == _eligible_7_T_2 & io_missHold_13_bits_alias ==
    entries_7_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_7_hit_14 = io_missHold_14_valid & _missNow_hit_T_99 == _eligible_7_T_2 & io_missHold_14_bits_alias ==
    entries_7_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_7_hit_15 = io_missHold_15_valid & _missNow_hit_T_106 == _eligible_7_T_2 & io_missHold_15_bits_alias ==
    entries_7_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  _eligible_7_T_23 = ~eligible_7_drop & (eligible_7_hit_0 | eligible_7_hit_1 | eligible_7_hit_2 | eligible_7_hit_3
     | eligible_7_hit_4 | eligible_7_hit_5 | eligible_7_hit_6 | eligible_7_hit_7 | eligible_7_hit_8 | eligible_7_hit_9
     | eligible_7_hit_10 | eligible_7_hit_11 | eligible_7_hit_12 | eligible_7_hit_13 | eligible_7_hit_14 |
    eligible_7_hit_15); // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 91:11]
  wire  _eligible_7_T_24 = ~_eligible_7_T_23; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 106:7]
  wire  eligible_7 = _eligible_7_T_6 & _eligible_7_T_24; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 105:34]
  wire [47:0] _eligible_8_T_2 = {entries_8_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 78:8]
  wire  _eligible_8_T_4 = io_lrscLockedBlock_valid & _eligible_8_T_2 == lockedLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 84:12]
  wire  _eligible_8_T_5 = ~_eligible_8_T_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 105:7]
  wire  _eligible_8_T_6 = entries_8_state == 2'h1 & _eligible_8_T_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 104:61]
  wire  eligible_8_drop = entries_8_opcode == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 87:23]
  wire  eligible_8_hit_0 = io_missHold_0_valid & _missNow_hit_T_1 == _eligible_8_T_2 & io_missHold_0_bits_alias ==
    entries_8_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_8_hit_1 = io_missHold_1_valid & _missNow_hit_T_8 == _eligible_8_T_2 & io_missHold_1_bits_alias ==
    entries_8_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_8_hit_2 = io_missHold_2_valid & _missNow_hit_T_15 == _eligible_8_T_2 & io_missHold_2_bits_alias ==
    entries_8_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_8_hit_3 = io_missHold_3_valid & _missNow_hit_T_22 == _eligible_8_T_2 & io_missHold_3_bits_alias ==
    entries_8_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_8_hit_4 = io_missHold_4_valid & _missNow_hit_T_29 == _eligible_8_T_2 & io_missHold_4_bits_alias ==
    entries_8_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_8_hit_5 = io_missHold_5_valid & _missNow_hit_T_36 == _eligible_8_T_2 & io_missHold_5_bits_alias ==
    entries_8_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_8_hit_6 = io_missHold_6_valid & _missNow_hit_T_43 == _eligible_8_T_2 & io_missHold_6_bits_alias ==
    entries_8_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_8_hit_7 = io_missHold_7_valid & _missNow_hit_T_50 == _eligible_8_T_2 & io_missHold_7_bits_alias ==
    entries_8_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_8_hit_8 = io_missHold_8_valid & _missNow_hit_T_57 == _eligible_8_T_2 & io_missHold_8_bits_alias ==
    entries_8_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_8_hit_9 = io_missHold_9_valid & _missNow_hit_T_64 == _eligible_8_T_2 & io_missHold_9_bits_alias ==
    entries_8_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_8_hit_10 = io_missHold_10_valid & _missNow_hit_T_71 == _eligible_8_T_2 & io_missHold_10_bits_alias ==
    entries_8_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_8_hit_11 = io_missHold_11_valid & _missNow_hit_T_78 == _eligible_8_T_2 & io_missHold_11_bits_alias ==
    entries_8_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_8_hit_12 = io_missHold_12_valid & _missNow_hit_T_85 == _eligible_8_T_2 & io_missHold_12_bits_alias ==
    entries_8_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_8_hit_13 = io_missHold_13_valid & _missNow_hit_T_92 == _eligible_8_T_2 & io_missHold_13_bits_alias ==
    entries_8_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_8_hit_14 = io_missHold_14_valid & _missNow_hit_T_99 == _eligible_8_T_2 & io_missHold_14_bits_alias ==
    entries_8_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_8_hit_15 = io_missHold_15_valid & _missNow_hit_T_106 == _eligible_8_T_2 & io_missHold_15_bits_alias ==
    entries_8_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  _eligible_8_T_23 = ~eligible_8_drop & (eligible_8_hit_0 | eligible_8_hit_1 | eligible_8_hit_2 | eligible_8_hit_3
     | eligible_8_hit_4 | eligible_8_hit_5 | eligible_8_hit_6 | eligible_8_hit_7 | eligible_8_hit_8 | eligible_8_hit_9
     | eligible_8_hit_10 | eligible_8_hit_11 | eligible_8_hit_12 | eligible_8_hit_13 | eligible_8_hit_14 |
    eligible_8_hit_15); // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 91:11]
  wire  _eligible_8_T_24 = ~_eligible_8_T_23; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 106:7]
  wire  eligible_8 = _eligible_8_T_6 & _eligible_8_T_24; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 105:34]
  wire [47:0] _eligible_9_T_2 = {entries_9_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 78:8]
  wire  _eligible_9_T_4 = io_lrscLockedBlock_valid & _eligible_9_T_2 == lockedLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 84:12]
  wire  _eligible_9_T_5 = ~_eligible_9_T_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 105:7]
  wire  _eligible_9_T_6 = entries_9_state == 2'h1 & _eligible_9_T_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 104:61]
  wire  eligible_9_drop = entries_9_opcode == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 87:23]
  wire  eligible_9_hit_0 = io_missHold_0_valid & _missNow_hit_T_1 == _eligible_9_T_2 & io_missHold_0_bits_alias ==
    entries_9_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_9_hit_1 = io_missHold_1_valid & _missNow_hit_T_8 == _eligible_9_T_2 & io_missHold_1_bits_alias ==
    entries_9_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_9_hit_2 = io_missHold_2_valid & _missNow_hit_T_15 == _eligible_9_T_2 & io_missHold_2_bits_alias ==
    entries_9_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_9_hit_3 = io_missHold_3_valid & _missNow_hit_T_22 == _eligible_9_T_2 & io_missHold_3_bits_alias ==
    entries_9_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_9_hit_4 = io_missHold_4_valid & _missNow_hit_T_29 == _eligible_9_T_2 & io_missHold_4_bits_alias ==
    entries_9_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_9_hit_5 = io_missHold_5_valid & _missNow_hit_T_36 == _eligible_9_T_2 & io_missHold_5_bits_alias ==
    entries_9_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_9_hit_6 = io_missHold_6_valid & _missNow_hit_T_43 == _eligible_9_T_2 & io_missHold_6_bits_alias ==
    entries_9_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_9_hit_7 = io_missHold_7_valid & _missNow_hit_T_50 == _eligible_9_T_2 & io_missHold_7_bits_alias ==
    entries_9_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_9_hit_8 = io_missHold_8_valid & _missNow_hit_T_57 == _eligible_9_T_2 & io_missHold_8_bits_alias ==
    entries_9_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_9_hit_9 = io_missHold_9_valid & _missNow_hit_T_64 == _eligible_9_T_2 & io_missHold_9_bits_alias ==
    entries_9_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_9_hit_10 = io_missHold_10_valid & _missNow_hit_T_71 == _eligible_9_T_2 & io_missHold_10_bits_alias ==
    entries_9_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_9_hit_11 = io_missHold_11_valid & _missNow_hit_T_78 == _eligible_9_T_2 & io_missHold_11_bits_alias ==
    entries_9_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_9_hit_12 = io_missHold_12_valid & _missNow_hit_T_85 == _eligible_9_T_2 & io_missHold_12_bits_alias ==
    entries_9_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_9_hit_13 = io_missHold_13_valid & _missNow_hit_T_92 == _eligible_9_T_2 & io_missHold_13_bits_alias ==
    entries_9_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_9_hit_14 = io_missHold_14_valid & _missNow_hit_T_99 == _eligible_9_T_2 & io_missHold_14_bits_alias ==
    entries_9_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_9_hit_15 = io_missHold_15_valid & _missNow_hit_T_106 == _eligible_9_T_2 & io_missHold_15_bits_alias ==
    entries_9_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  _eligible_9_T_23 = ~eligible_9_drop & (eligible_9_hit_0 | eligible_9_hit_1 | eligible_9_hit_2 | eligible_9_hit_3
     | eligible_9_hit_4 | eligible_9_hit_5 | eligible_9_hit_6 | eligible_9_hit_7 | eligible_9_hit_8 | eligible_9_hit_9
     | eligible_9_hit_10 | eligible_9_hit_11 | eligible_9_hit_12 | eligible_9_hit_13 | eligible_9_hit_14 |
    eligible_9_hit_15); // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 91:11]
  wire  _eligible_9_T_24 = ~_eligible_9_T_23; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 106:7]
  wire  eligible_9 = _eligible_9_T_6 & _eligible_9_T_24; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 105:34]
  wire [47:0] _eligible_10_T_2 = {entries_10_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 78:8]
  wire  _eligible_10_T_4 = io_lrscLockedBlock_valid & _eligible_10_T_2 == lockedLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 84:12]
  wire  _eligible_10_T_5 = ~_eligible_10_T_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 105:7]
  wire  _eligible_10_T_6 = entries_10_state == 2'h1 & _eligible_10_T_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 104:61]
  wire  eligible_10_drop = entries_10_opcode == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 87:23]
  wire  eligible_10_hit_0 = io_missHold_0_valid & _missNow_hit_T_1 == _eligible_10_T_2 & io_missHold_0_bits_alias ==
    entries_10_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_10_hit_1 = io_missHold_1_valid & _missNow_hit_T_8 == _eligible_10_T_2 & io_missHold_1_bits_alias ==
    entries_10_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_10_hit_2 = io_missHold_2_valid & _missNow_hit_T_15 == _eligible_10_T_2 & io_missHold_2_bits_alias ==
    entries_10_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_10_hit_3 = io_missHold_3_valid & _missNow_hit_T_22 == _eligible_10_T_2 & io_missHold_3_bits_alias ==
    entries_10_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_10_hit_4 = io_missHold_4_valid & _missNow_hit_T_29 == _eligible_10_T_2 & io_missHold_4_bits_alias ==
    entries_10_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_10_hit_5 = io_missHold_5_valid & _missNow_hit_T_36 == _eligible_10_T_2 & io_missHold_5_bits_alias ==
    entries_10_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_10_hit_6 = io_missHold_6_valid & _missNow_hit_T_43 == _eligible_10_T_2 & io_missHold_6_bits_alias ==
    entries_10_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_10_hit_7 = io_missHold_7_valid & _missNow_hit_T_50 == _eligible_10_T_2 & io_missHold_7_bits_alias ==
    entries_10_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_10_hit_8 = io_missHold_8_valid & _missNow_hit_T_57 == _eligible_10_T_2 & io_missHold_8_bits_alias ==
    entries_10_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_10_hit_9 = io_missHold_9_valid & _missNow_hit_T_64 == _eligible_10_T_2 & io_missHold_9_bits_alias ==
    entries_10_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_10_hit_10 = io_missHold_10_valid & _missNow_hit_T_71 == _eligible_10_T_2 & io_missHold_10_bits_alias
     == entries_10_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_10_hit_11 = io_missHold_11_valid & _missNow_hit_T_78 == _eligible_10_T_2 & io_missHold_11_bits_alias
     == entries_10_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_10_hit_12 = io_missHold_12_valid & _missNow_hit_T_85 == _eligible_10_T_2 & io_missHold_12_bits_alias
     == entries_10_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_10_hit_13 = io_missHold_13_valid & _missNow_hit_T_92 == _eligible_10_T_2 & io_missHold_13_bits_alias
     == entries_10_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_10_hit_14 = io_missHold_14_valid & _missNow_hit_T_99 == _eligible_10_T_2 & io_missHold_14_bits_alias
     == entries_10_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_10_hit_15 = io_missHold_15_valid & _missNow_hit_T_106 == _eligible_10_T_2 & io_missHold_15_bits_alias
     == entries_10_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  _eligible_10_T_23 = ~eligible_10_drop & (eligible_10_hit_0 | eligible_10_hit_1 | eligible_10_hit_2 |
    eligible_10_hit_3 | eligible_10_hit_4 | eligible_10_hit_5 | eligible_10_hit_6 | eligible_10_hit_7 |
    eligible_10_hit_8 | eligible_10_hit_9 | eligible_10_hit_10 | eligible_10_hit_11 | eligible_10_hit_12 |
    eligible_10_hit_13 | eligible_10_hit_14 | eligible_10_hit_15); // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 91:11]
  wire  _eligible_10_T_24 = ~_eligible_10_T_23; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 106:7]
  wire  eligible_10 = _eligible_10_T_6 & _eligible_10_T_24; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 105:34]
  wire [47:0] _eligible_11_T_2 = {entries_11_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 78:8]
  wire  _eligible_11_T_4 = io_lrscLockedBlock_valid & _eligible_11_T_2 == lockedLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 84:12]
  wire  _eligible_11_T_5 = ~_eligible_11_T_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 105:7]
  wire  _eligible_11_T_6 = entries_11_state == 2'h1 & _eligible_11_T_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 104:61]
  wire  eligible_11_drop = entries_11_opcode == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 87:23]
  wire  eligible_11_hit_0 = io_missHold_0_valid & _missNow_hit_T_1 == _eligible_11_T_2 & io_missHold_0_bits_alias ==
    entries_11_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_11_hit_1 = io_missHold_1_valid & _missNow_hit_T_8 == _eligible_11_T_2 & io_missHold_1_bits_alias ==
    entries_11_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_11_hit_2 = io_missHold_2_valid & _missNow_hit_T_15 == _eligible_11_T_2 & io_missHold_2_bits_alias ==
    entries_11_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_11_hit_3 = io_missHold_3_valid & _missNow_hit_T_22 == _eligible_11_T_2 & io_missHold_3_bits_alias ==
    entries_11_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_11_hit_4 = io_missHold_4_valid & _missNow_hit_T_29 == _eligible_11_T_2 & io_missHold_4_bits_alias ==
    entries_11_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_11_hit_5 = io_missHold_5_valid & _missNow_hit_T_36 == _eligible_11_T_2 & io_missHold_5_bits_alias ==
    entries_11_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_11_hit_6 = io_missHold_6_valid & _missNow_hit_T_43 == _eligible_11_T_2 & io_missHold_6_bits_alias ==
    entries_11_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_11_hit_7 = io_missHold_7_valid & _missNow_hit_T_50 == _eligible_11_T_2 & io_missHold_7_bits_alias ==
    entries_11_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_11_hit_8 = io_missHold_8_valid & _missNow_hit_T_57 == _eligible_11_T_2 & io_missHold_8_bits_alias ==
    entries_11_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_11_hit_9 = io_missHold_9_valid & _missNow_hit_T_64 == _eligible_11_T_2 & io_missHold_9_bits_alias ==
    entries_11_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_11_hit_10 = io_missHold_10_valid & _missNow_hit_T_71 == _eligible_11_T_2 & io_missHold_10_bits_alias
     == entries_11_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_11_hit_11 = io_missHold_11_valid & _missNow_hit_T_78 == _eligible_11_T_2 & io_missHold_11_bits_alias
     == entries_11_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_11_hit_12 = io_missHold_12_valid & _missNow_hit_T_85 == _eligible_11_T_2 & io_missHold_12_bits_alias
     == entries_11_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_11_hit_13 = io_missHold_13_valid & _missNow_hit_T_92 == _eligible_11_T_2 & io_missHold_13_bits_alias
     == entries_11_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_11_hit_14 = io_missHold_14_valid & _missNow_hit_T_99 == _eligible_11_T_2 & io_missHold_14_bits_alias
     == entries_11_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_11_hit_15 = io_missHold_15_valid & _missNow_hit_T_106 == _eligible_11_T_2 & io_missHold_15_bits_alias
     == entries_11_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  _eligible_11_T_23 = ~eligible_11_drop & (eligible_11_hit_0 | eligible_11_hit_1 | eligible_11_hit_2 |
    eligible_11_hit_3 | eligible_11_hit_4 | eligible_11_hit_5 | eligible_11_hit_6 | eligible_11_hit_7 |
    eligible_11_hit_8 | eligible_11_hit_9 | eligible_11_hit_10 | eligible_11_hit_11 | eligible_11_hit_12 |
    eligible_11_hit_13 | eligible_11_hit_14 | eligible_11_hit_15); // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 91:11]
  wire  _eligible_11_T_24 = ~_eligible_11_T_23; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 106:7]
  wire  eligible_11 = _eligible_11_T_6 & _eligible_11_T_24; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 105:34]
  wire [47:0] _eligible_12_T_2 = {entries_12_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 78:8]
  wire  _eligible_12_T_4 = io_lrscLockedBlock_valid & _eligible_12_T_2 == lockedLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 84:12]
  wire  _eligible_12_T_5 = ~_eligible_12_T_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 105:7]
  wire  _eligible_12_T_6 = entries_12_state == 2'h1 & _eligible_12_T_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 104:61]
  wire  eligible_12_drop = entries_12_opcode == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 87:23]
  wire  eligible_12_hit_0 = io_missHold_0_valid & _missNow_hit_T_1 == _eligible_12_T_2 & io_missHold_0_bits_alias ==
    entries_12_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_12_hit_1 = io_missHold_1_valid & _missNow_hit_T_8 == _eligible_12_T_2 & io_missHold_1_bits_alias ==
    entries_12_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_12_hit_2 = io_missHold_2_valid & _missNow_hit_T_15 == _eligible_12_T_2 & io_missHold_2_bits_alias ==
    entries_12_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_12_hit_3 = io_missHold_3_valid & _missNow_hit_T_22 == _eligible_12_T_2 & io_missHold_3_bits_alias ==
    entries_12_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_12_hit_4 = io_missHold_4_valid & _missNow_hit_T_29 == _eligible_12_T_2 & io_missHold_4_bits_alias ==
    entries_12_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_12_hit_5 = io_missHold_5_valid & _missNow_hit_T_36 == _eligible_12_T_2 & io_missHold_5_bits_alias ==
    entries_12_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_12_hit_6 = io_missHold_6_valid & _missNow_hit_T_43 == _eligible_12_T_2 & io_missHold_6_bits_alias ==
    entries_12_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_12_hit_7 = io_missHold_7_valid & _missNow_hit_T_50 == _eligible_12_T_2 & io_missHold_7_bits_alias ==
    entries_12_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_12_hit_8 = io_missHold_8_valid & _missNow_hit_T_57 == _eligible_12_T_2 & io_missHold_8_bits_alias ==
    entries_12_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_12_hit_9 = io_missHold_9_valid & _missNow_hit_T_64 == _eligible_12_T_2 & io_missHold_9_bits_alias ==
    entries_12_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_12_hit_10 = io_missHold_10_valid & _missNow_hit_T_71 == _eligible_12_T_2 & io_missHold_10_bits_alias
     == entries_12_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_12_hit_11 = io_missHold_11_valid & _missNow_hit_T_78 == _eligible_12_T_2 & io_missHold_11_bits_alias
     == entries_12_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_12_hit_12 = io_missHold_12_valid & _missNow_hit_T_85 == _eligible_12_T_2 & io_missHold_12_bits_alias
     == entries_12_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_12_hit_13 = io_missHold_13_valid & _missNow_hit_T_92 == _eligible_12_T_2 & io_missHold_13_bits_alias
     == entries_12_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_12_hit_14 = io_missHold_14_valid & _missNow_hit_T_99 == _eligible_12_T_2 & io_missHold_14_bits_alias
     == entries_12_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_12_hit_15 = io_missHold_15_valid & _missNow_hit_T_106 == _eligible_12_T_2 & io_missHold_15_bits_alias
     == entries_12_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  _eligible_12_T_23 = ~eligible_12_drop & (eligible_12_hit_0 | eligible_12_hit_1 | eligible_12_hit_2 |
    eligible_12_hit_3 | eligible_12_hit_4 | eligible_12_hit_5 | eligible_12_hit_6 | eligible_12_hit_7 |
    eligible_12_hit_8 | eligible_12_hit_9 | eligible_12_hit_10 | eligible_12_hit_11 | eligible_12_hit_12 |
    eligible_12_hit_13 | eligible_12_hit_14 | eligible_12_hit_15); // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 91:11]
  wire  _eligible_12_T_24 = ~_eligible_12_T_23; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 106:7]
  wire  eligible_12 = _eligible_12_T_6 & _eligible_12_T_24; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 105:34]
  wire [47:0] _eligible_13_T_2 = {entries_13_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 78:8]
  wire  _eligible_13_T_4 = io_lrscLockedBlock_valid & _eligible_13_T_2 == lockedLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 84:12]
  wire  _eligible_13_T_5 = ~_eligible_13_T_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 105:7]
  wire  _eligible_13_T_6 = entries_13_state == 2'h1 & _eligible_13_T_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 104:61]
  wire  eligible_13_drop = entries_13_opcode == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 87:23]
  wire  eligible_13_hit_0 = io_missHold_0_valid & _missNow_hit_T_1 == _eligible_13_T_2 & io_missHold_0_bits_alias ==
    entries_13_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_13_hit_1 = io_missHold_1_valid & _missNow_hit_T_8 == _eligible_13_T_2 & io_missHold_1_bits_alias ==
    entries_13_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_13_hit_2 = io_missHold_2_valid & _missNow_hit_T_15 == _eligible_13_T_2 & io_missHold_2_bits_alias ==
    entries_13_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_13_hit_3 = io_missHold_3_valid & _missNow_hit_T_22 == _eligible_13_T_2 & io_missHold_3_bits_alias ==
    entries_13_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_13_hit_4 = io_missHold_4_valid & _missNow_hit_T_29 == _eligible_13_T_2 & io_missHold_4_bits_alias ==
    entries_13_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_13_hit_5 = io_missHold_5_valid & _missNow_hit_T_36 == _eligible_13_T_2 & io_missHold_5_bits_alias ==
    entries_13_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_13_hit_6 = io_missHold_6_valid & _missNow_hit_T_43 == _eligible_13_T_2 & io_missHold_6_bits_alias ==
    entries_13_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_13_hit_7 = io_missHold_7_valid & _missNow_hit_T_50 == _eligible_13_T_2 & io_missHold_7_bits_alias ==
    entries_13_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_13_hit_8 = io_missHold_8_valid & _missNow_hit_T_57 == _eligible_13_T_2 & io_missHold_8_bits_alias ==
    entries_13_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_13_hit_9 = io_missHold_9_valid & _missNow_hit_T_64 == _eligible_13_T_2 & io_missHold_9_bits_alias ==
    entries_13_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_13_hit_10 = io_missHold_10_valid & _missNow_hit_T_71 == _eligible_13_T_2 & io_missHold_10_bits_alias
     == entries_13_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_13_hit_11 = io_missHold_11_valid & _missNow_hit_T_78 == _eligible_13_T_2 & io_missHold_11_bits_alias
     == entries_13_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_13_hit_12 = io_missHold_12_valid & _missNow_hit_T_85 == _eligible_13_T_2 & io_missHold_12_bits_alias
     == entries_13_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_13_hit_13 = io_missHold_13_valid & _missNow_hit_T_92 == _eligible_13_T_2 & io_missHold_13_bits_alias
     == entries_13_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_13_hit_14 = io_missHold_14_valid & _missNow_hit_T_99 == _eligible_13_T_2 & io_missHold_14_bits_alias
     == entries_13_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_13_hit_15 = io_missHold_15_valid & _missNow_hit_T_106 == _eligible_13_T_2 & io_missHold_15_bits_alias
     == entries_13_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  _eligible_13_T_23 = ~eligible_13_drop & (eligible_13_hit_0 | eligible_13_hit_1 | eligible_13_hit_2 |
    eligible_13_hit_3 | eligible_13_hit_4 | eligible_13_hit_5 | eligible_13_hit_6 | eligible_13_hit_7 |
    eligible_13_hit_8 | eligible_13_hit_9 | eligible_13_hit_10 | eligible_13_hit_11 | eligible_13_hit_12 |
    eligible_13_hit_13 | eligible_13_hit_14 | eligible_13_hit_15); // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 91:11]
  wire  _eligible_13_T_24 = ~_eligible_13_T_23; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 106:7]
  wire  eligible_13 = _eligible_13_T_6 & _eligible_13_T_24; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 105:34]
  wire [47:0] _eligible_14_T_2 = {entries_14_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 78:8]
  wire  _eligible_14_T_4 = io_lrscLockedBlock_valid & _eligible_14_T_2 == lockedLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 84:12]
  wire  _eligible_14_T_5 = ~_eligible_14_T_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 105:7]
  wire  _eligible_14_T_6 = entries_14_state == 2'h1 & _eligible_14_T_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 104:61]
  wire  eligible_14_drop = entries_14_opcode == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 87:23]
  wire  eligible_14_hit_0 = io_missHold_0_valid & _missNow_hit_T_1 == _eligible_14_T_2 & io_missHold_0_bits_alias ==
    entries_14_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_14_hit_1 = io_missHold_1_valid & _missNow_hit_T_8 == _eligible_14_T_2 & io_missHold_1_bits_alias ==
    entries_14_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_14_hit_2 = io_missHold_2_valid & _missNow_hit_T_15 == _eligible_14_T_2 & io_missHold_2_bits_alias ==
    entries_14_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_14_hit_3 = io_missHold_3_valid & _missNow_hit_T_22 == _eligible_14_T_2 & io_missHold_3_bits_alias ==
    entries_14_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_14_hit_4 = io_missHold_4_valid & _missNow_hit_T_29 == _eligible_14_T_2 & io_missHold_4_bits_alias ==
    entries_14_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_14_hit_5 = io_missHold_5_valid & _missNow_hit_T_36 == _eligible_14_T_2 & io_missHold_5_bits_alias ==
    entries_14_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_14_hit_6 = io_missHold_6_valid & _missNow_hit_T_43 == _eligible_14_T_2 & io_missHold_6_bits_alias ==
    entries_14_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_14_hit_7 = io_missHold_7_valid & _missNow_hit_T_50 == _eligible_14_T_2 & io_missHold_7_bits_alias ==
    entries_14_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_14_hit_8 = io_missHold_8_valid & _missNow_hit_T_57 == _eligible_14_T_2 & io_missHold_8_bits_alias ==
    entries_14_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_14_hit_9 = io_missHold_9_valid & _missNow_hit_T_64 == _eligible_14_T_2 & io_missHold_9_bits_alias ==
    entries_14_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_14_hit_10 = io_missHold_10_valid & _missNow_hit_T_71 == _eligible_14_T_2 & io_missHold_10_bits_alias
     == entries_14_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_14_hit_11 = io_missHold_11_valid & _missNow_hit_T_78 == _eligible_14_T_2 & io_missHold_11_bits_alias
     == entries_14_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_14_hit_12 = io_missHold_12_valid & _missNow_hit_T_85 == _eligible_14_T_2 & io_missHold_12_bits_alias
     == entries_14_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_14_hit_13 = io_missHold_13_valid & _missNow_hit_T_92 == _eligible_14_T_2 & io_missHold_13_bits_alias
     == entries_14_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_14_hit_14 = io_missHold_14_valid & _missNow_hit_T_99 == _eligible_14_T_2 & io_missHold_14_bits_alias
     == entries_14_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_14_hit_15 = io_missHold_15_valid & _missNow_hit_T_106 == _eligible_14_T_2 & io_missHold_15_bits_alias
     == entries_14_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  _eligible_14_T_23 = ~eligible_14_drop & (eligible_14_hit_0 | eligible_14_hit_1 | eligible_14_hit_2 |
    eligible_14_hit_3 | eligible_14_hit_4 | eligible_14_hit_5 | eligible_14_hit_6 | eligible_14_hit_7 |
    eligible_14_hit_8 | eligible_14_hit_9 | eligible_14_hit_10 | eligible_14_hit_11 | eligible_14_hit_12 |
    eligible_14_hit_13 | eligible_14_hit_14 | eligible_14_hit_15); // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 91:11]
  wire  _eligible_14_T_24 = ~_eligible_14_T_23; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 106:7]
  wire  eligible_14 = _eligible_14_T_6 & _eligible_14_T_24; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 105:34]
  wire [47:0] _eligible_15_T_2 = {entries_15_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 78:8]
  wire  _eligible_15_T_4 = io_lrscLockedBlock_valid & _eligible_15_T_2 == lockedLine; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 84:12]
  wire  _eligible_15_T_5 = ~_eligible_15_T_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 105:7]
  wire  _eligible_15_T_6 = entries_15_state == 2'h1 & _eligible_15_T_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 104:61]
  wire  eligible_15_drop = entries_15_opcode == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 87:23]
  wire  eligible_15_hit_0 = io_missHold_0_valid & _missNow_hit_T_1 == _eligible_15_T_2 & io_missHold_0_bits_alias ==
    entries_15_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_15_hit_1 = io_missHold_1_valid & _missNow_hit_T_8 == _eligible_15_T_2 & io_missHold_1_bits_alias ==
    entries_15_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_15_hit_2 = io_missHold_2_valid & _missNow_hit_T_15 == _eligible_15_T_2 & io_missHold_2_bits_alias ==
    entries_15_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_15_hit_3 = io_missHold_3_valid & _missNow_hit_T_22 == _eligible_15_T_2 & io_missHold_3_bits_alias ==
    entries_15_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_15_hit_4 = io_missHold_4_valid & _missNow_hit_T_29 == _eligible_15_T_2 & io_missHold_4_bits_alias ==
    entries_15_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_15_hit_5 = io_missHold_5_valid & _missNow_hit_T_36 == _eligible_15_T_2 & io_missHold_5_bits_alias ==
    entries_15_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_15_hit_6 = io_missHold_6_valid & _missNow_hit_T_43 == _eligible_15_T_2 & io_missHold_6_bits_alias ==
    entries_15_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_15_hit_7 = io_missHold_7_valid & _missNow_hit_T_50 == _eligible_15_T_2 & io_missHold_7_bits_alias ==
    entries_15_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_15_hit_8 = io_missHold_8_valid & _missNow_hit_T_57 == _eligible_15_T_2 & io_missHold_8_bits_alias ==
    entries_15_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_15_hit_9 = io_missHold_9_valid & _missNow_hit_T_64 == _eligible_15_T_2 & io_missHold_9_bits_alias ==
    entries_15_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_15_hit_10 = io_missHold_10_valid & _missNow_hit_T_71 == _eligible_15_T_2 & io_missHold_10_bits_alias
     == entries_15_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_15_hit_11 = io_missHold_11_valid & _missNow_hit_T_78 == _eligible_15_T_2 & io_missHold_11_bits_alias
     == entries_15_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_15_hit_12 = io_missHold_12_valid & _missNow_hit_T_85 == _eligible_15_T_2 & io_missHold_12_bits_alias
     == entries_15_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_15_hit_13 = io_missHold_13_valid & _missNow_hit_T_92 == _eligible_15_T_2 & io_missHold_13_bits_alias
     == entries_15_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_15_hit_14 = io_missHold_14_valid & _missNow_hit_T_99 == _eligible_15_T_2 & io_missHold_14_bits_alias
     == entries_15_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  eligible_15_hit_15 = io_missHold_15_valid & _missNow_hit_T_106 == _eligible_15_T_2 & io_missHold_15_bits_alias
     == entries_15_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 89:59]
  wire  _eligible_15_T_23 = ~eligible_15_drop & (eligible_15_hit_0 | eligible_15_hit_1 | eligible_15_hit_2 |
    eligible_15_hit_3 | eligible_15_hit_4 | eligible_15_hit_5 | eligible_15_hit_6 | eligible_15_hit_7 |
    eligible_15_hit_8 | eligible_15_hit_9 | eligible_15_hit_10 | eligible_15_hit_11 | eligible_15_hit_12 |
    eligible_15_hit_13 | eligible_15_hit_14 | eligible_15_hit_15); // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 91:11]
  wire  _eligible_15_T_24 = ~_eligible_15_T_23; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 106:7]
  wire  eligible_15 = _eligible_15_T_6 & _eligible_15_T_24; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 105:34]
  wire [7:0] hasEligible_lo = {eligible_7,eligible_6,eligible_5,eligible_4,eligible_3,eligible_2,eligible_1,eligible_0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 108:30]
  wire [15:0] _hasEligible_T = {eligible_15,eligible_14,eligible_13,eligible_12,eligible_11,eligible_10,eligible_9,
    eligible_8,hasEligible_lo}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 108:30]
  wire  hasEligible = |_hasEligible_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 108:37]
  wire [3:0] _pick_T_17 = _hasEligible_T[14] ? 4'he : 4'hf; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _pick_T_18 = _hasEligible_T[13] ? 4'hd : _pick_T_17; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _pick_T_19 = _hasEligible_T[12] ? 4'hc : _pick_T_18; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _pick_T_20 = _hasEligible_T[11] ? 4'hb : _pick_T_19; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _pick_T_21 = _hasEligible_T[10] ? 4'ha : _pick_T_20; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _pick_T_22 = _hasEligible_T[9] ? 4'h9 : _pick_T_21; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _pick_T_23 = _hasEligible_T[8] ? 4'h8 : _pick_T_22; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _pick_T_24 = _hasEligible_T[7] ? 4'h7 : _pick_T_23; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _pick_T_25 = _hasEligible_T[6] ? 4'h6 : _pick_T_24; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _pick_T_26 = _hasEligible_T[5] ? 4'h5 : _pick_T_25; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _pick_T_27 = _hasEligible_T[4] ? 4'h4 : _pick_T_26; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _pick_T_28 = _hasEligible_T[3] ? 4'h3 : _pick_T_27; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _pick_T_29 = _hasEligible_T[2] ? 4'h2 : _pick_T_28; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _pick_T_30 = _hasEligible_T[1] ? 4'h1 : _pick_T_29; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] pick = _hasEligible_T[0] ? 4'h0 : _pick_T_30; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire  _slotFree_T = ~outValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 110:18]
  wire  slotFree = ~outValid | fire | pullBack; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 110:36]
  wire  canPick = slotFree & hasEligible; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 111:26]
  wire  idle_0 = entries_0_state == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 113:42]
  wire  idle_1 = entries_1_state == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 113:42]
  wire  idle_2 = entries_2_state == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 113:42]
  wire  idle_3 = entries_3_state == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 113:42]
  wire  idle_4 = entries_4_state == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 113:42]
  wire  idle_5 = entries_5_state == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 113:42]
  wire  idle_6 = entries_6_state == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 113:42]
  wire  idle_7 = entries_7_state == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 113:42]
  wire  idle_8 = entries_8_state == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 113:42]
  wire  idle_9 = entries_9_state == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 113:42]
  wire  idle_10 = entries_10_state == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 113:42]
  wire  idle_11 = entries_11_state == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 113:42]
  wire  idle_12 = entries_12_state == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 113:42]
  wire  idle_13 = entries_13_state == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 113:42]
  wire  idle_14 = entries_14_state == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 113:42]
  wire  idle_15 = entries_15_state == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 113:42]
  wire [7:0] io_rxSnp_ready_lo = {idle_7,idle_6,idle_5,idle_4,idle_3,idle_2,idle_1,idle_0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 114:26]
  wire [15:0] _io_rxSnp_ready_T = {idle_15,idle_14,idle_13,idle_12,idle_11,idle_10,idle_9,idle_8,io_rxSnp_ready_lo}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 114:26]
  wire [3:0] _allocId_T_17 = _io_rxSnp_ready_T[14] ? 4'he : 4'hf; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _allocId_T_18 = _io_rxSnp_ready_T[13] ? 4'hd : _allocId_T_17; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _allocId_T_19 = _io_rxSnp_ready_T[12] ? 4'hc : _allocId_T_18; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _allocId_T_20 = _io_rxSnp_ready_T[11] ? 4'hb : _allocId_T_19; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _allocId_T_21 = _io_rxSnp_ready_T[10] ? 4'ha : _allocId_T_20; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _allocId_T_22 = _io_rxSnp_ready_T[9] ? 4'h9 : _allocId_T_21; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _allocId_T_23 = _io_rxSnp_ready_T[8] ? 4'h8 : _allocId_T_22; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _allocId_T_24 = _io_rxSnp_ready_T[7] ? 4'h7 : _allocId_T_23; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _allocId_T_25 = _io_rxSnp_ready_T[6] ? 4'h6 : _allocId_T_24; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _allocId_T_26 = _io_rxSnp_ready_T[5] ? 4'h5 : _allocId_T_25; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _allocId_T_27 = _io_rxSnp_ready_T[4] ? 4'h4 : _allocId_T_26; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _allocId_T_28 = _io_rxSnp_ready_T[3] ? 4'h3 : _allocId_T_27; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _allocId_T_29 = _io_rxSnp_ready_T[2] ? 4'h2 : _allocId_T_28; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _allocId_T_30 = _io_rxSnp_ready_T[1] ? 4'h1 : _allocId_T_29; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] allocId = _io_rxSnp_ready_T[0] ? 4'h0 : _allocId_T_30; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [47:0] rawAddr = {io_rxSnp_bits_addr,3'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 118:20]
  wire [47:0] byteAddr = {rawAddr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 119:21]
  wire  _T = io_rxSnp_ready & io_rxSnp_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 57:35]
  wire [1:0] _GEN_0 = _T & allocId == 4'h0 ? 2'h1 : entries_0_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44 144:24 67:24]
  wire  _T_3 = outIdx == 4'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 150:29]
  wire [1:0] _GEN_8 = _T & allocId == 4'h1 ? 2'h1 : entries_1_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44 144:24 67:24]
  wire  _T_12 = outIdx == 4'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 150:29]
  wire [1:0] _GEN_16 = _T & allocId == 4'h2 ? 2'h1 : entries_2_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44 144:24 67:24]
  wire  _T_21 = outIdx == 4'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 150:29]
  wire [1:0] _GEN_24 = _T & allocId == 4'h3 ? 2'h1 : entries_3_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44 144:24 67:24]
  wire  _T_30 = outIdx == 4'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 150:29]
  wire [1:0] _GEN_32 = _T & allocId == 4'h4 ? 2'h1 : entries_4_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44 144:24 67:24]
  wire  _T_39 = outIdx == 4'h4; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 150:29]
  wire [1:0] _GEN_40 = _T & allocId == 4'h5 ? 2'h1 : entries_5_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44 144:24 67:24]
  wire  _T_48 = outIdx == 4'h5; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 150:29]
  wire [1:0] _GEN_48 = _T & allocId == 4'h6 ? 2'h1 : entries_6_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44 144:24 67:24]
  wire  _T_57 = outIdx == 4'h6; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 150:29]
  wire [1:0] _GEN_56 = _T & allocId == 4'h7 ? 2'h1 : entries_7_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44 144:24 67:24]
  wire  _T_66 = outIdx == 4'h7; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 150:29]
  wire [1:0] _GEN_64 = _T & allocId == 4'h8 ? 2'h1 : entries_8_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44 144:24 67:24]
  wire  _T_75 = outIdx == 4'h8; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 150:29]
  wire [1:0] _GEN_72 = _T & allocId == 4'h9 ? 2'h1 : entries_9_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44 144:24 67:24]
  wire  _T_84 = outIdx == 4'h9; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 150:29]
  wire [1:0] _GEN_80 = _T & allocId == 4'ha ? 2'h1 : entries_10_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44 144:24 67:24]
  wire  _T_93 = outIdx == 4'ha; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 150:29]
  wire [1:0] _GEN_88 = _T & allocId == 4'hb ? 2'h1 : entries_11_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44 144:24 67:24]
  wire  _T_102 = outIdx == 4'hb; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 150:29]
  wire [1:0] _GEN_96 = _T & allocId == 4'hc ? 2'h1 : entries_12_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44 144:24 67:24]
  wire  _T_111 = outIdx == 4'hc; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 150:29]
  wire [1:0] _GEN_104 = _T & allocId == 4'hd ? 2'h1 : entries_13_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44 144:24 67:24]
  wire  _T_120 = outIdx == 4'hd; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 150:29]
  wire [1:0] _GEN_112 = _T & allocId == 4'he ? 2'h1 : entries_14_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44 144:24 67:24]
  wire  _T_129 = outIdx == 4'he; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 150:29]
  wire [1:0] _GEN_120 = _T & allocId == 4'hf ? 2'h1 : entries_15_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44 144:24 67:24]
  wire  _T_138 = outIdx == 4'hf; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 150:29]
  wire [47:0] _GEN_129 = 4'h1 == pick ? entries_1_addr : entries_0_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 241:{24,24}]
  wire [47:0] _GEN_130 = 4'h2 == pick ? entries_2_addr : _GEN_129; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 241:{24,24}]
  wire [47:0] _GEN_131 = 4'h3 == pick ? entries_3_addr : _GEN_130; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 241:{24,24}]
  wire [47:0] _GEN_132 = 4'h4 == pick ? entries_4_addr : _GEN_131; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 241:{24,24}]
  wire [47:0] _GEN_133 = 4'h5 == pick ? entries_5_addr : _GEN_132; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 241:{24,24}]
  wire [47:0] _GEN_134 = 4'h6 == pick ? entries_6_addr : _GEN_133; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 241:{24,24}]
  wire [47:0] _GEN_135 = 4'h7 == pick ? entries_7_addr : _GEN_134; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 241:{24,24}]
  wire [47:0] _GEN_136 = 4'h8 == pick ? entries_8_addr : _GEN_135; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 241:{24,24}]
  wire [47:0] _GEN_137 = 4'h9 == pick ? entries_9_addr : _GEN_136; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 241:{24,24}]
  wire [47:0] _GEN_138 = 4'ha == pick ? entries_10_addr : _GEN_137; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 241:{24,24}]
  wire [47:0] _GEN_139 = 4'hb == pick ? entries_11_addr : _GEN_138; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 241:{24,24}]
  wire [47:0] _GEN_140 = 4'hc == pick ? entries_12_addr : _GEN_139; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 241:{24,24}]
  wire [47:0] _GEN_141 = 4'hd == pick ? entries_13_addr : _GEN_140; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 241:{24,24}]
  wire [47:0] _GEN_142 = 4'he == pick ? entries_14_addr : _GEN_141; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 241:{24,24}]
  wire [47:0] outBits_req_addr = 4'hf == pick ? entries_15_addr : _GEN_142; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 241:{24,24}]
  wire [11:0] outBits_req_vaddr_page = outBits_req_addr[11:0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 241:24]
  wire [1:0] _GEN_145 = 4'h1 == pick ? entries_1_tagAlias : entries_0_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 248:{37,37}]
  wire [1:0] _GEN_146 = 4'h2 == pick ? entries_2_tagAlias : _GEN_145; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 248:{37,37}]
  wire [1:0] _GEN_147 = 4'h3 == pick ? entries_3_tagAlias : _GEN_146; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 248:{37,37}]
  wire [1:0] _GEN_148 = 4'h4 == pick ? entries_4_tagAlias : _GEN_147; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 248:{37,37}]
  wire [1:0] _GEN_149 = 4'h5 == pick ? entries_5_tagAlias : _GEN_148; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 248:{37,37}]
  wire [1:0] _GEN_150 = 4'h6 == pick ? entries_6_tagAlias : _GEN_149; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 248:{37,37}]
  wire [1:0] _GEN_151 = 4'h7 == pick ? entries_7_tagAlias : _GEN_150; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 248:{37,37}]
  wire [1:0] _GEN_152 = 4'h8 == pick ? entries_8_tagAlias : _GEN_151; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 248:{37,37}]
  wire [1:0] _GEN_153 = 4'h9 == pick ? entries_9_tagAlias : _GEN_152; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 248:{37,37}]
  wire [1:0] _GEN_154 = 4'ha == pick ? entries_10_tagAlias : _GEN_153; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 248:{37,37}]
  wire [1:0] _GEN_155 = 4'hb == pick ? entries_11_tagAlias : _GEN_154; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 248:{37,37}]
  wire [1:0] _GEN_156 = 4'hc == pick ? entries_12_tagAlias : _GEN_155; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 248:{37,37}]
  wire [1:0] _GEN_157 = 4'hd == pick ? entries_13_tagAlias : _GEN_156; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 248:{37,37}]
  wire [1:0] _GEN_158 = 4'he == pick ? entries_14_tagAlias : _GEN_157; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 248:{37,37}]
  wire [1:0] outBits_req_tagAlias = 4'hf == pick ? entries_15_tagAlias : _GEN_158; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 248:{37,37}]
  wire [47:0] outBits_req_vaddr = {34'h0,outBits_req_tagAlias,outBits_req_vaddr_page}; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 248:15]
  wire [5:0] outBits_req_id = {{2'd0}, pick}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 127:22]
  wire [1:0] _GEN_161 = 4'h1 == pick ? entries_1_opcode : entries_0_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 134:{17,17}]
  wire [1:0] _GEN_162 = 4'h2 == pick ? entries_2_opcode : _GEN_161; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 134:{17,17}]
  wire [1:0] _GEN_163 = 4'h3 == pick ? entries_3_opcode : _GEN_162; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 134:{17,17}]
  wire [1:0] _GEN_164 = 4'h4 == pick ? entries_4_opcode : _GEN_163; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 134:{17,17}]
  wire [1:0] _GEN_165 = 4'h5 == pick ? entries_5_opcode : _GEN_164; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 134:{17,17}]
  wire [1:0] _GEN_166 = 4'h6 == pick ? entries_6_opcode : _GEN_165; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 134:{17,17}]
  wire [1:0] _GEN_167 = 4'h7 == pick ? entries_7_opcode : _GEN_166; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 134:{17,17}]
  wire [1:0] _GEN_168 = 4'h8 == pick ? entries_8_opcode : _GEN_167; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 134:{17,17}]
  wire [1:0] _GEN_169 = 4'h9 == pick ? entries_9_opcode : _GEN_168; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 134:{17,17}]
  wire [1:0] _GEN_170 = 4'ha == pick ? entries_10_opcode : _GEN_169; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 134:{17,17}]
  wire [1:0] _GEN_171 = 4'hb == pick ? entries_11_opcode : _GEN_170; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 134:{17,17}]
  wire [1:0] _GEN_172 = 4'hc == pick ? entries_12_opcode : _GEN_171; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 134:{17,17}]
  wire [1:0] _GEN_173 = 4'hd == pick ? entries_13_opcode : _GEN_172; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 134:{17,17}]
  wire [7:0] _GEN_177 = 4'h1 == pick ? entries_1_snpTxnId : entries_0_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 136:{18,18}]
  wire [7:0] _GEN_178 = 4'h2 == pick ? entries_2_snpTxnId : _GEN_177; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 136:{18,18}]
  wire [7:0] _GEN_179 = 4'h3 == pick ? entries_3_snpTxnId : _GEN_178; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 136:{18,18}]
  wire [7:0] _GEN_180 = 4'h4 == pick ? entries_4_snpTxnId : _GEN_179; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 136:{18,18}]
  wire [7:0] _GEN_181 = 4'h5 == pick ? entries_5_snpTxnId : _GEN_180; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 136:{18,18}]
  wire [7:0] _GEN_182 = 4'h6 == pick ? entries_6_snpTxnId : _GEN_181; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 136:{18,18}]
  wire [7:0] _GEN_183 = 4'h7 == pick ? entries_7_snpTxnId : _GEN_182; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 136:{18,18}]
  wire [7:0] _GEN_184 = 4'h8 == pick ? entries_8_snpTxnId : _GEN_183; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 136:{18,18}]
  wire [7:0] _GEN_185 = 4'h9 == pick ? entries_9_snpTxnId : _GEN_184; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 136:{18,18}]
  wire [7:0] _GEN_186 = 4'ha == pick ? entries_10_snpTxnId : _GEN_185; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 136:{18,18}]
  wire [7:0] _GEN_187 = 4'hb == pick ? entries_11_snpTxnId : _GEN_186; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 136:{18,18}]
  wire [7:0] _GEN_188 = 4'hc == pick ? entries_12_snpTxnId : _GEN_187; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 136:{18,18}]
  wire [7:0] _GEN_189 = 4'hd == pick ? entries_13_snpTxnId : _GEN_188; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 136:{18,18}]
  wire  _GEN_192 = fire | pullBack ? 1'h0 : outValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 165:32 166:14 70:25]
  wire  _GEN_193 = canPick | _GEN_192; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 161:17 162:14]
  wire  _io_dropLine_0_valid_T = entries_0_state != 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 172:46]
  wire  _io_dropLine_1_valid_T = entries_1_state != 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 172:46]
  wire  _io_dropLine_2_valid_T = entries_2_state != 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 172:46]
  wire  _io_dropLine_3_valid_T = entries_3_state != 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 172:46]
  wire  _io_dropLine_4_valid_T = entries_4_state != 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 172:46]
  wire  _io_dropLine_5_valid_T = entries_5_state != 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 172:46]
  wire  _io_dropLine_6_valid_T = entries_6_state != 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 172:46]
  wire  _io_dropLine_7_valid_T = entries_7_state != 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 172:46]
  wire  _io_dropLine_8_valid_T = entries_8_state != 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 172:46]
  wire  _io_dropLine_9_valid_T = entries_9_state != 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 172:46]
  wire  _io_dropLine_10_valid_T = entries_10_state != 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 172:46]
  wire  _io_dropLine_11_valid_T = entries_11_state != 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 172:46]
  wire  _io_dropLine_12_valid_T = entries_12_state != 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 172:46]
  wire  _io_dropLine_13_valid_T = entries_13_state != 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 172:46]
  wire  _io_dropLine_14_valid_T = entries_14_state != 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 172:46]
  wire  _io_dropLine_15_valid_T = entries_15_state != 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 172:46]
  wire  busy = _io_dropLine_0_valid_T | _io_dropLine_1_valid_T | _io_dropLine_2_valid_T | _io_dropLine_3_valid_T |
    _io_dropLine_4_valid_T | _io_dropLine_5_valid_T | _io_dropLine_6_valid_T | _io_dropLine_7_valid_T |
    _io_dropLine_8_valid_T | _io_dropLine_9_valid_T | _io_dropLine_10_valid_T | _io_dropLine_11_valid_T |
    _io_dropLine_12_valid_T | _io_dropLine_13_valid_T | _io_dropLine_14_valid_T | _io_dropLine_15_valid_T | outValid; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 179:70]
  wire  _clash_T_3 = _io_dropLine_0_valid_T & _eligible_0_T_2 == byteAddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 184:13]
  wire  _clash_T_7 = _io_dropLine_1_valid_T & _eligible_1_T_2 == byteAddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 184:13]
  wire  _clash_T_11 = _io_dropLine_2_valid_T & _eligible_2_T_2 == byteAddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 184:13]
  wire  _clash_T_15 = _io_dropLine_3_valid_T & _eligible_3_T_2 == byteAddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 184:13]
  wire  _clash_T_19 = _io_dropLine_4_valid_T & _eligible_4_T_2 == byteAddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 184:13]
  wire  _clash_T_23 = _io_dropLine_5_valid_T & _eligible_5_T_2 == byteAddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 184:13]
  wire  _clash_T_27 = _io_dropLine_6_valid_T & _eligible_6_T_2 == byteAddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 184:13]
  wire  _clash_T_31 = _io_dropLine_7_valid_T & _eligible_7_T_2 == byteAddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 184:13]
  wire  _clash_T_35 = _io_dropLine_8_valid_T & _eligible_8_T_2 == byteAddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 184:13]
  wire  _clash_T_39 = _io_dropLine_9_valid_T & _eligible_9_T_2 == byteAddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 184:13]
  wire  _clash_T_43 = _io_dropLine_10_valid_T & _eligible_10_T_2 == byteAddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 184:13]
  wire  _clash_T_47 = _io_dropLine_11_valid_T & _eligible_11_T_2 == byteAddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 184:13]
  wire  _clash_T_51 = _io_dropLine_12_valid_T & _eligible_12_T_2 == byteAddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 184:13]
  wire  _clash_T_55 = _io_dropLine_13_valid_T & _eligible_13_T_2 == byteAddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 184:13]
  wire  _clash_T_59 = _io_dropLine_14_valid_T & _eligible_14_T_2 == byteAddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 184:13]
  wire  _clash_T_63 = _io_dropLine_15_valid_T & _eligible_15_T_2 == byteAddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 184:13]
  wire [7:0] clash_lo = {_clash_T_31,_clash_T_27,_clash_T_23,_clash_T_19,_clash_T_15,_clash_T_11,_clash_T_7,_clash_T_3}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 185:6]
  wire [15:0] _clash_T_64 = {_clash_T_63,_clash_T_59,_clash_T_55,_clash_T_51,_clash_T_47,_clash_T_43,_clash_T_39,
    _clash_T_35,clash_lo}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 185:6]
  wire  clash = |_clash_T_64; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 185:13]
  wire [1:0] _T_161 = (entries_0_state == 2'h2) + (entries_1_state == 2'h2); // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 187:18]
  wire [1:0] _T_163 = (entries_2_state == 2'h2) + (entries_3_state == 2'h2); // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 187:18]
  wire [2:0] _T_165 = _T_161 + _T_163; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 187:18]
  wire [1:0] _T_167 = (entries_4_state == 2'h2) + (entries_5_state == 2'h2); // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 187:18]
  wire [1:0] _T_169 = (entries_6_state == 2'h2) + (entries_7_state == 2'h2); // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 187:18]
  wire [2:0] _T_171 = _T_167 + _T_169; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 187:18]
  wire [3:0] _T_173 = _T_165 + _T_171; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 187:18]
  wire [1:0] _T_175 = (entries_8_state == 2'h2) + (entries_9_state == 2'h2); // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 187:18]
  wire [1:0] _T_177 = (entries_10_state == 2'h2) + (entries_11_state == 2'h2); // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 187:18]
  wire [2:0] _T_179 = _T_175 + _T_177; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 187:18]
  wire [1:0] _T_181 = (entries_12_state == 2'h2) + (entries_13_state == 2'h2); // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 187:18]
  wire [1:0] _T_183 = (entries_14_state == 2'h2) + (entries_15_state == 2'h2); // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 187:18]
  wire [2:0] _T_185 = _T_181 + _T_183; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 187:18]
  wire [3:0] _T_187 = _T_179 + _T_185; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 187:18]
  wire [4:0] _T_189 = _T_173 + _T_187; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 187:18]
  wire  _T_193 = ~reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 187:9]
  wire [1:0] _GEN_211 = 4'h1 == outIdx ? entries_1_state : entries_0_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 189:{45,45}]
  wire [1:0] _GEN_212 = 4'h2 == outIdx ? entries_2_state : _GEN_211; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 189:{45,45}]
  wire [1:0] _GEN_213 = 4'h3 == outIdx ? entries_3_state : _GEN_212; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 189:{45,45}]
  wire [1:0] _GEN_214 = 4'h4 == outIdx ? entries_4_state : _GEN_213; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 189:{45,45}]
  wire [1:0] _GEN_215 = 4'h5 == outIdx ? entries_5_state : _GEN_214; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 189:{45,45}]
  wire [1:0] _GEN_216 = 4'h6 == outIdx ? entries_6_state : _GEN_215; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 189:{45,45}]
  wire [1:0] _GEN_217 = 4'h7 == outIdx ? entries_7_state : _GEN_216; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 189:{45,45}]
  wire [1:0] _GEN_218 = 4'h8 == outIdx ? entries_8_state : _GEN_217; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 189:{45,45}]
  wire [1:0] _GEN_219 = 4'h9 == outIdx ? entries_9_state : _GEN_218; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 189:{45,45}]
  wire [1:0] _GEN_220 = 4'ha == outIdx ? entries_10_state : _GEN_219; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 189:{45,45}]
  wire [1:0] _GEN_221 = 4'hb == outIdx ? entries_11_state : _GEN_220; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 189:{45,45}]
  wire [1:0] _GEN_222 = 4'hc == outIdx ? entries_12_state : _GEN_221; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 189:{45,45}]
  wire [1:0] _GEN_223 = 4'hd == outIdx ? entries_13_state : _GEN_222; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 189:{45,45}]
  wire [1:0] _GEN_224 = 4'he == outIdx ? entries_14_state : _GEN_223; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 189:{45,45}]
  wire [1:0] _GEN_225 = 4'hf == outIdx ? entries_15_state : _GEN_224; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 189:{45,45}]
  wire  _T_208 = ~_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 193:10]
  wire [1:0] _GEN_227 = 4'h1 == allocId ? entries_1_state : entries_0_state; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 193:{51,51}]
  wire [1:0] _GEN_228 = 4'h2 == allocId ? entries_2_state : _GEN_227; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 193:{51,51}]
  wire [1:0] _GEN_229 = 4'h3 == allocId ? entries_3_state : _GEN_228; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 193:{51,51}]
  wire [1:0] _GEN_230 = 4'h4 == allocId ? entries_4_state : _GEN_229; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 193:{51,51}]
  wire [1:0] _GEN_231 = 4'h5 == allocId ? entries_5_state : _GEN_230; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 193:{51,51}]
  wire [1:0] _GEN_232 = 4'h6 == allocId ? entries_6_state : _GEN_231; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 193:{51,51}]
  wire [1:0] _GEN_233 = 4'h7 == allocId ? entries_7_state : _GEN_232; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 193:{51,51}]
  wire [1:0] _GEN_234 = 4'h8 == allocId ? entries_8_state : _GEN_233; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 193:{51,51}]
  wire [1:0] _GEN_235 = 4'h9 == allocId ? entries_9_state : _GEN_234; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 193:{51,51}]
  wire [1:0] _GEN_236 = 4'ha == allocId ? entries_10_state : _GEN_235; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 193:{51,51}]
  wire [1:0] _GEN_237 = 4'hb == allocId ? entries_11_state : _GEN_236; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 193:{51,51}]
  wire [1:0] _GEN_238 = 4'hc == allocId ? entries_12_state : _GEN_237; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 193:{51,51}]
  wire [1:0] _GEN_239 = 4'hd == allocId ? entries_13_state : _GEN_238; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 193:{51,51}]
  wire [1:0] _GEN_240 = 4'he == allocId ? entries_14_state : _GEN_239; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 193:{51,51}]
  wire [1:0] _GEN_241 = 4'hf == allocId ? entries_15_state : _GEN_240; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 193:{51,51}]
  wire  _T_229 = ~io_pipeReq_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 199:10]
  wire [5:0] _GEN_242 = {{2'd0}, outIdx}; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 205:50]
  wire  _T_271 = io_probeResp_ready & io_probeResp_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 57:35]
  assign io_rxSnp_ready = |_io_rxSnp_ready_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 114:33]
  assign io_pipeReq_valid = outValid & ~stop & ~sameNow & ~missNow; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 98:53]
  assign io_pipeReq_bits_vaddr = outBits_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 99:19]
  assign io_pipeReq_bits_addr = outBits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 99:19]
  assign io_pipeReq_bits_tagAlias = outBits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 99:19]
  assign io_pipeReq_bits_id = outBits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 99:19]
  assign io_pipeReq_bits_probeOp = outBits_probeOp; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 99:19]
  assign io_pipeReq_bits_needData = 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 99:19]
  assign io_pipeReq_bits_snpTxnId = outBits_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 99:19]
  assign io_probeResp_ready = 1'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 177:22]
  assign io_dropLine_0_valid = entries_0_state != 2'h0 & eligible_0_drop; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 172:66]
  assign io_dropLine_0_bits_addr = entries_0_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 173:30]
  assign io_dropLine_0_bits_alias = entries_0_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 174:31]
  assign io_dropLine_1_valid = entries_1_state != 2'h0 & eligible_1_drop; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 172:66]
  assign io_dropLine_1_bits_addr = entries_1_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 173:30]
  assign io_dropLine_1_bits_alias = entries_1_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 174:31]
  assign io_dropLine_2_valid = entries_2_state != 2'h0 & eligible_2_drop; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 172:66]
  assign io_dropLine_2_bits_addr = entries_2_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 173:30]
  assign io_dropLine_2_bits_alias = entries_2_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 174:31]
  assign io_dropLine_3_valid = entries_3_state != 2'h0 & eligible_3_drop; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 172:66]
  assign io_dropLine_3_bits_addr = entries_3_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 173:30]
  assign io_dropLine_3_bits_alias = entries_3_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 174:31]
  assign io_dropLine_4_valid = entries_4_state != 2'h0 & eligible_4_drop; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 172:66]
  assign io_dropLine_4_bits_addr = entries_4_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 173:30]
  assign io_dropLine_4_bits_alias = entries_4_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 174:31]
  assign io_dropLine_5_valid = entries_5_state != 2'h0 & eligible_5_drop; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 172:66]
  assign io_dropLine_5_bits_addr = entries_5_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 173:30]
  assign io_dropLine_5_bits_alias = entries_5_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 174:31]
  assign io_dropLine_6_valid = entries_6_state != 2'h0 & eligible_6_drop; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 172:66]
  assign io_dropLine_6_bits_addr = entries_6_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 173:30]
  assign io_dropLine_6_bits_alias = entries_6_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 174:31]
  assign io_dropLine_7_valid = entries_7_state != 2'h0 & eligible_7_drop; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 172:66]
  assign io_dropLine_7_bits_addr = entries_7_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 173:30]
  assign io_dropLine_7_bits_alias = entries_7_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 174:31]
  assign io_dropLine_8_valid = entries_8_state != 2'h0 & eligible_8_drop; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 172:66]
  assign io_dropLine_8_bits_addr = entries_8_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 173:30]
  assign io_dropLine_8_bits_alias = entries_8_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 174:31]
  assign io_dropLine_9_valid = entries_9_state != 2'h0 & eligible_9_drop; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 172:66]
  assign io_dropLine_9_bits_addr = entries_9_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 173:30]
  assign io_dropLine_9_bits_alias = entries_9_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 174:31]
  assign io_dropLine_10_valid = entries_10_state != 2'h0 & eligible_10_drop; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 172:66]
  assign io_dropLine_10_bits_addr = entries_10_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 173:30]
  assign io_dropLine_10_bits_alias = entries_10_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 174:31]
  assign io_dropLine_11_valid = entries_11_state != 2'h0 & eligible_11_drop; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 172:66]
  assign io_dropLine_11_bits_addr = entries_11_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 173:30]
  assign io_dropLine_11_bits_alias = entries_11_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 174:31]
  assign io_dropLine_12_valid = entries_12_state != 2'h0 & eligible_12_drop; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 172:66]
  assign io_dropLine_12_bits_addr = entries_12_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 173:30]
  assign io_dropLine_12_bits_alias = entries_12_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 174:31]
  assign io_dropLine_13_valid = entries_13_state != 2'h0 & eligible_13_drop; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 172:66]
  assign io_dropLine_13_bits_addr = entries_13_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 173:30]
  assign io_dropLine_13_bits_alias = entries_13_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 174:31]
  assign io_dropLine_14_valid = entries_14_state != 2'h0 & eligible_14_drop; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 172:66]
  assign io_dropLine_14_bits_addr = entries_14_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 173:30]
  assign io_dropLine_14_bits_alias = entries_14_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 174:31]
  assign io_dropLine_15_valid = entries_15_state != 2'h0 & eligible_15_drop; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 172:66]
  assign io_dropLine_15_bits_addr = entries_15_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 173:30]
  assign io_dropLine_15_bits_alias = entries_15_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 174:31]
  assign io_wfi_safe = ~busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 180:18]
  always @(posedge clock) begin
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_0_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (canPick & pick == 4'h0) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 156:35]
      entries_0_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 157:24]
    end else if (fire & _T_3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 153:34]
      entries_0_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 154:24]
    end else if (pullBack & outIdx == 4'h0) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 150:38]
      entries_0_state <= 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 151:24]
    end else begin
      entries_0_state <= _GEN_0;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_0_addr <= 48'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h0) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_0_addr <= byteAddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 145:23]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_0_tagAlias <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h0) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_0_tagAlias <= io_rxSnp_bits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 146:27]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_0_opcode <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h0) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_0_opcode <= io_rxSnp_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 147:25]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_0_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h0) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_0_snpTxnId <= io_rxSnp_bits_txnID; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 148:27]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_1_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (canPick & pick == 4'h1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 156:35]
      entries_1_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 157:24]
    end else if (fire & _T_12) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 153:34]
      entries_1_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 154:24]
    end else if (pullBack & outIdx == 4'h1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 150:38]
      entries_1_state <= 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 151:24]
    end else begin
      entries_1_state <= _GEN_8;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_1_addr <= 48'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_1_addr <= byteAddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 145:23]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_1_tagAlias <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_1_tagAlias <= io_rxSnp_bits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 146:27]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_1_opcode <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_1_opcode <= io_rxSnp_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 147:25]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_1_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_1_snpTxnId <= io_rxSnp_bits_txnID; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 148:27]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_2_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (canPick & pick == 4'h2) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 156:35]
      entries_2_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 157:24]
    end else if (fire & _T_21) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 153:34]
      entries_2_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 154:24]
    end else if (pullBack & outIdx == 4'h2) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 150:38]
      entries_2_state <= 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 151:24]
    end else begin
      entries_2_state <= _GEN_16;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_2_addr <= 48'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h2) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_2_addr <= byteAddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 145:23]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_2_tagAlias <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h2) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_2_tagAlias <= io_rxSnp_bits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 146:27]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_2_opcode <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h2) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_2_opcode <= io_rxSnp_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 147:25]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_2_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h2) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_2_snpTxnId <= io_rxSnp_bits_txnID; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 148:27]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_3_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (canPick & pick == 4'h3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 156:35]
      entries_3_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 157:24]
    end else if (fire & _T_30) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 153:34]
      entries_3_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 154:24]
    end else if (pullBack & outIdx == 4'h3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 150:38]
      entries_3_state <= 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 151:24]
    end else begin
      entries_3_state <= _GEN_24;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_3_addr <= 48'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_3_addr <= byteAddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 145:23]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_3_tagAlias <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_3_tagAlias <= io_rxSnp_bits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 146:27]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_3_opcode <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_3_opcode <= io_rxSnp_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 147:25]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_3_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_3_snpTxnId <= io_rxSnp_bits_txnID; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 148:27]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_4_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (canPick & pick == 4'h4) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 156:35]
      entries_4_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 157:24]
    end else if (fire & _T_39) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 153:34]
      entries_4_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 154:24]
    end else if (pullBack & outIdx == 4'h4) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 150:38]
      entries_4_state <= 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 151:24]
    end else begin
      entries_4_state <= _GEN_32;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_4_addr <= 48'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h4) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_4_addr <= byteAddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 145:23]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_4_tagAlias <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h4) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_4_tagAlias <= io_rxSnp_bits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 146:27]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_4_opcode <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h4) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_4_opcode <= io_rxSnp_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 147:25]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_4_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h4) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_4_snpTxnId <= io_rxSnp_bits_txnID; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 148:27]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_5_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (canPick & pick == 4'h5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 156:35]
      entries_5_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 157:24]
    end else if (fire & _T_48) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 153:34]
      entries_5_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 154:24]
    end else if (pullBack & outIdx == 4'h5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 150:38]
      entries_5_state <= 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 151:24]
    end else begin
      entries_5_state <= _GEN_40;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_5_addr <= 48'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_5_addr <= byteAddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 145:23]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_5_tagAlias <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_5_tagAlias <= io_rxSnp_bits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 146:27]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_5_opcode <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_5_opcode <= io_rxSnp_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 147:25]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_5_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_5_snpTxnId <= io_rxSnp_bits_txnID; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 148:27]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_6_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (canPick & pick == 4'h6) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 156:35]
      entries_6_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 157:24]
    end else if (fire & _T_57) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 153:34]
      entries_6_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 154:24]
    end else if (pullBack & outIdx == 4'h6) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 150:38]
      entries_6_state <= 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 151:24]
    end else begin
      entries_6_state <= _GEN_48;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_6_addr <= 48'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h6) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_6_addr <= byteAddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 145:23]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_6_tagAlias <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h6) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_6_tagAlias <= io_rxSnp_bits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 146:27]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_6_opcode <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h6) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_6_opcode <= io_rxSnp_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 147:25]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_6_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h6) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_6_snpTxnId <= io_rxSnp_bits_txnID; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 148:27]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_7_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (canPick & pick == 4'h7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 156:35]
      entries_7_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 157:24]
    end else if (fire & _T_66) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 153:34]
      entries_7_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 154:24]
    end else if (pullBack & outIdx == 4'h7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 150:38]
      entries_7_state <= 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 151:24]
    end else begin
      entries_7_state <= _GEN_56;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_7_addr <= 48'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_7_addr <= byteAddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 145:23]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_7_tagAlias <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_7_tagAlias <= io_rxSnp_bits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 146:27]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_7_opcode <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_7_opcode <= io_rxSnp_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 147:25]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_7_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h7) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_7_snpTxnId <= io_rxSnp_bits_txnID; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 148:27]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_8_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (canPick & pick == 4'h8) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 156:35]
      entries_8_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 157:24]
    end else if (fire & _T_75) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 153:34]
      entries_8_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 154:24]
    end else if (pullBack & outIdx == 4'h8) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 150:38]
      entries_8_state <= 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 151:24]
    end else begin
      entries_8_state <= _GEN_64;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_8_addr <= 48'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h8) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_8_addr <= byteAddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 145:23]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_8_tagAlias <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h8) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_8_tagAlias <= io_rxSnp_bits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 146:27]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_8_opcode <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h8) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_8_opcode <= io_rxSnp_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 147:25]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_8_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h8) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_8_snpTxnId <= io_rxSnp_bits_txnID; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 148:27]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_9_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (canPick & pick == 4'h9) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 156:35]
      entries_9_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 157:24]
    end else if (fire & _T_84) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 153:34]
      entries_9_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 154:24]
    end else if (pullBack & outIdx == 4'h9) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 150:38]
      entries_9_state <= 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 151:24]
    end else begin
      entries_9_state <= _GEN_72;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_9_addr <= 48'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h9) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_9_addr <= byteAddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 145:23]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_9_tagAlias <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h9) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_9_tagAlias <= io_rxSnp_bits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 146:27]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_9_opcode <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h9) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_9_opcode <= io_rxSnp_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 147:25]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_9_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'h9) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_9_snpTxnId <= io_rxSnp_bits_txnID; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 148:27]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_10_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (canPick & pick == 4'ha) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 156:35]
      entries_10_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 157:24]
    end else if (fire & _T_93) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 153:34]
      entries_10_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 154:24]
    end else if (pullBack & outIdx == 4'ha) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 150:38]
      entries_10_state <= 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 151:24]
    end else begin
      entries_10_state <= _GEN_80;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_10_addr <= 48'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'ha) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_10_addr <= byteAddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 145:23]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_10_tagAlias <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'ha) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_10_tagAlias <= io_rxSnp_bits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 146:27]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_10_opcode <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'ha) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_10_opcode <= io_rxSnp_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 147:25]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_10_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'ha) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_10_snpTxnId <= io_rxSnp_bits_txnID; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 148:27]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_11_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (canPick & pick == 4'hb) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 156:35]
      entries_11_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 157:24]
    end else if (fire & _T_102) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 153:34]
      entries_11_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 154:24]
    end else if (pullBack & outIdx == 4'hb) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 150:38]
      entries_11_state <= 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 151:24]
    end else begin
      entries_11_state <= _GEN_88;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_11_addr <= 48'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'hb) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_11_addr <= byteAddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 145:23]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_11_tagAlias <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'hb) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_11_tagAlias <= io_rxSnp_bits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 146:27]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_11_opcode <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'hb) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_11_opcode <= io_rxSnp_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 147:25]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_11_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'hb) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_11_snpTxnId <= io_rxSnp_bits_txnID; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 148:27]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_12_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (canPick & pick == 4'hc) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 156:35]
      entries_12_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 157:24]
    end else if (fire & _T_111) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 153:34]
      entries_12_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 154:24]
    end else if (pullBack & outIdx == 4'hc) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 150:38]
      entries_12_state <= 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 151:24]
    end else begin
      entries_12_state <= _GEN_96;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_12_addr <= 48'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'hc) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_12_addr <= byteAddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 145:23]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_12_tagAlias <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'hc) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_12_tagAlias <= io_rxSnp_bits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 146:27]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_12_opcode <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'hc) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_12_opcode <= io_rxSnp_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 147:25]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_12_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'hc) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_12_snpTxnId <= io_rxSnp_bits_txnID; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 148:27]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_13_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (canPick & pick == 4'hd) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 156:35]
      entries_13_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 157:24]
    end else if (fire & _T_120) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 153:34]
      entries_13_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 154:24]
    end else if (pullBack & outIdx == 4'hd) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 150:38]
      entries_13_state <= 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 151:24]
    end else begin
      entries_13_state <= _GEN_104;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_13_addr <= 48'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'hd) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_13_addr <= byteAddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 145:23]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_13_tagAlias <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'hd) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_13_tagAlias <= io_rxSnp_bits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 146:27]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_13_opcode <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'hd) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_13_opcode <= io_rxSnp_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 147:25]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_13_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'hd) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_13_snpTxnId <= io_rxSnp_bits_txnID; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 148:27]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_14_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (canPick & pick == 4'he) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 156:35]
      entries_14_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 157:24]
    end else if (fire & _T_129) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 153:34]
      entries_14_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 154:24]
    end else if (pullBack & outIdx == 4'he) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 150:38]
      entries_14_state <= 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 151:24]
    end else begin
      entries_14_state <= _GEN_112;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_14_addr <= 48'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'he) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_14_addr <= byteAddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 145:23]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_14_tagAlias <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'he) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_14_tagAlias <= io_rxSnp_bits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 146:27]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_14_opcode <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'he) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_14_opcode <= io_rxSnp_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 147:25]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_14_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'he) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_14_snpTxnId <= io_rxSnp_bits_txnID; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 148:27]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_15_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (canPick & pick == 4'hf) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 156:35]
      entries_15_state <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 157:24]
    end else if (fire & _T_138) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 153:34]
      entries_15_state <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 154:24]
    end else if (pullBack & outIdx == 4'hf) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 150:38]
      entries_15_state <= 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 151:24]
    end else begin
      entries_15_state <= _GEN_120;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_15_addr <= 48'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'hf) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_15_addr <= byteAddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 145:23]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_15_tagAlias <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'hf) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_15_tagAlias <= io_rxSnp_bits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 146:27]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_15_opcode <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'hf) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_15_opcode <= io_rxSnp_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 147:25]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
      entries_15_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 67:24]
    end else if (_T & allocId == 4'hf) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 143:44]
      entries_15_snpTxnId <= io_rxSnp_bits_txnID; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 148:27]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 70:25]
      outValid <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 70:25]
    end else begin
      outValid <= _GEN_193;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 71:23]
      outIdx <= 4'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 71:23]
    end else if (canPick) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 161:17]
      if (_hasEligible_T[0]) begin // @[src/main/scala/chisel3/util/Mux.scala 50:70]
        outIdx <= 4'h0;
      end else if (_hasEligible_T[1]) begin // @[src/main/scala/chisel3/util/Mux.scala 50:70]
        outIdx <= 4'h1;
      end else begin
        outIdx <= _pick_T_29;
      end
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 72:24]
      outBits_vaddr <= 48'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 72:24]
    end else if (canPick) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 161:17]
      outBits_vaddr <= outBits_req_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 164:13]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 72:24]
      outBits_addr <= 48'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 72:24]
    end else if (canPick) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 161:17]
      if (4'hf == pick) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 241:24]
        outBits_addr <= entries_15_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 241:24]
      end else if (4'he == pick) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 241:24]
        outBits_addr <= entries_14_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 241:24]
      end else begin
        outBits_addr <= _GEN_141;
      end
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 72:24]
      outBits_tagAlias <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 72:24]
    end else if (canPick) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 161:17]
      if (4'hf == pick) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 248:37]
        outBits_tagAlias <= entries_15_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 248:37]
      end else if (4'he == pick) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 248:37]
        outBits_tagAlias <= entries_14_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 248:37]
      end else begin
        outBits_tagAlias <= _GEN_157;
      end
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 72:24]
      outBits_id <= 6'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 72:24]
    end else if (canPick) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 161:17]
      outBits_id <= outBits_req_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 164:13]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 72:24]
      outBits_probeOp <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 72:24]
    end else if (canPick) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 161:17]
      if (4'hf == pick) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 134:17]
        outBits_probeOp <= entries_15_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 134:17]
      end else if (4'he == pick) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 134:17]
        outBits_probeOp <= entries_14_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 134:17]
      end else begin
        outBits_probeOp <= _GEN_173;
      end
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 72:24]
      outBits_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 72:24]
    end else if (canPick) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 161:17]
      if (4'hf == pick) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 136:18]
        outBits_snpTxnId <= entries_15_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 136:18]
      end else if (4'he == pick) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 136:18]
        outBits_snpTxnId <= entries_14_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 136:18]
      end else begin
        outBits_snpTxnId <= _GEN_189;
      end
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 73:22]
      pause <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 73:22]
    end else begin
      pause <= io_updateResvSet; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 73:22]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(_T_189 <= 5'h1)) begin
          $fwrite(32'h80000002,
            "Assertion failed: probe queue holds one selected entry\n    at ProbeQueue.scala:187 assert(PopCount(entries.map(_.state === ProbeState.held)) <= 1.U,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 187:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(_T_189 <= 5'h1)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 187:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_193 & ~(_slotFree_T | _GEN_225 == 2'h2)) begin
          $fwrite(32'h80000002,
            "Assertion failed: latched snoop must stay in its entry\n    at ProbeQueue.scala:189 assert(!outValid || entries(outIdx).state === ProbeState.held,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 189:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_193 & ~(_slotFree_T | _GEN_225 == 2'h2)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 189:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_193 & ~(~fire | ~pullBack)) begin
          $fwrite(32'h80000002,
            "Assertion failed: an accepted snoop is not pulled back\n    at ProbeQueue.scala:191 assert(!fire || !pullBack,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 191:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_193 & ~(~fire | ~pullBack)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 191:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_193 & ~(~_T | _GEN_241 == 2'h0)) begin
          $fwrite(32'h80000002,
            "Assertion failed: snoop allocate must use an idle entry\n    at ProbeQueue.scala:193 assert(!io.rxSnp.fire || entries(allocId).state === ProbeState.idle,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 193:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_193 & ~(~_T | _GEN_241 == 2'h0)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 193:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_193 & ~(_T_208 | ~clash)) begin
          $fwrite(32'h80000002,
            "Assertion failed: second snoop to a line still in ProbeQueue\n    at ProbeQueue.scala:195 assert(!io.rxSnp.fire || !clash,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 195:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_193 & ~(_T_208 | ~clash)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 195:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_193 & ~(~(fire & _T & allocId == outIdx))) begin
          $fwrite(32'h80000002,
            "Assertion failed: a just accepted snoop cannot be reused in the same cycle\n    at ProbeQueue.scala:197 assert(!(fire && io.rxSnp.fire && allocId === outIdx),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 197:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_193 & ~(~(fire & _T & allocId == outIdx))) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 197:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_193 & ~(~io_pipeReq_valid | outBits_addr[5:0] == 6'h0)) begin
          $fwrite(32'h80000002,
            "Assertion failed: snoop address must be line aligned\n    at ProbeQueue.scala:199 assert(!io.pipeReq.valid || outBits.addr(blockOffBits - 1, 0) === 0.U,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 199:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_193 & ~(~io_pipeReq_valid | outBits_addr[5:0] == 6'h0)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 199:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_193 & ~(_T_229 | ~_missNow_T_16)) begin
          $fwrite(32'h80000002,
            "Assertion failed: snoop must wait until the matching MSHR is released\n    at ProbeQueue.scala:201 assert(!io.pipeReq.valid || !heldByMiss(outBits.addr, outBits.tagAlias, outBits.probeOp),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 201:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_193 & ~(_T_229 | ~_missNow_T_16)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 201:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_193 & ~(_T_229 | ~io_pipeReq_bits_needData)) begin
          $fwrite(32'h80000002,
            "Assertion failed: compact chi snoop has no needData\n    at ProbeQueue.scala:203 assert(!io.pipeReq.valid || !io.pipeReq.bits.needData,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 203:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_193 & ~(_T_229 | ~io_pipeReq_bits_needData)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 203:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_193 & ~(_T_229 | io_pipeReq_bits_id == _GEN_242)) begin
          $fwrite(32'h80000002,
            "Assertion failed: pipe request id is the probe entry index\n    at ProbeQueue.scala:205 assert(!io.pipeReq.valid || io.pipeReq.bits.id === outIdx,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 205:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_193 & ~(_T_229 | io_pipeReq_bits_id == _GEN_242)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 205:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_193 & ~(~_T_271 | io_probeResp_bits_id < 6'h10)) begin
          $fwrite(32'h80000002,
            "Assertion failed: probe response id must be a probe entry\n    at ProbeQueue.scala:207 assert(!io.probeResp.fire || io.probeResp.bits.id < nProbeEntries.U(reqIdWidth.W),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 207:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_193 & ~(~_T_271 | io_probeResp_bits_id < 6'h10)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/ProbeQueue/ProbeQueue.scala 207:9]
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
  entries_0_state = _RAND_0[1:0];
  _RAND_1 = {2{`RANDOM}};
  entries_0_addr = _RAND_1[47:0];
  _RAND_2 = {1{`RANDOM}};
  entries_0_tagAlias = _RAND_2[1:0];
  _RAND_3 = {1{`RANDOM}};
  entries_0_opcode = _RAND_3[1:0];
  _RAND_4 = {1{`RANDOM}};
  entries_0_snpTxnId = _RAND_4[7:0];
  _RAND_5 = {1{`RANDOM}};
  entries_1_state = _RAND_5[1:0];
  _RAND_6 = {2{`RANDOM}};
  entries_1_addr = _RAND_6[47:0];
  _RAND_7 = {1{`RANDOM}};
  entries_1_tagAlias = _RAND_7[1:0];
  _RAND_8 = {1{`RANDOM}};
  entries_1_opcode = _RAND_8[1:0];
  _RAND_9 = {1{`RANDOM}};
  entries_1_snpTxnId = _RAND_9[7:0];
  _RAND_10 = {1{`RANDOM}};
  entries_2_state = _RAND_10[1:0];
  _RAND_11 = {2{`RANDOM}};
  entries_2_addr = _RAND_11[47:0];
  _RAND_12 = {1{`RANDOM}};
  entries_2_tagAlias = _RAND_12[1:0];
  _RAND_13 = {1{`RANDOM}};
  entries_2_opcode = _RAND_13[1:0];
  _RAND_14 = {1{`RANDOM}};
  entries_2_snpTxnId = _RAND_14[7:0];
  _RAND_15 = {1{`RANDOM}};
  entries_3_state = _RAND_15[1:0];
  _RAND_16 = {2{`RANDOM}};
  entries_3_addr = _RAND_16[47:0];
  _RAND_17 = {1{`RANDOM}};
  entries_3_tagAlias = _RAND_17[1:0];
  _RAND_18 = {1{`RANDOM}};
  entries_3_opcode = _RAND_18[1:0];
  _RAND_19 = {1{`RANDOM}};
  entries_3_snpTxnId = _RAND_19[7:0];
  _RAND_20 = {1{`RANDOM}};
  entries_4_state = _RAND_20[1:0];
  _RAND_21 = {2{`RANDOM}};
  entries_4_addr = _RAND_21[47:0];
  _RAND_22 = {1{`RANDOM}};
  entries_4_tagAlias = _RAND_22[1:0];
  _RAND_23 = {1{`RANDOM}};
  entries_4_opcode = _RAND_23[1:0];
  _RAND_24 = {1{`RANDOM}};
  entries_4_snpTxnId = _RAND_24[7:0];
  _RAND_25 = {1{`RANDOM}};
  entries_5_state = _RAND_25[1:0];
  _RAND_26 = {2{`RANDOM}};
  entries_5_addr = _RAND_26[47:0];
  _RAND_27 = {1{`RANDOM}};
  entries_5_tagAlias = _RAND_27[1:0];
  _RAND_28 = {1{`RANDOM}};
  entries_5_opcode = _RAND_28[1:0];
  _RAND_29 = {1{`RANDOM}};
  entries_5_snpTxnId = _RAND_29[7:0];
  _RAND_30 = {1{`RANDOM}};
  entries_6_state = _RAND_30[1:0];
  _RAND_31 = {2{`RANDOM}};
  entries_6_addr = _RAND_31[47:0];
  _RAND_32 = {1{`RANDOM}};
  entries_6_tagAlias = _RAND_32[1:0];
  _RAND_33 = {1{`RANDOM}};
  entries_6_opcode = _RAND_33[1:0];
  _RAND_34 = {1{`RANDOM}};
  entries_6_snpTxnId = _RAND_34[7:0];
  _RAND_35 = {1{`RANDOM}};
  entries_7_state = _RAND_35[1:0];
  _RAND_36 = {2{`RANDOM}};
  entries_7_addr = _RAND_36[47:0];
  _RAND_37 = {1{`RANDOM}};
  entries_7_tagAlias = _RAND_37[1:0];
  _RAND_38 = {1{`RANDOM}};
  entries_7_opcode = _RAND_38[1:0];
  _RAND_39 = {1{`RANDOM}};
  entries_7_snpTxnId = _RAND_39[7:0];
  _RAND_40 = {1{`RANDOM}};
  entries_8_state = _RAND_40[1:0];
  _RAND_41 = {2{`RANDOM}};
  entries_8_addr = _RAND_41[47:0];
  _RAND_42 = {1{`RANDOM}};
  entries_8_tagAlias = _RAND_42[1:0];
  _RAND_43 = {1{`RANDOM}};
  entries_8_opcode = _RAND_43[1:0];
  _RAND_44 = {1{`RANDOM}};
  entries_8_snpTxnId = _RAND_44[7:0];
  _RAND_45 = {1{`RANDOM}};
  entries_9_state = _RAND_45[1:0];
  _RAND_46 = {2{`RANDOM}};
  entries_9_addr = _RAND_46[47:0];
  _RAND_47 = {1{`RANDOM}};
  entries_9_tagAlias = _RAND_47[1:0];
  _RAND_48 = {1{`RANDOM}};
  entries_9_opcode = _RAND_48[1:0];
  _RAND_49 = {1{`RANDOM}};
  entries_9_snpTxnId = _RAND_49[7:0];
  _RAND_50 = {1{`RANDOM}};
  entries_10_state = _RAND_50[1:0];
  _RAND_51 = {2{`RANDOM}};
  entries_10_addr = _RAND_51[47:0];
  _RAND_52 = {1{`RANDOM}};
  entries_10_tagAlias = _RAND_52[1:0];
  _RAND_53 = {1{`RANDOM}};
  entries_10_opcode = _RAND_53[1:0];
  _RAND_54 = {1{`RANDOM}};
  entries_10_snpTxnId = _RAND_54[7:0];
  _RAND_55 = {1{`RANDOM}};
  entries_11_state = _RAND_55[1:0];
  _RAND_56 = {2{`RANDOM}};
  entries_11_addr = _RAND_56[47:0];
  _RAND_57 = {1{`RANDOM}};
  entries_11_tagAlias = _RAND_57[1:0];
  _RAND_58 = {1{`RANDOM}};
  entries_11_opcode = _RAND_58[1:0];
  _RAND_59 = {1{`RANDOM}};
  entries_11_snpTxnId = _RAND_59[7:0];
  _RAND_60 = {1{`RANDOM}};
  entries_12_state = _RAND_60[1:0];
  _RAND_61 = {2{`RANDOM}};
  entries_12_addr = _RAND_61[47:0];
  _RAND_62 = {1{`RANDOM}};
  entries_12_tagAlias = _RAND_62[1:0];
  _RAND_63 = {1{`RANDOM}};
  entries_12_opcode = _RAND_63[1:0];
  _RAND_64 = {1{`RANDOM}};
  entries_12_snpTxnId = _RAND_64[7:0];
  _RAND_65 = {1{`RANDOM}};
  entries_13_state = _RAND_65[1:0];
  _RAND_66 = {2{`RANDOM}};
  entries_13_addr = _RAND_66[47:0];
  _RAND_67 = {1{`RANDOM}};
  entries_13_tagAlias = _RAND_67[1:0];
  _RAND_68 = {1{`RANDOM}};
  entries_13_opcode = _RAND_68[1:0];
  _RAND_69 = {1{`RANDOM}};
  entries_13_snpTxnId = _RAND_69[7:0];
  _RAND_70 = {1{`RANDOM}};
  entries_14_state = _RAND_70[1:0];
  _RAND_71 = {2{`RANDOM}};
  entries_14_addr = _RAND_71[47:0];
  _RAND_72 = {1{`RANDOM}};
  entries_14_tagAlias = _RAND_72[1:0];
  _RAND_73 = {1{`RANDOM}};
  entries_14_opcode = _RAND_73[1:0];
  _RAND_74 = {1{`RANDOM}};
  entries_14_snpTxnId = _RAND_74[7:0];
  _RAND_75 = {1{`RANDOM}};
  entries_15_state = _RAND_75[1:0];
  _RAND_76 = {2{`RANDOM}};
  entries_15_addr = _RAND_76[47:0];
  _RAND_77 = {1{`RANDOM}};
  entries_15_tagAlias = _RAND_77[1:0];
  _RAND_78 = {1{`RANDOM}};
  entries_15_opcode = _RAND_78[1:0];
  _RAND_79 = {1{`RANDOM}};
  entries_15_snpTxnId = _RAND_79[7:0];
  _RAND_80 = {1{`RANDOM}};
  outValid = _RAND_80[0:0];
  _RAND_81 = {1{`RANDOM}};
  outIdx = _RAND_81[3:0];
  _RAND_82 = {2{`RANDOM}};
  outBits_vaddr = _RAND_82[47:0];
  _RAND_83 = {2{`RANDOM}};
  outBits_addr = _RAND_83[47:0];
  _RAND_84 = {1{`RANDOM}};
  outBits_tagAlias = _RAND_84[1:0];
  _RAND_85 = {1{`RANDOM}};
  outBits_id = _RAND_85[5:0];
  _RAND_86 = {1{`RANDOM}};
  outBits_probeOp = _RAND_86[1:0];
  _RAND_87 = {1{`RANDOM}};
  outBits_snpTxnId = _RAND_87[7:0];
  _RAND_88 = {1{`RANDOM}};
  pause = _RAND_88[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
