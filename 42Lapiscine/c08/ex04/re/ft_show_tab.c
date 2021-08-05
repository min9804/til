#include <stdlib.h>
#include <unistd.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		++len;
	return (len);
}

void	ft_strcpy(char *dest, char *src)
{
	int i;
	
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		++i;
	}
}

struct s_stock_str *ft_str_to_tab(int ac, char **av)
{
	t_stock_str *ret;
	int i;

	ret = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!ret)
		return (0);
	i = 0;
	while (i < ac)
	{
		ret[i].size = ft_strlen(av[i]);
		ret[i].str = (char*)malloc(ret[i].size + 1);
		ret[i].copy = (char*)malloc(ret[i].size + 1);
		ft_strcpy(ret[i].str, av[i]);
		ft_strcpy(ret[i].copy, av[i]);
		++i;
	}

	ret[i].str = 0;
	return (ret);
}	

void 	print_size(int size)
{
	char c;

	if (!size)
		return ;
	c = size % 10 + '0';
	print_size(size / 10);
	write(1, &c, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str)
	{
		write(1, par[i].str, par[i].size);
		write(1, "\n", 1);
		(par[i].size) ? print_size(par[i].size) : write(1, "0", 1);
		write(1, "\n", 1);
		write(1, par[i].copy, par[i].size);
		write(1, "\n", 1);
		++i;
	}
}

void	main(int ac, char **av)
{
	ft_show_tab(ft_str_to_tab(ac, av));
}

