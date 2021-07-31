#include <stdio.h>
int	ft_recursive_factorial(int nb)
{
	int i;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = (ft_recursive_factorial(nb - 1));
	i *= nb;

	return (i);
}

int main()
{
	printf("%d \n", ft_recursive_factorial(5));
}
