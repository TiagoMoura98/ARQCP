prog_swap: main.o
	clang main.o -o prog_swap	

main.o: main.c
	clang -g -Wall -Wextra -c main.c -o main.o

clean:
	rm -f *.o prog_swap

run: prog_swap
	./prog_swap 
