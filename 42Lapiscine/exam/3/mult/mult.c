#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi_pn(char *s)
{
	int nbr;

	nbr = 0;
	while (*s)
	{
		nbr *= 10;
		nbr += *s - '0';
		++s;
	}
	return (nbr);
}

void	ft_putnbr(int nbr)
{
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}

void	ft_mult(int nbr)
{
	int i;

	i = 1;
	while (i <= 9)
	{
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(nbr);
		write(1, " = ", 3);
		ft_putnbr(i * nbr);
		write(1, "\n", 1);
		++i;
	}
}

int		main(int argc, char **argv)
{
	int nbr;

	if (argc == 2)
	{
		nbr = ft_atoi_pn(argv[1]);
		ft_mult(nbr);
	}
	else
		write(1, "\n", 1);
	return (0);
}
