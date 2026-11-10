# YQH的回归测试脚本 Chisel / Verilator 构建脚本

# 这句的意思是: 不带目标只输入一个make，默认等同于输入
# make verilog，去构建verilog的目标
.DEFAULT_GOAL := verilog

TOP	 	?= top
TOPNAME ?= DCache
MAIN    ?= YQH.cache.topMain
# 本 Makefile 在 sim/regress。mill 只有在工程根目录才认 top.runMain。
YQH_ROOT := $(abspath $(dir $(lastword $(MAKEFILE_LIST)))/../..)


# **************工程文件布局************** #
BUILD_DIR := regress_build
RTL_DIR	  := $(BUILD_DIR)/verilog
OBJ_DIR   := $(BUILD_DIR)/OBJ_DIR
SIM_BIN   := $(BUILD_DIR)/$(TOPNAME)
TOP_V	  := $(RTL_DIR)/$(TOPNAME).v

# **************源文件和激励和模拟CPU L2************** #
SCALA_FILES := $(shell find ~/yqh/src/main/scala/YQH -name '*.scala')
CSRCS	   := $(shell find $(abspath sim/regress/) -type f \( -name '*.c' -o -name '*.cc' -o -name '*.cpp' \) 2>/dev/null)

# **************工具************** #
VERILATOR ?= /usr/local/bin/verilator

# **************Verilator参数************** #
# Chisel 的 SyncReadMem 会留下 mem_*_MPORT_en，赋值后没有读者。
# 这是 FIRRTL 拆 bank 的产物，不是端口悬空。-Wall 会把它当成错误。
VERILATOR_FLAGS ?= -Wall -Wno-UNUSEDSIGNAL -MMD --trace --build -cc --exe \
                   -O3 --x-assign fast --x-initial fast --noassert \
                   -report-unoptflat --timescale 1us/1us

# **************波形************** #
VCD ?= $(vcd)
ifeq ($(VCD),1)
  CFLAGS += -DVCD
endif

INC_PATH := $(abspath include/)
CFLAGS   += $(addprefix -I,$(INC_PATH)) -DTOP_NAME="V$(TOPNAME)"

# **************目标target************** #
verilog: $(SCALA_FILES)
	@mkdir -p $(RTL_DIR)
	@cd $(YQH_ROOT) && mill -i $(TOP).runMain $(MAIN) -td $(abspath $(RTL_DIR)) --emit-modules verilog || \
	  { echo "[make] 生成失败：先看上面的 scalac 报错；若只有 ClassNotFoundException，" >&2; \
	    echo "[make]   检查 MAIN=$(MAIN) 与 src 里的 package/object 名是否一致" >&2; exit 1; }

sim: $(CSRCS) verilog
	@rm -rf $(OBJ_DIR) 
#如果rtl没变那就可以注释了上面这行，只改了激励，可以加快编译
	$(VERILATOR) $(VERILATOR_FLAGS) -top $(TOPNAME) $(CSRCS) $(RTL_DIR)/*.v \
	  $(addprefix -CFLAGS , $(CFLAGS)) \
	  --Mdir $(OBJ_DIR) -o $(abspath $(SIM_BIN))

run:
	@mkdir -p regress_logs
	@echo " ---running---"
	$(SIM_BIN)
ifeq ($(VCD),1)
	@echo "---波形生成，放在regress_logs/$(TOPNAME).vcd中---"
else
	@echo "---如果需要查看波形请添加 vcd=1---"
endif

srun: sim run

GTKWAVE ?= gtkwave
WAVE    ?= $(wave).vcd

gtk:
	@echo '你要看的波形是$(WAVE)'
	@test -s "$(WAVE)" || { echo "[make] 没有波形：$(WAVE)。先 make srun 构建出波形文件" >&2; exit 1; }
	$(GTKWAVE) "$(WAVE)" ~/.gtkwaverc &

# **************clean************** #
clean:
	-rm -rf $(BUILD_DIR) regress_logs

cleanmill:
	-rm -rf out

cleanall:clean cleanmill

# **************help************** #
help:
	@echo "verilog" 生成 $(TOP_V)

# **************PHONY************** #
.PHONY: verilog sim run srun gtk store-sim clean clean_mill clean_all help