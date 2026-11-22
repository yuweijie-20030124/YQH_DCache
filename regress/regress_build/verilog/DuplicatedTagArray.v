module DuplicatedTagArray(
  input         clock,
  input         reset,
  output        io_read_0_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 99:14]
  input         io_read_0_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 99:14]
  input  [7:0]  io_read_0_bits_idx, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 99:14]
  output        io_read_1_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 99:14]
  input         io_read_1_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 99:14]
  input  [7:0]  io_read_1_bits_idx, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 99:14]
  output        io_read_2_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 99:14]
  input         io_read_2_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 99:14]
  input  [7:0]  io_read_2_bits_idx, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 99:14]
  output [35:0] io_resp_0_0, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 99:14]
  output [35:0] io_resp_0_1, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 99:14]
  output [35:0] io_resp_0_2, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 99:14]
  output [35:0] io_resp_0_3, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 99:14]
  output [35:0] io_resp_1_0, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 99:14]
  output [35:0] io_resp_1_1, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 99:14]
  output [35:0] io_resp_1_2, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 99:14]
  output [35:0] io_resp_1_3, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 99:14]
  output [35:0] io_resp_2_0, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 99:14]
  output [35:0] io_resp_2_1, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 99:14]
  output [35:0] io_resp_2_2, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 99:14]
  output [35:0] io_resp_2_3, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 99:14]
  input         io_write_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 99:14]
  input  [7:0]  io_write_bits_idx, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 99:14]
  input  [3:0]  io_write_bits_way_en, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 99:14]
  input  [35:0] io_write_bits_tag // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 99:14]
);
  wire  arrays_0_clock; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire  arrays_0_reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire  arrays_0_io_read_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire  arrays_0_io_read_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire [7:0] arrays_0_io_read_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire [35:0] arrays_0_io_resp_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire [35:0] arrays_0_io_resp_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire [35:0] arrays_0_io_resp_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire [35:0] arrays_0_io_resp_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire  arrays_0_io_write_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire [7:0] arrays_0_io_write_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire [3:0] arrays_0_io_write_bits_way_en; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire [35:0] arrays_0_io_write_bits_tag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire  arrays_1_clock; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire  arrays_1_reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire  arrays_1_io_read_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire  arrays_1_io_read_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire [7:0] arrays_1_io_read_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire [35:0] arrays_1_io_resp_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire [35:0] arrays_1_io_resp_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire [35:0] arrays_1_io_resp_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire [35:0] arrays_1_io_resp_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire  arrays_1_io_write_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire [7:0] arrays_1_io_write_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire [3:0] arrays_1_io_write_bits_way_en; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire [35:0] arrays_1_io_write_bits_tag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire  arrays_2_clock; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire  arrays_2_reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire  arrays_2_io_read_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire  arrays_2_io_read_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire [7:0] arrays_2_io_read_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire [35:0] arrays_2_io_resp_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire [35:0] arrays_2_io_resp_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire [35:0] arrays_2_io_resp_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire [35:0] arrays_2_io_resp_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire  arrays_2_io_write_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire [7:0] arrays_2_io_write_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire [3:0] arrays_2_io_write_bits_way_en; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  wire [35:0] arrays_2_io_write_bits_tag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
  TagArray arrays_0 ( // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
    .clock(arrays_0_clock),
    .reset(arrays_0_reset),
    .io_read_ready(arrays_0_io_read_ready),
    .io_read_valid(arrays_0_io_read_valid),
    .io_read_bits_idx(arrays_0_io_read_bits_idx),
    .io_resp_0(arrays_0_io_resp_0),
    .io_resp_1(arrays_0_io_resp_1),
    .io_resp_2(arrays_0_io_resp_2),
    .io_resp_3(arrays_0_io_resp_3),
    .io_write_valid(arrays_0_io_write_valid),
    .io_write_bits_idx(arrays_0_io_write_bits_idx),
    .io_write_bits_way_en(arrays_0_io_write_bits_way_en),
    .io_write_bits_tag(arrays_0_io_write_bits_tag)
  );
  TagArray arrays_1 ( // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
    .clock(arrays_1_clock),
    .reset(arrays_1_reset),
    .io_read_ready(arrays_1_io_read_ready),
    .io_read_valid(arrays_1_io_read_valid),
    .io_read_bits_idx(arrays_1_io_read_bits_idx),
    .io_resp_0(arrays_1_io_resp_0),
    .io_resp_1(arrays_1_io_resp_1),
    .io_resp_2(arrays_1_io_resp_2),
    .io_resp_3(arrays_1_io_resp_3),
    .io_write_valid(arrays_1_io_write_valid),
    .io_write_bits_idx(arrays_1_io_write_bits_idx),
    .io_write_bits_way_en(arrays_1_io_write_bits_way_en),
    .io_write_bits_tag(arrays_1_io_write_bits_tag)
  );
  TagArray arrays_2 ( // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 106:43]
    .clock(arrays_2_clock),
    .reset(arrays_2_reset),
    .io_read_ready(arrays_2_io_read_ready),
    .io_read_valid(arrays_2_io_read_valid),
    .io_read_bits_idx(arrays_2_io_read_bits_idx),
    .io_resp_0(arrays_2_io_resp_0),
    .io_resp_1(arrays_2_io_resp_1),
    .io_resp_2(arrays_2_io_resp_2),
    .io_resp_3(arrays_2_io_resp_3),
    .io_write_valid(arrays_2_io_write_valid),
    .io_write_bits_idx(arrays_2_io_write_bits_idx),
    .io_write_bits_way_en(arrays_2_io_write_bits_way_en),
    .io_write_bits_tag(arrays_2_io_write_bits_tag)
  );
  assign io_read_0_ready = arrays_0_io_read_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 112:23]
  assign io_read_1_ready = arrays_1_io_read_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 112:23]
  assign io_read_2_ready = arrays_2_io_read_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 112:23]
  assign io_resp_0_0 = arrays_0_io_resp_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 113:16]
  assign io_resp_0_1 = arrays_0_io_resp_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 113:16]
  assign io_resp_0_2 = arrays_0_io_resp_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 113:16]
  assign io_resp_0_3 = arrays_0_io_resp_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 113:16]
  assign io_resp_1_0 = arrays_1_io_resp_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 113:16]
  assign io_resp_1_1 = arrays_1_io_resp_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 113:16]
  assign io_resp_1_2 = arrays_1_io_resp_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 113:16]
  assign io_resp_1_3 = arrays_1_io_resp_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 113:16]
  assign io_resp_2_0 = arrays_2_io_resp_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 113:16]
  assign io_resp_2_1 = arrays_2_io_resp_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 113:16]
  assign io_resp_2_2 = arrays_2_io_resp_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 113:16]
  assign io_resp_2_3 = arrays_2_io_resp_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 113:16]
  assign arrays_0_clock = clock;
  assign arrays_0_reset = reset;
  assign arrays_0_io_read_valid = io_read_0_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 112:23]
  assign arrays_0_io_read_bits_idx = io_read_0_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 112:23]
  assign arrays_0_io_write_valid = io_write_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 110:30]
  assign arrays_0_io_write_bits_idx = io_write_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 111:29]
  assign arrays_0_io_write_bits_way_en = io_write_bits_way_en; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 111:29]
  assign arrays_0_io_write_bits_tag = io_write_bits_tag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 111:29]
  assign arrays_1_clock = clock;
  assign arrays_1_reset = reset;
  assign arrays_1_io_read_valid = io_read_1_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 112:23]
  assign arrays_1_io_read_bits_idx = io_read_1_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 112:23]
  assign arrays_1_io_write_valid = io_write_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 110:30]
  assign arrays_1_io_write_bits_idx = io_write_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 111:29]
  assign arrays_1_io_write_bits_way_en = io_write_bits_way_en; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 111:29]
  assign arrays_1_io_write_bits_tag = io_write_bits_tag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 111:29]
  assign arrays_2_clock = clock;
  assign arrays_2_reset = reset;
  assign arrays_2_io_read_valid = io_read_2_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 112:23]
  assign arrays_2_io_read_bits_idx = io_read_2_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 112:23]
  assign arrays_2_io_write_valid = io_write_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 110:30]
  assign arrays_2_io_write_bits_idx = io_write_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 111:29]
  assign arrays_2_io_write_bits_way_en = io_write_bits_way_en; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 111:29]
  assign arrays_2_io_write_bits_tag = io_write_bits_tag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 111:29]
endmodule
