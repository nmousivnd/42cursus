/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmousiva <nmousiva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:49:40 by nmousiva          #+#    #+#             */
/*   Updated: 2023/11/13 15:12:02 by nmousiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(char a)
{
	if (a <= '9' && a >= '0')
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{

	char a1 = '3';
	char a2 = 'k';
	char a3 = '\0';

	int result1 = ft_isdigit(a1);
	int result2 = ft_isdigit(a2);
	int result3 = ft_isdigit(a3);

	printf("Result for str1: %d\n", result1);
	printf("Result for str2: %d\n", result2);
	printf("Result for str3: %d\n", result3);

	return (0);
}*/
