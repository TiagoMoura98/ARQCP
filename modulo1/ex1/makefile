prog_pointers: hexa_address.o main.o
	clang hexa_address.o main.o -o prog_pointers	
	
hexa_address.o: hexa_address.c
	clang -g -Wall -Wextra -c hexa_address.c -o hexa_address.o

main.o: main.c
	clang -g -Wall -Wextra -c main.c -o main.o

clean:
	rm -f *.o prog_pointers

run: prog_pointers
	./prog_pointers 
