#include <stdio.h>
int main()
{
	int a;
	int* p;
	p = &a;
	printf("%p \n", p);

	if (16/16)
		printf("%c \n", 't');
	if (12/16)
		printf("%c \n", 'f');
	if (40/16)
		printf("%c \n", 'g');
	int i = 0;
	while (i++ < 2)
		printf("%c \n", 'o');
}
