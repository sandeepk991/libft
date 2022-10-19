/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:44:45 by skaur             #+#    #+#             */
/*   Updated: 2022/10/14 09:31:31 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *temp;
	unsigned char *findchar;

	findchar = '\0';
	temp = (unsigned char *)s;
	while (*temp != '\0' && n--)
	{
		if(*temp != (unsigned char)c)
		{
			temp++;
		}
		else
		{
			findchar = temp;
		}
	}
	return findchar;
}
/*#include<stdio.h>
#include<string.h>

int main () 
{
   const char str[] = "round the zoo";
   const char ch = 't';
   char *result;
   char *result1;

   result = memchr(str, ch, 5);

   printf("For built-in:  String after '%c' is - '%s'\n", ch, result);

   result1 = ft_memchr(str, ch, 5);

   printf("For user defined:  String after '%c' is - '%s'\n", ch, result1);

   return(0);
}*/
