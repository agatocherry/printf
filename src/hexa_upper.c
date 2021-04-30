/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa_upper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 14:46:34 by agcolas           #+#    #+#             */
/*   Updated: 2021/04/30 15:50:39 by agcolas          ###   ########.fr       */
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

static void	pre_process(int *len, int *display, t_flags flags[4])
{
	if (flags[2].count != -1 && flags[3].count != -1)
	{
		flags[0].count = flags[2].count;
		flags[2].count = -1;
	}
	if (flags[0].count != -1 && flags[3].count > 0 && flags[3].count < *len)
	{
		flags[0].count -= (*len - flags[3].count);
	}
	if (flags[0].count != -1 && flags[0].negative == 1)
	{
		flags[1].count = flags[0].count;
		flags[0].count = -1;
	}
}

static void	process(t_flags flags[4], int len, int *display, int no_put)
{
	if (flags[3].count != -1)
	{
		flags[2].count = flags[3].count;
		flags[3].count = -4;
		while (flags[0].count > flags[2].count)
		{
			ft_putchar(' ');
			*display += 1;
			flags[0].count--;
		}
	}
	else
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

static void	end_process(t_flags flags[4], int len, int *display, int save)
{
	if (flags[3].count == -4)
		while (flags[1].count > save)
		{
			ft_putchar(' ');
			*display += 1;
			flags[1].count--;
		}
	else
		while (flags[1].count > len)
		{
			ft_putchar(' ');
			*display += 1;
			flags[1].count--;
		}
}

void		argument_hexa_upper(int *display, va_list parameters, t_flags flags[4])
{
	int			len;
	long int	pointer;
	int				save;
	int				no_put;

	no_put = 0;
	save = flags[3].count;
	pointer = va_arg(parameters, long int);
	len = hexalen(pointer);
	if (pointer == 0)
		len++;
	if (pointer == 0 && flags[3].count == 0)
		no_put = 1;
	pre_process(&len, display, flags);
	process(flags, len, display, no_put);
	if (save != 0 || no_put == 0)
		puthexa(pointer, "0123456789ABCDEF");
	if (no_put == 1)
		len--;
	end_process(flags, len, display, save);
	*display += len;
}
