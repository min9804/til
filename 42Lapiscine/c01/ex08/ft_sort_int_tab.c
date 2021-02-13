#include <stdio.h>
void ft_sort_tab(int *tab, int size)
{
	int i, j, temp;

	i = 0;
	while (i++ < size)
	{
		j = 0;
		while (++j < size)
		{
			if (tab[j - 1] > tab[j])
			{
				temp = tab[j - 1];
				tab[j - 1] = tab[j];
				tab[j] = temp;
			}
		}
	}

}

int main()
{
	int arr[8] = {2, 4, 3, 2, 5, 7, 8, 1};
	
	ft_sort_tab(arr, 8);
	
	int i;
	for (i = 0; i < 8; i++)
	{
		printf("%d", arr[i]);
	}
}
