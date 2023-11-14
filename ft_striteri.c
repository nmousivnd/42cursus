/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmousiva <nmousiva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:48:35 by nmousiva          #+#    #+#             */
/*   Updated: 2023/11/13 15:14:41 by nmousiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	index;

	index = 0;
	while (*s != '\0')
	{
		f(index, &(*s));
		index++;
		s++;
	}
}

void	print_index(unsigned int index, char *c)
{
	printf("Character at index %u is %c\n ", index, *c);
}
/*
int	main(void)
{
	char str[4] = "abc";

	ft_striteri(str,&print_index);
	return (0);
}*/
