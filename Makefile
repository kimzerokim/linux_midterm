all : test

main.o : main.c
	gcc -c -Wall main.c
func.o : func.c
	gcc -c -Wall func.c

test : main.o func.o
	gcc -o exe main.o func.o
clean : 
	rm -rf *.o
