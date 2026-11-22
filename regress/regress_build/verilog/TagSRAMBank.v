module TagSRAMBank(
  input         clock,
  input         io_read_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 27:14]
  input  [7:0]  io_read_bits, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 27:14]
  output [35:0] io_resp_0, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 27:14]
  output [35:0] io_resp_1, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 27:14]
  input         io_write_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 27:14]
  input  [7:0]  io_write_bits_idx, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 27:14]
  input  [1:0]  io_write_bits_wayMask, // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 27:14]
  input  [35:0] io_write_bits_tag // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 27:14]
);
  wire  tagSram_clock; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 38:23]
  wire  tagSram_io_r_en; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 38:23]
  wire [7:0] tagSram_io_r_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 38:23]
  wire [35:0] tagSram_io_r_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 38:23]
  wire [35:0] tagSram_io_r_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 38:23]
  wire  tagSram_io_w_en; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 38:23]
  wire [7:0] tagSram_io_w_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 38:23]
  wire [35:0] tagSram_io_w_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 38:23]
  wire [35:0] tagSram_io_w_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 38:23]
  wire  tagSram_io_w_mask_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 38:23]
  wire  tagSram_io_w_mask_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 38:23]
  SRAMTemplate tagSram ( // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 38:23]
    .clock(tagSram_clock),
    .io_r_en(tagSram_io_r_en),
    .io_r_addr(tagSram_io_r_addr),
    .io_r_data_0(tagSram_io_r_data_0),
    .io_r_data_1(tagSram_io_r_data_1),
    .io_w_en(tagSram_io_w_en),
    .io_w_addr(tagSram_io_w_addr),
    .io_w_data_0(tagSram_io_w_data_0),
    .io_w_data_1(tagSram_io_w_data_1),
    .io_w_mask_0(tagSram_io_w_mask_0),
    .io_w_mask_1(tagSram_io_w_mask_1)
  );
  assign io_resp_0 = tagSram_io_r_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 56:11]
  assign io_resp_1 = tagSram_io_r_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 56:11]
  assign tagSram_clock = clock;
  assign tagSram_io_r_en = io_read_valid & ~io_write_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 54:36]
  assign tagSram_io_r_addr = io_read_bits; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 55:21]
  assign tagSram_io_w_en = io_write_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 47:19]
  assign tagSram_io_w_addr = io_write_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 48:21]
  assign tagSram_io_w_data_0 = io_write_bits_tag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 50:26]
  assign tagSram_io_w_data_1 = io_write_bits_tag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 50:26]
  assign tagSram_io_w_mask_0 = io_write_bits_wayMask[0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 51:54]
  assign tagSram_io_w_mask_1 = io_write_bits_wayMask[1]; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/TagArray.scala 51:54]
endmodule
