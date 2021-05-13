/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 14:46:34 by agcolas           #+#    #+#             */
/*   Updated: 2021/05/13 18:47:44 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

static void	process(t_flags flags[4], int len, int *display)
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
		*display += 1;
		flags[2].count--;
	}
	while (flags[0].count > len)
	{
		ft_putchar(' ');
		*display += 1;
		flags[0].count--;
	}
}

void		argument_char(int *display, va_list parameters, t_flags flags[4])
{
	int		len;
	char	c;

	len = 1;
	process(flags, len, display);
	c = va_arg(parameters, int);
	ft_putchar(c);
	while (flags[1].count > len)
	{
		ft_putchar(' ');
		*display += 1;
		flags[1].count--;
	}
	*display += len;
}
