$(CC) = gcc

main: main.o add.o sub.o
	$(CC) main.o add.o sub.o -o output
main.o: main.c file.h
	$(CC) -c main.c
add.o: add.c file.h
	$(CC) -c add.c
sub.o: sub.c file.h
	$(CC) -c sub.c
clean:
	rm -rf *.o output
