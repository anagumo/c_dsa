# Shared build config for CS50-style C programs.

CC ?= clang
CFLAGS ?= -std=c11 -Wall -Wextra -Werror

# libcs50 locations (your current setup installed these in /usr/local).
CS50_INC ?= /usr/local/include
CS50_LIB ?= /usr/local/lib

# Static linking avoids macOS dyld lookup issues.
CS50_LINK ?= $(CS50_LIB)/libcs50.a

CPPFLAGS += -I$(CS50_INC)

# Shared build config for CS50-style C programs.
#
# Why this exists:
# - On Apple Silicon/macOS, linking libcs50 dynamically can fail at runtime unless
#   rpath/install_name is configured.
# - Linking statically against libcs50.a is the most portable "just works" setup.

CC ?= clang
CFLAGS ?= -std=c11 -Wall -Wextra -Werror

# libcs50 installed here on this machine.
CS50_INC ?= /usr/local/include
CS50_LIB ?= /usr/local/lib

# Prefer static linking to avoid dyld "Library not loaded" issues.
CS50_LINK ?= $(CS50_LIB)/libcs50.a

CPPFLAGS += -I$(CS50_INC)
