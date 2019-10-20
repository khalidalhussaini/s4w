/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktabit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 15:35:31 by ktabit            #+#    #+#             */
/*   Updated: 2019/10/13 15:42:24 by ktabit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void *ft_memmove(void *dst, const void *src, int len)
{
	int	i;
	char	*csrc = (char *)src;
	char	*cdst = (char *)dst;
	char	temp[len];

	i = 0;
	while (i < len)
	{
		temp[i] = csrc[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		cdst[i] = temp[i];
		i++;
	}
	return (dst);
}

int main()
{
    char    str[] = "khaled alhussaini";
    char    dest[50];
    ft_memmove(str+4,str,8);
    printf("%s",str);
}
