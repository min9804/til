#include <stdlib.h>
#include <stdio.h>

int		get_word_count(char *str)
{
	int i;

	i = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n')
		++str;
	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			while (*str == ' ' || *str == '\t' || *str == '\n')
				++str;
			++i;
		}
		else
			++str;
	}
	return (i);
}

char	**ft_split(char *str)
{
	int word;
	char **ret;
	int i;
	int j;
	int k;
	
	word = get_word_count(str);
	if (!(ret = (char **)malloc(sizeof(char *) * word)))
		return (NULL);
	i = 0;
	j = 0;
	while (i < word)
	{
		k = 0;
		if (!(ret[i] = (char *)malloc(sizeof(char) * 4096)))
			return (NULL);
		while (str[j] == ' ' || str[j] == '\t' || str[j] == '\n')
			++j;
		while (str[j] != ' ' && str[j] != '\t' || str[j] != '\n')
			ret[i][k++] = str[j];
		ret[i][k] = '\0';
		++i;
	}
	ret[i] = NULL;
	return (ret);
}

int		main(void)
{
	char **arr;
	int i;

	arr = ft_split("hello world");
	while (arr[i])
	{
		printf("%s\n", arr[i]);
		++i;
	}
	return (0);
}
	
