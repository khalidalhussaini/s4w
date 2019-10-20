/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktabit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 15:15:45 by ktabit            #+#    #+#             */
/*   Updated: 2019/10/11 15:16:11 by ktabit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t i;
    
    i = 0;
    while (i < n)
    if (((char *)src)[i] == c)
    {
        ((char*)dest)[i] = ((char *)src)[i];
        return (&((char *)dest)[i + 1]);
    }
    else
    {
        ((char *)dest)[i] = ((char *)src)[i];
        i++;
    }
return (NULL);
}
