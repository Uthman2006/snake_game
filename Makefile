CC = gcc
CFLAGS = -Wall -Werror -Wextra -std=c11
SNAKE_C = snake.c
SNAKE_H = snake.h
TABLE_C = table.c
TABLE_H = table.h
MAIN_C = main.c
all: snake.o table.o main
main: snake.o table.o
	$(CC) $(CFLAGS) $^ $(MAIN_C) -o $@
snake.out : $(SNAKE_C) $(SNAKE_H) 
	$(CC) $(CFLAGS) $< -c $@
table.out : $(TABLE_C) $(TABLE_H)
	$(CC) $(CFLAGS) $< -c $@
rebuild : clean all
clean : 
	rm -r *.o main