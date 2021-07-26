#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int t;
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				t = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = t;
			}
			j++;
		}
		i++;
	}
}

int main()
{
	int arr[8] = {2, 4, 3, 2, 5, 7, 8, 1};
	
	ft_sort_int_tab(arr, 8);
	
	int i;
	for (i = 0; i < 8; i++)
	{
		printf("%d", arr[i]);
	}
}
