#include <stdio.h>
char *ft_strlowcase(char *str)
{
	int i = 0;
	while (str[i])
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
int main()
{
	char arr[] = "HELloASLDKF1sdfasdf23ASDF";
	ft_strlowcase(arr);
	printf("%s \n", arr);

	return 0;
}

