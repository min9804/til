#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if ((*str < 'a' || *str > 'z') && (*str < 'A' || *str > 'Z'))
			return (0);
		str++;
	}
	return (1);
}

int main()
{
	char arr[] = "hello";
	printf("%d", ft_str_is_alpha(arr));
	return 0;
}

