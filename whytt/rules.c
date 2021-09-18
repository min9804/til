#include <stdio.h>
int	fill_rules(char *str, int rules[4][4])
{
	int i;
	int j;
	
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (*str < '1' || '4' < *str)
				return (0);
			rules[i][j] = *str - '0';
			str += 2;
			j++;
		}
		i++;
	}
	return (1);
}
