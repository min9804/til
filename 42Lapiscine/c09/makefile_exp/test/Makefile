CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = hello_world
OBJECTS = hello.o world.o main.o

all: $(TARGET)

$(TARGET): $(OBJECTS)
	     $(CC) $(CFLAGS) -o $@ $^

clean :
	rm *.o hello_world
