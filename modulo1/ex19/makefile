prog_swap: swap.o main.o
	clang swap.o main.o -o prog_swap	

swap.o: swap.c
	clang -g -Wall -Wextra -c swap.c -o swap.o

main.o: main.c
	clang -g -Wall -Wextra -c main.c -o main.o

clean:
	rm -f *.o prog_swap

run: prog_swap
	./prog_swap 
