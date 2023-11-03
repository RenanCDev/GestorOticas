run: all
	./main

all:
	gcc -c -Wall *.c;
	gcc -c -Wall *.h; 
	gcc -o main *.o;
	rm *.o *.gch
clean:
	rm *.dat