#include <stdio.h>

int	ft_swap(int a, int b)
{
	int t;

	t = a;
	a = b;
	b = a;

	return (a);
}

int main()
{
	int p = 1;
	int q = 2;

	p = ft_swap(p, q);
	
	printf("%d, %d", p, q);

	return (0);
}

