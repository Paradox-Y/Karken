CC      ?= gcc
CFLAGS  ?= -Wall -Wextra -std=c11
LDFLAGS ?=

SRC     := main.c editor.c buffer.c input.c terminal.c
OBJ     := $(SRC:%.c=build/%.o)
TARGET  := build/karken

ifeq ($(OS),Windows_NT)
    TARGET := build/karken.exe
endif

.PHONY: all clean run

all: $(TARGET)

$(TARGET): $(OBJ) | build
	$(CC) $(OBJ) -o $@ $(LDFLAGS)

build/%.o: %.c kraken.h | build
	$(CC) $(CFLAGS) -c $< -o $@

build:
	mkdir -p build

clean:
	rm -rf build

run: all
	./$(TARGET)
