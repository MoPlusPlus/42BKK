/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cupatham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:39:04 by cupatham          #+#    #+#             */
/*   Updated: 2022/04/16 13:08:45 by cupatham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *mo, const char *moz, size_t len)
{
	size_t	index;
	size_t	yindex;

	if (*moz == '\0')
		return ((char *)mo);
	if (len == 0)
		return (NULL);
	index = 0;
	yindex = 0;
	while (1)
	{
		if (moz[yindex == '\0'])
			return ((char *)(mo + (index - yindex)));
		if (mo[index] == moz[yindex])
			yindex++;
		else
		{
			index -= yindex;
			yindex = 0;
		}
		if (mo[index] == '\0' || index >= len)
			return (NULL);
		index++;
	}
}
