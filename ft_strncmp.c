/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmousiva <nmousiva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:06:24 by nmousiva          #+#    #+#             */
/*   Updated: 2023/11/13 15:15:18 by nmousiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while ((*s1 != '\0' || *s2 != '\0') && n > 0)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		n--;
		s1++;
		s2++;
	}
	return (0);
}
/*
int	main(void)
{
	char s1[6] = "abcde";
	char s2[6] = "abcdg";
	int n= 5;

	printf("result of comparison: %d\n", ft_strncmp(s1, s2,n));

	return (0);
}*/
