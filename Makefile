CC = gcc
CFLAGS = -Wall -g

all: haiku

haiku: haiku.c haiku.h
	${CC} ${CFLAGS} -o haiku haiku.c

clean:
	rm -f *.o
	rm haiku
