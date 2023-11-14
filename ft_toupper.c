/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmousiva <nmousiva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 19:58:29 by nmousiva          #+#    #+#             */
/*   Updated: 2023/11/13 15:16:06 by nmousiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_toupper(char *c)
{
	if (*c >= 'a' && *c <= 'z')
	{
		*c = *c - 32;
	}
}
/*
int	main(void)
{
	char c1 = 'a';
	char c2 = 'G';
	char c3 = '\0';

	ft_toupper(&c1);
	ft_toupper(&c2);
	ft_toupper(&c3);

	printf("Result for str1: %c\n", c1);
	printf("Result for str2: %c\n", c2);
	printf("Result for str3: %c\n", c3);

	return (0);
}*/
