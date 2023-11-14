/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmousiva <nmousiva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:02:27 by nmousiva          #+#    #+#             */
/*   Updated: 2023/11/13 15:10:50 by nmousiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *b, size_t len)
{
	unsigned char	*p;
	size_t			i;

	p = b;
	i = 0;
	while (i < len)
	{
		p[i] = '0';
		i++;
	}
	return (b);
}
/*
int	main(void)
{

   char buffer[] = "C programming bzero function";
   printf("Before: %s\n", buffer);
   char *after = ft_bzero(buffer, 5);
   printf("After:  %s\n", after);

   return (0);
}*/
