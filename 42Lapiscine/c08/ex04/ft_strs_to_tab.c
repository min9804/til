#include <stdlib.h>
#include "ft_stock_str.h"

int ft_strlen(char *str)
{
	int 	len;

	len = 0;
	while (str[len])
		++len;
	return (len);
}

void str_cpy(char *dst, char *src)
{
	while (*src)
		*(dst++) = *(src++);
	*dst = 0;
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *ret;
	int         i;
	
	ret = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!ret)
		return (0);
	i = 0;
	while (i < ac)
	{
		ret[i].size = ft_strlen(av[i]);
		ret[i].str = (char*)malloc(ret[i].size + 1);
		ret[i].copy = (char*)malloc(ret[i].size + 1);
		str_cpy(ret[i].str, av[i]);
		str_cpy(ret[i].copy, av[i]);
		i++;
	}
	ret[i].str = 0;
	return (ret);
}





