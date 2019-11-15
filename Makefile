#Makefile

CC=gcc
CFLAGS= -Wall

all: mymaths mymathd mains maind

mymaths: basicMath.o power.o myMath.h
	ar -rcs libmyMath.a basicMath.o power.o

mymathd:basicMath.o power.o myMath.h
	$(CC) -shared -o libmyMath.so basicMath.o power.o

maind: main.o mymathd
	$(CC) $(CFLAGS) -o maind main.o ./libmyMath.so

mains: main.o mymaths
	$(CC) $(CFLAGS) -o mains main.o libmyMath.a

main.o: main.c myMath.h
	$(CC) $(CFLAGS) -fpic -c main.c

power.o: power.c myMath.h
	$(CC) $(CFLAGS) -fpic -c power.c

basicMath.o: basicMath.c myMath.h
	$(CC) $(CFLAGS) -fpic -c basicMath.c

clean:
	rm -f*.o *.a *.so mains maind
