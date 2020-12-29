#include <stdio.h>
int ft_str_in_number(char *str)
{
	int i;
	char c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if(c < '0' || c > '9')
			return (0);
		i++;
	}
	return (1);
}
int main()
{
	char arr[] = "1234h";
	printf("%d", ft_str_in_number(arr));
	return 0;
}
