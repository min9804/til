#include <stdlib.h>
#include <stdio.h>

int		int_len(int nbr)
{
	int len;
	
	len = (nbr <= 0) ? 1 : 0;
	while (nbr)
	{
		nbr /= 10;
		++len;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	unsigned int tmp;
	int len;
	int sign;
	char *ret;

	tmp = nbr > 0 ? nbr : -nbr;
	sign = (nbr > 0) ? 1 : -1;
	len = int_len(nbr);
	ret = (char *)malloc(sizeof(char) * (len + 1));
	ret[len--] = '\0';
	while (len >= 0)
	{
		ret[len--] = tmp % 10 + '0';
		tmp /= 10;
	}
	if (sign < 0)
		ret[0] = '-';
	return (ret);
}

int		main(void)
{
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
	return (0);
}
