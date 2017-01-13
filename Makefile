CC=gcc
LD=gcc
ifdef DEBUG
CFLAGS= -std=c99 -ggdb -Wall
else
CFLAGS= -std=c99 -O3
endif
LIBS= -lm

testRectangles: testRectangles.o rectangles.o rectangles.h
	$(LD) -o testRectangles rectangles.o testRectangles.o $(LIBS)

testRectangles.o: testRectangles.c
	$(CC) $(CFLAGS) -o testRectangles.o -c testRectangles.c

rectangles.o: rectangles.c rectangles.h
	$(CC) $(CFLAGS) -o rectangles.o -c rectangles.c

clean:
	rm *.o
	rm testRectangles
