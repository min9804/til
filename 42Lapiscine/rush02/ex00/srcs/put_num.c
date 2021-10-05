/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_num.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mher <mher@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 19:37:30 by mher              #+#    #+#             */
/*   Updated: 2021/09/26 20:21:54 by mher             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush.h"

t_num_val	g_val;

char	*div_position(char *str, int *len)
{
	if (*len % 3 == 0)
	{
		print_hun(str);
		*len -= 3;
		str += 3;
		if (!(*(str - 3) == '0' && *(str - 2) == '0' && *(str - 1) == '0'))
			print_position(*len + 1);
	}
	else if (*len % 3 == 2 && *str != '0')
	{
		print_ten(str);
		*len -= 2;
		str += 2;
		if (!(*(str - 2) == '0' && *(str - 1) == '0'))
			print_position(*len + 1);
	}
	else if (*len % 3 == 1 && *str != '0')
	{
		print_one(*str);
		*len -= 1;
		str += 1;
		if (!(*(str - 1) == '0'))
			print_position(*len + 1);
	}
	return (str);
}

void	print_position(int len)
{
	char	*tmp;
	int		i;

	i = len;
	tmp = (char *)malloc(sizeof(char) * i + 1);
	if (!tmp)
		return ;
	tmp[i] = 0;
	i--;
	while (i > 0)
	{
		tmp[i] = '0';
		i--;
	}
	tmp[0] = '1';
	print_dict(tmp);
	free(tmp);
}

int	excess_length(int len, int cnt)
{
	if (cnt == len)
	{
		write(1, "zero", 4);
		return (-1);
	}
	if (len >= g_val.g_max_length + 3)
	{
		write(1, "Dict Error", 10);
		return (-1);
	}
	return (0);
}

void	print_num_to_char(char *str)
{
	int	len;
	int	cnt;

	len = ft_strlen(str);
	cnt = 0;
	if (excess_length(len, cnt) == -1)
		return ;
	while (*str && *str == '0')
	{
		++cnt;
		++str;
	}
	if (excess_length(len, cnt) == -1)
		return ;
	len = ft_strlen(str);
	while (len > 3)
		str = div_position(str, &len);
	if (len == 3)
		print_hun(str);
	else if (len == 2)
		print_ten(str);
	else if (len == 1)
		print_one(*str);
}
