/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmousiva <nmousiva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:29:26 by nmousiva          #+#    #+#             */
/*   Updated: 2023/11/13 15:12:34 by nmousiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*d = s1;
	const unsigned char	*s = s2;
	size_t				i;

	i = 0;
	while (i < n)
	{
		if (d[i] != s[i])
		{
			return (d[i] - s[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
   char str1[] = "Navid";
   char str2[] = "NaviD";

   int result;
   result = ft_memcmp(str1,str2,5);

   if(result > 0){

	printf("str1 is bigger than str2");
	}
   else if (result < 0){
	printf("str2 is bigger than str1");
	}
   else {
	printf("str1 and str2 are identical ");
	}
   return (0);
}*/
