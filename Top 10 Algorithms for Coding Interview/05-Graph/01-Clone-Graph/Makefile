APP = main
CXX = g++
FLAGS = -std=c++17 -Wall -I ./include
SRC = $(wildcard *.cpp)
BIN = build
OBJ = $(addprefix $(BIN)/,$(SRC:.cpp=.o))

.PHONY: all clean

all: $(BIN) $(APP)

$(BIN): 
	mkdir -p $(BIN)
$(APP): $(OBJ)
	$(CXX) $(FLAGS) $(OBJ) -o $@
$(BIN)/%.o: %.cpp 
	$(CXX) $(FLAGS) -c $< -o $@
clean:
	rm -rf $(BIN) *.o $(APP)

