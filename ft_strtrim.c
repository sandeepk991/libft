/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:50:13 by skaur             #+#    #+#             */
/*   Updated: 2022/10/31 13:50:18 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	str_len;
	char	*result;

	while (*s1 && ft_strchr(set, *s1) != 0)
		s1++;
	str_len = ft_strlen(s1);
	while (str_len && s1[str_len - 1] && ft_strchr(set, s1[str_len - 1]) != 0)
		str_len--;
	result = (char *)malloc(sizeof(char) * (str_len + 1));
	if (result == NULL)
		return (0);
	ft_memcpy(result, s1, str_len);
	result[str_len] = '\0';
	return (result);
}
