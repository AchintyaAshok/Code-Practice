# list the compiler
CXX = g++
# any additional flags for compilation
CXXFLAGS = -Wall -g

# now define our targets
# first we define our executable
main: main.o replaceSpaces.o
	$(CXX) $(CXXFLAGS) -o execfile main.o replaceSpaces.o

# second, we define the object files that need to be generated
main.o: main.cpp replaceSpaces.h
	$(CXX) $(CXXFLAGS) -c main.cpp

replaceSpaces.o: replaceSpaces.h

