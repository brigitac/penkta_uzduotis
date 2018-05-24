CC = clang++
CXXFLAGS = -c -Wall -std=c++11 -O3

all: main.o 
	$(CC) $^
main.o: main.cpp 
	$(CC) $(CXXFLAGS) $<
clean:
	rm -f *.o $@



