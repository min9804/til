#include <stdio.h>
#include <stdlib.h>

void	pgcd(int a, int b)
{
	int i;
	int max;

	i = 1;
	max = 0;
	while (i <= a && i <= b)
	{
		if (a % i == 0 && b % i == 0)
			max = i;
		++i;
	}
	printf("%d", max);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		pgcd(atoi(argv[1]), atoi(argv[2]));
	printf("\n");
	return (0);
}
