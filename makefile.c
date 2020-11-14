
# Makefile for periodic-table-game

CC = gcc
CFLAGS = -g -Wall -std=c99
LDFLAGS = -g

all: periodic_table_program

periodic_table_program: tablecontents.h periodic_table_program.c


.PHONY: clean
clean:
	rm -rf main periodic_table_program *.o a.out

.PHONY: launch
launch: periodic_table_program
	./periodic_table_program.txt
