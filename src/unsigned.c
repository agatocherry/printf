/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agcolas <agcolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 11:19:25 by agcolas           #+#    #+#             */
/*   Updated: 2021/04/30 16:20:33 by agcolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

static int	nb_len(unsigned long nb)
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

static void	process(t_flags flags[4], int len, int *display)
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

void		end_process(t_flags flags[4], int len, int *display, int save)
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

void		argument_unsigned(int *display, va_list parameters,
			t_flags flags[4])
{
	int				len;
	unsigned long	nb;
	int				save;
	int				no_put;

	no_put = 0;
	save = flags[3].count;
	nb = va_arg(parameters, unsigned int);
	len = nb_len(nb);
	if (nb == 0)
		len++;
	if (nb == 0 && flags[3].count == 0)
		no_put = 1;
	pre_process(&len, display, flags);
	process(flags, len, display);
	if (save != 0 || no_put == 0)
		ft_putuint(nb);
	if (no_put == 1)
		len--;
	end_process(flags, len, display, save);
	*display += len;
}
