#include <stdio.h>

int	ft_atoi(char *str)
{
	int ret;
	int sign;

	ret = 0;
	sign = 1;
	while ((9 <= *str && *str <= 13) || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		sign *= (*str == '-' ? -1 : 1);
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		ret *= 10;
		ret += *str - '0';
		str++;
	}
	ret *= sign;
	return (ret);
}

int		main(void)
{
	char arr[] = "---+--+1234ab567";
	printf("%d \n", ft_atoi(arr));
	return (0);
}


