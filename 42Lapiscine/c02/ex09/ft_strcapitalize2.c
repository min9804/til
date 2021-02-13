#include <stdio.h>
int is_lowercase(char c)
{	
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);	
}

int is_upercase(char c)
{	
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);	
}

int is_alpha(char c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && 'Z'))
		return (1);
	return (0);
}

int is_numeric(char c)
{
	if('0' <= c && c <= '9')
		return (1);
	return (0);
}

char *ft_strcapitalize(char *str)
{	
	int i;

	i = 0;
	while (str[i])
	{	
		if (is_upercase(str[i]))
			str[i] += 32;
		if (!is_alpha(str[i-1]) && !is_numeric(str[i-1]) && is_lowercase(str[i]))
			str[i] -= 32;
		i++;
	}

	return (str);
}

int main()
{
	char arr[] = "Salut, coMMEnt tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(arr);
	printf("%s \n", arr);

	return (0);
}
