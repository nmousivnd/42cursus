/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmousiva <nmousiva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:38:43 by nmousiva          #+#    #+#             */
/*   Updated: 2023/11/13 15:11:57 by nmousiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(char a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
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
	char a3 = '\0';

	int result1 = ft_isalpha(a1);
	int result2 = ft_isalpha(a2);
	int result3 = ft_isalpha(a3);

	printf("Result for str1: %d\n", result1);
	printf("Result for str2: %d\n", result2);
	printf("Result for str3: %d\n", result3);

	return (0);
}*/
