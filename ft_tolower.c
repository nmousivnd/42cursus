/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmousiva <nmousiva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:31:31 by nmousiva          #+#    #+#             */
/*   Updated: 2023/11/13 15:15:58 by nmousiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_tolower(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
	{
		*c = *c + 32;
	}
}
/*
int	main(void)
{

	char c1 = 'B';
	char c2 = 'a';

	ft_tolower(&c1);
	ft_tolower(&c2);

	printf("%c\n", c1);
	printf("%c\n", c2);

	return (0);
}*/
