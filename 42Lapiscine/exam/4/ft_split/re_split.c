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
	return (i + 1);
}

char	**ft_split(char *str)
{
	int word;
	int i;
	int j;
	int k;
	char **ret;
	
	i = 0;
	k = 0;
	word = get_word_count(str);
	if (!(ret = (char **)malloc(sizeof(char *) * word)))
		return (NULL);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		++i;
	while (str[i])
	{
		j = 0;
		if (!(ret[k] = (char *)malloc(sizeof(char) * 4096)))
			return (NULL);
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
			ret[k][j++] = str[i++];
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			++i;
		ret[k][j] = '\0';
		++k;
	}
	ret[k] = NULL;
	return (ret);
}

int		main(void)
{
	char **arr;
	char arr2[] = "hello world";
	int i;

	arr = ft_split(arr2);
	i = 0;
	while (arr[i])
	{
		printf("%s\n", arr[i]);
		++i;
	}
	return (0);
}
