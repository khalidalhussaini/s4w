/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktabit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 19:52:41 by ktabit            #+#    #+#             */
/*   Updated: 2019/10/11 19:56:27 by ktabit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list*elem))
{
	t_list	*cursor;

	cursor = lst;
	if (lst != NULL || f != NULL)
	{
		while (cursor)
		{
			(*f)(cursor);
			cursor = cursor->next;
		}
	}
}
