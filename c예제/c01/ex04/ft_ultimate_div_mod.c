#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}
int main()
{
	int p, k;
	p = 10;
	k = 3;

	int *a;
	int *b;
	a = &p;
	b = &k;

	ft_ultimate_div_mod(a, b);
	printf("%d, %d", p, k);
}
