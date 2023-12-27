prog_fake_hash: fake_hash.o get_ascii_code.o func_sum.o main.o
	clang fake_hash.o get_ascii_code.o func_sum.o main.o -o prog_fake_hash	
	
fake_hash.o: fake_hash.c
	clang -g -Wall -Wextra -c fake_hash.c -o fake_hash.o
	
get_ascii_code.o: get_ascii_code.c
	clang -g -Wall -Wextra -c get_ascii_code.c -o get_ascii_code.o

func_sum.o: func_sum.c
	clang -g -Wall -Wextra -c func_sum.c -o func_sum.o

main.o: main.c
	clang -g -Wall -Wextra -c main.c -o main.o

clean:
	rm -f *.o prog_fake_hash

run: prog_fake_hash
	./prog_fake_hash
