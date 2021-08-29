#include <unistd.h>

int		is_spaces(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void		ft_equr_str(char *str)
{
	while (is_spaces(*str))
		++str;
	while (*str)
	{
		if (is_spaces(*str))
		{
			while (is_spaces(*str))
				++str;
			if (*str)
				write(1, " ", 1);
		}
		else
		{
			write(1, str, 1);
			++str;
		}
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_equr_str(av[1]);
	write(1, "\n", 1);
	return (0);
}
