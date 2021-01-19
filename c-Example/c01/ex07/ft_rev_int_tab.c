#include <stdio.h>
void ft_rev_int_tab(int *tab, int size)
{
	int i = 0;
	int temp;
	
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
		
int main()
{
	int arr[4] = {1, 2, 3, 4};
	ft_rev_int_tab(arr, 4);
	int i;
	for (i = 0; i < 4; i++)
	{
		printf("%d \n", arr[i]);
	}
}
