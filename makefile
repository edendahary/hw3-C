CC = gcc
FLAGS = -g -Wall

all: isort isort.o mainsort.o txtfind mainfind.o txtfind.o

main.o: mainsort.c isort.h
	$(CC) $(FLAGS) -c mainsort.c

isort.o: isort.c isort.h
	$(CC) $(FLAGS) -c isort.c

isort: mainsort.o isort.o
	$(CC) $(FLAGS) mainsort.o isort.o -o isort

txtfind.o: txtfind.c txtfind.h
	$(CC) $(FLAGS) -c txtfind.c

maint.o: mainfind.c txtfind.h
	$(CC) $(FLAGS) -c mainfind.c

txtfind: mainfind.o txtfind.o
	$(CC) $(FLAGS) mainfind.o txtfind.o -o txtfind

.PHONY: clean all

clean:
	rm -f *.o isort txtfind
