/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclearc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cupatham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 00:57:57 by cupatham          #+#    #+#             */
/*   Updated: 2022/04/22 01:00:40 by cupatham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*elem;

	if (lst)
	{
		while (*lst)
		{
			elem = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = elem;
		}
	}
}
