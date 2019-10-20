/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktabit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 14:59:30 by ktabit            #+#    #+#             */
/*   Updated: 2019/10/11 15:21:19 by ktabit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_memcpy(void *dest, const void *src, size_t n)
{
    char    *cdest;
    char    *csrc;
    size_t  i;

    *csrc = (char *)src;
    *dest = (char *)dest;
    i = 0;
    while (i < n)
    {
        cdest[i] = csrc[i];
        i++;
    }
}
