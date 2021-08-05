CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = hello_world

$(TARGET): hello.o world.o main.o
	$(CC) $(CFLGS) -o $(TARGET) hello.o world.o main.o

hello.o : hello.c
	$(CC) $(CFLGS) -c -o hello.o hello.c

world.o : world.c
	$(CC) $(CFLGS) -c -o world.o world.c

main.o : main.c
	$(CC) $(CFLGS) -c -o main.o main.c

clean :
	rm *.o hello_world

