/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:28:19 by skaur             #+#    #+#             */
/*   Updated: 2022/10/31 11:49:04 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (isalpha(c) || isdigit(c))
		return (1);
	else
		return (0);
}
/*int main(void)
{
	char a;
	int i;
	a = '#';
	i = ft_isalnum(a);
	if (i = 1)
		printf("number is alphanumeric");
	else
		printf("number is not alphanumeric");
	return (0);
}*/
