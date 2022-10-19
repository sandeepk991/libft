/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:54:37 by skaur             #+#    #+#             */
/*   Updated: 2022/10/15 13:57:05 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//have problem with no value in dest

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t  i;
	
	i = 0;
	if (size > 0)
	{
		while (*(src + i) != '\0')
		{
			if (i == size)
			{
				i--;
				break;
			}
			*(dst + i) = *(src + i);
			i++;
		}
	}
	*(dst + i) = '\0';
	while (*(src + i) != '\0')
		i++;
	return (i);
}
#include<bsd/string.h>
int     main(void)
{
        char src1[] = "hello7891234567";
        char dest1[] = "";
	char src2[] = "hello7891234567";
        char dest2[] = "";
	printf("user-defined function : \n");
        printf( "Source1 is originally = '%s'\n", src1);
        printf( "destination1 is originally = '%s'\n", dest1);
        ft_strlcpy(dest1,src1,3);
        printf( "Source1 is after strlcpy = '%s'\n", src1);
        printf( "Length of string after strlcpy = '%zu'\n",ft_strlcpy(dest1,src1,3));
        printf( "destination1 after strncpy = '%s'\n", dest1);

	printf("\n\nbuilt-in function : \n");
	printf( "Source2 is originally = '%s'\n", src2);
        printf( "destination2 is originally = '%s'\n", dest2);
        strlcpy(dest2,src2,3);
        printf( "Source2 is after strlcpy = '%s'\n", src2);
        printf( "Length of string after strlcpy = '%zu'\n",strlcpy(dest2,src2,3));
        printf( "destination2 after strncpy = '%s'\n", dest2);
}
