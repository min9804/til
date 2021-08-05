#include <stdlib.h>
#include <stdio.h>

unsigned int g_strsize;

int				ft_is_charset(char *str, char *charset)
{
	while (*charset)
	{
		if (*charset == *str)
			return (1);
		charset++;
	}
	return (0);
}

unsigned int	ft_count_words(char *str, char *charset)
{
	int				count;
	char			*str_backup;

	str_backup = str + g_strsize;
	count = 0;
	while (*str && ft_is_charset(str, charset))
		str += 1;
	while (str - str_backup < 0)
	{
		if (!ft_is_charset(str, charset))
		{
			++count;
			str += 1;
			while (*str && !ft_is_charset(str, charset))
				str += 1;
			str -= 1;
		}
		++str;
	}
	return (count);
}

char			*ft_strncpy(char *str, unsigned int n)
{
	unsigned int	i;
	char			*rp;

	i = 0;
	rp = (char *)malloc(sizeof(char) * n);
	while (i < n)
	{
		rp[i++] = *str++;
	}
	rp[i] = '\0';
	return (rp);
}

void			ft_fill_strs(char *str, char *charset, char **strs)
{
	int				i;
	char			*str_backup;

	i = 0;
	str_backup = str + g_strsize;
	while (*str && ft_is_charset(str, charset))
		str += 1;
	while (str - str_backup < 0)
	{
		if (ft_is_charset(str, charset))
		{
			*strs++ = ft_strncpy(str - i, i);
			str += 1;
			while (*str && ft_is_charset(str, charset))
				str += 1;
			i = 0;
		}
		i++;
		str++;
		if (!*str)
			*strs++ = ft_strncpy(str - i, i);
	}
}

char			**ft_split(char *str, char *charset)
{
	unsigned int	size;
	unsigned int	cnt;
	char			**strs;

	if (!*charset)
	{
		strs = (char **)malloc(sizeof(char) * 2);
		size = 0;
		while (str[size])
			++size;
		strs[0] = ft_strncpy(str, size);
		strs[1] = (char *)(0);
		return (strs);
	}
	while (str[g_strsize])
		++g_strsize;
	cnt = ft_count_words(str, charset);
	strs = (char **)malloc(sizeof(char *) * (cnt + 1));
	ft_fill_strs(str, charset, strs);
	strs[cnt] = (char *)(0);
	return (strs);
}

int main()
{
	char *arr = "123a4214bv5b34n664";
	char *set = "abv";
	char **ret = ft_split(arr, set);
	for (int i = 0; ret[i]; i++)
		printf("%s \n", ret[i]);
	return 0;
}
