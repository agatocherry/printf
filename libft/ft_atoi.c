/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 13:09:05 by agcolas           #+#    #+#             */
/*   Updated: 2020/11/28 18:50:36 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f'
								|| c == '\r' || c == ' ')
		return (1);
	return (0);
}

int				ft_atoi(const char *nptr)
{
	int		is_negative;
	int		i;
	long	nb;

	i = 0;
	nb = 0;
	is_negative = 0;
	while (ft_isspace(nptr[i]) == 1)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			is_negative = 1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nb = (nb * 10) + (nptr[i] - '0');
		i++;
	}
	if (is_negative == 1)
		nb *= -1;
	return (nb);
}
