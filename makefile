#MakeFile for modern-periodic-table
all: modern-periodic-table

modern-periodic-table: periodic_table_program.o
                        gcc periodic_table_program.o -o modern-periodic-table

periodic_table_program.o: periodic_table_program.c
                        gcc -c periodic_table_program.c

clean:
                        rm -rf *o modern-periodic-table
