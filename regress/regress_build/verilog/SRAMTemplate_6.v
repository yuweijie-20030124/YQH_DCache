module SRAMTemplate_6(
  input         clock,
  input         io_r_en, // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 85:14]
  input  [7:0]  io_r_addr, // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 85:14]
  output [63:0] io_r_data_0, // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 85:14]
  output [63:0] io_r_data_1, // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 85:14]
  output [63:0] io_r_data_2, // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 85:14]
  output [63:0] io_r_data_3, // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 85:14]
  input         io_w_en, // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 85:14]
  input  [7:0]  io_w_addr, // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 85:14]
  input  [63:0] io_w_data_0, // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 85:14]
  input  [63:0] io_w_data_1, // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 85:14]
  input  [63:0] io_w_data_2, // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 85:14]
  input  [63:0] io_w_data_3, // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 85:14]
  input         io_w_mask_0, // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 85:14]
  input         io_w_mask_1, // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 85:14]
  input         io_w_mask_2, // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 85:14]
  input         io_w_mask_3 // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 85:14]
);
`ifdef RANDOMIZE_MEM_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_3;
  reg [63:0] _RAND_6;
  reg [63:0] _RAND_9;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] mem_0 [0:255]; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
  wire  mem_0_MPORT_en; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
  wire [7:0] mem_0_MPORT_addr; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
  wire [63:0] mem_0_MPORT_data; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
  wire [63:0] mem_0_MPORT_1_data; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
  wire [7:0] mem_0_MPORT_1_addr; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
  wire  mem_0_MPORT_1_mask; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
  wire  mem_0_MPORT_1_en; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
  reg  mem_0_MPORT_en_pipe_0;
  reg [7:0] mem_0_MPORT_addr_pipe_0;
  reg [63:0] mem_1 [0:255]; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
  wire  mem_1_MPORT_en; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
  wire [7:0] mem_1_MPORT_addr; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
  wire [63:0] mem_1_MPORT_data; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
  wire [63:0] mem_1_MPORT_1_data; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
  wire [7:0] mem_1_MPORT_1_addr; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
  wire  mem_1_MPORT_1_mask; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
  wire  mem_1_MPORT_1_en; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
  reg  mem_1_MPORT_en_pipe_0;
  reg [7:0] mem_1_MPORT_addr_pipe_0;
  reg [63:0] mem_2 [0:255]; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
  wire  mem_2_MPORT_en; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
  wire [7:0] mem_2_MPORT_addr; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
  wire [63:0] mem_2_MPORT_data; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
  wire [63:0] mem_2_MPORT_1_data; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
  wire [7:0] mem_2_MPORT_1_addr; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
  wire  mem_2_MPORT_1_mask; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
  wire  mem_2_MPORT_1_en; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
  reg  mem_2_MPORT_en_pipe_0;
  reg [7:0] mem_2_MPORT_addr_pipe_0;
  reg [63:0] mem_3 [0:255]; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
  wire  mem_3_MPORT_en; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
  wire [7:0] mem_3_MPORT_addr; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
  wire [63:0] mem_3_MPORT_data; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
  wire [63:0] mem_3_MPORT_1_data; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
  wire [7:0] mem_3_MPORT_1_addr; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
  wire  mem_3_MPORT_1_mask; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
  wire  mem_3_MPORT_1_en; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
  reg  mem_3_MPORT_en_pipe_0;
  reg [7:0] mem_3_MPORT_addr_pipe_0;
  wire  _readEnable_T = ~io_w_en; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 94:31]
  assign mem_0_MPORT_en = mem_0_MPORT_en_pipe_0;
  assign mem_0_MPORT_addr = mem_0_MPORT_addr_pipe_0;
  assign mem_0_MPORT_data = mem_0[mem_0_MPORT_addr]; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
  assign mem_0_MPORT_1_data = io_w_data_0;
  assign mem_0_MPORT_1_addr = io_w_addr;
  assign mem_0_MPORT_1_mask = io_w_mask_0;
  assign mem_0_MPORT_1_en = io_w_en;
  assign mem_1_MPORT_en = mem_1_MPORT_en_pipe_0;
  assign mem_1_MPORT_addr = mem_1_MPORT_addr_pipe_0;
  assign mem_1_MPORT_data = mem_1[mem_1_MPORT_addr]; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
  assign mem_1_MPORT_1_data = io_w_data_1;
  assign mem_1_MPORT_1_addr = io_w_addr;
  assign mem_1_MPORT_1_mask = io_w_mask_1;
  assign mem_1_MPORT_1_en = io_w_en;
  assign mem_2_MPORT_en = mem_2_MPORT_en_pipe_0;
  assign mem_2_MPORT_addr = mem_2_MPORT_addr_pipe_0;
  assign mem_2_MPORT_data = mem_2[mem_2_MPORT_addr]; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
  assign mem_2_MPORT_1_data = io_w_data_2;
  assign mem_2_MPORT_1_addr = io_w_addr;
  assign mem_2_MPORT_1_mask = io_w_mask_2;
  assign mem_2_MPORT_1_en = io_w_en;
  assign mem_3_MPORT_en = mem_3_MPORT_en_pipe_0;
  assign mem_3_MPORT_addr = mem_3_MPORT_addr_pipe_0;
  assign mem_3_MPORT_data = mem_3[mem_3_MPORT_addr]; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
  assign mem_3_MPORT_1_data = io_w_data_3;
  assign mem_3_MPORT_1_addr = io_w_addr;
  assign mem_3_MPORT_1_mask = io_w_mask_3;
  assign mem_3_MPORT_1_en = io_w_en;
  assign io_r_data_0 = mem_0_MPORT_data; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 96:14]
  assign io_r_data_1 = mem_1_MPORT_data; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 96:14]
  assign io_r_data_2 = mem_2_MPORT_data; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 96:14]
  assign io_r_data_3 = mem_3_MPORT_data; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 96:14]
  always @(posedge clock) begin
    if (mem_0_MPORT_1_en & mem_0_MPORT_1_mask) begin
      mem_0[mem_0_MPORT_1_addr] <= mem_0_MPORT_1_data; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
    end
    mem_0_MPORT_en_pipe_0 <= io_r_en & _readEnable_T;
    if (io_r_en & _readEnable_T) begin
      mem_0_MPORT_addr_pipe_0 <= io_r_addr;
    end
    if (mem_1_MPORT_1_en & mem_1_MPORT_1_mask) begin
      mem_1[mem_1_MPORT_1_addr] <= mem_1_MPORT_1_data; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
    end
    mem_1_MPORT_en_pipe_0 <= io_r_en & _readEnable_T;
    if (io_r_en & _readEnable_T) begin
      mem_1_MPORT_addr_pipe_0 <= io_r_addr;
    end
    if (mem_2_MPORT_1_en & mem_2_MPORT_1_mask) begin
      mem_2[mem_2_MPORT_1_addr] <= mem_2_MPORT_1_data; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
    end
    mem_2_MPORT_en_pipe_0 <= io_r_en & _readEnable_T;
    if (io_r_en & _readEnable_T) begin
      mem_2_MPORT_addr_pipe_0 <= io_r_addr;
    end
    if (mem_3_MPORT_1_en & mem_3_MPORT_1_mask) begin
      mem_3[mem_3_MPORT_1_addr] <= mem_3_MPORT_1_data; // @[home/ywj/yqh/src/main/scala/YQH/utils/sram.scala 91:24]
    end
    mem_3_MPORT_en_pipe_0 <= io_r_en & _readEnable_T;
    if (io_r_en & _readEnable_T) begin
      mem_3_MPORT_addr_pipe_0 <= io_r_addr;
    end
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
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {2{`RANDOM}};
  for (initvar = 0; initvar < 256; initvar = initvar+1)
    mem_0[initvar] = _RAND_0[63:0];
  _RAND_3 = {2{`RANDOM}};
  for (initvar = 0; initvar < 256; initvar = initvar+1)
    mem_1[initvar] = _RAND_3[63:0];
  _RAND_6 = {2{`RANDOM}};
  for (initvar = 0; initvar < 256; initvar = initvar+1)
    mem_2[initvar] = _RAND_6[63:0];
  _RAND_9 = {2{`RANDOM}};
  for (initvar = 0; initvar < 256; initvar = initvar+1)
    mem_3[initvar] = _RAND_9[63:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  mem_0_MPORT_en_pipe_0 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  mem_0_MPORT_addr_pipe_0 = _RAND_2[7:0];
  _RAND_4 = {1{`RANDOM}};
  mem_1_MPORT_en_pipe_0 = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  mem_1_MPORT_addr_pipe_0 = _RAND_5[7:0];
  _RAND_7 = {1{`RANDOM}};
  mem_2_MPORT_en_pipe_0 = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  mem_2_MPORT_addr_pipe_0 = _RAND_8[7:0];
  _RAND_10 = {1{`RANDOM}};
  mem_3_MPORT_en_pipe_0 = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  mem_3_MPORT_addr_pipe_0 = _RAND_11[7:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
