/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 13:00:03 by jaeskim           #+#    #+#             */
/*   Updated: 2020/07/18 19:39:43 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
		{
			if (*s1 > *s2)
				return (1);
			else if (*s1 < *s2)
				return (-1);
		}
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else if (!*s1)
		return (-1);
	else
		return (1);
}
