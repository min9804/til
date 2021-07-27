#include <stdio.h>

int 	is_alpha(char c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	return (0);
}

int 	is_numeric(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((!is_alpha(str[i-1]) && !is_numeric(str[i-1])) || i == 0)
		{
			if ('a' <= str[i] && str[i] <= 'z')
				str[i] -= 32;
		}
		else
			if ('A' <= str[i] && str[i] <= 'Z')
				str[i] += 32;
		i++;
	}
	return (str);
}

int main()
{
	char arr[] = "Salut, coMMEnt tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *c;
	c = arr - 1;
	*c = 's';
	ft_strcapitalize(arr);
	printf("%s \n", arr);

	return (0);
}
