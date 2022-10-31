/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:51:09 by skaur             #+#    #+#             */
/*   Updated: 2022/10/31 12:58:43 by skaur            ###   ########.fr       */
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
		des = dest + n;
		s = src + n;
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
	return (dest);
}
/*#include <stdio.h>
#include <string.h>
int main () {
   char dest[] = "11ldstring";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
 ft_memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}*/
