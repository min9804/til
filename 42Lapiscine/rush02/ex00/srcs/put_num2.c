/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_num2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mher <mher@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 18:35:09 by mher              #+#    #+#             */
/*   Updated: 2021/09/26 23:21:54 by mher             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

void	print_one(char c)
{
	char	*tmp;

	tmp = (char *)malloc(sizeof(char) * 2);
	if (!tmp)
		return ;
	tmp[0] = c;
	tmp[1] = 0;
	print_dict(tmp);
	free(tmp);
}

void	print_ten(char *str)
{
	char	*tmp;

	tmp = (char *)malloc(sizeof(char) * 3);
	if (!tmp)
		return ;
	tmp[0] = *str;
	tmp[2] = 0;
	if (*str == '1')
	{
		tmp[1] = *(str + 1);
		print_dict(tmp);
	}
	else
	{
		tmp[1] = '0';
		print_dict(tmp);
		if (*(str + 1) != '0')
			print_one(*(str + 1));
	}
	free(tmp);
}

void	print_hun(char *str)
{
	if (*str != '0')
	{
		print_one(*str);
		print_dict("100");
	}
	if (*(str + 1) != '0')
		print_ten((str + 1));
	if (*(str + 1) == '0' && *(str + 2) != '0')
		print_one(*(str + 2));
}
