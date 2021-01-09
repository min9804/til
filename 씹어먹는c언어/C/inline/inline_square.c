#include <stdio.h>
extern inline int square(int a) 
{ 
	return a * a; 
}
int main(int argc, char **argv)
{
	printf("%d\n", square(3));

	return 0;
}

