/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libput.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:51:37 by coder             #+#    #+#             */
/*   Updated: 2022/10/01 02:41:25 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>

int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(long long n);
int		ft_putnbr_hex(unsigned long long n, char option);
size_t	ft_strlen(const char *s);
#endif
