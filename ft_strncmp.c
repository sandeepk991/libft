/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:40:03 by skaur             #+#    #+#             */
/*   Updated: 2022/10/13 13:44:04 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (*s1 != '\0' && *s2 != '\0' && i < n)
	{
		if (*s1 != *s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		i++;
	}
	if (i != n)
	{
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int main ()
{
   char str1[15];
   char str2[15];
   int ret;
   int ret1;

   strcpy(str1, "Hello");
   strcpy(str2, "Aticleiworld");

   ret = strncmp(str1, str2, 4);
   printf("builtin function\n");
   if(ret < 0) {
      printf("str1 is less than str2\n");
   } else if(ret > 0) {
      printf("str2 is less than str1\n");
   } else {
      printf("str1 is equal to str2\n");
   }

   ret = ft_strncmp(str1, str2, 4);
   printf("\nmy function\n");
   if(ret < 0) {
      printf("str1 is less than str2\n");
   } else if(ret > 0) {
      printf("str2 is less than str1\n");
   } else {
      printf("str1 is equal to str2\n");
   }

   return(0);
}*/
