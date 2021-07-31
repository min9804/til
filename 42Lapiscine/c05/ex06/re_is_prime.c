#include <stdio.h>

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	main(void)
{
	printf("%d \n", ft_is_prime(-1));
	printf("%d \n", ft_is_prime(0));
	printf("%d \n", ft_is_prime(1));
	printf("%d \n", ft_is_prime(2));
	printf("%d \n", ft_is_prime(3));
	printf("%d \n", ft_is_prime(4));
}


