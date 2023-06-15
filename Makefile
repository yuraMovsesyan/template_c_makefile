CC = clang
CFLAGS = -Wall -g
SRCS = $(wildcard source/*.c)
OBJS = $(patsubst source/%.c, build/%.o, $(SRCS))
TARGET = build/program

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

build/%.o: source/%.c | build
	$(CC) $(CFLAGS) -c $< -o $@

build:
	mkdir -p build

run:
	$(TARGET)

clean:
	rm -rf $(TARGET) $(OBJS) build
