/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:48:02 by skaur             #+#    #+#             */
/*   Updated: 2022/10/21 14:59:33 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen(int n)
{
	size_t	len;

	len = 0;
	if  (n <= 0)
	{

}
char	*ft_itoa(int n)
{
	size_t	nbr;
	size_t	nbr_len;
	int	sign;
	char	*result;

	nbr = n;
	nbr_len = ft_nbrlen(n);
	sign = 1;
	if (!(result = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	while (nbr < 0)
	{
		sign = sign * -1;
		nbr = -nbr;
	while (nbr > 0)
	{
		nbr = nbr / 10;
		result += char(nbr % 10 + '0');
	}
	if (sign < 0)


}
