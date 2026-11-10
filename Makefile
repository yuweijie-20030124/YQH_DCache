# ===================================================================== #
#  yqh · Chisel / Verilator 构建脚本
#
#  三个名字别混：
#    TOP      mill 模块名（build.sc 里的 `object top`）
#    MAIN     Scala 主类 = <package>.<object>，跟着 src 里的 package 走
#    TOPNAME  生成 Verilog 的顶层模块名 = 被 emitVerilog 的那个 Chisel class
#             （同时用于 verilator 的 -top 和 C++ 的 -DTOP_NAME=V$(TOPNAME)）
#
#  常用命令：
#    make verilog            生成 $(TOP_V)
#    make lint               生成 + 检查产物非空
#    make sim / make run     构建 / 运行 verilator 仿真
#    make srun               sim + run
#    make gtk                用 GTKWave 打开 logs/ 里的波形
#    make clean              删除 build/ 和 logs/
#    make clean_mill         删除 out/（mill 输出）
#    make help               显示帮助
#
#  可覆盖变量：
#    make verilog MAIN=别的包.别的对象      临时换主类
#    make sim vcd=1                        打开波形（logs/$(TOPNAME).vcd）
# ===================================================================== #

.DEFAULT_GOAL := verilog

# ------------------------------------------------------------------ 项目信息 --
TOP     ?= top
MAIN    ?= YQH.cache.topMain
TOPNAME ?= DCache

# ------------------------------------------------------------------ 目录布局 --
BUILD_DIR := build
RTL_DIR   := $(BUILD_DIR)/verilog
OBJ_DIR   := $(BUILD_DIR)/OBJ_DIR
SIM_BIN   := $(BUILD_DIR)/$(TOPNAME)
TOP_V     := $(RTL_DIR)/$(TOPNAME).v

# ------------------------------------------------------------------ 源文件 --
SCALA_FILES := $(shell find src/main -name '*.scala')
# 激励在 sim/src，不再使用 sim_c。
CSRCS       := $(shell find $(abspath sim/src) -type f \( -name '*.c' -o -name '*.cc' -o -name '*.cpp' \) 2>/dev/null)

# ------------------------------------------------------------------ 工具 --
VERILATOR ?= /usr/local/bin/verilator

# ------------------------------------------------------------------ Verilator 参数 --
# Chisel 的 SyncReadMem 会留下 mem_*_MPORT_en，赋值后没有读者。
# 这是 FIRRTL 拆 bank 的产物，不是端口悬空。-Wall 会把它当成错误。
VERILATOR_FLAGS ?= -Wall -Wno-UNUSEDSIGNAL -MMD --trace --build -cc --exe \
                   -O3 --x-assign fast --x-initial fast --noassert \
                   -report-unoptflat --timescale 1us/1us

# 波形：make sim vcd=1（也接受 VCD=1）
VCD ?= $(vcd)
ifeq ($(VCD),1)
  CFLAGS += -DVCD
endif

INC_PATH := $(abspath sim_c/include)
CFLAGS   += $(addprefix -I,$(INC_PATH)) -DTOP_NAME="V$(TOPNAME)"

# ------------------------------------------------------------------ 目标 --

# 生成 Verilog（老 FIRRTL 流程；以后切 firtool 时这里换成 --target systemverilog）
verilog: $(SCALA_FILES)
	@mkdir -p $(RTL_DIR)
	@mill -i $(TOP).runMain $(MAIN) -td $(RTL_DIR) --emit-modules verilog || \
	  { echo "[make] 生成失败：先看上面的 scalac 报错；若只有 ClassNotFoundException，" >&2; \
	    echo "[make]   检查 MAIN=$(MAIN) 与 src 里的 package/object 名是否一致" >&2; exit 1; }

# 产物存在性检查（不是 verilator lint）
lint: verilog
	@test -s $(TOP_V) || { echo "[make] $(TOP_V) 未生成或为空" >&2; exit 1; }

# verilator 编译出 $(SIM_BIN)
sim: $(CSRCS) verilog
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_FLAGS) -top $(TOPNAME) $(CSRCS) $(RTL_DIR)/*.v \
	  $(addprefix -CFLAGS , $(CFLAGS)) \
	  --Mdir $(OBJ_DIR) -o $(abspath $(SIM_BIN))

run:
	@mkdir -p logs
	@echo
	@echo "------------ RUN --------------"
	$(SIM_BIN)
ifeq ($(VCD),1)
	@echo "----- 波形：logs/$(TOPNAME).vcd -----"
else
	@echo "----- 需要波形请加 vcd=1 -----"
endif

srun: sim run

# 只激励 storebuffer 的一笔 store，生成 logs/store-txreq.vcd。不改 DCache RTL。
# 激励在 sim/src/main.cpp，顶层就是 DCache，不再例化测试模块。
STORE_OBJ := $(BUILD_DIR)/OBJ_STORE
STORE_BIN := $(BUILD_DIR)/store-txreq
store-sim: verilog
	@mkdir -p logs
	@rm -rf $(STORE_OBJ)
	$(VERILATOR) -Wno-fatal -Wno-WIDTH -Wno-UNUSED -Wno-UNOPTFLAT -Wno-PINCONNECTEMPTY \
	  -Wno-DECLFILENAME -Wno-TIMESCALEMOD -MMD --trace --build -cc --exe -O1 \
	  --x-assign unique --x-initial unique --timescale 1ns/1ns \
	  -top $(TOPNAME) $(abspath sim/src/main.cpp) $(wildcard $(RTL_DIR)/*.v) \
	  --Mdir $(STORE_OBJ) -o $(abspath $(STORE_BIN))
	$(STORE_BIN)

# 仿真把波形写到 logs/store-txreq.vcd。make gtk 直接打开。
GTKWAVE ?= gtkwave
WAVE    ?= logs/store-txreq.vcd

gtk:
	@test -s "$(WAVE)" || { echo "[make] 没有波形：$(WAVE)。先 make srun" >&2; exit 1; }
	$(GTKWAVE) "$(WAVE)" ~/.gtkwaverc &

# ------------------------------------------------------------------ 清理 --
clean: 
	-rm -rf $(BUILD_DIR) logs

clean_mill:
	-rm -rf out

clean_all: clean clean_mill

# ------------------------------------------------------------------ 帮助 --
help:
	@echo "verilog    生成 $(TOP_V)"
	@echo "lint       生成并检查产物"
	@echo "sim        用 verilator 构建 $(SIM_BIN)"
	@echo "run        运行 $(SIM_BIN)"
	@echo "srun       sim + run"
	@echo "gtk        用 GTKWave 打开 $(WAVE)"
	@echo "store-sim  一笔 store，波形 logs/store-txreq.vcd"
	@echo "clean      删除 $(BUILD_DIR)/ 和 logs/"
	@echo "clean_mill 删除 out/"
	@echo "help       显示本帮助"

.PHONY: verilog lint sim run srun gtk store-sim clean clean_mill clean_all help
