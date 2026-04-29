include makefiles/config.mk

BUILD_DIR ?= build

# Usage (run from inside cs50/):
#   make build SRC=week_1/005_meow/me.c
#   make run   SRC=week_1/005_meow/me.c
#
# Optional:
#   OUT=build/myname

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

