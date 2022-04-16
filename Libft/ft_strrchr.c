/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cupatham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 20:06:18 by cupatham          #+#    #+#             */
/*   Updated: 2022/04/16 13:08:50 by cupatham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	index;
	int		current;
	char	*last;

	index = 0;
	last = NULL;
	while (1)
	{
		current = s[index];
		if (current == c)
			last = (char *)(s + index);
		if (current == '\0')
			break ;
		index++;
	}
	return (last);
}
