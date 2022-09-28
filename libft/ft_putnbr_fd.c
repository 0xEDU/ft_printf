/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 19:01:16 by coder             #+#    #+#             */
/*   Updated: 2022/09/28 05:40:36 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		check_min(int nb, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	char	num;

	num = 0;
	if (check_min(n, fd) == 0)
		return ;
	if (n >= 16)
	{
		num = n % 16 + '0';
		n = n / 16 ;
		ft_putnbr_fd(n, fd);
		write(fd, &num, 1);
	}
	else if (0 <= n && n <= 9)
	{
		n = n + '0';
		write(fd, &n, 1);
	}
	else if (n < 0)
	{
		n = n * (-1);
		write(fd, "-", 1);
		ft_putnbr_fd(n, fd);
	}
}

static int	check_min(int nb, int fd)
{
	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return (0);
	}
	else
		return (1);
}
