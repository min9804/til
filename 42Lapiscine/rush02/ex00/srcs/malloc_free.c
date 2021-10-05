/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 18:59:17 by junyounp          #+#    #+#             */
/*   Updated: 2021/09/26 23:30:11 by mher             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include "rush.h"

t_num_val	g_val;

void	store_num_arr(int i)
{
	int	tmp_i;

	tmp_i = 0;
	g_val.g_num_arr[i] = (char *)malloc(sizeof(char) * 255);
	if (!g_val.g_num_arr[i])
		return ;
	while ('0' <= *g_val.g_tmp_str && *g_val.g_tmp_str <= '9')
	{	
		g_val.g_num_arr[i][tmp_i++] = *g_val.g_tmp_str;
		g_val.g_tmp_str++;
	}
	g_val.g_num_arr[i][tmp_i] = '\0';
	if (g_val.g_max_length < tmp_i)
		g_val.g_max_length = tmp_i;
	while (*g_val.g_tmp_str == ' ' || *g_val.g_tmp_str == ':'
		|| *g_val.g_tmp_str == '\t')
		g_val.g_tmp_str++;
}

void	store_eng_arr(int i)
{
	int	tmp_i;

	tmp_i = 0;
	g_val.g_eng_arr[i] = (char *)malloc(sizeof(char) * 255);
	if (!g_val.g_eng_arr[i])
		return ;
	while (*g_val.g_tmp_str != '\n' && 32 <= *g_val.g_tmp_str && \
		*g_val.g_tmp_str <= 127)
	{
		g_val.g_eng_arr[i][tmp_i++] = *g_val.g_tmp_str;
		g_val.g_tmp_str++;
	}
	g_val.g_eng_arr[i][tmp_i] = '\0';
	if (*g_val.g_tmp_str == '\n')
		g_val.g_tmp_str++;
}

void	store_arr(void)
{
	int	i;

	i = 0;
	g_val.g_max_length = 0;
	while (i < g_val.g_arr_len)
	{
		store_num_arr(i);
		store_eng_arr(i);
		i++;
	}
}

void	malloc_arr(void)
{
	int	i;
	int	fd;

	i = 0;
	fd = open ("numbers.dict", O_RDONLY, 755);
	g_val.g_file_len = read(fd, g_val.g_str, 2000);
	g_val.g_arr_len = 0;
	while (g_val.g_str[i] != '\0')
	{
		if (g_val.g_str[i] == '\n')
			g_val.g_arr_len++;
		i++;
	}
	g_val.g_arr_len++;
	g_val.g_num_arr = malloc(sizeof(char *) * g_val.g_arr_len);
	if (!g_val.g_num_arr)
		return ;
	g_val.g_eng_arr = malloc(sizeof(char *) * g_val.g_arr_len);
	if (!g_val.g_eng_arr)
		return ;
	g_val.g_tmp_str = g_val.g_str;
	store_arr();
	close(fd);
}

void	free_arr(int num)
{
	free(g_val.g_num_arr);
	free(g_val.g_eng_arr);
	if (num == 3)
		free(g_val.g_tmp_str);
}
