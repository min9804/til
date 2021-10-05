/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 13:04:57 by jaeskim           #+#    #+#             */
/*   Updated: 2020/07/10 22:14:32 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (*s1 && *s2 && i < n)
	{
		if (*s1 > *s2)
			return (1);
		else if (*s1 < *s2)
			return (-1);
		i++;
		s1++;
		s2++;
	}
	if (i == n)
		return (0);
	else if (!*s1 && !*s2)
		return (0);
	else if (!*s1)
		return (-1);
	return (1);
}
