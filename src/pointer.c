/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 14:46:34 by agcolas           #+#    #+#             */
/*   Updated: 2021/05/13 12:45:54 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

static void	process(t_flags flags[4], int len, int *display, long int pointer)
{
	if (flags[3].count != -1 && flags[3].negative == 1)
		flags[3].count = -1;
	if (flags[3].count > 2 && flags[0].count != -1
	&& pointer != 0 && flags[0].space == 0)
	{
		flags[3].count -= 1;
		flags[0].count -= flags[3].count;
		while (flags[0].count > (len - 2))
		{
			ft_putchar(' ');
			*display += 1;
			flags[0].count--;
		}
	}
	if (flags[0].count != -1 && flags[0].negative == 1)
	{
		flags[1].count = flags[0].count;
		flags[0].count = -1;
	}
	while (flags[0].count > len)
	{
		ft_putchar(' ');
		*display += 1;
		flags[0].count--;
	}
	ft_putnstr("0x", 2);
	while (flags[2].count > len)
	{
		ft_putchar('0');
		*display += 1;
		flags[2].count--;
	}
	if (flags[3].count > 2 && pointer == 0)
		flags[3].count++;
	while (flags[3].count > 2)
	{
		ft_putchar('0');
		*display += 1;
		flags[3].count--;
	}
}

void		argument_pointer(int *display, va_list parameters, t_flags flags[4])
{
	int			len;
	long int	pointer;

	pointer = (long int)va_arg(parameters, long int);
	len = ft_hexalen(pointer) + 2;
	if ((void *)pointer == NULL && flags[3].count != 0)
		len++;
	process(flags, len, display, pointer);
	if ((void *)pointer != NULL)
		ft_puthexa_lower(pointer);
	else if (flags[3].count != 0)
		ft_putchar('0');
	while (flags[1].count > len)
	{
		ft_putchar(' ');
		*display += 1;
		flags[1].count--;
	}
	*display += len;
}
