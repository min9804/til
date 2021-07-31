#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *temp;
	unsigned int i;

	i = 0;
	temp = dest;
	while (*temp)
		temp++;
	while (i < nb && *src)
	{
		*temp = *src;
		temp++;
		src++;
		i++;
	}

	*temp = 0;

	return (dest);
}

void	main()
{
	char arr1[10] = "asdf";
	char arr2[] = "123";
	ft_strncat(arr1, arr2, 2);
	printf("%s", arr1);
}
