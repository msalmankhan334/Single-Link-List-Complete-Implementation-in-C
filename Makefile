# _*_ Makefile _*_

out: ftns.o main.o ftnsheader.h
	gcc ftns.o main.o -o out
ftns.o: ftns.c ftnsheader.h
	gcc -c ftns.c
main.o: main.c
	gcc -c main.c
clean:
	rm -f *.o out