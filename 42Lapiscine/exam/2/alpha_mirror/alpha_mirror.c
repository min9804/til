#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	mirror(char c)
{
	if ('a' <= c && c <= 'z')
		ft_putchar('a' + 'z' - c);
	else if ('A' <= c && c <= 'Z')
		ft_putchar('A' + 'Z' - c);
	else
		ft_putchar(c);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		while (*argv[1])
			mirror(*(argv[1]++));
	ft_putchar('\n');
	return (0);
}
