CC = gcc
CFLAGS = -Wall -Werror -Wextra -std=c11
SNAKE_C = src/snake.c
SNAKE_H = src/snake.h
TABLE_C = src/table.c
TABLE_H = src/table.h
MAIN_C = src/main.c
all: snake.o table.o main
main: snake.o table.o
	$(CC) $(CFLAGS) $^ $(MAIN_C) -o $@
snake.o : $(SNAKE_C) $(SNAKE_H) 
	$(CC) $(CFLAGS) $< -c 
table.o : $(TABLE_C) $(TABLE_H)
	$(CC) $(CFLAGS) $< -c 
rebuild : clean all
start : main 
	./main
clean : 
	rm -r *.o main