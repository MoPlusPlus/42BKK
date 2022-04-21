/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cupatham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:17:59 by cupatham          #+#    #+#             */
/*   Updated: 2022/04/22 06:23:21 by cupatham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*dest;
	char	*source;
	size_t	dst_length;
	size_t	rem;

	dest = dst;
	source = (char *)src;
	rem = dstsize;
	while (rem-- != 0 && *dest != '\0')
		dest++;
	dst_length = dest - dst;
	rem = dstsize - dst_length;
	if (rem == 0)
		return (dst_length + ft_strlen(source));
	while (*source != '\0')
	{
		if (rem > 1)
		{
			*dest++ = *source;
			rem--;
		}
		source++;
	}
	*dest = '\0';
	return (dst_length + (source - src));
}
