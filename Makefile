CXX = gcc
CXXFLAGS = -lm

SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin

SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC_FILES))

TARGET = $(BIN_DIR)/main

build: $(TARGET)

$(TARGET): $(OBJ_FILES)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

run:
	$(BIN_DIR)/main

clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)

.PHONY: build run clean
