#include <stdlib.h>

int	is_white(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

char	**ft_split(char *str)
{
	int i;
	int j;
	int k;
	char **ret;

	i = 0;
	k = 0;
	if (!(ret = (char **)malloc(2048)))
		return (0);
	while (is_white(str[i]))
		++i;
	while (str[i])
	{
		j = 0;
		if (!(split[k] = (char *)malloc(4096)))
			return (0);
		while(!is_white(str[i]))
			ret[k][j++] = str[i++];
		while(is_white(str[i]))
			++i;
		ret[k][j] = 0;
		++k;
	}
	ret[k] = 0;
	return (ret);
}
