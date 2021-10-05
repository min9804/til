/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 13:42:42 by jaeskim           #+#    #+#             */
/*   Updated: 2020/07/09 21:44:25 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *str_tmp;
	char *to_find_tmp;

	if (!*to_find)
		return (str);
	while (*str)
	{
		str_tmp = str;
		to_find_tmp = to_find;
		while (*str_tmp && *to_find_tmp && *str_tmp == *to_find_tmp)
		{
			str_tmp++;
			to_find_tmp++;
		}
		if (!*to_find_tmp)
			return (str);
		str++;
	}
	return (0);
}
