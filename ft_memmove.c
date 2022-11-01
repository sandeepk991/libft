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
	unsigned char		*des;
	const unsigned char	*s;

	if (!dest && !src)
		return (0);
	if (dest > src && dest < src + n)
	{
		des = (unsigned char *)dest + n;
		s = (unsigned char *)src + n;
		while (n-- > 0)
		{
			*des-- = *s--;
		}
	}
	else
	{
		des = dest;
		s = src;
		while (n-- > 0)
		{
			*des++ = *s++;
		}
	}
	return (des);
}
/*#include <stdio.h>
#include <string.h>
int main () {
   char dest[22];
   const char src[]  = "lorem ipum dolor sit a";

   printf("Before memmove dest = \n%s\n", dest);
 ft_memmove(dest, src, 22);
   printf("After memmove dest = \n%s\n", dest);

   return(0);
}*/
