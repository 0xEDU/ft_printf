/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:27:56 by coder             #+#    #+#             */
/*   Updated: 2022/09/29 14:53:54 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_formats(va_list ap, const char fmt)
{
	int	len;

	len = 0;
	if (fmt == '%')
		len += ft_putchar('%');
	else if (fmt == 'c')
		len += ft_putchar((char) va_arg(ap, int));
	else if (fmt == 's')
		len += ft_putstr(va_arg(ap, char *));
	else if (fmt == 'd')
		len += ft_putstr(ft_itoa(va_arg(ap, int)));
	else if (fmt == 'i')
		len += ft_putstr(ft_itoa(va_arg(ap, int)));
	else if (fmt == 'u')
		len += ft_putstr(ft_itoa(va_arg(ap, unsigned int)));
	else if (fmt == 'p')
	{
		len += ft_putstr("0x");
		len += ft_putnbr_hex(va_arg(ap, long), 'l');
	}
	else if (fmt == 'x')
		len += ft_putnbr_hex(va_arg(ap, int), 'l');
	else if (fmt == 'X')
		len += ft_putnbr_hex(va_arg(ap, int), 'u');
	return (len);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		len;

	len = 0;
	va_start(ap, fmt);
	while (*fmt)
	{
		if (*fmt == '%')
		{
			fmt++;
			len += print_formats(ap, *fmt);
		}
		else
		{
			ft_putchar(*fmt);
			len++;
		}
		fmt++;
	}
	va_end(ap);
	return (len);
}
