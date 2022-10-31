/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:30:36 by skaur             #+#    #+#             */
/*   Updated: 2022/10/31 13:10:32 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != c)
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
	const char str[] = "helloworld";
	const char ch = '.';
	char *result;
	result = ft_strchr(str, ch);
	printf("String after '%c' is - %s\n", ch, result);
	return(0);
}*/
