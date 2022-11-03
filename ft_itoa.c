/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:37:53 by skaur             #+#    #+#             */
/*   Updated: 2022/11/01 13:06:28 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_nbr(int n)
{
	size_t	count;
	
	count = 0;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	ft_cpynbr(char *dest, unsigned int n)
{
	if (n < 10)
		*dest = n + '0';
	else
	{
		*dest = n % 10 + '0';
		ft_cpynbr(dest - 1, n / 10);
	}
}

char	*ft_itoa(int n)
{
	char		*result;
	size_t		nbr_len;
	unsigned int		nbr;
	
	nbr = n;
	if (n == 0)
		return (ft_strdup("0"));
	else
	{
		if (n < 0)
			nbr_len = count_nbr(n) + 1;
		else
			nbr_len = count_nbr(n);
	}
	result = (char *)malloc(sizeof(char) * (nbr_len + 1));
	if (result == NULL)
		return (0);
	if (n < 0)
		ft_cpynbr((result + nbr_len -1), -nbr);
	else
		ft_cpynbr((result + nbr_len -1), nbr);
	if (n < 0)
		*result = '-';
	result[nbr_len] = '\0';
	return (result);
}
/*int main() {
    printf(ft_itoa(-3));
    return 0;
}*/
