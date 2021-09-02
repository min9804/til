#include <stdlib.h>
#include <stdio.h>

int	ft_len(int value, int base)
{
	int	len;
	
	len = value > 0 ? 0 : 1;
	while (value)
	{
		value /= base;
		++len;
	}
	return (len);
}

char	*ft_itoa_base(int value, int base)
{
	unsigned int	tmp;
	int 		len;
	char		*ret;
	char		*str_base;

	tmp = (value > 0) ? value : -value;
	len = ft_len(value, base);
	ret = (char *)malloc(sizeof(char) * (len + 1));
	str_base = "0123456789ABCDEF";
	ret[len--] = '\0';
	while (tmp)
	{
		ret[len--] = str_base[tmp % base];
		tmp /= base;
	}
	if (value < 0)
		ret[len] = '-';
	return (ret);
}

int		main(void)
{
	printf("%s\n", ft_itoa_base(-2147483648, 10));	
	printf("%s\n", ft_itoa_base(-1234, 10));	
	printf("%s\n", ft_itoa_base(10, 16));	
	printf("%s\n", ft_itoa_base(10, 2));	
	printf("%s\n", ft_itoa_base(10, 4));	
	return(0);
}	
