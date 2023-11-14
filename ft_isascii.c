/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmousiva <nmousiva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:38:31 by nmousiva          #+#    #+#             */
/*   Updated: 2023/11/13 15:11:59 by nmousiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(char a)
{
	if (a >= 0 && a <= 127)
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	char	a1;
	char	a2;
	char	a3;
	int		result1;
	int		result2;
	int		result3;

	a1 = '3';
	a2 = 'h';
	a3 = '\0';
	result1 = ft_isascii(a1);
	result2 = ft_isascii(a2);
	result3 = ft_isascii(a3);
	printf("Result for str1: %d\n", result1);
	printf("Result for str2: %d\n", result2);
	printf("Result for str3: %d\n", result3);
	return (0);
}*/
