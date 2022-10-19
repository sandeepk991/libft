/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:24:41 by skaur             #+#    #+#             */
/*   Updated: 2022/10/11 09:50:48 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *ptr;

	ptr = s;
	while (n-- > 0)
		*ptr++ = c;
	return (s);
}
/*#include <stdio.h>
#include <string.h>

int main () 
{
   char str[5] = "these";

   ft_memset(str,'$',7);
   puts(str);
 
   return(0);
}/*
