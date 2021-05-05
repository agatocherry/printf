/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 11:19:25 by agcolas           #+#    #+#             */
/*   Updated: 2021/05/03 12:31:39 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

static void	process(t_flags flags[4], int len, int if_neg, int *display)
{
	while (flags[2].count > len)
	{
		ft_putchar('0');
		*display += 1;
		flags[2].count--;
	}
	if (if_neg == 1 && flags[3].count != -1)
		len -= 1;
	while (flags[3].count > len)
	{
		ft_putchar('0');
		*display += 1;
		flags[3].count--;
	}
}

static void	some_correction(t_flags flags[4])
{
	if (flags[0].count != -1 && flags[0].negative == 1)
	{
		flags[1].count = flags[0].count;
		flags[0].count = -1;
	}
	if (flags[3].count != -1 && flags[3].is_star == 1 && flags[3].negative == 1)
	{
		flags[3].count = -1;
	}
	if (flags[2].count != -1 && flags[3].count != -1)
	{
		flags[0].count = flags[2].count;
		flags[2].count = -1;
	}
}

static void	pre_process(int len, int *display, t_flags flags[4], int if_neg)
{
	some_correction(flags);
	if (flags[1].count != -1 && flags[3].count != -1)
	{
		if (flags[3].count > len || flags[3].count == 0)
		{
			flags[1].count -= flags[3].count;
			flags[1].count += len;
			flags[1].count -= if_neg;
		}
	}
	while (flags[0].count > len && flags[0].count > (flags[3].count + if_neg))
	{
		ft_putchar(' ');
		*display += 1;
		flags[0].count--;
	}
}

static void	end_process(t_flags flags[4], int len, int no_put, int *display)
{
	while (flags[1].count > len)
	{
		ft_putchar(' ');
		*display += 1;
		flags[1].count--;
	}
	if (no_put == 0)
		*display += len;
}

void		argument_int(int *display, va_list parameters, t_flags flags[4])
{
	int	len;
	int	nb;
	int if_neg;
	int no_put;

	if_neg = 0;
	no_put = 0;
	nb = va_arg(parameters, int);
	len = ft_nblen((long)nb);
	if (nb < 0)
		if_neg = 1;
	if (flags[3].count == 0 && nb == 0)
		no_put = 1;
	if (no_put == 1 && flags[0].count != -1)
		len--;
	pre_process(len, display, flags, if_neg);
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	process(flags, len, if_neg, display);
	if (no_put == 0)
		ft_putunbr(nb);
	end_process(flags, len, no_put, display);
}
