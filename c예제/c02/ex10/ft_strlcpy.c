#include <stdio.h>
/*unsigned int *ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (src[i] && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	while (src[i])
		++i;
	return (i);
}*/
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (src[i] && i + 1 < size)
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = 0;
	while (src[i])
		++i;
	return (i);
}

int main()
{
	unsigned int i;
	char arr1[] = "Hello";
	char arr2[] = "123456789";
	i = ft_strlcpy(arr2, arr1, 6);
	printf("%s \n", arr2);
	printf("%d \n", i);
	printf("%c \n", arr2[2]);
	return 0;
}
