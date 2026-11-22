module TagArray(
  input         clock,
  input         reset,
  output        io_read_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 65:14]
  input         io_read_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 65:14]
  input  [7:0]  io_read_bits_idx, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 65:14]
  output [35:0] io_resp_0, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 65:14]
  output [35:0] io_resp_1, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 65:14]
  output [35:0] io_resp_2, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 65:14]
  output [35:0] io_resp_3, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 65:14]
  input         io_write_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 65:14]
  input  [7:0]  io_write_bits_idx, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 65:14]
  input  [3:0]  io_write_bits_way_en, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 65:14]
  input  [35:0] io_write_bits_tag // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 65:14]
);
  wire  banks_0_clock; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 72:41]
  wire  banks_0_io_read_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 72:41]
  wire [7:0] banks_0_io_read_bits; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 72:41]
  wire [35:0] banks_0_io_resp_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 72:41]
  wire [35:0] banks_0_io_resp_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 72:41]
  wire  banks_0_io_write_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 72:41]
  wire [7:0] banks_0_io_write_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 72:41]
  wire [1:0] banks_0_io_write_bits_wayMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 72:41]
  wire [35:0] banks_0_io_write_bits_tag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 72:41]
  wire  banks_1_clock; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 72:41]
  wire  banks_1_io_read_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 72:41]
  wire [7:0] banks_1_io_read_bits; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 72:41]
  wire [35:0] banks_1_io_resp_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 72:41]
  wire [35:0] banks_1_io_resp_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 72:41]
  wire  banks_1_io_write_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 72:41]
  wire [7:0] banks_1_io_write_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 72:41]
  wire [1:0] banks_1_io_write_bits_wayMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 72:41]
  wire [35:0] banks_1_io_write_bits_tag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 72:41]
  wire  _io_read_ready_T = ~io_write_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 76:20]
  wire [1:0] wayMask = io_write_bits_way_en[1:0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 79:39]
  wire [1:0] wayMask_1 = io_write_bits_way_en[3:2]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 79:39]
  wire [1:0] _T_5 = io_write_bits_way_en[0] + io_write_bits_way_en[1]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 92:37]
  wire [1:0] _T_7 = io_write_bits_way_en[2] + io_write_bits_way_en[3]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 92:37]
  wire [2:0] _T_9 = _T_5 + _T_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 92:37]
  TagSRAMBank banks_0 ( // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 72:41]
    .clock(banks_0_clock),
    .io_read_valid(banks_0_io_read_valid),
    .io_read_bits(banks_0_io_read_bits),
    .io_resp_0(banks_0_io_resp_0),
    .io_resp_1(banks_0_io_resp_1),
    .io_write_valid(banks_0_io_write_valid),
    .io_write_bits_idx(banks_0_io_write_bits_idx),
    .io_write_bits_wayMask(banks_0_io_write_bits_wayMask),
    .io_write_bits_tag(banks_0_io_write_bits_tag)
  );
  TagSRAMBank banks_1 ( // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 72:41]
    .clock(banks_1_clock),
    .io_read_valid(banks_1_io_read_valid),
    .io_read_bits(banks_1_io_read_bits),
    .io_resp_0(banks_1_io_resp_0),
    .io_resp_1(banks_1_io_resp_1),
    .io_write_valid(banks_1_io_write_valid),
    .io_write_bits_idx(banks_1_io_write_bits_idx),
    .io_write_bits_wayMask(banks_1_io_write_bits_wayMask),
    .io_write_bits_tag(banks_1_io_write_bits_tag)
  );
  assign io_read_ready = ~io_write_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 76:20]
  assign io_resp_0 = banks_0_io_resp_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 87:20]
  assign io_resp_1 = banks_0_io_resp_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 88:24]
  assign io_resp_2 = banks_1_io_resp_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 87:20]
  assign io_resp_3 = banks_1_io_resp_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 88:24]
  assign banks_0_clock = clock;
  assign banks_0_io_read_valid = io_read_ready & io_read_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 57:35]
  assign banks_0_io_read_bits = io_read_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 86:27]
  assign banks_0_io_write_valid = io_write_valid & |wayMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 80:47]
  assign banks_0_io_write_bits_idx = io_write_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 81:32]
  assign banks_0_io_write_bits_wayMask = io_write_bits_way_en[1:0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 79:39]
  assign banks_0_io_write_bits_tag = io_write_bits_tag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 83:32]
  assign banks_1_clock = clock;
  assign banks_1_io_read_valid = io_read_ready & io_read_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 57:35]
  assign banks_1_io_read_bits = io_read_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 86:27]
  assign banks_1_io_write_valid = io_write_valid & |wayMask_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 80:47]
  assign banks_1_io_write_bits_idx = io_write_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 81:32]
  assign banks_1_io_write_bits_wayMask = io_write_bits_way_en[3:2]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 79:39]
  assign banks_1_io_write_bits_tag = io_write_bits_tag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 83:32]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(_io_read_ready_T | _T_9 == 3'h1)) begin
          $fwrite(32'h80000002,
            "Assertion failed: tag write must select exactly one way\n    at TagArray.scala:92 assert(!io.write.valid || PopCount(io.write.bits.way_en) === 1.U,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 92:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(_io_read_ready_T | _T_9 == 3'h1)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 92:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
