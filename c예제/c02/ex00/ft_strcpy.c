#include <stdio.h>
char *ft_strcpy(char *dest, char *src)
{	
	int i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char arr1[] = "Hello";
	char arr2[] = "13";
	ft_strcpy(arr2, arr1);
	printf("%s \n", arr2);
}
	
