#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	sign;
	int	ret;

	sign = 1;
	ret = 0;
	while ((9 <= *str && *str <= 13) || *str == ' ')
 		++str;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		++str;
	}
	while ('0' <= *str && *str <= '9')
	{
		ret = ret * 10 + *str - '0';
		++str;
	}
	ret *= sign;
	return (ret);
}

int	main(void)
{
	printf("%d\n", ft_atoi("2147483647"));
	return (0);
}
