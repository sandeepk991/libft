/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:17:36 by skaur             #+#    #+#             */
/*   Updated: 2022/10/31 14:49:39 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*des;
	char	*srce;

	if (!dest && !src)
		return (0);
	des = (char *)dest;
	srce = (char *)src;
	while (n-- > 0)
		*des = *srce;
	return (des);
}
