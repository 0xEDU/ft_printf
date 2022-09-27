/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:38:00 by coder             #+#    #+#             */
/*   Updated: 2022/09/14 17:52:03 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*t;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	t = *lst;
	while (t)
	{
		if (!t->next)
		{
			t->next = new;
			return ;
		}
		t = t->next;
	}
}
