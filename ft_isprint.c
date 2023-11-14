/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmousiva <nmousiva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:48:11 by nmousiva          #+#    #+#             */
/*   Updated: 2023/11/13 15:12:07 by nmousiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(char a)
{
	if (a >= 32 && a <= 126)
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	char a1 = '3';
	char a2 = 'h';
	char a3 = '	';

	int result1 = ft_isprint(a1);
	int result2 = ft_isprint(a2);
	int result3 = ft_isprint(a3);

	printf("Result for str1: %d\n", result1);
	printf("Result for str2: %d\n", result2);
	printf("Result for str3: %d\n", result3);

	return (0);
}*/
