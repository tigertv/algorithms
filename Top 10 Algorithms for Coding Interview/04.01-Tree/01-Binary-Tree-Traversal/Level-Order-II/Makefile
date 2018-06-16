APP = main
CXX = g++
FLAGS = -std=c++17 -Wall -I ./include -I ../include

SRC_DIR = src
SRC = $(wildcard $(SRC_DIR)/*.cpp)

BIN_DIR = build
EXT_BIN_DIR = ../build
EXT_BIN = $(wildcard $(EXT_BIN_DIR)/*.o)

OBJ := $(SRC:.cpp=.o)
OBJ := $(OBJ:$(SRC_DIR)/%=%)
OBJ := $(addprefix $(BIN_DIR)/,$(OBJ))

.PHONY: all clean

all: $(BIN_DIR) $(APP)

$(BIN_DIR): 
	mkdir -p $(BIN_DIR)
$(APP): $(OBJ) $(EXT_BIN)
	$(CXX) $(FLAGS) $(OBJ) $(EXT_BIN) -o $@
$(BIN_DIR)/%.o: $(SRC_DIR)/%.cpp 
	$(CXX) $(FLAGS) -c $< -o $@
clean:
	rm -rf $(BIN_DIR) $(APP)
