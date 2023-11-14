/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmousiva <nmousiva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:52:23 by nmousiva          #+#    #+#             */
/*   Updated: 2023/11/13 15:15:28 by nmousiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*d;
	size_t	i;

	d = (char *)malloc(n + 1);
	if (d == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	d[n] = '\0';
	return (d);
}
/*
int main ()
{
	char source[] = "GeeksForGeeks";
	char* target = ft_strndup(source,5);

	if (target != NULL){
		printf("%s", target);
		free(target);
	}
	else{
		printf("memory allocation failed.\n");
	}

	return (0);
}*/
