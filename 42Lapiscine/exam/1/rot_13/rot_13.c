#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rot_13(char c)
{
	if ('a' <= c && c <= 'm')
		ft_putchar(c + 13);
	else if ('n' <= c && c <= 'z')
		ft_putchar(c - 13);
	else if ('A' <= c && c <= 'M')
		ft_putchar(c + 13);
	else if ('N' <= c && c <= 'Z')
		ft_putchar(c - 13);
	else
		ft_putchar(c);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1])
		{
			rot_13(*argv[1]);
			++argv[1];
		}
	}
	ft_putchar('\n');
	return (0);
}
