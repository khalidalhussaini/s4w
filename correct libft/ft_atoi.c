/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktabit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 14:09:12 by ktabit            #+#    #+#             */
/*   Updated: 2019/10/23 00:37:16 by ktabit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == '\n' || c == '\f' || c == ' ' ||
			c == '\r' || c == '\v' || c == '\t')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int				i;
	int				n;
	int				signe;

	n = 0;
	i = 0;
	signe = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			signe = -1;
	}
	while (str[i] >= '0' && (str[i] <= '9') && str[i] != '\0')
	{
		if (((unsigned long)n > 9223372036854775807 / 10) ||
				(((unsigned long)n == 9223372036854775807 / 10) &&
				((unsigned long)n % 10) > 7))
			return ((signe > 0 ? -1 : 0));
		n = n * 10 + (*(str + (i++)) - '0');
	}
	return (n * signe);
}
