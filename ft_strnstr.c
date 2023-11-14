/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmousiva <nmousiva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:06:54 by nmousiva          #+#    #+#             */
/*   Updated: 2023/11/13 15:15:35 by nmousiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;

	needle_len = strlen(needle);
	if (haystack == NULL || needle == NULL || len < needle_len)
	{
		return (NULL);
	}
	if (needle[0] == '\0')
	{
		return ((char *)haystack);
	}
	i = 0;
	while (i < len - needle_len + 1)
	{
		if (haystack[i] == needle[0] && strncmp(&haystack[i], needle,
				needle_len) == 0)
		{
			return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr;

	ptr = ft_strnstr(largestring, smallstring,8);
	printf("Result : %s\n", ptr);

	return (0);
}*/
