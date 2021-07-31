#include <stdio.h>

int	num_base(char *str, int len, char *base)
{
	int i;
	int num;

	num = 0;
	while (*str)
	{
		i = 0;
		while (base[i])
		{
			if (*str == base[i])
				num = num * len + i;
			i++;
		}
		str++;
	}
	return (num);
}

int	check_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if ((9 <= base[i] && base[i] <= 13) || base[i] == ' '
				|| base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int len;
	int sign;

	len = check_base(base);
	sign = 1;
	while ((9 <= *str && *str <= 13) || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	if (len < 2)
		return (0);
	return ((num_base(str, len, base)) * sign);
}

int main()
{
	int i;
	char *nbr = "-10";
	char *base = "01";
	printf("%d \n", ft_atoi_base(nbr, base));
}
