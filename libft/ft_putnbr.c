/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 19:01:16 by coder             #+#    #+#             */
/*   Updated: 2022/10/01 01:14:50 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(long long n)
{
	char	num;
	int		len;

	num = 0;
	len = 0;
	if (n >= 10)
	{
		num = n % 10 + '0';
		n = n / 10;
		len += ft_putnbr_fd(n);
		len += write(1, &num, 1);
	}
	else if (0 <= n && n <= 9)
	{
		n = n + '0';
		len += write(1, &n, 1);
	}
	else if (n < 0)
	{
		n = n * (-1);
		len += write(1, "-", 1);
		len += ft_putnbr_fd(n);
	}
	return (len);
}