/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 14:46:34 by agcolas           #+#    #+#             */
/*   Updated: 2021/04/23 11:40:24 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

static int	hexalen(long int nb)
{
	int	i;

	i = 0;
	while (nb > 0)
	{
		nb /= 16;
		i++;
	}
	return (i);
}

static void	puthexa(long int nb, char *base)
{
	if (nb > 16)
		puthexa(nb / 16, base);
	ft_putchar(base[nb % 16]);
}

static void	process(t_flags flags[4], int len, int *display)
{
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
	while (flags[3].count > len)
	{
		ft_putchar('0');
		*display += 1;
		flags[3].count--;
	}
}

void		argument_hexa(int *display, va_list parameters, t_flags flags[4])
{
	int			len;
	long int	pointer;

	pointer = va_arg(parameters, long int);
	len = hexalen(pointer);
	process(flags, len, display);
	puthexa(pointer, "0123456789abcdef");
	while (flags[1].count > len)
	{
		ft_putchar(' ');
		*display += 1;
		flags[1].count--;
	}
	*display += len;
}

void		argument_hexa_maj(int *display,
			va_list parameters, t_flags flags[4])
{
	int			len;
	long int	pointer;

	pointer = va_arg(parameters, long int);
	len = hexalen(pointer);
	process(flags, len, display);
	puthexa(pointer, "0123456789ABCDEF");
	while (flags[1].count > len)
	{
		ft_putchar(' ');
		*display += 1;
		flags[1].count--;
	}
	*display += len;
}
