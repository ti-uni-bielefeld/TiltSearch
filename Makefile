#===========================================================================
#
# Makefile --
# Makefile for WarpingSIMD demonstrator package
#
# This file is part of the following software:
# 
#    - the low-level C++ template SIMD library
#    - the SIMD implementation of the MinWarping and the 2D-Warping methods 
#      for local visual homing.
# 
# The software is provided based on the accompanying license agreement in the
# file LICENSE.md.
# The software is provided "as is" without any warranty by the licensor and
# without any liability of the licensor, and the software may not be
# distributed by the licensee; see the license agreement for details.
# 
# (C) Ralf Möller
#     Computer Engineering
#     Faculty of Technology
#     Bielefeld University
#     www.ti.uni-bielefeld.de
#
#===========================================================================

# 01. Feb 23 (Jonas Keller): added syntax only option (see below)

# see notes below marked ARM for compilation on ARM architecture

#===========================================================================
# binaries
#===========================================================================

binaries = $(patsubst %.C,%,$(wildcard src/*.C))

depend_files = $(addsuffix .d,$(binaries))

objects      = $(addsuffix .o,$(binaries))

#===========================================================================
# definitions and flags
#===========================================================================

# compiler ?= clang++-10
compiler ?= g++

# - rt library is needed for clock_gettime
# - pthread may be needed on some systems
# (you may have to remove -lrt on Mac)
libraries = -lm -lrt # -lpthread

# optimization flags
# -funroll-loops is faster in both min-warping phases
optflags ?= -O3 -funroll-loops

# play in template sandbox only: -DSIMDVEC_SANDBOX
sandbox_defines ?= # -DSIMDVEC_SANDBOX

# set this to something != 0 to only check syntax and not compile
syntax_only ?= 0

# set this to something != 0 to compile statically
static_bins ?= 0

# user defines
# - needed if we use constants in stdint.h: -D__STDC_LIMIT_MACROS
# - save assembly code: -masm=intel -save-temps -fverbose-asm
# - profiling: -pg for gprof
# - valgrind: -mssse3 instead of -march=native for valgrind --tool=callgrind
# - test different vector sets: -msse2, -msse3, -mssse3 -march=native
# - activate SIMDVec load/store alignment check: -DSIMD_ALIGN_CHK
# - use at least -std=c++11
# - for tilt-search programs, -std=c++17 is required, now used

# for compilation on/for ARM:
# - keep -march=native or use a specific architecture, e.g. -march=armv7-a
#   or use specific CPU, e.g. -mcpu=cortex-a15
# - replace -mfpmath=sse with -mfpu=neon or remove it, some compilers/architectures
#   require it, some don't
# - crosscompilation and emulation may require static_bins to be set to
#   something other than 0 (see above) if dynamic libraries are not available
# - may require -lpthread in libraries above

userdefs_arch     = -march=native -mfpmath=sse
userdefs_c        = -ggdb -fno-var-tracking
userdefs_cppstd   = -std=c++17
userdefs_cpp      =
# 18. Nov 23 (Jonas Keller): added more warnings
# recommended by:
# https://github.com/cpp-best-practices/cppbestpractices/blob/master/02-Use_the_Tools_Available.md#gcc--clang
# (also has explanations for the flags)
userdefs_warnings = -Wall -Wextra -pedantic -Wpedantic \
	-Wnon-virtual-dtor -Wcast-align -Wunused -Woverloaded-virtual \
	-Wsign-compare -Wmisleading-indentation -Wformat=2 \
	-Wimplicit-fallthrough \
	-Wno-format-nonliteral -Wno-cast-align

# 20. Sep 22 (Jonas Keller): use secure template overloads on Windows and disable
# warnings about unsafe functions
# see: https://learn.microsoft.com/en-us/cpp/c-runtime-library/security-features-in-the-crt
crt_sec_features_flags = -D_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES=1 \
	-D_CRT_SECURE_NO_WARNINGS

ifeq ($(syntax_only),0)
syntax_defines =
else
syntax_defines = -fsyntax-only
endif

ifeq ($(static_bins),0)
static_bins_flags =
else
static_bins_flags = -static
endif

# all flags (split into c and cpp (c++)) to avoid preprocessor warnings
flags_c        = $(userdefs_c) $(userdefs_warnings) $(optflags) $(sandbox_defines) $(EXTRA_DEFINES) $(syntax_defines) $(static_bins_flags)
flags_cppstd  ?= $(userdefs_cppstd)
flags_cpp      = $(flags_c) $(userdefs_cpp) $(flags_cppstd) $(crt_sec_features_flags)
flags_arch    ?= $(userdefs_arch)
flags_depends  = -MMD -MP
# change -I./external to point to the T-SIMD and WarpingSIMD libraries for developing TiltSearch in parallel with the WarpingSIMD and T-SIMD libraries
# see README_CONTRIBUTORS_AND_MAINTAINERS.md for more information
flags_includes = -I./external

# os dependent definitions
ifeq ($(OS),Windows_NT) 
RM = del /Q /F
RMDIR_R = rmdir /S /Q
RMDIR = rmdir /Q
MKDIR = mkdir
NULL = NUL
else
RM = rm -f
RMDIR_R = rm -rf
RMDIR = rmdir --ignore-fail-on-non-empty
MKDIR = mkdir -p
NULL = /dev/null
endif

build_dir ?= build
# make sure build_dir is not the root directory
ifeq ($(realpath $(build_dir)),$(realpath .))
$(error build directory cannot be the project root directory)
endif

.PHONY: all
all: $(binaries)

.PHONY: $(binaries)
$(binaries): %: $(build_dir)/%

#===========================================================================
# compiler
#===========================================================================

$(addprefix $(build_dir)/,$(objects)): $(build_dir)/%.o: %.C
	@echo compiling default $@ from $<
	@$(MKDIR) $(dir $@)
	@$(compiler) $(flags_depends) $(flags_arch) $(flags_cpp) $(flags_includes) -c $< -o $@

#===========================================================================
# linker
#===========================================================================

ifeq ($(syntax_only),0)
$(addprefix $(build_dir)/,$(binaries)): %: %.o
	@echo linking $@ from $< $(libraries)
	@$(MKDIR) $(dir $@)
	@$(compiler) $(flags_arch) $(flags_cpp) -o $@ $< $(libraries)
else
$(addprefix $(build_dir)/,$(binaries)): %: %.o ;
endif

#===========================================================================
# other rules
#===========================================================================

.PHONY: clean
clean:
	@echo "removing build directory \"$(build_dir)\""
	@$(RMDIR_R) $(build_dir) >$(NULL) 2>&1

.PHONY: info
info:
	@echo "vector extensions"
	@echo | $(compiler) -xc++ -dM -E - $(flags_arch) $(flags_c) \
		| grep -e SSE -e AVX -e POPCNT | sort
	@echo "compiler:          " $(compiler)
	@echo "flags_c:           " $(flags_c)
	@echo "flags_cpp:         " $(flags_cpp)
	@echo "flags_arch:        " $(flags_arch)
	@echo "binaries:          " $(binaries)
	@echo "objects:           " $(objects)

# for compileAndTest
.PHONY: flags-info
flags-info:
	@echo | $(compiler) -dM -E - $(flags_arch) \
		$(optflags) $(EXTRA_DEFINES) \
		| grep -e SSE -e AVX -e POPCNT | sort

# for compileAndTest to be compatible with PROG system
# echo -n is to prevent make from printing "nothing to be done"
.PHONY: platform_dirs dep
platform_dirs:
	@echo -n
dep:
	@echo -n

# 10. Feb 23 (Jonas Keller): added format rule
# 10. Jun 24 (rm): this creates new files instead of the linked ones:
# @clang-format -i *.C *.H
.PHONY: format
format:
	@echo "formatting all .C and .H files in src/"
	@./scripts/format_cpp.sh src

-include $(addprefix $(build_dir)/,$(depend_files))
