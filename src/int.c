/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 11:19:25 by agcolas           #+#    #+#             */
/*   Updated: 2021/04/22 15:08:52 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

static int	nb_len(long nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		len++;
		nb *= -1;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

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

static void	pre_process(int len, int *display, t_flags flags[4])
{
	while (flags[0].count > len)
	{
		ft_putchar(' ');
		*display += 1;
		flags[0].count--;
	}
}

void		argument_int(int *display, va_list parameters, t_flags flags[4])
{
	int	len;
	int	nb;
	int if_neg;

	if_neg = 0;
	nb = va_arg(parameters, int);
	len = nb_len((long)nb);
	pre_process(len, display, flags);
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		if_neg = 1;
	}
	process(flags, len, if_neg, display);
	ft_putnbr(nb);
	while (flags[1].count > len)
	{
		ft_putchar(' ');
		*display += 1;
		flags[1].count--;
	}
	if (nb == 0)
		len++;
	*display += len;
}
