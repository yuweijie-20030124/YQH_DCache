module BankedDataArray(
  input         clock,
  input         reset,
  output        io_load_0_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  input         io_load_0_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  input  [47:0] io_load_0_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  input  [7:0]  io_load_0_bits_bankMask, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  input         io_load_0_bits_kill, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  input         io_load_0_bits_lqIdx_flag, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  input  [3:0]  io_load_0_bits_lqIdx_value, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output        io_load_1_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  input         io_load_1_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  input  [47:0] io_load_1_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  input  [7:0]  io_load_1_bits_bankMask, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  input         io_load_1_bits_kill, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  input         io_load_1_bits_lqIdx_flag, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  input  [3:0]  io_load_1_bits_lqIdx_value, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output        io_bankConflict_0, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output        io_bankConflict_1, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_loadResp_0_0_data_0, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_loadResp_0_0_data_1, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_loadResp_0_0_data_2, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_loadResp_0_0_data_3, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_loadResp_0_1_data_0, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_loadResp_0_1_data_1, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_loadResp_0_1_data_2, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_loadResp_0_1_data_3, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_loadResp_1_0_data_0, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_loadResp_1_0_data_1, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_loadResp_1_0_data_2, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_loadResp_1_0_data_3, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_loadResp_1_1_data_0, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_loadResp_1_1_data_1, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_loadResp_1_1_data_2, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_loadResp_1_1_data_3, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output        io_line_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  input         io_line_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  input  [47:0] io_line_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  input  [7:0]  io_line_bits_bankMask, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output        io_lineResp_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_lineResp_bits_data_0_0, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_lineResp_bits_data_0_1, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_lineResp_bits_data_0_2, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_lineResp_bits_data_0_3, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_lineResp_bits_data_1_0, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_lineResp_bits_data_1_1, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_lineResp_bits_data_1_2, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_lineResp_bits_data_1_3, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_lineResp_bits_data_2_0, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_lineResp_bits_data_2_1, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_lineResp_bits_data_2_2, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_lineResp_bits_data_2_3, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_lineResp_bits_data_3_0, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_lineResp_bits_data_3_1, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_lineResp_bits_data_3_2, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_lineResp_bits_data_3_3, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_lineResp_bits_data_4_0, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_lineResp_bits_data_4_1, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_lineResp_bits_data_4_2, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_lineResp_bits_data_4_3, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_lineResp_bits_data_5_0, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_lineResp_bits_data_5_1, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_lineResp_bits_data_5_2, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_lineResp_bits_data_5_3, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_lineResp_bits_data_6_0, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_lineResp_bits_data_6_1, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_lineResp_bits_data_6_2, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_lineResp_bits_data_6_3, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_lineResp_bits_data_7_0, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_lineResp_bits_data_7_1, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_lineResp_bits_data_7_2, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  output [63:0] io_lineResp_bits_data_7_3, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  input         io_write_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  input  [47:0] io_write_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  input  [3:0]  io_write_bits_wayEn, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  input  [7:0]  io_write_bits_bankMask, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  input  [63:0] io_write_bits_data_0, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  input  [63:0] io_write_bits_data_1, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  input  [63:0] io_write_bits_data_2, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  input  [63:0] io_write_bits_data_3, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  input  [63:0] io_write_bits_data_4, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  input  [63:0] io_write_bits_data_5, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  input  [63:0] io_write_bits_data_6, // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
  input  [63:0] io_write_bits_data_7 // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 57:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
`endif // RANDOMIZE_REG_INIT
  wire  dataBank_0_clock; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_0_io_r_en; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [7:0] dataBank_0_io_r_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_0_io_r_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_0_io_r_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_0_io_r_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_0_io_r_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_0_io_w_en; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [7:0] dataBank_0_io_w_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_0_io_w_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_0_io_w_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_0_io_w_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_0_io_w_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_0_io_w_mask_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_0_io_w_mask_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_0_io_w_mask_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_0_io_w_mask_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_1_clock; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_1_io_r_en; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [7:0] dataBank_1_io_r_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_1_io_r_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_1_io_r_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_1_io_r_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_1_io_r_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_1_io_w_en; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [7:0] dataBank_1_io_w_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_1_io_w_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_1_io_w_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_1_io_w_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_1_io_w_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_1_io_w_mask_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_1_io_w_mask_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_1_io_w_mask_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_1_io_w_mask_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_2_clock; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_2_io_r_en; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [7:0] dataBank_2_io_r_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_2_io_r_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_2_io_r_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_2_io_r_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_2_io_r_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_2_io_w_en; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [7:0] dataBank_2_io_w_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_2_io_w_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_2_io_w_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_2_io_w_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_2_io_w_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_2_io_w_mask_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_2_io_w_mask_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_2_io_w_mask_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_2_io_w_mask_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_3_clock; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_3_io_r_en; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [7:0] dataBank_3_io_r_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_3_io_r_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_3_io_r_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_3_io_r_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_3_io_r_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_3_io_w_en; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [7:0] dataBank_3_io_w_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_3_io_w_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_3_io_w_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_3_io_w_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_3_io_w_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_3_io_w_mask_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_3_io_w_mask_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_3_io_w_mask_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_3_io_w_mask_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_4_clock; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_4_io_r_en; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [7:0] dataBank_4_io_r_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_4_io_r_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_4_io_r_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_4_io_r_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_4_io_r_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_4_io_w_en; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [7:0] dataBank_4_io_w_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_4_io_w_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_4_io_w_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_4_io_w_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_4_io_w_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_4_io_w_mask_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_4_io_w_mask_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_4_io_w_mask_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_4_io_w_mask_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_5_clock; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_5_io_r_en; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [7:0] dataBank_5_io_r_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_5_io_r_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_5_io_r_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_5_io_r_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_5_io_r_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_5_io_w_en; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [7:0] dataBank_5_io_w_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_5_io_w_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_5_io_w_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_5_io_w_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_5_io_w_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_5_io_w_mask_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_5_io_w_mask_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_5_io_w_mask_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_5_io_w_mask_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_6_clock; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_6_io_r_en; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [7:0] dataBank_6_io_r_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_6_io_r_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_6_io_r_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_6_io_r_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_6_io_r_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_6_io_w_en; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [7:0] dataBank_6_io_w_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_6_io_w_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_6_io_w_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_6_io_w_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_6_io_w_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_6_io_w_mask_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_6_io_w_mask_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_6_io_w_mask_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_6_io_w_mask_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_7_clock; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_7_io_r_en; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [7:0] dataBank_7_io_r_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_7_io_r_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_7_io_r_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_7_io_r_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_7_io_r_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_7_io_w_en; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [7:0] dataBank_7_io_w_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_7_io_w_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_7_io_w_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_7_io_w_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire [63:0] dataBank_7_io_w_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_7_io_w_mask_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_7_io_w_mask_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_7_io_w_mask_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  dataBank_7_io_w_mask_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
  wire  _loadGo_0_T = ~io_load_0_bits_kill; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 89:38]
  wire  loadGo_0 = io_load_0_valid & ~io_load_0_bits_kill; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 89:35]
  wire [7:0] loadIdx_0 = io_load_0_bits_addr[13:6]; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 187:9]
  wire [2:0] loadBank0_0 = io_load_0_bits_addr[5:3]; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 173:9]
  wire  _loadGo_1_T = ~io_load_1_bits_kill; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 89:38]
  wire  loadGo_1 = io_load_1_valid & ~io_load_1_bits_kill; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 89:35]
  wire [7:0] loadIdx_1 = io_load_1_bits_addr[13:6]; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 187:9]
  wire [2:0] loadBank0_1 = io_load_1_bits_addr[5:3]; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 173:9]
  wire [7:0] writeMask = io_write_valid ? io_write_bits_bankMask : 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 95:22]
  wire [7:0] lineIdx = io_line_bits_addr[13:6]; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 187:9]
  wire [7:0] lineMask = io_line_valid ? io_line_bits_bankMask : 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 97:21]
  wire [7:0] _writeBlock_0_T = io_load_0_bits_bankMask & writeMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 99:44]
  wire  _writeBlock_0_T_1 = _writeBlock_0_T != 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 99:49]
  wire  writeBlock_0 = loadGo_0 & _writeBlock_0_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 105:32]
  wire [7:0] _lineBlock_0_T = io_load_0_bits_bankMask & lineMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 99:44]
  wire  _lineBlock_0_T_1 = _lineBlock_0_T != 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 99:49]
  wire  lineBlock_0 = loadGo_0 & _lineBlock_0_T_1 & loadIdx_0 != lineIdx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 106:65]
  wire [7:0] _writeBlock_1_T = io_load_1_bits_bankMask & writeMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 99:44]
  wire  _writeBlock_1_T_1 = _writeBlock_1_T != 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 99:49]
  wire  writeBlock_1 = loadGo_1 & _writeBlock_1_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 105:32]
  wire [7:0] _lineBlock_1_T = io_load_1_bits_bankMask & lineMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 99:44]
  wire  _lineBlock_1_T_1 = _lineBlock_1_T != 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 99:49]
  wire  lineBlock_1 = loadGo_1 & _lineBlock_1_T_1 & loadIdx_1 != lineIdx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 106:65]
  wire [7:0] _both_T_1 = io_load_0_bits_bankMask & io_load_1_bits_bankMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 99:44]
  wire  _both_T_2 = _both_T_1 != 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 99:49]
  wire  both = loadGo_0 & loadGo_1 & _both_T_2 & loadIdx_0 != loadIdx_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 110:74]
  wire  port1Older = io_load_1_bits_lqIdx_flag == io_load_0_bits_lqIdx_flag ? io_load_1_bits_lqIdx_value <
    io_load_0_bits_lqIdx_value : io_load_1_bits_lqIdx_value > io_load_0_bits_lqIdx_value; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 31:8]
  wire  loadBlock_0 = both & port1Older; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 112:24]
  wire  loadBlock_1 = both & ~port1Older; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 113:24]
  wire  conflict_0 = loadGo_0 & (writeBlock_0 | lineBlock_0 | loadBlock_0); // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 119:30]
  wire  _io_load_0_ready_T = ~conflict_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 121:33]
  wire  conflict_1 = loadGo_1 & (writeBlock_1 | lineBlock_1 | loadBlock_1); // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 119:30]
  wire  _io_load_1_ready_T = ~conflict_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 121:33]
  wire [7:0] _io_line_ready_T = io_line_bits_bankMask & writeMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 99:44]
  wire  _io_line_ready_T_1 = _io_line_ready_T != 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 99:49]
  wire  writeThis = io_write_valid & io_write_bits_bankMask[0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 131:36]
  wire  _lineThis_T = io_line_ready & io_line_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 57:35]
  wire  lineThis = _lineThis_T & io_line_bits_bankMask[0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 139:33]
  wire  _loadThis_0_T = io_load_0_ready & io_load_0_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 57:35]
  wire  _loadThis_0_T_4 = _loadThis_0_T & _loadGo_0_T & _io_load_0_ready_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 142:63]
  wire  loadThis__0 = _loadThis_0_T & _loadGo_0_T & _io_load_0_ready_T & io_load_0_bits_bankMask[0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 142:79]
  wire  _loadThis_1_T = io_load_1_ready & io_load_1_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 57:35]
  wire  _loadThis_1_T_4 = _loadThis_1_T & _loadGo_1_T & _io_load_1_ready_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 142:63]
  wire  loadThis__1 = _loadThis_1_T & _loadGo_1_T & _io_load_1_ready_T & io_load_1_bits_bankMask[0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 142:79]
  wire [1:0] _loadRead_T = {loadThis__1,loadThis__0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 144:29]
  wire  loadRead = |_loadRead_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 144:36]
  wire [7:0] _dataBank_0_io_r_addr_T = loadThis__0 ? loadIdx_0 : loadIdx_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 146:49]
  wire  writeThis_1 = io_write_valid & io_write_bits_bankMask[1]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 131:36]
  wire  lineThis_1 = _lineThis_T & io_line_bits_bankMask[1]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 139:33]
  wire  loadThis_1_0 = _loadThis_0_T & _loadGo_0_T & _io_load_0_ready_T & io_load_0_bits_bankMask[1]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 142:79]
  wire  loadThis_1_1 = _loadThis_1_T & _loadGo_1_T & _io_load_1_ready_T & io_load_1_bits_bankMask[1]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 142:79]
  wire [1:0] _loadRead_T_1 = {loadThis_1_1,loadThis_1_0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 144:29]
  wire  loadRead_1 = |_loadRead_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 144:36]
  wire [7:0] _dataBank_1_io_r_addr_T = loadThis_1_0 ? loadIdx_0 : loadIdx_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 146:49]
  wire  writeThis_2 = io_write_valid & io_write_bits_bankMask[2]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 131:36]
  wire  lineThis_2 = _lineThis_T & io_line_bits_bankMask[2]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 139:33]
  wire  loadThis_2_0 = _loadThis_0_T & _loadGo_0_T & _io_load_0_ready_T & io_load_0_bits_bankMask[2]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 142:79]
  wire  loadThis_2_1 = _loadThis_1_T & _loadGo_1_T & _io_load_1_ready_T & io_load_1_bits_bankMask[2]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 142:79]
  wire [1:0] _loadRead_T_2 = {loadThis_2_1,loadThis_2_0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 144:29]
  wire  loadRead_2 = |_loadRead_T_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 144:36]
  wire [7:0] _dataBank_2_io_r_addr_T = loadThis_2_0 ? loadIdx_0 : loadIdx_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 146:49]
  wire  writeThis_3 = io_write_valid & io_write_bits_bankMask[3]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 131:36]
  wire  lineThis_3 = _lineThis_T & io_line_bits_bankMask[3]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 139:33]
  wire  loadThis_3_0 = _loadThis_0_T & _loadGo_0_T & _io_load_0_ready_T & io_load_0_bits_bankMask[3]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 142:79]
  wire  loadThis_3_1 = _loadThis_1_T & _loadGo_1_T & _io_load_1_ready_T & io_load_1_bits_bankMask[3]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 142:79]
  wire [1:0] _loadRead_T_3 = {loadThis_3_1,loadThis_3_0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 144:29]
  wire  loadRead_3 = |_loadRead_T_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 144:36]
  wire [7:0] _dataBank_3_io_r_addr_T = loadThis_3_0 ? loadIdx_0 : loadIdx_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 146:49]
  wire  writeThis_4 = io_write_valid & io_write_bits_bankMask[4]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 131:36]
  wire  lineThis_4 = _lineThis_T & io_line_bits_bankMask[4]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 139:33]
  wire  loadThis_4_0 = _loadThis_0_T & _loadGo_0_T & _io_load_0_ready_T & io_load_0_bits_bankMask[4]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 142:79]
  wire  loadThis_4_1 = _loadThis_1_T & _loadGo_1_T & _io_load_1_ready_T & io_load_1_bits_bankMask[4]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 142:79]
  wire [1:0] _loadRead_T_4 = {loadThis_4_1,loadThis_4_0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 144:29]
  wire  loadRead_4 = |_loadRead_T_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 144:36]
  wire [7:0] _dataBank_4_io_r_addr_T = loadThis_4_0 ? loadIdx_0 : loadIdx_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 146:49]
  wire  writeThis_5 = io_write_valid & io_write_bits_bankMask[5]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 131:36]
  wire  lineThis_5 = _lineThis_T & io_line_bits_bankMask[5]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 139:33]
  wire  loadThis_5_0 = _loadThis_0_T & _loadGo_0_T & _io_load_0_ready_T & io_load_0_bits_bankMask[5]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 142:79]
  wire  loadThis_5_1 = _loadThis_1_T & _loadGo_1_T & _io_load_1_ready_T & io_load_1_bits_bankMask[5]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 142:79]
  wire [1:0] _loadRead_T_5 = {loadThis_5_1,loadThis_5_0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 144:29]
  wire  loadRead_5 = |_loadRead_T_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 144:36]
  wire [7:0] _dataBank_5_io_r_addr_T = loadThis_5_0 ? loadIdx_0 : loadIdx_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 146:49]
  wire  writeThis_6 = io_write_valid & io_write_bits_bankMask[6]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 131:36]
  wire  lineThis_6 = _lineThis_T & io_line_bits_bankMask[6]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 139:33]
  wire  loadThis_6_0 = _loadThis_0_T & _loadGo_0_T & _io_load_0_ready_T & io_load_0_bits_bankMask[6]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 142:79]
  wire  loadThis_6_1 = _loadThis_1_T & _loadGo_1_T & _io_load_1_ready_T & io_load_1_bits_bankMask[6]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 142:79]
  wire [1:0] _loadRead_T_6 = {loadThis_6_1,loadThis_6_0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 144:29]
  wire  loadRead_6 = |_loadRead_T_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 144:36]
  wire [7:0] _dataBank_6_io_r_addr_T = loadThis_6_0 ? loadIdx_0 : loadIdx_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 146:49]
  wire  writeThis_7 = io_write_valid & io_write_bits_bankMask[7]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 131:36]
  wire  lineThis_7 = _lineThis_T & io_line_bits_bankMask[7]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 139:33]
  wire  loadThis_7_0 = _loadThis_0_T & _loadGo_0_T & _io_load_0_ready_T & io_load_0_bits_bankMask[7]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 142:79]
  wire  loadThis_7_1 = _loadThis_1_T & _loadGo_1_T & _io_load_1_ready_T & io_load_1_bits_bankMask[7]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 142:79]
  wire [1:0] _loadRead_T_7 = {loadThis_7_1,loadThis_7_0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 144:29]
  wire  loadRead_7 = |_loadRead_T_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 144:36]
  wire [7:0] _dataBank_7_io_r_addr_T = loadThis_7_0 ? loadIdx_0 : loadIdx_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 146:49]
  reg [2:0] bank0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 152:26]
  wire [1:0] _is128_T_8 = io_load_0_bits_bankMask[0] + io_load_0_bits_bankMask[1]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 153:35]
  wire [1:0] _is128_T_10 = io_load_0_bits_bankMask[2] + io_load_0_bits_bankMask[3]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 153:35]
  wire [2:0] _is128_T_12 = _is128_T_8 + _is128_T_10; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 153:35]
  wire [1:0] _is128_T_14 = io_load_0_bits_bankMask[4] + io_load_0_bits_bankMask[5]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 153:35]
  wire [1:0] _is128_T_16 = io_load_0_bits_bankMask[6] + io_load_0_bits_bankMask[7]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 153:35]
  wire [2:0] _is128_T_18 = _is128_T_14 + _is128_T_16; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 153:35]
  wire [3:0] _is128_T_20 = _is128_T_12 + _is128_T_18; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 153:35]
  wire  _is128_T_22 = _is128_T_20 > 4'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 153:49]
  reg  is128; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 153:26]
  wire [63:0] readData_0_0 = dataBank_0_io_r_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  wire [63:0] readData_1_0 = dataBank_1_io_r_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  wire [63:0] _GEN_3 = 3'h1 == bank0 ? readData_1_0 : readData_0_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] readData_2_0 = dataBank_2_io_r_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  wire [63:0] _GEN_4 = 3'h2 == bank0 ? readData_2_0 : _GEN_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] readData_3_0 = dataBank_3_io_r_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  wire [63:0] _GEN_5 = 3'h3 == bank0 ? readData_3_0 : _GEN_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] readData_4_0 = dataBank_4_io_r_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  wire [63:0] _GEN_6 = 3'h4 == bank0 ? readData_4_0 : _GEN_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] readData_5_0 = dataBank_5_io_r_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  wire [63:0] _GEN_7 = 3'h5 == bank0 ? readData_5_0 : _GEN_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] readData_6_0 = dataBank_6_io_r_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  wire [63:0] _GEN_8 = 3'h6 == bank0 ? readData_6_0 : _GEN_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] readData_7_0 = dataBank_7_io_r_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  wire [63:0] readData_0_1 = dataBank_0_io_r_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  wire [63:0] readData_1_1 = dataBank_1_io_r_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  wire [63:0] _GEN_11 = 3'h1 == bank0 ? readData_1_1 : readData_0_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] readData_2_1 = dataBank_2_io_r_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  wire [63:0] _GEN_12 = 3'h2 == bank0 ? readData_2_1 : _GEN_11; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] readData_3_1 = dataBank_3_io_r_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  wire [63:0] _GEN_13 = 3'h3 == bank0 ? readData_3_1 : _GEN_12; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] readData_4_1 = dataBank_4_io_r_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  wire [63:0] _GEN_14 = 3'h4 == bank0 ? readData_4_1 : _GEN_13; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] readData_5_1 = dataBank_5_io_r_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  wire [63:0] _GEN_15 = 3'h5 == bank0 ? readData_5_1 : _GEN_14; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] readData_6_1 = dataBank_6_io_r_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  wire [63:0] _GEN_16 = 3'h6 == bank0 ? readData_6_1 : _GEN_15; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] readData_7_1 = dataBank_7_io_r_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  wire [63:0] readData_0_2 = dataBank_0_io_r_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  wire [63:0] readData_1_2 = dataBank_1_io_r_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  wire [63:0] _GEN_19 = 3'h1 == bank0 ? readData_1_2 : readData_0_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] readData_2_2 = dataBank_2_io_r_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  wire [63:0] _GEN_20 = 3'h2 == bank0 ? readData_2_2 : _GEN_19; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] readData_3_2 = dataBank_3_io_r_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  wire [63:0] _GEN_21 = 3'h3 == bank0 ? readData_3_2 : _GEN_20; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] readData_4_2 = dataBank_4_io_r_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  wire [63:0] _GEN_22 = 3'h4 == bank0 ? readData_4_2 : _GEN_21; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] readData_5_2 = dataBank_5_io_r_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  wire [63:0] _GEN_23 = 3'h5 == bank0 ? readData_5_2 : _GEN_22; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] readData_6_2 = dataBank_6_io_r_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  wire [63:0] _GEN_24 = 3'h6 == bank0 ? readData_6_2 : _GEN_23; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] readData_7_2 = dataBank_7_io_r_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  wire [63:0] readData_0_3 = dataBank_0_io_r_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  wire [63:0] readData_1_3 = dataBank_1_io_r_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  wire [63:0] _GEN_27 = 3'h1 == bank0 ? readData_1_3 : readData_0_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] readData_2_3 = dataBank_2_io_r_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  wire [63:0] _GEN_28 = 3'h2 == bank0 ? readData_2_3 : _GEN_27; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] readData_3_3 = dataBank_3_io_r_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  wire [63:0] _GEN_29 = 3'h3 == bank0 ? readData_3_3 : _GEN_28; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] readData_4_3 = dataBank_4_io_r_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  wire [63:0] _GEN_30 = 3'h4 == bank0 ? readData_4_3 : _GEN_29; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] readData_5_3 = dataBank_5_io_r_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  wire [63:0] _GEN_31 = 3'h5 == bank0 ? readData_5_3 : _GEN_30; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] readData_6_3 = dataBank_6_io_r_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  wire [63:0] _GEN_32 = 3'h6 == bank0 ? readData_6_3 : _GEN_31; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] readData_7_3 = dataBank_7_io_r_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  wire [2:0] _T_1 = bank0 + 3'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:46]
  wire [63:0] _GEN_35 = 3'h1 == _T_1 ? readData_1_0 : readData_0_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_36 = 3'h2 == _T_1 ? readData_2_0 : _GEN_35; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_37 = 3'h3 == _T_1 ? readData_3_0 : _GEN_36; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_38 = 3'h4 == _T_1 ? readData_4_0 : _GEN_37; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_39 = 3'h5 == _T_1 ? readData_5_0 : _GEN_38; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_40 = 3'h6 == _T_1 ? readData_6_0 : _GEN_39; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_41 = 3'h7 == _T_1 ? readData_7_0 : _GEN_40; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_43 = 3'h1 == _T_1 ? readData_1_1 : readData_0_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_44 = 3'h2 == _T_1 ? readData_2_1 : _GEN_43; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_45 = 3'h3 == _T_1 ? readData_3_1 : _GEN_44; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_46 = 3'h4 == _T_1 ? readData_4_1 : _GEN_45; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_47 = 3'h5 == _T_1 ? readData_5_1 : _GEN_46; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_48 = 3'h6 == _T_1 ? readData_6_1 : _GEN_47; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_49 = 3'h7 == _T_1 ? readData_7_1 : _GEN_48; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_51 = 3'h1 == _T_1 ? readData_1_2 : readData_0_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_52 = 3'h2 == _T_1 ? readData_2_2 : _GEN_51; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_53 = 3'h3 == _T_1 ? readData_3_2 : _GEN_52; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_54 = 3'h4 == _T_1 ? readData_4_2 : _GEN_53; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_55 = 3'h5 == _T_1 ? readData_5_2 : _GEN_54; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_56 = 3'h6 == _T_1 ? readData_6_2 : _GEN_55; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_57 = 3'h7 == _T_1 ? readData_7_2 : _GEN_56; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_59 = 3'h1 == _T_1 ? readData_1_3 : readData_0_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_60 = 3'h2 == _T_1 ? readData_2_3 : _GEN_59; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_61 = 3'h3 == _T_1 ? readData_3_3 : _GEN_60; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_62 = 3'h4 == _T_1 ? readData_4_3 : _GEN_61; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_63 = 3'h5 == _T_1 ? readData_5_3 : _GEN_62; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_64 = 3'h6 == _T_1 ? readData_6_3 : _GEN_63; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_65 = 3'h7 == _T_1 ? readData_7_3 : _GEN_64; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  reg [2:0] bank0_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 152:26]
  wire [1:0] _is128_T_31 = io_load_1_bits_bankMask[0] + io_load_1_bits_bankMask[1]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 153:35]
  wire [1:0] _is128_T_33 = io_load_1_bits_bankMask[2] + io_load_1_bits_bankMask[3]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 153:35]
  wire [2:0] _is128_T_35 = _is128_T_31 + _is128_T_33; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 153:35]
  wire [1:0] _is128_T_37 = io_load_1_bits_bankMask[4] + io_load_1_bits_bankMask[5]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 153:35]
  wire [1:0] _is128_T_39 = io_load_1_bits_bankMask[6] + io_load_1_bits_bankMask[7]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 153:35]
  wire [2:0] _is128_T_41 = _is128_T_37 + _is128_T_39; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 153:35]
  wire [3:0] _is128_T_43 = _is128_T_35 + _is128_T_41; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 153:35]
  wire  _is128_T_45 = _is128_T_43 > 4'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 153:49]
  reg  is128_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 153:26]
  wire [63:0] _GEN_73 = 3'h1 == bank0_1 ? readData_1_0 : readData_0_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] _GEN_74 = 3'h2 == bank0_1 ? readData_2_0 : _GEN_73; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] _GEN_75 = 3'h3 == bank0_1 ? readData_3_0 : _GEN_74; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] _GEN_76 = 3'h4 == bank0_1 ? readData_4_0 : _GEN_75; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] _GEN_77 = 3'h5 == bank0_1 ? readData_5_0 : _GEN_76; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] _GEN_78 = 3'h6 == bank0_1 ? readData_6_0 : _GEN_77; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] _GEN_81 = 3'h1 == bank0_1 ? readData_1_1 : readData_0_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] _GEN_82 = 3'h2 == bank0_1 ? readData_2_1 : _GEN_81; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] _GEN_83 = 3'h3 == bank0_1 ? readData_3_1 : _GEN_82; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] _GEN_84 = 3'h4 == bank0_1 ? readData_4_1 : _GEN_83; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] _GEN_85 = 3'h5 == bank0_1 ? readData_5_1 : _GEN_84; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] _GEN_86 = 3'h6 == bank0_1 ? readData_6_1 : _GEN_85; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] _GEN_89 = 3'h1 == bank0_1 ? readData_1_2 : readData_0_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] _GEN_90 = 3'h2 == bank0_1 ? readData_2_2 : _GEN_89; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] _GEN_91 = 3'h3 == bank0_1 ? readData_3_2 : _GEN_90; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] _GEN_92 = 3'h4 == bank0_1 ? readData_4_2 : _GEN_91; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] _GEN_93 = 3'h5 == bank0_1 ? readData_5_2 : _GEN_92; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] _GEN_94 = 3'h6 == bank0_1 ? readData_6_2 : _GEN_93; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] _GEN_97 = 3'h1 == bank0_1 ? readData_1_3 : readData_0_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] _GEN_98 = 3'h2 == bank0_1 ? readData_2_3 : _GEN_97; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] _GEN_99 = 3'h3 == bank0_1 ? readData_3_3 : _GEN_98; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] _GEN_100 = 3'h4 == bank0_1 ? readData_4_3 : _GEN_99; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] _GEN_101 = 3'h5 == bank0_1 ? readData_5_3 : _GEN_100; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [63:0] _GEN_102 = 3'h6 == bank0_1 ? readData_6_3 : _GEN_101; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  wire [2:0] _T_4 = bank0_1 + 3'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:46]
  wire [63:0] _GEN_105 = 3'h1 == _T_4 ? readData_1_0 : readData_0_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_106 = 3'h2 == _T_4 ? readData_2_0 : _GEN_105; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_107 = 3'h3 == _T_4 ? readData_3_0 : _GEN_106; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_108 = 3'h4 == _T_4 ? readData_4_0 : _GEN_107; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_109 = 3'h5 == _T_4 ? readData_5_0 : _GEN_108; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_110 = 3'h6 == _T_4 ? readData_6_0 : _GEN_109; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_111 = 3'h7 == _T_4 ? readData_7_0 : _GEN_110; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_113 = 3'h1 == _T_4 ? readData_1_1 : readData_0_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_114 = 3'h2 == _T_4 ? readData_2_1 : _GEN_113; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_115 = 3'h3 == _T_4 ? readData_3_1 : _GEN_114; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_116 = 3'h4 == _T_4 ? readData_4_1 : _GEN_115; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_117 = 3'h5 == _T_4 ? readData_5_1 : _GEN_116; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_118 = 3'h6 == _T_4 ? readData_6_1 : _GEN_117; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_119 = 3'h7 == _T_4 ? readData_7_1 : _GEN_118; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_121 = 3'h1 == _T_4 ? readData_1_2 : readData_0_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_122 = 3'h2 == _T_4 ? readData_2_2 : _GEN_121; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_123 = 3'h3 == _T_4 ? readData_3_2 : _GEN_122; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_124 = 3'h4 == _T_4 ? readData_4_2 : _GEN_123; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_125 = 3'h5 == _T_4 ? readData_5_2 : _GEN_124; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_126 = 3'h6 == _T_4 ? readData_6_2 : _GEN_125; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_127 = 3'h7 == _T_4 ? readData_7_2 : _GEN_126; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_129 = 3'h1 == _T_4 ? readData_1_3 : readData_0_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_130 = 3'h2 == _T_4 ? readData_2_3 : _GEN_129; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_131 = 3'h3 == _T_4 ? readData_3_3 : _GEN_130; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_132 = 3'h4 == _T_4 ? readData_4_3 : _GEN_131; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_133 = 3'h5 == _T_4 ? readData_5_3 : _GEN_132; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_134 = 3'h6 == _T_4 ? readData_6_3 : _GEN_133; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  wire [63:0] _GEN_135 = 3'h7 == _T_4 ? readData_7_3 : _GEN_134; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 156:{28,28}]
  reg  io_lineResp_valid_REG; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 163:31]
  wire [1:0] _T_11 = io_write_bits_wayEn[0] + io_write_bits_wayEn[1]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 167:37]
  wire [1:0] _T_13 = io_write_bits_wayEn[2] + io_write_bits_wayEn[3]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 167:37]
  wire [2:0] _T_15 = _T_11 + _T_13; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 167:37]
  wire  _T_20 = ~reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 167:9]
  wire  is128_2 = io_load_0_valid & _is128_T_22; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 170:34]
  wire  is128_3 = io_load_1_valid & _is128_T_45; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 170:34]
  SRAMTemplate_6 dataBank_0 ( // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
    .clock(dataBank_0_clock),
    .io_r_en(dataBank_0_io_r_en),
    .io_r_addr(dataBank_0_io_r_addr),
    .io_r_data_0(dataBank_0_io_r_data_0),
    .io_r_data_1(dataBank_0_io_r_data_1),
    .io_r_data_2(dataBank_0_io_r_data_2),
    .io_r_data_3(dataBank_0_io_r_data_3),
    .io_w_en(dataBank_0_io_w_en),
    .io_w_addr(dataBank_0_io_w_addr),
    .io_w_data_0(dataBank_0_io_w_data_0),
    .io_w_data_1(dataBank_0_io_w_data_1),
    .io_w_data_2(dataBank_0_io_w_data_2),
    .io_w_data_3(dataBank_0_io_w_data_3),
    .io_w_mask_0(dataBank_0_io_w_mask_0),
    .io_w_mask_1(dataBank_0_io_w_mask_1),
    .io_w_mask_2(dataBank_0_io_w_mask_2),
    .io_w_mask_3(dataBank_0_io_w_mask_3)
  );
  SRAMTemplate_6 dataBank_1 ( // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
    .clock(dataBank_1_clock),
    .io_r_en(dataBank_1_io_r_en),
    .io_r_addr(dataBank_1_io_r_addr),
    .io_r_data_0(dataBank_1_io_r_data_0),
    .io_r_data_1(dataBank_1_io_r_data_1),
    .io_r_data_2(dataBank_1_io_r_data_2),
    .io_r_data_3(dataBank_1_io_r_data_3),
    .io_w_en(dataBank_1_io_w_en),
    .io_w_addr(dataBank_1_io_w_addr),
    .io_w_data_0(dataBank_1_io_w_data_0),
    .io_w_data_1(dataBank_1_io_w_data_1),
    .io_w_data_2(dataBank_1_io_w_data_2),
    .io_w_data_3(dataBank_1_io_w_data_3),
    .io_w_mask_0(dataBank_1_io_w_mask_0),
    .io_w_mask_1(dataBank_1_io_w_mask_1),
    .io_w_mask_2(dataBank_1_io_w_mask_2),
    .io_w_mask_3(dataBank_1_io_w_mask_3)
  );
  SRAMTemplate_6 dataBank_2 ( // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
    .clock(dataBank_2_clock),
    .io_r_en(dataBank_2_io_r_en),
    .io_r_addr(dataBank_2_io_r_addr),
    .io_r_data_0(dataBank_2_io_r_data_0),
    .io_r_data_1(dataBank_2_io_r_data_1),
    .io_r_data_2(dataBank_2_io_r_data_2),
    .io_r_data_3(dataBank_2_io_r_data_3),
    .io_w_en(dataBank_2_io_w_en),
    .io_w_addr(dataBank_2_io_w_addr),
    .io_w_data_0(dataBank_2_io_w_data_0),
    .io_w_data_1(dataBank_2_io_w_data_1),
    .io_w_data_2(dataBank_2_io_w_data_2),
    .io_w_data_3(dataBank_2_io_w_data_3),
    .io_w_mask_0(dataBank_2_io_w_mask_0),
    .io_w_mask_1(dataBank_2_io_w_mask_1),
    .io_w_mask_2(dataBank_2_io_w_mask_2),
    .io_w_mask_3(dataBank_2_io_w_mask_3)
  );
  SRAMTemplate_6 dataBank_3 ( // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
    .clock(dataBank_3_clock),
    .io_r_en(dataBank_3_io_r_en),
    .io_r_addr(dataBank_3_io_r_addr),
    .io_r_data_0(dataBank_3_io_r_data_0),
    .io_r_data_1(dataBank_3_io_r_data_1),
    .io_r_data_2(dataBank_3_io_r_data_2),
    .io_r_data_3(dataBank_3_io_r_data_3),
    .io_w_en(dataBank_3_io_w_en),
    .io_w_addr(dataBank_3_io_w_addr),
    .io_w_data_0(dataBank_3_io_w_data_0),
    .io_w_data_1(dataBank_3_io_w_data_1),
    .io_w_data_2(dataBank_3_io_w_data_2),
    .io_w_data_3(dataBank_3_io_w_data_3),
    .io_w_mask_0(dataBank_3_io_w_mask_0),
    .io_w_mask_1(dataBank_3_io_w_mask_1),
    .io_w_mask_2(dataBank_3_io_w_mask_2),
    .io_w_mask_3(dataBank_3_io_w_mask_3)
  );
  SRAMTemplate_6 dataBank_4 ( // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
    .clock(dataBank_4_clock),
    .io_r_en(dataBank_4_io_r_en),
    .io_r_addr(dataBank_4_io_r_addr),
    .io_r_data_0(dataBank_4_io_r_data_0),
    .io_r_data_1(dataBank_4_io_r_data_1),
    .io_r_data_2(dataBank_4_io_r_data_2),
    .io_r_data_3(dataBank_4_io_r_data_3),
    .io_w_en(dataBank_4_io_w_en),
    .io_w_addr(dataBank_4_io_w_addr),
    .io_w_data_0(dataBank_4_io_w_data_0),
    .io_w_data_1(dataBank_4_io_w_data_1),
    .io_w_data_2(dataBank_4_io_w_data_2),
    .io_w_data_3(dataBank_4_io_w_data_3),
    .io_w_mask_0(dataBank_4_io_w_mask_0),
    .io_w_mask_1(dataBank_4_io_w_mask_1),
    .io_w_mask_2(dataBank_4_io_w_mask_2),
    .io_w_mask_3(dataBank_4_io_w_mask_3)
  );
  SRAMTemplate_6 dataBank_5 ( // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
    .clock(dataBank_5_clock),
    .io_r_en(dataBank_5_io_r_en),
    .io_r_addr(dataBank_5_io_r_addr),
    .io_r_data_0(dataBank_5_io_r_data_0),
    .io_r_data_1(dataBank_5_io_r_data_1),
    .io_r_data_2(dataBank_5_io_r_data_2),
    .io_r_data_3(dataBank_5_io_r_data_3),
    .io_w_en(dataBank_5_io_w_en),
    .io_w_addr(dataBank_5_io_w_addr),
    .io_w_data_0(dataBank_5_io_w_data_0),
    .io_w_data_1(dataBank_5_io_w_data_1),
    .io_w_data_2(dataBank_5_io_w_data_2),
    .io_w_data_3(dataBank_5_io_w_data_3),
    .io_w_mask_0(dataBank_5_io_w_mask_0),
    .io_w_mask_1(dataBank_5_io_w_mask_1),
    .io_w_mask_2(dataBank_5_io_w_mask_2),
    .io_w_mask_3(dataBank_5_io_w_mask_3)
  );
  SRAMTemplate_6 dataBank_6 ( // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
    .clock(dataBank_6_clock),
    .io_r_en(dataBank_6_io_r_en),
    .io_r_addr(dataBank_6_io_r_addr),
    .io_r_data_0(dataBank_6_io_r_data_0),
    .io_r_data_1(dataBank_6_io_r_data_1),
    .io_r_data_2(dataBank_6_io_r_data_2),
    .io_r_data_3(dataBank_6_io_r_data_3),
    .io_w_en(dataBank_6_io_w_en),
    .io_w_addr(dataBank_6_io_w_addr),
    .io_w_data_0(dataBank_6_io_w_data_0),
    .io_w_data_1(dataBank_6_io_w_data_1),
    .io_w_data_2(dataBank_6_io_w_data_2),
    .io_w_data_3(dataBank_6_io_w_data_3),
    .io_w_mask_0(dataBank_6_io_w_mask_0),
    .io_w_mask_1(dataBank_6_io_w_mask_1),
    .io_w_mask_2(dataBank_6_io_w_mask_2),
    .io_w_mask_3(dataBank_6_io_w_mask_3)
  );
  SRAMTemplate_6 dataBank_7 ( // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 73:22]
    .clock(dataBank_7_clock),
    .io_r_en(dataBank_7_io_r_en),
    .io_r_addr(dataBank_7_io_r_addr),
    .io_r_data_0(dataBank_7_io_r_data_0),
    .io_r_data_1(dataBank_7_io_r_data_1),
    .io_r_data_2(dataBank_7_io_r_data_2),
    .io_r_data_3(dataBank_7_io_r_data_3),
    .io_w_en(dataBank_7_io_w_en),
    .io_w_addr(dataBank_7_io_w_addr),
    .io_w_data_0(dataBank_7_io_w_data_0),
    .io_w_data_1(dataBank_7_io_w_data_1),
    .io_w_data_2(dataBank_7_io_w_data_2),
    .io_w_data_3(dataBank_7_io_w_data_3),
    .io_w_mask_0(dataBank_7_io_w_mask_0),
    .io_w_mask_1(dataBank_7_io_w_mask_1),
    .io_w_mask_2(dataBank_7_io_w_mask_2),
    .io_w_mask_3(dataBank_7_io_w_mask_3)
  );
  assign io_load_0_ready = io_load_0_bits_kill | ~conflict_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 121:30]
  assign io_load_1_ready = io_load_1_bits_kill | ~conflict_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 121:30]
  assign io_bankConflict_0 = loadGo_0 & (writeBlock_0 | lineBlock_0 | loadBlock_0); // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 119:30]
  assign io_bankConflict_1 = loadGo_1 & (writeBlock_1 | lineBlock_1 | loadBlock_1); // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 119:30]
  assign io_loadResp_0_0_data_0 = 3'h7 == bank0 ? readData_7_0 : _GEN_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  assign io_loadResp_0_0_data_1 = 3'h7 == bank0 ? readData_7_1 : _GEN_16; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  assign io_loadResp_0_0_data_2 = 3'h7 == bank0 ? readData_7_2 : _GEN_24; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  assign io_loadResp_0_0_data_3 = 3'h7 == bank0 ? readData_7_3 : _GEN_32; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  assign io_loadResp_0_1_data_0 = ~is128 ? 64'h0 : _GEN_41; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 157:18 156:28 158:40]
  assign io_loadResp_0_1_data_1 = ~is128 ? 64'h0 : _GEN_49; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 157:18 156:28 158:40]
  assign io_loadResp_0_1_data_2 = ~is128 ? 64'h0 : _GEN_57; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 157:18 156:28 158:40]
  assign io_loadResp_0_1_data_3 = ~is128 ? 64'h0 : _GEN_65; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 157:18 156:28 158:40]
  assign io_loadResp_1_0_data_0 = 3'h7 == bank0_1 ? readData_7_0 : _GEN_78; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  assign io_loadResp_1_0_data_1 = 3'h7 == bank0_1 ? readData_7_1 : _GEN_86; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  assign io_loadResp_1_0_data_2 = 3'h7 == bank0_1 ? readData_7_2 : _GEN_94; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  assign io_loadResp_1_0_data_3 = 3'h7 == bank0_1 ? readData_7_3 : _GEN_102; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 155:{28,28}]
  assign io_loadResp_1_1_data_0 = ~is128_1 ? 64'h0 : _GEN_111; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 157:18 156:28 158:40]
  assign io_loadResp_1_1_data_1 = ~is128_1 ? 64'h0 : _GEN_119; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 157:18 156:28 158:40]
  assign io_loadResp_1_1_data_2 = ~is128_1 ? 64'h0 : _GEN_127; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 157:18 156:28 158:40]
  assign io_loadResp_1_1_data_3 = ~is128_1 ? 64'h0 : _GEN_135; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 157:18 156:28 158:40]
  assign io_line_ready = ~_io_line_ready_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 126:20]
  assign io_lineResp_valid = io_lineResp_valid_REG; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 163:21]
  assign io_lineResp_bits_data_0_0 = dataBank_0_io_r_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  assign io_lineResp_bits_data_0_1 = dataBank_0_io_r_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  assign io_lineResp_bits_data_0_2 = dataBank_0_io_r_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  assign io_lineResp_bits_data_0_3 = dataBank_0_io_r_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  assign io_lineResp_bits_data_1_0 = dataBank_1_io_r_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  assign io_lineResp_bits_data_1_1 = dataBank_1_io_r_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  assign io_lineResp_bits_data_1_2 = dataBank_1_io_r_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  assign io_lineResp_bits_data_1_3 = dataBank_1_io_r_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  assign io_lineResp_bits_data_2_0 = dataBank_2_io_r_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  assign io_lineResp_bits_data_2_1 = dataBank_2_io_r_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  assign io_lineResp_bits_data_2_2 = dataBank_2_io_r_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  assign io_lineResp_bits_data_2_3 = dataBank_2_io_r_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  assign io_lineResp_bits_data_3_0 = dataBank_3_io_r_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  assign io_lineResp_bits_data_3_1 = dataBank_3_io_r_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  assign io_lineResp_bits_data_3_2 = dataBank_3_io_r_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  assign io_lineResp_bits_data_3_3 = dataBank_3_io_r_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  assign io_lineResp_bits_data_4_0 = dataBank_4_io_r_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  assign io_lineResp_bits_data_4_1 = dataBank_4_io_r_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  assign io_lineResp_bits_data_4_2 = dataBank_4_io_r_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  assign io_lineResp_bits_data_4_3 = dataBank_4_io_r_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  assign io_lineResp_bits_data_5_0 = dataBank_5_io_r_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  assign io_lineResp_bits_data_5_1 = dataBank_5_io_r_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  assign io_lineResp_bits_data_5_2 = dataBank_5_io_r_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  assign io_lineResp_bits_data_5_3 = dataBank_5_io_r_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  assign io_lineResp_bits_data_6_0 = dataBank_6_io_r_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  assign io_lineResp_bits_data_6_1 = dataBank_6_io_r_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  assign io_lineResp_bits_data_6_2 = dataBank_6_io_r_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  assign io_lineResp_bits_data_6_3 = dataBank_6_io_r_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  assign io_lineResp_bits_data_7_0 = dataBank_7_io_r_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  assign io_lineResp_bits_data_7_1 = dataBank_7_io_r_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  assign io_lineResp_bits_data_7_2 = dataBank_7_io_r_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  assign io_lineResp_bits_data_7_3 = dataBank_7_io_r_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 149:{25,25}]
  assign dataBank_0_clock = clock;
  assign dataBank_0_io_r_en = ~writeThis & (lineThis | loadRead); // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 145:32]
  assign dataBank_0_io_r_addr = lineThis ? lineIdx : _dataBank_0_io_r_addr_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 146:26]
  assign dataBank_0_io_w_en = io_write_valid & io_write_bits_bankMask[0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 131:36]
  assign dataBank_0_io_w_addr = io_write_bits_addr[13:6]; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 187:9]
  assign dataBank_0_io_w_data_0 = io_write_bits_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 135:25]
  assign dataBank_0_io_w_data_1 = io_write_bits_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 135:25]
  assign dataBank_0_io_w_data_2 = io_write_bits_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 135:25]
  assign dataBank_0_io_w_data_3 = io_write_bits_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 135:25]
  assign dataBank_0_io_w_mask_0 = io_write_bits_wayEn[0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 136:51]
  assign dataBank_0_io_w_mask_1 = io_write_bits_wayEn[1]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 136:51]
  assign dataBank_0_io_w_mask_2 = io_write_bits_wayEn[2]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 136:51]
  assign dataBank_0_io_w_mask_3 = io_write_bits_wayEn[3]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 136:51]
  assign dataBank_1_clock = clock;
  assign dataBank_1_io_r_en = ~writeThis_1 & (lineThis_1 | loadRead_1); // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 145:32]
  assign dataBank_1_io_r_addr = lineThis_1 ? lineIdx : _dataBank_1_io_r_addr_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 146:26]
  assign dataBank_1_io_w_en = io_write_valid & io_write_bits_bankMask[1]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 131:36]
  assign dataBank_1_io_w_addr = io_write_bits_addr[13:6]; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 187:9]
  assign dataBank_1_io_w_data_0 = io_write_bits_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 135:25]
  assign dataBank_1_io_w_data_1 = io_write_bits_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 135:25]
  assign dataBank_1_io_w_data_2 = io_write_bits_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 135:25]
  assign dataBank_1_io_w_data_3 = io_write_bits_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 135:25]
  assign dataBank_1_io_w_mask_0 = io_write_bits_wayEn[0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 136:51]
  assign dataBank_1_io_w_mask_1 = io_write_bits_wayEn[1]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 136:51]
  assign dataBank_1_io_w_mask_2 = io_write_bits_wayEn[2]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 136:51]
  assign dataBank_1_io_w_mask_3 = io_write_bits_wayEn[3]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 136:51]
  assign dataBank_2_clock = clock;
  assign dataBank_2_io_r_en = ~writeThis_2 & (lineThis_2 | loadRead_2); // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 145:32]
  assign dataBank_2_io_r_addr = lineThis_2 ? lineIdx : _dataBank_2_io_r_addr_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 146:26]
  assign dataBank_2_io_w_en = io_write_valid & io_write_bits_bankMask[2]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 131:36]
  assign dataBank_2_io_w_addr = io_write_bits_addr[13:6]; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 187:9]
  assign dataBank_2_io_w_data_0 = io_write_bits_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 135:25]
  assign dataBank_2_io_w_data_1 = io_write_bits_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 135:25]
  assign dataBank_2_io_w_data_2 = io_write_bits_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 135:25]
  assign dataBank_2_io_w_data_3 = io_write_bits_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 135:25]
  assign dataBank_2_io_w_mask_0 = io_write_bits_wayEn[0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 136:51]
  assign dataBank_2_io_w_mask_1 = io_write_bits_wayEn[1]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 136:51]
  assign dataBank_2_io_w_mask_2 = io_write_bits_wayEn[2]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 136:51]
  assign dataBank_2_io_w_mask_3 = io_write_bits_wayEn[3]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 136:51]
  assign dataBank_3_clock = clock;
  assign dataBank_3_io_r_en = ~writeThis_3 & (lineThis_3 | loadRead_3); // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 145:32]
  assign dataBank_3_io_r_addr = lineThis_3 ? lineIdx : _dataBank_3_io_r_addr_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 146:26]
  assign dataBank_3_io_w_en = io_write_valid & io_write_bits_bankMask[3]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 131:36]
  assign dataBank_3_io_w_addr = io_write_bits_addr[13:6]; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 187:9]
  assign dataBank_3_io_w_data_0 = io_write_bits_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 135:25]
  assign dataBank_3_io_w_data_1 = io_write_bits_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 135:25]
  assign dataBank_3_io_w_data_2 = io_write_bits_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 135:25]
  assign dataBank_3_io_w_data_3 = io_write_bits_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 135:25]
  assign dataBank_3_io_w_mask_0 = io_write_bits_wayEn[0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 136:51]
  assign dataBank_3_io_w_mask_1 = io_write_bits_wayEn[1]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 136:51]
  assign dataBank_3_io_w_mask_2 = io_write_bits_wayEn[2]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 136:51]
  assign dataBank_3_io_w_mask_3 = io_write_bits_wayEn[3]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 136:51]
  assign dataBank_4_clock = clock;
  assign dataBank_4_io_r_en = ~writeThis_4 & (lineThis_4 | loadRead_4); // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 145:32]
  assign dataBank_4_io_r_addr = lineThis_4 ? lineIdx : _dataBank_4_io_r_addr_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 146:26]
  assign dataBank_4_io_w_en = io_write_valid & io_write_bits_bankMask[4]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 131:36]
  assign dataBank_4_io_w_addr = io_write_bits_addr[13:6]; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 187:9]
  assign dataBank_4_io_w_data_0 = io_write_bits_data_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 135:25]
  assign dataBank_4_io_w_data_1 = io_write_bits_data_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 135:25]
  assign dataBank_4_io_w_data_2 = io_write_bits_data_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 135:25]
  assign dataBank_4_io_w_data_3 = io_write_bits_data_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 135:25]
  assign dataBank_4_io_w_mask_0 = io_write_bits_wayEn[0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 136:51]
  assign dataBank_4_io_w_mask_1 = io_write_bits_wayEn[1]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 136:51]
  assign dataBank_4_io_w_mask_2 = io_write_bits_wayEn[2]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 136:51]
  assign dataBank_4_io_w_mask_3 = io_write_bits_wayEn[3]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 136:51]
  assign dataBank_5_clock = clock;
  assign dataBank_5_io_r_en = ~writeThis_5 & (lineThis_5 | loadRead_5); // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 145:32]
  assign dataBank_5_io_r_addr = lineThis_5 ? lineIdx : _dataBank_5_io_r_addr_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 146:26]
  assign dataBank_5_io_w_en = io_write_valid & io_write_bits_bankMask[5]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 131:36]
  assign dataBank_5_io_w_addr = io_write_bits_addr[13:6]; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 187:9]
  assign dataBank_5_io_w_data_0 = io_write_bits_data_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 135:25]
  assign dataBank_5_io_w_data_1 = io_write_bits_data_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 135:25]
  assign dataBank_5_io_w_data_2 = io_write_bits_data_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 135:25]
  assign dataBank_5_io_w_data_3 = io_write_bits_data_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 135:25]
  assign dataBank_5_io_w_mask_0 = io_write_bits_wayEn[0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 136:51]
  assign dataBank_5_io_w_mask_1 = io_write_bits_wayEn[1]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 136:51]
  assign dataBank_5_io_w_mask_2 = io_write_bits_wayEn[2]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 136:51]
  assign dataBank_5_io_w_mask_3 = io_write_bits_wayEn[3]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 136:51]
  assign dataBank_6_clock = clock;
  assign dataBank_6_io_r_en = ~writeThis_6 & (lineThis_6 | loadRead_6); // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 145:32]
  assign dataBank_6_io_r_addr = lineThis_6 ? lineIdx : _dataBank_6_io_r_addr_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 146:26]
  assign dataBank_6_io_w_en = io_write_valid & io_write_bits_bankMask[6]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 131:36]
  assign dataBank_6_io_w_addr = io_write_bits_addr[13:6]; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 187:9]
  assign dataBank_6_io_w_data_0 = io_write_bits_data_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 135:25]
  assign dataBank_6_io_w_data_1 = io_write_bits_data_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 135:25]
  assign dataBank_6_io_w_data_2 = io_write_bits_data_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 135:25]
  assign dataBank_6_io_w_data_3 = io_write_bits_data_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 135:25]
  assign dataBank_6_io_w_mask_0 = io_write_bits_wayEn[0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 136:51]
  assign dataBank_6_io_w_mask_1 = io_write_bits_wayEn[1]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 136:51]
  assign dataBank_6_io_w_mask_2 = io_write_bits_wayEn[2]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 136:51]
  assign dataBank_6_io_w_mask_3 = io_write_bits_wayEn[3]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 136:51]
  assign dataBank_7_clock = clock;
  assign dataBank_7_io_r_en = ~writeThis_7 & (lineThis_7 | loadRead_7); // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 145:32]
  assign dataBank_7_io_r_addr = lineThis_7 ? lineIdx : _dataBank_7_io_r_addr_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 146:26]
  assign dataBank_7_io_w_en = io_write_valid & io_write_bits_bankMask[7]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 131:36]
  assign dataBank_7_io_w_addr = io_write_bits_addr[13:6]; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 187:9]
  assign dataBank_7_io_w_data_0 = io_write_bits_data_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 135:25]
  assign dataBank_7_io_w_data_1 = io_write_bits_data_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 135:25]
  assign dataBank_7_io_w_data_2 = io_write_bits_data_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 135:25]
  assign dataBank_7_io_w_data_3 = io_write_bits_data_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 135:25]
  assign dataBank_7_io_w_mask_0 = io_write_bits_wayEn[0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 136:51]
  assign dataBank_7_io_w_mask_1 = io_write_bits_wayEn[1]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 136:51]
  assign dataBank_7_io_w_mask_2 = io_write_bits_wayEn[2]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 136:51]
  assign dataBank_7_io_w_mask_3 = io_write_bits_wayEn[3]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 136:51]
  always @(posedge clock) begin
    if (_loadThis_0_T_4) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 152:26]
      bank0 <= loadBank0_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 152:26]
    end
    if (_loadThis_0_T_4) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 153:26]
      is128 <= _is128_T_20 > 4'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 153:26]
    end
    if (_loadThis_1_T_4) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 152:26]
      bank0_1 <= loadBank0_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 152:26]
    end
    if (_loadThis_1_T_4) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 153:26]
      is128_1 <= _is128_T_43 > 4'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 153:26]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 163:31]
      io_lineResp_valid_REG <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 163:31]
    end else begin
      io_lineResp_valid_REG <= _lineThis_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 163:31]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(~io_write_valid | _T_15 <= 3'h1)) begin
          $fwrite(32'h80000002,
            "Assertion failed: data write must select at most one way\n    at BankedDataArray.scala:167 assert(!io.write.valid || PopCount(io.write.bits.wayEn) <= 1.U,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 167:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(~io_write_valid | _T_15 <= 3'h1)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 167:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_20 & ~(~is128_2 | loadBank0_0 != 3'h7)) begin
          $fwrite(32'h80000002,
            "Assertion failed: 128-bit data read must not cross a cache line\n    at BankedDataArray.scala:171 assert(!is128 || loadBank0(i) =/= (DCacheBanks - 1).U,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 171:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_20 & ~(~is128_2 | loadBank0_0 != 3'h7)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 171:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_20 & ~(~is128_3 | loadBank0_1 != 3'h7)) begin
          $fwrite(32'h80000002,
            "Assertion failed: 128-bit data read must not cross a cache line\n    at BankedDataArray.scala:171 assert(!is128 || loadBank0(i) =/= (DCacheBanks - 1).U,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 171:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_20 & ~(~is128_3 | loadBank0_1 != 3'h7)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/Data/BankedDataArray.scala 171:11]
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
  bank0 = _RAND_0[2:0];
  _RAND_1 = {1{`RANDOM}};
  is128 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  bank0_1 = _RAND_2[2:0];
  _RAND_3 = {1{`RANDOM}};
  is128_1 = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  io_lineResp_valid_REG = _RAND_4[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
