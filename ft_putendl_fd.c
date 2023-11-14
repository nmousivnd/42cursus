/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmousiva <nmousiva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:53:47 by nmousiva          #+#    #+#             */
/*   Updated: 2023/11/13 15:12:53 by nmousiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	j;

	j = strlen(s);
	write(fd, s, j);
	write(fd, "\n", 1);
}
/*
int main ()
{
	char *s = "Navid Nismo";
	int fd = 1;
	ft_putendl_fd(s,fd);

	return (0);

}*/
