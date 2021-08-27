#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_prev(char *s1, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == s1[n])
			return (0);
		++i;
	}
	return (1);
}

void	inter(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j] && is_prev(s1, i))
			{
				ft_putchar(s1[i]);
				break ;
			}
			++j;
		}
		++i;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
