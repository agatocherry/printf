/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percent.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 14:46:34 by agcolas           #+#    #+#             */
/*   Updated: 2021/04/16 18:21:35 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

static void	process(t_flags flags[4], int len)
{
	if (flags[2].negative == 1)
	{
		flags[1].count = flags[2].count;
		flags[2].count = -1;
	}
	if (flags[0].negative == 1)
	{
		flags[1].count = flags[0].count;
		flags[0].count = -1;
	}
	while (flags[2].count > len)
	{
		ft_putchar('0');
		flags[2].count--;
	}
	while (flags[0].count > len)
	{
		ft_putchar(' ');
		flags[0].count--;
	}
}

void		argument_percent(int *display, va_list parameters, t_flags flags[4])
{
	int	len;

	len = 1;
	process(flags, len);
	ft_putchar('%');
	while (flags[1].count > len)
	{
		ft_putchar(' ');
		flags[1].count--;
	}
}
