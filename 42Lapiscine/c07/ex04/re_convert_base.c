#include <stdlib.h>
#include <stdio.h>

int	check_base(char *base)
{
	int i;
	int j;

	i = 0;
	while(base[i])
	{
		j = i + 1;
		while (base[i])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if ((9 <= base[i] && base[i] <= 13) || base[i] ==  ' '
				|| base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, int len, char *base)
{
	int i;
	int num;
	int sign;

	num = 0;
	sign = 1;
	while ((9 <= *str && *str <= 13) || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str)
	{
		i = 0;
		while (base[i])
		{
			if (*str == base[i])
				num = len * num + i;
			i++;
		}
		str++;
	}
	num *= sign;
	return (num);
}

int	get_size(int num, int len)
{
	int i;
	
	i = 0;
	if (num < 0)
		num *= -1;
	while (num > 0)
	{
		num = num / len;
		i++;
	}
	return (i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int len_f;
	int len_t;
	int num;
	long long temp;
	int size;
	char *ret;

	len_f = check_base(base_from);
	len_t = check_base(base_to);
	if (len_f < 2 || len_t < 2)
		return (0);
	num = ft_atoi_base(nbr, len_f, base_from);
	size = get_size(num, len_t);
	temp = num;
	if (temp < 0)
	{
		size += 1;
		temp *= -1;
	}
	ret = (char*)malloc(sizeof(char) * (size));
	if (num < 0)
		ret[0] = '-';
	ret[size] = '\0';
	while (size && temp)
	{
		ret[--size] = (temp % len_t) + '0';
		temp = temp / len_t;
	}
	free(ret);
	return (ret);
}

void	main()
{
	char a[] = "1111";
	char b[] = "01";
	char c[] = "0123456789";
	char *arr = ft_convert_base(a, b, c);
	printf("%s\n", arr);
}
