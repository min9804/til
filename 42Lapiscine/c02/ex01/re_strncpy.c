#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i; 
	//n의 범위가 unsigned int 이므로 index도 unsigned int 여야함

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';

	return (dest);
}

int	main()
{
	char arr1[] = "Hello";
	char arr2[] = "123456789";
	ft_strncpy(arr2, arr1, 9);
	printf("%s", arr2);
}
