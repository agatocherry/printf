/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 13:50:49 by agcolas           #+#    #+#             */
/*   Updated: 2020/11/28 18:51:53 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbsize(long n)
{
	if (n < 0)
		return (1 + ft_nbsize(-n));
	else if (n / 10 > 0)
		return (1 + ft_nbsize(n / 10));
	else
		return (1);
}

char		*ft_itoa(int n)
{
	int		s;
	long	nb;
	char	*str;

	nb = n;
	s = ft_nbsize(nb);
	if (!(str = (char *)malloc((sizeof(char) * s) + 1)))
		return (NULL);
	str[s--] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		str[s] = '0' + (nb % 10);
		nb /= 10;
		s--;
	}
	return (str);
}
