#include <stdio.h>

int		ft_is_white_space(char c)
{
	if ((9 <= c && c <= 13) || c == ' ')
		return (1);
	return (0);
}

int		check_base(char c, int str_base)
{
	int i;
	char *b1;
	char *b2;

	i = 0;
	b1 = "0123456789abcdef";
	b2 = "0123456789ABCDEF";

	while (i < str_base)
	{
		if (c == b1[i] || c == b2[i])
			return (i);
		++i;	
	}
	return (-1);
}	

int		ft_atoi_base(const char *str, int str_base)
{
	int 	nb;
	int	sign;
	
	nb = 0;
	sign = 0;
	while (ft_is_white_space(*str))
		++str;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = 1;
		++str;
	}
	while (check_base(*str, str_base) != -1)
	{
		nb *= str_base;
		nb += check_base(*str, str_base);
		++str;
	}
	if (sign)
		return (-nb);
	return (nb);
}

int		main(void)
{
	printf("%d\n", ft_atoi_base("--a", 16));
	return (0);
}
