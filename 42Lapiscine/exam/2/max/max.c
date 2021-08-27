#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	int max;

	if (!tab[0])
		return (0);
	max = tab[--len];
	while (len)
	{
		max = (tab[len] > max) ? tab[len] : max; 
		--len;
	}
	return (max);
}

int		main(void)
{
	int a[4] = {1, 9, 3, 2};
	printf("%d\n", max(a, 4));
	return (0);
}
