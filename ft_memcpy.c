/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmousiva <nmousiva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:36:34 by nmousiva          #+#    #+#             */
/*   Updated: 2023/11/13 15:12:37 by nmousiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s = src;
	size_t				i;

	d = dst;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/*
int	main( void )
{
   char source[6] = "Navid";
   char dest[10] = "Mousivand";
   printf( "Before: %s\n", dest );
   memcpy(dest,source,9);
   printf("After: %s\n", dest);
   ft_memcpy( dest,source, 9);
   printf( "\nAfter:  %s\n", dest );

   return (0);
}*/
