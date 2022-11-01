/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:31:51 by skaur             #+#    #+#             */
/*   Updated: 2022/11/01 11:52:34 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordlen(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s++ != c)
		len++;
	return (len);
}

static size_t	ft_count_word(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s && *s == c)
		s++;
	while (*s)
	{
		count++;
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
	}
	return (count);
}

static char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*result;

	result = (char *)malloc(sizeof(char) * (n + 1));
	if (result == NULL)
		return (0);
	i = 0;
	while (i < n)
	{
		result[i] = s[i];
		i++;
	}
	result[i] = 0;
	return (result);
}

static void	ft_free_arr(char **s, int i)
{
	while (i--)
		free(s[i]);
	free(s);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	count;
	size_t	word_len;
	size_t	i;

	count = ft_count_word(s, c);
	result = (char **)malloc(sizeof(char *) * (count + 1));
	if (result == NULL)
		return (0);
	i = 0;
	while (i < count)
	{
		while (*s && *s == c)
			s++;
		word_len = ft_wordlen(s, c);
		result[i] = ft_strndup(s, word_len);
		if (result == NULL)
			ft_free_arr(result, i - 1);
		return (0);
		s += word_len;
		i++;
	}
	result[count] = 0;
	return (result);
}
/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char **ft_split(char const *s, char c);

int main(void)
{
  char s[] = "To be, or not to be, that is the question.";
  int count_strings = 0;
  char c[] = ",";
  char *split_strings = ft_split(s, c);
  for (int i = 0; i < count_strings; i++)
    printf("%s\n", split_strings[i]);

   for (int i = 0; i < count_strings; i++)
    free(split_strings[i]);
  free(split_strings);

  return 0;
}*/
