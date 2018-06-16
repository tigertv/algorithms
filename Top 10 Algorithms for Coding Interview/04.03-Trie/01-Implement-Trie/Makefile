CXX = g++
FLAGS = -std=c++17 -Wall -I ./include
SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)

all: main

main: $(OBJ)
	$(CXX) $(FLAGS) $(OBJ) -o $@
%.o: %.cpp 
	$(CXX) $(FLAGS) -c $< -o $@
clean:
	rm -rf *.o main
