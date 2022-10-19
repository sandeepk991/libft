/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:53:32 by skaur             #+#    #+#             */
/*   Updated: 2022/10/10 16:16:26 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 127)
		return (1);
	else
		return (0);
}
/*#include<stdio.h>
int	main(void)
{
	int	a;

	a = '@';
	if (ft_isprint(a))
		printf("'%c' is a printable character. \n", a);
	else
		printf("'%c' is not a printable character. \n", a);
	return (0);
}/*
