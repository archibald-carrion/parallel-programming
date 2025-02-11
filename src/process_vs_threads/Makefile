# Define directories
BUILD_DIR = build
OBJ_DIR = obj

# Define source files
PROCESS_SRC = process_example.cc
THREAD_SRC = thread_example.cc

# Define object files
PROCESS_OBJ = $(OBJ_DIR)/process_example.o
THREAD_OBJ = $(OBJ_DIR)/thread_example.o

# Define executables
PROCESS_EXE = $(BUILD_DIR)/process_example
THREAD_EXE = $(BUILD_DIR)/thread_example

# Default target (all)
all: $(PROCESS_EXE) $(THREAD_EXE)

# Rule for creating the build directory
$(BUILD_DIR):
		mkdir -p $(BUILD_DIR)

# Rule for creating the object directory
$(OBJ_DIR):
		mkdir -p $(OBJ_DIR)

# Rule for compiling process_example.cc
$(PROCESS_EXE): $(PROCESS_OBJ) | $(BUILD_DIR)
		g++ $(PROCESS_OBJ) -o $(PROCESS_EXE)

$(PROCESS_OBJ): $(PROCESS_SRC) | $(OBJ_DIR)
		g++ -c $(PROCESS_SRC) -o $(PROCESS_OBJ)

# Rule for compiling thread_example.cc
$(THREAD_EXE): $(THREAD_OBJ) | $(BUILD_DIR)
		g++ $(THREAD_OBJ) -o $(THREAD_EXE) -pthread

$(THREAD_OBJ): $(THREAD_SRC) | $(OBJ_DIR)
		g++ -c $(THREAD_SRC) -o $(THREAD_OBJ) -pthread

# Clean target
clean:
		rm -rf $(BUILD_DIR) $(OBJ_DIR)  # Remove directories and their contents