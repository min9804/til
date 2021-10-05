/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deal_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 19:03:48 by junyounp          #+#    #+#             */
/*   Updated: 2021/09/26 19:03:49 by junyounp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

#include "rush.h"

t_num_val	g_val;

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	*u_s1;
	unsigned char	*u_s2;
	int				i;

	u_s1 = (unsigned char *)s1;
	u_s2 = (unsigned char *)s2;
	i = 0;
	while (*(u_s1 + i) == *(u_s2 + i) && \
		(*(u_s1 + i) != '\0' || *(u_s2 + i) != '\0'))
		i++;
	return (*(u_s1 + i) - *(u_s2 + i));
}

void	edit_dict(void)
{
	int	fd;
	int	i;
	int	len;

	fd = open ("numbers.dict", O_RDWR | O_TRUNC, 755);
	i = 0;
	while (i < g_val.g_arr_len)
	{
		if (i == g_val.g_arr_len - 1)
			return ;
		len = 0;
		while (g_val.g_num_arr[i][len] != '\0')
			len++;
		write(fd, g_val.g_num_arr[i], len);
		write(fd, ": ", 2);
		len = 0;
		while (g_val.g_eng_arr[i][len] != '\0')
			len++;
		write(fd, g_val.g_eng_arr[i], len);
		write(fd, "\n", 1);
		i++;
	}
	close(fd);
}

void	write_dict(char *str1, char *str2)
{
	int	fd;
	int	str1_len;
	int	str2_len;

	fd = open ("numbers.dict", O_RDWR | O_APPEND, 755);
	str1_len = 0;
	str2_len = 0;
	while (*(str1 + str1_len) != '\0')
		str1_len++;
	while (*(str2 + str2_len) != '\0')
		str2_len++;
	write(fd, str1, str1_len);
	write(fd, ": ", 2);
	write(fd, str2, str2_len);
	write(fd, "\n", 1);
	close(fd);
}

void	duplicate_dict(char *str1, char *str2)
{
	int	i;
	int	change;

	i = 0;
	change = 0;
	while (i < g_val.g_arr_len)
	{
		if (ft_strcmp(str1, g_val.g_num_arr[i]) == 0)
		{
			g_val.g_eng_arr[i] = str2;
			change = 1;
			break ;
		}
		i++;
	}
	if (change == 0)
		write_dict(str1, str2);
	else if (change == 1)
		edit_dict();
}
