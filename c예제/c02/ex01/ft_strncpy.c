#include <stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int n)
{	
	unsigned int i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);	
}

int main()
{
	char arr1[] = "Hello";
	char arr2[] = "123456789";
	ft_strncpy(arr2, arr1, 3);
	printf("%s", arr2);
}

