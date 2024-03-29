/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:28:34 by skaur             #+#    #+#             */
/*   Updated: 2022/10/31 15:37:16 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*clear;

	while (*lst != NULL)
	{
		clear = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = clear;
	}
	*lst = NULL;
}
