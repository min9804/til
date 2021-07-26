#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int t;
	int i;

	i = 0;
	while (i < size / 2)
	{
		t = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = t;
		
		i++;
	}
}

int	main()
{
	int arr[4] = {1, 2, 3, 4};
	ft_rev_int_tab(arr, 4);
	int i;
	for (i = 0; i < 4; i++)
	{
		printf("%d \n", arr[i]);
	}
}
		
