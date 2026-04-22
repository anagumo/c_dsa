include makefiles/config.mk

BUILD_DIR ?= build

# Usage:
#   make build SRC=path/to/program.c
#   make run   SRC=path/to/program.c
#
# Optional:
#   OUT=build/myname

# If OUT isn't provided, put the binary in build/ and name it after the .c file.
OUT ?= $(BUILD_DIR)/$(notdir $(basename $(SRC)))

.PHONY: build run clean

build:
	@test -n "$(SRC)" || (echo "Usage: make build SRC=path/to/file.c [OUT=build/name]" && exit 2)
	@mkdir -p "$(dir $(OUT))"
	$(CC) $(CFLAGS) $(CPPFLAGS) "$(SRC)" $(CS50_LINK) -o "$(OUT)"

run: build
	./"$(OUT)"

clean:
	rm -rf "$(BUILD_DIR)"
