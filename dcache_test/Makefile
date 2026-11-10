# dcache_test：跑五项定向测试，并写出每个测试自己的 VCD。
# 不改 DCache RTL，也不动仓库根目录那条 store-txreq 波形。
#
#   make run                     编译并跑完全部测试
#   make run DTRACE=1            同时把 flit 打到终端
#   make run VCD=0               只跑测试，不写波形
#   make gtk TEST=load-miss      用 GTKWave 打开某一项
#   make verilog                 RTL 比 build/verilog 新时，回根目录重新生成
#   make clean
#
# 波形时间：周期 10ns。0-5ns 时钟为低，激励已经驱动；5ns 是上升沿。
# 每个测试都会重新 reset，所以各自一个文件，时间从 0 开始。

ROOT      := /home/ywj/yqh/dcache_test
YQH       := /home/ywj/yqh
RTL_DIR   := $(YQH)/build/verilog
SRC       := $(ROOT)/src/main.cpp $(ROOT)/src/home.cpp
BUILD     := $(ROOT)/build
OBJ       := $(BUILD)/obj
BIN       := $(BUILD)/dcache_v1
LOGS      := $(ROOT)/logs
VERILATOR ?= /usr/local/bin/verilator
GTKWAVE   ?= gtkwave

VCD  ?= 1
TEST ?= load-miss
TESTS := load-miss store-miss-load store-hit dirty-replace backpressure

RTL_V := $(wildcard $(RTL_DIR)/*.v)

ifeq ($(VCD),0)
  TRACE    :=
  WAVE_DEF :=
else
  TRACE    := --trace
  WAVE_DEF := -CFLAGS -DWAVE=1
endif

ifeq ($(DTRACE),1)
  RUN_ENV := DTRACE=1
else
  RUN_ENV :=
endif

VERILATOR_FLAGS := -Wno-fatal -Wno-WIDTH -Wno-UNUSED -Wno-UNOPTFLAT \
	-Wno-PINCONNECTEMPTY -Wno-DECLFILENAME -Wno-TIMESCALEMOD \
	-MMD --build -cc --exe -O1 -j 8 \
	--x-assign 0 --x-initial 0 --timescale 1ns/1ns \
	$(TRACE) $(WAVE_DEF) -top DCache

TRACE_ID := $(VERILATOR_FLAGS)

.DEFAULT_GOAL := run

.PHONY: run sim gtk verilog clean help flags

help:
	@echo "make run                  编译并跑 $(TESTS)"
	@echo "make run DTRACE=1         终端同时打印 flit"
	@echo "make run VCD=0            不写波形"
	@echo "make gtk TEST=<name>      打开 $(LOGS)/<name>.vcd"
	@echo "  可选：$(TESTS)"
	@echo "make verilog              在 $(YQH) 重新生成 Verilog"
	@echo "make clean                删除 $(BUILD) 和 $(LOGS)"

verilog:
	$(MAKE) -C $(YQH) verilog

# flags 是 order-only：每次都检查，但只有开关变化才删掉旧二进制。
# 源码没变时 make run 不会重新跑 Verilator。
flags:
	@mkdir -p $(OBJ) $(LOGS)
	@printf '%s\n' '$(TRACE_ID)' > $(OBJ)/cflags.txt.new
	@if cmp -s $(OBJ)/cflags.txt.new $(OBJ)/cflags.txt; then \
	  rm -f $(OBJ)/cflags.txt.new; \
	else \
	  mv $(OBJ)/cflags.txt.new $(OBJ)/cflags.txt; \
	  rm -rf $(OBJ)/VDCache* $(OBJ)/*.o $(OBJ)/*.a $(OBJ)/*.d $(BIN); \
	fi

$(BIN): $(SRC) $(RTL_V) | flags
	@test -n "$(RTL_V)" || { echo "[make] 没有 Verilog：先 make verilog" >&2; exit 1; }
	@mkdir -p $(OBJ) $(LOGS)
	$(VERILATOR) $(VERILATOR_FLAGS) \
	  $(SRC) $(RTL_V) \
	  --Mdir $(OBJ) -o $(BIN)

sim: $(BIN)

run: $(BIN)
	@mkdir -p $(LOGS)
	$(RUN_ENV) $(BIN)
	@if [ "$(VCD)" != "0" ]; then \
	  for t in $(TESTS); do \
	    test -s "$(LOGS)/$$t.vcd" || { echo "[make] 缺波形 $(LOGS)/$$t.vcd" >&2; exit 1; }; \
	  done; \
	  echo "波形目录：$(LOGS)"; \
	  ls -lh $(LOGS)/*.vcd; \
	fi

gtk:
	@test -s "$(LOGS)/$(TEST).vcd" || { echo "[make] 没有波形：$(LOGS)/$(TEST).vcd 。先 make run" >&2; exit 1; }
	$(GTKWAVE) "$(LOGS)/$(TEST).vcd" $(wildcard $(HOME)/.gtkwaverc) &

clean:
	rm -rf $(BUILD) $(LOGS)

