#include <stdio.h>
int ft_str_is_alpha(char *str)
{
	int i;
	char c;

	i = 0;
	while(str[i])
	{
		c = str[i]; 
		if((c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
			return 0;
		i++;
	}
	return 1;
}	


int main()
{
	char arr[] = "hello123";
	printf("%d", ft_str_is_alpha(arr));
	return 0;
}
