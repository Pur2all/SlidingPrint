main: main.o matrix.o
	gcc main.o matrix.o -o SlidingPrint

main.o:
	gcc -c main.c

matrix.o:
	gcc -c matrix.c

clean:
	rm -f *.o
