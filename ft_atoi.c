/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:18:54 by skaur             #+#    #+#             */
/*   Updated: 2022/10/14 14:20:35 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	while ((*nptr >= '\t' && *nptr <= '\r') || *nptr == ' ')
		*nptr++;
	while (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = sign * -1;
		*nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9' && *nptr != '\0')
	{
		res = (*nptr - '0') + (res * 10);
		*nptr++;
	}
	return (res * sign);
}
/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
        printf("the integer value is = %d\n",
       	ft_atoi("18446744073709551616"));
        printf("the builtin value is = %d\n",
       	atoi("18446744073709551616"));
}*/
