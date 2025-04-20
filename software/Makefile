#
# Makefile for the project `laempli`
#

SHELL := /usr/bin/env bash

# project/output name
TARGET := laemp

# enable/disable debug symbols (0 = disable, 1 = enable)
DEBUG  := 1

# directories
BUILD_DIR  := build
OBJ_DIR    := $(BUILD_DIR)/.obj
SRC_DIR    := source
INC_DIR    := include
SYS_DIR    := system

# sources
AS_SOURCES := $(SYS_DIR)/rp2350-startup-routine.s
C_SOURCES  := $(SYS_DIR)/syscalls.c \
			  $(SYS_DIR)/sysmem.c \
			  $(SRC_DIR)/main.c

# commands
PREFIX := arm-none-eabi-
CC     := $(PREFIX)gcc
CP     := $(PREFIX)objcopy
SZ     := $(PREFIX)size
HEX    := $(CP) -O ihex
BIN    := $(CP) -O binary -S

# flags
TARGET_FLAGS := -mcpu=cortex-m33 \
			    -mfpu=fpv5-sp-d16 \
			    -mfloat-abi=hard \
			    -mthumb \
			    -mlittle-endian

GCC_FLAGS    := -Wall \
				-Wextra \
				-fdata-sections \
				-ffunction-sections

ifeq ($(DEBUG), 1)
	DEBUG_FLAGS := -g3 -O0
else
	DEBUG_FLAGS := -O2
endif

AS_DEFS   := 
AS_INC    := 
AS_FLAGS  := -x assembler-with-cpp $(TARGET_FLAGS) $(GCC_FLAGS) $(AS_DEFS) $(AS_INC) $(DEBUG_FLAGS)

C_DEFS    := -DRP2350_PACKAGE=QFN60
C_INC     := -I$(INC_DIR)
C_FLAGS   := $(TARGET_FLAGS) $(GCC_FLAGS) $(C_DEFS) $(C_INC) $(DEBUG_FLAGS)

LIBRARIES := -lc -lm -lnosys
LD_SCRIPT := $(SYS_DIR)/rp2350-linker-script.ld
# to reduce the binary size add `-specs=nano.specs`
# this also reduces the available features (e.g. printf will not print floats)
LD_FLAGS  := $(TARGET_FLAGS) -T$(LD_SCRIPT) $(LIBRARIES) -Wl,--gc-sections

# object files
OBJECTS := $(addprefix $(OBJ_DIR)/,$(notdir $(C_SOURCES:.c=.o)))
vpath %.c $(sort $(dir $(C_SOURCES)))
OBJECTS += $(addprefix $(OBJ_DIR)/,$(notdir $(AS_SOURCES:.s=.o)))
vpath %.s $(sort $(dir $(AS_SOURCES)))

# rules
.PHONY: all clean rebuild test

all: $(BUILD_DIR)/$(TARGET).elf $(BUILD_DIR)/$(TARGET).hex $(BUILD_DIR)/$(TARGET).bin $(BUILD_DIR)/$(TARGET).uf2

# build objects from c files
$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	$(CC) -c $(C_FLAGS) $< -o $@

# build objects from assembly files
$(OBJ_DIR)/%.o: %.s | $(OBJ_DIR)
	$(CC) -c $(AS_FLAGS) $< -o $@

# build binary file
$(BUILD_DIR)/$(TARGET).elf: $(OBJECTS) | $(OBJ_DIR)
	$(CC) $(OBJECTS) $(LD_FLAGS) -o $@
	$(SZ) $@

# generate .hex file
$(BUILD_DIR)/%.hex: $(BUILD_DIR)/%.elf | $(OBJ_DIR)
	$(HEX) $< $@

# generate .bin file
$(BUILD_DIR)/%.bin: $(BUILD_DIR)/%.elf | $(OBJ_DIR)
	$(BIN) $< $@

# generate .uf2 file
$(BUILD_DIR)/%.uf2: $(BUILD_DIR)/%.elf | $(OBJ_DIR)
	elf2uf2-rs $<

# ensure that the build dir exists
$(OBJ_DIR):
	@mkdir -p $@

clean: | $(OBJ_DIR)
	@rm -rf $(BUILD_DIR)/*.{elf,hex,bin,uf2}
	@rm -rf $(OBJ_DIR)/*
	@echo "output files deleted"

flash: all $(BUILD_DIR)/flash.jlink
	JLinkExe -Device $(DEVICE) -NoGui 1 -ExitOnError 1 -CommandFile $(BUILD_DIR)/flash.jlink

# add path to binary to the jlink command file
$(BUILD_DIR)/flash.jlink: $(CMD_DIR)/flash.jlink Makefile
	$(shell  cat $(CMD_DIR)/flash.jlink | sed "s|<path-to-binary>|$(BUILD_DIR)/$(TARGET).hex|g" > $(BUILD_DIR)/flash.jlink)

rebuild: clean all

test:
	@echo "assembly source files: $(AS_SOURCES)"
	@echo "c source files: $(C_SOURCES)"
	@echo "object files: $(OBJECTS)"

