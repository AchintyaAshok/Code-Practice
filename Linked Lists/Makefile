CXX = g++
CXXFLAGS = -Wall -g

main: main.o LinkedList.o linkedListProblems.o
	$(CXX) $(CXXFLAGS) -o execstuff main.o LinkedList.o linkedListProblems.o

main.o:
	$(CXX) $(CXXFLAGS) -c main.cpp

LinkedList.o: LinkedList.h

linkedListProblems.o: linkedListProblems.h
