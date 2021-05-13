/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 11:19:25 by agcolas           #+#    #+#             */
/*   Updated: 2021/05/13 12:49:57 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

int			nb_unsi(unsigned long nb)
{
	int	len;

	len = 0;
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

void		ft_putunbr(int n)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar('0' + nb % 10);
}

static void	pre_pre_process_unsigned(int *len, int *display,
		t_flags flags[4], int *save)
{
	if (flags[0].count == -1 && flags[1].count == -1 && flags[2].count == -1
	&& flags[3].count != -1 && flags[3].is_star == 1 && flags[3].negative == 1)
		flags[3].count = -1;
	if (flags[3].count != -1 && flags[2].count != -1 && flags[2].negative == 1 && flags[3].negative != 1)
	{
		flags[1].count = flags[2].count;
		flags[2].count = -1;
	}
	if (flags[3].count != -1 && flags[1].count != -1 && flags[3].negative == 1)
	{
		flags[3].count = -1;
		*save = -1;
	}
	if (flags[2].count != -1 && flags[2].negative == 1 && flags[3].count != -1)
	{
		flags[1].count = flags[2].count;
		flags[2].count = -1;
		flags[3].count = -1;
		*save = -1;
	}
	if (flags[2].count != -1 && flags[3].count != -1 && flags[3].negative == 1)
	{
		flags[3].count = -1;
		*save = -1;
	}
}

void		pre_process_unsigned(int *len, int *display,
		t_flags flags[4], int *save)
{
	pre_pre_process_unsigned(len, display, flags, save);
	if (flags[2].count != -1 && flags[3].count != -1)
	{
		if (flags[3].count > flags[2].count)
			flags[2].count = flags[3].count;
		else
		{
			flags[0].count = flags[2].count;
			flags[2].count = -1;
		}
	}
	if (flags[2].count != -1 && flags[2].negative == 1)
	{
		flags[1].count = flags[2].count;
		flags[2].count = -1;
	}
	if (flags[0].count != -1 && flags[3].count != -1 && flags[3].negative == 1)
	{
		flags[3].count = -1;
		*save = -1;
	}
}
