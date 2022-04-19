/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cupatham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:09:56 by cupatham          #+#    #+#             */
/*   Updated: 2022/04/20 01:46:26 by cupatham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_str_length(char *str);

char	*ft_strdup(const char *src)
{
	int		i;
	char	*dest;
	int		sl;

	i = 0;
	sl = ft_str_length(src);
	dest = (char *)malloc(sl * sizeof(char));
	if (dest == NULL)
	{
		return (dest);
	}
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
