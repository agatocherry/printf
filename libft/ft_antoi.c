/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 13:09:05 by agcolas           #+#    #+#             */
/*   Updated: 2021/04/16 15:11:35 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_antoi(const char *nptr, int len)
{
	int		i;
	int		is_negative;
	long	nb;

	i = 0;
	nb = 0;
	if (nptr[i] == '-')
	{
		is_negative = 1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9' && i < len)
	{
		nb = (nb * 10) + (nptr[i] - '0');
		i++;
	}
	if (is_negative == 1)
		nb *= -1;
	return (nb);
}
