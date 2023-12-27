prog_avg: average.o main.o
	clang average.o main.o -o prog_avg	
	
average.o: average.c
	clang -g -Wall -Wextra -c average.c -o average.o

main.o: main.c
	clang -g -Wall -Wextra -c main.c -o main.o

clean:
	rm -f *.o prog_avg

run: prog_avg
	./prog_avg


