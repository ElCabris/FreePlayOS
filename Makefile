CXX = g++
CXXFLAGS = -Wall -Werror 
LIBS = -lsfml-system -lsfml-audio -lsfml-graphics -lsfml-window 
INCLUDE_DIR = include

SRC_DIR = src
SRCS := $(shell find $(SRC_DIR) -name '*.cpp')

OBJ_DIR = binary
OBJS := $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))

EXEC = FreePlayOS

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) -o $@ $^ $(LIBS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	mkdir -p $(OBJ_DIR)
	$(CXX) -c $< -o $@ -I$(INCLUDE_DIR)

debug:
	# ingresar las directrices necesarias para compilar para debugiar

clean:
	rm -f $(OBJS) $(EXEC)

.PHONY: all clean
