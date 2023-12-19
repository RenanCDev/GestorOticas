run: all
	./main

all:
	clear;
	gcc -c -Wall */*.c;
	gcc -c -Wall */*.h;
	gcc -c -Wall main.c;
	gcc -o main *.o;
	rm *.o;
	rm */*.gch;