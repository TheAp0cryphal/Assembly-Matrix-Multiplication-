SFLAGS = -S -O2
OFLAGS = -g -c
CFLAGS = -o ma

ma: main.o matrix.o
	gcc $(CFLAGS) matrix.o main.o

main.o:	main.s
	gcc $(OFLAGS) main.s

matrix.o:	matrix.s
	gcc $(OFLAGS) matrix.s

main.s:	main.c
	gcc $(SFLAGS) main.c

clean:	
	rm -f ma *.o 
