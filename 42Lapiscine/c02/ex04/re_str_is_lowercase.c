#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
			return (0);
		str++;
	}
	return (1);
}

void main()
{
        char arr[] = "helloJ";
        printf("%d", ft_str_is_lowercase(arr));
}

