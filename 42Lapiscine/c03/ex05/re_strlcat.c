#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (*dest && i < size)
	{
		dest++;
		i++;
	}
	while (*src && i < size - 1)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	if (i < size)
		*dest = 0;
	while (*src)
	{
		i++;
		src++;
	}
	return (i);
}

int main()
{
	char arr3[5] = "abcd";
	char arr4[] = "123";
	printf("%ld \n", strlcat(arr3, arr4, 0));
	printf("%s \n", arr3);
	printf("%ld \n", strlcat(arr3, arr4, 3));
	printf("%s \n", arr3);
	printf("%ld \n", strlcat(arr3, arr4, 4));
	printf("%s \n", arr3);
	printf("%ld \n", strlcat(arr3, arr4, 5));
	printf("%s \n", arr3);
	char arr1[5] = "abcd";
	char arr2[4] = "123";
	printf("%d \n", ft_strlcat(arr1, arr2, 0));
	printf("%s \n", arr1);
	printf("%d \n", ft_strlcat(arr1, arr2, 3));
	printf("%s \n", arr1);
	printf("%d \n", ft_strlcat(arr1, arr2, 4));
	printf("%s \n", arr1);
	printf("%d \n", ft_strlcat(arr1, arr2, 5));
	printf("%s \n", arr1);
}
