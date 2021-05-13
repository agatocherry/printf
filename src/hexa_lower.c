/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa_lower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 14:46:34 by agcolas           #+#    #+#             */
/*   Updated: 2021/05/13 17:18:51 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

static void	if_flag_is_neg(t_flags flags[4])
{
	if (flags[0].count != -1 && flags[0].is_star == 1 && flags[0].negative == 1)
	{
		flags[1].count = flags[0].count;
		flags[0].count = -1;
	}
	if (flags[2].count != -1 && flags[2].is_star == 1 && flags[2].negative == 1)
	{
		flags[1].count = flags[2].count;
		flags[2].count = -1;
	}
	if (flags[3].count != -1 && flags[3].negative == 1 && flags[0].is_star == 1)
		flags[3].count = -1;
}

static void	process(t_flags flags[4], int len, int *display)
{
	if ((flags[3].count > 0 && flags[2].count != -1) || (flags[2].count != -1 && flags[3].count == 0))
	{
		flags[0].count = flags[2].count;
		flags[2].count = -1;
	}
	if (flags[3].count > 0)
		flags[2].count = flags[3].count;
	if (flags[0].count != -1 && flags[2].count > len)
		flags[0].count -= (flags[2].count - len);
	if (flags[1].count != -1 && flags[2].count > len)
		flags[1].count -= (flags[2].count - len);
	while (flags[0].count > len)
	{
		ft_putchar(' ');
		*display += 1;
		flags[0].count--;
	}
	while (flags[2].count > len)
	{
		ft_putchar('0');
		*display += 1;
		flags[2].count--;
	}
}

void		argument_hexa_lower(int *display, va_list parameters,
			t_flags flags[4])
{
	int				len;
	unsigned int	n;

	n = (unsigned int)va_arg(parameters, unsigned int);
	len = ft_hexalen(n);
	if (len == 0 && flags[3].count != 0)
		len++;
	if_flag_is_neg(flags);
	process(flags, len, display);
	if (n != 0 || (flags[3].count != 0 && n == 0))
		ft_puthexa_lower(n);
	while (flags[1].count > len)
	{
		ft_putchar(' ');
		*display += 1;
		flags[1].count--;
	}
	if (n != 0 || (flags[3].count != 0 && n == 0))
		*display += len;
}
