#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

int main()
{
	char arr[] = "Hello123asadfgwqerwer";
	*ft_strupcase(arr);
	printf("%s \n", arr);

	return 0;
}
