/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:37:53 by skaur             #+#    #+#             */
/*   Updated: 2022/10/31 12:11:52 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen(int n)
{
	size_t	len;

	len = 0;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	nbr_len;
	size_t	i;
	char	*result;

	i = 0;
	nbr_len = ft_nbrlen(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	result = (char *)malloc(sizeof(char) * (nbr_len + 1));
	if (result == NULL)
		return (0);
	result[nbr_len] = '\0';
	if (n < 0)
	{
		result[0] = '-';
		n = n * -1;
		i += 1;
	}
	while (i < nbr_len--)
	{
		nbr = nbr / 10;
		result = result + char ((nbr % 10) + '0');
	}
	return (result);
}
