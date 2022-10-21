/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 09:59:59 by skaur             #+#    #+#             */
/*   Updated: 2022/10/21 10:11:18 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	s_len;
	char	*result;

	s_len = ft_strlen(s);
	if (!(result = (char *)malloc(sizeof(char) * (s_len + 1))))
		return (0);
	s_len = 0;
	while (s[s_len])
	{
		result[s_len] = s[s_len];
		s_len++;
	}
	result[s_len] = '\0';
	return (result);
}
