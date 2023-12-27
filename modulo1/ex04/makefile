prog_vars: copy_vec.o main.o
	clang copy_vec.o main.o -o prog_vars	

copy_vec.o: copy_vec.c
	clang -g -Wall -Wextra -c copy_vec.c -o copy_vec.o

main.o: main.c
	clang -g -Wall -Wextra -c main.c -o main.o

clean:
	rm -f *.o prog_vars

run: prog_vars
	./prog_vars 
