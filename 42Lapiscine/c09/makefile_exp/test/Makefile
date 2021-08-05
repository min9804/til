hello_world : hello.o world.o main.o
	gcc -o hello_world hello.o world.o main.o

hello.o : hello.c
	gcc -c -o hello.o hello.c

world.o : world.c
	gcc -c -o world.o world.c

main.o : main.c
	gcc -c -o main.o main.c

clean :
	rm *.o hello_world
	
