#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int i;
	unsigned int j;

	if (!a || !b)
		return (0);
	i = 1;
	while (i < a * b)
	{
		j = 1;
		while (j < a * b)
		{
			if (b * j == a * i)
				return (b * j);
			++j;
		}
		++i;
	}
	return (a * b);
}

int		main(void)
{
	printf("%d\n", lcm(6, 5));
	return (0);
}
