#include <stdlib.h>

char	*ft_strdup(char *src)
{
	long long i;
	char *ret;

	i = 0;
	while (src[i])
		++i;
	ret = (char *)malloc(sizeof(char) * (i + 1));
	while (i--)
		ret[i] = src[i];
	return (ret);
}
