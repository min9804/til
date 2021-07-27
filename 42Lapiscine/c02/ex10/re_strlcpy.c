#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	while (src[i])
		i++;
	return (i);
}

int main()
{
	unsigned int i;
	char arr1[] = "Hello";
	char arr2[] = "123456789";
	printf("%s \n", arr2);
	i = ft_strlcpy(arr2, arr1, 4);
	printf("%d \n", i);
	printf("%s \n", arr2);
	return 0;
}
