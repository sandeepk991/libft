/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 09:11:58 by skaur             #+#    #+#             */
/*   Updated: 2022/11/04 10:43:38 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	str_len;

	str_len = ft_strlen(str);
	while (str_len != 0 && *(str + str_len) != (char)c)
		str_len--;
	if (*(str + str_len) == (char)c)
		return ((char *)(str + str_len));
	return (0);
}
/*#include<stdio.h>
#include<string.h>
int	main(void)
{
	int len;
	const char str[] = "";
	const char ch = '\0';
	char *result;
	char *result1;
	result = ft_strrchr(str, ch);
	printf("String after '%c' is - %s\n", ch, result);
	result1 = strrchr(str, ch);
        printf("String builtin after '%c' is - %s\n", ch, result1);
	return(0);
}*/
