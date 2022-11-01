/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 09:11:58 by skaur             #+#    #+#             */
/*   Updated: 2022/11/01 16:49:48 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*temp;

	temp = '\0';
	if (*str != '\0')
	{
		while (*str++)
		{
			if (*str == (char)c)
				temp = (char *)str;
		}
		return (temp);
	}
	return (0);
}
/*#include<stdio.h>
#include<string.h>
int	main(void)
{
	int len;
	const char str[] = "bonjour";
	const char ch = 'o';
	char *result;
	char *result1;
	result = ft_strrchr(str, ch);
	printf("String after '%c' is - %s\n", ch, result);
	result1 = strrchr(str, ch);
        printf("String builtin after '%c' is - %s\n", ch, result1);
	return(0);
}*/
