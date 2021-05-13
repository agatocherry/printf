/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa_upper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 11:19:25 by agcolas           #+#    #+#             */
/*   Updated: 2021/05/13 19:19:35 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

static void	process(t_flags flags[4], int len, int *display, int nb)
{
	if (flags[3].count > 0 || (nb == 0 && flags[3].count != -1))
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

static void	pre_pre_process(int *len, t_flags flags[4], int *save)
{
	pre_process_unsigned(flags, save);
	if (flags[0].count != -1 && flags[3].count > 0 && flags[3].count < *len
	&& flags[0].negative == 0)
		flags[0].count -= (*len - flags[3].count);
	if (flags[0].count != -1 && flags[3].count > flags[0].count
	&& flags[3].count > *len)
	{
		flags[2].count = flags[3].count;
		flags[3].count = -1;
		flags[0].count = -1;
	}
	if (flags[0].count != -1 && flags[3].count > flags[0].count
	&& flags[3].count > *len)
	{
		flags[2].count = flags[3].count;
		flags[3].count = -1;
		flags[0].count = -1;
	}
	if (flags[0].count != -1 && flags[3].count < flags[0].count
	&& flags[3].count > *len && flags[0].negative == 1)
	{
		flags[2].count = flags[3].count;
		flags[1].count -= flags[2].count;
		flags[3].count = -1;
	}
}

static void	pre_process(int *len, t_flags flags[4], int *save)
{
	pre_pre_process(len, flags, save);
	if (flags[0].count != -1 && flags[3].count == flags[0].count
	&& flags[3].count > *len && flags[0].negative == 1)
	{
		flags[2].count = flags[3].count;
		flags[3].count = -1;
		flags[0].count = -1;
	}
	if (flags[0].count != -1 && flags[0].negative == 1 && flags[3].count > 0)
	{
		flags[1].count = flags[0].count;
		flags[0].count = -1;
		flags[3].count = -1;
		*save = -1;
	}
	else if (flags[0].count != -1 && flags[0].negative == 1)
	{
		flags[1].count = flags[0].count;
		flags[0].count = -1;
	}
}

static int	end_process(t_flags flags[4], int len, int save, int nb)
{
	int	display;

	display = 0;
	if (flags[1].count > save && save > 0 && len > save)
		flags[1].count -= (len - save);
	if (save > 0 || (nb == 0 && save != -1))
		while (flags[1].count > save)
		{
			ft_putchar(' ');
			display += 1;
			flags[1].count--;
		}
	else
		while (flags[1].count > len)
		{
			ft_putchar(' ');
			display += 1;
			flags[1].count--;
		}
	return (display);
}

void		argument_hexa_upper(int *display, va_list parameters,
			t_flags flags[4])
{
	int				len;
	unsigned int	nb;
	int				save;
	int				no_put;

	no_put = 0;
	save = flags[3].count;
	nb = va_arg(parameters, unsigned int);
	len = ft_hexalen(nb);
	if (nb == 0)
		len++;
	if (nb == 0 && flags[3].count == 0)
		no_put = 1;
	pre_process(&len, flags, &save);
	process(flags, len, display, nb);
	if (save != 0 || no_put == 0)
		ft_puthexa_upper(nb);
	if (no_put == 1)
		len--;
	*display += end_process(flags, len, save, nb);
	*display += len;
}
