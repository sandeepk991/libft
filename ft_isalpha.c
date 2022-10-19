/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 08:45:17 by skaur             #+#    #+#             */
/*   Updated: 2022/10/11 14:29:30 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
/*int main(void)
{
	int	a;
	int i;
	a = '#';
	i = ft_isalpha(a);
	if (i > 0)
		printf("value is an alphabet");
	else
		printf("value is not an alphabet");
	return (0);
}*/
