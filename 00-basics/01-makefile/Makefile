app: util.o main.o
	gcc util.o main.o -o app

main.o: main.c util.h
	gcc -c main.c -o main.o

util.o: util.c util.h
	gcc -c util.c -o util.o

clean:
	rm -f app main.o util.o
