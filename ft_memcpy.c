/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:17:36 by skaur             #+#    #+#             */
/*   Updated: 2022/11/01 12:09:15 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*des;
	char	*srce;
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (0);
	des = (char *)dest;
	srce = (char *)src;
	while (i < n)
	{
		*(des + i) = *(srce + i);
		i++;
	}
	return (des);
}
