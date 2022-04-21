/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cupatham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 20:06:18 by cupatham          #+#    #+#             */
/*   Updated: 2022/04/22 00:26:43 by cupatham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strrchr(const char *s, int	c)
{
	int		i;
	char	*str;
	char	find;

	str = (char *)s;
	find = (char)c;
	i = ft_strlen(str);
	while (i > 0)
	{
		if (str[i] == find)
			return ((char *)str + i);
		i--;
	}
	if (str[i] == find)
		return ((char *)str + i);
	return (0);
}
