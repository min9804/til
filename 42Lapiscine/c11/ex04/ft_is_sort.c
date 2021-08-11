#include <stdio.h>

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int i;
	int com;

	i = 0;
	com = f(tab[0], tab[1]);
	if (com < 0)
	{
		while (i < length - 1)
			if (f(tab[i++], tab[i + 1]) > 0)
				return (0);
	}
	else
	{
		while (i < length - 1)
			if (f(tab[i++], tab[i + 1]) < 0)
				return (0);
	}
	return (1);
}

int		ft_compare(int n1, int n2)
{
	return (n1 - n2);
}

int main(void)
{
	int sorted1[] = {10, 30, 56, 1235, 6546, 10345};
//	int sorted1[] = {1, 1, 1, 1, 1, 1};
	int sorted2[] = {7, 7, 6, 6, 5, 5, 4, 3, 3, 2, 2, 1, 1};
	int not_sorted1[] = {10, 30, 56, 3, 10345, 1235, 6546};
	int not_sorted2[] = {6546, 1235, 10345, 3, 56, 30, 10};
	printf("%d\n", ft_is_sort(sorted1, 6, &ft_compare));
	printf("%d\n", ft_is_sort(sorted2, 13, &ft_compare));
	printf("%d\n", ft_is_sort(not_sorted1, 7, &ft_compare));
	printf("%d\n", ft_is_sort(not_sorted2, 7, &ft_compare));
	return (0);
}
