/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyounp <junyounp@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 18:15:17 by junyounp          #+#    #+#             */
/*   Updated: 2021/09/26 18:15:49 by junyounp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

#include "rush.h"

t_num_val	g_val;

int	ft_strstr(char *str, char *to_find)
{
	char	*a;
	char	*b;

	if (!*to_find)
		return (0);
	while (*str)
	{
		a = str;
		b = to_find;
		while (*b && *a == *b)
		{
			++a;
			++b;
		}
		if (*b == 0 && *a == '\0')
			return (1);
		++str;
	}
	return (0);
}

void	print_dict(char *str)
{
	int	i;
	int	len;

	i = 0;
	while (i < g_val.g_arr_len)
	{
		if (ft_strstr(g_val.g_num_arr[i], str) == 1)
		{
			len = 0;
			while (g_val.g_eng_arr[i][len] != '\0')
			{
				g_val.g_print_str[g_val.g_str_len++] = g_val.g_eng_arr[i][len];
				len++;
			}
			g_val.g_print_str[g_val.g_str_len++] = ' ';
			return ;
		}
		i++;
	}
	return ;
}

int	except_argument(char *argu)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (argu[i] != '\0')
	{
		if (argu[i] < '0' || '9' < argu[i])
		{
			flag = 0;
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	malloc_arr();
	if (argc != 1 && except_argument(argv[1]) != 0)
	{
		if (argc == 2)
		{
			g_val.g_str_len = 0;
			print_num_to_char(argv[1]);
			g_val.g_print_str[g_val.g_str_len] = '\0';
			write(1, g_val.g_print_str, g_val.g_str_len - 1);
			write(1, "\n", 1);
			free_arr(2);
		}
		else if (argc == 3)
			duplicate_dict(argv[1], argv[2]);
		else
		{
			write(1, "Error\n", 6);
			free_arr(3);
		}
	}
	else
		write(1, "Error\n", 6);
}
