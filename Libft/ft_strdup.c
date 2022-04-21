/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cupatham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:09:56 by cupatham          #+#    #+#             */
/*   Updated: 2022/04/22 06:23:18 by cupatham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char	*str)
{
	char	*n_str;
	size_t	i;

	i = 0;
	n_str = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!n_str)
		return (0);
	while (str[i])
	{
		n_str[i] = str[i];
		i++;
	}
	n_str[i] = 0;
	return (n_str);
}
