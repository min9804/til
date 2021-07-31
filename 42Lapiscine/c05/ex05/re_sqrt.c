#include <stdio.h>

int	ft_sqrt(int nb)
{
	long long i;

	i = 0;
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

int main()
{
	printf("%d \n", ft_sqrt(16));
}
