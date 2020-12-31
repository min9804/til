#include <stdio.h>
char *ft_strupcase(char *str)
{
	int i = 0;
	while(str[i])
	{
		if (97 <= str[i] && str[i] <= 122)
		{
			str[i] -= 32;
		}
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
