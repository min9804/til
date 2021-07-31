#include <stdio.h>

int	ft_interative_power(int nb, int power)
{
	int ret;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	ret = nb;
	while (--power)
		ret *= nb;
	return (ret);
}

void	main(void)
{
	printf("%d \n", ft_interative_power(2, 5));
}

