/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:04:28 by skaur             #+#    #+#             */
/*   Updated: 2022/10/31 13:19:36 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	d_offset;
	size_t	src_i;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	d_offset = d_len;
	src_i = 0;
	while (*(src + src_i) != '\0' && d_offset != size - 1)
	{
		*(dst + d_offset) = *(src + src_i);
		d_offset++;
		src_i++;
	}
	*(dst + d_offset) = '\0';
	return (d_len + s_len);
}
/*int main()
{
	char first[] = "This is ";
	char last[] = "a potentially long string";
	int r;
	int size = 16;
	char buffer[size];

	strcpy(buffer,first);
	r = ft_strlcat(buffer,last,size);

	puts(buffer);
	printf("Value returned: %d\n",r);
	if( r > size )
		puts("String truncated");
	else
		puts("String was fully copied");

	return(0);
}*/
