#*******************************************************************************
# Author: HAI Cao Xuan (joachimcao@proton.me)
# Descr.: Makefile
#*******************************************************************************
# Copyright (c) 2023 HAI Cao Xuan
#*******************************************************************************

FILES      = $(shell cat filelist)

VER        = verilator
VER_COV    = verilator_coverage

## Lint flags
LINT       = -Wall --lint-only -sv

## Verilator flags
VER_FLAGS += -sv -cc
VER_FLAGS += -Wall
# enable assertion
VER_FLAGS += --assert
# make waveforms
VER_FLAGS += --trace-fst
VER_FLAGS += --build -j
# optimize
VER_FLAGS += -x-initial unique
VER_FLAGS += -x-assign unique
VER_FLAGS += -O3 -CFLAGS -DCOVERAGE

# Input files
VER_INPUT = $(FILES) top.sv --top-module top -I../src

.PHONY: help
help:
	@echo -e "make [option]"
	@echo -e "\tbuild   build modules"
	@echo -e "\tsim     run simulation"
	@echo -e "\twave    open waveforms"
	@echo -e "\tclean   clean the working directory"
	@echo -e "\thelp    print this help"

.PHONY: lint
lint:
	@echo "::LINT CHECK::"
	@$(VER) $(LINT) $(VER_INPUT)

.PHONY: build
build: ./obj_dir/Vtop
./obj_dir/Vtop: $(FILES) top.sv tb_top.cpp
	@echo "::SIMULATING::"
	$(VER) $(VER_FLAGS) $(VER_INPUT) +define+$(define) --exe tb_top.cpp

.PHONY: sim
sim: ./obj_dir/Vtop
	@./obj_dir/Vtop

.PHONY: wave
wave: wave.fst
	@gtkwave wave.fst wave.gtkw

.PHONY: clean
clean:
	@rm -rf obj_dir wave*
	@echo "::CLEAN::"
