/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 19:01:16 by coder             #+#    #+#             */
/*   Updated: 2022/09/30 20:48:21 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		check_min(int nb, int fd);

int	ft_putnbr_fd(int n, int fd)
{
	char		num;
	static int	len;

	num = 0;
	len = 0;
	if (check_min(n, fd) == 0)
		return (11);
	if (n >= 10)
	{
		num = n % 10 + '0';
		n = n / 10;
		ft_putnbr_fd(n, fd);
		len += write(fd, &num, 1);
	}
	else if (0 <= n && n <= 9)
	{
		n = n + '0';
		len += write(fd, &n, 1);
	}
	else if (n < 0)
	{
		n = n * (-1);
		len += write(fd, "-", 1);
		ft_putnbr_fd(n, fd);
	}
	return (len);
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
