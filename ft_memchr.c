/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmousiva <nmousiva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 09:51:52 by nmousiva          #+#    #+#             */
/*   Updated: 2023/11/13 17:30:54 by nmousiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*s = str;
	unsigned char		uc;
	size_t				i;

	uc = c;
	i = 0;
	while (i < n)
	{
		if (s[i] == uc)
		{
			return ((void *)(s + i));
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
   const char str[] = "Navid.Mousivand";
   const char ch = '.';
   char *ret;

   ret = ft_memchr(str, ch, strlen(str));

   if(ret != NULL)
   {
		printf("Character '%c' found at position: %ld\n", ch ,ret-str);
   }else{
   printf("Character '%c' not found in the string.\n",  ch);
   }

   return (0);
}*/
