#include <unistd.h>

int		is_prev(char *str, char *c)
{
	while (str < c)
	{
		if (*str == *c)
			return (1);
		++str;
	}
	return (0);
}

void	ft_union(char *s1, char *s2)
{
	char *p;

	p = s1;
	while (*p)
	{
		if (!is_prev(s1, p))
			write(1, p, 1);
		++p;
	}
	p = s2;
	while (*p)
	{
		if(!is_prev(s1, p))
			if(!is_prev(s2, p))
				write(1, p, 1);
		++p;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
