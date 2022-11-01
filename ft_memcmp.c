/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 09:40:52 by skaur             #+#    #+#             */
/*   Updated: 2022/11/01 13:37:13 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*temp1;
	unsigned char	*temp2;
	size_t			i;

	temp1 = (unsigned char *)s1;
	temp2 = (unsigned char *)s2;
	i = 0;
	while (*temp1 != '\0' && *temp2 != '\0' && i < n)
	{
		return (*(temp1 + i) - *(temp2 + i));
		i++;
	}
	if (i != n)
	{
		return (*(temp1 + i) - *(temp2 + i));
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int main (void)
{
    int result = 0;
    int result1 = 0;
    char s1[] = "Hello";
    char s2[] = "Hello";
    printf("\nbuilt-in function:\n");
    result1 = memcmp(s1, s2, 5);
    if(result1 > 0)
    {
        printf("s2 is less than s1");
    }
    else if(result1 < 0)
    {
        printf("s1 is less than s2");
    }
    else
    {
        printf("s1 is equal to s2");
    }

    printf("\n\nuser-defined function:\n");
    result = ft_memcmp(s1, s2, 5);
    if(result > 0)
    {
        printf("s2 is less than s1");
    }
    else if(result < 0)
    {
        printf("s1 is less than s2");
    }
    else
    {
        printf("s1 is equal to s2");
    }
    return (0);
}*/
