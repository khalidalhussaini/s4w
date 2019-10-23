/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktabit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 15:39:46 by ktabit            #+#    #+#             */
/*   Updated: 2019/10/21 15:42:02 by ktabit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*st;

	if (s == NULL)
		return (NULL);
	i = 0;
	st = (void *)s;
	while (i < n)
	{
		if (st[i] == (unsigned char)c)
			return (&st[i]);
		i++;
	}
	return (NULL);
}
