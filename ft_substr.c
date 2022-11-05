/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:12:04 by skaur             #+#    #+#             */
/*   Updated: 2022/11/04 10:59:00 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	if (s == NULL || ft_strlen(s) < start)
		return (ft_strdup(""));
	if (start + len < ft_strlen(s))
		new_str = (char *)malloc(sizeof(char) * (len + 1));
	else
		new_str = (char *)malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	if (!s || !new_str)
		return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		new_str[j++] = s[i++];
	new_str[j] = '\0';
	return (new_str);
}
/*#include<stdio.h>
int main(void)
{
   char string[100] = "lorem ipsum dolor sit amet";
   char *p;
   int position, length;

   printf("Enter the position and length of substring\n");
   scanf("%d%d", &position, &length);

   p = ft_substr(string, position, length);

   printf("Required substring is \"%s\"\n", p);

   free(p);

   return 0;
}*/
