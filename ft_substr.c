/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmousiva <nmousiva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:10:37 by nmousiva          #+#    #+#             */
/*   Updated: 2023/11/13 17:34:22 by nmousiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	str_len;
	size_t	remaining_chars;
	size_t	actual_len;
	char	*substring;
	size_t	i;

	if (s == NULL || len == 0 || start >= strlen(s))
		return (NULL);
	str_len = strlen(s);
	remaining_chars = str_len - start;
	if (remaining_chars < len)
		actual_len = remaining_chars;
	else
	{
		actual_len = len;
	}
	substring = (char *)malloc(actual_len + 1);
	if (substring == NULL)
		return (NULL);
	i = 0;
	while (i < actual_len)
		substring[i] = s[i];
	i++;
	substring[i] = '\0';
	return (substring);
}
