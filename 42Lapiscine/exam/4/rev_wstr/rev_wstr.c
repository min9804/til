#include <stdlib.h>
#include <unistd.h>

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

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		main(int argc, char **argv)
{
	char	**split_str;
	int 	i;
	int	word;

	i = 0;
	if (argc == 2)
	{
		word = get_word_count(argv[1]) - 1;
		split_str = ft_split(argv[1]);
		while (word >= 0)
		{
			ft_putstr(split_str[word]);
			if (word)
				write(1, " ", 1);
			--word;
		}
	}
	write(1, "\n", 1);
	return (0);
}
