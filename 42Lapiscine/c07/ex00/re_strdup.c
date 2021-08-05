#include <stdlib.h>
#include <stdio.h>

char 	*ft_strdup(char *src)
{
	long long len;
	char *ret;

	len = 0;
	while (src[len])
		len++;
	ret = (char*)malloc(sizeof(char) * (len + 1));
	ret[len] = 0;
	while (--len >= 0)
		ret[len] = src[len];
	return (ret);
}

void	main()
{
	char arr[] = "hello world";
	char *asd = ft_strdup(arr);
	printf("%s\n", asd);
}
