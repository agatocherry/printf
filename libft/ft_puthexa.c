/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 17:41:50 by agcolas           #+#    #+#             */
/*   Updated: 2021/04/06 15:26:08 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthexa(unsigned long n, int upper)
{
	int		i;
	char	hexa[17];

	ft_strlcpy(hexa, "0123456789abcdef", 17);
	i = 10;
	if (upper == 1)
	{
		while (hexa[i])
		{
			hexa[i] = ft_toupper(hexa[i]);
			i++;
		}
	}
	if (n >= 16)
	{
		ft_puthexa(n / 16, upper);
	}
	ft_putchar(hexa[n % 16]);
}
