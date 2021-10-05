/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mher <mher@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:44:03 by mher              #+#    #+#             */
/*   Updated: 2021/09/26 19:55:45 by mher             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <unistd.h>
# include <stdlib.h>

int		ft_strlen(char *str);
void	print_position(int len);
void	print_dict(char *args);
void	print_one(char c);
void	print_ten(char *str);
void	print_hun(char *str);
char	*div_position(char *str, int *len);
void	print_position(int len);
void	print_num_to_char(char *str);
void	print_num_to_char(char *str);
void	malloc_arr(void);
void	duplicate_dict(char *str1, char *str2);
void	free_arr(int num);

typedef struct s_num_val
{
	char	g_str[2000];
	char	*g_tmp_str;
	char	**g_num_arr;
	char	**g_eng_arr;
	int		g_arr_len;
	int		g_file_len;
	int		g_max_length;
	char	g_print_str[255];
	int		g_str_len;
}	t_num_val;

#endif
