CXX = g++
CXXFLAGS = -Wall -g

main: main.o LinkedList.o
	$(CXX) $(CXXFLAGS) -o execstuff main.o LinkedList.o

main.o:
	$(CXX) $(CXXFLAGS) -c main.cpp

LinkedList.o: LinkedList.h
