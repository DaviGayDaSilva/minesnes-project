# Makefile for SNES compilation

# Compiler settings
CC = cc65
AS = ca65
LD = ld65

# Target file name
TARGET = game

# Source files
SRC = main.c otherfile.c
OBJ = $(SRC:.c=.o)

# Compile rules
.PHONY: all clean

all: $(TARGET).smc

$(TARGET).smc: $(OBJ)
	$(LD) -o $@ $^ -t snes

%.o: %.c
	$(CC) -O -t snes -o $@ $<

clean:
	rm -f $(OBJ) $(TARGET).smc
