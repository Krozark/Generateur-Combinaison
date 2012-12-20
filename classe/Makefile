CC = g++
FLAGS = -g -std=c++0x

all: main

.cpp.o:
	$(CC) $(FLAGS) -o "$@" -c "$<"

.c.o:
	$(CC) $(FLAGS) -o "$@" -c "$<"

main: main.cpp Combinaison.o
	$(CC) $(FLAGS) -o $@ $^


clean:
	@rm -f *.o
	@rm -f main
