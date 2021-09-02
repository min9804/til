#include <stdio.h>
#include <stdlib.h>

void	ft_fprime(int n)
{
	int i;

	i = 2;
	while (i < n)
	{
		if (n % i == 0)
		{
			printf("%d*", i);
			n /= i;
			i = 1;
		}
		++i;
	}
	printf("%d", n);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_fprime(atoi(argv[1]));
	printf("\n");
	return (0);
}
