/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmousiva <nmousiva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:12:04 by nmousiva          #+#    #+#             */
/*   Updated: 2023/11/13 15:13:00 by nmousiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	buffer[12];
	int		i;

	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	i = 0;
	while (n > 0)
	{
		buffer[i++] = '0' + n % 10;
		n /= 10;
	}
	while (i > 0)
	{
		write(fd, &buffer[--i], 1);
	}
}
/*
int main ()
{
	int m = 42;
	int fd = 1;
	ft_putnbr_fd(m,fd);

	return (0);

}*/
