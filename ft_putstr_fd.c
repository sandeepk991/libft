/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:26:30 by skaur             #+#    #+#             */
/*   Updated: 2022/10/31 13:04:06 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (*(s + i))
	{
		write(fd, s + i, 1);
		i++;
	}
}
/*int main(void)
{
    char str[7] = "sandeep";
	char *s;

	s = &str[7];
    ft_putstr_fd(s, 1);
}*/
