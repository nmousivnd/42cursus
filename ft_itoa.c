/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmousiva <nmousiva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:57:56 by nmousiva          #+#    #+#             */
/*   Updated: 2023/11/13 17:49:13 by nmousiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		temp;
	int		digit;
	char	*result;
	int		i;

	temp = n;
	digit = 0;
	while (temp != 0 && ++digit)
		temp /= 10;
	result = (char *)malloc(digit + (n < 0) + 1);
	if (!result)
		return (NULL);
	if (n < 0)
		result[0] = '-';
	else if (n == 0)
		result[0] = '0' ;
	i = digit - 1;
	while (n != 0)
		result[i] = '0' + (n % 10);
	n /= 10;
	i--;
	result[digit] = '\0';
	return (result);
}
/*
int	main(void)
{
	int n = 0;
	char *a = ft_itoa(n);
	printf("result is %s", a);
	free(a);
	return (0);
}*/
