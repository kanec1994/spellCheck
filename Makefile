# Compiler definition
CC= g++ -std=c++11
libs= freq.o editDist.o reader.o dictOperations.o

all: main

main: main.cpp $(libs)
	$(CC) main.cpp freq/freq.o editDist/editDist.o reader/reader.o dictOperations/dictOperations.o -o main

# Build library objects
freq.o: ./freq/freq.cpp ./freq/freq.hpp
	cd freq && $(CC) -c freq.cpp -o freq.o

editDist.o: ./editDist/editDist.cpp ./editDist/editDist.hpp
	cd editDist && $(CC) -c editDist.cpp -o editDist.o

reader.o: ./reader/reader.cpp ./reader/reader.hpp
	cd reader && $(CC) -c reader.cpp -o reader.o
	
dictOperations.o: ./dictOperations/dictOperations.cpp ./dictOperations/dictOperations.hpp
	cd dictOperations && $(CC) -c dictOperations.cpp -o dictOperations.o

clean:
	rm */*.o main
