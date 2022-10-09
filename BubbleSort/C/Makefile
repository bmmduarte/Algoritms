all: build

build: main.o bubble_sort.o
	gcc -Wall -o example main.o bubble_sort.o

main.o : main.c
	gcc main.c -o main.o -c

bubble_sort.o : bubble_sort.c
	gcc bubble_sort.c -o bubble_sort.o -c

clean : 
	rm -f *.o