/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:30:36 by skaur             #+#    #+#             */
/*   Updated: 2022/11/04 08:41:40 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char) c)
	{
		if (*s == '\0')
			return (0);
		s++;
	}
	return ((char *)s);
}
/*#include<stdio.h>
#include<string.h>
int main(void)
{
	const char str[] = "tripouille";
	//const char ch = '.';
	char *result;
	//char *result1;
	result = (ft_strchr(str, 't' + 256) == str);
	//result1 = (strchr(str, 't' + 256) == str);
	printf("String after is - %s\n", result);
	//printf(strchr("tripouille", 't' + 256) == "tripouille");
	return(0);
}*/
