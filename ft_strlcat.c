/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmousiva <nmousiva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:49:32 by nmousiva          #+#    #+#             */
/*   Updated: 2023/11/13 15:14:52 by nmousiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	destlen;
	size_t	remaining;

	i = 0;
	destlen = strnlen(dest, destsize);
	if (destlen == destsize)
	{
		return (destsize + strlen(src));
	}
	remaining = destsize - destlen - 1;
	while (src[i] && remaining > 0)
	{
		dest[destlen + i] = src[i];
		i++;
		remaining--;
	}
	dest[destlen + i] = '\0';
	while (src[i])
	{
		i++;
	}
	return (destlen + i);
}
/*
int	main(void)
{
	char	src;
   	src[]= "Rovaniemi";
	size_t	newLength;
	char	dest[10] = "2607";
	newLength = ft_strlcat(dest, src, sizeof(dest));
	printf("%s\n", dest);
	printf("New length: %zu\n", newLength);
}*/
