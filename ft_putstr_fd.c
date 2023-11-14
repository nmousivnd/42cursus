/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmousiva <nmousiva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:53:57 by nmousiva          #+#    #+#             */
/*   Updated: 2023/11/13 15:13:03 by nmousiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	j;

	j = strlen(s);
	write(fd, s, j);
}
/*
int main ()
{
	char *s = "Navid Nismo";
	int fd = 1;
	ft_putstr_fd(s,fd);

	return (0);

}*/
