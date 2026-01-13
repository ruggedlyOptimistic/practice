# --------------- Toolchain ----------------
CC = gcc
OBJCOPY = objcopy

# --------------- Compiler Flags -----------
CFLAGS = -Wall -Wextra -O0 -g -Isrc
LDFLAGS = 

# --------------- Project ------------------
TARGET = rectangle_v3
SRCS = src/main.c src/rectangle.c src/io.c 
OBJS = $(SRCS:src/%.c=build/%.o)

# --------------- Default Target -----------
all: $(TARGET)

build:
	mkdir -p build

# --------------- Link Step ----------------
$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o $(TARGET)

# --------------- Compile Step -------------
build/%.o: src/%.c | build 
	$(CC) $(CFLAGS) -c $< -o $@

# --------------- Binary Image -------------
bin: $(TARGET)
	$(OBJCOPY) -O binary $(TARGET) $(TARGET).bin

# --------------- Housekeeping -------------
clean:
	rm -rf build $(TARGET) $(TARGET).bin