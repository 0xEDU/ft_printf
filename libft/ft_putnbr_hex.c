/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 19:01:16 by coder             #+#    #+#             */
/*   Updated: 2022/09/28 18:58:53 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define HEXL "0123456789abcdef"
#define HEXU "0123456789ABCDEF"

static int		check_min(int nb);

void	ft_putnbr_hex(int n, char option)
{
	char	num;

	num = 0;
	if (check_min(n) == 0)
		return ;
	if (n >= 10)
	{
		if (option == 'l')
			num = HEXL[n % 16];
		else if (option == 'u')
			num = HEXU[n % 16];
		n = n / 16;
		ft_putnbr_hex(n, option);
		write(1, &num, 1);
	}
	else if (0 <= n && n <= 9)
	{
		n = n + '0';
		write(1, &n, 1);
	}
	else if (n < 0)
		;
}

static int	check_min(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (0);
	}
	else
		return (1);
}
