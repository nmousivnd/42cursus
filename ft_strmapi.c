/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmousiva <nmousiva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:02:28 by nmousiva          #+#    #+#             */
/*   Updated: 2023/11/13 15:15:13 by nmousiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*result;
	size_t	len;

	i = 0;
	result = (char *)malloc(strlen(s) + 1);
	len = strlen(s);
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[len] = '\0';
	return (result);
}

char	my_function(unsigned int index, char c)
{
	if (c >= 'a' && c <= 'y')
	{
		return (c + 1);
	}
	return (c);
}
/*
int	main(void)
{
	char str1[] = "abc";
	char* str2;
	str2 = ft_strmapi(str1, my_function);
	if(str2 != NULL){
		printf("result is: %s\n", str2);
		free(str2);
	}else{
		printf("memory allocation failed.\n");
	}
	return (0);
}*/
