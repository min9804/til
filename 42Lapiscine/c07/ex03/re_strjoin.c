#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	long long i;
	while (str[i])
		i++;
	return (i);
}

char 	*ft_strcat(char *dest, char *src)
{
	while (*src)
		*(dest++) = *(src++);
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *ret;
	char *tmp;
	long long strs_len;
	int i;

	if (!size)
	{
		ret = (char*)malloc(1);
		ret[0] = 0;
		return (ret);
	}
	strs_len = 0;
	i = 0;
	while (i < size)
		strs_len += ft_strlen(strs[i++]);
	ret = (char*)malloc(strs_len + (size - 1) * ft_strlen(sep) + 1);
	tmp = ft_strcat(ret, strs[0]);
	i = 1;
	while (i < size)
	{
		tmp = ft_strcat(tmp, sep);
		tmp = ft_strcat(tmp, strs[i++]);
	}
	*tmp = 0;
	return (ret);
}

int main()
{
	char **arr;
	char *sep;
	arr[0] = "123";
	arr[1] = "456";
	sep = "%^&";
	printf("%s\n", ft_strjoin(2, arr, sep));
}
