#include <unistd.h>
#include <stdio.h>

unsigned int	ft_atoi_pn(char *str)
{
	unsigned int nbr;

	nbr = 0;
	while ((9 <= *str && *str <= 13) || *str == ' ')
		++str;
	while (*str == '+' || *str == '-')
		++str;
	while (*str)
	{
		nbr *= 10;
		nbr += *str - '0';
		++str;
	}
	return (nbr);
}

void	ft_print_hex(unsigned int nbr)
{
	char *hex;

	hex = "0123456789abcdef";
	if (nbr > 16)
		ft_print_hex(nbr / 16);
	write(1, &hex[nbr % 16], 1);
}

int		main(int argc, char **argv)
{
	unsigned int nbr;

	if (argc == 2)
		ft_print_hex(ft_atoi_pn(argv[1]));
	write(1, "\n", 1);
	return (0);
}
