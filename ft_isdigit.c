/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:03:05 by skaur             #+#    #+#             */
/*   Updated: 2022/10/11 13:29:02 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int main(void)
{
	int	a;
	int	i;

	a = 'q';
	i = ft_isdigit(a);
	if (i > 0)
		printf("value is digit.");
	else
		printf("value is not digit.");
	return (0);
}*/
