#include <unistd>
#include "FT_S_STOCK_STR"

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

void print_size(int size)
{
	char c;
	
	if (!size)
		return ;
	c = size % 10 + '0';
	print_size(size / 10);
	write(1, &c, 1);
}

void ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str)
	{
		write(1, par[i].str, par[i].size);
		write(1, "\n", 1);
		if (par[i].size)
			print_size(par[i].size);
		else
			write(1, "0", 1);
		write(1, "\n", 1);
		write(1, par[i].copy, par[i].size);
		write(1, "\n", 1);
		i++;
	}
}

