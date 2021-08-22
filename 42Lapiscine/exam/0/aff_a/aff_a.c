#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	aff_a(char *str)
{
	while (*str)
	{
		if (*str == 'a')
		{
			ft_putchar('a');
			break;
		}
		++str;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		aff_a(argv[1]);	
	else 
		ft_putchar('a');

	return (0);
}
