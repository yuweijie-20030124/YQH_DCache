# YQH的回归测试脚本 Chisel / Verilator 构建脚本
# this Makefile is of yqh regress test script to generate Chisel -> verilog by Verilator and simulation environment

# if you only type in "make" is equal to "make verilog"
.DEFAULT_GOAL := verilog

# the porject target
TOP	 	?= top
TOPNAME ?= DCache
MAIN    ?= YQH.cache.topMain

# the project root 
YQH_ROOT := ~/yqh
REGRESS_ROOT := $(YQH_ROOT)/regress
BUILD_DIR := regress_build
RTL_DIR	  := $(BUILD_DIR)/verilog
OBJ_DIR   := $(BUILD_DIR)/OBJ_DIR
SIM_BIN   := $(BUILD_DIR)/$(TOPNAME)
TOP_V	  := $(RTL_DIR)/$(TOPNAME).v

# simulation source cpp and SCALA FILE
SCALA_FILES := $(shell find $(YQH_ROOT)/src/main/scala/YQH -name '*.scala')
CSRCS	   := $(shell find $(REGRESS_ROOT) \
		\( -path $(REGRESS_ROOT)/$(BUILD_DIR) -o -path $(REGRESS_ROOT)/out -o -path $(REGRESS_ROOT)/checks \) -prune -o \
		-type f \( -name '*.c' -o -name '*.cc' -o -name '*.cpp' \) -print 2>/dev/null)

# TOOL and TOOL parameter
VERILATOR ?= /usr/local/bin/verilator
VERILATOR_FLAGS ?= -Wall -Wno-UNUSEDSIGNAL -MMD --trace --build -cc --exe \
                   -O3 --x-assign fast --x-initial fast --noassert \
                   -report-unoptflat --timescale 1us/1us

# WAVE 
VCD ?= $(vcd)
ifeq ($(VCD),1)
  CFLAGS += -DVCD
endif

# choose test and seed and maxcycle
TEST ?= $(if $(test),$(test),single_load_miss)
SEED ?= $(if $(seed),$(seed),1)
MAX_CYCLES ?= $(if $(max_cycles),$(max_cycles),10000)

INC_PATH := $(abspath include/)
CFLAGS   += -std=c++20 $(addprefix -I,$(INC_PATH)) -I$(REGRESS_ROOT) -DTOP_NAME="V$(TOPNAME)"

# target
verilog: $(SCALA_FILES)
	@mkdir -p $(RTL_DIR)
	@cd $(YQH_ROOT) && mill -i $(TOP).runMain $(MAIN) -td $(abspath $(RTL_DIR)) --emit-modules verilog || \
	  { echo "[make] 生成失败：先看上面的 scalac 报错；若只有 ClassNotFoundException，" >&2; \
	    echo "[make]   检查 MAIN=$(MAIN) 与 src 里的 package/object 名是否一致" >&2; exit 1; }

sim: $(CSRCS) verilog
# 	@rm -rf $(OBJ_DIR) 
#如果rtl没变那就可以注释了上面这行，只改了激励，可以加快编译
	$(VERILATOR) $(VERILATOR_FLAGS) -top $(TOPNAME) $(CSRCS) $(RTL_DIR)/*.v \
	  $(addprefix -CFLAGS , $(CFLAGS)) \
	  --Mdir $(OBJ_DIR) -o $(abspath $(SIM_BIN))

run:
	@mkdir -p regress_logs
	@echo " ---running---"
	$(SIM_BIN) --test $(TEST) --seed $(SEED) --max-cycles $(MAX_CYCLES) $(if $(filter 1,$(VCD)),--vcd,)
ifeq ($(VCD),1)
	@echo "---波形生成，放在regress_logs/$(TEST).vcd中---"
else
	@echo "---如果需要查看波形请添加 vcd=1---"
endif

srun: sim run

all: sim
	@$(MAKE) --no-print-directory run TEST=all SEED=$(SEED) MAX_CYCLES=$(MAX_CYCLES) VCD=$(VCD)

	GTKWAVE ?= gtkwave
WAVE    ?= $(if $(wave),$(wave),$(TEST))
WAVE_FILE := regress_logs/$(patsubst %.vcd,%,$(WAVE)).vcd
# ~/.gtkwaverc 只放显示层级和快捷键。信号列表在 .gtkw，Ctrl+S 写回它，不会冲掉配置。
WAVE_SAVE ?= $(YQH_ROOT)/single_load_miss.gtkw

gtk:
	@echo '你要看的波形是$(WAVE_FILE)'
	@test -s "$(WAVE_FILE)" || { echo "[make] 没有波形：$(WAVE_FILE)。先 make run TEST=$(patsubst %.vcd,%,$(WAVE)) VCD=1 生成波形；代码改动后需先 make sim" >&2; exit 1; }
	@test -s "$(WAVE_SAVE)" || { echo "[make] 没有信号列表：$(WAVE_SAVE)" >&2; exit 1; }
	$(GTKWAVE) -r "$(HOME)/.gtkwaverc" "$(WAVE_FILE)" "$(WAVE_SAVE)" &

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
.PHONY: verilog sim run srun all gtk store-sim clean clean_mill clean_all help