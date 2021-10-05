/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 13:32:07 by jaeskim           #+#    #+#             */
/*   Updated: 2020/07/09 21:21:21 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*start;
	unsigned int	i;

	i = 0;
	start = dest;
	while (*dest++)
		;
	dest--;
	while (i++ < nb && *src)
		*dest++ = *src++;
	while (*dest)
		*dest++ = '\0';
	return (start);
}
