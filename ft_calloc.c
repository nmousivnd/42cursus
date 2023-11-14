/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmousiva <nmousiva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:45:52 by nmousiva          #+#    #+#             */
/*   Updated: 2023/11/13 15:10:36 by nmousiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = count * size;
	ptr = malloc(total_size);
	if (ptr != NULL)
	{
		memset(ptr, 0, total_size);
	}
	return (ptr);
}
/*
int	main(void)
{
	size_t number_of_elements = 10;
	size_t element_size = sizeof(int);

	int *arr = (int *)ft_calloc(number_of_elements, element_size);

	if (arr != NULL) {
		// Access the allocated and zero-initialized memory here
	size_t i= 0;
	while (i < number_of_elements) {
			printf("%d ", arr[i]);
			i++;
			// Should print 0 0 0 0 0 0 0 0 0 0 0
		}
		free(arr); // Don't forget to free the allocated memory
	} else {
		printf("Memory allocation failed.\n");
	}

	return (0);
}*/
