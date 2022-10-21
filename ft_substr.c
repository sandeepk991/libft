/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:12:04 by skaur             #+#    #+#             */
/*   Updated: 2022/10/21 10:17:38 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
   char		*p;
   size_t	c;

   c = 0; 
   p = malloc(len + 1);
   
   if (p == NULL)
   {
      printf("Unable to allocate memory.\n");
      exit(1);
   }
 
   while (c < len)
   {
      *(p+c) = *(s + start - 1);      
      s++;
      c++;
   }
 
   *(p+c) = '\0';
 
   return p;
}
/*int main(void)
{
   char string[100] = "code";
   char *p;
   int position, length;

   printf("Enter the position and length of substring\n");
   scanf("%d%d", &position, &length);

   p = ft_substr(string, position, length);

   printf("Required substring is \"%s\"\n", p);

   free(p);

   return 0;
}*/
