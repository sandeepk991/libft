/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaur <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 09:19:06 by skaur             #+#    #+#             */
/*   Updated: 2022/10/20 10:14:27 by skaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char **ft_split(char const *s, char c)
{
	int	*count;
	int	s_len;
	int	i;
	int	old_i;

	count = 0;
	i = 0;
	s_len = ft_strlen(s);
	while (i < s_len)
	{
		while (i < s_len)
		{
			if (ft_strchr(c, s[i]) == '\0')
				break;
			i++;
		}
		old_i = i;
		while (i < s_len)
		{
			if (ft_strchr(c, s[i]) != '\0')
				break;
			i++;
		}
		if (i > old_i)
			*count = *count + 1;
	}
	char **strings = malloc(sizeof(char *) * *count);
	i = 0;
	char buffer[16384];
	int string_index = 0;
	while (i < s_len)
	{
		while (i < s_len)
		{
		if (ft_strchr(c, s[i]) == '\0')
			break;
		i++;
		}
		int j = 0;
		while (i < s_len)
		{
			if (ft_strchr(c, s[i]) != '\0')
				break;
			buffer[j] = s[i];
			i++;
			j++;
    		}
		if (j > 0)
		{i
			buffer[j] = '\0';
			int to_allocate = sizeof(char) * (ft_strlen(buffer) + 1);
			strings[string_index] = malloc(to_allocate);
			strcpy(strings[string_index], buffer);
			string_index++;
		}
	}
  return strings;
}
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char **ft_split(char const *s, char c);

int main(void)
{
  char s[] = "To be, or not to be, that is the question.";
  int count_strings = 0;
  char **split_strings = ft_split(s, ",");
  
  // print out the substrings, which should be each word of the sentence above
  for (int i = 0; i < count_strings; i++)
    printf("%s\n", split_strings[i]);
  
  // free the dynamically allocated space for each string
  for (int i = 0; i < count_strings; i++)
    free(split_strings[i]);
  
  // free the dynamically allocated space for the array of pointers to strings
  free(split_strings);
  
  return 0;
}

