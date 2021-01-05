#include <stdio.h>

int ft_sqrt(int nb)
{
	float i;
	long long j;

	i = nb / 2.0;
	j = 1;
	while (i > j)
	{
		i -= j;
		j ++;
	}
	if (i * 2 == j)
		return (j);
	else
		return (0);
}

int main()
{
	printf("%d \n", ft_sqrt(1));
}

