#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int ret;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	ret = ft_recursive_power(nb, power - 1);
	ret *= nb;
	return (ret);
}

int main()
{
	printf("%d \n", ft_recursive_power(2, 2));
	
}
	
