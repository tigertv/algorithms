CXX = g++
FLAGS = -std=c++17 -Wall -I ./include

SRC_DIR = src
SRC = $(wildcard $(SRC_DIR)/*.cpp)

BIN_DIR = build

OBJ := $(SRC:.cpp=.o)
OBJ := $(OBJ:$(SRC_DIR)/%=%)
OBJ := $(addprefix $(BIN_DIR)/,$(OBJ))

.PHONY: all clean

all: $(BIN_DIR) $(BIN_DIR)/%.o

$(BIN_DIR): 
	mkdir -p $(BIN_DIR)
$(BIN_DIR)/%.o: $(SRC_DIR)/%.cpp 
	$(CXX) $(FLAGS) -c $< -o $@
clean:
	rm -rf $(BIN_DIR) $(APP)
