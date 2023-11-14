/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmousiva <nmousiva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:29:11 by nmousiva          #+#    #+#             */
/*   Updated: 2023/11/13 16:54:36 by nmousiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (!in_word)
			{
				count++;
				in_word = 1;
			}
		}
		else
		{
			in_word = 0;
		}
		s++;
	}
	return (count);
}

char	**ft_split(const char *s, char c)
{
	int		word_count;
	char	**result;
	int		word_index;
	int		in_word;

	word_count = count_words(s, c);
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (result == NULL)
	{
		return (NULL);
	}
	word_index = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (!in_word)
			{
				result[word_index++] = strdup(s);
				in_word = 1;
			}
			else
			{
				if (in_word)
				{
					in_word = 0;
				}
			}
			s++;
		}
		result[word_count] = NULL;
		return (result);
	}
