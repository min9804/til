#include <stdio.h>
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (*dest && i < size) 
	{
		dest++;
		i++;
	}

	while(*src && i + 1 < size)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	if (i < size)
		*dest = '\0';
	while (*src)
	{
		i++;
		src++;
	}

	return (i);
}
int main()
{
	char arr1[2] = "a";
	char arr2[] = "1";
	printf("%d \n",ft_strlcat(arr1, arr2, 6));
	printf("%s \n", arr1);
}
