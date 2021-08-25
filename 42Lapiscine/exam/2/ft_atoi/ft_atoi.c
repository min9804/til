int		ft_atoi(const char *str)
{
	int n;
	int sign;

	n = 0;
	sign = 1;
	while ((9 <= *str && *str <= 13) || *str == ' ')
		++str;
	while (*str == '-' || *str == '+')
	{
		sign *= (*str == '-' ? -1 : 1);
		++str;
	}
	while (*str)
	{
		n *= 10;
		n += *str - '0';
		++str;
	}
	n *= sign;
	return (n);
}
