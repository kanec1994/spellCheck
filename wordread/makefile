CC= g++ -std=c++11 -g
all: main

main: main.cpp reader.o
	$(CC) main.cpp reader.o -o main

reader.o: reader.cpp reader.hpp
	$(CC) -c reader.cpp -o reader.o
clean:
	-rm *.o main
