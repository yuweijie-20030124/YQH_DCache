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
CSRCS       := $(shell find $(abspath sim_c) -name '*.c' -o -name '*.cc' -o -name '*.cpp')

# ------------------------------------------------------------------ 工具 --
VERILATOR ?= verilator

# ------------------------------------------------------------------ Verilator 参数 --
VERILATOR_FLAGS ?= -Wall -MMD --trace --build -cc --exe \
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
	@echo
	@echo "------------ RUN --------------"
	$(SIM_BIN)
ifeq ($(VCD),1)
	@echo "----- 波形：logs/$(TOPNAME).vcd -----"
else
	@echo "----- 需要波形请加 vcd=1 -----"
endif

srun: sim run

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
	@echo "clean      删除 $(BUILD_DIR)/ 和 logs/"
	@echo "clean_mill 删除 out/"
	@echo "help       显示本帮助"

.PHONY: verilog lint sim run srun clean clean_mill clean_all help
