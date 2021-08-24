#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	repeat_alpha(char c)
{
	int i;

	if ('a' <= c && c <= 'z')
	{
		i = 0;
		while (i++ <= c - 'a')
			ft_putchar(c);
	}	
	else if ('A' <= c && c <= 'Z')
	{
		i = 0;
		while (i++ <= c - 'A')
			ft_putchar(c);
	}
	else
		ft_putchar(c);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1])
		{
			repeat_alpha(*argv[1]);
			++argv[1];
		}
	}
	ft_putchar('\n');
	return (0);
}
