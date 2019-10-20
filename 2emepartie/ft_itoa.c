/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktabit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 17:05:08 by ktabit            #+#    #+#             */
/*   Updated: 2019/10/14 13:49:53 by ktabit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*number;

	number = (char *)ft_memalloc(10);
	if (n >= 0 && number)
	{
		*--number = '0' + (n % 10);
		n /= 10;
		while (n != 0)
		{
			*--number = '0' + (n % 10);
			n /= 10;
		}
	}
	else if (number)
	{
		*--number = '0' - (n % 10);
		n /= 10;
		while (n != 0)
		{
			*--number = '0' - (n % 10);
			n /= 10;
		}
		*--number = '-';
	}
	return (ft_strdup(number));
}
