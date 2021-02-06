#include <stdio.h>
int ft_is_prime(int nb)
{
	long long i;

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
int ft_find_next_prime(int nb)
{
	int i;

	i = nb;
	while (!ft_is_prime(i))
		i++;
	return(i);
}

int main() 
{
	printf("%d \n", ft_find_next_prime(8));
}
