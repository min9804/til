#include "ft_do_op.h"

int	ft_atoi(char *str)
{
	int ret;
	int sign;

	ret = 0;
	sign = 1;
	while ((9 <= *str && *str <= 13) || *str == ' ')
		++str;
	while (*str == '+' || *str == '-')
		if (*(str++) == '-')
			sign *= -1;
	while ('0' <= *str && *str <= '9')
	{
		ret *= 10;
		ret += *(str++) - '0';
	}
	ret *= sign;
	return (ret);
}

void	ft_print_num(long long nb)
{
	char num;

	if (nb >= 10)
	{
		ft_print_num(nb / 10);
		ft_print_num(nb % 10);
	}
	else
	{
		num = nb + '0';
		write(1, &num, 1);
	}
}

void	ft_calc(int a, int b, char op)
{
	if (op == '+')
		ft_add(a, b);
	else if (op == '-')
		ft_sub(a, b);
	else if (op == '*')
		ft_multi(a, b);
	else if (op == '/')
		ft_div(a, b);
	else if (op == '%')
		ft_mod(a, b);
}

int	main(int ac, char **av)
{
	int a;
	int b;
	
	if (ac == 4)
	{
		if (!(*av[2] == '+' || *av[2] == '-' || *av[2] == '*' 
				|| *av[2] == '/' || *av[2] == '%'))
		
		{
			write(1, "0", 1);
			return (0);
		}
		a = ft_atoi(av[1]);
		b = ft_atoi(av[3]);
		ft_calc(a, b, *av[2]);
	}
	return (0);
}
