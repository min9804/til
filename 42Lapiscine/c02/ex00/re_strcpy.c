#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

void	main()
{
	char src[] = "hello";
	char dest[10];

	printf("%s", ft_strcpy(dest, src));
}
