module LoadPipe(
  input          clock,
  input          reset,
  output         io_lsu_req_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input          io_lsu_req_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input  [4:0]   io_lsu_req_bits_cmd, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input  [47:0]  io_lsu_req_bits_vaddr, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input  [5:0]   io_lsu_req_bits_id, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input          io_lsu_req_bits_isFirstIssue, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input          io_lsu_req_bits_lqIdx_flag, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input  [3:0]   io_lsu_req_bits_lqIdx_value, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input          io_lsu_resp_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output         io_lsu_resp_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output [127:0] io_lsu_resp_bits_data, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output [5:0]   io_lsu_resp_bits_id, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output         io_lsu_resp_bits_miss, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output         io_lsu_resp_bits_replay, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output [3:0]   io_lsu_resp_bits_replayCarry_real_way_en, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output         io_lsu_resp_bits_replayCarry_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output [3:0]   io_lsu_resp_bits_mshr_id, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output         io_lsu_resp_bits_handled, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output         io_lsu_resp_bits_real_miss, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output         io_lsu_resp_bits_replacementUpdated, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input          io_lsu_s1_kill, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input          io_lsu_s2_kill, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input          io_lsu_is128Req, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input  [47:0]  io_lsu_s1_paddr_dup_lsu, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input  [47:0]  io_lsu_s1_paddr_dup_dcache, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output         io_lsu_s1_disable_fast_wakeup, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output         io_lsu_s2_hit, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output         io_lsu_s2_first_hit, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output         io_lsu_s2_bank_conflict, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output         io_lsu_s2_mq_nack, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output         io_meta_read_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output [7:0]   io_meta_read_bits_idx, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input  [1:0]   io_meta_resp_0_coh, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input  [1:0]   io_meta_resp_1_coh, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input  [1:0]   io_meta_resp_2_coh, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input  [1:0]   io_meta_resp_3_coh, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input          io_tag_read_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output         io_tag_read_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output [7:0]   io_tag_read_bits_idx, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input  [35:0]  io_tag_resp_0, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input  [35:0]  io_tag_resp_1, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input  [35:0]  io_tag_resp_2, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input  [35:0]  io_tag_resp_3, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input          io_banked_data_read_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output         io_banked_data_read_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output [47:0]  io_banked_data_read_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output [7:0]   io_banked_data_read_bits_bankMask, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output         io_banked_data_read_bits_kill, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output         io_banked_data_read_bits_lqIdx_flag, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output [3:0]   io_banked_data_read_bits_lqIdx_value, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input  [63:0]  io_banked_data_resp_0_data_0, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input  [63:0]  io_banked_data_resp_0_data_1, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input  [63:0]  io_banked_data_resp_0_data_2, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input  [63:0]  io_banked_data_resp_0_data_3, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input  [63:0]  io_banked_data_resp_1_data_0, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input  [63:0]  io_banked_data_resp_1_data_1, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input  [63:0]  io_banked_data_resp_1_data_2, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input  [63:0]  io_banked_data_resp_1_data_3, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input          io_bank_conflict, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input          io_miss_req_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output         io_miss_req_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output [3:0]   io_miss_req_bits_source, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output [4:0]   io_miss_req_bits_cmd, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output [47:0]  io_miss_req_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output [47:0]  io_miss_req_bits_vaddr, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output [5:0]   io_miss_req_bits_id, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output         io_miss_req_bits_scToUnique, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output [3:0]   io_miss_req_bits_occupy_way, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input  [3:0]   io_miss_resp_id, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input          io_miss_resp_handled, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output         io_wbq_conflict_check_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output [47:0]  io_wbq_conflict_check_bits, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input          io_wbq_block_miss_req, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output         io_replace_access_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output [7:0]   io_replace_access_bits_set, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output [1:0]   io_replace_access_bits_way, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output         io_unique_occupy_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output [7:0]   io_unique_occupy_set, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  input          io_unique_occupy_fail, // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
  output         io_busy // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 48:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [63:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [63:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
`endif // RANDOMIZE_REG_INIT
  wire  _T_1 = ~reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 51:9]
  reg  s1_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 77:25]
  wire  _s1_ready_T = ~s1_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 114:15]
  wire  s1_squash = s1_valid & io_lsu_s1_kill; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 112:28]
  wire  _s1_go_T_1 = s1_valid & ~io_lsu_s1_kill; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 113:24]
  wire  _s1_tag_way_T_14 = io_meta_resp_3_coh != 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/MetaArray.scala 29:27]
  wire  _s1_tag_way_T_15 = io_tag_resp_3 == io_lsu_s1_paddr_dup_dcache[47:12] & _s1_tag_way_T_14; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 86:42]
  wire  _s1_tag_way_T_10 = io_meta_resp_2_coh != 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/MetaArray.scala 29:27]
  wire  _s1_tag_way_T_11 = io_tag_resp_2 == io_lsu_s1_paddr_dup_dcache[47:12] & _s1_tag_way_T_10; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 86:42]
  wire  _s1_tag_way_T_6 = io_meta_resp_1_coh != 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/MetaArray.scala 29:27]
  wire  _s1_tag_way_T_7 = io_tag_resp_1 == io_lsu_s1_paddr_dup_dcache[47:12] & _s1_tag_way_T_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 86:42]
  wire  _s1_tag_way_T_2 = io_meta_resp_0_coh != 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/MetaArray.scala 29:27]
  wire  _s1_tag_way_T_3 = io_tag_resp_0 == io_lsu_s1_paddr_dup_dcache[47:12] & _s1_tag_way_T_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 86:42]
  wire [3:0] s1_tag_way = {_s1_tag_way_T_15,_s1_tag_way_T_11,_s1_tag_way_T_7,_s1_tag_way_T_3}; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 87:6]
  wire  s1_tag_hit = |s1_tag_way; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 88:31]
  reg [4:0] s1_req_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 78:25]
  wire  s1_prefetch_w = s1_req_cmd == 5'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 90:34]
  wire [1:0] _s1_meta_T_4 = s1_tag_way[0] ? io_meta_resp_0_coh : 2'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [1:0] _s1_meta_T_5 = s1_tag_way[1] ? io_meta_resp_1_coh : 2'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [1:0] _s1_meta_T_8 = _s1_meta_T_4 | _s1_meta_T_5; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [1:0] _s1_meta_T_6 = s1_tag_way[2] ? io_meta_resp_2_coh : 2'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [1:0] _s1_meta_T_9 = _s1_meta_T_8 | _s1_meta_T_6; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [1:0] _s1_meta_T_7 = s1_tag_way[3] ? io_meta_resp_3_coh : 2'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [1:0] s1_meta_coh = _s1_meta_T_9 | _s1_meta_T_7; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire  _s1_hit_T_3 = s1_meta_coh == 2'h2 | s1_meta_coh == 2'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 61:35]
  wire  s1_hit = s1_tag_hit & (~s1_prefetch_w | _s1_hit_T_3); // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 92:27]
  wire  _s1_need_data_T_3 = s1_req_cmd == 5'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 343:35]
  wire  _s1_need_data_T_5 = s1_req_cmd == 5'h2 | s1_prefetch_w; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 343:45]
  wire  s1_need_data = _s1_go_T_1 & s1_hit & ~_s1_need_data_T_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 95:53]
  wire  _s1_bank_conflict_T = io_banked_data_read_ready & io_banked_data_read_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 57:35]
  wire  s1_bank_conflict = io_banked_data_read_valid & ~_s1_bank_conflict_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 110:52]
  wire  s1_data_ok = ~s1_need_data | s1_bank_conflict | _s1_bank_conflict_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 111:54]
  wire  s1_go = s1_valid & ~io_lsu_s1_kill & s1_data_ok; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 113:48]
  wire  s1_ready = ~s1_valid | s1_squash | s1_go; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 114:38]
  wire  _io_tag_read_valid_T = io_lsu_req_valid & s1_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 64:41]
  wire  s0_fire = io_lsu_req_ready & io_lsu_req_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 57:35]
  wire [2:0] s0_bank = io_lsu_req_bits_vaddr[5:3]; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 173:9]
  reg [47:0] s1_req_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 78:25]
  reg [5:0] s1_req_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 78:25]
  reg  s1_req_isFirstIssue; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 78:25]
  reg  s1_req_lqIdx_flag; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 78:25]
  reg [3:0] s1_req_lqIdx_value; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 78:25]
  reg  s1_is128; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 79:27]
  reg [2:0] s1_bank; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 81:26]
  wire  _s1_upgrade_T_1 = ~s1_hit; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 93:51]
  wire  s1_upgrade = s1_tag_hit & s1_prefetch_w & ~s1_hit; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 93:48]
  wire [7:0] s1_bank_oh = 8'h1 << s1_bank; // @[src/main/scala/chisel3/util/OneHot.scala 65:12]
  wire [8:0] _s1_bank_mask_T = {s1_bank_oh, 1'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 98:49]
  wire [7:0] _s1_bank_mask_T_2 = _s1_bank_mask_T[7:0] | s1_bank_oh; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 98:75]
  wire  _GEN_15 = s1_squash | s1_go ? 1'h0 : s1_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 117:{35,46} 77:25]
  wire  _GEN_16 = s0_fire | _GEN_15; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 116:{17,28}]
  wire  _T_5 = _s1_ready_T | io_lsu_s1_kill; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 121:20]
  wire [1:0] _T_10 = s1_tag_way[0] + s1_tag_way[1]; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 121:42]
  wire [1:0] _T_12 = s1_tag_way[2] + s1_tag_way[3]; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 121:42]
  wire [2:0] _T_14 = _T_10 + _T_12; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 121:42]
  reg  s2_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 133:25]
  reg [4:0] s2_req_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 134:25]
  reg [47:0] s2_req_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 134:25]
  reg [5:0] s2_req_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 134:25]
  reg  s2_req_isFirstIssue; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 134:25]
  reg  s2_is128; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 135:27]
  reg [47:0] s2_paddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 137:27]
  reg [3:0] s2_way_en; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 138:28]
  wire [1:0] s2_way_hi = s1_tag_way[3:2]; // @[src/main/scala/chisel3/util/OneHot.scala 30:18]
  wire [1:0] s2_way_lo = s1_tag_way[1:0]; // @[src/main/scala/chisel3/util/OneHot.scala 31:18]
  wire [1:0] _s2_way_T_1 = s2_way_hi | s2_way_lo; // @[src/main/scala/chisel3/util/OneHot.scala 32:28]
  wire [1:0] _s2_way_T_3 = {|s2_way_hi,_s2_way_T_1[1]}; // @[src/main/scala/chisel3/util/OneHot.scala 32:10]
  reg [1:0] s2_way; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 139:25]
  reg  s2_hit; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 141:25]
  reg  s2_tag_hit; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 142:29]
  reg  s2_upgrade; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 143:29]
  reg  s2_bank_conflict; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 144:35]
  reg  s2_need_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 145:31]
  wire  s2_prefetch = s2_req_cmd == 5'h2 | s2_req_cmd == 5'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 343:45]
  wire  _s2_issue_T = ~io_lsu_s2_kill; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 150:30]
  wire  s2_issue = s2_valid & ~io_lsu_s2_kill; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 150:27]
  wire  _io_wbq_conflict_check_valid_T = ~s2_hit; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 153:46]
  wire  _io_wbq_conflict_check_valid_T_2 = ~s2_bank_conflict; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 153:57]
  wire  _io_wbq_conflict_check_valid_T_3 = s2_issue & ~s2_hit & ~s2_bank_conflict; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 153:54]
  wire  occupy_cancel = s2_upgrade & io_unique_occupy_fail; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 159:34]
  wire  send_miss = _io_wbq_conflict_check_valid_T_3 & ~io_wbq_block_miss_req & ~occupy_cancel; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 160:73]
  wire [2:0] _io_miss_req_bits_source_T = s2_prefetch ? 3'h4 : 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 163:33]
  wire  _send_ok_T = io_miss_req_ready & io_miss_req_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 57:35]
  wire  send_ok = _send_ok_T & io_miss_resp_handled; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 182:34]
  wire  send_fail = send_miss & (~io_miss_req_ready | ~io_miss_resp_handled); // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 183:29]
  wire  _resp_replay_T = ~s2_prefetch; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 184:33]
  wire  resp_replay = s2_issue & ~s2_prefetch & (s2_bank_conflict | _io_wbq_conflict_check_valid_T & (
    io_wbq_block_miss_req | occupy_cancel | send_fail)); // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 184:46]
  wire  resp_hit = s2_issue & s2_hit & _io_wbq_conflict_check_valid_T_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 185:37]
  wire [63:0] _GEN_41 = 2'h1 == s2_way ? io_banked_data_resp_1_data_1 : io_banked_data_resp_1_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 193:{21,21}]
  wire [63:0] _GEN_42 = 2'h2 == s2_way ? io_banked_data_resp_1_data_2 : _GEN_41; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 193:{21,21}]
  wire [63:0] _GEN_43 = 2'h3 == s2_way ? io_banked_data_resp_1_data_3 : _GEN_42; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 193:{21,21}]
  wire [63:0] _GEN_45 = 2'h1 == s2_way ? io_banked_data_resp_0_data_1 : io_banked_data_resp_0_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 193:{21,21}]
  wire [63:0] _GEN_46 = 2'h2 == s2_way ? io_banked_data_resp_0_data_2 : _GEN_45; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 193:{21,21}]
  wire [63:0] _GEN_47 = 2'h3 == s2_way ? io_banked_data_resp_0_data_3 : _GEN_46; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 193:{21,21}]
  wire [127:0] _shifted_T = {_GEN_43,_GEN_47}; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 193:21]
  wire [5:0] _shifted_T_2 = {s2_req_vaddr[2:0],3'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 193:49]
  wire [127:0] shifted = _shifted_T >> _shifted_T_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 193:43]
  wire [127:0] _hit_data_T = {64'h0,_GEN_47}; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 194:44]
  wire [127:0] hit_data = s2_is128 ? shifted : _hit_data_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 194:21]
  wire  _io_replace_access_valid_T = io_lsu_resp_ready & io_lsu_resp_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 57:35]
  wire  s2_leave = io_lsu_s2_kill | _io_replace_access_valid_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 219:26]
  wire  _GEN_48 = s2_valid & s2_leave ? 1'h0 : s2_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 133:25 221:{37,48}]
  wire  _GEN_49 = s1_go | _GEN_48; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 220:{15,26}]
  wire  _T_65 = io_lsu_resp_valid & resp_hit; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 226:30]
  assign io_lsu_req_ready = io_tag_read_ready & s1_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 66:63]
  assign io_lsu_resp_valid = s2_valid & _s2_issue_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 196:33]
  assign io_lsu_resp_bits_data = resp_hit & _resp_replay_T ? hit_data : 128'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 197:31]
  assign io_lsu_resp_bits_id = s2_req_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 198:23]
  assign io_lsu_resp_bits_miss = _send_ok_T & io_miss_resp_handled; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 182:34]
  assign io_lsu_resp_bits_replay = s2_issue & ~s2_prefetch & (s2_bank_conflict | _io_wbq_conflict_check_valid_T & (
    io_wbq_block_miss_req | occupy_cancel | send_fail)); // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 184:46]
  assign io_lsu_resp_bits_replayCarry_real_way_en = s2_way_en; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 202:44]
  assign io_lsu_resp_bits_replayCarry_valid = resp_replay & s2_bank_conflict; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 201:53]
  assign io_lsu_resp_bits_mshr_id = _send_ok_T ? io_miss_resp_id : 4'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 188:20]
  assign io_lsu_resp_bits_handled = _send_ok_T & io_miss_resp_handled; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 182:34]
  assign io_lsu_resp_bits_real_miss = send_ok & ~s2_tag_hit; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 205:46]
  assign io_lsu_resp_bits_replacementUpdated = s2_issue & s2_hit & _io_wbq_conflict_check_valid_T_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 185:37]
  assign io_lsu_s1_disable_fast_wakeup = _s1_go_T_1 & _s1_upgrade_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 119:87]
  assign io_lsu_s2_hit = s2_valid & resp_hit; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 212:29]
  assign io_lsu_s2_first_hit = io_lsu_s2_hit & s2_req_isFirstIssue; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 213:40]
  assign io_lsu_s2_bank_conflict = s2_valid & s2_bank_conflict; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 214:39]
  assign io_lsu_s2_mq_nack = s2_valid & send_fail; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 216:33]
  assign io_meta_read_valid = _io_tag_read_valid_T & io_tag_read_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 65:54]
  assign io_meta_read_bits_idx = io_lsu_req_bits_vaddr[13:6]; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 187:9]
  assign io_tag_read_valid = io_lsu_req_valid & s1_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 64:41]
  assign io_tag_read_bits_idx = io_lsu_req_bits_vaddr[13:6]; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 187:9]
  assign io_banked_data_read_valid = _s1_go_T_1 & s1_hit & ~_s1_need_data_T_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 95:53]
  assign io_banked_data_read_bits_addr = s1_req_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 102:33]
  assign io_banked_data_read_bits_bankMask = s1_is128 ? _s1_bank_mask_T_2 : s1_bank_oh; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 98:25]
  assign io_banked_data_read_bits_kill = io_lsu_s1_kill; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 105:33]
  assign io_banked_data_read_bits_lqIdx_flag = s1_req_lqIdx_flag; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 106:34]
  assign io_banked_data_read_bits_lqIdx_value = s1_req_lqIdx_value; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 106:34]
  assign io_miss_req_valid = _io_wbq_conflict_check_valid_T_3 & ~io_wbq_block_miss_req & ~occupy_cancel; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 160:73]
  assign io_miss_req_bits_source = {{1'd0}, _io_miss_req_bits_source_T}; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 163:27]
  assign io_miss_req_bits_cmd = s2_req_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 164:24]
  assign io_miss_req_bits_addr = {s2_paddr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 58:8]
  assign io_miss_req_bits_vaddr = s2_req_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 166:26]
  assign io_miss_req_bits_id = s2_req_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 175:23]
  assign io_miss_req_bits_scToUnique = s2_upgrade; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 176:31]
  assign io_miss_req_bits_occupy_way = s2_upgrade ? s2_way_en : 4'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 177:37]
  assign io_wbq_conflict_check_valid = s2_issue & ~s2_hit & ~s2_bank_conflict; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 153:54]
  assign io_wbq_conflict_check_bits = {s2_paddr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 58:8]
  assign io_replace_access_valid = _io_replace_access_valid_T & resp_hit; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 208:47]
  assign io_replace_access_bits_set = s2_req_vaddr[13:6]; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 187:9]
  assign io_replace_access_bits_way = s2_way; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 210:30]
  assign io_unique_occupy_valid = s2_valid & s2_upgrade; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 155:38]
  assign io_unique_occupy_set = io_unique_occupy_valid ? s2_req_vaddr[13:6] : 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 156:30]
  assign io_busy = s1_valid | s2_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 230:23]
  always @(posedge clock) begin
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 77:25]
      s1_valid <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 77:25]
    end else begin
      s1_valid <= _GEN_16;
    end
    if (s0_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 78:25]
      s1_req_cmd <= io_lsu_req_bits_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 78:25]
    end
    if (s0_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 78:25]
      s1_req_vaddr <= io_lsu_req_bits_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 78:25]
    end
    if (s0_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 78:25]
      s1_req_id <= io_lsu_req_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 78:25]
    end
    if (s0_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 78:25]
      s1_req_isFirstIssue <= io_lsu_req_bits_isFirstIssue; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 78:25]
    end
    if (s0_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 78:25]
      s1_req_lqIdx_flag <= io_lsu_req_bits_lqIdx_flag; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 78:25]
    end
    if (s0_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 78:25]
      s1_req_lqIdx_value <= io_lsu_req_bits_lqIdx_value; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 78:25]
    end
    if (s0_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 79:27]
      s1_is128 <= io_lsu_is128Req; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 79:27]
    end
    if (s0_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 81:26]
      s1_bank <= s0_bank; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 81:26]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 133:25]
      s2_valid <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 133:25]
    end else begin
      s2_valid <= _GEN_49;
    end
    if (s1_go) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 134:25]
      s2_req_cmd <= s1_req_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 134:25]
    end
    if (s1_go) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 134:25]
      s2_req_vaddr <= s1_req_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 134:25]
    end
    if (s1_go) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 134:25]
      s2_req_id <= s1_req_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 134:25]
    end
    if (s1_go) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 134:25]
      s2_req_isFirstIssue <= s1_req_isFirstIssue; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 134:25]
    end
    if (s1_go) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 135:27]
      s2_is128 <= s1_is128; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 135:27]
    end
    if (s1_go) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 137:27]
      s2_paddr <= io_lsu_s1_paddr_dup_dcache; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 137:27]
    end
    if (s1_go) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 138:28]
      s2_way_en <= s1_tag_way; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 138:28]
    end
    if (s1_go) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 139:25]
      s2_way <= _s2_way_T_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 139:25]
    end
    if (s1_go) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 141:25]
      s2_hit <= s1_hit; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 141:25]
    end
    if (s1_go) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 142:29]
      s2_tag_hit <= s1_tag_hit; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 142:29]
    end
    if (s1_go) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 143:29]
      s2_upgrade <= s1_upgrade; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 143:29]
    end
    if (s1_go) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 144:35]
      s2_bank_conflict <= s1_bank_conflict; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 144:35]
    end
    if (s1_go) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 145:31]
      s2_need_data <= s1_need_data & _s1_bank_conflict_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 145:31]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1 & ~(_s1_ready_T | io_lsu_s1_kill | _T_14 <= 3'h1)) begin
          $fwrite(32'h80000002,
            "Assertion failed: tag should match at most one way\n    at LoadPipe.scala:121 assert(!s1_valid || s1_kill || PopCount(s1_tag_way) <= 1.U,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 121:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1 & ~(_s1_ready_T | io_lsu_s1_kill | _T_14 <= 3'h1)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 121:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1 & ~(_T_5 | io_lsu_s1_paddr_dup_lsu == io_lsu_s1_paddr_dup_dcache)) begin
          $fwrite(32'h80000002,
            "Assertion failed: duplicated physical addresses disagree\n    at LoadPipe.scala:123 assert(!s1_valid || s1_kill || io.lsu.s1_paddr_dup_lsu === io.lsu.s1_paddr_dup_dcache,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 123:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1 & ~(_T_5 | io_lsu_s1_paddr_dup_lsu == io_lsu_s1_paddr_dup_dcache)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 123:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1 & ~(_T_5 | s1_req_cmd == 5'h0 | _s1_need_data_T_3 | s1_prefetch_w)) begin
          $fwrite(32'h80000002,
            "Assertion failed: LoadPipe only accepts load and software prefetch\n    at LoadPipe.scala:125 assert(!s1_valid || s1_kill || s1_req.cmd === M_XRD || s1_req.cmd === M_PFR || s1_req.cmd === M_PFW,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 125:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1 & ~(_T_5 | s1_req_cmd == 5'h0 | _s1_need_data_T_3 | s1_prefetch_w)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 125:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1 & ~(_s1_ready_T | ~s1_is128 | s1_bank != 3'h7)) begin
          $fwrite(32'h80000002,
            "Assertion failed: 128-bit load must not cross a cache line\n    at LoadPipe.scala:127 assert(!s1_valid || !s1_is128 || s1_bank =/= (DCacheBanks - 1).U,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 127:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1 & ~(_s1_ready_T | ~s1_is128 | s1_bank != 3'h7)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 127:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1 & ~(~io_banked_data_read_valid | io_bank_conflict == ~io_banked_data_read_ready)) begin
          $fwrite(32'h80000002,
            "Assertion failed: data conflict must be reported as not ready\n    at LoadPipe.scala:129 assert(!io.banked_data_read.valid || io.bank_conflict === !io.banked_data_read.ready,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 129:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1 & ~(~io_banked_data_read_valid | io_bank_conflict == ~io_banked_data_read_ready)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 129:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1 & ~(~(io_lsu_resp_valid & ~io_lsu_resp_ready))) begin
          $fwrite(32'h80000002,
            "Assertion failed: lsu should be ready in s2\n    at LoadPipe.scala:223 assert(!(io.lsu.resp.valid && !io.lsu.resp.ready), \"lsu should be ready in s2\")\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 223:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1 & ~(~(io_lsu_resp_valid & ~io_lsu_resp_ready))) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 223:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1 & ~s1_ready) begin
          $fwrite(32'h80000002,
            "Assertion failed: load pipeline should never be blocked\n    at LoadPipe.scala:224 assert(s1_ready && s2_ready, \"load pipeline should never be blocked\")\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 224:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1 & ~s1_ready) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 224:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1 & ~(~(io_lsu_resp_valid & resp_hit & resp_replay))) begin
          $fwrite(32'h80000002,
            "Assertion failed: hit and replay are mutually exclusive\n    at LoadPipe.scala:226 assert(!(io.lsu.resp.valid && resp_hit && resp_replay), \"hit and replay are mutually exclusive\")\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 226:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1 & ~(~(io_lsu_resp_valid & resp_hit & resp_replay))) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 226:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1 & ~(~(_T_65 & send_ok))) begin
          $fwrite(32'h80000002,
            "Assertion failed: hit and accept are mutually exclusive\n    at LoadPipe.scala:227 assert(!(io.lsu.resp.valid && resp_hit && resp_handled), \"hit and accept are mutually exclusive\")\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 227:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1 & ~(~(_T_65 & send_ok))) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 227:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1 & ~(~(io_lsu_resp_valid & resp_replay & send_ok))) begin
          $fwrite(32'h80000002,
            "Assertion failed: replay and accept are mutually exclusive\n    at LoadPipe.scala:228 assert(!(io.lsu.resp.valid && resp_replay && resp_handled), \"replay and accept are mutually exclusive\")\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 228:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1 & ~(~(io_lsu_resp_valid & resp_replay & send_ok))) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 228:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1 & ~(~s2_valid | ~s2_need_data | s2_hit)) begin
          $fwrite(32'h80000002,
            "Assertion failed: data is read only for a hitting load\n    at LoadPipe.scala:229 assert(!s2_valid || !s2_need_data || s2_hit, \"data is read only for a hitting load\")\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 229:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1 & ~(~s2_valid | ~s2_need_data | s2_hit)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/LoadPipe/LoadPipe.scala 229:9]
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
  s1_valid = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  s1_req_cmd = _RAND_1[4:0];
  _RAND_2 = {2{`RANDOM}};
  s1_req_vaddr = _RAND_2[47:0];
  _RAND_3 = {1{`RANDOM}};
  s1_req_id = _RAND_3[5:0];
  _RAND_4 = {1{`RANDOM}};
  s1_req_isFirstIssue = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  s1_req_lqIdx_flag = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  s1_req_lqIdx_value = _RAND_6[3:0];
  _RAND_7 = {1{`RANDOM}};
  s1_is128 = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  s1_bank = _RAND_8[2:0];
  _RAND_9 = {1{`RANDOM}};
  s2_valid = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  s2_req_cmd = _RAND_10[4:0];
  _RAND_11 = {2{`RANDOM}};
  s2_req_vaddr = _RAND_11[47:0];
  _RAND_12 = {1{`RANDOM}};
  s2_req_id = _RAND_12[5:0];
  _RAND_13 = {1{`RANDOM}};
  s2_req_isFirstIssue = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  s2_is128 = _RAND_14[0:0];
  _RAND_15 = {2{`RANDOM}};
  s2_paddr = _RAND_15[47:0];
  _RAND_16 = {1{`RANDOM}};
  s2_way_en = _RAND_16[3:0];
  _RAND_17 = {1{`RANDOM}};
  s2_way = _RAND_17[1:0];
  _RAND_18 = {1{`RANDOM}};
  s2_hit = _RAND_18[0:0];
  _RAND_19 = {1{`RANDOM}};
  s2_tag_hit = _RAND_19[0:0];
  _RAND_20 = {1{`RANDOM}};
  s2_upgrade = _RAND_20[0:0];
  _RAND_21 = {1{`RANDOM}};
  s2_bank_conflict = _RAND_21[0:0];
  _RAND_22 = {1{`RANDOM}};
  s2_need_data = _RAND_22[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
