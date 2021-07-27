#include <stdio.h>
int main()
{
	int size = 18;
	int len;

	len = size / 16 ? 16 : size;
	printf("%d \n", len);

}

