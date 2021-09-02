#include <stdlib.h>
#include <stdio.h> //malloc protection isn't required for the exam

char	*ft_itoa_base(int value, int base)
{
	char	*s;
	long	n;
	int		sign;
	int		i;

	n = (value < 0) ? -(long)value : value;
	sign = (value < 0 && base == 10) ? -1 : 0;
	i = (sign == -1) ? 2 : 1;
	while ((n /= base) >= 1)
		i++;
	s = (char*)malloc(sizeof(char) * (i + 1));
	s[i] = '\0';
	n = (value < 0) ? -(long)value : value;
	while (i-- + sign)
	{
		s[i] = (n % base < 10) ? n % base + '0' : n % base + 'A' - 10;
		n /= base;
	}
	(i == 0) ? s[i] = '-' : 0;
	return (s);
}

int		main(void)
{
	printf("%s\n", ft_itoa_base(-2147483648, 10));
	printf("%s\n", ft_itoa_base(-1234, 10));
	printf("%s\n", ft_itoa_base(10, 16));
	printf("%s\n", ft_itoa_base(10, 2));
	return (0);
}
