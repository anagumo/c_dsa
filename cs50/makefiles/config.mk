# Shared build config for CS50-style C programs.

CC ?= clang
CFLAGS ?= -std=c11 -Wall -Wextra -Werror

# libcs50 locations (your current setup installed these in /usr/local).
CS50_INC ?= /usr/local/include
CS50_LIB ?= /usr/local/lib

# Static linking avoids macOS dyld lookup issues.
CS50_LINK ?= $(CS50_LIB)/libcs50.a

CPPFLAGS += -I$(CS50_INC)

