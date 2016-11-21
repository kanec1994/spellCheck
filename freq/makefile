CC=g++ -std=c++11 -g

all: main

main: main.cpp textfreq.o
	$(CC) main.cpp textfreq.o -o main

textfreq.o: textfreq.cpp textfreq.hpp
	$(CC) -c textfreq.cpp -o textfreq.o

clean:
	-rm *.o main
