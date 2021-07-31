#include <stdio.h>
int ft_iterative_power(int nb, int power)
{
	int i;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = nb;
	while(--power)
		i *= nb;
	return (i);
}
int main()
{
	printf("%d\n",ft_iterative_power(2, 6));
}
