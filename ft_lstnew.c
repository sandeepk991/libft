/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 08:21:55 by skaur             #+#    #+#             */
/*   Updated: 2022/10/24 09:10:09 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *new_node;
	if (!(new_node = (t_list *)malloc(sizeof(t_list))))
		return (0);
	new_node->content = content;
	content->next = '\0';
	return (new_node);
}
