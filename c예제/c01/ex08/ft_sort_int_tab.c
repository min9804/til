#include <stdio.h>
void ft_sort_tab(int *tab, int size)
{
	int i, j, temp;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
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
