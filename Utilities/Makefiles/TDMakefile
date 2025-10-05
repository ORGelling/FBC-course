# Top-level Makefile for FBC++/Set4, exercises 28-31 build on each other

CXX := g++
CXXFLAGS := -std=c++26 -Wall -Werror

# List of exercises that build on previous ones
# Only this needs changing for future sets
EX_LIST := 28 29 30 31

# List all .cc sources in a directory and its subdirs, except main.cc
define srcs_no_main
$(shell find $(1) -name "*.cc" ! -name "main.cc")
endef

# List all .cc sources in a directory and its subdirs (including main.cc)
define srcs_with_main
$(shell find $(1) -name "*.cc")
endef

# For previous exercises: use ../ prefix (relative to subdir)
define prev_srcs
$(foreach ex,$(filter-out $(1),$(filter-out 0,$(shell seq 28 $(1)))),$(foreach f,$(call srcs_no_main,$(ex)),../$(f)))
endef

# For current exercise: no prefix needed (from within subdir)
define this_srcs
$(shell find $(1) -name "*.cc" | sed "s|^$(1)/||")
endef

# All sources needed for a given exercise
define ex_srcs
$(call prev_srcs,$(1)) $(call this_srcs,$(1))
endef

# Default target: build all
all: $(EX_LIST)

# Build each exercise's main, passing all relevant sources
$(EX_LIST):
	$(MAKE) -C $@ main EXCHAIN="$(call ex_srcs,$@)"

# Clean everything in all exercise directories
clean:
	for ex in $(EX_LIST); do $(MAKE) -C $$ex clean EXCHAIN="..."; done

.PHONY: all clean $(EX_LIST)
