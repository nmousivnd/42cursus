/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmousiva <nmousiva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:09:37 by nmousiva          #+#    #+#             */
/*   Updated: 2023/11/13 15:15:47 by nmousiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		j;
	int		i;
	char	*result;

	j = 0;
	i = 0;
	result = (char *)malloc(strlen(s1) + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	while (s1[j] != '\0')
	{
		if (strchr(set, s1[j]) == NULL)
		{
			result[i] = s1[j];
			i++;
		}
		j++;
	}
	result[i] = '\0';
	return (result);
}
/*
int	main(void)
{
	char const *s1 = "Mousivandilainen";
	char const *set = "i";
	char *trimmed = ft_strtrim(s1, set);
	if (trimmed != NULL){
		printf("original: %s\n" ,s1);
		printf("Trimmed: %s\n", trimmed);
		free(trimmed);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}

	return (0);

}*/
