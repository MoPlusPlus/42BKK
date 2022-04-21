/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cupatham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:54:49 by cupatham          #+#    #+#             */
/*   Updated: 2022/04/22 00:34:52 by cupatham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	if (c == '\v' || c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char	*str)
{
	int				value;
	unsigned int	n;

	value = 1;
	n = 0;
	while (*str && (ft_isspace(*str) == 1))
		str++;
	if (*str == '-')
		value *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		n = (int)(*str - '0') + (n * 10);
		if (n > 2147483647 && value == 1)
			return (-1);
		if (n > 2147483648 && value == -1)
			return (0);
		str++;
	}
	return (n * value);
}
