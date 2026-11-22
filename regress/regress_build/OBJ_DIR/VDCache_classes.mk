# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VDCache.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VDCache \
	VDCache___024root__DepSet_h1692a5e7__0 \
	VDCache___024root__DepSet_h1692a5e7__1 \
	VDCache___024root__DepSet_h8f558fd1__0 \
	VDCache___024root__DepSet_h8f558fd1__1 \
	VDCache___024root__DepSet_h8f558fd1__2 \
	VDCache___024root__DepSet_h8f558fd1__3 \
	VDCache___024root__DepSet_h8f558fd1__4 \
	VDCache___024root__DepSet_h8f558fd1__5 \
	VDCache___024root__DepSet_h8f558fd1__6 \
	VDCache___024root__DepSet_h8f558fd1__7 \
	VDCache___024root__DepSet_h8f558fd1__8 \
	VDCache___024root__DepSet_h8f558fd1__9 \
	VDCache___024root__DepSet_h8f558fd1__10 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VDCache__ConstPool_0 \
	VDCache___024root__Slow \
	VDCache___024root__DepSet_h1692a5e7__0__Slow \
	VDCache___024root__DepSet_h8f558fd1__0__Slow \
	VDCache___024root__DepSet_h8f558fd1__1__Slow \
	VDCache___024root__DepSet_h8f558fd1__2__Slow \
	VDCache___024root__DepSet_h8f558fd1__3__Slow \
	VDCache___024root__DepSet_h8f558fd1__4__Slow \
	VDCache___024root__DepSet_h8f558fd1__5__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VDCache__Trace__0 \
	VDCache__Trace__1 \
	VDCache__Trace__2 \
	VDCache__Trace__3 \
	VDCache__Trace__4 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VDCache__Syms \
	VDCache__Trace__0__Slow \
	VDCache__Trace__1__Slow \
	VDCache__Trace__2__Slow \
	VDCache__Trace__3__Slow \
	VDCache__Trace__4__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
