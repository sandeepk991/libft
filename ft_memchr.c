/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:44:45 by skaur             #+#    #+#             */
/*   Updated: 2022/10/31 12:53:00 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*temp;

	temp = (const unsigned char *)s;
	while (n-- > 0)
	{
		if (*temp == (unsigned char)c)
		{
			return ((void *)temp);
		}
		temp++;
	}
	return (0);
}
/*#include<stdio.h>
#include<string.h>

int main () 
{
   const char str[] = "bonjour";
   const char ch = 's';
   char *result;
   char *result1;

   result = memchr(str, ch, 7);

   printf("For built-in:  String after '%c' is - '%s'\n", ch, result);

   result1 = ft_memchr(str, ch, 5);

   printf("For user defined:  String after '%c' is - '%s'\n", ch, result1);

   return(0);
}*/
