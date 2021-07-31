#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char *a;
	char *b;

	if (!*to_find)
		return (str);
	while (*str)
	{
		a = str;
		b = to_find;
		while (*b && *a == *b)
		{
			a++;
			b++;
		}
		if (*b == 0)
			return (str);
		str++;
	}
	return (0);
}

int main()
{
	char str[30] = "12123";
	char *find = ft_strstr(str, "123");

	printf("%s\n", find);
	return 0;
}
