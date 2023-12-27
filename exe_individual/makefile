main: main.o calcular.o validar.o
	gcc -g main.o calcular.o validar.o -z noexecstack -o main

main.o: main.c calcular.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

calcular.o: calcular.s
	gcc -g -Wall -Wextra -fanalyzer -c calcular.s -o calcular.o	

validar.o: validar.s
	gcc -g -Wall -Wextra -fanalyzer -c validar.s -o validar.o	

clean:
	rm -f *.o main

run: main
	./main