#include <stdio.h>
int swap(int *a, int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;

	return 0;
}

int main()
{
	int a = 3;
	int b = 5;

	printf("%d, %d \n", a, b);
	swap(&a, &b);
	printf("%d, %d \n", a, b);

	return 0;
}

