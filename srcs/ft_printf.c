/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:27:56 by coder             #+#    #+#             */
/*   Updated: 2022/09/27 21:02:36 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		i;

	i = 0;
	va_start(ap, fmt);
	while (*fmt)
	{
		if (*fmt == %)
		{
			fmt++;
			check_formats(ap, *fmt);
		}
		putchar(*fmt);
		fmt++;
	}
	va_end(ap);
	return (i);
}
