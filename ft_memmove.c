/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:51:09 by skaur             #+#    #+#             */
/*   Updated: 2022/11/01 13:04:51 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (0);
	i = 0;
	if ((size_t)dest - (size_t)src < n)
	{
		i = n - 1;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}
/*#include <stdio.h>
#include <string.h>
int main (void)
{
   long int dest[100];
   //const char src[]  = "lorem ipum dolor sit a";

   //printf("Before memmove dest = \n%s\n", dest);
 ft_memmove(0x7ffcbc1078a0, 0x7ffcbc1078a2: "123456", 4);
   printf("After memmove dest = \n%ld\n", dest);

   return(0);
}*/
