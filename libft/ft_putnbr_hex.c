/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 19:01:16 by coder             #+#    #+#             */
/*   Updated: 2022/09/30 20:21:38 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define HEX_LOWER "0123456789abcdef"
#define HEX_UPPER "0123456789ABCDEF"

static int	last_write(int n, char option)
{
	int	sub_print_len;

	sub_print_len = 0;
	if (0 <= n && n <= 9)
	{
		n = n + '0';
		sub_print_len += write(1, &n, 1);
	}
	else if (n >= 10 && option == 'l')
	{
		n = n + 'W';
		sub_print_len += write(1, &n, 1);
	}
	else if (n >= 10 && option == 'u')
	{
		n = n + '7';
		sub_print_len += write(1, &n, 1);
	}
	return (sub_print_len);
}

int	ft_putnbr_hex(long int n, char option)
{
	char			num;
	static int		print_len;

	num = 0;
	if (n < 0)
		n = n * -1;
	if (n >= 16)
	{
		if (option == 'l')
			num = HEX_LOWER[n % 16];
		else if (option == 'u')
			num = HEX_UPPER[n % 16];
		n = n / 16;
		ft_putnbr_hex(n, option);
		print_len += write(1, &num, 1);
	}
	else if (0 <= n && n <= 16)
		print_len += last_write(n, option);
	return (print_len);
}
