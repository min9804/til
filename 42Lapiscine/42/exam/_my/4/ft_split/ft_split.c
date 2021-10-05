#include <stdlib.h>

char	**ft_split(char *str)
{
	int	i;
	int	j;
	int	t;
	char	**split;

	i = 0;
	t = 0;
	if (!(split = (char **)malloc(sizeof(char *) * 256)))
		return (0);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i += 1;
	while (str[i])
	{
		j = 0;
		if (!(split[t] = (char *)malloc(sizeof(char) * 4096)))
			return (0);
		while (!is_white(str[i]))
		{
			split[t][j] = str[i];
			j++;
			i++;
		}
		while (is_white(str[i]))
			++i;
		split[t][j] = 0;
		t++;
	}
	split[t][j] = 0;
	return (split);
}
