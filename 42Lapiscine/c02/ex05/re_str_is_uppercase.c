#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
			return (0);
		str++;
	}
	return (1);
}

void main()
{
        char arr[] = "HELLOa";
        printf("%d", ft_str_is_uppercase(arr));
}

