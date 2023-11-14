/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmousiva <nmousiva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:40:11 by nmousiva          #+#    #+#             */
/*   Updated: 2023/11/13 15:15:40 by nmousiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char s1, char *s2)
{
	int		i;
	char	*lastoccurrence;

	i = 0;
	lastoccurrence = NULL;
	while (s2[i] != '\0')
	{
		if (s1 == s2[i])
		{
			lastoccurrence = &s2[i];
		}
		i++;
	}
	return (lastoccurrence);
}

/*
int	main(void)
{
	char s1 = 'e';
	char s2[] = "abedge";
	char *result= ft_strrchr(s1, s2);


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
