#include <stdio.h>

int	ft_strcmp(char *str1, char *str2)
{
	int i;

	i = 0;
	while (*str1 && *str2)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		++str1;
		++str2;
	}
	return (*str1 - *str2);
}

void	ft_str_swap(char **str1, char **str2)
{
	char *tmp;

	tmp = *str1;
	*str1 = *str2;
	*str2 = tmp;
}

void	ft_sort_string_tab(char **tab)
{
	int i;
	int j;

	i = 0;
	while (tab[i])
	{
		j = i + 1;
		while (tab[j])
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
				ft_str_swap(&tab[i], &tab[j]);
			++j;
		}
		++i;
	}
}

int main(void)
{
	char *tab[] = {
		"Hello hello hello",
		"Hello 11234",
		"",
		"Go Thourh",
		"134",
		"!!!!!",
		"\?!\?!\?!\?\?!\?!\?!",
		"::*#$@Hell",
		"42 Seoul La Piscine",
		"dk whfflek",
		"anjsrk tmftmf whfflsmsrj rkxdmsep zz",
		"gma ;;",
		0
	};
	ft_sort_string_tab(tab);
	int i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
