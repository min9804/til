#include <stdio.h>

char	*ft_strrev(char *str)
{
	char t;
	int i;
	int size;

	size = 0;
	while (str[size])
		++size;
	i = 0;
	while (i < size / 2)
	{
		t = str[i];
		str[i] = str[size - 1 - i];
		str[size - 1 - i] = t;
		++i;
	}
	return (str);
}

int		main(void)
{
	char arr[] = "aws";	
	printf("%s\n", ft_strrev(arr));
	return (0);
}
