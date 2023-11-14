/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmousiva <nmousiva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:20:14 by nmousiva          #+#    #+#             */
/*   Updated: 2023/11/13 15:13:27 by nmousiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		if (s1 == s2[i])
		{
			return (&s2[i]);
		}
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char s1 = 'e';
	char s2[] = "abedg";
	char *result= ft_strchr(s1, s2);


	if (result!= NULL)
	{
		printf("result of comparison: %c found at the position %ld\n",s1, result
			- s2);
	}
	else
	{
		printf("character '%c' not found in the string.\n" , s1);
	}
	return (0);
}*/
