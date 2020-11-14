
# Makefile for periodic-table-game

CC = gcc
CFLAGS = -g -Wall -std=c99
LDFLAGS = -g

all: periodic_table_game

periodic_table_game: helper_functions.h periodic_table.c


.PHONY: clean
clean:
	rm -rf main periodic_table *.o a.out

.PHONY: launch
launch: periodic_table
	./periodic_table elements.txt
