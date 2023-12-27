prog_trim: trim_string.o main.o
	clang trim_string.o main.o -o prog_trim	

trim_string.o: trim_string.c
	clang -g -Wall -Wextra -c trim_string.c -o trim_string.o

main.o: main.c
	clang -g -Wall -Wextra -c main.c -o main.o

clean:
	rm -f *.o prog_trim

run: prog_trim
	./prog_trim 
