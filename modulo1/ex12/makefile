prog_sort: array_sort.o main.o
	clang array_sort.o main.o -o prog_sort	

array_sort.o: array_sort.c
	clang -g -Wall -Wextra -c array_sort.c -o array_sort.o

main.o: main.c
	clang -g -Wall -Wextra -c main.c -o main.o

clean:
	rm -f *.o prog_sort

run: prog_sort
	./prog_sort 
