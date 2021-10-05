/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 14:43:40 by jaeskim           #+#    #+#             */
/*   Updated: 2020/07/09 23:28:04 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_size;
	unsigned int	src_size;

	i = 0;
	dest_size = 0;
	src_size = 0;
	while (*dest++)
		dest_size++;
	while (src[src_size])
		src_size++;
	if (size < dest_size)
		return (src_size + size);
	--dest;
	while (*src && i++ < ((long long)size - dest_size - 1))
		*dest++ = *src++;
	*dest = '\0';
	return (src_size + dest_size);
}
