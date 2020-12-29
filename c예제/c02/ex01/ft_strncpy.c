#include <stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int n)
{	
	int i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i <= n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);	
}

int main()
{
	char arr1[] = "Hello";
	char arr2[] = "131";
	ft_strncpy(arr2, arr1, 5);
	printf("%s", arr2);
}

