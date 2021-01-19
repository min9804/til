#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}

int main()
{
	int p = 1;
	int k = 2;

	printf("%d, %d \n", p, k);
	printf("%p, %p \n", &p, &k);
	
	ft_swap(&p, &k);

	printf("%d, %d \n", p, k);
	printf("%p, %p \n", &p, &k);
}




















