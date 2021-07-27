#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

int main()
{
	char arr[] = "HELLOSDF133234ZXsadfa";
	*ft_strupcase(arr);
	printf("%s \n", arr);

	return 0;
}
