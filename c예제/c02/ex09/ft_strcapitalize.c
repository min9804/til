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
char *ft_strcapitalize(char *str)
{	
	int i;

	i = 0;
	while (str[i])
	{	
		if (!is_alpha(str[i-1]))
		{
			if (is_lowercase(str[i]))
			{
				str[i] -= 32;
			}
		}
		else
		{
			if (is_upercase(str[i]))
			{	
				str[i] += 32;
			}
		}
		i++;
	}
	return (str);
}

int main()
{
	char arr[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(arr);
	printf("%s \n", arr);

	return (0);
}
